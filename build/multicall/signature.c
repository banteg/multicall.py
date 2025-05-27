#include <Python.h>

PyMODINIT_FUNC
PyInit_signature(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("847fc2cb349a9b029d5a__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_multicall___signature");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "847fc2cb349a9b029d5a__mypyc.init_multicall___signature");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_signature(); }
