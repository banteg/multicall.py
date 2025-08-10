import os
import platform
from pathlib import Path
from setuptools import find_packages, setup


if os.environ.get("MULTICALL_NOCOMPILE") or platform.python_implementation() != "CPython":
    # We only compile this library for CPython, other implementations will use it as normal interpreted python code
    ext_modules = []
else:
    try:
        from mypyc.build import mypycify
    except ImportError:
        ext_modules = []
    else:
        ext_modules = mypycify(
            [
                "multicall/call.py",
                "multicall/constants.py",
                "multicall/exceptions.py",
                "multicall/loggers.py",
                "multicall/multicall.py",
                "multicall/signature.py",
                # "multicall/utils.py",  # KeyError: <mypy.nodes.NameExpr object at 0x7fa1ced67f60>
                "--pretty",
                # "--strict",
                "--install-types",
                "--non-interactive",
                "--disable-error-code=import-not-found",
                "--disable-error-code=assignment",
                "--disable-error-code=truthy-function",
                "--disable-error-code=misc",
            ]
        )


try:
    import tomllib  # Python 3.11+
except ModuleNotFoundError:
    import tomli as tomllib  # Older Python


with Path("pyproject.toml").open("rb") as f:
    pyproject_data = tomllib.load(f)
    poetry_config = pyproject_data["tool"]["poetry"]


def poetry_dependencies_to_install_requires(poetry_deps):
    """
    Reads [tool.poetry.dependencies] in pyproject.toml and converts them
    into a list of valid PEP 508–compatible dependency strings for setuptools.
    """
    if not poetry_deps:
        return []

    install_requires = []
    for name, spec in poetry_deps.items():
        # Poetry often puts a 'python' key for the project's own Python requirement:
        #   [tool.poetry.dependencies]
        #   python = "^3.7"
        # We'll skip that, because it's not an actual package dep.
        if name.lower() == "python":
            continue

        if pep508_str := poetry_dep_to_pep508_string(name, spec):
            install_requires.append(pep508_str)

    return install_requires


def poetry_dep_to_pep508_string(package_name, spec):
    """
    Convert a Poetry-style dependency spec into a single string usable by
    setuptools (PEP 508). Handles "version", "markers", "extras", and "python".

    Examples of 'spec':
      ">=1.0"                  (just a string)
      { version=">=1.0,<2.0" }
      { version=">=1.0", markers="python_version < '3.9'", python=">=3.7,<3.10" }
      { extras=["some_extra"], version=">=2.0" }
    """
    if isinstance(spec, str):
        # e.g. ">=1.0" or "*"
        if spec.strip() == "*":
            # "*" means "any version," so just return the package name alone.
            return package_name
        return f"{package_name}{format_version_part(spec)}"

    if isinstance(spec, dict):
        return poetry_dep_dict_to_pep508_string(spec, package_name)
    # If it's unrecognized, just return the package name as a fallback:
    return str(package_name)


# TODO Rename this here and in `poetry_dep_to_pep508_string`
def poetry_dep_dict_to_pep508_string(spec, package_name):
    version_part = spec.get("version", "")
    markers_part = spec.get("markers", "")
    python_part = spec.get("python", "")
    extras = spec.get("extras", [])

    # If version == "*", treat it as no version
    if version_part.strip() == "*":
        version_part = ""

        # Turn extras into a "pkg[extra1,extra2]" form if there are any
    pkg_with_extras = f"{package_name}[{','.join(extras)}]" if extras else package_name
    # Build up a Python-version marker if "python" is given
    # e.g., python=">=3.7,<3.9" => "python_version >= '3.7' and python_version < '3.9'"
    py_marker = convert_python_spec_to_marker(python_part) if python_part else ""

    # Combine any existing spec markers with this python marker.
    # If both exist, we'll join them with " and ".
    combined_markers = combine_markers(markers_part, py_marker)

    # Build final requirement:
    #   pkg[extras]>1.0 ; (python_version >= '3.7' and <some_other_marker>)
    # If there's no combined_markers, we omit the semicolon part entirely.
    requirement = pkg_with_extras + format_version_part(version_part)
    if combined_markers:
        requirement += f" ; {combined_markers}"

    return requirement


def format_version_part(version_spec):
    """
    If version_spec starts with an operator, prepend a space
    so it looks like "mypkg >=1.0.0" instead of "mypkg>=1.0.0".
    """
    return f" {version_spec}" if version_spec else ""


def convert_python_spec_to_marker(python_spec):
    """
    Very basic converter for something like ">=3.7,<3.10"
    into "python_version >= '3.7' and python_version < '3.10'".
    It doesn't handle ^ or ~ operators. If needed, expand this logic.
    """
    if not python_spec:
        return ""

    parts = [p.strip() for p in python_spec.split(",")]
    marker_clauses = []
    for part in parts:
        for op in [">=", "<=", "==", "!=", ">", "<"]:
            if part.startswith(op):
                version_val = part[len(op) :].strip()
                marker_clauses.append(f"python_version {op} '{version_val}'")
                break
        else:
            # If we didn't break, we didn't find a known operator
            # fallback to "=="
            if part:
                marker_clauses.append(f"python_version == '{part}'")

    return " and ".join(marker_clauses)


def combine_markers(a, b):
    """
    Combine two marker expressions (a and b) with "and" if both are non-empty.
    If one is empty, return the other.
    """
    a = a.strip()
    b = b.strip()
    return f"({a}) and ({b})" if a and b else a or b


with open("readme.md", "r", encoding="utf-8") as readme:
    long_description = readme.read()


setup(
    name=poetry_config["name"].replace("-", "_"),
    version="0.14.1",
    description=poetry_config["description"],
    python_requires=">=3.10,<4",
    packages=find_packages(),
    package_data={"multicall": ["py.typed"]},
    include_package_data=True,
    long_description=long_description,
    long_description_content_type="text/markdown",
    install_requires=poetry_dependencies_to_install_requires(poetry_config["dependencies"]),
    ext_modules=ext_modules,
    zip_safe=False,
    classifiers=[
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.8",
        "Programming Language :: Python :: 3.9",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3.11",
        "Programming Language :: Python :: 3.12",
        "Programming Language :: Python :: 3.13",
        "Operating System :: OS Independent",
        "Topic :: Software Development :: Libraries",
    ],
)
