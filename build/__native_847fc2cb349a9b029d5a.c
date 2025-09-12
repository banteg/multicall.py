#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_847fc2cb349a9b029d5a.h"
#include "__native_internal_847fc2cb349a9b029d5a.h"

static int
call___Call_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyAsyncMethods call___Call_as_async = {
    .am_await = CPyDef_call___Call_____await__,
};
PyObject *CPyDef_call_____mypyc__Call_setup(PyObject *cpy_r_type);
PyObject *CPyDef_call___Call(PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin);

static PyObject *
call___Call_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call___Call) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_call_____mypyc__Call_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_call___Call_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
call___Call_traverse(multicall___call___CallObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_target);
    Py_VISIT(self->_returns);
    Py_VISIT(self->_block_id);
    Py_VISIT(self->_gas_limit);
    Py_VISIT(self->_state_override_code);
    Py_VISIT(self->_w3);
    Py_VISIT(self->_origin);
    Py_VISIT(self->_function);
    Py_VISIT(self->_args);
    Py_VISIT(self->_signature);
    return 0;
}

static int
call___Call_clear(multicall___call___CallObject *self)
{
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_returns);
    Py_CLEAR(self->_block_id);
    Py_CLEAR(self->_gas_limit);
    Py_CLEAR(self->_state_override_code);
    Py_CLEAR(self->_w3);
    Py_CLEAR(self->_origin);
    Py_CLEAR(self->_function);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_signature);
    return 0;
}

static void
call___Call_dealloc(multicall___call___CallObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, call___Call_dealloc)
    call___Call_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem call___Call_vtable[7];
static bool
CPyDef_call___Call_trait_vtable_setup(void)
{
    CPyVTableItem call___Call_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_call___Call_____init__,
        (CPyVTableItem)CPyDef_call___Call_____repr__,
        (CPyVTableItem)CPyDef_call___Call___data,
        (CPyVTableItem)CPyDef_call___Call___decode_output,
        (CPyVTableItem)CPyDef_call___Call_____call__,
        (CPyVTableItem)CPyDef_call___Call_____await__,
        (CPyVTableItem)CPyDef_call___Call___coroutine,
    };
    memcpy(call___Call_vtable, call___Call_vtable_scratch, sizeof(call___Call_vtable));
    return 1;
}

static PyObject *
call___Call_get_target(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_target(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_returns(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_returns(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_block_id(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_block_id(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_gas_limit(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_gas_limit(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_state_override_code(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_state_override_code(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_w3(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_w3(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_origin(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_origin(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_function(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_function(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_args(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_args(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_signature(multicall___call___CallObject *self, void *closure);
static int
call___Call_set_signature(multicall___call___CallObject *self, PyObject *value, void *closure);
static PyObject *
call___Call_get_data(multicall___call___CallObject *self, void *closure);

static PyGetSetDef call___Call_getseters[] = {
    {"target",
     (getter)call___Call_get_target, (setter)call___Call_set_target,
     NULL, NULL},
    {"returns",
     (getter)call___Call_get_returns, (setter)call___Call_set_returns,
     NULL, NULL},
    {"block_id",
     (getter)call___Call_get_block_id, (setter)call___Call_set_block_id,
     NULL, NULL},
    {"gas_limit",
     (getter)call___Call_get_gas_limit, (setter)call___Call_set_gas_limit,
     NULL, NULL},
    {"state_override_code",
     (getter)call___Call_get_state_override_code, (setter)call___Call_set_state_override_code,
     NULL, NULL},
    {"w3",
     (getter)call___Call_get_w3, (setter)call___Call_set_w3,
     NULL, NULL},
    {"origin",
     (getter)call___Call_get_origin, (setter)call___Call_set_origin,
     NULL, NULL},
    {"function",
     (getter)call___Call_get_function, (setter)call___Call_set_function,
     NULL, NULL},
    {"args",
     (getter)call___Call_get_args, (setter)call___Call_set_args,
     NULL, NULL},
    {"signature",
     (getter)call___Call_get_signature, (setter)call___Call_set_signature,
     NULL, NULL},
    {"data",
     (getter)call___Call_get_data,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef call___Call_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_call___Call_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, target, function, returns=None, block_id=None, gas_limit=None, state_override_code=None, _w3=None, origin=None)\n--\n\n")},
    {"__repr__",
     (PyCFunction)CPyPy_call___Call_____repr__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__repr__($self, /)\n--\n\n")},
    {"decode_output",
     (PyCFunction)CPyPy_call___Call___decode_output,
     METH_FASTCALL | METH_KEYWORDS | METH_STATIC, PyDoc_STR("decode_output(output, signature, returns=None, success=None)\n--\n\n")},
    {"__call__",
     (PyCFunction)CPyPy_call___Call_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, args=None, _w3=None, *, block_id=None)\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_call___Call_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__($self)\n--\n\n")},
    {"coroutine",
     (PyCFunction)CPyPy_call___Call___coroutine,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("coroutine($self, args=None, _w3=None, *, block_id=None)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_call___Call_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Call",
    .tp_new = call___Call_new,
    .tp_dealloc = (destructor)call___Call_dealloc,
    .tp_traverse = (traverseproc)call___Call_traverse,
    .tp_clear = (inquiry)call___Call_clear,
    .tp_getset = call___Call_getseters,
    .tp_methods = call___Call_methods,
    .tp_call = PyVectorcall_Call,
    .tp_init = call___Call_init,
    .tp_repr = CPyDef_call___Call_____repr__,
    .tp_as_async = &call___Call_as_async,
    .tp_basicsize = sizeof(multicall___call___CallObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("Call(target, function, returns=None, block_id=None, gas_limit=None, state_override_code=None, _w3=None, origin=None)\n--\n\n"),
};
static PyTypeObject *CPyType_call___Call_template = &CPyType_call___Call_template_;

PyObject *CPyDef_call_____mypyc__Call_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___call___CallObject *self;
    self = (multicall___call___CallObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call___Call_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_call___Call(PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin)
{
    PyObject *self = CPyDef_call_____mypyc__Call_setup((PyObject *)CPyType_call___Call);
    if (self == NULL)
        return NULL;
    char res = CPyDef_call___Call_____init__(self, cpy_r_target, cpy_r_function, cpy_r_returns, cpy_r_block_id, cpy_r_gas_limit, cpy_r_state_override_code, cpy_r__w3, cpy_r_origin);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
call___Call_get_target(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target);
    PyObject *retval = self->_target;
    return retval;
}

static int
call___Call_set_target(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'target' cannot be deleted");
        return -1;
    }
    if (self->_target != NULL) {
        CPy_DECREF(self->_target);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_target = tmp;
    return 0;
}

static PyObject *
call___Call_get_returns(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_returns == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'returns' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_returns);
    PyObject *retval = self->_returns;
    return retval;
}

static int
call___Call_set_returns(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'returns' cannot be deleted");
        return -1;
    }
    if (self->_returns != NULL) {
        CPy_DECREF(self->_returns);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL1;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL1: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_returns = tmp;
    return 0;
}

static PyObject *
call___Call_get_block_id(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_block_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'block_id' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_block_id);
    PyObject *retval = self->_block_id;
    return retval;
}

static int
call___Call_set_block_id(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'block_id' cannot be deleted");
        return -1;
    }
    if (self->_block_id != NULL) {
        CPy_DECREF(self->_block_id);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL2: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_block_id = tmp;
    return 0;
}

static PyObject *
call___Call_get_gas_limit(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_gas_limit == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gas_limit' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_gas_limit);
    PyObject *retval = self->_gas_limit;
    return retval;
}

static int
call___Call_set_gas_limit(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'gas_limit' cannot be deleted");
        return -1;
    }
    if (self->_gas_limit != NULL) {
        CPy_DECREF(self->_gas_limit);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL3: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_gas_limit = tmp;
    return 0;
}

static PyObject *
call___Call_get_state_override_code(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_state_override_code == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'state_override_code' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_state_override_code);
    PyObject *retval = self->_state_override_code;
    return retval;
}

static int
call___Call_set_state_override_code(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'state_override_code' cannot be deleted");
        return -1;
    }
    if (self->_state_override_code != NULL) {
        CPy_DECREF(self->_state_override_code);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_state_override_code = tmp;
    return 0;
}

static PyObject *
call___Call_get_w3(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_w3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'w3' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_w3);
    PyObject *retval = self->_w3;
    return retval;
}

static int
call___Call_set_w3(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'w3' cannot be deleted");
        return -1;
    }
    if (self->_w3 != NULL) {
        CPy_DECREF(self->_w3);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL5;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL5;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL5: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_w3 = tmp;
    return 0;
}

static PyObject *
call___Call_get_origin(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_origin == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'origin' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_origin);
    PyObject *retval = self->_origin;
    return retval;
}

static int
call___Call_set_origin(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'origin' cannot be deleted");
        return -1;
    }
    if (self->_origin != NULL) {
        CPy_DECREF(self->_origin);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL6: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_origin = tmp;
    return 0;
}

static PyObject *
call___Call_get_function(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_function == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'function' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_function);
    PyObject *retval = self->_function;
    return retval;
}

static int
call___Call_set_function(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'function' cannot be deleted");
        return -1;
    }
    if (self->_function != NULL) {
        CPy_DECREF(self->_function);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL7;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7;
    CPy_TypeError("union[object, str]", value); 
    tmp = NULL;
__LL7: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_function = tmp;
    return 0;
}

static PyObject *
call___Call_get_args(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_args == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'args' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF(self->_args);
    PyObject *retval = self->_args;
    return retval;
}

static int
call___Call_set_args(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'args' cannot be deleted");
        return -1;
    }
    if (self->_args != NULL) {
        CPy_DECREF(self->_args);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL8;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL8;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL8: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_args = tmp;
    return 0;
}

static PyObject *
call___Call_get_signature(multicall___call___CallObject *self, void *closure)
{
    if (unlikely(self->_signature == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'signature' of 'Call' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->_signature);
    PyObject *retval = self->_signature;
    return retval;
}

static int
call___Call_set_signature(multicall___call___CallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Call' object attribute 'signature' cannot be deleted");
        return -1;
    }
    if (self->_signature != NULL) {
        CPy_DECREF_NO_IMM(self->_signature);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_signature___Signature))
        tmp = value;
    else {
        CPy_TypeError("multicall.signature.Signature", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->_signature = tmp;
    return 0;
}

static PyObject *
call___Call_get_data(multicall___call___CallObject *self, void *closure)
{
    return CPyDef_call___Call___data((PyObject *) self);
}

PyObject *CPyDef_call_____mypyc__decode_output_Call_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef_call___decode_output_Call_env(void);

static PyObject *
call___decode_output_Call_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call___decode_output_Call_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_call_____mypyc__decode_output_Call_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
call___decode_output_Call_env_traverse(multicall___call___decode_output_Call_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_success);
    Py_VISIT(self->_output);
    Py_VISIT(self->_signature);
    Py_VISIT(self->_returns);
    Py_VISIT(self->_apply_handler);
    return 0;
}

static int
call___decode_output_Call_env_clear(multicall___call___decode_output_Call_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_success);
    Py_CLEAR(self->_output);
    Py_CLEAR(self->_signature);
    Py_CLEAR(self->_returns);
    Py_CLEAR(self->_apply_handler);
    return 0;
}

static void
call___decode_output_Call_env_dealloc(multicall___call___decode_output_Call_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (call___decode_output_Call_env_free_instance == NULL) {
        call___decode_output_Call_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_success);
        Py_CLEAR(self->_output);
        Py_CLEAR(self->_signature);
        Py_CLEAR(self->_returns);
        Py_CLEAR(self->_apply_handler);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, call___decode_output_Call_env_dealloc)
    call___decode_output_Call_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem call___decode_output_Call_env_vtable[1];
static bool
CPyDef_call___decode_output_Call_env_trait_vtable_setup(void)
{
    CPyVTableItem call___decode_output_Call_env_vtable_scratch[] = {
        NULL
    };
    memcpy(call___decode_output_Call_env_vtable, call___decode_output_Call_env_vtable_scratch, sizeof(call___decode_output_Call_env_vtable));
    return 1;
}

static PyMethodDef call___decode_output_Call_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_call___decode_output_Call_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "decode_output_Call_env",
    .tp_new = call___decode_output_Call_env_new,
    .tp_dealloc = (destructor)call___decode_output_Call_env_dealloc,
    .tp_traverse = (traverseproc)call___decode_output_Call_env_traverse,
    .tp_clear = (inquiry)call___decode_output_Call_env_clear,
    .tp_methods = call___decode_output_Call_env_methods,
    .tp_basicsize = sizeof(multicall___call___decode_output_Call_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("decode_output_Call_env()\n--\n\n"),
};
static PyTypeObject *CPyType_call___decode_output_Call_env_template = &CPyType_call___decode_output_Call_env_template_;

PyObject *CPyDef_call_____mypyc__decode_output_Call_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___call___decode_output_Call_envObject *self;
    if (call___decode_output_Call_env_free_instance != NULL) {
        self = call___decode_output_Call_env_free_instance;
        call___decode_output_Call_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (multicall___call___decode_output_Call_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call___decode_output_Call_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_call___decode_output_Call_env(void)
{
    PyObject *self = CPyDef_call_____mypyc__decode_output_Call_env_setup((PyObject *)CPyType_call___decode_output_Call_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__call_____mypyc_lambda__0_decode_output_Call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_call_____mypyc___3__mypyc_lambda__0_decode_output_Call_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj(void);

static PyObject *
call_____mypyc_lambda__0_decode_output_Call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call_____mypyc_lambda__0_decode_output_Call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_call_____mypyc___3__mypyc_lambda__0_decode_output_Call_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
call_____mypyc_lambda__0_decode_output_Call_obj_traverse(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
call_____mypyc_lambda__0_decode_output_Call_obj_clear(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
call_____mypyc_lambda__0_decode_output_Call_obj_dealloc(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (call_____mypyc_lambda__0_decode_output_Call_obj_free_instance == NULL) {
        call_____mypyc_lambda__0_decode_output_Call_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, call_____mypyc_lambda__0_decode_output_Call_obj_dealloc)
    call_____mypyc_lambda__0_decode_output_Call_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem call_____mypyc_lambda__0_decode_output_Call_obj_vtable[2];
static bool
CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_trait_vtable_setup(void)
{
    CPyVTableItem call_____mypyc_lambda__0_decode_output_Call_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____call__,
        (CPyVTableItem)CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__,
    };
    memcpy(call_____mypyc_lambda__0_decode_output_Call_obj_vtable, call_____mypyc_lambda__0_decode_output_Call_obj_vtable_scratch, sizeof(call_____mypyc_lambda__0_decode_output_Call_obj_vtable));
    return 1;
}

static PyObject *
call_____mypyc_lambda__0_decode_output_Call_obj_get___3_mypyc_env__(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self, void *closure);
static int
call_____mypyc_lambda__0_decode_output_Call_obj_set___3_mypyc_env__(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self, PyObject *value, void *closure);

static PyGetSetDef call_____mypyc_lambda__0_decode_output_Call_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)call_____mypyc_lambda__0_decode_output_Call_obj_get___3_mypyc_env__, (setter)call_____mypyc_lambda__0_decode_output_Call_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef call_____mypyc_lambda__0_decode_output_Call_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($handler, value)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_call_____mypyc_lambda__0_decode_output_Call_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_decode_output_Call_obj",
    .tp_new = call_____mypyc_lambda__0_decode_output_Call_obj_new,
    .tp_dealloc = (destructor)call_____mypyc_lambda__0_decode_output_Call_obj_dealloc,
    .tp_traverse = (traverseproc)call_____mypyc_lambda__0_decode_output_Call_obj_traverse,
    .tp_clear = (inquiry)call_____mypyc_lambda__0_decode_output_Call_obj_clear,
    .tp_getset = call_____mypyc_lambda__0_decode_output_Call_obj_getseters,
    .tp_methods = call_____mypyc_lambda__0_decode_output_Call_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__call_____mypyc_lambda__0_decode_output_Call_obj,
    .tp_basicsize = sizeof(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject),
    .tp_vectorcall_offset = offsetof(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("__mypyc_lambda__0_decode_output_Call_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_call_____mypyc_lambda__0_decode_output_Call_obj_template = &CPyType_call_____mypyc_lambda__0_decode_output_Call_obj_template_;

PyObject *CPyDef_call_____mypyc___3__mypyc_lambda__0_decode_output_Call_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self;
    if (call_____mypyc_lambda__0_decode_output_Call_obj_free_instance != NULL) {
        self = call_____mypyc_lambda__0_decode_output_Call_obj_free_instance;
        call_____mypyc_lambda__0_decode_output_Call_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call_____mypyc_lambda__0_decode_output_Call_obj_vtable;
    self->vectorcall = CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj(void)
{
    PyObject *self = CPyDef_call_____mypyc___3__mypyc_lambda__0_decode_output_Call_obj_setup((PyObject *)CPyType_call_____mypyc_lambda__0_decode_output_Call_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
call_____mypyc_lambda__0_decode_output_Call_obj_get___3_mypyc_env__(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of '__mypyc_lambda__0_decode_output_Call_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
call_____mypyc_lambda__0_decode_output_Call_obj_set___3_mypyc_env__(multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'__mypyc_lambda__0_decode_output_Call_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_call___decode_output_Call_env))
        tmp = value;
    else {
        CPy_TypeError("multicall.call.decode_output_Call_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *CPyDunder___get__call_____mypyc_lambda__1_decode_output_Call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__(self, instance, owner);
}
PyObject *CPyDef_call_____mypyc___3__mypyc_lambda__1_decode_output_Call_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj(void);

static PyObject *
call_____mypyc_lambda__1_decode_output_Call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call_____mypyc_lambda__1_decode_output_Call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_call_____mypyc___3__mypyc_lambda__1_decode_output_Call_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
call_____mypyc_lambda__1_decode_output_Call_obj_traverse(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
call_____mypyc_lambda__1_decode_output_Call_obj_clear(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
call_____mypyc_lambda__1_decode_output_Call_obj_dealloc(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (call_____mypyc_lambda__1_decode_output_Call_obj_free_instance == NULL) {
        call_____mypyc_lambda__1_decode_output_Call_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, call_____mypyc_lambda__1_decode_output_Call_obj_dealloc)
    call_____mypyc_lambda__1_decode_output_Call_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem call_____mypyc_lambda__1_decode_output_Call_obj_vtable[2];
static bool
CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_trait_vtable_setup(void)
{
    CPyVTableItem call_____mypyc_lambda__1_decode_output_Call_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____call__,
        (CPyVTableItem)CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__,
    };
    memcpy(call_____mypyc_lambda__1_decode_output_Call_obj_vtable, call_____mypyc_lambda__1_decode_output_Call_obj_vtable_scratch, sizeof(call_____mypyc_lambda__1_decode_output_Call_obj_vtable));
    return 1;
}

static PyObject *
call_____mypyc_lambda__1_decode_output_Call_obj_get___3_mypyc_env__(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self, void *closure);
static int
call_____mypyc_lambda__1_decode_output_Call_obj_set___3_mypyc_env__(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self, PyObject *value, void *closure);

static PyGetSetDef call_____mypyc_lambda__1_decode_output_Call_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)call_____mypyc_lambda__1_decode_output_Call_obj_get___3_mypyc_env__, (setter)call_____mypyc_lambda__1_decode_output_Call_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef call_____mypyc_lambda__1_decode_output_Call_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($handler, value)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_call_____mypyc_lambda__1_decode_output_Call_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_decode_output_Call_obj",
    .tp_new = call_____mypyc_lambda__1_decode_output_Call_obj_new,
    .tp_dealloc = (destructor)call_____mypyc_lambda__1_decode_output_Call_obj_dealloc,
    .tp_traverse = (traverseproc)call_____mypyc_lambda__1_decode_output_Call_obj_traverse,
    .tp_clear = (inquiry)call_____mypyc_lambda__1_decode_output_Call_obj_clear,
    .tp_getset = call_____mypyc_lambda__1_decode_output_Call_obj_getseters,
    .tp_methods = call_____mypyc_lambda__1_decode_output_Call_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__call_____mypyc_lambda__1_decode_output_Call_obj,
    .tp_basicsize = sizeof(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject),
    .tp_vectorcall_offset = offsetof(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("__mypyc_lambda__1_decode_output_Call_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_call_____mypyc_lambda__1_decode_output_Call_obj_template = &CPyType_call_____mypyc_lambda__1_decode_output_Call_obj_template_;

PyObject *CPyDef_call_____mypyc___3__mypyc_lambda__1_decode_output_Call_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self;
    if (call_____mypyc_lambda__1_decode_output_Call_obj_free_instance != NULL) {
        self = call_____mypyc_lambda__1_decode_output_Call_obj_free_instance;
        call_____mypyc_lambda__1_decode_output_Call_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call_____mypyc_lambda__1_decode_output_Call_obj_vtable;
    self->vectorcall = CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj(void)
{
    PyObject *self = CPyDef_call_____mypyc___3__mypyc_lambda__1_decode_output_Call_obj_setup((PyObject *)CPyType_call_____mypyc_lambda__1_decode_output_Call_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
call_____mypyc_lambda__1_decode_output_Call_obj_get___3_mypyc_env__(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of '__mypyc_lambda__1_decode_output_Call_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
call_____mypyc_lambda__1_decode_output_Call_obj_set___3_mypyc_env__(multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'__mypyc_lambda__1_decode_output_Call_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_call___decode_output_Call_env))
        tmp = value;
    else {
        CPy_TypeError("multicall.call.decode_output_Call_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyAsyncMethods call___coroutine_Call_gen_as_async = {
    .am_await = CPyDef_call___coroutine_Call_gen_____await__,
};
PyObject *CPyDef_call_____mypyc__coroutine_Call_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_call___coroutine_Call_gen(void);

static PyObject *
call___coroutine_Call_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call___coroutine_Call_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_call_____mypyc__coroutine_Call_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
call___coroutine_Call_gen_traverse(multicall___call___coroutine_Call_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__args);
    Py_VISIT(self->___mypyc_generator_attribute___w3);
    Py_VISIT(self->___mypyc_generator_attribute__block_id);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4.f0);
    Py_VISIT(self->___mypyc_temp__4.f1);
    Py_VISIT(self->___mypyc_temp__4.f2);
    Py_VISIT(self->___mypyc_temp__5);
    Py_VISIT(self->___mypyc_temp__6.f0);
    Py_VISIT(self->___mypyc_temp__6.f1);
    Py_VISIT(self->___mypyc_temp__6.f2);
    Py_VISIT(self->___mypyc_generator_attribute__output);
    Py_VISIT(self->___mypyc_temp__7.f0);
    Py_VISIT(self->___mypyc_temp__7.f1);
    Py_VISIT(self->___mypyc_temp__7.f2);
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9.f0);
    Py_VISIT(self->___mypyc_temp__9.f1);
    Py_VISIT(self->___mypyc_temp__9.f2);
    Py_VISIT(self->___mypyc_temp__10);
    Py_VISIT(self->___mypyc_temp__11.f0);
    Py_VISIT(self->___mypyc_temp__11.f1);
    Py_VISIT(self->___mypyc_temp__11.f2);
    Py_VISIT(self->___mypyc_generator_attribute__result);
    return 0;
}

static int
call___coroutine_Call_gen_clear(multicall___call___coroutine_Call_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__args);
    Py_CLEAR(self->___mypyc_generator_attribute___w3);
    Py_CLEAR(self->___mypyc_generator_attribute__block_id);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4.f0);
    Py_CLEAR(self->___mypyc_temp__4.f1);
    Py_CLEAR(self->___mypyc_temp__4.f2);
    Py_CLEAR(self->___mypyc_temp__5);
    Py_CLEAR(self->___mypyc_temp__6.f0);
    Py_CLEAR(self->___mypyc_temp__6.f1);
    Py_CLEAR(self->___mypyc_temp__6.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__output);
    Py_CLEAR(self->___mypyc_temp__7.f0);
    Py_CLEAR(self->___mypyc_temp__7.f1);
    Py_CLEAR(self->___mypyc_temp__7.f2);
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9.f0);
    Py_CLEAR(self->___mypyc_temp__9.f1);
    Py_CLEAR(self->___mypyc_temp__9.f2);
    Py_CLEAR(self->___mypyc_temp__10);
    Py_CLEAR(self->___mypyc_temp__11.f0);
    Py_CLEAR(self->___mypyc_temp__11.f1);
    Py_CLEAR(self->___mypyc_temp__11.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__result);
    return 0;
}

static void
call___coroutine_Call_gen_dealloc(multicall___call___coroutine_Call_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (call___coroutine_Call_gen_free_instance == NULL) {
        call___coroutine_Call_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__args);
        Py_CLEAR(self->___mypyc_generator_attribute___w3);
        Py_CLEAR(self->___mypyc_generator_attribute__block_id);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__0);
        Py_CLEAR(self->___mypyc_temp__1);
        self->___mypyc_temp__2 = 2;
        Py_CLEAR(self->___mypyc_temp__3);
        Py_CLEAR(self->___mypyc_temp__4.f0);
        Py_CLEAR(self->___mypyc_temp__4.f1);
        Py_CLEAR(self->___mypyc_temp__4.f2);
        Py_CLEAR(self->___mypyc_temp__5);
        Py_CLEAR(self->___mypyc_temp__6.f0);
        Py_CLEAR(self->___mypyc_temp__6.f1);
        Py_CLEAR(self->___mypyc_temp__6.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__output);
        Py_CLEAR(self->___mypyc_temp__7.f0);
        Py_CLEAR(self->___mypyc_temp__7.f1);
        Py_CLEAR(self->___mypyc_temp__7.f2);
        Py_CLEAR(self->___mypyc_temp__8);
        Py_CLEAR(self->___mypyc_temp__9.f0);
        Py_CLEAR(self->___mypyc_temp__9.f1);
        Py_CLEAR(self->___mypyc_temp__9.f2);
        Py_CLEAR(self->___mypyc_temp__10);
        Py_CLEAR(self->___mypyc_temp__11.f0);
        Py_CLEAR(self->___mypyc_temp__11.f1);
        Py_CLEAR(self->___mypyc_temp__11.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__result);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, call___coroutine_Call_gen_dealloc)
    call___coroutine_Call_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem call___coroutine_Call_gen_vtable[7];
static bool
CPyDef_call___coroutine_Call_gen_trait_vtable_setup(void)
{
    CPyVTableItem call___coroutine_Call_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen_____next__,
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen___send,
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen_____iter__,
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen___throw,
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen___close,
        (CPyVTableItem)CPyDef_call___coroutine_Call_gen_____await__,
    };
    memcpy(call___coroutine_Call_gen_vtable, call___coroutine_Call_gen_vtable_scratch, sizeof(call___coroutine_Call_gen_vtable));
    return 1;
}

static PyMethodDef call___coroutine_Call_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_call___coroutine_Call_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_call___coroutine_Call_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_call___coroutine_Call_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_call___coroutine_Call_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_call___coroutine_Call_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_call___coroutine_Call_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_call___coroutine_Call_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "coroutine_Call_gen",
    .tp_new = call___coroutine_Call_gen_new,
    .tp_dealloc = (destructor)call___coroutine_Call_gen_dealloc,
    .tp_traverse = (traverseproc)call___coroutine_Call_gen_traverse,
    .tp_clear = (inquiry)call___coroutine_Call_gen_clear,
    .tp_methods = call___coroutine_Call_gen_methods,
    .tp_iter = CPyDef_call___coroutine_Call_gen_____iter__,
    .tp_iternext = CPyDef_call___coroutine_Call_gen_____next__,
    .tp_as_async = &call___coroutine_Call_gen_as_async,
    .tp_basicsize = sizeof(multicall___call___coroutine_Call_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("coroutine_Call_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_call___coroutine_Call_gen_template = &CPyType_call___coroutine_Call_gen_template_;

PyObject *CPyDef_call_____mypyc__coroutine_Call_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___call___coroutine_Call_genObject *self;
    if (call___coroutine_Call_gen_free_instance != NULL) {
        self = call___coroutine_Call_gen_free_instance;
        call___coroutine_Call_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (multicall___call___coroutine_Call_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call___coroutine_Call_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__2 = 2;
    self->___mypyc_temp__4 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__6 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__7 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__9 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__11 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_call___coroutine_Call_gen(void)
{
    PyObject *self = CPyDef_call_____mypyc__coroutine_Call_gen_setup((PyObject *)CPyType_call___coroutine_Call_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef callmodule_methods[] = {
    {"prep_args", (PyCFunction)CPyPy_call___prep_args, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("prep_args(target, signature, args, block_id, origin, gas_limit, state_override_code)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_multicall___call(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___call__internal, "__name__");
    CPyStatic_call___globals = PyModule_GetDict(CPyModule_multicall___call__internal);
    if (unlikely(CPyStatic_call___globals == NULL))
        goto fail;
    CPyType_call___decode_output_Call_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_call___decode_output_Call_env_template, NULL, modname);
    if (unlikely(!CPyType_call___decode_output_Call_env))
        goto fail;
    CPyType_call_____mypyc_lambda__0_decode_output_Call_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_call_____mypyc_lambda__0_decode_output_Call_obj_template, NULL, modname);
    if (unlikely(!CPyType_call_____mypyc_lambda__0_decode_output_Call_obj))
        goto fail;
    CPyType_call_____mypyc_lambda__1_decode_output_Call_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_call_____mypyc_lambda__1_decode_output_Call_obj_template, NULL, modname);
    if (unlikely(!CPyType_call_____mypyc_lambda__1_decode_output_Call_obj))
        goto fail;
    CPyType_call___coroutine_Call_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_call___coroutine_Call_gen_template, NULL, modname);
    if (unlikely(!CPyType_call___coroutine_Call_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_call_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_multicall___call__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_call___logger);
    CPyStatic_call___logger = NULL;
    CPy_XDECREF(CPyStatic_call___log_debug);
    CPyStatic_call___log_debug = NULL;
    Py_CLEAR(CPyType_call___Call);
    Py_CLEAR(CPyType_call___decode_output_Call_env);
    Py_CLEAR(CPyType_call_____mypyc_lambda__0_decode_output_Call_obj);
    Py_CLEAR(CPyType_call_____mypyc_lambda__1_decode_output_Call_obj);
    Py_CLEAR(CPyType_call___coroutine_Call_gen);
    return -1;
}
static struct PyModuleDef callmodule = {
    PyModuleDef_HEAD_INIT,
    "multicall.call",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    callmodule_methods,
    NULL,
};

PyObject *CPyInit_multicall___call(void)
{
    if (CPyModule_multicall___call__internal) {
        Py_INCREF(CPyModule_multicall___call__internal);
        return CPyModule_multicall___call__internal;
    }
    CPyModule_multicall___call__internal = PyModule_Create(&callmodule);
    if (unlikely(CPyModule_multicall___call__internal == NULL))
        goto fail;
    if (CPyExec_multicall___call(CPyModule_multicall___call__internal) != 0)
        goto fail;
    return CPyModule_multicall___call__internal;
    fail:
    return NULL;
}

char CPyDef_call___Call_____init__(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    if (cpy_r_returns != NULL) goto CPyL39;
    cpy_r_r0 = Py_None;
    cpy_r_returns = cpy_r_r0;
CPyL2: ;
    if (cpy_r_block_id != NULL) goto CPyL40;
    cpy_r_r1 = Py_None;
    cpy_r_block_id = cpy_r_r1;
CPyL4: ;
    if (cpy_r_gas_limit != NULL) goto CPyL41;
    cpy_r_r2 = Py_None;
    cpy_r_gas_limit = cpy_r_r2;
CPyL6: ;
    if (cpy_r_state_override_code != NULL) goto CPyL42;
    cpy_r_r3 = Py_None;
    cpy_r_state_override_code = cpy_r_r3;
CPyL8: ;
    if (cpy_r__w3 != NULL) goto CPyL43;
    cpy_r_r4 = Py_None;
    cpy_r__w3 = cpy_r_r4;
CPyL10: ;
    if (cpy_r_origin != NULL) goto CPyL44;
    cpy_r_r5 = Py_None;
    cpy_r_origin = cpy_r_r5;
CPyL12: ;
    cpy_r_r6 = CPyStatic_call___globals;
    cpy_r_r7 = CPyStatics[3]; /* 'to_checksum_address' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 56, CPyStatic_call___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_target};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 56, CPyStatic_call___globals);
        goto CPyL45;
    }
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 56, CPyStatic_call___globals, "str", cpy_r_r11);
        goto CPyL45;
    }
    ((multicall___call___CallObject *)cpy_r_self)->_target = cpy_r_r12;
    ((multicall___call___CallObject *)cpy_r_self)->_returns = cpy_r_returns;
    ((multicall___call___CallObject *)cpy_r_self)->_block_id = cpy_r_block_id;
    ((multicall___call___CallObject *)cpy_r_self)->_gas_limit = cpy_r_gas_limit;
    ((multicall___call___CallObject *)cpy_r_self)->_state_override_code = cpy_r_state_override_code;
    ((multicall___call___CallObject *)cpy_r_self)->_w3 = cpy_r__w3;
    cpy_r_r13 = PyObject_IsTrue(cpy_r_origin);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 54, CPyStatic_call___globals);
        goto CPyL46;
    }
    cpy_r_r15 = cpy_r_r13;
    if (!cpy_r_r15) goto CPyL47;
    if (PyUnicode_Check(cpy_r_origin))
        cpy_r_r16 = cpy_r_origin;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL9;
    if (PyBytes_Check(cpy_r_origin) || PyByteArray_Check(cpy_r_origin))
        cpy_r_r16 = cpy_r_origin;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL9;
    CPy_TypeErrorTraceback("multicall/call.py", "__init__", 62, CPyStatic_call___globals, "union[str, bytes]", cpy_r_origin);
    goto CPyL38;
__LL9: ;
    cpy_r_r17 = CPyStatic_call___globals;
    cpy_r_r18 = CPyStatics[3]; /* 'to_checksum_address' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 62, CPyStatic_call___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_r16};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 62, CPyStatic_call___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r16);
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 62, CPyStatic_call___globals, "str", cpy_r_r22);
        goto CPyL38;
    }
    cpy_r_r24 = cpy_r_r23;
    goto CPyL23;
CPyL22: ;
    cpy_r_r25 = Py_None;
    cpy_r_r24 = cpy_r_r25;
CPyL23: ;
    ((multicall___call___CallObject *)cpy_r_self)->_origin = cpy_r_r24;
    cpy_r_r26 = PyList_Check(cpy_r_function);
    if (!cpy_r_r26) goto CPyL27;
    if (likely(PyList_Check(cpy_r_function)))
        cpy_r_r27 = cpy_r_function;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals, "list", cpy_r_function);
        goto CPyL38;
    }
    cpy_r_r28 = CPyList_GetItemShort(cpy_r_r27, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals);
        goto CPyL38;
    }
    cpy_r_r29 = cpy_r_r28;
    goto CPyL29;
CPyL27: ;
    CPy_INCREF(cpy_r_function);
    if (likely(PyUnicode_Check(cpy_r_function)))
        cpy_r_r30 = cpy_r_function;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals, "str", cpy_r_function);
        goto CPyL38;
    }
    cpy_r_r29 = cpy_r_r30;
CPyL29: ;
    ((multicall___call___CallObject *)cpy_r_self)->_function = cpy_r_r29;
    cpy_r_r31 = PyList_Check(cpy_r_function);
    if (!cpy_r_r31) goto CPyL34;
    CPy_INCREF(cpy_r_function);
    if (likely(PyList_Check(cpy_r_function)))
        cpy_r_r32 = cpy_r_function;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals, "list", cpy_r_function);
        goto CPyL38;
    }
    cpy_r_r33 = CPyList_GetSlice(cpy_r_r32, 2, 9223372036854775806LL);
    CPy_DECREF_NO_IMM(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals);
        goto CPyL38;
    }
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals, "list", cpy_r_r33);
        goto CPyL38;
    }
    cpy_r_r35 = cpy_r_r34;
    goto CPyL35;
CPyL34: ;
    cpy_r_r36 = Py_None;
    cpy_r_r35 = cpy_r_r36;
CPyL35: ;
    ((multicall___call___CallObject *)cpy_r_self)->_args = cpy_r_r35;
    cpy_r_r37 = ((multicall___call___CallObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r37);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 66, CPyStatic_call___globals, "str", cpy_r_r37);
        goto CPyL38;
    }
    cpy_r_r39 = CPyDef_signature____get_signature(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 66, CPyStatic_call___globals);
        goto CPyL38;
    }
    ((multicall___call___CallObject *)cpy_r_self)->_signature = cpy_r_r39;
    return 1;
CPyL38: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL39: ;
    CPy_INCREF(cpy_r_returns);
    goto CPyL2;
CPyL40: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL4;
CPyL41: ;
    CPy_INCREF(cpy_r_gas_limit);
    goto CPyL6;
CPyL42: ;
    CPy_INCREF(cpy_r_state_override_code);
    goto CPyL8;
CPyL43: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL10;
CPyL44: ;
    CPy_INCREF(cpy_r_origin);
    goto CPyL12;
CPyL45: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_gas_limit);
    CPy_DecRef(cpy_r_state_override_code);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_origin);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_origin);
    goto CPyL38;
CPyL47: ;
    CPy_DECREF(cpy_r_origin);
    goto CPyL22;
CPyL48: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL38;
}

PyObject *CPyPy_call___Call_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", "function", "returns", "block_id", "gas_limit", "state_override_code", "_w3", "origin", 0};
    PyObject *obj_target;
    PyObject *obj_function;
    PyObject *obj_returns = NULL;
    PyObject *obj_block_id = NULL;
    PyObject *obj_gas_limit = NULL;
    PyObject *obj_state_override_code = NULL;
    PyObject *obj__w3 = NULL;
    PyObject *obj_origin = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO|OOOOOO", "__init__", kwlist, &obj_target, &obj_function, &obj_returns, &obj_block_id, &obj_gas_limit, &obj_state_override_code, &obj__w3, &obj_origin)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_call___Call))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.call.Call", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (PyUnicode_Check(obj_target))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL10;
    if (PyBytes_Check(obj_target) || PyByteArray_Check(obj_target))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL10;
    CPy_TypeError("union[str, bytes]", obj_target); 
    goto fail;
__LL10: ;
    PyObject *arg_function;
    if (PyUnicode_Check(obj_function))
        arg_function = obj_function;
    else {
        arg_function = NULL;
    }
    if (arg_function != NULL) goto __LL11;
    if (PyList_Check(obj_function))
        arg_function = obj_function;
    else {
        arg_function = NULL;
    }
    if (arg_function != NULL) goto __LL11;
    CPy_TypeError("union[str, list]", obj_function); 
    goto fail;
__LL11: ;
    PyObject *arg_returns;
    if (obj_returns == NULL) {
        arg_returns = NULL;
        goto __LL12;
    }
    arg_returns = obj_returns;
    if (arg_returns != NULL) goto __LL12;
    if (obj_returns == Py_None)
        arg_returns = obj_returns;
    else {
        arg_returns = NULL;
    }
    if (arg_returns != NULL) goto __LL12;
    CPy_TypeError("object or None", obj_returns); 
    goto fail;
__LL12: ;
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL13;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL13;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL13;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL13: ;
    PyObject *arg_gas_limit;
    if (obj_gas_limit == NULL) {
        arg_gas_limit = NULL;
        goto __LL14;
    }
    if (PyLong_Check(obj_gas_limit))
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL14;
    if (obj_gas_limit == Py_None)
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL14;
    CPy_TypeError("int or None", obj_gas_limit); 
    goto fail;
__LL14: ;
    PyObject *arg_state_override_code;
    if (obj_state_override_code == NULL) {
        arg_state_override_code = NULL;
        goto __LL15;
    }
    if (PyUnicode_Check(obj_state_override_code))
        arg_state_override_code = obj_state_override_code;
    else {
        arg_state_override_code = NULL;
    }
    if (arg_state_override_code != NULL) goto __LL15;
    if (obj_state_override_code == Py_None)
        arg_state_override_code = obj_state_override_code;
    else {
        arg_state_override_code = NULL;
    }
    if (arg_state_override_code != NULL) goto __LL15;
    CPy_TypeError("str or None", obj_state_override_code); 
    goto fail;
__LL15: ;
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
        goto __LL16;
    }
    arg__w3 = obj__w3;
    if (arg__w3 != NULL) goto __LL16;
    if (obj__w3 == Py_None)
        arg__w3 = obj__w3;
    else {
        arg__w3 = NULL;
    }
    if (arg__w3 != NULL) goto __LL16;
    CPy_TypeError("object or None", obj__w3); 
    goto fail;
__LL16: ;
    PyObject *arg_origin;
    if (obj_origin == NULL) {
        arg_origin = NULL;
        goto __LL17;
    }
    if (PyUnicode_Check(obj_origin))
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL17;
    if (PyBytes_Check(obj_origin) || PyByteArray_Check(obj_origin))
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL17;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL17;
    CPy_TypeError("union[str, bytes, None]", obj_origin); 
    goto fail;
__LL17: ;
    char retval = CPyDef_call___Call_____init__(arg_self, arg_target, arg_function, arg_returns, arg_block_id, arg_gas_limit, arg_state_override_code, arg__w3, arg_origin);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__init__", 43, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___Call_____repr__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_string;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyStatics[4]; /* '<Call ' */
    cpy_r_r1 = ((multicall___call___CallObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL17;
    }
    cpy_r_r3 = CPyStatics[5]; /* ' on ' */
    cpy_r_r4 = ((multicall___call___CallObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyStr_GetSlice(cpy_r_r4, 0, 16);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals, "str", cpy_r_r5);
        goto CPyL18;
    }
    cpy_r_r7 = CPyStr_Build(4, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL17;
    }
    cpy_r_string = cpy_r_r7;
    cpy_r_r8 = ((multicall___call___CallObject *)cpy_r_self)->_block_id;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = CPyStatics[6]; /* ' block=' */
    cpy_r_r12 = ((multicall___call___CallObject *)cpy_r_self)->_block_id;
    CPy_INCREF(cpy_r_r12);
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL19;
    }
    cpy_r_r14 = CPyTagged_Str(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL19;
    }
    cpy_r_r15 = CPyStr_Build(2, cpy_r_r11, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL19;
    }
    cpy_r_r16 = CPyStr_Append(cpy_r_string, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL17;
    }
    cpy_r_string = cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = ((multicall___call___CallObject *)cpy_r_self)->_returns;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL15;
    cpy_r_r20 = CPyStatics[7]; /* ' returns=' */
    cpy_r_r21 = ((multicall___call___CallObject *)cpy_r_self)->_returns;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = PyObject_Str(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 73, CPyStatic_call___globals);
        goto CPyL19;
    }
    cpy_r_r23 = CPyStr_Build(2, cpy_r_r20, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 73, CPyStatic_call___globals);
        goto CPyL19;
    }
    cpy_r_r24 = CPyStr_Append(cpy_r_string, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 73, CPyStatic_call___globals);
        goto CPyL17;
    }
    cpy_r_string = cpy_r_r24;
CPyL15: ;
    cpy_r_r25 = CPyStatics[8]; /* '>' */
    cpy_r_r26 = CPyStr_Build(2, cpy_r_string, cpy_r_r25);
    CPy_DECREF(cpy_r_string);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 74, CPyStatic_call___globals);
        goto CPyL17;
    }
    return cpy_r_r26;
CPyL17: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL18: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_string);
    goto CPyL17;
}

PyObject *CPyPy_call___Call_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__repr__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_call___Call))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.call.Call", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___Call_____repr__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__repr__", 68, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___Call___data(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((multicall___call___CallObject *)cpy_r_self)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r0);
    cpy_r_r1 = ((multicall___call___CallObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_signature___Signature___encode_data(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "data", 78, CPyStatic_call___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_call___Call___data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":data", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_call___Call))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.call.Call", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___Call___data(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "data", 77, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__get__", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_handler, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "<lambda>", "__mypyc_lambda__0_decode_output_Call_obj", "__mypyc_env__", 89, CPyStatic_call___globals);
        goto CPyL3;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    goto CPyL4;
CPyL1: ;
    PyObject *cpy_r_r1[1] = {cpy_r_value};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_Vectorcall(cpy_r_handler, cpy_r_r2, 1, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<lambda>", 89, CPyStatic_call___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL4: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"handler", "value", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_handler;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_handler, &obj_value)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_handler = obj_handler;
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____call__(arg___mypyc_self__, arg_handler, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "<lambda>", 89, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__get__", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_handler, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = ((multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "<lambda>", "__mypyc_lambda__1_decode_output_Call_obj", "__mypyc_env__", 91, CPyStatic_call___globals);
        goto CPyL4;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((multicall___call___decode_output_Call_envObject *)cpy_r_r0)->_success;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'success' of 'decode_output_Call_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<lambda>", 91, CPyStatic_call___globals);
        goto CPyL4;
    }
CPyL2: ;
    PyObject *cpy_r_r2[2] = {cpy_r_r1, cpy_r_value};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_handler, cpy_r_r3, 2, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<lambda>", 91, CPyStatic_call___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r1);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
}

PyObject *CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"handler", "value", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_handler;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_handler, &obj_value)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_handler = obj_handler;
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____call__(arg___mypyc_self__, arg_handler, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "<lambda>", 91, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___Call___decode_output(PyObject *cpy_r_output, PyObject *cpy_r_signature, PyObject *cpy_r_returns, PyObject *cpy_r_success) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_apply_handler;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_decoded;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    tuple_T2OO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    int64_t cpy_r_r76;
    char cpy_r_r77;
    int64_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    if (cpy_r_returns != NULL) goto CPyL77;
    cpy_r_r0 = Py_None;
    cpy_r_returns = cpy_r_r0;
CPyL2: ;
    if (cpy_r_success != NULL) goto CPyL78;
    cpy_r_r1 = Py_None;
    cpy_r_success = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_call___decode_output_Call_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 81, CPyStatic_call___globals);
        goto CPyL79;
    }
    if (((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success != NULL) {
        CPy_DECREF(((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success);
    }
    ((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success = cpy_r_success;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 81, CPyStatic_call___globals);
        goto CPyL80;
    }
    cpy_r_r4 = ((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("multicall/call.py", "decode_output", "decode_output_Call_env", "success", 88, CPyStatic_call___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 == cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 89, CPyStatic_call___globals);
        goto CPyL80;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
    if (((multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *)cpy_r_r7)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *)cpy_r_r7)->___mypyc_env__);
    }
    ((multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *)cpy_r_r7)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 89, CPyStatic_call___globals);
        goto CPyL81;
    }
    cpy_r_apply_handler = cpy_r_r7;
    goto CPyL14;
CPyL11: ;
    cpy_r_r9 = CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 91, CPyStatic_call___globals);
        goto CPyL80;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
    if (((multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *)cpy_r_r9)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *)cpy_r_r9)->___mypyc_env__);
    }
    ((multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *)cpy_r_r9)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 91, CPyStatic_call___globals);
        goto CPyL82;
    }
    cpy_r_apply_handler = cpy_r_r9;
CPyL14: ;
    cpy_r_r11 = ((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("multicall/call.py", "decode_output", "decode_output_Call_env", "success", 93, CPyStatic_call___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r11);
CPyL15: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 == cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    if (cpy_r_r13) goto CPyL19;
    cpy_r_r14 = ((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("multicall/call.py", "decode_output", "decode_output_Call_env", "success", 93, CPyStatic_call___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r14);
CPyL17: ;
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 93, CPyStatic_call___globals);
        goto CPyL83;
    }
    if (!cpy_r_r15) goto CPyL84;
CPyL19: ;
    cpy_r_r16 = CPyDef_signature___Signature___decode_data(cpy_r_signature, cpy_r_output);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 95, CPyStatic_call___globals);
        goto CPyL21;
    } else
        goto CPyL85;
CPyL20: ;
    cpy_r_decoded = cpy_r_r16;
    goto CPyL45;
CPyL21: ;
    cpy_r_r17 = CPy_CatchError();
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 97, CPyStatic_call___globals);
        goto CPyL86;
    }
    cpy_r_r19 = Py_None;
    cpy_r_r20 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r21 = *(CPyPtr *)cpy_r_r20;
    *(PyObject * *)cpy_r_r21 = cpy_r_r19;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_returns != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL28;
    CPy_INCREF(cpy_r_returns);
    cpy_r_r24 = cpy_r_returns;
    cpy_r_r25 = PyObject_IsTrue(cpy_r_r24);
    CPy_DecRef(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 84, CPyStatic_call___globals);
        goto CPyL87;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL28;
    cpy_r_r28 = CPyObject_Size(cpy_r_returns);
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 97, CPyStatic_call___globals);
        goto CPyL87;
    }
    cpy_r_r29 = cpy_r_r28;
    goto CPyL29;
CPyL28: ;
    cpy_r_r29 = 2;
CPyL29: ;
    cpy_r_r30 = CPySequence_Multiply(cpy_r_r18, cpy_r_r29);
    CPy_DecRef(cpy_r_r18);
    CPyTagged_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 97, CPyStatic_call___globals);
        goto CPyL86;
    }
    cpy_r_r31 = 0 ? Py_True : Py_False;
    if (((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success != NULL) {
        CPy_DECREF(((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success);
    }
    ((multicall___call___decode_output_Call_envObject *)cpy_r_r2)->_success = cpy_r_r31;
    cpy_r_r32 = 1;
    CPy_DecRef(cpy_r_r2);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 97, CPyStatic_call___globals);
        goto CPyL88;
    }
    cpy_r_decoded = cpy_r_r30;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    goto CPyL45;
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL76;
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r34 = PyList_New(1);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 99, CPyStatic_call___globals);
        goto CPyL89;
    }
    cpy_r_r35 = Py_None;
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    *(PyObject * *)cpy_r_r37 = cpy_r_r35;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_returns != cpy_r_r38;
    if (!cpy_r_r39) goto CPyL42;
    CPy_INCREF(cpy_r_returns);
    cpy_r_r40 = cpy_r_returns;
    cpy_r_r41 = PyObject_IsTrue(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 84, CPyStatic_call___globals);
        goto CPyL90;
    }
    cpy_r_r43 = cpy_r_r41;
    if (!cpy_r_r43) goto CPyL42;
    cpy_r_r44 = CPyObject_Size(cpy_r_returns);
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 99, CPyStatic_call___globals);
        goto CPyL90;
    }
    cpy_r_r45 = cpy_r_r44;
    goto CPyL43;
CPyL42: ;
    cpy_r_r45 = 2;
CPyL43: ;
    cpy_r_r46 = CPySequence_Multiply(cpy_r_r34, cpy_r_r45);
    CPy_DECREF_NO_IMM(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 99, CPyStatic_call___globals);
        goto CPyL89;
    }
    cpy_r_decoded = cpy_r_r46;
CPyL45: ;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_returns != cpy_r_r47;
    if (!cpy_r_r48) goto CPyL91;
    CPy_INCREF(cpy_r_returns);
    cpy_r_r49 = cpy_r_returns;
    cpy_r_r50 = PyObject_IsTrue(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 84, CPyStatic_call___globals);
        goto CPyL92;
    }
    cpy_r_r52 = cpy_r_r50;
    if (!cpy_r_r52) goto CPyL91;
    cpy_r_r53 = PyDict_New();
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL92;
    }
    cpy_r_r54 = PyObject_GetIter(cpy_r_returns);
    CPy_DECREF(cpy_r_returns);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL93;
    }
    cpy_r_r55 = PyObject_GetIter(cpy_r_decoded);
    CPy_DECREF(cpy_r_decoded);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL94;
    }
CPyL52: ;
    cpy_r_r56 = PyIter_Next(cpy_r_r54);
    if (cpy_r_r56 == NULL) goto CPyL95;
    cpy_r_r57 = PyIter_Next(cpy_r_r55);
    if (cpy_r_r57 == NULL) goto CPyL96;
    PyObject *__tmp18;
    if (unlikely(!(PyTuple_Check(cpy_r_r56) && PyTuple_GET_SIZE(cpy_r_r56) == 2))) {
        __tmp18 = NULL;
        goto __LL19;
    }
    __tmp18 = PyTuple_GET_ITEM(cpy_r_r56, 0);
    if (__tmp18 == NULL) goto __LL19;
    __tmp18 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    if (__tmp18 != NULL) goto __LL20;
    if (PyTuple_GET_ITEM(cpy_r_r56, 1) == Py_None)
        __tmp18 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    else {
        __tmp18 = NULL;
    }
    if (__tmp18 != NULL) goto __LL20;
    __tmp18 = NULL;
__LL20: ;
    if (__tmp18 == NULL) goto __LL19;
    __tmp18 = cpy_r_r56;
__LL19: ;
    if (unlikely(__tmp18 == NULL)) {
        CPy_TypeError("tuple[object, union[object, None]]", cpy_r_r56); cpy_r_r58 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp21 = PyTuple_GET_ITEM(cpy_r_r56, 0);
        CPy_INCREF(__tmp21);
        PyObject *__tmp22;
        __tmp22 = __tmp21;
        cpy_r_r58.f0 = __tmp22;
        PyObject *__tmp23 = PyTuple_GET_ITEM(cpy_r_r56, 1);
        CPy_INCREF(__tmp23);
        PyObject *__tmp24;
        __tmp24 = __tmp23;
        if (__tmp24 != NULL) goto __LL25;
        if (__tmp23 == Py_None)
            __tmp24 = __tmp23;
        else {
            __tmp24 = NULL;
        }
        if (__tmp24 != NULL) goto __LL25;
        CPy_TypeError("object or None", __tmp23); 
        __tmp24 = NULL;
__LL25: ;
        cpy_r_r58.f1 = __tmp24;
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58.f0 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL97;
    }
    cpy_r_r59 = cpy_r_r58.f0;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = cpy_r_r58.f1;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r58.f0);
    CPy_DECREF(cpy_r_r58.f1);
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_r60 != cpy_r_r61;
    if (!cpy_r_r62) goto CPyL98;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r60;
    cpy_r_r64 = PyObject_IsTrue(cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 104, CPyStatic_call___globals);
        goto CPyL99;
    }
    cpy_r_r66 = cpy_r_r64;
    if (!cpy_r_r66) goto CPyL98;
    PyObject *cpy_r_r67[2] = {cpy_r_r60, cpy_r_r57};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_Vectorcall(cpy_r_apply_handler, cpy_r_r68, 2, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 103, CPyStatic_call___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r70 = cpy_r_r69;
    goto CPyL62;
CPyL61: ;
    cpy_r_r70 = cpy_r_r57;
CPyL62: ;
    cpy_r_r71 = PyDict_SetItem(cpy_r_r53, cpy_r_r59, cpy_r_r70);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL100;
    } else
        goto CPyL52;
CPyL63: ;
    cpy_r_r73 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL101;
    }
    cpy_r_r74 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 102, CPyStatic_call___globals);
        goto CPyL101;
    }
    return cpy_r_r53;
CPyL66: ;
    cpy_r_r75 = CPyObject_Size(cpy_r_decoded);
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 107, CPyStatic_call___globals);
        goto CPyL102;
    }
    cpy_r_r76 = cpy_r_r75 & 1;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (cpy_r_r77) goto CPyL69;
    cpy_r_r78 = 2 & 1;
    cpy_r_r79 = cpy_r_r78 != 0;
    if (!cpy_r_r79) goto CPyL70;
CPyL69: ;
    cpy_r_r80 = CPyTagged_IsLt_(2, cpy_r_r75);
    cpy_r_r81 = cpy_r_r80;
    goto CPyL71;
CPyL70: ;
    cpy_r_r82 = (Py_ssize_t)cpy_r_r75 > (Py_ssize_t)2;
    cpy_r_r81 = cpy_r_r82;
CPyL71: ;
    CPyTagged_DECREF(cpy_r_r75);
    if (!cpy_r_r81) goto CPyL73;
    cpy_r_r83 = cpy_r_decoded;
    goto CPyL75;
CPyL73: ;
    cpy_r_r84 = CPyStatics[322]; /* 0 */
    cpy_r_r85 = PyObject_GetItem(cpy_r_decoded, cpy_r_r84);
    CPy_DECREF(cpy_r_decoded);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "decode_output", 107, CPyStatic_call___globals);
        goto CPyL76;
    }
    cpy_r_r83 = cpy_r_r85;
CPyL75: ;
    return cpy_r_r83;
CPyL76: ;
    cpy_r_r86 = NULL;
    return cpy_r_r86;
CPyL77: ;
    CPy_INCREF(cpy_r_returns);
    goto CPyL2;
CPyL78: ;
    CPy_INCREF(cpy_r_success);
    goto CPyL4;
CPyL79: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_success);
    goto CPyL76;
CPyL80: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r2);
    goto CPyL76;
CPyL81: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    goto CPyL76;
CPyL82: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r9);
    goto CPyL76;
CPyL83: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_apply_handler);
    goto CPyL76;
CPyL84: ;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL35;
CPyL85: ;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL20;
CPyL86: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_apply_handler);
    goto CPyL33;
CPyL87: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r18);
    goto CPyL33;
CPyL88: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r30);
    goto CPyL33;
CPyL89: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_apply_handler);
    goto CPyL76;
CPyL90: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r34);
    goto CPyL76;
CPyL91: ;
    CPy_DECREF(cpy_r_returns);
    CPy_DECREF(cpy_r_apply_handler);
    goto CPyL66;
CPyL92: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_decoded);
    goto CPyL76;
CPyL93: ;
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_decoded);
    CPy_DecRef(cpy_r_r53);
    goto CPyL76;
CPyL94: ;
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL76;
CPyL95: ;
    CPy_DECREF(cpy_r_apply_handler);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    goto CPyL63;
CPyL96: ;
    CPy_DECREF(cpy_r_apply_handler);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    goto CPyL63;
CPyL97: ;
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    goto CPyL76;
CPyL98: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL61;
CPyL99: ;
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r57);
    goto CPyL76;
CPyL100: ;
    CPy_DecRef(cpy_r_apply_handler);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL76;
CPyL101: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL76;
CPyL102: ;
    CPy_DecRef(cpy_r_decoded);
    goto CPyL76;
}

PyObject *CPyPy_call___Call___decode_output(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"output", "signature", "returns", "success", 0};
    static CPyArg_Parser parser = {"OO|OO:decode_output", kwlist, 0};
    PyObject *obj_output;
    PyObject *obj_signature;
    PyObject *obj_returns = NULL;
    PyObject *obj_success = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_output, &obj_signature, &obj_returns, &obj_success)) {
        return NULL;
    }
    PyObject *arg_output;
    if (PyBytes_Check(obj_output) || PyByteArray_Check(obj_output))
        arg_output = obj_output;
    else {
        arg_output = NULL;
    }
    if (arg_output != NULL) goto __LL26;
    arg_output = obj_output;
    if (arg_output != NULL) goto __LL26;
    CPy_TypeError("union[bytes, object]", obj_output); 
    goto fail;
__LL26: ;
    PyObject *arg_signature;
    if (likely(Py_TYPE(obj_signature) == CPyType_signature___Signature))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("multicall.signature.Signature", obj_signature); 
        goto fail;
    }
    PyObject *arg_returns;
    if (obj_returns == NULL) {
        arg_returns = NULL;
        goto __LL27;
    }
    arg_returns = obj_returns;
    if (arg_returns != NULL) goto __LL27;
    if (obj_returns == Py_None)
        arg_returns = obj_returns;
    else {
        arg_returns = NULL;
    }
    if (arg_returns != NULL) goto __LL27;
    CPy_TypeError("object or None", obj_returns); 
    goto fail;
__LL27: ;
    PyObject *arg_success;
    if (obj_success == NULL) {
        arg_success = NULL;
        goto __LL28;
    }
    if (PyBool_Check(obj_success))
        arg_success = obj_success;
    else {
        arg_success = NULL;
    }
    if (arg_success != NULL) goto __LL28;
    if (obj_success == Py_None)
        arg_success = obj_success;
    else {
        arg_success = NULL;
    }
    if (arg_success != NULL) goto __LL28;
    CPy_TypeError("bool or None", obj_success); 
    goto fail;
__LL28: ;
    PyObject *retval = CPyDef_call___Call___decode_output(arg_output, arg_signature, arg_returns, arg_success);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "decode_output", 81, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___Call_____call__(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r__w3, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    if (cpy_r_args != NULL) goto CPyL44;
    cpy_r_r0 = Py_None;
    cpy_r_args = cpy_r_r0;
CPyL2: ;
    if (cpy_r__w3 != NULL) goto CPyL45;
    cpy_r_r1 = Py_None;
    cpy_r__w3 = cpy_r_r1;
CPyL4: ;
    if (cpy_r_block_id != NULL) goto CPyL46;
    cpy_r_r2 = Py_None;
    cpy_r_block_id = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = ((multicall___call___CallObject *)cpy_r_self)->_w3;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL47;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = PyObject_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 117, CPyStatic_call___globals);
        goto CPyL48;
    }
    cpy_r_r9 = cpy_r_r7;
    if (cpy_r_r9) {
        goto CPyL49;
    } else
        goto CPyL47;
CPyL10: ;
    cpy_r_r10 = cpy_r_r3;
    goto CPyL19;
CPyL11: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r__w3 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL50;
    CPy_INCREF(cpy_r__w3);
    cpy_r_r13 = cpy_r__w3;
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 113, CPyStatic_call___globals);
        goto CPyL51;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL50;
    cpy_r_r17 = cpy_r__w3;
    goto CPyL18;
CPyL16: ;
    cpy_r_r18 = CPyStatic_call___globals;
    cpy_r_r19 = CPyStatics[9]; /* 'w3' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 117, CPyStatic_call___globals);
        goto CPyL52;
    }
    cpy_r_r17 = cpy_r_r20;
CPyL18: ;
    cpy_r_r10 = cpy_r_r17;
CPyL19: ;
    cpy_r__w3 = cpy_r_r10;
    cpy_r_r21 = ((multicall___call___CallObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((multicall___call___CallObject *)cpy_r_self)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r22);
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_args != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL53;
    CPy_INCREF(cpy_r_args);
    cpy_r_r25 = cpy_r_args;
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 112, CPyStatic_call___globals);
        goto CPyL54;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL53;
    cpy_r_r29 = cpy_r_args;
    goto CPyL25;
CPyL24: ;
    cpy_r_r30 = ((multicall___call___CallObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r29 = cpy_r_r30;
CPyL25: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_block_id != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL55;
    if (likely(PyLong_Check(cpy_r_block_id)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_block_id);
    else {
        CPy_TypeError("int", cpy_r_block_id); cpy_r_r33 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 115, CPyStatic_call___globals);
        goto CPyL56;
    }
    cpy_r_r34 = cpy_r_r33 != 0;
    CPyTagged_DECREF(cpy_r_r33);
    if (!cpy_r_r34) goto CPyL55;
    cpy_r_r35 = cpy_r_block_id;
    goto CPyL30;
CPyL29: ;
    cpy_r_r36 = ((multicall___call___CallObject *)cpy_r_self)->_block_id;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r35 = cpy_r_r36;
CPyL30: ;
    cpy_r_r37 = ((multicall___call___CallObject *)cpy_r_self)->_origin;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = ((multicall___call___CallObject *)cpy_r_self)->_gas_limit;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = ((multicall___call___CallObject *)cpy_r_self)->_state_override_code;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyDef_call___prep_args(cpy_r_r21, cpy_r_r22, cpy_r_r29, cpy_r_r35, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF_NO_IMM(cpy_r_r22);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 118, CPyStatic_call___globals);
        goto CPyL57;
    }
    cpy_r_args = cpy_r_r40;
    cpy_r_r41 = cpy_r__w3;
    cpy_r_r42 = CPyStatics[10]; /* 'eth' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL58;
    }
    if (likely(PyList_Check(cpy_r_args)))
        cpy_r_r44 = cpy_r_args;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals, "list", cpy_r_args);
        goto CPyL59;
    }
    cpy_r_r45 = CPyStatics[11]; /* 'call' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r45);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL60;
    }
    cpy_r_r47 = PyList_AsTuple(cpy_r_r44);
    CPy_DECREF_NO_IMM(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL61;
    }
    cpy_r_r48 = PyObject_CallObject(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL43;
    }
    cpy_r_r49 = ((multicall___call___CallObject *)cpy_r_self)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r49);
    cpy_r_r50 = ((multicall___call___CallObject *)cpy_r_self)->_returns;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPyDef_call___Call___decode_output(cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF_NO_IMM(cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 127, CPyStatic_call___globals);
        goto CPyL43;
    }
    cpy_r_r53 = CPyStatics[12]; /* '%s returned %s' */
    cpy_r_r54 = CPyStatic_call___log_debug;
    if (unlikely(cpy_r_r54 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 132, CPyStatic_call___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL41: ;
    PyObject *cpy_r_r56[3] = {cpy_r_r53, cpy_r_self, cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_Vectorcall(cpy_r_r54, cpy_r_r57, 3, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 132, CPyStatic_call___globals);
        goto CPyL63;
    } else
        goto CPyL64;
CPyL42: ;
    return cpy_r_r52;
CPyL43: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL44: ;
    CPy_INCREF(cpy_r_args);
    goto CPyL2;
CPyL45: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL4;
CPyL46: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL6;
CPyL47: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL11;
CPyL48: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r3);
    goto CPyL43;
CPyL49: ;
    CPy_DECREF(cpy_r__w3);
    goto CPyL10;
CPyL50: ;
    CPy_DECREF(cpy_r__w3);
    goto CPyL16;
CPyL51: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    goto CPyL43;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_block_id);
    goto CPyL43;
CPyL53: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL24;
CPyL54: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL43;
CPyL55: ;
    CPy_DECREF(cpy_r_block_id);
    goto CPyL29;
CPyL56: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r29);
    goto CPyL43;
CPyL57: ;
    CPy_DecRef(cpy_r__w3);
    goto CPyL43;
CPyL58: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL43;
CPyL59: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL43;
CPyL60: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL43;
CPyL61: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL62: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL39;
CPyL63: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL43;
CPyL64: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL42;
}

PyObject *CPyPy_call___Call_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"args", "_w3", "block_id", 0};
    static CPyArg_Parser parser = {"|OO$O:__call__", kwlist, 0};
    PyObject *obj_args = NULL;
    PyObject *obj__w3 = NULL;
    PyObject *obj_block_id = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_args, &obj__w3, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_call___Call))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.call.Call", obj_self); 
        goto fail;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL29;
    }
    arg_args = obj_args;
    if (arg_args != NULL) goto __LL29;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL29;
    CPy_TypeError("object or None", obj_args); 
    goto fail;
__LL29: ;
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
        goto __LL30;
    }
    arg__w3 = obj__w3;
    if (arg__w3 != NULL) goto __LL30;
    if (obj__w3 == Py_None)
        arg__w3 = obj__w3;
    else {
        arg__w3 = NULL;
    }
    if (arg__w3 != NULL) goto __LL30;
    CPy_TypeError("object or None", obj__w3); 
    goto fail;
__LL30: ;
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL31;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL31;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL31;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL31: ;
    PyObject *retval = CPyDef_call___Call_____call__(arg_self, arg_args, arg__w3, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__call__", 110, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___Call_____await__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyStatics[13]; /* 'coroutine' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__await__", 136, CPyStatic_call___globals);
        goto CPyL3;
    }
    cpy_r_r4 = CPyStatics[14]; /* '__await__' */
    PyObject *cpy_r_r5[1] = {cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__await__", 136, CPyStatic_call___globals);
        goto CPyL4;
    }
    CPy_DECREF(cpy_r_r3);
    return cpy_r_r7;
CPyL3: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL4: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL3;
}

PyObject *CPyPy_call___Call_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_call___Call))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.call.Call", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___Call_____await__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__await__", 135, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    tuple_T3OOO cpy_r_r9;
    int32_t cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    tuple_T3OOO cpy_r_r102;
    char cpy_r_r103;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    tuple_T3OOO cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    CPyTagged cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    char cpy_r_r169;
    PyObject **cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    tuple_T3OOO cpy_r_r173;
    tuple_T3OOO cpy_r_r174;
    tuple_T3OOO cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    tuple_T3OOO cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    tuple_T3OOO cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject **cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    tuple_T3OOO cpy_r_r205;
    char cpy_r_r206;
    PyObject **cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    tuple_T3OOO cpy_r_r210;
    tuple_T3OOO cpy_r_r211;
    tuple_T3OOO cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    tuple_T3OOO cpy_r_r220;
    tuple_T3OOO cpy_r_r221;
    char cpy_r_r222;
    tuple_T3OOO cpy_r_r223;
    tuple_T3OOO cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject **cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    tuple_T3OOO cpy_r_r244;
    char cpy_r_r245;
    PyObject **cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    tuple_T3OOO cpy_r_r249;
    tuple_T3OOO cpy_r_r250;
    tuple_T3OOO cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    PyObject **cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    char cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    char cpy_r_r277;
    char cpy_r_r278;
    char cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    tuple_T3OOO __tmp32 = { NULL, NULL, NULL };
    cpy_r_r8 = __tmp32;
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL237;
CPyL1: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_type != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r13 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 146, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF_NO_IMM(cpy_r_r13);
CPyL5: ;
    cpy_r_r14 = ((multicall___call___CallObject *)cpy_r_r13)->_w3;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF_NO_IMM(cpy_r_r13);
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_r14 != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL245;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r14;
    cpy_r_r18 = PyObject_IsTrue(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL246;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL245;
    cpy_r_r21 = cpy_r_r14;
    goto CPyL19;
CPyL10: ;
    cpy_r_r22 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 146, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r22);
CPyL11: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL247;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r22;
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL248;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL247;
    cpy_r_r29 = cpy_r_r22;
    goto CPyL18;
CPyL16: ;
    cpy_r_r30 = CPyStatic_call___globals;
    cpy_r_r31 = CPyStatics[9]; /* 'w3' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r29 = cpy_r_r32;
CPyL18: ;
    cpy_r_r21 = cpy_r_r29;
CPyL19: ;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3 = cpy_r_r21;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r34 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 148, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF_NO_IMM(cpy_r_r34);
CPyL21: ;
    cpy_r_r35 = ((multicall___call___CallObject *)cpy_r_r34)->_state_override_code;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF_NO_IMM(cpy_r_r34);
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL249;
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r38 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals, "str", cpy_r_r35);
        goto CPyL244;
    }
    cpy_r_r39 = CPyStr_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (!cpy_r_r39) goto CPyL43;
    cpy_r_r40 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 148, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r40);
CPyL25: ;
    cpy_r_r41 = CPyStatic_call___globals;
    cpy_r_r42 = CPyStatics[15]; /* 'state_override_supported' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL250;
    }
    PyObject *cpy_r_r44[1] = {cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL250;
    }
    CPy_DECREF(cpy_r_r40);
    if (unlikely(!PyBool_Check(cpy_r_r46))) {
        CPy_TypeError("bool", cpy_r_r46); cpy_r_r47 = 2;
    } else
        cpy_r_r47 = cpy_r_r46 == Py_True;
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL244;
    }
    if (cpy_r_r47) goto CPyL43;
    cpy_r_r48 = CPyStatics[16]; /* 'State override is not supported on ' */
    cpy_r_r49 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 150, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r49);
CPyL30: ;
    cpy_r_r50 = CPyStatic_call___globals;
    cpy_r_r51 = CPyStatics[17]; /* 'chain_id' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL251;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r49};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL251;
    }
    CPy_DECREF(cpy_r_r49);
    cpy_r_r56 = (PyObject *)CPyType_constants___Network;
    PyObject *cpy_r_r57[1] = {cpy_r_r55};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 1, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL252;
    }
    CPy_DECREF(cpy_r_r55);
    if (likely(Py_TYPE(cpy_r_r59) == CPyType_constants___Network))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals, "multicall.constants.Network", cpy_r_r59);
        goto CPyL244;
    }
    cpy_r_r61 = CPyStatics[18]; /* '__repr__' */
    PyObject *cpy_r_r62[1] = {cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r63, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL253;
    }
    CPy_DECREF_NO_IMM(cpy_r_r60);
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals, "str", cpy_r_r64);
        goto CPyL244;
    }
    cpy_r_r66 = CPyStr_GetSlice(cpy_r_r65, 2, -2);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL244;
    }
    if (likely(PyUnicode_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals, "str", cpy_r_r66);
        goto CPyL244;
    }
    cpy_r_r68 = CPyStatics[19]; /* '.' */
    cpy_r_r69 = CPyStr_Build(3, cpy_r_r48, cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r70 = (PyObject *)CPyType_exceptions___StateOverrideNotSupported;
    PyObject *cpy_r_r71[1] = {cpy_r_r69};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 149, CPyStatic_call___globals);
        goto CPyL254;
    }
    CPy_DECREF(cpy_r_r69);
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_exceptions___StateOverrideNotSupported))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 149, CPyStatic_call___globals, "multicall.exceptions.StateOverrideNotSupported", cpy_r_r73);
        goto CPyL244;
    }
    CPy_Raise(cpy_r_r74);
    CPy_DECREF_NO_IMM(cpy_r_r74);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 149, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r75 = CPyStatic_call___globals;
    cpy_r_r76 = CPyStatics[20]; /* '_get_semaphore' */
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r78 = PyObject_Vectorcall(cpy_r_r77, 0, 0, 0);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r79 = CPy_TYPE(cpy_r_r78);
    cpy_r_r80 = CPyStatics[21]; /* '__aexit__' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL255;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r81;
    cpy_r_r82 = 1;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL255;
    }
    cpy_r_r83 = CPyStatics[22]; /* '__aenter__' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r83);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL256;
    }
    PyObject *cpy_r_r85[1] = {cpy_r_r78};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = PyObject_Vectorcall(cpy_r_r84, cpy_r_r86, 1, 0);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL256;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r78;
    cpy_r_r88 = 1;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL257;
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 1;
    cpy_r_r89 = 1;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL257;
    }
    cpy_r_r90 = CPy_GetCoro(cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL244;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r90;
    cpy_r_r91 = 1;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r92 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__3", -1, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r92);
CPyL54: ;
    cpy_r_r93 = CPyIter_Next(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (cpy_r_r93 != NULL) goto CPyL57;
    cpy_r_r94 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r95 = cpy_r_r94;
    CPy_DECREF(cpy_r_r95);
    cpy_r_r96 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r96;
    cpy_r_r97 = 1;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL244;
    } else
        goto CPyL79;
CPyL57: ;
    cpy_r_r98 = cpy_r_r93;
CPyL58: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r98;
CPyL59: ;
    cpy_r_r100 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r101 = cpy_r_type != cpy_r_r100;
    if (!cpy_r_r101) goto CPyL258;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL63;
    } else
        goto CPyL259;
CPyL61: ;
    CPy_Unreachable();
CPyL62: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL74;
CPyL63: ;
    cpy_r_r102 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r102;
    cpy_r_r103 = 1;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL260;
    }
    cpy_r_r104 = (PyObject **)&cpy_r_r1;
    cpy_r_r105 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__3", -1, CPyStatic_call___globals);
        goto CPyL260;
    }
    CPy_INCREF(cpy_r_r105);
CPyL65: ;
    cpy_r_r106 = CPy_YieldFromErrorHandle(cpy_r_r105, cpy_r_r104);
    CPy_DecRef(cpy_r_r105);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL260;
    }
    if (cpy_r_r106) goto CPyL69;
    cpy_r_r98 = cpy_r_r1;
    cpy_r_r107 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r107.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__4", -1, CPyStatic_call___globals);
        goto CPyL261;
    }
    CPy_INCREF(cpy_r_r107.f0);
    CPy_INCREF(cpy_r_r107.f1);
    CPy_INCREF(cpy_r_r107.f2);
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r107);
    CPy_DecRef(cpy_r_r107.f0);
    CPy_DecRef(cpy_r_r107.f1);
    CPy_DecRef(cpy_r_r107.f2);
    goto CPyL58;
CPyL69: ;
    cpy_r_r95 = cpy_r_r1;
    CPy_DecRef(cpy_r_r95);
    cpy_r_r108 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r108.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__4", -1, CPyStatic_call___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r108.f0);
    CPy_INCREF(cpy_r_r108.f1);
    CPy_INCREF(cpy_r_r108.f2);
CPyL70: ;
    CPy_RestoreExcInfo(cpy_r_r108);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    goto CPyL79;
CPyL71: ;
    cpy_r_r109 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__4", -1, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r109.f0);
    CPy_INCREF(cpy_r_r109.f1);
    CPy_INCREF(cpy_r_r109.f2);
CPyL72: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    cpy_r_r110 = CPy_KeepPropagating();
    if (!cpy_r_r110) goto CPyL244;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r111 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__3", -1, CPyStatic_call___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r111);
CPyL75: ;
    cpy_r_r112 = CPyIter_Send(cpy_r_r111, cpy_r_arg);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r112 == NULL) goto CPyL77;
    cpy_r_r98 = cpy_r_r112;
    goto CPyL58;
CPyL77: ;
    cpy_r_r113 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r95 = cpy_r_r113;
    CPy_DECREF(cpy_r_r95);
CPyL79: ;
    cpy_r_r114 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___w3;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 154, CPyStatic_call___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r114);
CPyL80: ;
    cpy_r_r115 = CPyStatic_call___globals;
    cpy_r_r116 = CPyStatics[23]; /* 'get_async_w3' */
    cpy_r_r117 = CPyDict_GetItem(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL263;
    }
    PyObject *cpy_r_r118[1] = {cpy_r_r114};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = PyObject_Vectorcall(cpy_r_r117, cpy_r_r119, 1, 0);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL263;
    }
    CPy_DECREF(cpy_r_r114);
    cpy_r_r121 = CPyStatics[10]; /* 'eth' */
    cpy_r_r122 = CPyObject_GetAttr(cpy_r_r120, cpy_r_r121);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL136;
    }
    cpy_r_r123 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 156, CPyStatic_call___globals);
        goto CPyL264;
    }
    CPy_INCREF_NO_IMM(cpy_r_r123);
CPyL84: ;
    cpy_r_r124 = ((multicall___call___CallObject *)cpy_r_r123)->_target;
    CPy_INCREF(cpy_r_r124);
    CPy_DECREF_NO_IMM(cpy_r_r123);
    cpy_r_r125 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 157, CPyStatic_call___globals);
        goto CPyL265;
    }
    CPy_INCREF_NO_IMM(cpy_r_r125);
CPyL85: ;
    cpy_r_r126 = ((multicall___call___CallObject *)cpy_r_r125)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r126);
    CPy_DECREF_NO_IMM(cpy_r_r125);
    cpy_r_r127 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__args;
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "args", 158, CPyStatic_call___globals);
        goto CPyL266;
    }
    CPy_INCREF(cpy_r_r127);
CPyL86: ;
    cpy_r_r128 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r129 = cpy_r_r127 != cpy_r_r128;
    if (!cpy_r_r129) goto CPyL267;
    CPy_INCREF(cpy_r_r127);
    cpy_r_r130 = cpy_r_r127;
    cpy_r_r131 = PyObject_IsTrue(cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 158, CPyStatic_call___globals);
        goto CPyL268;
    }
    cpy_r_r133 = cpy_r_r131;
    if (!cpy_r_r133) goto CPyL267;
    cpy_r_r134 = cpy_r_r127;
    goto CPyL93;
CPyL91: ;
    cpy_r_r135 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 158, CPyStatic_call___globals);
        goto CPyL266;
    }
    CPy_INCREF_NO_IMM(cpy_r_r135);
CPyL92: ;
    cpy_r_r136 = ((multicall___call___CallObject *)cpy_r_r135)->_args;
    CPy_INCREF(cpy_r_r136);
    CPy_DECREF_NO_IMM(cpy_r_r135);
    cpy_r_r134 = cpy_r_r136;
CPyL93: ;
    cpy_r_r137 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__block_id;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "block_id", 159, CPyStatic_call___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r137);
CPyL94: ;
    cpy_r_r138 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r139 = cpy_r_r137 != cpy_r_r138;
    if (!cpy_r_r139) goto CPyL270;
    if (likely(PyLong_Check(cpy_r_r137)))
        cpy_r_r140 = CPyTagged_FromObject(cpy_r_r137);
    else {
        CPy_TypeError("int", cpy_r_r137); cpy_r_r140 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r140 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 159, CPyStatic_call___globals);
        goto CPyL271;
    }
    cpy_r_r141 = cpy_r_r140 != 0;
    CPyTagged_DECREF(cpy_r_r140);
    if (!cpy_r_r141) goto CPyL270;
    cpy_r_r142 = cpy_r_r137;
    goto CPyL100;
CPyL98: ;
    cpy_r_r143 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 159, CPyStatic_call___globals);
        goto CPyL269;
    }
    CPy_INCREF_NO_IMM(cpy_r_r143);
CPyL99: ;
    cpy_r_r144 = ((multicall___call___CallObject *)cpy_r_r143)->_block_id;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF_NO_IMM(cpy_r_r143);
    cpy_r_r142 = cpy_r_r144;
CPyL100: ;
    cpy_r_r145 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 160, CPyStatic_call___globals);
        goto CPyL272;
    }
    CPy_INCREF_NO_IMM(cpy_r_r145);
CPyL101: ;
    cpy_r_r146 = ((multicall___call___CallObject *)cpy_r_r145)->_origin;
    CPy_INCREF(cpy_r_r146);
    CPy_DECREF_NO_IMM(cpy_r_r145);
    cpy_r_r147 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 161, CPyStatic_call___globals);
        goto CPyL273;
    }
    CPy_INCREF_NO_IMM(cpy_r_r147);
CPyL102: ;
    cpy_r_r148 = ((multicall___call___CallObject *)cpy_r_r147)->_gas_limit;
    CPy_INCREF(cpy_r_r148);
    CPy_DECREF_NO_IMM(cpy_r_r147);
    cpy_r_r149 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 162, CPyStatic_call___globals);
        goto CPyL274;
    }
    CPy_INCREF_NO_IMM(cpy_r_r149);
CPyL103: ;
    cpy_r_r150 = ((multicall___call___CallObject *)cpy_r_r149)->_state_override_code;
    CPy_INCREF(cpy_r_r150);
    CPy_DECREF_NO_IMM(cpy_r_r149);
    cpy_r_r151 = CPyDef_call___prep_args(cpy_r_r124, cpy_r_r126, cpy_r_r134, cpy_r_r142, cpy_r_r146, cpy_r_r148, cpy_r_r150);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF_NO_IMM(cpy_r_r126);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r142);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 155, CPyStatic_call___globals);
        goto CPyL264;
    }
    cpy_r_r152 = CPyStatics[11]; /* 'call' */
    cpy_r_r153 = CPyObject_GetAttr(cpy_r_r122, cpy_r_r152);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL275;
    }
    cpy_r_r154 = PyList_AsTuple(cpy_r_r151);
    CPy_DECREF_NO_IMM(cpy_r_r151);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL276;
    }
    cpy_r_r155 = PyObject_CallObject(cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL136;
    }
    cpy_r_r156 = CPy_GetCoro(cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL136;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r156;
    cpy_r_r157 = 1;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL136;
    }
    cpy_r_r158 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__5", -1, CPyStatic_call___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r158);
CPyL110: ;
    cpy_r_r159 = CPyIter_Next(cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    if (cpy_r_r159 != NULL) goto CPyL113;
    cpy_r_r160 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL136;
    }
    cpy_r_r161 = cpy_r_r160;
    cpy_r_r162 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r162;
    cpy_r_r163 = 1;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL277;
    } else
        goto CPyL135;
CPyL113: ;
    cpy_r_r164 = cpy_r_r159;
CPyL114: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r164;
CPyL115: ;
    cpy_r_r166 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r167 = cpy_r_type != cpy_r_r166;
    if (!cpy_r_r167) goto CPyL278;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL119;
    } else
        goto CPyL279;
CPyL117: ;
    CPy_Unreachable();
CPyL118: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL130;
CPyL119: ;
    cpy_r_r168 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r168;
    cpy_r_r169 = 1;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL280;
    }
    cpy_r_r170 = (PyObject **)&cpy_r_r3;
    cpy_r_r171 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__5", -1, CPyStatic_call___globals);
        goto CPyL280;
    }
    CPy_INCREF(cpy_r_r171);
CPyL121: ;
    cpy_r_r172 = CPy_YieldFromErrorHandle(cpy_r_r171, cpy_r_r170);
    CPy_DecRef(cpy_r_r171);
    if (unlikely(cpy_r_r172 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL280;
    }
    if (cpy_r_r172) goto CPyL125;
    cpy_r_r164 = cpy_r_r3;
    cpy_r_r173 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r173.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__6", -1, CPyStatic_call___globals);
        goto CPyL281;
    }
    CPy_INCREF(cpy_r_r173.f0);
    CPy_INCREF(cpy_r_r173.f1);
    CPy_INCREF(cpy_r_r173.f2);
CPyL124: ;
    CPy_RestoreExcInfo(cpy_r_r173);
    CPy_DecRef(cpy_r_r173.f0);
    CPy_DecRef(cpy_r_r173.f1);
    CPy_DecRef(cpy_r_r173.f2);
    goto CPyL114;
CPyL125: ;
    cpy_r_r161 = cpy_r_r3;
    cpy_r_r174 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r174.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__6", -1, CPyStatic_call___globals);
        goto CPyL282;
    }
    CPy_INCREF(cpy_r_r174.f0);
    CPy_INCREF(cpy_r_r174.f1);
    CPy_INCREF(cpy_r_r174.f2);
CPyL126: ;
    CPy_RestoreExcInfo(cpy_r_r174);
    CPy_DecRef(cpy_r_r174.f0);
    CPy_DecRef(cpy_r_r174.f1);
    CPy_DecRef(cpy_r_r174.f2);
    goto CPyL135;
CPyL127: ;
    cpy_r_r175 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r175.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__6", -1, CPyStatic_call___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r175.f0);
    CPy_INCREF(cpy_r_r175.f1);
    CPy_INCREF(cpy_r_r175.f2);
CPyL128: ;
    CPy_RestoreExcInfo(cpy_r_r175);
    CPy_DecRef(cpy_r_r175.f0);
    CPy_DecRef(cpy_r_r175.f1);
    CPy_DecRef(cpy_r_r175.f2);
    cpy_r_r176 = CPy_KeepPropagating();
    if (!cpy_r_r176) goto CPyL136;
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r177 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__5", -1, CPyStatic_call___globals);
        goto CPyL283;
    }
    CPy_INCREF(cpy_r_r177);
CPyL131: ;
    cpy_r_r178 = CPyIter_Send(cpy_r_r177, cpy_r_arg);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r178 == NULL) goto CPyL133;
    cpy_r_r164 = cpy_r_r178;
    goto CPyL114;
CPyL133: ;
    cpy_r_r179 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL136;
    }
    cpy_r_r161 = cpy_r_r179;
CPyL135: ;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output = cpy_r_r161;
    cpy_r_r180 = 1;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
    } else
        goto CPyL178;
CPyL136: ;
    cpy_r_r181 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r181;
    cpy_r_r182 = 1;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL175;
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 0;
    cpy_r_r183 = 1;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL175;
    }
    cpy_r_r184 = CPy_GetExcInfo();
    cpy_r_r185 = cpy_r_r184.f0;
    CPy_INCREF(cpy_r_r185);
    cpy_r_r186 = cpy_r_r184.f1;
    CPy_INCREF(cpy_r_r186);
    cpy_r_r187 = cpy_r_r184.f2;
    CPy_INCREF(cpy_r_r187);
    CPy_DecRef(cpy_r_r184.f0);
    CPy_DecRef(cpy_r_r184.f1);
    CPy_DecRef(cpy_r_r184.f2);
    cpy_r_r188 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__0", -1, CPyStatic_call___globals);
        goto CPyL284;
    }
    CPy_INCREF(cpy_r_r188);
CPyL139: ;
    cpy_r_r189 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__1", -1, CPyStatic_call___globals);
        goto CPyL285;
    }
    CPy_INCREF(cpy_r_r189);
CPyL140: ;
    PyObject *cpy_r_r190[4] = {cpy_r_r189, cpy_r_r185, cpy_r_r186, cpy_r_r187};
    cpy_r_r191 = (PyObject **)&cpy_r_r190;
    cpy_r_r192 = PyObject_Vectorcall(cpy_r_r188, cpy_r_r191, 4, 0);
    CPy_DecRef(cpy_r_r188);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL286;
    }
    CPy_DecRef(cpy_r_r189);
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    cpy_r_r193 = CPy_GetCoro(cpy_r_r192);
    CPy_DecRef(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL175;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r193;
    cpy_r_r194 = 1;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL175;
    }
    cpy_r_r195 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__8", -1, CPyStatic_call___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r195);
CPyL144: ;
    cpy_r_r196 = CPyIter_Next(cpy_r_r195);
    CPy_DecRef(cpy_r_r195);
    if (cpy_r_r196 != NULL) goto CPyL147;
    cpy_r_r197 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL175;
    }
    cpy_r_r198 = cpy_r_r197;
    cpy_r_r199 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r199;
    cpy_r_r200 = 1;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL287;
    } else
        goto CPyL169;
CPyL147: ;
    cpy_r_r201 = cpy_r_r196;
CPyL148: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 3;
    return cpy_r_r201;
CPyL149: ;
    cpy_r_r203 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r204 = cpy_r_type != cpy_r_r203;
    if (!cpy_r_r204) goto CPyL288;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL153;
    } else
        goto CPyL289;
CPyL151: ;
    CPy_Unreachable();
CPyL152: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL164;
CPyL153: ;
    cpy_r_r205 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r205;
    cpy_r_r206 = 1;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL290;
    }
    cpy_r_r207 = (PyObject **)&cpy_r_r5;
    cpy_r_r208 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__8", -1, CPyStatic_call___globals);
        goto CPyL290;
    }
    CPy_INCREF(cpy_r_r208);
CPyL155: ;
    cpy_r_r209 = CPy_YieldFromErrorHandle(cpy_r_r208, cpy_r_r207);
    CPy_DecRef(cpy_r_r208);
    if (unlikely(cpy_r_r209 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL290;
    }
    if (cpy_r_r209) goto CPyL159;
    cpy_r_r201 = cpy_r_r5;
    cpy_r_r210 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r210.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__9", -1, CPyStatic_call___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r210.f0);
    CPy_INCREF(cpy_r_r210.f1);
    CPy_INCREF(cpy_r_r210.f2);
CPyL158: ;
    CPy_RestoreExcInfo(cpy_r_r210);
    CPy_DecRef(cpy_r_r210.f0);
    CPy_DecRef(cpy_r_r210.f1);
    CPy_DecRef(cpy_r_r210.f2);
    goto CPyL148;
CPyL159: ;
    cpy_r_r198 = cpy_r_r5;
    cpy_r_r211 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r211.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__9", -1, CPyStatic_call___globals);
        goto CPyL292;
    }
    CPy_INCREF(cpy_r_r211.f0);
    CPy_INCREF(cpy_r_r211.f1);
    CPy_INCREF(cpy_r_r211.f2);
CPyL160: ;
    CPy_RestoreExcInfo(cpy_r_r211);
    CPy_DecRef(cpy_r_r211.f0);
    CPy_DecRef(cpy_r_r211.f1);
    CPy_DecRef(cpy_r_r211.f2);
    goto CPyL169;
CPyL161: ;
    cpy_r_r212 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r212.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__9", -1, CPyStatic_call___globals);
        goto CPyL175;
    }
    CPy_INCREF(cpy_r_r212.f0);
    CPy_INCREF(cpy_r_r212.f1);
    CPy_INCREF(cpy_r_r212.f2);
CPyL162: ;
    CPy_RestoreExcInfo(cpy_r_r212);
    CPy_DecRef(cpy_r_r212.f0);
    CPy_DecRef(cpy_r_r212.f1);
    CPy_DecRef(cpy_r_r212.f2);
    cpy_r_r213 = CPy_KeepPropagating();
    if (!cpy_r_r213) goto CPyL175;
    CPy_Unreachable();
CPyL164: ;
    cpy_r_r214 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__8", -1, CPyStatic_call___globals);
        goto CPyL293;
    }
    CPy_INCREF(cpy_r_r214);
CPyL165: ;
    cpy_r_r215 = CPyIter_Send(cpy_r_r214, cpy_r_arg);
    CPy_DECREF(cpy_r_r214);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r215 == NULL) goto CPyL167;
    cpy_r_r201 = cpy_r_r215;
    goto CPyL148;
CPyL167: ;
    cpy_r_r216 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL175;
    }
    cpy_r_r198 = cpy_r_r216;
CPyL169: ;
    cpy_r_r217 = PyObject_IsTrue(cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL175;
    }
    cpy_r_r219 = cpy_r_r217;
    if (cpy_r_r219) goto CPyL173;
    CPy_Reraise();
    if (!0) goto CPyL175;
    CPy_Unreachable();
CPyL173: ;
    cpy_r_r220 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r220.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__7", -1, CPyStatic_call___globals);
        goto CPyL179;
    }
    CPy_INCREF(cpy_r_r220.f0);
    CPy_INCREF(cpy_r_r220.f1);
    CPy_INCREF(cpy_r_r220.f2);
CPyL174: ;
    CPy_RestoreExcInfo(cpy_r_r220);
    CPy_DECREF(cpy_r_r220.f0);
    CPy_DECREF(cpy_r_r220.f1);
    CPy_DECREF(cpy_r_r220.f2);
    goto CPyL178;
CPyL175: ;
    cpy_r_r221 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r221.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__7", -1, CPyStatic_call___globals);
        goto CPyL179;
    }
    CPy_INCREF(cpy_r_r221.f0);
    CPy_INCREF(cpy_r_r221.f1);
    CPy_INCREF(cpy_r_r221.f2);
CPyL176: ;
    CPy_RestoreExcInfo(cpy_r_r221);
    CPy_DECREF(cpy_r_r221.f0);
    CPy_DECREF(cpy_r_r221.f1);
    CPy_DECREF(cpy_r_r221.f2);
    cpy_r_r222 = CPy_KeepPropagating();
    if (!cpy_r_r222) goto CPyL179;
    CPy_Unreachable();
CPyL178: ;
    tuple_T3OOO __tmp33 = { NULL, NULL, NULL };
    cpy_r_r223 = __tmp33;
    cpy_r_r9 = cpy_r_r223;
    goto CPyL180;
CPyL179: ;
    cpy_r_r224 = CPy_CatchError();
    cpy_r_r9 = cpy_r_r224;
CPyL180: ;
    cpy_r_r225 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r225 == 2)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__2", -1, CPyStatic_call___globals);
        goto CPyL216;
    }
CPyL181: ;
    if (!cpy_r_r225) goto CPyL213;
CPyL182: ;
    cpy_r_r226 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r227 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__0", -1, CPyStatic_call___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r227);
CPyL183: ;
    cpy_r_r228 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__1", -1, CPyStatic_call___globals);
        goto CPyL294;
    }
    CPy_INCREF(cpy_r_r228);
CPyL184: ;
    PyObject *cpy_r_r229[4] = {cpy_r_r228, cpy_r_r226, cpy_r_r226, cpy_r_r226};
    cpy_r_r230 = (PyObject **)&cpy_r_r229;
    cpy_r_r231 = PyObject_Vectorcall(cpy_r_r227, cpy_r_r230, 4, 0);
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL295;
    }
    CPy_DECREF(cpy_r_r228);
    cpy_r_r232 = CPy_GetCoro(cpy_r_r231);
    CPy_DECREF(cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL216;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r232;
    cpy_r_r233 = 1;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL216;
    }
    cpy_r_r234 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__10", -1, CPyStatic_call___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r234);
CPyL188: ;
    cpy_r_r235 = CPyIter_Next(cpy_r_r234);
    CPy_DECREF(cpy_r_r234);
    if (cpy_r_r235 != NULL) goto CPyL296;
    cpy_r_r236 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL216;
    }
    cpy_r_r237 = cpy_r_r236;
    CPy_DECREF(cpy_r_r237);
    cpy_r_r238 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r238;
    cpy_r_r239 = 1;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL216;
    } else
        goto CPyL213;
CPyL191: ;
    cpy_r_r240 = cpy_r_r235;
CPyL192: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 4;
    return cpy_r_r240;
CPyL193: ;
    cpy_r_r242 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r243 = cpy_r_type != cpy_r_r242;
    if (!cpy_r_r243) goto CPyL297;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL197;
    } else
        goto CPyL298;
CPyL195: ;
    CPy_Unreachable();
CPyL196: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL208;
CPyL197: ;
    cpy_r_r244 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r244;
    cpy_r_r245 = 1;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL299;
    }
    cpy_r_r246 = (PyObject **)&cpy_r_r7;
    cpy_r_r247 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__10", -1, CPyStatic_call___globals);
        goto CPyL299;
    }
    CPy_INCREF(cpy_r_r247);
CPyL199: ;
    cpy_r_r248 = CPy_YieldFromErrorHandle(cpy_r_r247, cpy_r_r246);
    CPy_DecRef(cpy_r_r247);
    if (unlikely(cpy_r_r248 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL299;
    }
    if (cpy_r_r248) goto CPyL203;
    cpy_r_r240 = cpy_r_r7;
    cpy_r_r249 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r249.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__11", -1, CPyStatic_call___globals);
        goto CPyL300;
    }
    CPy_INCREF(cpy_r_r249.f0);
    CPy_INCREF(cpy_r_r249.f1);
    CPy_INCREF(cpy_r_r249.f2);
    goto CPyL301;
CPyL202: ;
    CPy_RestoreExcInfo(cpy_r_r249);
    CPy_DecRef(cpy_r_r249.f0);
    CPy_DecRef(cpy_r_r249.f1);
    CPy_DecRef(cpy_r_r249.f2);
    goto CPyL192;
CPyL203: ;
    cpy_r_r237 = cpy_r_r7;
    CPy_DecRef(cpy_r_r237);
    cpy_r_r250 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r250.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__11", -1, CPyStatic_call___globals);
        goto CPyL205;
    }
    CPy_INCREF(cpy_r_r250.f0);
    CPy_INCREF(cpy_r_r250.f1);
    CPy_INCREF(cpy_r_r250.f2);
CPyL204: ;
    CPy_RestoreExcInfo(cpy_r_r250);
    CPy_DecRef(cpy_r_r250.f0);
    CPy_DecRef(cpy_r_r250.f1);
    CPy_DecRef(cpy_r_r250.f2);
    goto CPyL213;
CPyL205: ;
    cpy_r_r251 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r251.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__11", -1, CPyStatic_call___globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r251.f0);
    CPy_INCREF(cpy_r_r251.f1);
    CPy_INCREF(cpy_r_r251.f2);
CPyL206: ;
    CPy_RestoreExcInfo(cpy_r_r251);
    CPy_DecRef(cpy_r_r251.f0);
    CPy_DecRef(cpy_r_r251.f1);
    CPy_DecRef(cpy_r_r251.f2);
    cpy_r_r252 = CPy_KeepPropagating();
    if (!cpy_r_r252) {
        goto CPyL216;
    } else
        goto CPyL302;
CPyL207: ;
    CPy_Unreachable();
CPyL208: ;
    cpy_r_r253 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__10", -1, CPyStatic_call___globals);
        goto CPyL303;
    }
    CPy_INCREF(cpy_r_r253);
CPyL209: ;
    cpy_r_r254 = CPyIter_Send(cpy_r_r253, cpy_r_arg);
    CPy_DECREF(cpy_r_r253);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r254 == NULL) {
        goto CPyL211;
    } else
        goto CPyL304;
CPyL210: ;
    cpy_r_r240 = cpy_r_r254;
    goto CPyL192;
CPyL211: ;
    cpy_r_r255 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL216;
    }
    cpy_r_r237 = cpy_r_r255;
    CPy_DECREF(cpy_r_r237);
CPyL213: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL220;
    CPy_Reraise();
    if (!0) {
        goto CPyL216;
    } else
        goto CPyL305;
CPyL215: ;
    CPy_Unreachable();
CPyL216: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL218;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
CPyL218: ;
    cpy_r_r256 = CPy_KeepPropagating();
    if (!cpy_r_r256) goto CPyL244;
    CPy_Unreachable();
CPyL220: ;
    cpy_r_r257 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output;
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "output", 166, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r257);
CPyL221: ;
    cpy_r_r258 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 166, CPyStatic_call___globals);
        goto CPyL306;
    }
    CPy_INCREF_NO_IMM(cpy_r_r258);
CPyL222: ;
    cpy_r_r259 = ((multicall___call___CallObject *)cpy_r_r258)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r259);
    CPy_DECREF_NO_IMM(cpy_r_r258);
    cpy_r_r260 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 166, CPyStatic_call___globals);
        goto CPyL307;
    }
    CPy_INCREF_NO_IMM(cpy_r_r260);
CPyL223: ;
    cpy_r_r261 = ((multicall___call___CallObject *)cpy_r_r260)->_returns;
    CPy_INCREF(cpy_r_r261);
    CPy_DECREF_NO_IMM(cpy_r_r260);
    cpy_r_r262 = NULL;
    cpy_r_r263 = CPyDef_call___Call___decode_output(cpy_r_r257, cpy_r_r259, cpy_r_r261, cpy_r_r262);
    CPy_DECREF(cpy_r_r257);
    CPy_DECREF_NO_IMM(cpy_r_r259);
    CPy_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 166, CPyStatic_call___globals);
        goto CPyL244;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result = cpy_r_r263;
    cpy_r_r264 = 1;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 166, CPyStatic_call___globals);
        goto CPyL244;
    }
    cpy_r_r265 = CPyStatics[12]; /* '%s returned %s' */
    cpy_r_r266 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 167, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF_NO_IMM(cpy_r_r266);
CPyL226: ;
    cpy_r_r267 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "result", 167, CPyStatic_call___globals);
        goto CPyL308;
    }
    CPy_INCREF(cpy_r_r267);
CPyL227: ;
    cpy_r_r268 = CPyStatic_call___log_debug;
    if (unlikely(cpy_r_r268 == NULL)) {
        goto CPyL309;
    } else
        goto CPyL230;
CPyL228: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r269 = 0;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 167, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL230: ;
    PyObject *cpy_r_r270[3] = {cpy_r_r265, cpy_r_r266, cpy_r_r267};
    cpy_r_r271 = (PyObject **)&cpy_r_r270;
    cpy_r_r272 = PyObject_Vectorcall(cpy_r_r268, cpy_r_r271, 3, 0);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 167, CPyStatic_call___globals);
        goto CPyL310;
    } else
        goto CPyL311;
CPyL231: ;
    CPy_DECREF_NO_IMM(cpy_r_r266);
    CPy_DECREF(cpy_r_r267);
    cpy_r_r273 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "result", 168, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_INCREF(cpy_r_r273);
CPyL232: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL236;
    CPyGen_SetStopIterationValue(cpy_r_r273);
    CPy_DECREF(cpy_r_r273);
    if (!0) goto CPyL244;
    CPy_Unreachable();
CPyL236: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r273;
    return 0;
CPyL237: ;
    cpy_r_r275 = cpy_r_r10 == 0;
    if (cpy_r_r275) goto CPyL312;
    cpy_r_r276 = cpy_r_r10 == 1;
    if (cpy_r_r276) {
        goto CPyL313;
    } else
        goto CPyL314;
CPyL239: ;
    cpy_r_r277 = cpy_r_r10 == 2;
    if (cpy_r_r277) {
        goto CPyL315;
    } else
        goto CPyL316;
CPyL240: ;
    cpy_r_r278 = cpy_r_r10 == 3;
    if (cpy_r_r278) {
        goto CPyL317;
    } else
        goto CPyL318;
CPyL241: ;
    cpy_r_r279 = cpy_r_r10 == 4;
    if (cpy_r_r279) {
        goto CPyL193;
    } else
        goto CPyL319;
CPyL242: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r280 = 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL244: ;
    cpy_r_r281 = NULL;
    return cpy_r_r281;
CPyL245: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL10;
CPyL246: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL244;
CPyL247: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL16;
CPyL248: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL244;
CPyL249: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL43;
CPyL250: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL244;
CPyL251: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL244;
CPyL252: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL244;
CPyL253: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL244;
CPyL254: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL244;
CPyL255: ;
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    goto CPyL244;
CPyL256: ;
    CPy_DecRef(cpy_r_r78);
    goto CPyL244;
CPyL257: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL244;
CPyL258: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL62;
CPyL259: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL61;
CPyL260: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL71;
CPyL261: ;
    CPy_DecRef(cpy_r_r98);
    goto CPyL71;
CPyL262: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL244;
CPyL263: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL136;
CPyL264: ;
    CPy_DecRef(cpy_r_r122);
    goto CPyL136;
CPyL265: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    goto CPyL136;
CPyL266: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    goto CPyL136;
CPyL267: ;
    CPy_DECREF(cpy_r_r127);
    goto CPyL91;
CPyL268: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r127);
    goto CPyL136;
CPyL269: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    goto CPyL136;
CPyL270: ;
    CPy_DECREF(cpy_r_r137);
    goto CPyL98;
CPyL271: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r137);
    goto CPyL136;
CPyL272: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    goto CPyL136;
CPyL273: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r146);
    goto CPyL136;
CPyL274: ;
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    goto CPyL136;
CPyL275: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL136;
CPyL276: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL136;
CPyL277: ;
    CPy_DecRef(cpy_r_r161);
    goto CPyL136;
CPyL278: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL118;
CPyL279: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL117;
CPyL280: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL127;
CPyL281: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL127;
CPyL282: ;
    CPy_DecRef(cpy_r_r161);
    goto CPyL127;
CPyL283: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL136;
CPyL284: ;
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    goto CPyL175;
CPyL285: ;
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r188);
    goto CPyL175;
CPyL286: ;
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r189);
    goto CPyL175;
CPyL287: ;
    CPy_DecRef(cpy_r_r198);
    goto CPyL175;
CPyL288: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL152;
CPyL289: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL151;
CPyL290: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL161;
CPyL291: ;
    CPy_DecRef(cpy_r_r201);
    goto CPyL161;
CPyL292: ;
    CPy_DecRef(cpy_r_r198);
    goto CPyL161;
CPyL293: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL175;
CPyL294: ;
    CPy_DecRef(cpy_r_r227);
    goto CPyL216;
CPyL295: ;
    CPy_DecRef(cpy_r_r228);
    goto CPyL216;
CPyL296: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL191;
CPyL297: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL196;
CPyL298: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL195;
CPyL299: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL205;
CPyL300: ;
    CPy_DecRef(cpy_r_r240);
    goto CPyL205;
CPyL301: ;
    CPy_XDecRef(cpy_r_r9.f0);
    CPy_XDecRef(cpy_r_r9.f1);
    CPy_XDecRef(cpy_r_r9.f2);
    goto CPyL202;
CPyL302: ;
    CPy_XDecRef(cpy_r_r9.f0);
    CPy_XDecRef(cpy_r_r9.f1);
    CPy_XDecRef(cpy_r_r9.f2);
    goto CPyL207;
CPyL303: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL216;
CPyL304: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL210;
CPyL305: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL215;
CPyL306: ;
    CPy_DecRef(cpy_r_r257);
    goto CPyL244;
CPyL307: ;
    CPy_DecRef(cpy_r_r257);
    CPy_DecRef(cpy_r_r259);
    goto CPyL244;
CPyL308: ;
    CPy_DecRef(cpy_r_r266);
    goto CPyL244;
CPyL309: ;
    CPy_DecRef(cpy_r_r266);
    CPy_DecRef(cpy_r_r267);
    goto CPyL228;
CPyL310: ;
    CPy_DecRef(cpy_r_r266);
    CPy_DecRef(cpy_r_r267);
    goto CPyL244;
CPyL311: ;
    CPy_DECREF(cpy_r_r272);
    goto CPyL231;
CPyL312: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL1;
CPyL313: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL59;
CPyL314: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL239;
CPyL315: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL115;
CPyL316: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL240;
CPyL317: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL149;
CPyL318: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL241;
CPyL319: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL242;
}

PyObject *CPyDef_call___coroutine_Call_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_call___coroutine_Call_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_call___coroutine_Call_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.call.coroutine_Call_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___coroutine_Call_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__next__", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___coroutine_Call_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_call___coroutine_Call_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_call___coroutine_Call_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.call.coroutine_Call_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_call___coroutine_Call_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "send", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___coroutine_Call_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_call___coroutine_Call_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_call___coroutine_Call_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.call.coroutine_Call_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___coroutine_Call_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__iter__", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___coroutine_Call_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_call___coroutine_Call_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_call___coroutine_Call_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.call.coroutine_Call_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_call___coroutine_Call_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "throw", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___coroutine_Call_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[24]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_call___coroutine_Call_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[25]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp34 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp34);
    PyObject *__tmp35 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp35);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_call___coroutine_Call_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_call___coroutine_Call_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.call.coroutine_Call_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___coroutine_Call_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "close", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___coroutine_Call_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_call___coroutine_Call_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_call___coroutine_Call_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.call.coroutine_Call_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_call___coroutine_Call_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "__await__", -1, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___Call___coroutine(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r__w3, PyObject *cpy_r_block_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_args != NULL) goto CPyL13;
    cpy_r_r0 = Py_None;
    cpy_r_args = cpy_r_r0;
CPyL2: ;
    if (cpy_r__w3 != NULL) goto CPyL14;
    cpy_r_r1 = Py_None;
    cpy_r__w3 = cpy_r_r1;
CPyL4: ;
    if (cpy_r_block_id != NULL) goto CPyL15;
    cpy_r_r2 = Py_None;
    cpy_r_block_id = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = CPyDef_call___coroutine_Call_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL16;
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__self);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL17;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__args != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__args);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__args = cpy_r_args;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL18;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute___w3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute___w3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute___w3 = cpy_r__w3;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL19;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__block_id != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__block_id);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->___mypyc_generator_attribute__block_id = cpy_r_block_id;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL20;
    }
    return cpy_r_r3;
CPyL12: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL13: ;
    CPy_INCREF(cpy_r_args);
    goto CPyL2;
CPyL14: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL4;
CPyL15: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL6;
CPyL16: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
}

PyObject *CPyPy_call___Call___coroutine(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"args", "_w3", "block_id", 0};
    static CPyArg_Parser parser = {"|OO$O:coroutine", kwlist, 0};
    PyObject *obj_args = NULL;
    PyObject *obj__w3 = NULL;
    PyObject *obj_block_id = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, &obj__w3, &obj_block_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_call___Call))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.call.Call", obj_self); 
        goto fail;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL36;
    }
    arg_args = obj_args;
    if (arg_args != NULL) goto __LL36;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL36;
    CPy_TypeError("object or None", obj_args); 
    goto fail;
__LL36: ;
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
        goto __LL37;
    }
    arg__w3 = obj__w3;
    if (arg__w3 != NULL) goto __LL37;
    if (obj__w3 == Py_None)
        arg__w3 = obj__w3;
    else {
        arg__w3 = NULL;
    }
    if (arg__w3 != NULL) goto __LL37;
    CPy_TypeError("object or None", obj__w3); 
    goto fail;
__LL37: ;
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL38;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL38;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL38;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL38: ;
    PyObject *retval = CPyDef_call___Call___coroutine(arg_self, arg_args, arg__w3, arg_block_id);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
    return NULL;
}

PyObject *CPyDef_call___prep_args(PyObject *cpy_r_target, PyObject *cpy_r_signature, PyObject *cpy_r_args, PyObject *cpy_r_block_id, PyObject *cpy_r_origin, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPy_INCREF(cpy_r_args);
    if (PyList_Check(cpy_r_args))
        cpy_r_r0 = cpy_r_args;
    else {
        cpy_r_r0 = NULL;
    }
    if (cpy_r_r0 != NULL) goto __LL39;
    if (PyTuple_Check(cpy_r_args))
        cpy_r_r0 = cpy_r_args;
    else {
        cpy_r_r0 = NULL;
    }
    if (cpy_r_r0 != NULL) goto __LL39;
    if (cpy_r_args == Py_None)
        cpy_r_r0 = cpy_r_args;
    else {
        cpy_r_r0 = NULL;
    }
    if (cpy_r_r0 != NULL) goto __LL39;
    CPy_TypeErrorTraceback("multicall/call.py", "prep_args", 181, CPyStatic_call___globals, "union[list, tuple, None]", cpy_r_args);
    goto CPyL22;
__LL39: ;
    cpy_r_r1 = CPyDef_signature___Signature___encode_data(cpy_r_signature, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 181, CPyStatic_call___globals);
        goto CPyL22;
    }
    cpy_r_r2 = CPyStatics[26]; /* 'to' */
    cpy_r_r3 = CPyStatics[27]; /* 'data' */
    cpy_r_r4 = CPyDict_Build(2, cpy_r_r2, cpy_r_target, cpy_r_r3, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 183, CPyStatic_call___globals);
        goto CPyL22;
    }
    cpy_r_r5 = PyList_New(2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 184, CPyStatic_call___globals);
        goto CPyL23;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_r4);
    *(PyObject * *)cpy_r_r7 = cpy_r_r4;
    CPy_INCREF(cpy_r_block_id);
    cpy_r_r8 = cpy_r_r7 + 8;
    *(PyObject * *)cpy_r_r8 = cpy_r_block_id;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_origin != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL9;
    CPy_INCREF(cpy_r_origin);
    if (likely(cpy_r_origin != Py_None))
        cpy_r_r11 = cpy_r_origin;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "prep_args", 176, CPyStatic_call___globals, "str", cpy_r_origin);
        goto CPyL24;
    }
    cpy_r_r12 = CPyStr_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL9;
    CPy_INCREF(cpy_r_origin);
    if (likely(cpy_r_origin != Py_None))
        cpy_r_r13 = cpy_r_origin;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "prep_args", 187, CPyStatic_call___globals, "str", cpy_r_origin);
        goto CPyL24;
    }
    cpy_r_r14 = CPyStatics[28]; /* 'from' */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r4, cpy_r_r14, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 187, CPyStatic_call___globals);
        goto CPyL24;
    }
CPyL9: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_gas_limit != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL25;
    if (likely(PyLong_Check(cpy_r_gas_limit)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_gas_limit);
    else {
        CPy_TypeError("int", cpy_r_gas_limit); cpy_r_r19 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 177, CPyStatic_call___globals);
        goto CPyL24;
    }
    cpy_r_r20 = cpy_r_r19 != 0;
    CPyTagged_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL25;
    if (likely(PyLong_Check(cpy_r_gas_limit)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_gas_limit);
    else {
        CPy_TypeError("int", cpy_r_gas_limit); cpy_r_r21 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 190, CPyStatic_call___globals);
        goto CPyL24;
    }
    cpy_r_r22 = CPyStatics[29]; /* 'gas' */
    cpy_r_r23 = CPyTagged_StealAsObject(cpy_r_r21);
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r4, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 190, CPyStatic_call___globals);
        goto CPyL26;
    }
CPyL14: ;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_state_override_code != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL21;
    CPy_INCREF(cpy_r_state_override_code);
    if (likely(cpy_r_state_override_code != Py_None))
        cpy_r_r28 = cpy_r_state_override_code;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "prep_args", 178, CPyStatic_call___globals, "str", cpy_r_state_override_code);
        goto CPyL26;
    }
    cpy_r_r29 = CPyStr_IsTrue(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = CPyStatics[30]; /* 'code' */
    CPy_INCREF(cpy_r_state_override_code);
    if (likely(cpy_r_state_override_code != Py_None))
        cpy_r_r31 = cpy_r_state_override_code;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals, "str", cpy_r_state_override_code);
        goto CPyL26;
    }
    cpy_r_r32 = CPyDict_Build(1, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals);
        goto CPyL26;
    }
    cpy_r_r33 = CPyDict_Build(1, cpy_r_target, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals);
        goto CPyL26;
    }
    cpy_r_r34 = PyList_Append(cpy_r_r5, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals);
        goto CPyL26;
    }
CPyL21: ;
    return cpy_r_r5;
CPyL22: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL23: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL25: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL14;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
}

PyObject *CPyPy_call___prep_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"target", "signature", "args", "block_id", "origin", "gas_limit", "state_override_code", 0};
    static CPyArg_Parser parser = {"OOOOOOO:prep_args", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_signature;
    PyObject *obj_args;
    PyObject *obj_block_id;
    PyObject *obj_origin;
    PyObject *obj_gas_limit;
    PyObject *obj_state_override_code;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_signature, &obj_args, &obj_block_id, &obj_origin, &obj_gas_limit, &obj_state_override_code)) {
        return NULL;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *arg_signature;
    if (likely(Py_TYPE(obj_signature) == CPyType_signature___Signature))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("multicall.signature.Signature", obj_signature); 
        goto fail;
    }
    PyObject *arg_args;
    arg_args = obj_args;
    if (arg_args != NULL) goto __LL40;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL40;
    CPy_TypeError("object or None", obj_args); 
    goto fail;
__LL40: ;
    PyObject *arg_block_id;
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL41;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL41;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL41: ;
    PyObject *arg_origin;
    if (PyUnicode_Check(obj_origin))
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL42;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL42;
    CPy_TypeError("str or None", obj_origin); 
    goto fail;
__LL42: ;
    PyObject *arg_gas_limit;
    if (PyLong_Check(obj_gas_limit))
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL43;
    if (obj_gas_limit == Py_None)
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL43;
    CPy_TypeError("int or None", obj_gas_limit); 
    goto fail;
__LL43: ;
    PyObject *arg_state_override_code;
    if (PyUnicode_Check(obj_state_override_code))
        arg_state_override_code = obj_state_override_code;
    else {
        arg_state_override_code = NULL;
    }
    if (arg_state_override_code != NULL) goto __LL44;
    if (obj_state_override_code == Py_None)
        arg_state_override_code = obj_state_override_code;
    else {
        arg_state_override_code = NULL;
    }
    if (arg_state_override_code != NULL) goto __LL44;
    CPy_TypeError("str or None", obj_state_override_code); 
    goto fail;
__LL44: ;
    PyObject *retval = CPyDef_call___prep_args(arg_target, arg_signature, arg_args, arg_block_id, arg_origin, arg_gas_limit, arg_state_override_code);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/call.py", "prep_args", 171, CPyStatic_call___globals);
    return NULL;
}

char CPyDef_call_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    tuple_T4OOOO cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject **cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", -1, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[387]; /* ('Any', 'Callable', 'Final', 'Generator', 'List',
                                   'Optional', 'Sequence', 'Tuple', 'Union', 'final') */
    cpy_r_r6 = CPyStatics[42]; /* 'typing' */
    cpy_r_r7 = CPyStatic_call___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 2, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_eth_retry;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {4};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[389]; /* (('eth_retry', 'eth_retry', 'eth_retry'),) */
    cpy_r_r15 = CPyStatic_call___globals;
    cpy_r_r16 = CPyStatics[44]; /* 'multicall/call.py' */
    cpy_r_r17 = CPyStatics[45]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL45;
    cpy_r_r19 = CPyStatics[390]; /* ('to_checksum_address',) */
    cpy_r_r20 = CPyStatics[46]; /* 'cchecksum' */
    cpy_r_r21 = CPyStatic_call___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 5, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_cchecksum = cpy_r_r22;
    CPy_INCREF(CPyModule_cchecksum);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[391]; /* ('Address', 'ChecksumAddress', 'HexAddress', 'HexStr') */
    cpy_r_r24 = CPyStatics[51]; /* 'eth_typing' */
    cpy_r_r25 = CPyStatic_call___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 6, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_eth_typing = cpy_r_r26;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[392]; /* ('Decodable',) */
    cpy_r_r28 = CPyStatics[53]; /* 'eth_typing.abi' */
    cpy_r_r29 = CPyStatic_call___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 7, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_eth_typing___abi = cpy_r_r30;
    CPy_INCREF(CPyModule_eth_typing___abi);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[393]; /* ('Web3',) */
    cpy_r_r32 = CPyStatics[55]; /* 'web3' */
    cpy_r_r33 = CPyStatic_call___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 8, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_web3 = cpy_r_r34;
    CPy_INCREF(CPyModule_web3);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[394]; /* ('Network', 'w3') */
    cpy_r_r36 = CPyStatics[57]; /* 'multicall.constants' */
    cpy_r_r37 = CPyStatic_call___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 10, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_multicall___constants = cpy_r_r38;
    CPy_INCREF(CPyModule_multicall___constants);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[395]; /* ('StateOverrideNotSupported',) */
    cpy_r_r40 = CPyStatics[59]; /* 'multicall.exceptions' */
    cpy_r_r41 = CPyStatic_call___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 11, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_multicall___exceptions = cpy_r_r42;
    CPy_INCREF(CPyModule_multicall___exceptions);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[396]; /* ('setup_logger',) */
    cpy_r_r44 = CPyStatics[61]; /* 'multicall.loggers' */
    cpy_r_r45 = CPyStatic_call___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 12, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_multicall___loggers = cpy_r_r46;
    CPy_INCREF(CPyModule_multicall___loggers);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[397]; /* ('Signature', '_get_signature') */
    cpy_r_r48 = CPyStatics[64]; /* 'multicall.signature' */
    cpy_r_r49 = CPyStatic_call___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 13, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_multicall___signature = cpy_r_r50;
    CPy_INCREF(CPyModule_multicall___signature);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[398]; /* ('_get_semaphore', 'chain_id', 'get_async_w3',
                                    'state_override_supported') */
    cpy_r_r52 = CPyStatics[65]; /* 'multicall.utils' */
    cpy_r_r53 = CPyStatic_call___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 14, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyModule_multicall___utils = cpy_r_r54;
    CPy_INCREF(CPyModule_multicall___utils);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatic_call___globals;
    cpy_r_r56 = CPyStatics[66]; /* '__name__' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 21, CPyStatic_call___globals);
        goto CPyL45;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "<module>", 21, CPyStatic_call___globals, "str", cpy_r_r57);
        goto CPyL45;
    }
    cpy_r_r59 = CPyDef_loggers___setup_logger(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 21, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyStatic_call___logger = cpy_r_r59;
    CPy_INCREF(CPyStatic_call___logger);
    cpy_r_r60 = CPyStatic_call___globals;
    cpy_r_r61 = CPyStatics[67]; /* 'logger' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 21, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r64 = CPyStatic_call___logger;
    if (likely(cpy_r_r64 != NULL)) goto CPyL21;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 22, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r66 = CPyStatics[68]; /* 'debug' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 22, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPyStatic_call___log_debug = cpy_r_r67;
    CPy_INCREF(CPyStatic_call___log_debug);
    cpy_r_r68 = CPyStatic_call___globals;
    cpy_r_r69 = CPyStatics[69]; /* 'log_debug' */
    cpy_r_r70 = CPyDict_SetItem(cpy_r_r68, cpy_r_r69, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 22, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r72 = CPyStatic_call___globals;
    cpy_r_r73 = CPyStatics[40]; /* 'Union' */
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 24, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r75 = (PyObject *)&PyUnicode_Type;
    cpy_r_r76 = CPyStatic_call___globals;
    cpy_r_r77 = CPyStatics[47]; /* 'Address' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 24, CPyStatic_call___globals);
        goto CPyL46;
    }
    cpy_r_r79 = CPyStatic_call___globals;
    cpy_r_r80 = CPyStatics[48]; /* 'ChecksumAddress' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 24, CPyStatic_call___globals);
        goto CPyL47;
    }
    cpy_r_r82 = CPyStatic_call___globals;
    cpy_r_r83 = CPyStatics[49]; /* 'HexAddress' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 24, CPyStatic_call___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r75);
    cpy_r_r85.f0 = cpy_r_r75;
    cpy_r_r85.f1 = cpy_r_r78;
    cpy_r_r85.f2 = cpy_r_r81;
    cpy_r_r85.f3 = cpy_r_r84;
    cpy_r_r86 = PyTuple_New(4);
    if (unlikely(cpy_r_r86 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp45 = cpy_r_r85.f0;
    PyTuple_SET_ITEM(cpy_r_r86, 0, __tmp45);
    PyObject *__tmp46 = cpy_r_r85.f1;
    PyTuple_SET_ITEM(cpy_r_r86, 1, __tmp46);
    PyObject *__tmp47 = cpy_r_r85.f2;
    PyTuple_SET_ITEM(cpy_r_r86, 2, __tmp47);
    PyObject *__tmp48 = cpy_r_r85.f3;
    PyTuple_SET_ITEM(cpy_r_r86, 3, __tmp48);
    cpy_r_r87 = PyObject_GetItem(cpy_r_r74, cpy_r_r86);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 24, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r88 = CPyStatic_call___globals;
    cpy_r_r89 = CPyStatics[70]; /* 'AnyAddress' */
    cpy_r_r90 = CPyDict_SetItem(cpy_r_r88, cpy_r_r89, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 24, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r92 = NULL;
    cpy_r_r93 = CPyStatics[71]; /* 'multicall.call' */
    cpy_r_r94 = (PyObject *)CPyType_call___Call_template;
    cpy_r_r95 = CPyType_FromTemplate(cpy_r_r94, cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 28, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r96 = CPyDef_call___Call_trait_vtable_setup();
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("multicall/call.py", "<module>", -1, CPyStatic_call___globals);
        goto CPyL49;
    }
    cpy_r_r97 = CPyStatics[72]; /* '__mypyc_attrs__' */
    cpy_r_r98 = CPyStatics[73]; /* 'target' */
    cpy_r_r99 = CPyStatics[74]; /* 'returns' */
    cpy_r_r100 = CPyStatics[75]; /* 'block_id' */
    cpy_r_r101 = CPyStatics[76]; /* 'gas_limit' */
    cpy_r_r102 = CPyStatics[77]; /* 'state_override_code' */
    cpy_r_r103 = CPyStatics[9]; /* 'w3' */
    cpy_r_r104 = CPyStatics[78]; /* 'origin' */
    cpy_r_r105 = CPyStatics[79]; /* 'function' */
    cpy_r_r106 = CPyStatics[80]; /* 'args' */
    cpy_r_r107 = CPyStatics[81]; /* 'signature' */
    cpy_r_r108 = PyTuple_Pack(10, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 28, CPyStatic_call___globals);
        goto CPyL49;
    }
    cpy_r_r109 = PyObject_SetAttr(cpy_r_r95, cpy_r_r97, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 28, CPyStatic_call___globals);
        goto CPyL49;
    }
    CPyType_call___Call = (PyTypeObject *)cpy_r_r95;
    CPy_INCREF(CPyType_call___Call);
    cpy_r_r111 = CPyStatic_call___globals;
    cpy_r_r112 = CPyStatics[82]; /* 'Call' */
    cpy_r_r113 = PyDict_SetItem(cpy_r_r111, cpy_r_r112, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 28, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r115 = (PyObject *)CPyType_call___Call;
    cpy_r_r116 = CPyStatics[83]; /* '__call__' */
    cpy_r_r117 = CPyObject_GetAttr(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 110, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r118 = CPyModule_eth_retry;
    cpy_r_r119 = CPyStatics[84]; /* 'auto_retry' */
    cpy_r_r120 = CPyObject_GetAttr(cpy_r_r118, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 109, CPyStatic_call___globals);
        goto CPyL50;
    }
    cpy_r_r121 = CPyStatics[323]; /* 1 */
    cpy_r_r122 = CPyStatics[324]; /* 3 */
    PyObject *cpy_r_r123[2] = {cpy_r_r121, cpy_r_r122};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = CPyStatics[399]; /* ('min_sleep_time', 'max_sleep_time') */
    cpy_r_r126 = PyObject_Vectorcall(cpy_r_r120, cpy_r_r124, 0, cpy_r_r125);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 109, CPyStatic_call___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r127[1] = {cpy_r_r117};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = PyObject_Vectorcall(cpy_r_r126, cpy_r_r128, 1, 0);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 110, CPyStatic_call___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_r117);
    cpy_r_r130 = CPyStatics[83]; /* '__call__' */
    cpy_r_r131 = PyObject_SetAttr(cpy_r_r115, cpy_r_r130, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 110, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r133 = (PyObject *)CPyType_call___Call;
    cpy_r_r134 = CPyStatics[13]; /* 'coroutine' */
    cpy_r_r135 = CPyObject_GetAttr(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 139, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r136 = CPyModule_eth_retry;
    cpy_r_r137 = CPyStatics[84]; /* 'auto_retry' */
    cpy_r_r138 = CPyObject_GetAttr(cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 138, CPyStatic_call___globals);
        goto CPyL51;
    }
    cpy_r_r139 = CPyStatics[323]; /* 1 */
    cpy_r_r140 = CPyStatics[324]; /* 3 */
    PyObject *cpy_r_r141[2] = {cpy_r_r139, cpy_r_r140};
    cpy_r_r142 = (PyObject **)&cpy_r_r141;
    cpy_r_r143 = CPyStatics[399]; /* ('min_sleep_time', 'max_sleep_time') */
    cpy_r_r144 = PyObject_Vectorcall(cpy_r_r138, cpy_r_r142, 0, cpy_r_r143);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 138, CPyStatic_call___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r145[1] = {cpy_r_r135};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = PyObject_Vectorcall(cpy_r_r144, cpy_r_r146, 1, 0);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 139, CPyStatic_call___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r135);
    cpy_r_r148 = CPyStatics[13]; /* 'coroutine' */
    cpy_r_r149 = PyObject_SetAttr(cpy_r_r133, cpy_r_r148, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("multicall/call.py", "<module>", 139, CPyStatic_call___globals);
        goto CPyL45;
    }
    return 1;
CPyL45: ;
    cpy_r_r151 = 2;
    return cpy_r_r151;
CPyL46: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r78);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r81);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r135);
    goto CPyL45;
}
static PyMethodDef constantsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_multicall___constants(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___constants__internal, "__name__");
    CPyStatic_constants___globals = PyModule_GetDict(CPyModule_multicall___constants__internal);
    if (unlikely(CPyStatic_constants___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_constants_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_multicall___constants__internal);
    Py_CLEAR(modname);
    CPyTagged_XDECREF(CPyStatic_constants___GAS_LIMIT);
    CPyStatic_constants___GAS_LIMIT = CPY_INT_TAG;
    CPy_XDECREF(CPyStatic_constants___MULTICALL2_BYTECODE);
    CPyStatic_constants___MULTICALL2_BYTECODE = NULL;
    CPy_XDECREF(CPyStatic_constants___MULTICALL3_BYTECODE);
    CPyStatic_constants___MULTICALL3_BYTECODE = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Mainnet);
    CPyStatic_constants___Network___Mainnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Ropsten);
    CPyStatic_constants___Network___Ropsten = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Rinkeby);
    CPyStatic_constants___Network___Rinkeby = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Gorli);
    CPyStatic_constants___Network___Gorli = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Optimism);
    CPyStatic_constants___Network___Optimism = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___CostonTestnet);
    CPyStatic_constants___Network___CostonTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___ThundercoreTestnet);
    CPyStatic_constants___Network___ThundercoreTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___SongbirdCanaryNetwork);
    CPyStatic_constants___Network___SongbirdCanaryNetwork = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Cronos);
    CPyStatic_constants___Network___Cronos = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___RSK);
    CPyStatic_constants___Network___RSK = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___RSKTestnet);
    CPyStatic_constants___Network___RSKTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Kovan);
    CPyStatic_constants___Network___Kovan = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Bsc);
    CPyStatic_constants___Network___Bsc = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___OKC);
    CPyStatic_constants___Network___OKC = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___OptimismKovan);
    CPyStatic_constants___Network___OptimismKovan = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___BscTestnet);
    CPyStatic_constants___Network___BscTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Gnosis);
    CPyStatic_constants___Network___Gnosis = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Velas);
    CPyStatic_constants___Network___Velas = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Thundercore);
    CPyStatic_constants___Network___Thundercore = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Coston2Testnet);
    CPyStatic_constants___Network___Coston2Testnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Fuse);
    CPyStatic_constants___Network___Fuse = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Heco);
    CPyStatic_constants___Network___Heco = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Polygon);
    CPyStatic_constants___Network___Polygon = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Fantom);
    CPyStatic_constants___Network___Fantom = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Boba);
    CPyStatic_constants___Network___Boba = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___KCC);
    CPyStatic_constants___Network___KCC = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___ZkSync);
    CPyStatic_constants___Network___ZkSync = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___OptimismGorli);
    CPyStatic_constants___Network___OptimismGorli = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Astar);
    CPyStatic_constants___Network___Astar = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Metis);
    CPyStatic_constants___Network___Metis = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Moonbeam);
    CPyStatic_constants___Network___Moonbeam = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Moonriver);
    CPyStatic_constants___Network___Moonriver = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___MoonbaseAlphaTestnet);
    CPyStatic_constants___Network___MoonbaseAlphaTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Milkomeda);
    CPyStatic_constants___Network___Milkomeda = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Kava);
    CPyStatic_constants___Network___Kava = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___FantomTestnet);
    CPyStatic_constants___Network___FantomTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Canto);
    CPyStatic_constants___Network___Canto = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Klaytn);
    CPyStatic_constants___Network___Klaytn = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Base);
    CPyStatic_constants___Network___Base = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___EvmosTestnet);
    CPyStatic_constants___Network___EvmosTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Evmos);
    CPyStatic_constants___Network___Evmos = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Holesky);
    CPyStatic_constants___Network___Holesky = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Arbitrum);
    CPyStatic_constants___Network___Arbitrum = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Celo);
    CPyStatic_constants___Network___Celo = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Oasis);
    CPyStatic_constants___Network___Oasis = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___AvalancheFuji);
    CPyStatic_constants___Network___AvalancheFuji = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Avax);
    CPyStatic_constants___Network___Avax = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___GodwokenTestnet);
    CPyStatic_constants___Network___GodwokenTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Godwoken);
    CPyStatic_constants___Network___Godwoken = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Mumbai);
    CPyStatic_constants___Network___Mumbai = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___ArbitrumRinkeby);
    CPyStatic_constants___Network___ArbitrumRinkeby = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___ArbitrumGorli);
    CPyStatic_constants___Network___ArbitrumGorli = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Sepolia);
    CPyStatic_constants___Network___Sepolia = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Aurora);
    CPyStatic_constants___Network___Aurora = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Harmony);
    CPyStatic_constants___Network___Harmony = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___PulseChain);
    CPyStatic_constants___Network___PulseChain = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___PulseChainTestnet);
    CPyStatic_constants___Network___PulseChainTestnet = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Sei);
    CPyStatic_constants___Network___Sei = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Hoodi);
    CPyStatic_constants___Network___Hoodi = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___HyperEVM);
    CPyStatic_constants___Network___HyperEVM = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Berachain);
    CPyStatic_constants___Network___Berachain = NULL;
    CPy_XDECREF(CPyStatic_constants___Network___Katana);
    CPyStatic_constants___Network___Katana = NULL;
    CPy_XDECREF(CPyStatic_constants___MULTICALL_ADDRESSES);
    CPyStatic_constants___MULTICALL_ADDRESSES = NULL;
    CPy_XDECREF(CPyStatic_constants___MULTICALL2_ADDRESSES);
    CPyStatic_constants___MULTICALL2_ADDRESSES = NULL;
    CPy_XDECREF(CPyStatic_constants___MULTICALL3_ADDRESSES);
    CPyStatic_constants___MULTICALL3_ADDRESSES = NULL;
    CPy_XDECREF(CPyStatic_constants___AIOHTTP_TIMEOUT);
    CPyStatic_constants___AIOHTTP_TIMEOUT = NULL;
    CPy_XDECREF(CPyStatic_constants___NO_STATE_OVERRIDE);
    CPyStatic_constants___NO_STATE_OVERRIDE = NULL;
    CPyTagged_XDECREF(CPyStatic_constants___ASYNC_SEMAPHORE);
    CPyStatic_constants___ASYNC_SEMAPHORE = CPY_INT_TAG;
    Py_CLEAR(CPyType_constants___Network);
    return -1;
}
static struct PyModuleDef constantsmodule = {
    PyModuleDef_HEAD_INIT,
    "multicall.constants",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    constantsmodule_methods,
    NULL,
};

PyObject *CPyInit_multicall___constants(void)
{
    if (CPyModule_multicall___constants__internal) {
        Py_INCREF(CPyModule_multicall___constants__internal);
        return CPyModule_multicall___constants__internal;
    }
    CPyModule_multicall___constants__internal = PyModule_Create(&constantsmodule);
    if (unlikely(CPyModule_multicall___constants__internal == NULL))
        goto fail;
    if (CPyExec_multicall___constants(CPyModule_multicall___constants__internal) != 0)
        goto fail;
    return CPyModule_multicall___constants__internal;
    fail:
    return NULL;
}

char CPyDef_constants_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    int32_t cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    int32_t cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    int32_t cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    int32_t cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    int32_t cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    int32_t cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    int32_t cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    int32_t cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    int32_t cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    int32_t cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    int32_t cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    int32_t cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    int32_t cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    int32_t cpy_r_r267;
    char cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    int32_t cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    int32_t cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    int32_t cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    int32_t cpy_r_r283;
    char cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    int32_t cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    int32_t cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    int32_t cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    int32_t cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    int32_t cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    int32_t cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    int32_t cpy_r_r315;
    char cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    int32_t cpy_r_r319;
    char cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    int32_t cpy_r_r323;
    char cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    int32_t cpy_r_r327;
    char cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    int32_t cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    int32_t cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    int32_t cpy_r_r339;
    char cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    int32_t cpy_r_r343;
    char cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    int32_t cpy_r_r347;
    char cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    int32_t cpy_r_r351;
    char cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    int32_t cpy_r_r355;
    char cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    int32_t cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    int32_t cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    int32_t cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    int32_t cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    int32_t cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    int32_t cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    int32_t cpy_r_r383;
    char cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    int32_t cpy_r_r387;
    char cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    int32_t cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    int32_t cpy_r_r395;
    char cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    int32_t cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    int32_t cpy_r_r403;
    char cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    int32_t cpy_r_r407;
    char cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    int32_t cpy_r_r411;
    char cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    int32_t cpy_r_r415;
    char cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    int32_t cpy_r_r419;
    char cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    int32_t cpy_r_r423;
    char cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    int32_t cpy_r_r427;
    char cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    int32_t cpy_r_r431;
    char cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    int32_t cpy_r_r435;
    char cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    int32_t cpy_r_r439;
    char cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    int32_t cpy_r_r443;
    char cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    int32_t cpy_r_r447;
    char cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    int32_t cpy_r_r451;
    char cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    int32_t cpy_r_r455;
    char cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    int32_t cpy_r_r459;
    char cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    int32_t cpy_r_r463;
    char cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    int32_t cpy_r_r467;
    char cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    int32_t cpy_r_r471;
    char cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    int32_t cpy_r_r475;
    char cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    int32_t cpy_r_r479;
    char cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    int32_t cpy_r_r483;
    char cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    int32_t cpy_r_r487;
    char cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    int32_t cpy_r_r491;
    char cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    int32_t cpy_r_r495;
    char cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    int32_t cpy_r_r499;
    char cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    int32_t cpy_r_r503;
    char cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    int32_t cpy_r_r507;
    char cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    int32_t cpy_r_r511;
    char cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    int32_t cpy_r_r515;
    char cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    int32_t cpy_r_r519;
    char cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    int32_t cpy_r_r523;
    char cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    int32_t cpy_r_r527;
    char cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    int32_t cpy_r_r531;
    char cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    int32_t cpy_r_r535;
    char cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    int32_t cpy_r_r539;
    char cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    int32_t cpy_r_r543;
    char cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    int32_t cpy_r_r547;
    char cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    int32_t cpy_r_r551;
    char cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    int32_t cpy_r_r555;
    char cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    int32_t cpy_r_r559;
    char cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    int32_t cpy_r_r563;
    char cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    int32_t cpy_r_r567;
    char cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    int32_t cpy_r_r571;
    char cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    int32_t cpy_r_r575;
    char cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    int32_t cpy_r_r579;
    char cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    int32_t cpy_r_r583;
    char cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    int32_t cpy_r_r587;
    char cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    int32_t cpy_r_r591;
    char cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    int32_t cpy_r_r595;
    char cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject *cpy_r_r598;
    int32_t cpy_r_r599;
    char cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    int32_t cpy_r_r603;
    char cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    int32_t cpy_r_r607;
    char cpy_r_r608;
    PyObject *cpy_r_r609;
    PyObject *cpy_r_r610;
    int32_t cpy_r_r611;
    char cpy_r_r612;
    PyObject *cpy_r_r613;
    PyObject *cpy_r_r614;
    int32_t cpy_r_r615;
    char cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    int32_t cpy_r_r619;
    char cpy_r_r620;
    PyObject **cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject **cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    int32_t cpy_r_r632;
    char cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject *cpy_r_r656;
    PyObject *cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    PyObject *cpy_r_r661;
    PyObject *cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject *cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    PyObject *cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    PyObject *cpy_r_r721;
    PyObject *cpy_r_r722;
    PyObject *cpy_r_r723;
    PyObject *cpy_r_r724;
    PyObject *cpy_r_r725;
    PyObject *cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject *cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject *cpy_r_r736;
    PyObject *cpy_r_r737;
    PyObject *cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    PyObject *cpy_r_r742;
    PyObject *cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    PyObject *cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject *cpy_r_r748;
    PyObject *cpy_r_r749;
    PyObject *cpy_r_r750;
    PyObject *cpy_r_r751;
    PyObject *cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    char cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    char cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    char cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    char cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject *cpy_r_r771;
    char cpy_r_r772;
    PyObject *cpy_r_r773;
    PyObject *cpy_r_r774;
    char cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject *cpy_r_r777;
    char cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    char cpy_r_r781;
    PyObject *cpy_r_r782;
    PyObject *cpy_r_r783;
    char cpy_r_r784;
    PyObject *cpy_r_r785;
    PyObject *cpy_r_r786;
    char cpy_r_r787;
    PyObject *cpy_r_r788;
    PyObject *cpy_r_r789;
    char cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    char cpy_r_r793;
    PyObject *cpy_r_r794;
    PyObject *cpy_r_r795;
    char cpy_r_r796;
    PyObject *cpy_r_r797;
    PyObject *cpy_r_r798;
    char cpy_r_r799;
    PyObject *cpy_r_r800;
    PyObject *cpy_r_r801;
    PyObject *cpy_r_r802;
    PyObject *cpy_r_r803;
    int32_t cpy_r_r804;
    char cpy_r_r805;
    PyObject *cpy_r_r806;
    char cpy_r_r807;
    PyObject *cpy_r_r808;
    PyObject *cpy_r_r809;
    char cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    char cpy_r_r813;
    PyObject *cpy_r_r814;
    PyObject *cpy_r_r815;
    char cpy_r_r816;
    PyObject *cpy_r_r817;
    PyObject *cpy_r_r818;
    char cpy_r_r819;
    PyObject *cpy_r_r820;
    PyObject *cpy_r_r821;
    char cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    char cpy_r_r825;
    PyObject *cpy_r_r826;
    PyObject *cpy_r_r827;
    char cpy_r_r828;
    PyObject *cpy_r_r829;
    PyObject *cpy_r_r830;
    char cpy_r_r831;
    PyObject *cpy_r_r832;
    PyObject *cpy_r_r833;
    char cpy_r_r834;
    PyObject *cpy_r_r835;
    PyObject *cpy_r_r836;
    char cpy_r_r837;
    PyObject *cpy_r_r838;
    PyObject *cpy_r_r839;
    char cpy_r_r840;
    PyObject *cpy_r_r841;
    PyObject *cpy_r_r842;
    char cpy_r_r843;
    PyObject *cpy_r_r844;
    PyObject *cpy_r_r845;
    char cpy_r_r846;
    PyObject *cpy_r_r847;
    PyObject *cpy_r_r848;
    char cpy_r_r849;
    PyObject *cpy_r_r850;
    PyObject *cpy_r_r851;
    char cpy_r_r852;
    PyObject *cpy_r_r853;
    PyObject *cpy_r_r854;
    char cpy_r_r855;
    PyObject *cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    PyObject *cpy_r_r859;
    int32_t cpy_r_r860;
    char cpy_r_r861;
    PyObject *cpy_r_r862;
    char cpy_r_r863;
    PyObject *cpy_r_r864;
    PyObject *cpy_r_r865;
    char cpy_r_r866;
    PyObject *cpy_r_r867;
    PyObject *cpy_r_r868;
    char cpy_r_r869;
    PyObject *cpy_r_r870;
    PyObject *cpy_r_r871;
    char cpy_r_r872;
    PyObject *cpy_r_r873;
    PyObject *cpy_r_r874;
    char cpy_r_r875;
    PyObject *cpy_r_r876;
    PyObject *cpy_r_r877;
    char cpy_r_r878;
    PyObject *cpy_r_r879;
    PyObject *cpy_r_r880;
    char cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    char cpy_r_r884;
    PyObject *cpy_r_r885;
    PyObject *cpy_r_r886;
    char cpy_r_r887;
    PyObject *cpy_r_r888;
    PyObject *cpy_r_r889;
    char cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject *cpy_r_r892;
    char cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject *cpy_r_r895;
    char cpy_r_r896;
    PyObject *cpy_r_r897;
    PyObject *cpy_r_r898;
    char cpy_r_r899;
    PyObject *cpy_r_r900;
    PyObject *cpy_r_r901;
    char cpy_r_r902;
    PyObject *cpy_r_r903;
    PyObject *cpy_r_r904;
    char cpy_r_r905;
    PyObject *cpy_r_r906;
    PyObject *cpy_r_r907;
    char cpy_r_r908;
    PyObject *cpy_r_r909;
    PyObject *cpy_r_r910;
    char cpy_r_r911;
    PyObject *cpy_r_r912;
    PyObject *cpy_r_r913;
    char cpy_r_r914;
    PyObject *cpy_r_r915;
    PyObject *cpy_r_r916;
    char cpy_r_r917;
    PyObject *cpy_r_r918;
    PyObject *cpy_r_r919;
    char cpy_r_r920;
    PyObject *cpy_r_r921;
    PyObject *cpy_r_r922;
    char cpy_r_r923;
    PyObject *cpy_r_r924;
    PyObject *cpy_r_r925;
    char cpy_r_r926;
    PyObject *cpy_r_r927;
    PyObject *cpy_r_r928;
    char cpy_r_r929;
    PyObject *cpy_r_r930;
    PyObject *cpy_r_r931;
    char cpy_r_r932;
    PyObject *cpy_r_r933;
    PyObject *cpy_r_r934;
    char cpy_r_r935;
    PyObject *cpy_r_r936;
    PyObject *cpy_r_r937;
    char cpy_r_r938;
    PyObject *cpy_r_r939;
    PyObject *cpy_r_r940;
    char cpy_r_r941;
    PyObject *cpy_r_r942;
    PyObject *cpy_r_r943;
    char cpy_r_r944;
    PyObject *cpy_r_r945;
    PyObject *cpy_r_r946;
    char cpy_r_r947;
    PyObject *cpy_r_r948;
    PyObject *cpy_r_r949;
    char cpy_r_r950;
    PyObject *cpy_r_r951;
    PyObject *cpy_r_r952;
    char cpy_r_r953;
    PyObject *cpy_r_r954;
    PyObject *cpy_r_r955;
    char cpy_r_r956;
    PyObject *cpy_r_r957;
    PyObject *cpy_r_r958;
    char cpy_r_r959;
    PyObject *cpy_r_r960;
    PyObject *cpy_r_r961;
    char cpy_r_r962;
    PyObject *cpy_r_r963;
    PyObject *cpy_r_r964;
    char cpy_r_r965;
    PyObject *cpy_r_r966;
    PyObject *cpy_r_r967;
    char cpy_r_r968;
    PyObject *cpy_r_r969;
    PyObject *cpy_r_r970;
    char cpy_r_r971;
    PyObject *cpy_r_r972;
    PyObject *cpy_r_r973;
    char cpy_r_r974;
    PyObject *cpy_r_r975;
    PyObject *cpy_r_r976;
    char cpy_r_r977;
    PyObject *cpy_r_r978;
    PyObject *cpy_r_r979;
    char cpy_r_r980;
    PyObject *cpy_r_r981;
    PyObject *cpy_r_r982;
    char cpy_r_r983;
    PyObject *cpy_r_r984;
    PyObject *cpy_r_r985;
    char cpy_r_r986;
    PyObject *cpy_r_r987;
    PyObject *cpy_r_r988;
    char cpy_r_r989;
    PyObject *cpy_r_r990;
    PyObject *cpy_r_r991;
    char cpy_r_r992;
    PyObject *cpy_r_r993;
    PyObject *cpy_r_r994;
    char cpy_r_r995;
    PyObject *cpy_r_r996;
    PyObject *cpy_r_r997;
    char cpy_r_r998;
    PyObject *cpy_r_r999;
    PyObject *cpy_r_r1000;
    char cpy_r_r1001;
    PyObject *cpy_r_r1002;
    PyObject *cpy_r_r1003;
    char cpy_r_r1004;
    PyObject *cpy_r_r1005;
    PyObject *cpy_r_r1006;
    char cpy_r_r1007;
    PyObject *cpy_r_r1008;
    PyObject *cpy_r_r1009;
    char cpy_r_r1010;
    PyObject *cpy_r_r1011;
    PyObject *cpy_r_r1012;
    char cpy_r_r1013;
    PyObject *cpy_r_r1014;
    PyObject *cpy_r_r1015;
    char cpy_r_r1016;
    PyObject *cpy_r_r1017;
    PyObject *cpy_r_r1018;
    char cpy_r_r1019;
    PyObject *cpy_r_r1020;
    PyObject *cpy_r_r1021;
    char cpy_r_r1022;
    PyObject *cpy_r_r1023;
    PyObject *cpy_r_r1024;
    char cpy_r_r1025;
    PyObject *cpy_r_r1026;
    PyObject *cpy_r_r1027;
    char cpy_r_r1028;
    PyObject *cpy_r_r1029;
    PyObject *cpy_r_r1030;
    char cpy_r_r1031;
    PyObject *cpy_r_r1032;
    PyObject *cpy_r_r1033;
    char cpy_r_r1034;
    PyObject *cpy_r_r1035;
    PyObject *cpy_r_r1036;
    char cpy_r_r1037;
    PyObject *cpy_r_r1038;
    PyObject *cpy_r_r1039;
    PyObject *cpy_r_r1040;
    PyObject *cpy_r_r1041;
    int32_t cpy_r_r1042;
    char cpy_r_r1043;
    PyObject *cpy_r_r1044;
    PyObject *cpy_r_r1045;
    PyObject *cpy_r_r1046;
    PyObject *cpy_r_r1047;
    PyObject *cpy_r_r1048;
    PyObject *cpy_r_r1049;
    PyObject **cpy_r_r1051;
    PyObject *cpy_r_r1052;
    PyObject *cpy_r_r1053;
    PyObject **cpy_r_r1055;
    PyObject *cpy_r_r1056;
    CPyTagged cpy_r_r1057;
    PyObject *cpy_r_r1058;
    PyObject *cpy_r_r1059;
    PyObject *cpy_r_r1060;
    PyObject *cpy_r_r1061;
    PyObject **cpy_r_r1063;
    PyObject *cpy_r_r1064;
    PyObject *cpy_r_r1065;
    PyObject *cpy_r_r1066;
    int32_t cpy_r_r1067;
    char cpy_r_r1068;
    PyObject *cpy_r_r1069;
    char cpy_r_r1070;
    PyObject *cpy_r_r1071;
    char cpy_r_r1072;
    PyObject *cpy_r_r1073;
    char cpy_r_r1074;
    PyObject *cpy_r_r1075;
    char cpy_r_r1076;
    PyObject *cpy_r_r1077;
    char cpy_r_r1078;
    PyObject *cpy_r_r1079;
    char cpy_r_r1080;
    PyObject *cpy_r_r1081;
    char cpy_r_r1082;
    PyObject *cpy_r_r1083;
    int32_t cpy_r_r1084;
    char cpy_r_r1085;
    int32_t cpy_r_r1086;
    char cpy_r_r1087;
    int32_t cpy_r_r1088;
    char cpy_r_r1089;
    int32_t cpy_r_r1090;
    char cpy_r_r1091;
    int32_t cpy_r_r1092;
    char cpy_r_r1093;
    int32_t cpy_r_r1094;
    char cpy_r_r1095;
    int32_t cpy_r_r1096;
    char cpy_r_r1097;
    PyObject *cpy_r_r1098;
    PyObject *cpy_r_r1099;
    int32_t cpy_r_r1100;
    char cpy_r_r1101;
    PyObject *cpy_r_r1102;
    PyObject *cpy_r_r1103;
    PyObject *cpy_r_r1104;
    PyObject *cpy_r_r1105;
    PyObject *cpy_r_r1106;
    PyObject *cpy_r_r1107;
    PyObject **cpy_r_r1109;
    PyObject *cpy_r_r1110;
    PyObject *cpy_r_r1111;
    PyObject **cpy_r_r1113;
    PyObject *cpy_r_r1114;
    CPyTagged cpy_r_r1115;
    PyObject *cpy_r_r1116;
    PyObject *cpy_r_r1117;
    PyObject *cpy_r_r1118;
    int32_t cpy_r_r1119;
    char cpy_r_r1120;
    char cpy_r_r1121;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", -1, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {2};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[401]; /* (('os', 'os', 'os'),) */
    cpy_r_r11 = CPyStatic_constants___globals;
    cpy_r_r12 = CPyStatics[88]; /* 'multicall/constants.py' */
    cpy_r_r13 = CPyStatics[45]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL557;
    cpy_r_r15 = CPyStatics[402]; /* ('IntEnum',) */
    cpy_r_r16 = CPyStatics[90]; /* 'enum' */
    cpy_r_r17 = CPyStatic_constants___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 3, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyModule_enum = cpy_r_r18;
    CPy_INCREF(CPyModule_enum);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[403]; /* ('Dict', 'Final', 'final') */
    cpy_r_r20 = CPyStatics[42]; /* 'typing' */
    cpy_r_r21 = CPyStatic_constants___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 4, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[404]; /* ('ClientTimeout',) */
    cpy_r_r24 = CPyStatics[93]; /* 'aiohttp' */
    cpy_r_r25 = CPyStatic_constants___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 6, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyModule_aiohttp = cpy_r_r26;
    CPy_INCREF(CPyModule_aiohttp);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[405]; /* ('ChecksumAddress', 'HexStr') */
    cpy_r_r28 = CPyStatics[51]; /* 'eth_typing' */
    cpy_r_r29 = CPyStatic_constants___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 7, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyModule_eth_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[406]; /* ('network', 'web3') */
    cpy_r_r32 = CPyStatics[95]; /* 'brownie' */
    cpy_r_r33 = CPyStatic_constants___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 12, CPyStatic_constants___globals);
        goto CPyL18;
    }
    CPyModule_brownie = cpy_r_r34;
    CPy_INCREF(CPyModule_brownie);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatic_constants___globals;
    cpy_r_r36 = CPyStatics[94]; /* 'network' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 14, CPyStatic_constants___globals);
        goto CPyL18;
    }
    cpy_r_r38 = CPyStatics[96]; /* 'is_connected' */
    PyObject *cpy_r_r39[1] = {cpy_r_r37};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r40, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 14, CPyStatic_constants___globals);
        goto CPyL558;
    }
    CPy_DECREF(cpy_r_r37);
    cpy_r_r42 = PyObject_IsTrue(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 14, CPyStatic_constants___globals);
        goto CPyL18;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL16;
    cpy_r_r45 = CPyStatic_constants___globals;
    cpy_r_r46 = CPyStatics[55]; /* 'web3' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 15, CPyStatic_constants___globals);
        goto CPyL18;
    }
    cpy_r_r48 = CPyStatic_constants___globals;
    cpy_r_r49 = CPyStatics[9]; /* 'w3' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 15, CPyStatic_constants___globals);
        goto CPyL18;
    } else
        goto CPyL27;
CPyL16: ;
    cpy_r_r52 = CPyStatics[407]; /* ('w3',) */
    cpy_r_r53 = CPyStatics[97]; /* 'web3.auto' */
    cpy_r_r54 = CPyStatic_constants___globals;
    cpy_r_r55 = CPyImport_ImportFromMany(cpy_r_r53, cpy_r_r52, cpy_r_r52, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 17, CPyStatic_constants___globals);
        goto CPyL18;
    }
    CPyModule_web3___auto = cpy_r_r55;
    CPy_INCREF(CPyModule_web3___auto);
    CPy_DECREF(cpy_r_r55);
    goto CPyL27;
CPyL18: ;
    cpy_r_r56 = CPy_CatchError();
    cpy_r_r57 = CPyModule_builtins;
    cpy_r_r58 = CPyStatics[98]; /* 'ImportError' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 18, CPyStatic_constants___globals);
        goto CPyL25;
    }
    cpy_r_r60 = CPy_ExceptionMatches(cpy_r_r59);
    CPy_DecRef(cpy_r_r59);
    if (!cpy_r_r60) goto CPyL22;
    cpy_r_r61 = CPyStatics[407]; /* ('w3',) */
    cpy_r_r62 = CPyStatics[97]; /* 'web3.auto' */
    cpy_r_r63 = CPyStatic_constants___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 19, CPyStatic_constants___globals);
        goto CPyL25;
    }
    CPyModule_web3___auto = cpy_r_r64;
    CPy_INCREF(CPyModule_web3___auto);
    CPy_DecRef(cpy_r_r64);
    goto CPyL24;
CPyL22: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL25;
    } else
        goto CPyL559;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    goto CPyL27;
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r56);
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    cpy_r_r65 = CPy_KeepPropagating();
    if (!cpy_r_r65) goto CPyL557;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r66 = CPyModule_os;
    cpy_r_r67 = CPyStatics[99]; /* 'environ' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r69 = CPyStatics[100]; /* 'GAS_LIMIT' */
    cpy_r_r70 = CPyStatics[101]; /* 'get' */
    cpy_r_r71 = CPyStatics[325]; /* 50000000 */
    PyObject *cpy_r_r72[3] = {cpy_r_r68, cpy_r_r69, cpy_r_r71};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = PyObject_VectorcallMethod(cpy_r_r70, cpy_r_r73, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL560;
    }
    CPy_DECREF(cpy_r_r68);
    cpy_r_r75 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r76[1] = {cpy_r_r74};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = PyObject_Vectorcall(cpy_r_r75, cpy_r_r77, 1, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL561;
    }
    CPy_DECREF(cpy_r_r74);
    if (likely(PyLong_Check(cpy_r_r78)))
        cpy_r_r79 = CPyTagged_FromObject(cpy_r_r78);
    else {
        CPy_TypeError("int", cpy_r_r78); cpy_r_r79 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___GAS_LIMIT = cpy_r_r79;
    CPyTagged_INCREF(CPyStatic_constants___GAS_LIMIT);
    cpy_r_r80 = CPyStatic_constants___globals;
    cpy_r_r81 = CPyStatics[100]; /* 'GAS_LIMIT' */
    cpy_r_r82 = CPyTagged_StealAsObject(cpy_r_r79);
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r85 = CPyStatics[102]; /* '0x608060405234801561001057600080fd5b50600436106100b45760003560e01c806372425d9d1161007157806372425d9d1461013d57806386d516e814610145578063a8b0574e1461014d578063bce38bd714610162578063c3077fa914610182578063ee82ac5e14610195576100b4565b80630f28c97d146100b9578063252dba42146100d757806327e86d6e146100f8578063399542e91461010057806342cbb15c146101225780634d2301cc1461012a575b600080fd5b6100c16101a8565b6040516100ce919061083b565b60405180910390f35b6100ea6100e53660046106bb565b6101ac565b6040516100ce9291906108ba565b6100c1610340565b61011361010e3660046106f6565b610353565b6040516100ce93929190610922565b6100c161036b565b6100c161013836600461069a565b61036f565b6100c161037c565b6100c1610380565b610155610384565b6040516100ce9190610814565b6101756101703660046106f6565b610388565b6040516100ce9190610828565b6101136101903660046106bb565b610533565b6100c16101a3366004610748565b610550565b4290565b8051439060609067ffffffffffffffff8111156101d957634e487b7160e01b600052604160045260246000fd5b60405190808252806020026020018201604052801561020c57816020015b60608152602001906001900390816101f75790505b50905060005b835181101561033a5760008085838151811061023e57634e487b7160e01b600052603260045260246000fd5b6020026020010151600001516001600160a01b031686848151811061027357634e487b7160e01b600052603260045260246000fd5b60200260200101516020015160405161028c91906107f8565b6000604051808303816000865af19150503d80600081146102c9576040519150601f19603f3d011682016040523d82523d6000602084013e6102ce565b606091505b5091509150816102f95760405162461bcd60e51b81526004016102f090610885565b60405180910390fd5b8084848151811061031a57634e487b7160e01b600052603260045260246000fd5b602002602001018190525050508080610332906109c2565b915050610212565b50915091565b600061034d60014361097b565b40905090565b43804060606103628585610388565b90509250925092565b4390565b6001600160a01b03163190565b4490565b4590565b4190565b6060815167ffffffffffffffff8111156103b257634e487b7160e01b600052604160045260246000fd5b6040519080825280602002602001820160405280156103eb57816020015b6103d8610554565b8152602001906001900390816103d05790505b50905060005b825181101561052c5760008084838151811061041d57634e487b7160e01b600052603260045260246000fd5b6020026020010151600001516001600160a01b031685848151811061045257634e487b7160e01b600052603260045260246000fd5b60200260200101516020015160405161046b91906107f8565b6000604051808303816000865af19150503d80600081146104a8576040519150601f19603f3d011682016040523d82523d6000602084013e6104ad565b606091505b509150915085156104d557816104d55760405162461bcd60e51b81526004016102f090610844565b604051806040016040528083151581526020018281525084848151811061050c57634e487b7160e01b600052603260045260246000fd5b602002602001018190525050508080610524906109c2565b9150506103f1565b5092915050565b6000806060610543600185610353565b9196909550909350915050565b4090565b60408051808201909152600081526060602082015290565b80356001600160a01b038116811461058357600080fd5b919050565b600082601f830112610598578081fd5b8135602067ffffffffffffffff808311156105b5576105b56109f3565b6105c2828385020161094a565b83815282810190868401865b8681101561068c57813589016040601f198181848f030112156105ef578a8bfd5b6105f88261094a565b6106038a850161056c565b81528284013589811115610615578c8dfd5b8085019450508d603f850112610629578b8cfd5b898401358981111561063d5761063d6109f3565b61064d8b84601f8401160161094a565b92508083528e84828701011115610662578c8dfd5b808486018c85013782018a018c9052808a01919091528652505092850192908501906001016105ce565b509098975050505050505050565b6000602082840312156106ab578081fd5b6106b48261056c565b9392505050565b6000602082840312156106cc578081fd5b813567ffffffffffffffff8111156106e2578182fd5b6106ee84828501610588565b949350505050565b60008060408385031215610708578081fd5b82358015158114610717578182fd5b9150602083013567ffffffffffffffff811115610732578182fd5b61073e85828601610588565b9150509250929050565b600060208284031215610759578081fd5b5035919050565b60008282518085526020808601955080818302840101818601855b848110156107bf57858303601f19018952815180511515845284015160408585018190526107ab818601836107cc565b9a86019a945050509083019060010161077b565b5090979650505050505050565b600081518084526107e4816020860160208601610992565b601f01601f19169290920160200192915050565b6000825161080a818460208701610992565b9190910192915050565b6001600160a01b0391909116815260200190565b6000602082526106b46020830184610760565b90815260200190565b60208082526021908201527f4d756c746963616c6c32206167677265676174653a2063616c6c206661696c656040820152601960fa1b606082015260800190565b6020808252818101527f4d756c746963616c6c206167677265676174653a2063616c6c206661696c6564604082015260600190565b600060408201848352602060408185015281855180845260608601915060608382028701019350828701855b8281101561091457605f198887030184526109028683516107cc565b955092840192908401906001016108e6565b509398975050505050505050565b6000848252836020830152606060408301526109416060830184610760565b95945050505050565b604051601f8201601f1916810167ffffffffffffffff81118282101715610973576109736109f3565b604052919050565b60008282101561098d5761098d6109dd565b500390565b60005b838110156109ad578181015183820152602001610995565b838111156109bc576000848401525b50505050565b60006000198214156109d6576109d66109dd565b5060010190565b634e487b7160e01b600052601160045260246000fd5b634e487b7160e01b600052604160045260246000fdfea2646970667358221220c1152f751f29ece4d7bce5287ceafc8a153de9c2c633e3f21943a87d845bd83064736f6c63430008010033' */
    CPyStatic_constants___MULTICALL2_BYTECODE = cpy_r_r85;
    CPy_INCREF(CPyStatic_constants___MULTICALL2_BYTECODE);
    cpy_r_r86 = CPyStatic_constants___globals;
    cpy_r_r87 = CPyStatics[103]; /* 'MULTICALL2_BYTECODE' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r86, cpy_r_r87, cpy_r_r85);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 24, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r90 = CPyStatics[104]; /* '0x6080604052600436106100f35760003560e01c80634d2301cc1161008a578063a8b0574e11610059578063a8b0574e1461025a578063bce38bd714610275578063c3077fa914610288578063ee82ac5e1461029b57600080fd5b80634d2301cc146101ec57806372425d9d1461022157806382ad56cb1461023457806386d516e81461024757600080fd5b80633408e470116100c65780633408e47014610191578063399542e9146101a45780633e64a696146101c657806342cbb15c146101d957600080fd5b80630f28c97d146100f8578063174dea711461011a578063252dba421461013a57806327e86d6e1461015b575b600080fd5b34801561010457600080fd5b50425b6040519081526020015b60405180910390f35b61012d610128366004610a85565b6102ba565b6040516101119190610bbe565b61014d610148366004610a85565b6104ef565b604051610111929190610bd8565b34801561016757600080fd5b50437fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff0140610107565b34801561019d57600080fd5b5046610107565b6101b76101b2366004610c60565b610690565b60405161011193929190610cba565b3480156101d257600080fd5b5048610107565b3480156101e557600080fd5b5043610107565b3480156101f857600080fd5b50610107610207366004610ce2565b73ffffffffffffffffffffffffffffffffffffffff163190565b34801561022d57600080fd5b5044610107565b61012d610242366004610a85565b6106ab565b34801561025357600080fd5b5045610107565b34801561026657600080fd5b50604051418152602001610111565b61012d610283366004610c60565b61085a565b6101b7610296366004610a85565b610a1a565b3480156102a757600080fd5b506101076102b6366004610d18565b4090565b60606000828067ffffffffffffffff8111156102d8576102d8610d31565b60405190808252806020026020018201604052801561031e57816020015b6040805180820190915260008152606060208201528152602001906001900390816102f65790505b5092503660005b8281101561047757600085828151811061034157610341610d60565b6020026020010151905087878381811061035d5761035d610d60565b905060200281019061036f9190610d8f565b6040810135958601959093506103886020850185610ce2565b73ffffffffffffffffffffffffffffffffffffffff16816103ac6060870187610dcd565b6040516103ba929190610e32565b60006040518083038185875af1925050503d80600081146103f7576040519150601f19603f3d011682016040523d82523d6000602084013e6103fc565b606091505b50602080850191909152901515808452908501351761046d577f08c379a000000000000000000000000000000000000000000000000000000000600052602060045260176024527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060445260846000fd5b5050600101610325565b508234146104e6576040517f08c379a000000000000000000000000000000000000000000000000000000000815260206004820152601a60248201527f4d756c746963616c6c333a2076616c7565206d69736d6174636800000000000060448201526064015b60405180910390fd5b50505092915050565b436060828067ffffffffffffffff81111561050c5761050c610d31565b60405190808252806020026020018201604052801561053f57816020015b606081526020019060019003908161052a5790505b5091503660005b8281101561068657600087878381811061056257610562610d60565b90506020028101906105749190610e42565b92506105836020840184610ce2565b73ffffffffffffffffffffffffffffffffffffffff166105a66020850185610dcd565b6040516105b4929190610e32565b6000604051808303816000865af19150503d80600081146105f1576040519150601f19603f3d011682016040523d82523d6000602084013e6105f6565b606091505b5086848151811061060957610609610d60565b602090810291909101015290508061067d576040517f08c379a000000000000000000000000000000000000000000000000000000000815260206004820152601760248201527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060448201526064016104dd565b50600101610546565b5050509250929050565b43804060606106a086868661085a565b905093509350939050565b6060818067ffffffffffffffff8111156106c7576106c7610d31565b60405190808252806020026020018201604052801561070d57816020015b6040805180820190915260008152606060208201528152602001906001900390816106e55790505b5091503660005b828110156104e657600084828151811061073057610730610d60565b6020026020010151905086868381811061074c5761074c610d60565b905060200281019061075e9190610e76565b925061076d6020840184610ce2565b73ffffffffffffffffffffffffffffffffffffffff166107906040850185610dcd565b60405161079e929190610e32565b6000604051808303816000865af19150503d80600081146107db576040519150601f19603f3d011682016040523d82523d6000602084013e6107e0565b606091505b506020808401919091529015158083529084013517610851577f08c379a000000000000000000000000000000000000000000000000000000000600052602060045260176024527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060445260646000fd5b50600101610714565b6060818067ffffffffffffffff81111561087657610876610d31565b6040519080825280602002602001820160405280156108bc57816020015b6040805180820190915260008152606060208201528152602001906001900390816108945790505b5091503660005b82811015610a105760008482815181106108df576108df610d60565b602002602001015190508686838181106108fb576108fb610d60565b905060200281019061090d9190610e42565b925061091c6020840184610ce2565b73ffffffffffffffffffffffffffffffffffffffff1661093f6020850185610dcd565b60405161094d929190610e32565b6000604051808303816000865af19150503d806000811461098a576040519150601f19603f3d011682016040523d82523d6000602084013e61098f565b606091505b506020830152151581528715610a07578051610a07576040517f08c379a000000000000000000000000000000000000000000000000000000000815260206004820152601760248201527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060448201526064016104dd565b506001016108c3565b5050509392505050565b6000806060610a2b60018686610690565b919790965090945092505050565b60008083601f840112610a4b57600080fd5b50813567ffffffffffffffff811115610a6357600080fd5b6020830191508360208260051b8501011115610a7e57600080fd5b9250929050565b60008060208385031215610a9857600080fd5b823567ffffffffffffffff811115610aaf57600080fd5b610abb85828601610a39565b90969095509350505050565b6000815180845260005b81811015610aed57602081850181015186830182015201610ad1565b81811115610aff576000602083870101525b50601f017fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe0169290920160200192915050565b600082825180855260208086019550808260051b84010181860160005b84811015610bb1578583037fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe001895281518051151584528401516040858501819052610b9d81860183610ac7565b9a86019a9450505090830190600101610b4f565b5090979650505050505050565b602081526000610bd16020830184610b32565b9392505050565b600060408201848352602060408185015281855180845260608601915060608160051b870101935082870160005b82811015610c52577fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffa0888703018452610c40868351610ac7565b95509284019290840190600101610c06565b509398975050505050505050565b600080600060408486031215610c7557600080fd5b83358015158114610c8557600080fd5b9250602084013567ffffffffffffffff811115610ca157600080fd5b610cad86828701610a39565b9497909650939450505050565b838152826020820152606060408201526000610cd96060830184610b32565b95945050505050565b600060208284031215610cf457600080fd5b813573ffffffffffffffffffffffffffffffffffffffff81168114610bd157600080fd5b600060208284031215610d2a57600080fd5b5035919050565b7f4e487b7100000000000000000000000000000000000000000000000000000000600052604160045260246000fd5b7f4e487b7100000000000000000000000000000000000000000000000000000000600052603260045260246000fd5b600082357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff81833603018112610dc357600080fd5b9190910192915050565b60008083357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe1843603018112610e0257600080fd5b83018035915067ffffffffffffffff821115610e1d57600080fd5b602001915036819003821315610a7e57600080fd5b8183823760009101908152919050565b600082357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffc1833603018112610dc357600080fd5b600082357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffa1833603018112610dc357600080fdfea2646970667358221220bb2b5c71a328032f97c676ae39a1ec2148d3e5d6f73d95e9b17910152d61f16264736f6c634300080c0033' */
    CPyStatic_constants___MULTICALL3_BYTECODE = cpy_r_r90;
    CPy_INCREF(CPyStatic_constants___MULTICALL3_BYTECODE);
    cpy_r_r91 = CPyStatic_constants___globals;
    cpy_r_r92 = CPyStatics[105]; /* 'MULTICALL3_BYTECODE' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r91, cpy_r_r92, cpy_r_r90);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 27, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r95 = CPyModule_enum;
    cpy_r_r96 = CPyStatics[89]; /* 'IntEnum' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r98 = PyTuple_Pack(1, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r99 = (PyObject *)&PyType_Type;
    cpy_r_r100 = CPy_CalculateMetaclass(cpy_r_r99, cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL562;
    }
    cpy_r_r101 = CPyStatics[106]; /* '__prepare__' */
    cpy_r_r102 = PyObject_HasAttr(cpy_r_r100, cpy_r_r101);
    if (!cpy_r_r102) goto CPyL42;
    cpy_r_r103 = CPyStatics[56]; /* 'Network' */
    cpy_r_r104 = CPyStatics[106]; /* '__prepare__' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL562;
    }
    PyObject *cpy_r_r106[2] = {cpy_r_r103, cpy_r_r98};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 2, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL562;
    }
    if (likely(PyDict_Check(cpy_r_r108)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals, "dict", cpy_r_r108);
        goto CPyL562;
    }
    cpy_r_r110 = cpy_r_r109;
    goto CPyL44;
CPyL42: ;
    cpy_r_r111 = PyDict_New();
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL562;
    }
    cpy_r_r110 = cpy_r_r111;
CPyL44: ;
    cpy_r_r112 = PyDict_New();
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL563;
    }
    cpy_r_r113 = (PyObject *)&PyLong_Type;
    cpy_r_r114 = CPyStatics[107]; /* 'Mainnet' */
    cpy_r_r115 = PyDict_SetItem(cpy_r_r112, cpy_r_r114, cpy_r_r113);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 35, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r117 = CPyStatics[107]; /* 'Mainnet' */
    cpy_r_r118 = CPyStatics[323]; /* 1 */
    cpy_r_r119 = CPyDict_SetItem(cpy_r_r110, cpy_r_r117, cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 35, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r121 = (PyObject *)&PyLong_Type;
    cpy_r_r122 = CPyStatics[108]; /* 'Ropsten' */
    cpy_r_r123 = PyDict_SetItem(cpy_r_r112, cpy_r_r122, cpy_r_r121);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 36, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r125 = CPyStatics[108]; /* 'Ropsten' */
    cpy_r_r126 = CPyStatics[324]; /* 3 */
    cpy_r_r127 = CPyDict_SetItem(cpy_r_r110, cpy_r_r125, cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 36, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r129 = (PyObject *)&PyLong_Type;
    cpy_r_r130 = CPyStatics[109]; /* 'Rinkeby' */
    cpy_r_r131 = PyDict_SetItem(cpy_r_r112, cpy_r_r130, cpy_r_r129);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 37, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r133 = CPyStatics[109]; /* 'Rinkeby' */
    cpy_r_r134 = CPyStatics[326]; /* 4 */
    cpy_r_r135 = CPyDict_SetItem(cpy_r_r110, cpy_r_r133, cpy_r_r134);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 37, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r137 = (PyObject *)&PyLong_Type;
    cpy_r_r138 = CPyStatics[110]; /* 'Gorli' */
    cpy_r_r139 = PyDict_SetItem(cpy_r_r112, cpy_r_r138, cpy_r_r137);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 38, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r141 = CPyStatics[110]; /* 'Gorli' */
    cpy_r_r142 = CPyStatics[327]; /* 5 */
    cpy_r_r143 = CPyDict_SetItem(cpy_r_r110, cpy_r_r141, cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 38, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r145 = (PyObject *)&PyLong_Type;
    cpy_r_r146 = CPyStatics[111]; /* 'Optimism' */
    cpy_r_r147 = PyDict_SetItem(cpy_r_r112, cpy_r_r146, cpy_r_r145);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 39, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r149 = CPyStatics[111]; /* 'Optimism' */
    cpy_r_r150 = CPyStatics[328]; /* 10 */
    cpy_r_r151 = CPyDict_SetItem(cpy_r_r110, cpy_r_r149, cpy_r_r150);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 39, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r153 = (PyObject *)&PyLong_Type;
    cpy_r_r154 = CPyStatics[112]; /* 'CostonTestnet' */
    cpy_r_r155 = PyDict_SetItem(cpy_r_r112, cpy_r_r154, cpy_r_r153);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 40, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r157 = CPyStatics[112]; /* 'CostonTestnet' */
    cpy_r_r158 = CPyStatics[329]; /* 16 */
    cpy_r_r159 = CPyDict_SetItem(cpy_r_r110, cpy_r_r157, cpy_r_r158);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 40, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r161 = (PyObject *)&PyLong_Type;
    cpy_r_r162 = CPyStatics[113]; /* 'ThundercoreTestnet' */
    cpy_r_r163 = PyDict_SetItem(cpy_r_r112, cpy_r_r162, cpy_r_r161);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 41, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r165 = CPyStatics[113]; /* 'ThundercoreTestnet' */
    cpy_r_r166 = CPyStatics[330]; /* 18 */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r110, cpy_r_r165, cpy_r_r166);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 41, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r169 = (PyObject *)&PyLong_Type;
    cpy_r_r170 = CPyStatics[114]; /* 'SongbirdCanaryNetwork' */
    cpy_r_r171 = PyDict_SetItem(cpy_r_r112, cpy_r_r170, cpy_r_r169);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 42, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r173 = CPyStatics[114]; /* 'SongbirdCanaryNetwork' */
    cpy_r_r174 = CPyStatics[331]; /* 19 */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r110, cpy_r_r173, cpy_r_r174);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 42, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r177 = (PyObject *)&PyLong_Type;
    cpy_r_r178 = CPyStatics[115]; /* 'Cronos' */
    cpy_r_r179 = PyDict_SetItem(cpy_r_r112, cpy_r_r178, cpy_r_r177);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 43, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r181 = CPyStatics[115]; /* 'Cronos' */
    cpy_r_r182 = CPyStatics[332]; /* 25 */
    cpy_r_r183 = CPyDict_SetItem(cpy_r_r110, cpy_r_r181, cpy_r_r182);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 43, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r185 = (PyObject *)&PyLong_Type;
    cpy_r_r186 = CPyStatics[116]; /* 'RSK' */
    cpy_r_r187 = PyDict_SetItem(cpy_r_r112, cpy_r_r186, cpy_r_r185);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 44, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r189 = CPyStatics[116]; /* 'RSK' */
    cpy_r_r190 = CPyStatics[333]; /* 30 */
    cpy_r_r191 = CPyDict_SetItem(cpy_r_r110, cpy_r_r189, cpy_r_r190);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 44, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r193 = (PyObject *)&PyLong_Type;
    cpy_r_r194 = CPyStatics[117]; /* 'RSKTestnet' */
    cpy_r_r195 = PyDict_SetItem(cpy_r_r112, cpy_r_r194, cpy_r_r193);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 45, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r197 = CPyStatics[117]; /* 'RSKTestnet' */
    cpy_r_r198 = CPyStatics[334]; /* 31 */
    cpy_r_r199 = CPyDict_SetItem(cpy_r_r110, cpy_r_r197, cpy_r_r198);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 45, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r201 = (PyObject *)&PyLong_Type;
    cpy_r_r202 = CPyStatics[118]; /* 'Kovan' */
    cpy_r_r203 = PyDict_SetItem(cpy_r_r112, cpy_r_r202, cpy_r_r201);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 46, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r205 = CPyStatics[118]; /* 'Kovan' */
    cpy_r_r206 = CPyStatics[335]; /* 42 */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r110, cpy_r_r205, cpy_r_r206);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 46, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r209 = (PyObject *)&PyLong_Type;
    cpy_r_r210 = CPyStatics[119]; /* 'Bsc' */
    cpy_r_r211 = PyDict_SetItem(cpy_r_r112, cpy_r_r210, cpy_r_r209);
    cpy_r_r212 = cpy_r_r211 >= 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 47, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r213 = CPyStatics[119]; /* 'Bsc' */
    cpy_r_r214 = CPyStatics[336]; /* 56 */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r110, cpy_r_r213, cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 47, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r217 = (PyObject *)&PyLong_Type;
    cpy_r_r218 = CPyStatics[120]; /* 'OKC' */
    cpy_r_r219 = PyDict_SetItem(cpy_r_r112, cpy_r_r218, cpy_r_r217);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 48, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r221 = CPyStatics[120]; /* 'OKC' */
    cpy_r_r222 = CPyStatics[337]; /* 66 */
    cpy_r_r223 = CPyDict_SetItem(cpy_r_r110, cpy_r_r221, cpy_r_r222);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 48, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r225 = (PyObject *)&PyLong_Type;
    cpy_r_r226 = CPyStatics[121]; /* 'OptimismKovan' */
    cpy_r_r227 = PyDict_SetItem(cpy_r_r112, cpy_r_r226, cpy_r_r225);
    cpy_r_r228 = cpy_r_r227 >= 0;
    if (unlikely(!cpy_r_r228)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 49, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r229 = CPyStatics[121]; /* 'OptimismKovan' */
    cpy_r_r230 = CPyStatics[338]; /* 69 */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_r110, cpy_r_r229, cpy_r_r230);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 49, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r233 = (PyObject *)&PyLong_Type;
    cpy_r_r234 = CPyStatics[122]; /* 'BscTestnet' */
    cpy_r_r235 = PyDict_SetItem(cpy_r_r112, cpy_r_r234, cpy_r_r233);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 50, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r237 = CPyStatics[122]; /* 'BscTestnet' */
    cpy_r_r238 = CPyStatics[339]; /* 97 */
    cpy_r_r239 = CPyDict_SetItem(cpy_r_r110, cpy_r_r237, cpy_r_r238);
    cpy_r_r240 = cpy_r_r239 >= 0;
    if (unlikely(!cpy_r_r240)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 50, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r241 = (PyObject *)&PyLong_Type;
    cpy_r_r242 = CPyStatics[123]; /* 'Gnosis' */
    cpy_r_r243 = PyDict_SetItem(cpy_r_r112, cpy_r_r242, cpy_r_r241);
    cpy_r_r244 = cpy_r_r243 >= 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 51, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r245 = CPyStatics[123]; /* 'Gnosis' */
    cpy_r_r246 = CPyStatics[340]; /* 100 */
    cpy_r_r247 = CPyDict_SetItem(cpy_r_r110, cpy_r_r245, cpy_r_r246);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 51, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r249 = (PyObject *)&PyLong_Type;
    cpy_r_r250 = CPyStatics[124]; /* 'Velas' */
    cpy_r_r251 = PyDict_SetItem(cpy_r_r112, cpy_r_r250, cpy_r_r249);
    cpy_r_r252 = cpy_r_r251 >= 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 52, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r253 = CPyStatics[124]; /* 'Velas' */
    cpy_r_r254 = CPyStatics[341]; /* 106 */
    cpy_r_r255 = CPyDict_SetItem(cpy_r_r110, cpy_r_r253, cpy_r_r254);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 52, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r257 = (PyObject *)&PyLong_Type;
    cpy_r_r258 = CPyStatics[125]; /* 'Thundercore' */
    cpy_r_r259 = PyDict_SetItem(cpy_r_r112, cpy_r_r258, cpy_r_r257);
    cpy_r_r260 = cpy_r_r259 >= 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 53, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r261 = CPyStatics[125]; /* 'Thundercore' */
    cpy_r_r262 = CPyStatics[342]; /* 108 */
    cpy_r_r263 = CPyDict_SetItem(cpy_r_r110, cpy_r_r261, cpy_r_r262);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 53, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r265 = (PyObject *)&PyLong_Type;
    cpy_r_r266 = CPyStatics[126]; /* 'Coston2Testnet' */
    cpy_r_r267 = PyDict_SetItem(cpy_r_r112, cpy_r_r266, cpy_r_r265);
    cpy_r_r268 = cpy_r_r267 >= 0;
    if (unlikely(!cpy_r_r268)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 54, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r269 = CPyStatics[126]; /* 'Coston2Testnet' */
    cpy_r_r270 = CPyStatics[343]; /* 114 */
    cpy_r_r271 = CPyDict_SetItem(cpy_r_r110, cpy_r_r269, cpy_r_r270);
    cpy_r_r272 = cpy_r_r271 >= 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 54, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r273 = (PyObject *)&PyLong_Type;
    cpy_r_r274 = CPyStatics[127]; /* 'Fuse' */
    cpy_r_r275 = PyDict_SetItem(cpy_r_r112, cpy_r_r274, cpy_r_r273);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 55, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r277 = CPyStatics[127]; /* 'Fuse' */
    cpy_r_r278 = CPyStatics[344]; /* 122 */
    cpy_r_r279 = CPyDict_SetItem(cpy_r_r110, cpy_r_r277, cpy_r_r278);
    cpy_r_r280 = cpy_r_r279 >= 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 55, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r281 = (PyObject *)&PyLong_Type;
    cpy_r_r282 = CPyStatics[128]; /* 'Heco' */
    cpy_r_r283 = PyDict_SetItem(cpy_r_r112, cpy_r_r282, cpy_r_r281);
    cpy_r_r284 = cpy_r_r283 >= 0;
    if (unlikely(!cpy_r_r284)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 56, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r285 = CPyStatics[128]; /* 'Heco' */
    cpy_r_r286 = CPyStatics[345]; /* 128 */
    cpy_r_r287 = CPyDict_SetItem(cpy_r_r110, cpy_r_r285, cpy_r_r286);
    cpy_r_r288 = cpy_r_r287 >= 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 56, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r289 = (PyObject *)&PyLong_Type;
    cpy_r_r290 = CPyStatics[129]; /* 'Polygon' */
    cpy_r_r291 = PyDict_SetItem(cpy_r_r112, cpy_r_r290, cpy_r_r289);
    cpy_r_r292 = cpy_r_r291 >= 0;
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 57, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r293 = CPyStatics[129]; /* 'Polygon' */
    cpy_r_r294 = CPyStatics[346]; /* 137 */
    cpy_r_r295 = CPyDict_SetItem(cpy_r_r110, cpy_r_r293, cpy_r_r294);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 57, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r297 = (PyObject *)&PyLong_Type;
    cpy_r_r298 = CPyStatics[130]; /* 'Fantom' */
    cpy_r_r299 = PyDict_SetItem(cpy_r_r112, cpy_r_r298, cpy_r_r297);
    cpy_r_r300 = cpy_r_r299 >= 0;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 58, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r301 = CPyStatics[130]; /* 'Fantom' */
    cpy_r_r302 = CPyStatics[347]; /* 250 */
    cpy_r_r303 = CPyDict_SetItem(cpy_r_r110, cpy_r_r301, cpy_r_r302);
    cpy_r_r304 = cpy_r_r303 >= 0;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 58, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r305 = (PyObject *)&PyLong_Type;
    cpy_r_r306 = CPyStatics[131]; /* 'Boba' */
    cpy_r_r307 = PyDict_SetItem(cpy_r_r112, cpy_r_r306, cpy_r_r305);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 59, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r309 = CPyStatics[131]; /* 'Boba' */
    cpy_r_r310 = CPyStatics[348]; /* 288 */
    cpy_r_r311 = CPyDict_SetItem(cpy_r_r110, cpy_r_r309, cpy_r_r310);
    cpy_r_r312 = cpy_r_r311 >= 0;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 59, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r313 = (PyObject *)&PyLong_Type;
    cpy_r_r314 = CPyStatics[132]; /* 'KCC' */
    cpy_r_r315 = PyDict_SetItem(cpy_r_r112, cpy_r_r314, cpy_r_r313);
    cpy_r_r316 = cpy_r_r315 >= 0;
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 60, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r317 = CPyStatics[132]; /* 'KCC' */
    cpy_r_r318 = CPyStatics[349]; /* 321 */
    cpy_r_r319 = CPyDict_SetItem(cpy_r_r110, cpy_r_r317, cpy_r_r318);
    cpy_r_r320 = cpy_r_r319 >= 0;
    if (unlikely(!cpy_r_r320)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 60, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r321 = (PyObject *)&PyLong_Type;
    cpy_r_r322 = CPyStatics[133]; /* 'ZkSync' */
    cpy_r_r323 = PyDict_SetItem(cpy_r_r112, cpy_r_r322, cpy_r_r321);
    cpy_r_r324 = cpy_r_r323 >= 0;
    if (unlikely(!cpy_r_r324)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 61, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r325 = CPyStatics[133]; /* 'ZkSync' */
    cpy_r_r326 = CPyStatics[350]; /* 324 */
    cpy_r_r327 = CPyDict_SetItem(cpy_r_r110, cpy_r_r325, cpy_r_r326);
    cpy_r_r328 = cpy_r_r327 >= 0;
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 61, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r329 = (PyObject *)&PyLong_Type;
    cpy_r_r330 = CPyStatics[134]; /* 'OptimismGorli' */
    cpy_r_r331 = PyDict_SetItem(cpy_r_r112, cpy_r_r330, cpy_r_r329);
    cpy_r_r332 = cpy_r_r331 >= 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 62, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r333 = CPyStatics[134]; /* 'OptimismGorli' */
    cpy_r_r334 = CPyStatics[351]; /* 420 */
    cpy_r_r335 = CPyDict_SetItem(cpy_r_r110, cpy_r_r333, cpy_r_r334);
    cpy_r_r336 = cpy_r_r335 >= 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 62, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r337 = (PyObject *)&PyLong_Type;
    cpy_r_r338 = CPyStatics[135]; /* 'Astar' */
    cpy_r_r339 = PyDict_SetItem(cpy_r_r112, cpy_r_r338, cpy_r_r337);
    cpy_r_r340 = cpy_r_r339 >= 0;
    if (unlikely(!cpy_r_r340)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 63, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r341 = CPyStatics[135]; /* 'Astar' */
    cpy_r_r342 = CPyStatics[352]; /* 592 */
    cpy_r_r343 = CPyDict_SetItem(cpy_r_r110, cpy_r_r341, cpy_r_r342);
    cpy_r_r344 = cpy_r_r343 >= 0;
    if (unlikely(!cpy_r_r344)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 63, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r345 = (PyObject *)&PyLong_Type;
    cpy_r_r346 = CPyStatics[136]; /* 'Metis' */
    cpy_r_r347 = PyDict_SetItem(cpy_r_r112, cpy_r_r346, cpy_r_r345);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 64, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r349 = CPyStatics[136]; /* 'Metis' */
    cpy_r_r350 = CPyStatics[353]; /* 1088 */
    cpy_r_r351 = CPyDict_SetItem(cpy_r_r110, cpy_r_r349, cpy_r_r350);
    cpy_r_r352 = cpy_r_r351 >= 0;
    if (unlikely(!cpy_r_r352)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 64, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r353 = (PyObject *)&PyLong_Type;
    cpy_r_r354 = CPyStatics[137]; /* 'Moonbeam' */
    cpy_r_r355 = PyDict_SetItem(cpy_r_r112, cpy_r_r354, cpy_r_r353);
    cpy_r_r356 = cpy_r_r355 >= 0;
    if (unlikely(!cpy_r_r356)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 65, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r357 = CPyStatics[137]; /* 'Moonbeam' */
    cpy_r_r358 = CPyStatics[354]; /* 1284 */
    cpy_r_r359 = CPyDict_SetItem(cpy_r_r110, cpy_r_r357, cpy_r_r358);
    cpy_r_r360 = cpy_r_r359 >= 0;
    if (unlikely(!cpy_r_r360)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 65, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r361 = (PyObject *)&PyLong_Type;
    cpy_r_r362 = CPyStatics[138]; /* 'Moonriver' */
    cpy_r_r363 = PyDict_SetItem(cpy_r_r112, cpy_r_r362, cpy_r_r361);
    cpy_r_r364 = cpy_r_r363 >= 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 66, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r365 = CPyStatics[138]; /* 'Moonriver' */
    cpy_r_r366 = CPyStatics[355]; /* 1285 */
    cpy_r_r367 = CPyDict_SetItem(cpy_r_r110, cpy_r_r365, cpy_r_r366);
    cpy_r_r368 = cpy_r_r367 >= 0;
    if (unlikely(!cpy_r_r368)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 66, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r369 = (PyObject *)&PyLong_Type;
    cpy_r_r370 = CPyStatics[139]; /* 'MoonbaseAlphaTestnet' */
    cpy_r_r371 = PyDict_SetItem(cpy_r_r112, cpy_r_r370, cpy_r_r369);
    cpy_r_r372 = cpy_r_r371 >= 0;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 67, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r373 = CPyStatics[139]; /* 'MoonbaseAlphaTestnet' */
    cpy_r_r374 = CPyStatics[356]; /* 1287 */
    cpy_r_r375 = CPyDict_SetItem(cpy_r_r110, cpy_r_r373, cpy_r_r374);
    cpy_r_r376 = cpy_r_r375 >= 0;
    if (unlikely(!cpy_r_r376)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 67, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r377 = (PyObject *)&PyLong_Type;
    cpy_r_r378 = CPyStatics[140]; /* 'Milkomeda' */
    cpy_r_r379 = PyDict_SetItem(cpy_r_r112, cpy_r_r378, cpy_r_r377);
    cpy_r_r380 = cpy_r_r379 >= 0;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 68, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r381 = CPyStatics[140]; /* 'Milkomeda' */
    cpy_r_r382 = CPyStatics[357]; /* 2001 */
    cpy_r_r383 = CPyDict_SetItem(cpy_r_r110, cpy_r_r381, cpy_r_r382);
    cpy_r_r384 = cpy_r_r383 >= 0;
    if (unlikely(!cpy_r_r384)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 68, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r385 = (PyObject *)&PyLong_Type;
    cpy_r_r386 = CPyStatics[141]; /* 'Kava' */
    cpy_r_r387 = PyDict_SetItem(cpy_r_r112, cpy_r_r386, cpy_r_r385);
    cpy_r_r388 = cpy_r_r387 >= 0;
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 69, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r389 = CPyStatics[141]; /* 'Kava' */
    cpy_r_r390 = CPyStatics[358]; /* 2222 */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r110, cpy_r_r389, cpy_r_r390);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 69, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r393 = (PyObject *)&PyLong_Type;
    cpy_r_r394 = CPyStatics[142]; /* 'FantomTestnet' */
    cpy_r_r395 = PyDict_SetItem(cpy_r_r112, cpy_r_r394, cpy_r_r393);
    cpy_r_r396 = cpy_r_r395 >= 0;
    if (unlikely(!cpy_r_r396)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 70, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r397 = CPyStatics[142]; /* 'FantomTestnet' */
    cpy_r_r398 = CPyStatics[359]; /* 4002 */
    cpy_r_r399 = CPyDict_SetItem(cpy_r_r110, cpy_r_r397, cpy_r_r398);
    cpy_r_r400 = cpy_r_r399 >= 0;
    if (unlikely(!cpy_r_r400)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 70, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r401 = (PyObject *)&PyLong_Type;
    cpy_r_r402 = CPyStatics[143]; /* 'Canto' */
    cpy_r_r403 = PyDict_SetItem(cpy_r_r112, cpy_r_r402, cpy_r_r401);
    cpy_r_r404 = cpy_r_r403 >= 0;
    if (unlikely(!cpy_r_r404)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 71, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r405 = CPyStatics[143]; /* 'Canto' */
    cpy_r_r406 = CPyStatics[360]; /* 7700 */
    cpy_r_r407 = CPyDict_SetItem(cpy_r_r110, cpy_r_r405, cpy_r_r406);
    cpy_r_r408 = cpy_r_r407 >= 0;
    if (unlikely(!cpy_r_r408)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 71, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r409 = (PyObject *)&PyLong_Type;
    cpy_r_r410 = CPyStatics[144]; /* 'Klaytn' */
    cpy_r_r411 = PyDict_SetItem(cpy_r_r112, cpy_r_r410, cpy_r_r409);
    cpy_r_r412 = cpy_r_r411 >= 0;
    if (unlikely(!cpy_r_r412)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 72, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r413 = CPyStatics[144]; /* 'Klaytn' */
    cpy_r_r414 = CPyStatics[361]; /* 8217 */
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r110, cpy_r_r413, cpy_r_r414);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 72, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r417 = (PyObject *)&PyLong_Type;
    cpy_r_r418 = CPyStatics[145]; /* 'Base' */
    cpy_r_r419 = PyDict_SetItem(cpy_r_r112, cpy_r_r418, cpy_r_r417);
    cpy_r_r420 = cpy_r_r419 >= 0;
    if (unlikely(!cpy_r_r420)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 73, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r421 = CPyStatics[145]; /* 'Base' */
    cpy_r_r422 = CPyStatics[362]; /* 8453 */
    cpy_r_r423 = CPyDict_SetItem(cpy_r_r110, cpy_r_r421, cpy_r_r422);
    cpy_r_r424 = cpy_r_r423 >= 0;
    if (unlikely(!cpy_r_r424)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 73, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r425 = (PyObject *)&PyLong_Type;
    cpy_r_r426 = CPyStatics[146]; /* 'EvmosTestnet' */
    cpy_r_r427 = PyDict_SetItem(cpy_r_r112, cpy_r_r426, cpy_r_r425);
    cpy_r_r428 = cpy_r_r427 >= 0;
    if (unlikely(!cpy_r_r428)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 74, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r429 = CPyStatics[146]; /* 'EvmosTestnet' */
    cpy_r_r430 = CPyStatics[363]; /* 9000 */
    cpy_r_r431 = CPyDict_SetItem(cpy_r_r110, cpy_r_r429, cpy_r_r430);
    cpy_r_r432 = cpy_r_r431 >= 0;
    if (unlikely(!cpy_r_r432)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 74, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r433 = (PyObject *)&PyLong_Type;
    cpy_r_r434 = CPyStatics[147]; /* 'Evmos' */
    cpy_r_r435 = PyDict_SetItem(cpy_r_r112, cpy_r_r434, cpy_r_r433);
    cpy_r_r436 = cpy_r_r435 >= 0;
    if (unlikely(!cpy_r_r436)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 75, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r437 = CPyStatics[147]; /* 'Evmos' */
    cpy_r_r438 = CPyStatics[364]; /* 9001 */
    cpy_r_r439 = CPyDict_SetItem(cpy_r_r110, cpy_r_r437, cpy_r_r438);
    cpy_r_r440 = cpy_r_r439 >= 0;
    if (unlikely(!cpy_r_r440)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 75, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r441 = (PyObject *)&PyLong_Type;
    cpy_r_r442 = CPyStatics[148]; /* 'Holesky' */
    cpy_r_r443 = PyDict_SetItem(cpy_r_r112, cpy_r_r442, cpy_r_r441);
    cpy_r_r444 = cpy_r_r443 >= 0;
    if (unlikely(!cpy_r_r444)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 76, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r445 = CPyStatics[148]; /* 'Holesky' */
    cpy_r_r446 = CPyStatics[365]; /* 17000 */
    cpy_r_r447 = CPyDict_SetItem(cpy_r_r110, cpy_r_r445, cpy_r_r446);
    cpy_r_r448 = cpy_r_r447 >= 0;
    if (unlikely(!cpy_r_r448)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 76, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r449 = (PyObject *)&PyLong_Type;
    cpy_r_r450 = CPyStatics[149]; /* 'Arbitrum' */
    cpy_r_r451 = PyDict_SetItem(cpy_r_r112, cpy_r_r450, cpy_r_r449);
    cpy_r_r452 = cpy_r_r451 >= 0;
    if (unlikely(!cpy_r_r452)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 77, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r453 = CPyStatics[149]; /* 'Arbitrum' */
    cpy_r_r454 = CPyStatics[366]; /* 42161 */
    cpy_r_r455 = CPyDict_SetItem(cpy_r_r110, cpy_r_r453, cpy_r_r454);
    cpy_r_r456 = cpy_r_r455 >= 0;
    if (unlikely(!cpy_r_r456)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 77, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r457 = (PyObject *)&PyLong_Type;
    cpy_r_r458 = CPyStatics[150]; /* 'Celo' */
    cpy_r_r459 = PyDict_SetItem(cpy_r_r112, cpy_r_r458, cpy_r_r457);
    cpy_r_r460 = cpy_r_r459 >= 0;
    if (unlikely(!cpy_r_r460)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 78, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r461 = CPyStatics[150]; /* 'Celo' */
    cpy_r_r462 = CPyStatics[367]; /* 42220 */
    cpy_r_r463 = CPyDict_SetItem(cpy_r_r110, cpy_r_r461, cpy_r_r462);
    cpy_r_r464 = cpy_r_r463 >= 0;
    if (unlikely(!cpy_r_r464)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 78, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r465 = (PyObject *)&PyLong_Type;
    cpy_r_r466 = CPyStatics[151]; /* 'Oasis' */
    cpy_r_r467 = PyDict_SetItem(cpy_r_r112, cpy_r_r466, cpy_r_r465);
    cpy_r_r468 = cpy_r_r467 >= 0;
    if (unlikely(!cpy_r_r468)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 79, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r469 = CPyStatics[151]; /* 'Oasis' */
    cpy_r_r470 = CPyStatics[368]; /* 42262 */
    cpy_r_r471 = CPyDict_SetItem(cpy_r_r110, cpy_r_r469, cpy_r_r470);
    cpy_r_r472 = cpy_r_r471 >= 0;
    if (unlikely(!cpy_r_r472)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 79, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r473 = (PyObject *)&PyLong_Type;
    cpy_r_r474 = CPyStatics[152]; /* 'AvalancheFuji' */
    cpy_r_r475 = PyDict_SetItem(cpy_r_r112, cpy_r_r474, cpy_r_r473);
    cpy_r_r476 = cpy_r_r475 >= 0;
    if (unlikely(!cpy_r_r476)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 80, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r477 = CPyStatics[152]; /* 'AvalancheFuji' */
    cpy_r_r478 = CPyStatics[369]; /* 43113 */
    cpy_r_r479 = CPyDict_SetItem(cpy_r_r110, cpy_r_r477, cpy_r_r478);
    cpy_r_r480 = cpy_r_r479 >= 0;
    if (unlikely(!cpy_r_r480)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 80, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r481 = (PyObject *)&PyLong_Type;
    cpy_r_r482 = CPyStatics[153]; /* 'Avax' */
    cpy_r_r483 = PyDict_SetItem(cpy_r_r112, cpy_r_r482, cpy_r_r481);
    cpy_r_r484 = cpy_r_r483 >= 0;
    if (unlikely(!cpy_r_r484)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 81, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r485 = CPyStatics[153]; /* 'Avax' */
    cpy_r_r486 = CPyStatics[370]; /* 43114 */
    cpy_r_r487 = CPyDict_SetItem(cpy_r_r110, cpy_r_r485, cpy_r_r486);
    cpy_r_r488 = cpy_r_r487 >= 0;
    if (unlikely(!cpy_r_r488)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 81, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r489 = (PyObject *)&PyLong_Type;
    cpy_r_r490 = CPyStatics[154]; /* 'GodwokenTestnet' */
    cpy_r_r491 = PyDict_SetItem(cpy_r_r112, cpy_r_r490, cpy_r_r489);
    cpy_r_r492 = cpy_r_r491 >= 0;
    if (unlikely(!cpy_r_r492)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 82, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r493 = CPyStatics[154]; /* 'GodwokenTestnet' */
    cpy_r_r494 = CPyStatics[371]; /* 71401 */
    cpy_r_r495 = CPyDict_SetItem(cpy_r_r110, cpy_r_r493, cpy_r_r494);
    cpy_r_r496 = cpy_r_r495 >= 0;
    if (unlikely(!cpy_r_r496)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 82, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r497 = (PyObject *)&PyLong_Type;
    cpy_r_r498 = CPyStatics[155]; /* 'Godwoken' */
    cpy_r_r499 = PyDict_SetItem(cpy_r_r112, cpy_r_r498, cpy_r_r497);
    cpy_r_r500 = cpy_r_r499 >= 0;
    if (unlikely(!cpy_r_r500)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 83, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r501 = CPyStatics[155]; /* 'Godwoken' */
    cpy_r_r502 = CPyStatics[372]; /* 71402 */
    cpy_r_r503 = CPyDict_SetItem(cpy_r_r110, cpy_r_r501, cpy_r_r502);
    cpy_r_r504 = cpy_r_r503 >= 0;
    if (unlikely(!cpy_r_r504)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 83, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r505 = (PyObject *)&PyLong_Type;
    cpy_r_r506 = CPyStatics[156]; /* 'Mumbai' */
    cpy_r_r507 = PyDict_SetItem(cpy_r_r112, cpy_r_r506, cpy_r_r505);
    cpy_r_r508 = cpy_r_r507 >= 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 84, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r509 = CPyStatics[156]; /* 'Mumbai' */
    cpy_r_r510 = CPyStatics[373]; /* 80001 */
    cpy_r_r511 = CPyDict_SetItem(cpy_r_r110, cpy_r_r509, cpy_r_r510);
    cpy_r_r512 = cpy_r_r511 >= 0;
    if (unlikely(!cpy_r_r512)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 84, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r513 = (PyObject *)&PyLong_Type;
    cpy_r_r514 = CPyStatics[157]; /* 'ArbitrumRinkeby' */
    cpy_r_r515 = PyDict_SetItem(cpy_r_r112, cpy_r_r514, cpy_r_r513);
    cpy_r_r516 = cpy_r_r515 >= 0;
    if (unlikely(!cpy_r_r516)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 85, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r517 = CPyStatics[157]; /* 'ArbitrumRinkeby' */
    cpy_r_r518 = CPyStatics[374]; /* 421611 */
    cpy_r_r519 = CPyDict_SetItem(cpy_r_r110, cpy_r_r517, cpy_r_r518);
    cpy_r_r520 = cpy_r_r519 >= 0;
    if (unlikely(!cpy_r_r520)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 85, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r521 = (PyObject *)&PyLong_Type;
    cpy_r_r522 = CPyStatics[158]; /* 'ArbitrumGorli' */
    cpy_r_r523 = PyDict_SetItem(cpy_r_r112, cpy_r_r522, cpy_r_r521);
    cpy_r_r524 = cpy_r_r523 >= 0;
    if (unlikely(!cpy_r_r524)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 86, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r525 = CPyStatics[158]; /* 'ArbitrumGorli' */
    cpy_r_r526 = CPyStatics[375]; /* 421613 */
    cpy_r_r527 = CPyDict_SetItem(cpy_r_r110, cpy_r_r525, cpy_r_r526);
    cpy_r_r528 = cpy_r_r527 >= 0;
    if (unlikely(!cpy_r_r528)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 86, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r529 = (PyObject *)&PyLong_Type;
    cpy_r_r530 = CPyStatics[159]; /* 'Sepolia' */
    cpy_r_r531 = PyDict_SetItem(cpy_r_r112, cpy_r_r530, cpy_r_r529);
    cpy_r_r532 = cpy_r_r531 >= 0;
    if (unlikely(!cpy_r_r532)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 87, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r533 = CPyStatics[159]; /* 'Sepolia' */
    cpy_r_r534 = CPyStatics[376]; /* 11155111 */
    cpy_r_r535 = CPyDict_SetItem(cpy_r_r110, cpy_r_r533, cpy_r_r534);
    cpy_r_r536 = cpy_r_r535 >= 0;
    if (unlikely(!cpy_r_r536)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 87, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r537 = (PyObject *)&PyLong_Type;
    cpy_r_r538 = CPyStatics[160]; /* 'Aurora' */
    cpy_r_r539 = PyDict_SetItem(cpy_r_r112, cpy_r_r538, cpy_r_r537);
    cpy_r_r540 = cpy_r_r539 >= 0;
    if (unlikely(!cpy_r_r540)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 88, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r541 = CPyStatics[160]; /* 'Aurora' */
    cpy_r_r542 = CPyStatics[377]; /* 1313161554 */
    cpy_r_r543 = CPyDict_SetItem(cpy_r_r110, cpy_r_r541, cpy_r_r542);
    cpy_r_r544 = cpy_r_r543 >= 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 88, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r545 = (PyObject *)&PyLong_Type;
    cpy_r_r546 = CPyStatics[161]; /* 'Harmony' */
    cpy_r_r547 = PyDict_SetItem(cpy_r_r112, cpy_r_r546, cpy_r_r545);
    cpy_r_r548 = cpy_r_r547 >= 0;
    if (unlikely(!cpy_r_r548)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 89, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r549 = CPyStatics[161]; /* 'Harmony' */
    cpy_r_r550 = CPyStatics[378]; /* 1666600000 */
    cpy_r_r551 = CPyDict_SetItem(cpy_r_r110, cpy_r_r549, cpy_r_r550);
    cpy_r_r552 = cpy_r_r551 >= 0;
    if (unlikely(!cpy_r_r552)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 89, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r553 = (PyObject *)&PyLong_Type;
    cpy_r_r554 = CPyStatics[162]; /* 'PulseChain' */
    cpy_r_r555 = PyDict_SetItem(cpy_r_r112, cpy_r_r554, cpy_r_r553);
    cpy_r_r556 = cpy_r_r555 >= 0;
    if (unlikely(!cpy_r_r556)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 90, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r557 = CPyStatics[162]; /* 'PulseChain' */
    cpy_r_r558 = CPyStatics[379]; /* 369 */
    cpy_r_r559 = CPyDict_SetItem(cpy_r_r110, cpy_r_r557, cpy_r_r558);
    cpy_r_r560 = cpy_r_r559 >= 0;
    if (unlikely(!cpy_r_r560)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 90, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r561 = (PyObject *)&PyLong_Type;
    cpy_r_r562 = CPyStatics[163]; /* 'PulseChainTestnet' */
    cpy_r_r563 = PyDict_SetItem(cpy_r_r112, cpy_r_r562, cpy_r_r561);
    cpy_r_r564 = cpy_r_r563 >= 0;
    if (unlikely(!cpy_r_r564)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 91, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r565 = CPyStatics[163]; /* 'PulseChainTestnet' */
    cpy_r_r566 = CPyStatics[380]; /* 943 */
    cpy_r_r567 = CPyDict_SetItem(cpy_r_r110, cpy_r_r565, cpy_r_r566);
    cpy_r_r568 = cpy_r_r567 >= 0;
    if (unlikely(!cpy_r_r568)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 91, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r569 = (PyObject *)&PyLong_Type;
    cpy_r_r570 = CPyStatics[164]; /* 'Sei' */
    cpy_r_r571 = PyDict_SetItem(cpy_r_r112, cpy_r_r570, cpy_r_r569);
    cpy_r_r572 = cpy_r_r571 >= 0;
    if (unlikely(!cpy_r_r572)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 92, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r573 = CPyStatics[164]; /* 'Sei' */
    cpy_r_r574 = CPyStatics[381]; /* 1329 */
    cpy_r_r575 = CPyDict_SetItem(cpy_r_r110, cpy_r_r573, cpy_r_r574);
    cpy_r_r576 = cpy_r_r575 >= 0;
    if (unlikely(!cpy_r_r576)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 92, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r577 = (PyObject *)&PyLong_Type;
    cpy_r_r578 = CPyStatics[165]; /* 'Hoodi' */
    cpy_r_r579 = PyDict_SetItem(cpy_r_r112, cpy_r_r578, cpy_r_r577);
    cpy_r_r580 = cpy_r_r579 >= 0;
    if (unlikely(!cpy_r_r580)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 93, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r581 = CPyStatics[165]; /* 'Hoodi' */
    cpy_r_r582 = CPyStatics[382]; /* 560048 */
    cpy_r_r583 = CPyDict_SetItem(cpy_r_r110, cpy_r_r581, cpy_r_r582);
    cpy_r_r584 = cpy_r_r583 >= 0;
    if (unlikely(!cpy_r_r584)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 93, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r585 = (PyObject *)&PyLong_Type;
    cpy_r_r586 = CPyStatics[166]; /* 'HyperEVM' */
    cpy_r_r587 = PyDict_SetItem(cpy_r_r112, cpy_r_r586, cpy_r_r585);
    cpy_r_r588 = cpy_r_r587 >= 0;
    if (unlikely(!cpy_r_r588)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 94, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r589 = CPyStatics[166]; /* 'HyperEVM' */
    cpy_r_r590 = CPyStatics[383]; /* 999 */
    cpy_r_r591 = CPyDict_SetItem(cpy_r_r110, cpy_r_r589, cpy_r_r590);
    cpy_r_r592 = cpy_r_r591 >= 0;
    if (unlikely(!cpy_r_r592)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 94, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r593 = (PyObject *)&PyLong_Type;
    cpy_r_r594 = CPyStatics[167]; /* 'Berachain' */
    cpy_r_r595 = PyDict_SetItem(cpy_r_r112, cpy_r_r594, cpy_r_r593);
    cpy_r_r596 = cpy_r_r595 >= 0;
    if (unlikely(!cpy_r_r596)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 95, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r597 = CPyStatics[167]; /* 'Berachain' */
    cpy_r_r598 = CPyStatics[384]; /* 80094 */
    cpy_r_r599 = CPyDict_SetItem(cpy_r_r110, cpy_r_r597, cpy_r_r598);
    cpy_r_r600 = cpy_r_r599 >= 0;
    if (unlikely(!cpy_r_r600)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 95, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r601 = (PyObject *)&PyLong_Type;
    cpy_r_r602 = CPyStatics[168]; /* 'Katana' */
    cpy_r_r603 = PyDict_SetItem(cpy_r_r112, cpy_r_r602, cpy_r_r601);
    cpy_r_r604 = cpy_r_r603 >= 0;
    if (unlikely(!cpy_r_r604)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 96, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r605 = CPyStatics[168]; /* 'Katana' */
    cpy_r_r606 = CPyStatics[385]; /* 747474 */
    cpy_r_r607 = CPyDict_SetItem(cpy_r_r110, cpy_r_r605, cpy_r_r606);
    cpy_r_r608 = cpy_r_r607 >= 0;
    if (unlikely(!cpy_r_r608)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 96, CPyStatic_constants___globals);
        goto CPyL564;
    }
    cpy_r_r609 = CPyStatics[56]; /* 'Network' */
    cpy_r_r610 = CPyStatics[169]; /* '__annotations__' */
    cpy_r_r611 = CPyDict_SetItem(cpy_r_r110, cpy_r_r610, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r612 = cpy_r_r611 >= 0;
    if (unlikely(!cpy_r_r612)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL563;
    }
    cpy_r_r613 = CPyStatics[170]; /* 'mypyc filler docstring' */
    cpy_r_r614 = CPyStatics[171]; /* '__doc__' */
    cpy_r_r615 = CPyDict_SetItem(cpy_r_r110, cpy_r_r614, cpy_r_r613);
    cpy_r_r616 = cpy_r_r615 >= 0;
    if (unlikely(!cpy_r_r616)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL563;
    }
    cpy_r_r617 = CPyStatics[57]; /* 'multicall.constants' */
    cpy_r_r618 = CPyStatics[172]; /* '__module__' */
    cpy_r_r619 = CPyDict_SetItem(cpy_r_r110, cpy_r_r618, cpy_r_r617);
    cpy_r_r620 = cpy_r_r619 >= 0;
    if (unlikely(!cpy_r_r620)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL563;
    }
    PyObject *cpy_r_r621[3] = {cpy_r_r609, cpy_r_r98, cpy_r_r110};
    cpy_r_r622 = (PyObject **)&cpy_r_r621;
    cpy_r_r623 = PyObject_Vectorcall(cpy_r_r100, cpy_r_r622, 3, 0);
    if (unlikely(cpy_r_r623 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL563;
    }
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r624 = CPyStatic_constants___globals;
    cpy_r_r625 = CPyStatics[41]; /* 'final' */
    cpy_r_r626 = CPyDict_GetItem(cpy_r_r624, cpy_r_r625);
    if (unlikely(cpy_r_r626 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 33, CPyStatic_constants___globals);
        goto CPyL565;
    }
    PyObject *cpy_r_r627[1] = {cpy_r_r623};
    cpy_r_r628 = (PyObject **)&cpy_r_r627;
    cpy_r_r629 = PyObject_Vectorcall(cpy_r_r626, cpy_r_r628, 1, 0);
    CPy_DECREF(cpy_r_r626);
    if (unlikely(cpy_r_r629 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL565;
    }
    CPy_DECREF(cpy_r_r623);
    CPyType_constants___Network = (PyTypeObject *)cpy_r_r629;
    CPy_INCREF(CPyType_constants___Network);
    cpy_r_r630 = CPyStatic_constants___globals;
    cpy_r_r631 = CPyStatics[56]; /* 'Network' */
    cpy_r_r632 = PyDict_SetItem(cpy_r_r630, cpy_r_r631, cpy_r_r629);
    CPy_DECREF(cpy_r_r629);
    cpy_r_r633 = cpy_r_r632 >= 0;
    if (unlikely(!cpy_r_r633)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r634 = (PyObject *)CPyType_constants___Network;
    cpy_r_r635 = CPyStatics[107]; /* 'Mainnet' */
    cpy_r_r636 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r635);
    if (unlikely(cpy_r_r636 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Mainnet = cpy_r_r636;
    CPy_INCREF(CPyStatic_constants___Network___Mainnet);
    CPy_DECREF(cpy_r_r636);
    cpy_r_r637 = CPyStatics[108]; /* 'Ropsten' */
    cpy_r_r638 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r637);
    if (unlikely(cpy_r_r638 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Ropsten = cpy_r_r638;
    CPy_INCREF(CPyStatic_constants___Network___Ropsten);
    CPy_DECREF(cpy_r_r638);
    cpy_r_r639 = CPyStatics[109]; /* 'Rinkeby' */
    cpy_r_r640 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r639);
    if (unlikely(cpy_r_r640 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Rinkeby = cpy_r_r640;
    CPy_INCREF(CPyStatic_constants___Network___Rinkeby);
    CPy_DECREF(cpy_r_r640);
    cpy_r_r641 = CPyStatics[110]; /* 'Gorli' */
    cpy_r_r642 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r641);
    if (unlikely(cpy_r_r642 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Gorli = cpy_r_r642;
    CPy_INCREF(CPyStatic_constants___Network___Gorli);
    CPy_DECREF(cpy_r_r642);
    cpy_r_r643 = CPyStatics[111]; /* 'Optimism' */
    cpy_r_r644 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r643);
    if (unlikely(cpy_r_r644 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Optimism = cpy_r_r644;
    CPy_INCREF(CPyStatic_constants___Network___Optimism);
    CPy_DECREF(cpy_r_r644);
    cpy_r_r645 = CPyStatics[112]; /* 'CostonTestnet' */
    cpy_r_r646 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r645);
    if (unlikely(cpy_r_r646 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___CostonTestnet = cpy_r_r646;
    CPy_INCREF(CPyStatic_constants___Network___CostonTestnet);
    CPy_DECREF(cpy_r_r646);
    cpy_r_r647 = CPyStatics[113]; /* 'ThundercoreTestnet' */
    cpy_r_r648 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r647);
    if (unlikely(cpy_r_r648 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___ThundercoreTestnet = cpy_r_r648;
    CPy_INCREF(CPyStatic_constants___Network___ThundercoreTestnet);
    CPy_DECREF(cpy_r_r648);
    cpy_r_r649 = CPyStatics[114]; /* 'SongbirdCanaryNetwork' */
    cpy_r_r650 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r649);
    if (unlikely(cpy_r_r650 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___SongbirdCanaryNetwork = cpy_r_r650;
    CPy_INCREF(CPyStatic_constants___Network___SongbirdCanaryNetwork);
    CPy_DECREF(cpy_r_r650);
    cpy_r_r651 = CPyStatics[115]; /* 'Cronos' */
    cpy_r_r652 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r651);
    if (unlikely(cpy_r_r652 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Cronos = cpy_r_r652;
    CPy_INCREF(CPyStatic_constants___Network___Cronos);
    CPy_DECREF(cpy_r_r652);
    cpy_r_r653 = CPyStatics[116]; /* 'RSK' */
    cpy_r_r654 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r653);
    if (unlikely(cpy_r_r654 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___RSK = cpy_r_r654;
    CPy_INCREF(CPyStatic_constants___Network___RSK);
    CPy_DECREF(cpy_r_r654);
    cpy_r_r655 = CPyStatics[117]; /* 'RSKTestnet' */
    cpy_r_r656 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r655);
    if (unlikely(cpy_r_r656 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___RSKTestnet = cpy_r_r656;
    CPy_INCREF(CPyStatic_constants___Network___RSKTestnet);
    CPy_DECREF(cpy_r_r656);
    cpy_r_r657 = CPyStatics[118]; /* 'Kovan' */
    cpy_r_r658 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r657);
    if (unlikely(cpy_r_r658 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Kovan = cpy_r_r658;
    CPy_INCREF(CPyStatic_constants___Network___Kovan);
    CPy_DECREF(cpy_r_r658);
    cpy_r_r659 = CPyStatics[119]; /* 'Bsc' */
    cpy_r_r660 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r659);
    if (unlikely(cpy_r_r660 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Bsc = cpy_r_r660;
    CPy_INCREF(CPyStatic_constants___Network___Bsc);
    CPy_DECREF(cpy_r_r660);
    cpy_r_r661 = CPyStatics[120]; /* 'OKC' */
    cpy_r_r662 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r661);
    if (unlikely(cpy_r_r662 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___OKC = cpy_r_r662;
    CPy_INCREF(CPyStatic_constants___Network___OKC);
    CPy_DECREF(cpy_r_r662);
    cpy_r_r663 = CPyStatics[121]; /* 'OptimismKovan' */
    cpy_r_r664 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r663);
    if (unlikely(cpy_r_r664 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___OptimismKovan = cpy_r_r664;
    CPy_INCREF(CPyStatic_constants___Network___OptimismKovan);
    CPy_DECREF(cpy_r_r664);
    cpy_r_r665 = CPyStatics[122]; /* 'BscTestnet' */
    cpy_r_r666 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r665);
    if (unlikely(cpy_r_r666 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___BscTestnet = cpy_r_r666;
    CPy_INCREF(CPyStatic_constants___Network___BscTestnet);
    CPy_DECREF(cpy_r_r666);
    cpy_r_r667 = CPyStatics[123]; /* 'Gnosis' */
    cpy_r_r668 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r667);
    if (unlikely(cpy_r_r668 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Gnosis = cpy_r_r668;
    CPy_INCREF(CPyStatic_constants___Network___Gnosis);
    CPy_DECREF(cpy_r_r668);
    cpy_r_r669 = CPyStatics[124]; /* 'Velas' */
    cpy_r_r670 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r669);
    if (unlikely(cpy_r_r670 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Velas = cpy_r_r670;
    CPy_INCREF(CPyStatic_constants___Network___Velas);
    CPy_DECREF(cpy_r_r670);
    cpy_r_r671 = CPyStatics[125]; /* 'Thundercore' */
    cpy_r_r672 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r671);
    if (unlikely(cpy_r_r672 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Thundercore = cpy_r_r672;
    CPy_INCREF(CPyStatic_constants___Network___Thundercore);
    CPy_DECREF(cpy_r_r672);
    cpy_r_r673 = CPyStatics[126]; /* 'Coston2Testnet' */
    cpy_r_r674 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r673);
    if (unlikely(cpy_r_r674 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Coston2Testnet = cpy_r_r674;
    CPy_INCREF(CPyStatic_constants___Network___Coston2Testnet);
    CPy_DECREF(cpy_r_r674);
    cpy_r_r675 = CPyStatics[127]; /* 'Fuse' */
    cpy_r_r676 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r675);
    if (unlikely(cpy_r_r676 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Fuse = cpy_r_r676;
    CPy_INCREF(CPyStatic_constants___Network___Fuse);
    CPy_DECREF(cpy_r_r676);
    cpy_r_r677 = CPyStatics[128]; /* 'Heco' */
    cpy_r_r678 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r677);
    if (unlikely(cpy_r_r678 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Heco = cpy_r_r678;
    CPy_INCREF(CPyStatic_constants___Network___Heco);
    CPy_DECREF(cpy_r_r678);
    cpy_r_r679 = CPyStatics[129]; /* 'Polygon' */
    cpy_r_r680 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r679);
    if (unlikely(cpy_r_r680 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Polygon = cpy_r_r680;
    CPy_INCREF(CPyStatic_constants___Network___Polygon);
    CPy_DECREF(cpy_r_r680);
    cpy_r_r681 = CPyStatics[130]; /* 'Fantom' */
    cpy_r_r682 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r681);
    if (unlikely(cpy_r_r682 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Fantom = cpy_r_r682;
    CPy_INCREF(CPyStatic_constants___Network___Fantom);
    CPy_DECREF(cpy_r_r682);
    cpy_r_r683 = CPyStatics[131]; /* 'Boba' */
    cpy_r_r684 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r683);
    if (unlikely(cpy_r_r684 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Boba = cpy_r_r684;
    CPy_INCREF(CPyStatic_constants___Network___Boba);
    CPy_DECREF(cpy_r_r684);
    cpy_r_r685 = CPyStatics[132]; /* 'KCC' */
    cpy_r_r686 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r685);
    if (unlikely(cpy_r_r686 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___KCC = cpy_r_r686;
    CPy_INCREF(CPyStatic_constants___Network___KCC);
    CPy_DECREF(cpy_r_r686);
    cpy_r_r687 = CPyStatics[133]; /* 'ZkSync' */
    cpy_r_r688 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r687);
    if (unlikely(cpy_r_r688 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___ZkSync = cpy_r_r688;
    CPy_INCREF(CPyStatic_constants___Network___ZkSync);
    CPy_DECREF(cpy_r_r688);
    cpy_r_r689 = CPyStatics[134]; /* 'OptimismGorli' */
    cpy_r_r690 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r689);
    if (unlikely(cpy_r_r690 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___OptimismGorli = cpy_r_r690;
    CPy_INCREF(CPyStatic_constants___Network___OptimismGorli);
    CPy_DECREF(cpy_r_r690);
    cpy_r_r691 = CPyStatics[135]; /* 'Astar' */
    cpy_r_r692 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r691);
    if (unlikely(cpy_r_r692 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Astar = cpy_r_r692;
    CPy_INCREF(CPyStatic_constants___Network___Astar);
    CPy_DECREF(cpy_r_r692);
    cpy_r_r693 = CPyStatics[136]; /* 'Metis' */
    cpy_r_r694 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r693);
    if (unlikely(cpy_r_r694 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Metis = cpy_r_r694;
    CPy_INCREF(CPyStatic_constants___Network___Metis);
    CPy_DECREF(cpy_r_r694);
    cpy_r_r695 = CPyStatics[137]; /* 'Moonbeam' */
    cpy_r_r696 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r695);
    if (unlikely(cpy_r_r696 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Moonbeam = cpy_r_r696;
    CPy_INCREF(CPyStatic_constants___Network___Moonbeam);
    CPy_DECREF(cpy_r_r696);
    cpy_r_r697 = CPyStatics[138]; /* 'Moonriver' */
    cpy_r_r698 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r697);
    if (unlikely(cpy_r_r698 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Moonriver = cpy_r_r698;
    CPy_INCREF(CPyStatic_constants___Network___Moonriver);
    CPy_DECREF(cpy_r_r698);
    cpy_r_r699 = CPyStatics[139]; /* 'MoonbaseAlphaTestnet' */
    cpy_r_r700 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r699);
    if (unlikely(cpy_r_r700 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___MoonbaseAlphaTestnet = cpy_r_r700;
    CPy_INCREF(CPyStatic_constants___Network___MoonbaseAlphaTestnet);
    CPy_DECREF(cpy_r_r700);
    cpy_r_r701 = CPyStatics[140]; /* 'Milkomeda' */
    cpy_r_r702 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r701);
    if (unlikely(cpy_r_r702 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Milkomeda = cpy_r_r702;
    CPy_INCREF(CPyStatic_constants___Network___Milkomeda);
    CPy_DECREF(cpy_r_r702);
    cpy_r_r703 = CPyStatics[141]; /* 'Kava' */
    cpy_r_r704 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r703);
    if (unlikely(cpy_r_r704 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Kava = cpy_r_r704;
    CPy_INCREF(CPyStatic_constants___Network___Kava);
    CPy_DECREF(cpy_r_r704);
    cpy_r_r705 = CPyStatics[142]; /* 'FantomTestnet' */
    cpy_r_r706 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r705);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___FantomTestnet = cpy_r_r706;
    CPy_INCREF(CPyStatic_constants___Network___FantomTestnet);
    CPy_DECREF(cpy_r_r706);
    cpy_r_r707 = CPyStatics[143]; /* 'Canto' */
    cpy_r_r708 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r707);
    if (unlikely(cpy_r_r708 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Canto = cpy_r_r708;
    CPy_INCREF(CPyStatic_constants___Network___Canto);
    CPy_DECREF(cpy_r_r708);
    cpy_r_r709 = CPyStatics[144]; /* 'Klaytn' */
    cpy_r_r710 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r709);
    if (unlikely(cpy_r_r710 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Klaytn = cpy_r_r710;
    CPy_INCREF(CPyStatic_constants___Network___Klaytn);
    CPy_DECREF(cpy_r_r710);
    cpy_r_r711 = CPyStatics[145]; /* 'Base' */
    cpy_r_r712 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r711);
    if (unlikely(cpy_r_r712 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Base = cpy_r_r712;
    CPy_INCREF(CPyStatic_constants___Network___Base);
    CPy_DECREF(cpy_r_r712);
    cpy_r_r713 = CPyStatics[146]; /* 'EvmosTestnet' */
    cpy_r_r714 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r713);
    if (unlikely(cpy_r_r714 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___EvmosTestnet = cpy_r_r714;
    CPy_INCREF(CPyStatic_constants___Network___EvmosTestnet);
    CPy_DECREF(cpy_r_r714);
    cpy_r_r715 = CPyStatics[147]; /* 'Evmos' */
    cpy_r_r716 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r715);
    if (unlikely(cpy_r_r716 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Evmos = cpy_r_r716;
    CPy_INCREF(CPyStatic_constants___Network___Evmos);
    CPy_DECREF(cpy_r_r716);
    cpy_r_r717 = CPyStatics[148]; /* 'Holesky' */
    cpy_r_r718 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r717);
    if (unlikely(cpy_r_r718 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Holesky = cpy_r_r718;
    CPy_INCREF(CPyStatic_constants___Network___Holesky);
    CPy_DECREF(cpy_r_r718);
    cpy_r_r719 = CPyStatics[149]; /* 'Arbitrum' */
    cpy_r_r720 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r719);
    if (unlikely(cpy_r_r720 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Arbitrum = cpy_r_r720;
    CPy_INCREF(CPyStatic_constants___Network___Arbitrum);
    CPy_DECREF(cpy_r_r720);
    cpy_r_r721 = CPyStatics[150]; /* 'Celo' */
    cpy_r_r722 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r721);
    if (unlikely(cpy_r_r722 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Celo = cpy_r_r722;
    CPy_INCREF(CPyStatic_constants___Network___Celo);
    CPy_DECREF(cpy_r_r722);
    cpy_r_r723 = CPyStatics[151]; /* 'Oasis' */
    cpy_r_r724 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r723);
    if (unlikely(cpy_r_r724 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Oasis = cpy_r_r724;
    CPy_INCREF(CPyStatic_constants___Network___Oasis);
    CPy_DECREF(cpy_r_r724);
    cpy_r_r725 = CPyStatics[152]; /* 'AvalancheFuji' */
    cpy_r_r726 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r725);
    if (unlikely(cpy_r_r726 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___AvalancheFuji = cpy_r_r726;
    CPy_INCREF(CPyStatic_constants___Network___AvalancheFuji);
    CPy_DECREF(cpy_r_r726);
    cpy_r_r727 = CPyStatics[153]; /* 'Avax' */
    cpy_r_r728 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r727);
    if (unlikely(cpy_r_r728 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Avax = cpy_r_r728;
    CPy_INCREF(CPyStatic_constants___Network___Avax);
    CPy_DECREF(cpy_r_r728);
    cpy_r_r729 = CPyStatics[154]; /* 'GodwokenTestnet' */
    cpy_r_r730 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r729);
    if (unlikely(cpy_r_r730 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___GodwokenTestnet = cpy_r_r730;
    CPy_INCREF(CPyStatic_constants___Network___GodwokenTestnet);
    CPy_DECREF(cpy_r_r730);
    cpy_r_r731 = CPyStatics[155]; /* 'Godwoken' */
    cpy_r_r732 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r731);
    if (unlikely(cpy_r_r732 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Godwoken = cpy_r_r732;
    CPy_INCREF(CPyStatic_constants___Network___Godwoken);
    CPy_DECREF(cpy_r_r732);
    cpy_r_r733 = CPyStatics[156]; /* 'Mumbai' */
    cpy_r_r734 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r733);
    if (unlikely(cpy_r_r734 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Mumbai = cpy_r_r734;
    CPy_INCREF(CPyStatic_constants___Network___Mumbai);
    CPy_DECREF(cpy_r_r734);
    cpy_r_r735 = CPyStatics[157]; /* 'ArbitrumRinkeby' */
    cpy_r_r736 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r735);
    if (unlikely(cpy_r_r736 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___ArbitrumRinkeby = cpy_r_r736;
    CPy_INCREF(CPyStatic_constants___Network___ArbitrumRinkeby);
    CPy_DECREF(cpy_r_r736);
    cpy_r_r737 = CPyStatics[158]; /* 'ArbitrumGorli' */
    cpy_r_r738 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r737);
    if (unlikely(cpy_r_r738 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___ArbitrumGorli = cpy_r_r738;
    CPy_INCREF(CPyStatic_constants___Network___ArbitrumGorli);
    CPy_DECREF(cpy_r_r738);
    cpy_r_r739 = CPyStatics[159]; /* 'Sepolia' */
    cpy_r_r740 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r739);
    if (unlikely(cpy_r_r740 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Sepolia = cpy_r_r740;
    CPy_INCREF(CPyStatic_constants___Network___Sepolia);
    CPy_DECREF(cpy_r_r740);
    cpy_r_r741 = CPyStatics[160]; /* 'Aurora' */
    cpy_r_r742 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r741);
    if (unlikely(cpy_r_r742 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Aurora = cpy_r_r742;
    CPy_INCREF(CPyStatic_constants___Network___Aurora);
    CPy_DECREF(cpy_r_r742);
    cpy_r_r743 = CPyStatics[161]; /* 'Harmony' */
    cpy_r_r744 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r743);
    if (unlikely(cpy_r_r744 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Harmony = cpy_r_r744;
    CPy_INCREF(CPyStatic_constants___Network___Harmony);
    CPy_DECREF(cpy_r_r744);
    cpy_r_r745 = CPyStatics[162]; /* 'PulseChain' */
    cpy_r_r746 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r745);
    if (unlikely(cpy_r_r746 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___PulseChain = cpy_r_r746;
    CPy_INCREF(CPyStatic_constants___Network___PulseChain);
    CPy_DECREF(cpy_r_r746);
    cpy_r_r747 = CPyStatics[163]; /* 'PulseChainTestnet' */
    cpy_r_r748 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r747);
    if (unlikely(cpy_r_r748 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___PulseChainTestnet = cpy_r_r748;
    CPy_INCREF(CPyStatic_constants___Network___PulseChainTestnet);
    CPy_DECREF(cpy_r_r748);
    cpy_r_r749 = CPyStatics[164]; /* 'Sei' */
    cpy_r_r750 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r749);
    if (unlikely(cpy_r_r750 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Sei = cpy_r_r750;
    CPy_INCREF(CPyStatic_constants___Network___Sei);
    CPy_DECREF(cpy_r_r750);
    cpy_r_r751 = CPyStatics[165]; /* 'Hoodi' */
    cpy_r_r752 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r751);
    if (unlikely(cpy_r_r752 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Hoodi = cpy_r_r752;
    CPy_INCREF(CPyStatic_constants___Network___Hoodi);
    CPy_DECREF(cpy_r_r752);
    cpy_r_r753 = CPyStatics[166]; /* 'HyperEVM' */
    cpy_r_r754 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r753);
    if (unlikely(cpy_r_r754 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___HyperEVM = cpy_r_r754;
    CPy_INCREF(CPyStatic_constants___Network___HyperEVM);
    CPy_DECREF(cpy_r_r754);
    cpy_r_r755 = CPyStatics[167]; /* 'Berachain' */
    cpy_r_r756 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r755);
    if (unlikely(cpy_r_r756 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Berachain = cpy_r_r756;
    CPy_INCREF(CPyStatic_constants___Network___Berachain);
    CPy_DECREF(cpy_r_r756);
    cpy_r_r757 = CPyStatics[168]; /* 'Katana' */
    cpy_r_r758 = CPyObject_GetAttr(cpy_r_r634, cpy_r_r757);
    if (unlikely(cpy_r_r758 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___Network___Katana = cpy_r_r758;
    CPy_INCREF(CPyStatic_constants___Network___Katana);
    CPy_DECREF(cpy_r_r758);
    cpy_r_r759 = CPyStatic_constants___Network___Mainnet;
    if (likely(cpy_r_r759 != NULL)) goto CPyL241;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mainnet\" was not set");
    cpy_r_r760 = 0;
    if (unlikely(!cpy_r_r760)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 100, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL241: ;
    cpy_r_r761 = CPyStatics[173]; /* '0xeefBa1e63905eF1D7ACbA5a8513c70307C1cE441' */
    cpy_r_r762 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r762 != NULL)) goto CPyL244;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r763 = 0;
    if (unlikely(!cpy_r_r763)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 101, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL244: ;
    cpy_r_r764 = CPyStatics[174]; /* '0x2cc8688C5f75E365aaEEb4ea8D6a480405A48D2A' */
    cpy_r_r765 = CPyStatic_constants___Network___Rinkeby;
    if (likely(cpy_r_r765 != NULL)) goto CPyL247;
    PyErr_SetString(PyExc_NameError, "value for final name \"Rinkeby\" was not set");
    cpy_r_r766 = 0;
    if (unlikely(!cpy_r_r766)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 102, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL247: ;
    cpy_r_r767 = CPyStatics[175]; /* '0x42Ad527de7d4e9d9d011aC45B31D8551f8Fe9821' */
    cpy_r_r768 = CPyStatic_constants___Network___Gorli;
    if (likely(cpy_r_r768 != NULL)) goto CPyL250;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gorli\" was not set");
    cpy_r_r769 = 0;
    if (unlikely(!cpy_r_r769)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 103, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL250: ;
    cpy_r_r770 = CPyStatics[176]; /* '0x77dCa2C955b15e9dE4dbBCf1246B4B85b651e50e' */
    cpy_r_r771 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r771 != NULL)) goto CPyL253;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r772 = 0;
    if (unlikely(!cpy_r_r772)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 104, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL253: ;
    cpy_r_r773 = CPyStatics[177]; /* '0xb5b692a88BDFc81ca69dcB1d924f59f0413A602a' */
    cpy_r_r774 = CPyStatic_constants___Network___Polygon;
    if (likely(cpy_r_r774 != NULL)) goto CPyL256;
    PyErr_SetString(PyExc_NameError, "value for final name \"Polygon\" was not set");
    cpy_r_r775 = 0;
    if (unlikely(!cpy_r_r775)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 105, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL256: ;
    cpy_r_r776 = CPyStatics[178]; /* '0x95028E5B8a734bb7E2071F96De89BABe75be9C8E' */
    cpy_r_r777 = CPyStatic_constants___Network___Bsc;
    if (likely(cpy_r_r777 != NULL)) goto CPyL259;
    PyErr_SetString(PyExc_NameError, "value for final name \"Bsc\" was not set");
    cpy_r_r778 = 0;
    if (unlikely(!cpy_r_r778)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 106, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL259: ;
    cpy_r_r779 = CPyStatics[179]; /* '0x1Ee38d535d541c55C9dae27B12edf090C608E6Fb' */
    cpy_r_r780 = CPyStatic_constants___Network___Fantom;
    if (likely(cpy_r_r780 != NULL)) goto CPyL262;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fantom\" was not set");
    cpy_r_r781 = 0;
    if (unlikely(!cpy_r_r781)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 107, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL262: ;
    cpy_r_r782 = CPyStatics[180]; /* '0xb828C456600857abd4ed6C32FAcc607bD0464F4F' */
    cpy_r_r783 = CPyStatic_constants___Network___Heco;
    if (likely(cpy_r_r783 != NULL)) goto CPyL265;
    PyErr_SetString(PyExc_NameError, "value for final name \"Heco\" was not set");
    cpy_r_r784 = 0;
    if (unlikely(!cpy_r_r784)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 108, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL265: ;
    cpy_r_r785 = CPyStatics[181]; /* '0xc9a9F768ebD123A00B52e7A0E590df2e9E998707' */
    cpy_r_r786 = CPyStatic_constants___Network___Harmony;
    if (likely(cpy_r_r786 != NULL)) goto CPyL268;
    PyErr_SetString(PyExc_NameError, "value for final name \"Harmony\" was not set");
    cpy_r_r787 = 0;
    if (unlikely(!cpy_r_r787)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 109, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL268: ;
    cpy_r_r788 = CPyStatics[182]; /* '0xFE4980f62D708c2A84D3929859Ea226340759320' */
    cpy_r_r789 = CPyStatic_constants___Network___Cronos;
    if (likely(cpy_r_r789 != NULL)) goto CPyL271;
    PyErr_SetString(PyExc_NameError, "value for final name \"Cronos\" was not set");
    cpy_r_r790 = 0;
    if (unlikely(!cpy_r_r790)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 110, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL271: ;
    cpy_r_r791 = CPyStatics[183]; /* '0x5e954f5972EC6BFc7dECd75779F10d848230345F' */
    cpy_r_r792 = CPyStatic_constants___Network___Optimism;
    if (likely(cpy_r_r792 != NULL)) goto CPyL274;
    PyErr_SetString(PyExc_NameError, "value for final name \"Optimism\" was not set");
    cpy_r_r793 = 0;
    if (unlikely(!cpy_r_r793)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 111, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL274: ;
    cpy_r_r794 = CPyStatics[184]; /* '0x187C0F98FEF80E87880Db50241D40551eDd027Bf' */
    cpy_r_r795 = CPyStatic_constants___Network___OptimismKovan;
    if (likely(cpy_r_r795 != NULL)) goto CPyL277;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismKovan\" was not set");
    cpy_r_r796 = 0;
    if (unlikely(!cpy_r_r796)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 112, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL277: ;
    cpy_r_r797 = CPyStatics[185]; /* '0x2DC0E2aa608532Da689e89e237dF582B783E552C' */
    cpy_r_r798 = CPyStatic_constants___Network___Kava;
    if (likely(cpy_r_r798 != NULL)) goto CPyL280;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kava\" was not set");
    cpy_r_r799 = 0;
    if (unlikely(!cpy_r_r799)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 113, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL280: ;
    cpy_r_r800 = CPyStatics[186]; /* '0x7ED7bBd8C454a1B0D9EdD939c45a81A03c20131C' */
    cpy_r_r801 = CPyDict_Build(14, cpy_r_r759, cpy_r_r761, cpy_r_r762, cpy_r_r764, cpy_r_r765, cpy_r_r767, cpy_r_r768, cpy_r_r770, cpy_r_r771, cpy_r_r773, cpy_r_r774, cpy_r_r776, cpy_r_r777, cpy_r_r779, cpy_r_r780, cpy_r_r782, cpy_r_r783, cpy_r_r785, cpy_r_r786, cpy_r_r788, cpy_r_r789, cpy_r_r791, cpy_r_r792, cpy_r_r794, cpy_r_r795, cpy_r_r797, cpy_r_r798, cpy_r_r800);
    if (unlikely(cpy_r_r801 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 99, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___MULTICALL_ADDRESSES = cpy_r_r801;
    CPy_INCREF(CPyStatic_constants___MULTICALL_ADDRESSES);
    cpy_r_r802 = CPyStatic_constants___globals;
    cpy_r_r803 = CPyStatics[187]; /* 'MULTICALL_ADDRESSES' */
    cpy_r_r804 = CPyDict_SetItem(cpy_r_r802, cpy_r_r803, cpy_r_r801);
    CPy_DECREF(cpy_r_r801);
    cpy_r_r805 = cpy_r_r804 >= 0;
    if (unlikely(!cpy_r_r805)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 99, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r806 = CPyStatic_constants___Network___Mainnet;
    if (likely(cpy_r_r806 != NULL)) goto CPyL285;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mainnet\" was not set");
    cpy_r_r807 = 0;
    if (unlikely(!cpy_r_r807)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 117, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r808 = CPyStatics[188]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r809 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r809 != NULL)) goto CPyL288;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r810 = 0;
    if (unlikely(!cpy_r_r810)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 118, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL288: ;
    cpy_r_r811 = CPyStatics[188]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r812 = CPyStatic_constants___Network___Rinkeby;
    if (likely(cpy_r_r812 != NULL)) goto CPyL291;
    PyErr_SetString(PyExc_NameError, "value for final name \"Rinkeby\" was not set");
    cpy_r_r813 = 0;
    if (unlikely(!cpy_r_r813)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 119, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL291: ;
    cpy_r_r814 = CPyStatics[188]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r815 = CPyStatic_constants___Network___Gorli;
    if (likely(cpy_r_r815 != NULL)) goto CPyL294;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gorli\" was not set");
    cpy_r_r816 = 0;
    if (unlikely(!cpy_r_r816)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 120, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL294: ;
    cpy_r_r817 = CPyStatics[188]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r818 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r818 != NULL)) goto CPyL297;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r819 = 0;
    if (unlikely(!cpy_r_r819)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 121, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL297: ;
    cpy_r_r820 = CPyStatics[189]; /* '0x9903f30c1469d8A2f415D4E8184C93BD26992573' */
    cpy_r_r821 = CPyStatic_constants___Network___Polygon;
    if (likely(cpy_r_r821 != NULL)) goto CPyL300;
    PyErr_SetString(PyExc_NameError, "value for final name \"Polygon\" was not set");
    cpy_r_r822 = 0;
    if (unlikely(!cpy_r_r822)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 122, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL300: ;
    cpy_r_r823 = CPyStatics[190]; /* '0xc8E51042792d7405184DfCa245F2d27B94D013b6' */
    cpy_r_r824 = CPyStatic_constants___Network___Bsc;
    if (likely(cpy_r_r824 != NULL)) goto CPyL303;
    PyErr_SetString(PyExc_NameError, "value for final name \"Bsc\" was not set");
    cpy_r_r825 = 0;
    if (unlikely(!cpy_r_r825)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 123, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL303: ;
    cpy_r_r826 = CPyStatics[191]; /* '0xfF6FD90A470Aaa0c1B8A54681746b07AcdFedc9B' */
    cpy_r_r827 = CPyStatic_constants___Network___Fantom;
    if (likely(cpy_r_r827 != NULL)) goto CPyL306;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fantom\" was not set");
    cpy_r_r828 = 0;
    if (unlikely(!cpy_r_r828)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 124, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL306: ;
    cpy_r_r829 = CPyStatics[192]; /* '0xBAD2B082e2212DE4B065F636CA4e5e0717623d18' */
    cpy_r_r830 = CPyStatic_constants___Network___Moonriver;
    if (likely(cpy_r_r830 != NULL)) goto CPyL309;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonriver\" was not set");
    cpy_r_r831 = 0;
    if (unlikely(!cpy_r_r831)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 125, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL309: ;
    cpy_r_r832 = CPyStatics[193]; /* '0xB44a9B6905aF7c801311e8F4E76932ee959c663C' */
    cpy_r_r833 = CPyStatic_constants___Network___Arbitrum;
    if (likely(cpy_r_r833 != NULL)) goto CPyL312;
    PyErr_SetString(PyExc_NameError, "value for final name \"Arbitrum\" was not set");
    cpy_r_r834 = 0;
    if (unlikely(!cpy_r_r834)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 126, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL312: ;
    cpy_r_r835 = CPyStatics[194]; /* '0x842eC2c7D803033Edf55E478F461FC547Bc54EB2' */
    cpy_r_r836 = CPyStatic_constants___Network___Avax;
    if (likely(cpy_r_r836 != NULL)) goto CPyL315;
    PyErr_SetString(PyExc_NameError, "value for final name \"Avax\" was not set");
    cpy_r_r837 = 0;
    if (unlikely(!cpy_r_r837)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 127, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL315: ;
    cpy_r_r838 = CPyStatics[195]; /* '0xdf2122931FEb939FB8Cf4e67Ea752D1125e18858' */
    cpy_r_r839 = CPyStatic_constants___Network___Heco;
    if (likely(cpy_r_r839 != NULL)) goto CPyL318;
    PyErr_SetString(PyExc_NameError, "value for final name \"Heco\" was not set");
    cpy_r_r840 = 0;
    if (unlikely(!cpy_r_r840)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 128, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL318: ;
    cpy_r_r841 = CPyStatics[196]; /* '0xd1F3BE686D64e1EA33fcF64980b65847aA43D79C' */
    cpy_r_r842 = CPyStatic_constants___Network___Aurora;
    if (likely(cpy_r_r842 != NULL)) goto CPyL321;
    PyErr_SetString(PyExc_NameError, "value for final name \"Aurora\" was not set");
    cpy_r_r843 = 0;
    if (unlikely(!cpy_r_r843)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 129, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL321: ;
    cpy_r_r844 = CPyStatics[197]; /* '0xe0e3887b158F7F9c80c835a61ED809389BC08d1b' */
    cpy_r_r845 = CPyStatic_constants___Network___Cronos;
    if (likely(cpy_r_r845 != NULL)) goto CPyL324;
    PyErr_SetString(PyExc_NameError, "value for final name \"Cronos\" was not set");
    cpy_r_r846 = 0;
    if (unlikely(!cpy_r_r846)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 130, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL324: ;
    cpy_r_r847 = CPyStatics[183]; /* '0x5e954f5972EC6BFc7dECd75779F10d848230345F' */
    cpy_r_r848 = CPyStatic_constants___Network___Optimism;
    if (likely(cpy_r_r848 != NULL)) goto CPyL327;
    PyErr_SetString(PyExc_NameError, "value for final name \"Optimism\" was not set");
    cpy_r_r849 = 0;
    if (unlikely(!cpy_r_r849)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 131, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL327: ;
    cpy_r_r850 = CPyStatics[185]; /* '0x2DC0E2aa608532Da689e89e237dF582B783E552C' */
    cpy_r_r851 = CPyStatic_constants___Network___OptimismKovan;
    if (likely(cpy_r_r851 != NULL)) goto CPyL330;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismKovan\" was not set");
    cpy_r_r852 = 0;
    if (unlikely(!cpy_r_r852)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 132, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL330: ;
    cpy_r_r853 = CPyStatics[185]; /* '0x2DC0E2aa608532Da689e89e237dF582B783E552C' */
    cpy_r_r854 = CPyStatic_constants___Network___Kava;
    if (likely(cpy_r_r854 != NULL)) goto CPyL333;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kava\" was not set");
    cpy_r_r855 = 0;
    if (unlikely(!cpy_r_r855)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 133, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL333: ;
    cpy_r_r856 = CPyStatics[198]; /* '0x45be772faE4a9F31401dfF4738E5DC7DD439aC0b' */
    cpy_r_r857 = CPyDict_Build(17, cpy_r_r806, cpy_r_r808, cpy_r_r809, cpy_r_r811, cpy_r_r812, cpy_r_r814, cpy_r_r815, cpy_r_r817, cpy_r_r818, cpy_r_r820, cpy_r_r821, cpy_r_r823, cpy_r_r824, cpy_r_r826, cpy_r_r827, cpy_r_r829, cpy_r_r830, cpy_r_r832, cpy_r_r833, cpy_r_r835, cpy_r_r836, cpy_r_r838, cpy_r_r839, cpy_r_r841, cpy_r_r842, cpy_r_r844, cpy_r_r845, cpy_r_r847, cpy_r_r848, cpy_r_r850, cpy_r_r851, cpy_r_r853, cpy_r_r854, cpy_r_r856);
    if (unlikely(cpy_r_r857 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 116, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___MULTICALL2_ADDRESSES = cpy_r_r857;
    CPy_INCREF(CPyStatic_constants___MULTICALL2_ADDRESSES);
    cpy_r_r858 = CPyStatic_constants___globals;
    cpy_r_r859 = CPyStatics[199]; /* 'MULTICALL2_ADDRESSES' */
    cpy_r_r860 = CPyDict_SetItem(cpy_r_r858, cpy_r_r859, cpy_r_r857);
    CPy_DECREF(cpy_r_r857);
    cpy_r_r861 = cpy_r_r860 >= 0;
    if (unlikely(!cpy_r_r861)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 116, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r862 = CPyStatic_constants___Network___Mainnet;
    if (likely(cpy_r_r862 != NULL)) goto CPyL338;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mainnet\" was not set");
    cpy_r_r863 = 0;
    if (unlikely(!cpy_r_r863)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 138, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL338: ;
    cpy_r_r864 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r865 = CPyStatic_constants___Network___Ropsten;
    if (likely(cpy_r_r865 != NULL)) goto CPyL341;
    PyErr_SetString(PyExc_NameError, "value for final name \"Ropsten\" was not set");
    cpy_r_r866 = 0;
    if (unlikely(!cpy_r_r866)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 139, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL341: ;
    cpy_r_r867 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r868 = CPyStatic_constants___Network___Rinkeby;
    if (likely(cpy_r_r868 != NULL)) goto CPyL344;
    PyErr_SetString(PyExc_NameError, "value for final name \"Rinkeby\" was not set");
    cpy_r_r869 = 0;
    if (unlikely(!cpy_r_r869)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 140, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL344: ;
    cpy_r_r870 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r871 = CPyStatic_constants___Network___Gorli;
    if (likely(cpy_r_r871 != NULL)) goto CPyL347;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gorli\" was not set");
    cpy_r_r872 = 0;
    if (unlikely(!cpy_r_r872)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 141, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL347: ;
    cpy_r_r873 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r874 = CPyStatic_constants___Network___Optimism;
    if (likely(cpy_r_r874 != NULL)) goto CPyL350;
    PyErr_SetString(PyExc_NameError, "value for final name \"Optimism\" was not set");
    cpy_r_r875 = 0;
    if (unlikely(!cpy_r_r875)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 142, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL350: ;
    cpy_r_r876 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r877 = CPyStatic_constants___Network___CostonTestnet;
    if (likely(cpy_r_r877 != NULL)) goto CPyL353;
    PyErr_SetString(PyExc_NameError, "value for final name \"CostonTestnet\" was not set");
    cpy_r_r878 = 0;
    if (unlikely(!cpy_r_r878)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 143, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL353: ;
    cpy_r_r879 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r880 = CPyStatic_constants___Network___ThundercoreTestnet;
    if (likely(cpy_r_r880 != NULL)) goto CPyL356;
    PyErr_SetString(PyExc_NameError, "value for final name \"ThundercoreTestnet\" was not set");
    cpy_r_r881 = 0;
    if (unlikely(!cpy_r_r881)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 144, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL356: ;
    cpy_r_r882 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r883 = CPyStatic_constants___Network___SongbirdCanaryNetwork;
    if (likely(cpy_r_r883 != NULL)) goto CPyL359;
    PyErr_SetString(PyExc_NameError, "value for final name \"SongbirdCanaryNetwork\" was not set");
    cpy_r_r884 = 0;
    if (unlikely(!cpy_r_r884)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 145, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL359: ;
    cpy_r_r885 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r886 = CPyStatic_constants___Network___Cronos;
    if (likely(cpy_r_r886 != NULL)) goto CPyL362;
    PyErr_SetString(PyExc_NameError, "value for final name \"Cronos\" was not set");
    cpy_r_r887 = 0;
    if (unlikely(!cpy_r_r887)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 146, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL362: ;
    cpy_r_r888 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r889 = CPyStatic_constants___Network___RSK;
    if (likely(cpy_r_r889 != NULL)) goto CPyL365;
    PyErr_SetString(PyExc_NameError, "value for final name \"RSK\" was not set");
    cpy_r_r890 = 0;
    if (unlikely(!cpy_r_r890)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 147, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL365: ;
    cpy_r_r891 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r892 = CPyStatic_constants___Network___RSKTestnet;
    if (likely(cpy_r_r892 != NULL)) goto CPyL368;
    PyErr_SetString(PyExc_NameError, "value for final name \"RSKTestnet\" was not set");
    cpy_r_r893 = 0;
    if (unlikely(!cpy_r_r893)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 148, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL368: ;
    cpy_r_r894 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r895 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r895 != NULL)) goto CPyL371;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r896 = 0;
    if (unlikely(!cpy_r_r896)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 149, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL371: ;
    cpy_r_r897 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r898 = CPyStatic_constants___Network___Bsc;
    if (likely(cpy_r_r898 != NULL)) goto CPyL374;
    PyErr_SetString(PyExc_NameError, "value for final name \"Bsc\" was not set");
    cpy_r_r899 = 0;
    if (unlikely(!cpy_r_r899)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 150, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL374: ;
    cpy_r_r900 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r901 = CPyStatic_constants___Network___OKC;
    if (likely(cpy_r_r901 != NULL)) goto CPyL377;
    PyErr_SetString(PyExc_NameError, "value for final name \"OKC\" was not set");
    cpy_r_r902 = 0;
    if (unlikely(!cpy_r_r902)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 151, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL377: ;
    cpy_r_r903 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r904 = CPyStatic_constants___Network___OptimismKovan;
    if (likely(cpy_r_r904 != NULL)) goto CPyL380;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismKovan\" was not set");
    cpy_r_r905 = 0;
    if (unlikely(!cpy_r_r905)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 152, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL380: ;
    cpy_r_r906 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r907 = CPyStatic_constants___Network___BscTestnet;
    if (likely(cpy_r_r907 != NULL)) goto CPyL383;
    PyErr_SetString(PyExc_NameError, "value for final name \"BscTestnet\" was not set");
    cpy_r_r908 = 0;
    if (unlikely(!cpy_r_r908)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 153, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL383: ;
    cpy_r_r909 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r910 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r910 != NULL)) goto CPyL386;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r911 = 0;
    if (unlikely(!cpy_r_r911)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 154, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL386: ;
    cpy_r_r912 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r913 = CPyStatic_constants___Network___Velas;
    if (likely(cpy_r_r913 != NULL)) goto CPyL389;
    PyErr_SetString(PyExc_NameError, "value for final name \"Velas\" was not set");
    cpy_r_r914 = 0;
    if (unlikely(!cpy_r_r914)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 155, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL389: ;
    cpy_r_r915 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r916 = CPyStatic_constants___Network___Thundercore;
    if (likely(cpy_r_r916 != NULL)) goto CPyL392;
    PyErr_SetString(PyExc_NameError, "value for final name \"Thundercore\" was not set");
    cpy_r_r917 = 0;
    if (unlikely(!cpy_r_r917)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 156, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL392: ;
    cpy_r_r918 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r919 = CPyStatic_constants___Network___Coston2Testnet;
    if (likely(cpy_r_r919 != NULL)) goto CPyL395;
    PyErr_SetString(PyExc_NameError, "value for final name \"Coston2Testnet\" was not set");
    cpy_r_r920 = 0;
    if (unlikely(!cpy_r_r920)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 157, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL395: ;
    cpy_r_r921 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r922 = CPyStatic_constants___Network___Fuse;
    if (likely(cpy_r_r922 != NULL)) goto CPyL398;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fuse\" was not set");
    cpy_r_r923 = 0;
    if (unlikely(!cpy_r_r923)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 158, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL398: ;
    cpy_r_r924 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r925 = CPyStatic_constants___Network___Heco;
    if (likely(cpy_r_r925 != NULL)) goto CPyL401;
    PyErr_SetString(PyExc_NameError, "value for final name \"Heco\" was not set");
    cpy_r_r926 = 0;
    if (unlikely(!cpy_r_r926)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 159, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL401: ;
    cpy_r_r927 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r928 = CPyStatic_constants___Network___Polygon;
    if (likely(cpy_r_r928 != NULL)) goto CPyL404;
    PyErr_SetString(PyExc_NameError, "value for final name \"Polygon\" was not set");
    cpy_r_r929 = 0;
    if (unlikely(!cpy_r_r929)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 160, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL404: ;
    cpy_r_r930 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r931 = CPyStatic_constants___Network___Fantom;
    if (likely(cpy_r_r931 != NULL)) goto CPyL407;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fantom\" was not set");
    cpy_r_r932 = 0;
    if (unlikely(!cpy_r_r932)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 161, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL407: ;
    cpy_r_r933 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r934 = CPyStatic_constants___Network___Boba;
    if (likely(cpy_r_r934 != NULL)) goto CPyL410;
    PyErr_SetString(PyExc_NameError, "value for final name \"Boba\" was not set");
    cpy_r_r935 = 0;
    if (unlikely(!cpy_r_r935)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 162, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL410: ;
    cpy_r_r936 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r937 = CPyStatic_constants___Network___KCC;
    if (likely(cpy_r_r937 != NULL)) goto CPyL413;
    PyErr_SetString(PyExc_NameError, "value for final name \"KCC\" was not set");
    cpy_r_r938 = 0;
    if (unlikely(!cpy_r_r938)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 163, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL413: ;
    cpy_r_r939 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r940 = CPyStatic_constants___Network___ZkSync;
    if (likely(cpy_r_r940 != NULL)) goto CPyL416;
    PyErr_SetString(PyExc_NameError, "value for final name \"ZkSync\" was not set");
    cpy_r_r941 = 0;
    if (unlikely(!cpy_r_r941)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 164, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL416: ;
    cpy_r_r942 = CPyStatics[201]; /* '0x47898B2C52C957663aE9AB46922dCec150a2272c' */
    cpy_r_r943 = CPyStatic_constants___Network___OptimismGorli;
    if (likely(cpy_r_r943 != NULL)) goto CPyL419;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismGorli\" was not set");
    cpy_r_r944 = 0;
    if (unlikely(!cpy_r_r944)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 165, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL419: ;
    cpy_r_r945 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r946 = CPyStatic_constants___Network___Astar;
    if (likely(cpy_r_r946 != NULL)) goto CPyL422;
    PyErr_SetString(PyExc_NameError, "value for final name \"Astar\" was not set");
    cpy_r_r947 = 0;
    if (unlikely(!cpy_r_r947)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 166, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL422: ;
    cpy_r_r948 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r949 = CPyStatic_constants___Network___Metis;
    if (likely(cpy_r_r949 != NULL)) goto CPyL425;
    PyErr_SetString(PyExc_NameError, "value for final name \"Metis\" was not set");
    cpy_r_r950 = 0;
    if (unlikely(!cpy_r_r950)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 167, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL425: ;
    cpy_r_r951 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r952 = CPyStatic_constants___Network___Moonbeam;
    if (likely(cpy_r_r952 != NULL)) goto CPyL428;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonbeam\" was not set");
    cpy_r_r953 = 0;
    if (unlikely(!cpy_r_r953)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 168, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL428: ;
    cpy_r_r954 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r955 = CPyStatic_constants___Network___Moonriver;
    if (likely(cpy_r_r955 != NULL)) goto CPyL431;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonriver\" was not set");
    cpy_r_r956 = 0;
    if (unlikely(!cpy_r_r956)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 169, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL431: ;
    cpy_r_r957 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r958 = CPyStatic_constants___Network___MoonbaseAlphaTestnet;
    if (likely(cpy_r_r958 != NULL)) goto CPyL434;
    PyErr_SetString(PyExc_NameError, "value for final name \"MoonbaseAlphaTestnet\" was not set");
    cpy_r_r959 = 0;
    if (unlikely(!cpy_r_r959)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 170, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL434: ;
    cpy_r_r960 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r961 = CPyStatic_constants___Network___Milkomeda;
    if (likely(cpy_r_r961 != NULL)) goto CPyL437;
    PyErr_SetString(PyExc_NameError, "value for final name \"Milkomeda\" was not set");
    cpy_r_r962 = 0;
    if (unlikely(!cpy_r_r962)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 171, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL437: ;
    cpy_r_r963 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r964 = CPyStatic_constants___Network___FantomTestnet;
    if (likely(cpy_r_r964 != NULL)) goto CPyL440;
    PyErr_SetString(PyExc_NameError, "value for final name \"FantomTestnet\" was not set");
    cpy_r_r965 = 0;
    if (unlikely(!cpy_r_r965)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 172, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL440: ;
    cpy_r_r966 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r967 = CPyStatic_constants___Network___Canto;
    if (likely(cpy_r_r967 != NULL)) goto CPyL443;
    PyErr_SetString(PyExc_NameError, "value for final name \"Canto\" was not set");
    cpy_r_r968 = 0;
    if (unlikely(!cpy_r_r968)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 173, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL443: ;
    cpy_r_r969 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r970 = CPyStatic_constants___Network___Klaytn;
    if (likely(cpy_r_r970 != NULL)) goto CPyL446;
    PyErr_SetString(PyExc_NameError, "value for final name \"Klaytn\" was not set");
    cpy_r_r971 = 0;
    if (unlikely(!cpy_r_r971)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 174, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL446: ;
    cpy_r_r972 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r973 = CPyStatic_constants___Network___EvmosTestnet;
    if (likely(cpy_r_r973 != NULL)) goto CPyL449;
    PyErr_SetString(PyExc_NameError, "value for final name \"EvmosTestnet\" was not set");
    cpy_r_r974 = 0;
    if (unlikely(!cpy_r_r974)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 175, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL449: ;
    cpy_r_r975 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r976 = CPyStatic_constants___Network___Evmos;
    if (likely(cpy_r_r976 != NULL)) goto CPyL452;
    PyErr_SetString(PyExc_NameError, "value for final name \"Evmos\" was not set");
    cpy_r_r977 = 0;
    if (unlikely(!cpy_r_r977)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 176, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL452: ;
    cpy_r_r978 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r979 = CPyStatic_constants___Network___Arbitrum;
    if (likely(cpy_r_r979 != NULL)) goto CPyL455;
    PyErr_SetString(PyExc_NameError, "value for final name \"Arbitrum\" was not set");
    cpy_r_r980 = 0;
    if (unlikely(!cpy_r_r980)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 177, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL455: ;
    cpy_r_r981 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r982 = CPyStatic_constants___Network___Celo;
    if (likely(cpy_r_r982 != NULL)) goto CPyL458;
    PyErr_SetString(PyExc_NameError, "value for final name \"Celo\" was not set");
    cpy_r_r983 = 0;
    if (unlikely(!cpy_r_r983)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 178, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL458: ;
    cpy_r_r984 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r985 = CPyStatic_constants___Network___Oasis;
    if (likely(cpy_r_r985 != NULL)) goto CPyL461;
    PyErr_SetString(PyExc_NameError, "value for final name \"Oasis\" was not set");
    cpy_r_r986 = 0;
    if (unlikely(!cpy_r_r986)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 179, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL461: ;
    cpy_r_r987 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r988 = CPyStatic_constants___Network___AvalancheFuji;
    if (likely(cpy_r_r988 != NULL)) goto CPyL464;
    PyErr_SetString(PyExc_NameError, "value for final name \"AvalancheFuji\" was not set");
    cpy_r_r989 = 0;
    if (unlikely(!cpy_r_r989)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 180, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL464: ;
    cpy_r_r990 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r991 = CPyStatic_constants___Network___Avax;
    if (likely(cpy_r_r991 != NULL)) goto CPyL467;
    PyErr_SetString(PyExc_NameError, "value for final name \"Avax\" was not set");
    cpy_r_r992 = 0;
    if (unlikely(!cpy_r_r992)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 181, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL467: ;
    cpy_r_r993 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r994 = CPyStatic_constants___Network___GodwokenTestnet;
    if (likely(cpy_r_r994 != NULL)) goto CPyL470;
    PyErr_SetString(PyExc_NameError, "value for final name \"GodwokenTestnet\" was not set");
    cpy_r_r995 = 0;
    if (unlikely(!cpy_r_r995)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 182, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL470: ;
    cpy_r_r996 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r997 = CPyStatic_constants___Network___Godwoken;
    if (likely(cpy_r_r997 != NULL)) goto CPyL473;
    PyErr_SetString(PyExc_NameError, "value for final name \"Godwoken\" was not set");
    cpy_r_r998 = 0;
    if (unlikely(!cpy_r_r998)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 183, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL473: ;
    cpy_r_r999 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1000 = CPyStatic_constants___Network___Mumbai;
    if (likely(cpy_r_r1000 != NULL)) goto CPyL476;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mumbai\" was not set");
    cpy_r_r1001 = 0;
    if (unlikely(!cpy_r_r1001)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 184, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL476: ;
    cpy_r_r1002 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1003 = CPyStatic_constants___Network___ArbitrumRinkeby;
    if (likely(cpy_r_r1003 != NULL)) goto CPyL479;
    PyErr_SetString(PyExc_NameError, "value for final name \"ArbitrumRinkeby\" was not set");
    cpy_r_r1004 = 0;
    if (unlikely(!cpy_r_r1004)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 185, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL479: ;
    cpy_r_r1005 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1006 = CPyStatic_constants___Network___ArbitrumGorli;
    if (likely(cpy_r_r1006 != NULL)) goto CPyL482;
    PyErr_SetString(PyExc_NameError, "value for final name \"ArbitrumGorli\" was not set");
    cpy_r_r1007 = 0;
    if (unlikely(!cpy_r_r1007)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 186, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL482: ;
    cpy_r_r1008 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1009 = CPyStatic_constants___Network___Sepolia;
    if (likely(cpy_r_r1009 != NULL)) goto CPyL485;
    PyErr_SetString(PyExc_NameError, "value for final name \"Sepolia\" was not set");
    cpy_r_r1010 = 0;
    if (unlikely(!cpy_r_r1010)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 187, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL485: ;
    cpy_r_r1011 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1012 = CPyStatic_constants___Network___Aurora;
    if (likely(cpy_r_r1012 != NULL)) goto CPyL488;
    PyErr_SetString(PyExc_NameError, "value for final name \"Aurora\" was not set");
    cpy_r_r1013 = 0;
    if (unlikely(!cpy_r_r1013)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 188, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL488: ;
    cpy_r_r1014 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1015 = CPyStatic_constants___Network___Harmony;
    if (likely(cpy_r_r1015 != NULL)) goto CPyL491;
    PyErr_SetString(PyExc_NameError, "value for final name \"Harmony\" was not set");
    cpy_r_r1016 = 0;
    if (unlikely(!cpy_r_r1016)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 189, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL491: ;
    cpy_r_r1017 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1018 = CPyStatic_constants___Network___PulseChain;
    if (likely(cpy_r_r1018 != NULL)) goto CPyL494;
    PyErr_SetString(PyExc_NameError, "value for final name \"PulseChain\" was not set");
    cpy_r_r1019 = 0;
    if (unlikely(!cpy_r_r1019)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 190, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL494: ;
    cpy_r_r1020 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1021 = CPyStatic_constants___Network___PulseChainTestnet;
    if (likely(cpy_r_r1021 != NULL)) goto CPyL497;
    PyErr_SetString(PyExc_NameError, "value for final name \"PulseChainTestnet\" was not set");
    cpy_r_r1022 = 0;
    if (unlikely(!cpy_r_r1022)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 191, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL497: ;
    cpy_r_r1023 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1024 = CPyStatic_constants___Network___Base;
    if (likely(cpy_r_r1024 != NULL)) goto CPyL500;
    PyErr_SetString(PyExc_NameError, "value for final name \"Base\" was not set");
    cpy_r_r1025 = 0;
    if (unlikely(!cpy_r_r1025)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 192, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL500: ;
    cpy_r_r1026 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1027 = CPyStatic_constants___Network___Holesky;
    if (likely(cpy_r_r1027 != NULL)) goto CPyL503;
    PyErr_SetString(PyExc_NameError, "value for final name \"Holesky\" was not set");
    cpy_r_r1028 = 0;
    if (unlikely(!cpy_r_r1028)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 193, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL503: ;
    cpy_r_r1029 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1030 = CPyStatic_constants___Network___Sei;
    if (likely(cpy_r_r1030 != NULL)) goto CPyL506;
    PyErr_SetString(PyExc_NameError, "value for final name \"Sei\" was not set");
    cpy_r_r1031 = 0;
    if (unlikely(!cpy_r_r1031)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 194, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL506: ;
    cpy_r_r1032 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1033 = CPyStatic_constants___Network___Hoodi;
    if (likely(cpy_r_r1033 != NULL)) goto CPyL509;
    PyErr_SetString(PyExc_NameError, "value for final name \"Hoodi\" was not set");
    cpy_r_r1034 = 0;
    if (unlikely(!cpy_r_r1034)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 195, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL509: ;
    cpy_r_r1035 = CPyStatics[202]; /* '0xca11bde05977b3631167028862be2a173976ca11' */
    cpy_r_r1036 = CPyStatic_constants___Network___HyperEVM;
    if (likely(cpy_r_r1036 != NULL)) goto CPyL512;
    PyErr_SetString(PyExc_NameError, "value for final name \"HyperEVM\" was not set");
    cpy_r_r1037 = 0;
    if (unlikely(!cpy_r_r1037)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 196, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL512: ;
    cpy_r_r1038 = CPyStatics[200]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1039 = CPyDict_Build(59, cpy_r_r862, cpy_r_r864, cpy_r_r865, cpy_r_r867, cpy_r_r868, cpy_r_r870, cpy_r_r871, cpy_r_r873, cpy_r_r874, cpy_r_r876, cpy_r_r877, cpy_r_r879, cpy_r_r880, cpy_r_r882, cpy_r_r883, cpy_r_r885, cpy_r_r886, cpy_r_r888, cpy_r_r889, cpy_r_r891, cpy_r_r892, cpy_r_r894, cpy_r_r895, cpy_r_r897, cpy_r_r898, cpy_r_r900, cpy_r_r901, cpy_r_r903, cpy_r_r904, cpy_r_r906, cpy_r_r907, cpy_r_r909, cpy_r_r910, cpy_r_r912, cpy_r_r913, cpy_r_r915, cpy_r_r916, cpy_r_r918, cpy_r_r919, cpy_r_r921, cpy_r_r922, cpy_r_r924, cpy_r_r925, cpy_r_r927, cpy_r_r928, cpy_r_r930, cpy_r_r931, cpy_r_r933, cpy_r_r934, cpy_r_r936, cpy_r_r937, cpy_r_r939, cpy_r_r940, cpy_r_r942, cpy_r_r943, cpy_r_r945, cpy_r_r946, cpy_r_r948, cpy_r_r949, cpy_r_r951, cpy_r_r952, cpy_r_r954, cpy_r_r955, cpy_r_r957, cpy_r_r958, cpy_r_r960, cpy_r_r961, cpy_r_r963, cpy_r_r964, cpy_r_r966, cpy_r_r967, cpy_r_r969, cpy_r_r970, cpy_r_r972, cpy_r_r973, cpy_r_r975, cpy_r_r976, cpy_r_r978, cpy_r_r979, cpy_r_r981, cpy_r_r982, cpy_r_r984, cpy_r_r985, cpy_r_r987, cpy_r_r988, cpy_r_r990, cpy_r_r991, cpy_r_r993, cpy_r_r994, cpy_r_r996, cpy_r_r997, cpy_r_r999, cpy_r_r1000, cpy_r_r1002, cpy_r_r1003, cpy_r_r1005, cpy_r_r1006, cpy_r_r1008, cpy_r_r1009, cpy_r_r1011, cpy_r_r1012, cpy_r_r1014, cpy_r_r1015, cpy_r_r1017, cpy_r_r1018, cpy_r_r1020, cpy_r_r1021, cpy_r_r1023, cpy_r_r1024, cpy_r_r1026, cpy_r_r1027, cpy_r_r1029, cpy_r_r1030, cpy_r_r1032, cpy_r_r1033, cpy_r_r1035, cpy_r_r1036, cpy_r_r1038);
    if (unlikely(cpy_r_r1039 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 137, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___MULTICALL3_ADDRESSES = cpy_r_r1039;
    CPy_INCREF(CPyStatic_constants___MULTICALL3_ADDRESSES);
    cpy_r_r1040 = CPyStatic_constants___globals;
    cpy_r_r1041 = CPyStatics[203]; /* 'MULTICALL3_ADDRESSES' */
    cpy_r_r1042 = CPyDict_SetItem(cpy_r_r1040, cpy_r_r1041, cpy_r_r1039);
    CPy_DECREF(cpy_r_r1039);
    cpy_r_r1043 = cpy_r_r1042 >= 0;
    if (unlikely(!cpy_r_r1043)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 137, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1044 = CPyModule_os;
    cpy_r_r1045 = CPyStatics[99]; /* 'environ' */
    cpy_r_r1046 = CPyObject_GetAttr(cpy_r_r1044, cpy_r_r1045);
    if (unlikely(cpy_r_r1046 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1047 = CPyStatics[204]; /* 'AIOHTTP_TIMEOUT' */
    cpy_r_r1048 = CPyStatics[101]; /* 'get' */
    cpy_r_r1049 = CPyStatics[333]; /* 30 */
    PyObject *cpy_r_r1050[3] = {cpy_r_r1046, cpy_r_r1047, cpy_r_r1049};
    cpy_r_r1051 = (PyObject **)&cpy_r_r1050;
    cpy_r_r1052 = PyObject_VectorcallMethod(cpy_r_r1048, cpy_r_r1051, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r1052 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL566;
    }
    CPy_DECREF(cpy_r_r1046);
    cpy_r_r1053 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r1054[1] = {cpy_r_r1052};
    cpy_r_r1055 = (PyObject **)&cpy_r_r1054;
    cpy_r_r1056 = PyObject_Vectorcall(cpy_r_r1053, cpy_r_r1055, 1, 0);
    if (unlikely(cpy_r_r1056 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL567;
    }
    CPy_DECREF(cpy_r_r1052);
    if (likely(PyLong_Check(cpy_r_r1056)))
        cpy_r_r1057 = CPyTagged_FromObject(cpy_r_r1056);
    else {
        CPy_TypeError("int", cpy_r_r1056); cpy_r_r1057 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1056);
    if (unlikely(cpy_r_r1057 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1058 = CPyStatic_constants___globals;
    cpy_r_r1059 = CPyStatics[92]; /* 'ClientTimeout' */
    cpy_r_r1060 = CPyDict_GetItem(cpy_r_r1058, cpy_r_r1059);
    if (unlikely(cpy_r_r1060 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL568;
    }
    cpy_r_r1061 = CPyTagged_StealAsObject(cpy_r_r1057);
    PyObject *cpy_r_r1062[1] = {cpy_r_r1061};
    cpy_r_r1063 = (PyObject **)&cpy_r_r1062;
    cpy_r_r1064 = PyObject_Vectorcall(cpy_r_r1060, cpy_r_r1063, 1, 0);
    CPy_DECREF(cpy_r_r1060);
    if (unlikely(cpy_r_r1064 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL569;
    }
    CPy_DECREF(cpy_r_r1061);
    CPyStatic_constants___AIOHTTP_TIMEOUT = cpy_r_r1064;
    CPy_INCREF(CPyStatic_constants___AIOHTTP_TIMEOUT);
    cpy_r_r1065 = CPyStatic_constants___globals;
    cpy_r_r1066 = CPyStatics[204]; /* 'AIOHTTP_TIMEOUT' */
    cpy_r_r1067 = CPyDict_SetItem(cpy_r_r1065, cpy_r_r1066, cpy_r_r1064);
    CPy_DECREF(cpy_r_r1064);
    cpy_r_r1068 = cpy_r_r1067 >= 0;
    if (unlikely(!cpy_r_r1068)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 201, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1069 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r1069 != NULL)) goto CPyL524;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r1070 = 0;
    if (unlikely(!cpy_r_r1070)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 204, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL524: ;
    cpy_r_r1071 = CPyStatic_constants___Network___Harmony;
    if (likely(cpy_r_r1071 != NULL)) goto CPyL527;
    PyErr_SetString(PyExc_NameError, "value for final name \"Harmony\" was not set");
    cpy_r_r1072 = 0;
    if (unlikely(!cpy_r_r1072)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 205, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL527: ;
    cpy_r_r1073 = CPyStatic_constants___Network___Moonbeam;
    if (likely(cpy_r_r1073 != NULL)) goto CPyL530;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonbeam\" was not set");
    cpy_r_r1074 = 0;
    if (unlikely(!cpy_r_r1074)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 206, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL530: ;
    cpy_r_r1075 = CPyStatic_constants___Network___Moonriver;
    if (likely(cpy_r_r1075 != NULL)) goto CPyL533;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonriver\" was not set");
    cpy_r_r1076 = 0;
    if (unlikely(!cpy_r_r1076)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 207, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL533: ;
    cpy_r_r1077 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r1077 != NULL)) goto CPyL536;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r1078 = 0;
    if (unlikely(!cpy_r_r1078)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 208, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL536: ;
    cpy_r_r1079 = CPyStatic_constants___Network___Fuse;
    if (likely(cpy_r_r1079 != NULL)) goto CPyL539;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fuse\" was not set");
    cpy_r_r1080 = 0;
    if (unlikely(!cpy_r_r1080)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 209, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL539: ;
    cpy_r_r1081 = CPyStatic_constants___Network___ZkSync;
    if (likely(cpy_r_r1081 != NULL)) goto CPyL542;
    PyErr_SetString(PyExc_NameError, "value for final name \"ZkSync\" was not set");
    cpy_r_r1082 = 0;
    if (unlikely(!cpy_r_r1082)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 210, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_Unreachable();
CPyL542: ;
    cpy_r_r1083 = PySet_New(NULL);
    if (unlikely(cpy_r_r1083 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1084 = PySet_Add(cpy_r_r1083, cpy_r_r1069);
    cpy_r_r1085 = cpy_r_r1084 >= 0;
    if (unlikely(!cpy_r_r1085)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    cpy_r_r1086 = PySet_Add(cpy_r_r1083, cpy_r_r1071);
    cpy_r_r1087 = cpy_r_r1086 >= 0;
    if (unlikely(!cpy_r_r1087)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    cpy_r_r1088 = PySet_Add(cpy_r_r1083, cpy_r_r1073);
    cpy_r_r1089 = cpy_r_r1088 >= 0;
    if (unlikely(!cpy_r_r1089)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    cpy_r_r1090 = PySet_Add(cpy_r_r1083, cpy_r_r1075);
    cpy_r_r1091 = cpy_r_r1090 >= 0;
    if (unlikely(!cpy_r_r1091)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    cpy_r_r1092 = PySet_Add(cpy_r_r1083, cpy_r_r1077);
    cpy_r_r1093 = cpy_r_r1092 >= 0;
    if (unlikely(!cpy_r_r1093)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    cpy_r_r1094 = PySet_Add(cpy_r_r1083, cpy_r_r1079);
    cpy_r_r1095 = cpy_r_r1094 >= 0;
    if (unlikely(!cpy_r_r1095)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    cpy_r_r1096 = PySet_Add(cpy_r_r1083, cpy_r_r1081);
    cpy_r_r1097 = cpy_r_r1096 >= 0;
    if (unlikely(!cpy_r_r1097)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL570;
    }
    CPyStatic_constants___NO_STATE_OVERRIDE = cpy_r_r1083;
    CPy_INCREF(CPyStatic_constants___NO_STATE_OVERRIDE);
    cpy_r_r1098 = CPyStatic_constants___globals;
    cpy_r_r1099 = CPyStatics[205]; /* 'NO_STATE_OVERRIDE' */
    cpy_r_r1100 = CPyDict_SetItem(cpy_r_r1098, cpy_r_r1099, cpy_r_r1083);
    CPy_DECREF(cpy_r_r1083);
    cpy_r_r1101 = cpy_r_r1100 >= 0;
    if (unlikely(!cpy_r_r1101)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1102 = CPyModule_os;
    cpy_r_r1103 = CPyStatics[99]; /* 'environ' */
    cpy_r_r1104 = CPyObject_GetAttr(cpy_r_r1102, cpy_r_r1103);
    if (unlikely(cpy_r_r1104 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 215, CPyStatic_constants___globals);
        goto CPyL557;
    }
    cpy_r_r1105 = CPyStatics[206]; /* 'MULTICALL_CALL_SEMAPHORE' */
    cpy_r_r1106 = CPyStatics[101]; /* 'get' */
    cpy_r_r1107 = CPyStatics[386]; /* 1000 */
    PyObject *cpy_r_r1108[3] = {cpy_r_r1104, cpy_r_r1105, cpy_r_r1107};
    cpy_r_r1109 = (PyObject **)&cpy_r_r1108;
    cpy_r_r1110 = PyObject_VectorcallMethod(cpy_r_r1106, cpy_r_r1109, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r1110 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 215, CPyStatic_constants___globals);
        goto CPyL571;
    }
    CPy_DECREF(cpy_r_r1104);
    cpy_r_r1111 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r1112[1] = {cpy_r_r1110};
    cpy_r_r1113 = (PyObject **)&cpy_r_r1112;
    cpy_r_r1114 = PyObject_Vectorcall(cpy_r_r1111, cpy_r_r1113, 1, 0);
    if (unlikely(cpy_r_r1114 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 215, CPyStatic_constants___globals);
        goto CPyL572;
    }
    CPy_DECREF(cpy_r_r1110);
    if (likely(PyLong_Check(cpy_r_r1114)))
        cpy_r_r1115 = CPyTagged_FromObject(cpy_r_r1114);
    else {
        CPy_TypeError("int", cpy_r_r1114); cpy_r_r1115 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1114);
    if (unlikely(cpy_r_r1115 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 215, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPyStatic_constants___ASYNC_SEMAPHORE = cpy_r_r1115;
    CPyTagged_INCREF(CPyStatic_constants___ASYNC_SEMAPHORE);
    cpy_r_r1116 = CPyStatic_constants___globals;
    cpy_r_r1117 = CPyStatics[207]; /* 'ASYNC_SEMAPHORE' */
    cpy_r_r1118 = CPyTagged_StealAsObject(cpy_r_r1115);
    cpy_r_r1119 = CPyDict_SetItem(cpy_r_r1116, cpy_r_r1117, cpy_r_r1118);
    CPy_DECREF(cpy_r_r1118);
    cpy_r_r1120 = cpy_r_r1119 >= 0;
    if (unlikely(!cpy_r_r1120)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 215, CPyStatic_constants___globals);
        goto CPyL557;
    }
    return 1;
CPyL557: ;
    cpy_r_r1121 = 2;
    return cpy_r_r1121;
CPyL558: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL18;
CPyL559: ;
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    goto CPyL23;
CPyL560: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL557;
CPyL561: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL557;
CPyL562: ;
    CPy_DecRef(cpy_r_r98);
    goto CPyL557;
CPyL563: ;
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r110);
    goto CPyL557;
CPyL564: ;
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r112);
    goto CPyL557;
CPyL565: ;
    CPy_DecRef(cpy_r_r623);
    goto CPyL557;
CPyL566: ;
    CPy_DecRef(cpy_r_r1046);
    goto CPyL557;
CPyL567: ;
    CPy_DecRef(cpy_r_r1052);
    goto CPyL557;
CPyL568: ;
    CPyTagged_DecRef(cpy_r_r1057);
    goto CPyL557;
CPyL569: ;
    CPy_DecRef(cpy_r_r1061);
    goto CPyL557;
CPyL570: ;
    CPy_DecRef(cpy_r_r1083);
    goto CPyL557;
CPyL571: ;
    CPy_DecRef(cpy_r_r1104);
    goto CPyL557;
CPyL572: ;
    CPy_DecRef(cpy_r_r1110);
    goto CPyL557;
}

PyMemberDef exceptions___StateOverrideNotSupported_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef exceptions___StateOverrideNotSupported_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef exceptions___StateOverrideNotSupported_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_exceptions___StateOverrideNotSupported_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StateOverrideNotSupported",
    .tp_getset = exceptions___StateOverrideNotSupported_getseters,
    .tp_methods = exceptions___StateOverrideNotSupported_methods,
    .tp_members = exceptions___StateOverrideNotSupported_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
    .tp_doc = PyDoc_STR("StateOverrideNotSupported()\n--\n\n"),
};
static PyTypeObject *CPyType_exceptions___StateOverrideNotSupported_template = &CPyType_exceptions___StateOverrideNotSupported_template_;

static PyMethodDef exceptionsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

int CPyExec_multicall___exceptions(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___exceptions__internal, "__name__");
    CPyStatic_exceptions___globals = PyModule_GetDict(CPyModule_multicall___exceptions__internal);
    if (unlikely(CPyStatic_exceptions___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_exceptions_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_multicall___exceptions__internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_exceptions___StateOverrideNotSupported);
    return -1;
}
static struct PyModuleDef exceptionsmodule = {
    PyModuleDef_HEAD_INIT,
    "multicall.exceptions",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    exceptionsmodule_methods,
    NULL,
};

PyObject *CPyInit_multicall___exceptions(void)
{
    if (CPyModule_multicall___exceptions__internal) {
        Py_INCREF(CPyModule_multicall___exceptions__internal);
        return CPyModule_multicall___exceptions__internal;
    }
    CPyModule_multicall___exceptions__internal = PyModule_Create(&exceptionsmodule);
    if (unlikely(CPyModule_multicall___exceptions__internal == NULL))
        goto fail;
    if (CPyExec_multicall___exceptions(CPyModule_multicall___exceptions__internal) != 0)
        goto fail;
    return CPyModule_multicall___exceptions__internal;
    fail:
    return NULL;
}

char CPyDef_exceptions_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", -1, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[408]; /* ('final',) */
    cpy_r_r6 = CPyStatics[42]; /* 'typing' */
    cpy_r_r7 = CPyStatic_exceptions___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyModule_builtins;
    cpy_r_r10 = CPyStatics[208]; /* 'Exception' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 5, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    cpy_r_r12 = PyTuple_Pack(1, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 5, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    cpy_r_r13 = CPyStatics[59]; /* 'multicall.exceptions' */
    cpy_r_r14 = (PyObject *)CPyType_exceptions___StateOverrideNotSupported_template;
    cpy_r_r15 = CPyType_FromTemplate(cpy_r_r14, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 5, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    cpy_r_r16 = CPyStatics[72]; /* '__mypyc_attrs__' */
    cpy_r_r17 = CPyStatics[209]; /* '__dict__' */
    cpy_r_r18 = PyTuple_Pack(1, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 5, CPyStatic_exceptions___globals);
        goto CPyL12;
    }
    cpy_r_r19 = PyObject_SetAttr(cpy_r_r15, cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 5, CPyStatic_exceptions___globals);
        goto CPyL12;
    }
    CPyType_exceptions___StateOverrideNotSupported = (PyTypeObject *)cpy_r_r15;
    CPy_INCREF(CPyType_exceptions___StateOverrideNotSupported);
    cpy_r_r21 = CPyStatic_exceptions___globals;
    cpy_r_r22 = CPyStatics[58]; /* 'StateOverrideNotSupported' */
    cpy_r_r23 = PyDict_SetItem(cpy_r_r21, cpy_r_r22, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("multicall/exceptions.py", "<module>", 5, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL12: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL11;
}
static PyMethodDef loggersmodule_methods[] = {
    {"setup_logger", (PyCFunction)CPyPy_loggers___setup_logger, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("setup_logger(name)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_multicall___loggers(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___loggers__internal, "__name__");
    CPyStatic_loggers___globals = PyModule_GetDict(CPyModule_multicall___loggers__internal);
    if (unlikely(CPyStatic_loggers___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_loggers_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_multicall___loggers__internal);
    Py_CLEAR(modname);
    return -1;
}
static struct PyModuleDef loggersmodule = {
    PyModuleDef_HEAD_INIT,
    "multicall.loggers",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    loggersmodule_methods,
    NULL,
};

PyObject *CPyInit_multicall___loggers(void)
{
    if (CPyModule_multicall___loggers__internal) {
        Py_INCREF(CPyModule_multicall___loggers__internal);
        return CPyModule_multicall___loggers__internal;
    }
    CPyModule_multicall___loggers__internal = PyModule_Create(&loggersmodule);
    if (unlikely(CPyModule_multicall___loggers__internal == NULL))
        goto fail;
    if (CPyExec_multicall___loggers(CPyModule_multicall___loggers__internal) != 0)
        goto fail;
    return CPyModule_multicall___loggers__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_loggers___setup_logger(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = CPyModule_logging;
    cpy_r_r1 = CPyStatics[210]; /* 'getLogger' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 6, CPyStatic_loggers___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_name};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 6, CPyStatic_loggers___globals);
        goto CPyL12;
    }
    cpy_r_r6 = CPyModule_os;
    cpy_r_r7 = CPyStatics[99]; /* 'environ' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 7, CPyStatic_loggers___globals);
        goto CPyL13;
    }
    cpy_r_r9 = CPyStatics[211]; /* 'MULTICALL_DEBUG' */
    cpy_r_r10 = CPyStatics[101]; /* 'get' */
    cpy_r_r11 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r12[3] = {cpy_r_r8, cpy_r_r9, cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r13, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 7, CPyStatic_loggers___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r8);
    if (PyUnicode_Check(cpy_r_r14))
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL49;
    if (PyBool_Check(cpy_r_r14))
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL49;
    CPy_TypeErrorTraceback("multicall/loggers.py", "setup_logger", 7, CPyStatic_loggers___globals, "union[str, bool]", cpy_r_r14);
    goto CPyL13;
__LL49: ;
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 7, CPyStatic_loggers___globals);
        goto CPyL13;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = CPyModule_logging;
    cpy_r_r20 = CPyStatics[212]; /* 'StreamHandler' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 8, CPyStatic_loggers___globals);
        goto CPyL13;
    }
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r21, 0, 0, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 8, CPyStatic_loggers___globals);
        goto CPyL13;
    }
    cpy_r_r23 = CPyStatics[213]; /* 'addHandler' */
    PyObject *cpy_r_r24[2] = {cpy_r_r5, cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 8, CPyStatic_loggers___globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL10: ;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r27 = CPyStatics[214]; /* 'setLevel' */
    cpy_r_r28 = CPyStatics[328]; /* 10 */
    PyObject *cpy_r_r29[2] = {cpy_r_r5, cpy_r_r28};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r30, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "setup_logger", 9, CPyStatic_loggers___globals);
        goto CPyL13;
    } else
        goto CPyL17;
CPyL11: ;
    return cpy_r_r5;
CPyL12: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r22);
    goto CPyL12;
CPyL16: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL10;
CPyL17: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL11;
}

PyObject *CPyPy_loggers___setup_logger(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:setup_logger", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_loggers___setup_logger(arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/loggers.py", "setup_logger", 5, CPyStatic_loggers___globals);
    return NULL;
}

char CPyDef_loggers_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    void *cpy_r_r8;
    void *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/loggers.py", "<module>", -1, CPyStatic_loggers___globals);
        goto CPyL5;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_logging;
    cpy_r_r6 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r7[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r8 = (void *)&cpy_r_r7;
    int64_t cpy_r_r9[2] = {1, 2};
    cpy_r_r10 = (void *)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[410]; /* (('logging', 'logging', 'logging'), ('os', 'os', 'os')) */
    cpy_r_r12 = CPyStatic_loggers___globals;
    cpy_r_r13 = CPyStatics[216]; /* 'multicall/loggers.py' */
    cpy_r_r14 = CPyStatics[45]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL5;
    return 1;
CPyL5: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

static int
multicall___Multicall_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyAsyncMethods multicall___Multicall_as_async = {
    .am_await = CPyDef_multicall___Multicall_____await__,
};
PyObject *CPyDef_multicall_____mypyc__Multicall_setup(PyObject *cpy_r_type);
PyObject *CPyDef_multicall___Multicall(PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin);

static PyObject *
multicall___Multicall_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___Multicall) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_multicall_____mypyc__Multicall_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_multicall___Multicall_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
multicall___Multicall_traverse(multicall___multicall___MulticallObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_calls);
    Py_VISIT(self->_block_id);
    if (CPyTagged_CheckLong(self->_gas_limit)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_gas_limit));
    }
    Py_VISIT(self->_w3);
    Py_VISIT(self->_origin);
    if (CPyTagged_CheckLong(self->_chainid)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_chainid));
    }
    Py_VISIT(self->_multicall_address);
    return 0;
}

static int
multicall___Multicall_clear(multicall___multicall___MulticallObject *self)
{
    Py_CLEAR(self->_calls);
    Py_CLEAR(self->_block_id);
    if (CPyTagged_CheckLong(self->_gas_limit)) {
        CPyTagged __tmp = self->_gas_limit;
        self->_gas_limit = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_w3);
    Py_CLEAR(self->_origin);
    if (CPyTagged_CheckLong(self->_chainid)) {
        CPyTagged __tmp = self->_chainid;
        self->_chainid = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_multicall_address);
    return 0;
}

static void
multicall___Multicall_dealloc(multicall___multicall___MulticallObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, multicall___Multicall_dealloc)
    multicall___Multicall_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem multicall___Multicall_vtable[18];
static bool
CPyDef_multicall___Multicall_trait_vtable_setup(void)
{
    CPyVTableItem multicall___Multicall_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_multicall___Multicall_____init__,
        (CPyVTableItem)CPyDef_multicall___Multicall_____call__,
        (CPyVTableItem)CPyDef_multicall___Multicall_____await__,
        (CPyVTableItem)CPyDef_multicall___Multicall___multicall_sig,
        (CPyVTableItem)CPyDef_multicall___Multicall___coroutine,
        (CPyVTableItem)CPyDef_multicall___Multicall____contract_method,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_base_fee,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_block_hash,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_block_number,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_chain_id,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_block_coinbase,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_block_difficulty,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_block_gas_limit,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_block_timestamp,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_eth_balance,
        (CPyVTableItem)CPyDef_multicall___Multicall___add_last_block_hash,
        (CPyVTableItem)CPyDef_multicall___Multicall___fetch_outputs,
        (CPyVTableItem)CPyDef_multicall___Multicall___aggregate,
    };
    memcpy(multicall___Multicall_vtable, multicall___Multicall_vtable_scratch, sizeof(multicall___Multicall_vtable));
    return 1;
}

static PyObject *
multicall___Multicall_get_calls(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_calls(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_block_id(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_block_id(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_require_success(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_require_success(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_gas_limit(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_gas_limit(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_w3(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_w3(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_origin(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_origin(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_chainid(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_chainid(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_multicall_address(multicall___multicall___MulticallObject *self, void *closure);
static int
multicall___Multicall_set_multicall_address(multicall___multicall___MulticallObject *self, PyObject *value, void *closure);
static PyObject *
multicall___Multicall_get_multicall_sig(multicall___multicall___MulticallObject *self, void *closure);
static PyObject *
multicall___Multicall_get_aggregate(multicall___multicall___MulticallObject *self, void *closure);

static PyGetSetDef multicall___Multicall_getseters[] = {
    {"calls",
     (getter)multicall___Multicall_get_calls, (setter)multicall___Multicall_set_calls,
     NULL, NULL},
    {"block_id",
     (getter)multicall___Multicall_get_block_id, (setter)multicall___Multicall_set_block_id,
     NULL, NULL},
    {"require_success",
     (getter)multicall___Multicall_get_require_success, (setter)multicall___Multicall_set_require_success,
     NULL, NULL},
    {"gas_limit",
     (getter)multicall___Multicall_get_gas_limit, (setter)multicall___Multicall_set_gas_limit,
     NULL, NULL},
    {"w3",
     (getter)multicall___Multicall_get_w3, (setter)multicall___Multicall_set_w3,
     NULL, NULL},
    {"origin",
     (getter)multicall___Multicall_get_origin, (setter)multicall___Multicall_set_origin,
     NULL, NULL},
    {"chainid",
     (getter)multicall___Multicall_get_chainid, (setter)multicall___Multicall_set_chainid,
     NULL, NULL},
    {"multicall_address",
     (getter)multicall___Multicall_get_multicall_address, (setter)multicall___Multicall_set_multicall_address,
     NULL, NULL},
    {"multicall_sig",
     (getter)multicall___Multicall_get_multicall_sig,
    NULL, NULL, NULL},
    {"aggregate",
     (getter)multicall___Multicall_get_aggregate,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef multicall___Multicall_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_multicall___Multicall_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"__call__",
     (PyCFunction)CPyPy_multicall___Multicall_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_multicall___Multicall_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__($self)\n--\n\n")},
    {"coroutine",
     (PyCFunction)CPyPy_multicall___Multicall___coroutine,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("coroutine($self)\n--\n\n")},
    {"_contract_method",
     (PyCFunction)CPyPy_multicall___Multicall____contract_method,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_contract_method($self, request_signature, return_signature)\n--\n\n")},
    {"add_base_fee",
     (PyCFunction)CPyPy_multicall___Multicall___add_base_fee,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_base_fee($self, return_signature=(\'base_fee\', None))\n--\n\n")},
    {"add_block_hash",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_hash,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_block_hash($self, block_number, return_signature=(\'block_hash\', None))\n--\n\n")},
    {"add_block_number",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_number,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_block_number($self, return_signature=(\'block_number\', None))\n--\n\n")},
    {"add_chain_id",
     (PyCFunction)CPyPy_multicall___Multicall___add_chain_id,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_chain_id($self, return_signature=(\'chain_id\', None))\n--\n\n")},
    {"add_block_coinbase",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_coinbase,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_block_coinbase($self, return_signature=(\'coinbase\', None))\n--\n\n")},
    {"add_block_difficulty",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_difficulty,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_block_difficulty($self, return_signature=(\'difficulty\', None))\n--\n\n")},
    {"add_block_gas_limit",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_gas_limit,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_block_gas_limit($self, return_signature=(\'gas_limit\', None))\n--\n\n")},
    {"add_block_timestamp",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_timestamp,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_block_timestamp($self, return_signature=(\'timestamp\', None))\n--\n\n")},
    {"add_eth_balance",
     (PyCFunction)CPyPy_multicall___Multicall___add_eth_balance,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_eth_balance($self, address, return_signature=(\'eth_balance\', None))\n--\n\n")},
    {"add_last_block_hash",
     (PyCFunction)CPyPy_multicall___Multicall___add_last_block_hash,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("add_last_block_hash($self, return_signature=(\'last_block_hash\', None))\n--\n\n")},
    {"fetch_outputs",
     (PyCFunction)CPyPy_multicall___Multicall___fetch_outputs,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("fetch_outputs($self, calls, ConnErr_retries=0, id=\'\')\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_multicall___Multicall_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Multicall",
    .tp_new = multicall___Multicall_new,
    .tp_dealloc = (destructor)multicall___Multicall_dealloc,
    .tp_traverse = (traverseproc)multicall___Multicall_traverse,
    .tp_clear = (inquiry)multicall___Multicall_clear,
    .tp_getset = multicall___Multicall_getseters,
    .tp_methods = multicall___Multicall_methods,
    .tp_call = PyVectorcall_Call,
    .tp_init = multicall___Multicall_init,
    .tp_as_async = &multicall___Multicall_as_async,
    .tp_basicsize = sizeof(multicall___multicall___MulticallObject),
    .tp_vectorcall_offset = offsetof(multicall___multicall___MulticallObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR(NULL),
};
static PyTypeObject *CPyType_multicall___Multicall_template = &CPyType_multicall___Multicall_template_;

PyObject *CPyDef_multicall_____mypyc__Multicall_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___multicall___MulticallObject *self;
    self = (multicall___multicall___MulticallObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = multicall___Multicall_vtable;
    self->vectorcall = CPyPy_multicall___Multicall_____call__;
    self->_require_success = 2;
    self->_gas_limit = CPY_INT_TAG;
    self->_chainid = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_multicall___Multicall(PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin)
{
    PyObject *self = CPyDef_multicall_____mypyc__Multicall_setup((PyObject *)CPyType_multicall___Multicall);
    if (self == NULL)
        return NULL;
    char res = CPyDef_multicall___Multicall_____init__(self, cpy_r_calls, cpy_r_block_id, cpy_r_require_success, cpy_r_gas_limit, cpy_r__w3, cpy_r_origin);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
multicall___Multicall_get_calls(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_calls == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'calls' of 'Multicall' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->_calls);
    PyObject *retval = self->_calls;
    return retval;
}

static int
multicall___Multicall_set_calls(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'calls' cannot be deleted");
        return -1;
    }
    if (self->_calls != NULL) {
        CPy_DECREF_NO_IMM(self->_calls);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->_calls = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_block_id(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_block_id == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'block_id' of 'Multicall' undefined");
        return NULL;
    }
    CPy_INCREF(self->_block_id);
    PyObject *retval = self->_block_id;
    return retval;
}

static int
multicall___Multicall_set_block_id(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'block_id' cannot be deleted");
        return -1;
    }
    if (self->_block_id != NULL) {
        CPy_DECREF(self->_block_id);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL50;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL50;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL50: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_block_id = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_require_success(multicall___multicall___MulticallObject *self, void *closure)
{
    PyObject *retval = self->_require_success ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
multicall___Multicall_set_require_success(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'require_success' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_require_success = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_gas_limit(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_gas_limit == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gas_limit' of 'Multicall' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_gas_limit);
    PyObject *retval = CPyTagged_StealAsObject(self->_gas_limit);
    return retval;
}

static int
multicall___Multicall_set_gas_limit(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'gas_limit' cannot be deleted");
        return -1;
    }
    if (self->_gas_limit != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_gas_limit);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_gas_limit = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_w3(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_w3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'w3' of 'Multicall' undefined");
        return NULL;
    }
    CPy_INCREF(self->_w3);
    PyObject *retval = self->_w3;
    return retval;
}

static int
multicall___Multicall_set_w3(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'w3' cannot be deleted");
        return -1;
    }
    if (self->_w3 != NULL) {
        CPy_DECREF(self->_w3);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_w3 = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_origin(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_origin == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'origin' of 'Multicall' undefined");
        return NULL;
    }
    CPy_INCREF(self->_origin);
    PyObject *retval = self->_origin;
    return retval;
}

static int
multicall___Multicall_set_origin(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'origin' cannot be deleted");
        return -1;
    }
    if (self->_origin != NULL) {
        CPy_DECREF(self->_origin);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL51;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL51;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL51: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_origin = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_chainid(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_chainid == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'chainid' of 'Multicall' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_chainid);
    PyObject *retval = CPyTagged_StealAsObject(self->_chainid);
    return retval;
}

static int
multicall___Multicall_set_chainid(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'chainid' cannot be deleted");
        return -1;
    }
    if (self->_chainid != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_chainid);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_chainid = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_multicall_address(multicall___multicall___MulticallObject *self, void *closure)
{
    if (unlikely(self->_multicall_address == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'multicall_address' of 'Multicall' undefined");
        return NULL;
    }
    CPy_INCREF(self->_multicall_address);
    PyObject *retval = self->_multicall_address;
    return retval;
}

static int
multicall___Multicall_set_multicall_address(multicall___multicall___MulticallObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Multicall' object attribute 'multicall_address' cannot be deleted");
        return -1;
    }
    if (self->_multicall_address != NULL) {
        CPy_DECREF(self->_multicall_address);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_multicall_address = tmp;
    return 0;
}

static PyObject *
multicall___Multicall_get_multicall_sig(multicall___multicall___MulticallObject *self, void *closure)
{
    return CPyDef_multicall___Multicall___multicall_sig((PyObject *) self);
}

static PyObject *
multicall___Multicall_get_aggregate(multicall___multicall___MulticallObject *self, void *closure)
{
    return CPyDef_multicall___Multicall___aggregate((PyObject *) self);
}

static int
multicall___NotSoBrightBatcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_multicall_____mypyc__NotSoBrightBatcher_setup(PyObject *cpy_r_type);
PyObject *CPyDef_multicall___NotSoBrightBatcher(void);

static PyObject *
multicall___NotSoBrightBatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___NotSoBrightBatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_multicall_____mypyc__NotSoBrightBatcher_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_multicall___NotSoBrightBatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
multicall___NotSoBrightBatcher_traverse(multicall___multicall___NotSoBrightBatcherObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_step)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_step));
    }
    return 0;
}

static int
multicall___NotSoBrightBatcher_clear(multicall___multicall___NotSoBrightBatcherObject *self)
{
    if (CPyTagged_CheckLong(self->_step)) {
        CPyTagged __tmp = self->_step;
        self->_step = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
multicall___NotSoBrightBatcher_dealloc(multicall___multicall___NotSoBrightBatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, multicall___NotSoBrightBatcher_dealloc)
    multicall___NotSoBrightBatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem multicall___NotSoBrightBatcher_vtable[4];
static bool
CPyDef_multicall___NotSoBrightBatcher_trait_vtable_setup(void)
{
    CPyVTableItem multicall___NotSoBrightBatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_multicall___NotSoBrightBatcher_____init__,
        (CPyVTableItem)CPyDef_multicall___NotSoBrightBatcher___batch_calls,
        (CPyVTableItem)CPyDef_multicall___NotSoBrightBatcher___split_calls,
        (CPyVTableItem)CPyDef_multicall___NotSoBrightBatcher___rebatch,
    };
    memcpy(multicall___NotSoBrightBatcher_vtable, multicall___NotSoBrightBatcher_vtable_scratch, sizeof(multicall___NotSoBrightBatcher_vtable));
    return 1;
}

static PyObject *
multicall___NotSoBrightBatcher_get_step(multicall___multicall___NotSoBrightBatcherObject *self, void *closure);
static int
multicall___NotSoBrightBatcher_set_step(multicall___multicall___NotSoBrightBatcherObject *self, PyObject *value, void *closure);

static PyGetSetDef multicall___NotSoBrightBatcher_getseters[] = {
    {"step",
     (getter)multicall___NotSoBrightBatcher_get_step, (setter)multicall___NotSoBrightBatcher_set_step,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef multicall___NotSoBrightBatcher_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self)\n--\n\n")},
    {"batch_calls",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher___batch_calls,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("batch_calls($self, calls, step)\n--\n\n")},
    {"split_calls",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher___split_calls,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("split_calls($self, calls, unused=None)\n--\n\n")},
    {"rebatch",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher___rebatch,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("rebatch($self, calls)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_multicall___NotSoBrightBatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "NotSoBrightBatcher",
    .tp_new = multicall___NotSoBrightBatcher_new,
    .tp_dealloc = (destructor)multicall___NotSoBrightBatcher_dealloc,
    .tp_traverse = (traverseproc)multicall___NotSoBrightBatcher_traverse,
    .tp_clear = (inquiry)multicall___NotSoBrightBatcher_clear,
    .tp_getset = multicall___NotSoBrightBatcher_getseters,
    .tp_methods = multicall___NotSoBrightBatcher_methods,
    .tp_init = multicall___NotSoBrightBatcher_init,
    .tp_basicsize = sizeof(multicall___multicall___NotSoBrightBatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("NotSoBrightBatcher()\n--\n\n"),
};
static PyTypeObject *CPyType_multicall___NotSoBrightBatcher_template = &CPyType_multicall___NotSoBrightBatcher_template_;

PyObject *CPyDef_multicall_____mypyc__NotSoBrightBatcher_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___multicall___NotSoBrightBatcherObject *self;
    self = (multicall___multicall___NotSoBrightBatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = multicall___NotSoBrightBatcher_vtable;
    self->_step = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_multicall___NotSoBrightBatcher(void)
{
    PyObject *self = CPyDef_multicall_____mypyc__NotSoBrightBatcher_setup((PyObject *)CPyType_multicall___NotSoBrightBatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef_multicall___NotSoBrightBatcher_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
multicall___NotSoBrightBatcher_get_step(multicall___multicall___NotSoBrightBatcherObject *self, void *closure)
{
    if (unlikely(self->_step == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'step' of 'NotSoBrightBatcher' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_step);
    PyObject *retval = CPyTagged_StealAsObject(self->_step);
    return retval;
}

static int
multicall___NotSoBrightBatcher_set_step(multicall___multicall___NotSoBrightBatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'NotSoBrightBatcher' object attribute 'step' cannot be deleted");
        return -1;
    }
    if (self->_step != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_step);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_step = tmp;
    return 0;
}

static PyAsyncMethods multicall___coroutine_Multicall_gen_as_async = {
    .am_await = CPyDef_multicall___coroutine_Multicall_gen_____await__,
};
PyObject *CPyDef_multicall_____mypyc__coroutine_Multicall_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_multicall___coroutine_Multicall_gen(void);

static PyObject *
multicall___coroutine_Multicall_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___coroutine_Multicall_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_multicall_____mypyc__coroutine_Multicall_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
multicall___coroutine_Multicall_gen_traverse(multicall___multicall___coroutine_Multicall_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_temp__0);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__i));
    }
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_generator_attribute__batch);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5.f0);
    Py_VISIT(self->___mypyc_temp__5.f1);
    Py_VISIT(self->___mypyc_temp__5.f2);
    Py_VISIT(self->___mypyc_generator_attribute__batches);
    return 0;
}

static int
multicall___coroutine_Multicall_gen_clear(multicall___multicall___coroutine_Multicall_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_temp__0);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__i)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__i;
        self->___mypyc_generator_attribute__i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_generator_attribute__batch);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5.f0);
    Py_CLEAR(self->___mypyc_temp__5.f1);
    Py_CLEAR(self->___mypyc_temp__5.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__batches);
    return 0;
}

static void
multicall___coroutine_Multicall_gen_dealloc(multicall___multicall___coroutine_Multicall_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (multicall___coroutine_Multicall_gen_free_instance == NULL) {
        multicall___coroutine_Multicall_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__0);
        self->___mypyc_temp__1 = CPY_INT_TAG;
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__i)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__i;
            self->___mypyc_generator_attribute__i = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__i = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_temp__2);
        self->___mypyc_temp__3 = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__batch);
        Py_CLEAR(self->___mypyc_temp__4);
        Py_CLEAR(self->___mypyc_temp__5.f0);
        Py_CLEAR(self->___mypyc_temp__5.f1);
        Py_CLEAR(self->___mypyc_temp__5.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__batches);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, multicall___coroutine_Multicall_gen_dealloc)
    multicall___coroutine_Multicall_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem multicall___coroutine_Multicall_gen_vtable[7];
static bool
CPyDef_multicall___coroutine_Multicall_gen_trait_vtable_setup(void)
{
    CPyVTableItem multicall___coroutine_Multicall_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen_____next__,
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen___send,
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen_____iter__,
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen___throw,
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen___close,
        (CPyVTableItem)CPyDef_multicall___coroutine_Multicall_gen_____await__,
    };
    memcpy(multicall___coroutine_Multicall_gen_vtable, multicall___coroutine_Multicall_gen_vtable_scratch, sizeof(multicall___coroutine_Multicall_gen_vtable));
    return 1;
}

static PyMethodDef multicall___coroutine_Multicall_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_multicall___coroutine_Multicall_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "coroutine_Multicall_gen",
    .tp_new = multicall___coroutine_Multicall_gen_new,
    .tp_dealloc = (destructor)multicall___coroutine_Multicall_gen_dealloc,
    .tp_traverse = (traverseproc)multicall___coroutine_Multicall_gen_traverse,
    .tp_clear = (inquiry)multicall___coroutine_Multicall_gen_clear,
    .tp_methods = multicall___coroutine_Multicall_gen_methods,
    .tp_iter = CPyDef_multicall___coroutine_Multicall_gen_____iter__,
    .tp_iternext = CPyDef_multicall___coroutine_Multicall_gen_____next__,
    .tp_as_async = &multicall___coroutine_Multicall_gen_as_async,
    .tp_basicsize = sizeof(multicall___multicall___coroutine_Multicall_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("coroutine_Multicall_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_multicall___coroutine_Multicall_gen_template = &CPyType_multicall___coroutine_Multicall_gen_template_;

PyObject *CPyDef_multicall_____mypyc__coroutine_Multicall_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___multicall___coroutine_Multicall_genObject *self;
    if (multicall___coroutine_Multicall_gen_free_instance != NULL) {
        self = multicall___coroutine_Multicall_gen_free_instance;
        multicall___coroutine_Multicall_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (multicall___multicall___coroutine_Multicall_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = multicall___coroutine_Multicall_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_generator_attribute__i = CPY_INT_TAG;
    self->___mypyc_temp__3 = -113;
    self->___mypyc_temp__5 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen(void)
{
    PyObject *self = CPyDef_multicall_____mypyc__coroutine_Multicall_gen_setup((PyObject *)CPyType_multicall___coroutine_Multicall_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods multicall___fetch_outputs_Multicall_gen_as_async = {
    .am_await = CPyDef_multicall___fetch_outputs_Multicall_gen_____await__,
};
PyObject *CPyDef_multicall_____mypyc__fetch_outputs_Multicall_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen(void);

static PyObject *
multicall___fetch_outputs_Multicall_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___fetch_outputs_Multicall_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_multicall_____mypyc__fetch_outputs_Multicall_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
multicall___fetch_outputs_Multicall_gen_traverse(multicall___multicall___fetch_outputs_Multicall_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__calls);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__ConnErr_retries)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__ConnErr_retries));
    }
    Py_VISIT(self->___mypyc_generator_attribute__id);
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7);
    Py_VISIT(self->___mypyc_temp__9);
    Py_VISIT(self->___mypyc_temp__10.f0);
    Py_VISIT(self->___mypyc_temp__10.f1);
    Py_VISIT(self->___mypyc_temp__10.f2);
    Py_VISIT(self->___mypyc_generator_attribute__args);
    Py_VISIT(self->___mypyc_temp__11);
    Py_VISIT(self->___mypyc_temp__12.f0);
    Py_VISIT(self->___mypyc_temp__12.f1);
    Py_VISIT(self->___mypyc_temp__12.f2);
    Py_VISIT(self->___mypyc_generator_attribute__outputs);
    Py_VISIT(self->___mypyc_temp__13);
    Py_VISIT(self->___mypyc_temp__14.f0);
    Py_VISIT(self->___mypyc_temp__14.f1);
    Py_VISIT(self->___mypyc_temp__14.f2);
    Py_VISIT(self->___mypyc_generator_attribute___);
    Py_VISIT(self->___mypyc_temp__15);
    Py_VISIT(self->___mypyc_temp__16);
    Py_VISIT(self->___mypyc_temp__18);
    Py_VISIT(self->___mypyc_temp__19);
    Py_VISIT(self->___mypyc_generator_attribute__call);
    Py_VISIT(self->___mypyc_generator_attribute__success);
    Py_VISIT(self->___mypyc_generator_attribute__output);
    Py_VISIT(self->___mypyc_temp__20);
    Py_VISIT(self->___mypyc_temp__21.f0);
    Py_VISIT(self->___mypyc_temp__21.f1);
    Py_VISIT(self->___mypyc_temp__21.f2);
    Py_VISIT(self->___mypyc_generator_attribute__e);
    Py_VISIT(self->___mypyc_temp__22.f0);
    Py_VISIT(self->___mypyc_temp__22.f1);
    Py_VISIT(self->___mypyc_temp__22.f2);
    Py_VISIT(self->___mypyc_temp__23);
    Py_VISIT(self->___mypyc_temp__24.f0);
    Py_VISIT(self->___mypyc_temp__24.f1);
    Py_VISIT(self->___mypyc_temp__24.f2);
    Py_VISIT(self->___mypyc_temp__25);
    Py_VISIT(self->___mypyc_temp__26.f0);
    Py_VISIT(self->___mypyc_temp__26.f1);
    Py_VISIT(self->___mypyc_temp__26.f2);
    Py_VISIT(self->___mypyc_temp__27);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_generator_attribute__i));
    }
    Py_VISIT(self->___mypyc_temp__29);
    Py_VISIT(self->___mypyc_temp__30);
    Py_VISIT(self->___mypyc_generator_attribute__chunk);
    Py_VISIT(self->___mypyc_temp__31);
    Py_VISIT(self->___mypyc_temp__32.f0);
    Py_VISIT(self->___mypyc_temp__32.f1);
    Py_VISIT(self->___mypyc_temp__32.f2);
    Py_VISIT(self->___mypyc_generator_attribute__batch_results);
    Py_VISIT(self->___mypyc_temp__33);
    Py_VISIT(self->___mypyc_temp__34);
    Py_VISIT(self->___mypyc_temp__36);
    Py_VISIT(self->___mypyc_generator_attribute__result.f0);
    Py_VISIT(self->___mypyc_generator_attribute__result.f1);
    return 0;
}

static int
multicall___fetch_outputs_Multicall_gen_clear(multicall___multicall___fetch_outputs_Multicall_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__calls);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__ConnErr_retries)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__ConnErr_retries;
        self->___mypyc_generator_attribute__ConnErr_retries = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_generator_attribute__id);
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7);
    Py_CLEAR(self->___mypyc_temp__9);
    Py_CLEAR(self->___mypyc_temp__10.f0);
    Py_CLEAR(self->___mypyc_temp__10.f1);
    Py_CLEAR(self->___mypyc_temp__10.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__args);
    Py_CLEAR(self->___mypyc_temp__11);
    Py_CLEAR(self->___mypyc_temp__12.f0);
    Py_CLEAR(self->___mypyc_temp__12.f1);
    Py_CLEAR(self->___mypyc_temp__12.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__outputs);
    Py_CLEAR(self->___mypyc_temp__13);
    Py_CLEAR(self->___mypyc_temp__14.f0);
    Py_CLEAR(self->___mypyc_temp__14.f1);
    Py_CLEAR(self->___mypyc_temp__14.f2);
    Py_CLEAR(self->___mypyc_generator_attribute___);
    Py_CLEAR(self->___mypyc_temp__15);
    Py_CLEAR(self->___mypyc_temp__16);
    Py_CLEAR(self->___mypyc_temp__18);
    Py_CLEAR(self->___mypyc_temp__19);
    Py_CLEAR(self->___mypyc_generator_attribute__call);
    Py_CLEAR(self->___mypyc_generator_attribute__success);
    Py_CLEAR(self->___mypyc_generator_attribute__output);
    Py_CLEAR(self->___mypyc_temp__20);
    Py_CLEAR(self->___mypyc_temp__21.f0);
    Py_CLEAR(self->___mypyc_temp__21.f1);
    Py_CLEAR(self->___mypyc_temp__21.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__e);
    Py_CLEAR(self->___mypyc_temp__22.f0);
    Py_CLEAR(self->___mypyc_temp__22.f1);
    Py_CLEAR(self->___mypyc_temp__22.f2);
    Py_CLEAR(self->___mypyc_temp__23);
    Py_CLEAR(self->___mypyc_temp__24.f0);
    Py_CLEAR(self->___mypyc_temp__24.f1);
    Py_CLEAR(self->___mypyc_temp__24.f2);
    Py_CLEAR(self->___mypyc_temp__25);
    Py_CLEAR(self->___mypyc_temp__26.f0);
    Py_CLEAR(self->___mypyc_temp__26.f1);
    Py_CLEAR(self->___mypyc_temp__26.f2);
    Py_CLEAR(self->___mypyc_temp__27);
    if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__i)) {
        CPyTagged __tmp = self->___mypyc_generator_attribute__i;
        self->___mypyc_generator_attribute__i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__29);
    Py_CLEAR(self->___mypyc_temp__30);
    Py_CLEAR(self->___mypyc_generator_attribute__chunk);
    Py_CLEAR(self->___mypyc_temp__31);
    Py_CLEAR(self->___mypyc_temp__32.f0);
    Py_CLEAR(self->___mypyc_temp__32.f1);
    Py_CLEAR(self->___mypyc_temp__32.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__batch_results);
    Py_CLEAR(self->___mypyc_temp__33);
    Py_CLEAR(self->___mypyc_temp__34);
    Py_CLEAR(self->___mypyc_temp__36);
    Py_CLEAR(self->___mypyc_generator_attribute__result.f0);
    Py_CLEAR(self->___mypyc_generator_attribute__result.f1);
    return 0;
}

static void
multicall___fetch_outputs_Multicall_gen_dealloc(multicall___multicall___fetch_outputs_Multicall_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (multicall___fetch_outputs_Multicall_gen_free_instance == NULL) {
        multicall___fetch_outputs_Multicall_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__calls);
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__ConnErr_retries)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__ConnErr_retries;
            self->___mypyc_generator_attribute__ConnErr_retries = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__ConnErr_retries = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_generator_attribute__id);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__6);
        Py_CLEAR(self->___mypyc_temp__7);
        self->___mypyc_temp__8 = 2;
        Py_CLEAR(self->___mypyc_temp__9);
        Py_CLEAR(self->___mypyc_temp__10.f0);
        Py_CLEAR(self->___mypyc_temp__10.f1);
        Py_CLEAR(self->___mypyc_temp__10.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__args);
        Py_CLEAR(self->___mypyc_temp__11);
        Py_CLEAR(self->___mypyc_temp__12.f0);
        Py_CLEAR(self->___mypyc_temp__12.f1);
        Py_CLEAR(self->___mypyc_temp__12.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__outputs);
        Py_CLEAR(self->___mypyc_temp__13);
        Py_CLEAR(self->___mypyc_temp__14.f0);
        Py_CLEAR(self->___mypyc_temp__14.f1);
        Py_CLEAR(self->___mypyc_temp__14.f2);
        Py_CLEAR(self->___mypyc_generator_attribute___);
        Py_CLEAR(self->___mypyc_temp__15);
        Py_CLEAR(self->___mypyc_temp__16);
        self->___mypyc_temp__17 = -113;
        Py_CLEAR(self->___mypyc_temp__18);
        Py_CLEAR(self->___mypyc_temp__19);
        Py_CLEAR(self->___mypyc_generator_attribute__call);
        Py_CLEAR(self->___mypyc_generator_attribute__success);
        Py_CLEAR(self->___mypyc_generator_attribute__output);
        Py_CLEAR(self->___mypyc_temp__20);
        Py_CLEAR(self->___mypyc_temp__21.f0);
        Py_CLEAR(self->___mypyc_temp__21.f1);
        Py_CLEAR(self->___mypyc_temp__21.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__e);
        Py_CLEAR(self->___mypyc_temp__22.f0);
        Py_CLEAR(self->___mypyc_temp__22.f1);
        Py_CLEAR(self->___mypyc_temp__22.f2);
        Py_CLEAR(self->___mypyc_temp__23);
        Py_CLEAR(self->___mypyc_temp__24.f0);
        Py_CLEAR(self->___mypyc_temp__24.f1);
        Py_CLEAR(self->___mypyc_temp__24.f2);
        Py_CLEAR(self->___mypyc_temp__25);
        Py_CLEAR(self->___mypyc_temp__26.f0);
        Py_CLEAR(self->___mypyc_temp__26.f1);
        Py_CLEAR(self->___mypyc_temp__26.f2);
        Py_CLEAR(self->___mypyc_temp__27);
        self->___mypyc_temp__28 = CPY_INT_TAG;
        if (CPyTagged_CheckLong(self->___mypyc_generator_attribute__i)) {
            CPyTagged __tmp = self->___mypyc_generator_attribute__i;
            self->___mypyc_generator_attribute__i = CPY_INT_TAG;
            Py_XDECREF(CPyTagged_LongAsObject(__tmp));
        } else {
            self->___mypyc_generator_attribute__i = CPY_INT_TAG;
        }
        Py_CLEAR(self->___mypyc_temp__29);
        Py_CLEAR(self->___mypyc_temp__30);
        Py_CLEAR(self->___mypyc_generator_attribute__chunk);
        Py_CLEAR(self->___mypyc_temp__31);
        Py_CLEAR(self->___mypyc_temp__32.f0);
        Py_CLEAR(self->___mypyc_temp__32.f1);
        Py_CLEAR(self->___mypyc_temp__32.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__batch_results);
        Py_CLEAR(self->___mypyc_temp__33);
        Py_CLEAR(self->___mypyc_temp__34);
        self->___mypyc_temp__35 = -113;
        Py_CLEAR(self->___mypyc_temp__36);
        self->___mypyc_temp__37 = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__result.f0);
        Py_CLEAR(self->___mypyc_generator_attribute__result.f1);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, multicall___fetch_outputs_Multicall_gen_dealloc)
    multicall___fetch_outputs_Multicall_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem multicall___fetch_outputs_Multicall_gen_vtable[7];
static bool
CPyDef_multicall___fetch_outputs_Multicall_gen_trait_vtable_setup(void)
{
    CPyVTableItem multicall___fetch_outputs_Multicall_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen_____next__,
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen___send,
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__,
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen___throw,
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen___close,
        (CPyVTableItem)CPyDef_multicall___fetch_outputs_Multicall_gen_____await__,
    };
    memcpy(multicall___fetch_outputs_Multicall_gen_vtable, multicall___fetch_outputs_Multicall_gen_vtable_scratch, sizeof(multicall___fetch_outputs_Multicall_gen_vtable));
    return 1;
}

static PyMethodDef multicall___fetch_outputs_Multicall_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_multicall___fetch_outputs_Multicall_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "fetch_outputs_Multicall_gen",
    .tp_new = multicall___fetch_outputs_Multicall_gen_new,
    .tp_dealloc = (destructor)multicall___fetch_outputs_Multicall_gen_dealloc,
    .tp_traverse = (traverseproc)multicall___fetch_outputs_Multicall_gen_traverse,
    .tp_clear = (inquiry)multicall___fetch_outputs_Multicall_gen_clear,
    .tp_methods = multicall___fetch_outputs_Multicall_gen_methods,
    .tp_iter = CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__,
    .tp_iternext = CPyDef_multicall___fetch_outputs_Multicall_gen_____next__,
    .tp_as_async = &multicall___fetch_outputs_Multicall_gen_as_async,
    .tp_basicsize = sizeof(multicall___multicall___fetch_outputs_Multicall_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("fetch_outputs_Multicall_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_multicall___fetch_outputs_Multicall_gen_template = &CPyType_multicall___fetch_outputs_Multicall_gen_template_;

PyObject *CPyDef_multicall_____mypyc__fetch_outputs_Multicall_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___multicall___fetch_outputs_Multicall_genObject *self;
    if (multicall___fetch_outputs_Multicall_gen_free_instance != NULL) {
        self = multicall___fetch_outputs_Multicall_gen_free_instance;
        multicall___fetch_outputs_Multicall_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (multicall___multicall___fetch_outputs_Multicall_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = multicall___fetch_outputs_Multicall_gen_vtable;
    self->___mypyc_generator_attribute__ConnErr_retries = CPY_INT_TAG;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__8 = 2;
    self->___mypyc_temp__10 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__12 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__14 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__17 = -113;
    self->___mypyc_temp__21 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__22 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__24 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__26 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__28 = CPY_INT_TAG;
    self->___mypyc_generator_attribute__i = CPY_INT_TAG;
    self->___mypyc_temp__32 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__35 = -113;
    self->___mypyc_temp__37 = -113;
    self->___mypyc_generator_attribute__result = (tuple_T2OO) { NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen(void)
{
    PyObject *self = CPyDef_multicall_____mypyc__fetch_outputs_Multicall_gen_setup((PyObject *)CPyType_multicall___fetch_outputs_Multicall_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef multicallmodule_methods[] = {
    {"get_args", (PyCFunction)CPyPy_multicall___get_args, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_args(calls, require_success=True)\n--\n\n") /* docstring */},
    {"unpack_aggregate_outputs", (PyCFunction)CPyPy_multicall___unpack_aggregate_outputs, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("unpack_aggregate_outputs(outputs)\n--\n\n") /* docstring */},
    {"_raise_or_proceed", (PyCFunction)CPyPy_multicall____raise_or_proceed, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_raise_or_proceed(e, ct_calls, ConnErr_retries)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_multicall___multicall(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___multicall__internal, "__name__");
    CPyStatic_multicall___globals = PyModule_GetDict(CPyModule_multicall___multicall__internal);
    if (unlikely(CPyStatic_multicall___globals == NULL))
        goto fail;
    CPyType_multicall___coroutine_Multicall_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_multicall___coroutine_Multicall_gen_template, NULL, modname);
    if (unlikely(!CPyType_multicall___coroutine_Multicall_gen))
        goto fail;
    CPyType_multicall___fetch_outputs_Multicall_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_multicall___fetch_outputs_Multicall_gen_template, NULL, modname);
    if (unlikely(!CPyType_multicall___fetch_outputs_Multicall_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_multicall_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_multicall___multicall__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_multicall___logger);
    CPyStatic_multicall___logger = NULL;
    CPy_XDECREF(CPyStatic_multicall___log_warning);
    CPyStatic_multicall___log_warning = NULL;
    CPy_XDECREF(CPyStatic_multicall___log_debug);
    CPyStatic_multicall___log_debug = NULL;
    CPy_XDECREF(CPyStatic_multicall___to_checksum_address);
    CPyStatic_multicall___to_checksum_address = NULL;
    CPy_XDECREF(CPyStatic_multicall___concat);
    CPyStatic_multicall___concat = NULL;
    CPy_XDECREF(CPyStatic_multicall___mapcat);
    CPyStatic_multicall___mapcat = NULL;
    CPy_XDECREF(CPyStatic_multicall___multicall___multicall___Multicall_____init______w3);
    CPyStatic_multicall___multicall___multicall___Multicall_____init______w3 = NULL;
    CPy_XDECREF_NO_IMM(CPyStatic_multicall___batcher);
    CPyStatic_multicall___batcher = NULL;
    Py_CLEAR(CPyType_multicall___Multicall);
    Py_CLEAR(CPyType_multicall___NotSoBrightBatcher);
    Py_CLEAR(CPyType_multicall___coroutine_Multicall_gen);
    Py_CLEAR(CPyType_multicall___fetch_outputs_Multicall_gen);
    return -1;
}
static struct PyModuleDef multicallmodule = {
    PyModuleDef_HEAD_INIT,
    "multicall.multicall",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    multicallmodule_methods,
    NULL,
};

PyObject *CPyInit_multicall___multicall(void)
{
    if (CPyModule_multicall___multicall__internal) {
        Py_INCREF(CPyModule_multicall___multicall__internal);
        return CPyModule_multicall___multicall__internal;
    }
    CPyModule_multicall___multicall__internal = PyModule_Create(&multicallmodule);
    if (unlikely(CPyModule_multicall___multicall__internal == NULL))
        goto fail;
    if (CPyExec_multicall___multicall(CPyModule_multicall___multicall__internal) != 0)
        goto fail;
    return CPyModule_multicall___multicall__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_multicall___get_args(PyObject *cpy_r_calls, char cpy_r_require_success) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    int64_t cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    PyObject *cpy_r_r28;
    int64_t cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    if (cpy_r_require_success != 2) goto CPyL2;
    cpy_r_require_success = 1;
CPyL2: ;
    cpy_r_r0 = cpy_r_require_success ? Py_True : Py_False;
    cpy_r_r1 = 1 ? Py_True : Py_False;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL13;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL23;
    }
    cpy_r_r6 = 0;
CPyL5: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r6 < cpy_r_r8;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_calls)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r6 * 8;
    cpy_r_r13 = cpy_r_r11 + cpy_r_r12;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    CPy_INCREF(cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_call___Call))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals, "multicall.call.Call", cpy_r_r14);
        goto CPyL24;
    }
    cpy_r_r16 = ((multicall___call___CallObject *)cpy_r_r15)->_target;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_call___Call___data(cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL25;
    }
CPyL8: ;
    cpy_r_r18 = PyList_New(2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL26;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r16;
    cpy_r_r21 = cpy_r_r20 + 8;
    *(PyObject * *)cpy_r_r21 = cpy_r_r17;
    CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r18);
    cpy_r_r22 = cpy_r_r6 + 1;
    cpy_r_r6 = cpy_r_r22;
    goto CPyL5;
CPyL11: ;
    cpy_r_r23 = PyList_New(1);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL24;
    }
    cpy_r_r24 = (CPyPtr)&((PyListObject *)cpy_r_r23)->ob_item;
    cpy_r_r25 = *(CPyPtr *)cpy_r_r24;
    *(PyObject * *)cpy_r_r25 = cpy_r_r5;
    return cpy_r_r23;
CPyL13: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = PyList_New(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL23;
    }
    cpy_r_r29 = 0;
CPyL15: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r29 < cpy_r_r31;
    if (!cpy_r_r32) goto CPyL21;
    cpy_r_r33 = (CPyPtr)&((PyListObject *)cpy_r_calls)->ob_item;
    cpy_r_r34 = *(CPyPtr *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r29 * 8;
    cpy_r_r36 = cpy_r_r34 + cpy_r_r35;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    CPy_INCREF(cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_call___Call))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals, "multicall.call.Call", cpy_r_r37);
        goto CPyL27;
    }
    cpy_r_r39 = ((multicall___call___CallObject *)cpy_r_r38)->_target;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyDef_call___Call___data(cpy_r_r38);
    CPy_DECREF_NO_IMM(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL28;
    }
CPyL18: ;
    cpy_r_r41 = PyList_New(2);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL29;
    }
    cpy_r_r42 = (CPyPtr)&((PyListObject *)cpy_r_r41)->ob_item;
    cpy_r_r43 = *(CPyPtr *)cpy_r_r42;
    *(PyObject * *)cpy_r_r43 = cpy_r_r39;
    cpy_r_r44 = cpy_r_r43 + 8;
    *(PyObject * *)cpy_r_r44 = cpy_r_r40;
    CPyList_SetItemUnsafe(cpy_r_r28, cpy_r_r29, cpy_r_r41);
    cpy_r_r45 = cpy_r_r29 + 1;
    cpy_r_r29 = cpy_r_r45;
    goto CPyL15;
CPyL21: ;
    cpy_r_r46 = PyList_New(2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL27;
    }
    cpy_r_r47 = cpy_r_require_success ? Py_True : Py_False;
    cpy_r_r48 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r49 = *(CPyPtr *)cpy_r_r48;
    *(PyObject * *)cpy_r_r49 = cpy_r_r47;
    cpy_r_r50 = cpy_r_r49 + 8;
    *(PyObject * *)cpy_r_r50 = cpy_r_r28;
    return cpy_r_r46;
CPyL23: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL24: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r16);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r39);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    goto CPyL23;
}

PyObject *CPyPy_multicall___get_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"calls", "require_success", 0};
    static CPyArg_Parser parser = {"O|O:get_args", kwlist, 0};
    PyObject *obj_calls;
    PyObject *obj_require_success = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_calls, &obj_require_success)) {
        return NULL;
    }
    PyObject *arg_calls;
    if (likely(PyList_Check(obj_calls)))
        arg_calls = obj_calls;
    else {
        CPy_TypeError("list", obj_calls); 
        goto fail;
    }
    char arg_require_success;
    if (obj_require_success == NULL) {
        arg_require_success = 2;
    } else if (unlikely(!PyBool_Check(obj_require_success))) {
        CPy_TypeError("bool", obj_require_success); goto fail;
    } else
        arg_require_success = obj_require_success == Py_True;
    PyObject *retval = CPyDef_multicall___get_args(arg_calls, arg_require_success);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "get_args", 41, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___unpack_aggregate_outputs(PyObject *cpy_r_outputs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2CO cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "unpack_aggregate_outputs", 48, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_outputs);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "unpack_aggregate_outputs", 48, CPyStatic_multicall___globals);
        goto CPyL8;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL9;
    cpy_r_r3.f0 = 1;
    cpy_r_r3.f1 = cpy_r_r2;
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp52 = Py_None;
    CPy_INCREF(__tmp52);
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp52);
    PyObject *__tmp53 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp53);
    cpy_r_r5 = PyList_Append(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("multicall/multicall.py", "unpack_aggregate_outputs", 48, CPyStatic_multicall___globals);
        goto CPyL10;
    } else
        goto CPyL2;
CPyL4: ;
    cpy_r_r7 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("multicall/multicall.py", "unpack_aggregate_outputs", 48, CPyStatic_multicall___globals);
        goto CPyL8;
    }
    cpy_r_r8 = PyList_AsTuple(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "unpack_aggregate_outputs", 48, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL4;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_multicall___unpack_aggregate_outputs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"outputs", 0};
    static CPyArg_Parser parser = {"O:unpack_aggregate_outputs", kwlist, 0};
    PyObject *obj_outputs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_outputs)) {
        return NULL;
    }
    PyObject *arg_outputs = obj_outputs;
    PyObject *retval = CPyDef_multicall___unpack_aggregate_outputs(arg_outputs);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "unpack_aggregate_outputs", 47, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall_____init__(PyObject *cpy_r_self, PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_multicall_map;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    if (cpy_r_block_id != NULL) goto CPyL44;
    cpy_r_r0 = Py_None;
    cpy_r_block_id = cpy_r_r0;
CPyL2: ;
    if (cpy_r_require_success != 2) goto CPyL4;
    cpy_r_require_success = 1;
CPyL4: ;
    if (cpy_r_gas_limit != CPY_INT_TAG) goto CPyL45;
    cpy_r_r1 = CPyStatic_constants___GAS_LIMIT;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        goto CPyL46;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"GAS_LIMIT\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 69, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL8: ;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_gas_limit = cpy_r_r1;
CPyL9: ;
    if (cpy_r__w3 != NULL) goto CPyL47;
    cpy_r_r3 = CPyStatic_multicall___multicall___multicall___Multicall_____init______w3;
    CPy_INCREF(cpy_r_r3);
    cpy_r__w3 = cpy_r_r3;
CPyL11: ;
    if (cpy_r_origin != NULL) goto CPyL48;
    cpy_r_r4 = Py_None;
    cpy_r_origin = cpy_r_r4;
CPyL13: ;
    CPy_INCREF_NO_IMM(cpy_r_calls);
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_calls = cpy_r_calls;
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_block_id = cpy_r_block_id;
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_require_success = cpy_r_require_success;
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_gas_limit = cpy_r_gas_limit;
    CPy_INCREF(cpy_r__w3);
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_w3 = cpy_r__w3;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_origin != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL49;
    CPy_INCREF(cpy_r_origin);
    cpy_r_r7 = cpy_r_origin;
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 71, CPyStatic_multicall___globals);
        goto CPyL50;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL49;
    cpy_r_r11 = CPyStatic_multicall___to_checksum_address;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 78, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL20: ;
    PyObject *cpy_r_r13[1] = {cpy_r_origin};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r11, cpy_r_r14, 1, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 78, CPyStatic_multicall___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_origin);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "__init__", 78, CPyStatic_multicall___globals, "str", cpy_r_r15);
        goto CPyL52;
    }
    cpy_r_r17 = cpy_r_r16;
    goto CPyL24;
CPyL23: ;
    cpy_r_r18 = Py_None;
    cpy_r_r17 = cpy_r_r18;
CPyL24: ;
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_origin = cpy_r_r17;
    cpy_r_r19 = CPyStatic_multicall___globals;
    cpy_r_r20 = CPyStatics[17]; /* 'chain_id' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 79, CPyStatic_multicall___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r22[1] = {cpy_r__w3};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 79, CPyStatic_multicall___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r__w3);
    if (likely(PyLong_Check(cpy_r_r24)))
        cpy_r_r25 = CPyTagged_FromObject(cpy_r_r24);
    else {
        CPy_TypeError("int", cpy_r_r24); cpy_r_r25 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 79, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    CPyTagged_INCREF(cpy_r_r25);
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_chainid = cpy_r_r25;
    cpy_r_r26 = CPyStatic_constants___MULTICALL3_ADDRESSES;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL3_ADDRESSES\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL30: ;
    CPyTagged_INCREF(cpy_r_r25);
    cpy_r_r28 = CPyTagged_StealAsObject(cpy_r_r25);
    cpy_r_r29 = PyDict_Contains(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL54;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL36;
    cpy_r_r32 = CPyStatic_constants___MULTICALL3_ADDRESSES;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL3_ADDRESSES\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL35: ;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r32;
    goto CPyL40;
CPyL36: ;
    cpy_r_r35 = CPyStatic_constants___MULTICALL2_ADDRESSES;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL56;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL2_ADDRESSES\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL39: ;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r34 = cpy_r_r35;
CPyL40: ;
    cpy_r_multicall_map = cpy_r_r34;
    cpy_r_r37 = CPyTagged_StealAsObject(cpy_r_r25);
    cpy_r_r38 = CPyDict_GetItem(cpy_r_multicall_map, cpy_r_r37);
    CPy_DECREF(cpy_r_multicall_map);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 84, CPyStatic_multicall___globals);
        goto CPyL43;
    }
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "__init__", 84, CPyStatic_multicall___globals, "str", cpy_r_r38);
        goto CPyL43;
    }
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_multicall_address = cpy_r_r39;
    return 1;
CPyL43: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL44: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL2;
CPyL45: ;
    CPyTagged_INCREF(cpy_r_gas_limit);
    goto CPyL9;
CPyL46: ;
    CPy_DecRef(cpy_r_block_id);
    goto CPyL6;
CPyL47: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL11;
CPyL48: ;
    CPy_INCREF(cpy_r_origin);
    goto CPyL13;
CPyL49: ;
    CPy_DECREF(cpy_r_origin);
    goto CPyL23;
CPyL50: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_origin);
    goto CPyL43;
CPyL51: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_origin);
    goto CPyL18;
CPyL52: ;
    CPy_DecRef(cpy_r__w3);
    goto CPyL43;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_r25);
    goto CPyL28;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_r25);
    goto CPyL43;
CPyL55: ;
    CPyTagged_DecRef(cpy_r_r25);
    goto CPyL33;
CPyL56: ;
    CPyTagged_DecRef(cpy_r_r25);
    goto CPyL37;
}

PyObject *CPyPy_multicall___Multicall_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"calls", "block_id", "require_success", "gas_limit", "_w3", "origin", 0};
    PyObject *obj_calls;
    PyObject *obj_block_id = NULL;
    PyObject *obj_require_success = NULL;
    PyObject *obj_gas_limit = NULL;
    PyObject *obj__w3 = NULL;
    PyObject *obj_origin = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|OOOOO", "__init__", kwlist, &obj_calls, &obj_block_id, &obj_require_success, &obj_gas_limit, &obj__w3, &obj_origin)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *arg_calls;
    if (likely(PyList_Check(obj_calls)))
        arg_calls = obj_calls;
    else {
        CPy_TypeError("list", obj_calls); 
        goto fail;
    }
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL54;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL54;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL54;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL54: ;
    char arg_require_success;
    if (obj_require_success == NULL) {
        arg_require_success = 2;
    } else if (unlikely(!PyBool_Check(obj_require_success))) {
        CPy_TypeError("bool", obj_require_success); goto fail;
    } else
        arg_require_success = obj_require_success == Py_True;
    CPyTagged arg_gas_limit;
    if (obj_gas_limit == NULL) {
        arg_gas_limit = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_gas_limit)))
        arg_gas_limit = CPyTagged_BorrowFromObject(obj_gas_limit);
    else {
        CPy_TypeError("int", obj_gas_limit); goto fail;
    }
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
    } else {
        arg__w3 = obj__w3; 
    }
    PyObject *arg_origin;
    if (obj_origin == NULL) {
        arg_origin = NULL;
        goto __LL55;
    }
    arg_origin = obj_origin;
    if (arg_origin != NULL) goto __LL55;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL55;
    CPy_TypeError("object or None", obj_origin); 
    goto fail;
__LL55: ;
    char retval = CPyDef_multicall___Multicall_____init__(arg_self, arg_calls, arg_block_id, arg_require_success, arg_gas_limit, arg__w3, arg_origin);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__init__", 64, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___Multicall_____call__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    double cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    double cpy_r_r19;
    char cpy_r_r20;
    double cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = CPyStatic_multicall___globals;
    cpy_r_r1 = CPyStatics[217]; /* 'time' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 87, CPyStatic_multicall___globals);
        goto CPyL16;
    }
    cpy_r_r3 = PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 87, CPyStatic_multicall___globals);
        goto CPyL16;
    }
    cpy_r_r4 = PyFloat_AsDouble(cpy_r_r3);
    if (cpy_r_r4 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r3); cpy_r_r4 = -113.0;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -113.0;
    if (unlikely(cpy_r_r5)) goto CPyL4;
CPyL3: ;
    cpy_r_r6 = CPyStatic_multicall___globals;
    cpy_r_r7 = CPyStatics[218]; /* 'await_awaitable' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 88, CPyStatic_multicall___globals);
        goto CPyL16;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r9 = PyErr_Occurred();
    if (unlikely(cpy_r_r9 != NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 87, CPyStatic_multicall___globals);
        goto CPyL16;
    } else
        goto CPyL3;
CPyL5: ;
    PyObject *cpy_r_r10[1] = {cpy_r_self};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 88, CPyStatic_multicall___globals);
        goto CPyL16;
    }
    if (likely(PyDict_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "__call__", 88, CPyStatic_multicall___globals, "dict", cpy_r_r12);
        goto CPyL16;
    }
    cpy_r_r14 = CPyStatics[219]; /* 'Multicall took %ss' */
    cpy_r_r15 = CPyStatic_multicall___globals;
    cpy_r_r16 = CPyStatics[217]; /* 'time' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 89, CPyStatic_multicall___globals);
        goto CPyL17;
    }
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r17, 0, 0, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 89, CPyStatic_multicall___globals);
        goto CPyL17;
    }
    cpy_r_r19 = PyFloat_AsDouble(cpy_r_r18);
    if (cpy_r_r19 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r18); cpy_r_r19 = -113.0;
    }
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 == -113.0;
    if (unlikely(cpy_r_r20)) goto CPyL11;
CPyL10: ;
    cpy_r_r21 = cpy_r_r19 - cpy_r_r4;
    cpy_r_r22 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL18;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_r23 = PyErr_Occurred();
    if (unlikely(cpy_r_r23 != NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 89, CPyStatic_multicall___globals);
        goto CPyL17;
    } else
        goto CPyL10;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 89, CPyStatic_multicall___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r25 = PyFloat_FromDouble(cpy_r_r21);
    PyObject *cpy_r_r26[2] = {cpy_r_r14, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r22, cpy_r_r27, 2, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__call__", 89, CPyStatic_multicall___globals);
        goto CPyL19;
    } else
        goto CPyL20;
CPyL15: ;
    CPy_DECREF(cpy_r_r25);
    return cpy_r_r13;
CPyL16: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL17: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL12;
CPyL19: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r25);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL15;
}

PyObject *CPyPy_multicall___Multicall_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___Multicall_____call__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__call__", 86, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___Multicall_____await__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_multicall___Multicall___coroutine(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__await__", 93, CPyStatic_multicall___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyStatics[14]; /* '__await__' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__await__", 93, CPyStatic_multicall___globals);
        goto CPyL4;
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_multicall___Multicall_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___Multicall_____await__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__await__", 92, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___Multicall___multicall_sig(PyObject *cpy_r_self) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_require_success;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = CPyStatics[220]; /* 'aggregate((address,bytes)[])(uint256,bytes[])' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = cpy_r_r1;
    goto CPyL3;
CPyL2: ;
    cpy_r_r3 = CPyStatics[221]; /* 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])' */
    CPy_INCREF(cpy_r_r3);
    cpy_r_r2 = cpy_r_r3;
CPyL3: ;
    return cpy_r_r2;
}

PyObject *CPyPy_multicall___Multicall___multicall_sig(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":multicall_sig", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___Multicall___multicall_sig(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "multicall_sig", 96, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int64_t cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    int64_t cpy_r_r46;
    int64_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    char cpy_r_r70;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    tuple_T3OOO cpy_r_r75;
    tuple_T3OOO cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL87;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = 0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r8 = CPyStatic_multicall___batcher;
    if (likely(cpy_r_r8 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"batcher\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 107, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r10 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "self", 107, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF_NO_IMM(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = ((multicall___multicall___MulticallObject *)cpy_r_r10)->_calls;
    CPy_INCREF_NO_IMM(cpy_r_r11);
    CPy_DECREF_NO_IMM(cpy_r_r10);
    cpy_r_r12 = CPyStatic_multicall___batcher;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL92;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"batcher\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 107, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r14 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_r12)->_step;
    CPyTagged_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_multicall___NotSoBrightBatcher___batch_calls(cpy_r_r8, cpy_r_r11, cpy_r_r14);
    CPy_DECREF_NO_IMM(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 107, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = 0;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
CPyL17: ;
    cpy_r_r18 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__2", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF_NO_IMM(cpy_r_r18);
CPyL18: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF_NO_IMM(cpy_r_r18);
    cpy_r_r21 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r21 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__3", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
CPyL19: ;
    cpy_r_r22 = cpy_r_r21 < cpy_r_r20;
    if (!cpy_r_r22) goto CPyL37;
    cpy_r_r23 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__1", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
CPyL21: ;
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i != CPY_INT_TAG) {
        CPyTagged_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r25 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__2", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF_NO_IMM(cpy_r_r25);
CPyL23: ;
    cpy_r_r26 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r26 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__3", 105, CPyStatic_multicall___globals);
        goto CPyL93;
    }
CPyL24: ;
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r26 * 8;
    cpy_r_r30 = cpy_r_r28 + cpy_r_r29;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF_NO_IMM(cpy_r_r25);
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals, "list", cpy_r_r31);
        goto CPyL91;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r34 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "self", 106, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF_NO_IMM(cpy_r_r34);
CPyL27: ;
    cpy_r_r35 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "batch", 106, CPyStatic_multicall___globals);
        goto CPyL94;
    }
    CPy_INCREF_NO_IMM(cpy_r_r35);
CPyL28: ;
    cpy_r_r36 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i;
    if (unlikely(cpy_r_r36 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "i", 106, CPyStatic_multicall___globals);
        goto CPyL95;
    }
    CPyTagged_INCREF(cpy_r_r36);
CPyL29: ;
    cpy_r_r37 = CPyTagged_Str(cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 106, CPyStatic_multicall___globals);
        goto CPyL95;
    }
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPyDef_multicall___Multicall___fetch_outputs(cpy_r_r34, cpy_r_r35, cpy_r_r38, cpy_r_r37);
    CPy_DECREF_NO_IMM(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF_NO_IMM(cpy_r_r34);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 106, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r40 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__0", -1, CPyStatic_multicall___globals);
        goto CPyL96;
    }
    CPy_INCREF_NO_IMM(cpy_r_r40);
CPyL32: ;
    cpy_r_r41 = PyList_Append(cpy_r_r40, cpy_r_r39);
    CPy_DECREF_NO_IMM(cpy_r_r40);
    CPy_DECREF_NO_IMM(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r43 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__1", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
CPyL34: ;
    cpy_r_r44 = cpy_r_r43 + 2;
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r44;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r46 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r46 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__3", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
CPyL36: ;
    cpy_r_r47 = cpy_r_r46 + 1;
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    } else
        goto CPyL17;
CPyL37: ;
    cpy_r_r49 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__0", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF_NO_IMM(cpy_r_r49);
CPyL38: ;
    cpy_r_r50 = PyObject_GetIter(cpy_r_r49);
    CPy_DECREF_NO_IMM(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r51 = CPyStatic_multicall___globals;
    cpy_r_r52 = CPyStatics[222]; /* 'gather' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_r50};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r50);
    cpy_r_r57 = CPy_GetCoro(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r57;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r59 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__4", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r59);
CPyL44: ;
    cpy_r_r60 = CPyIter_Next(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (cpy_r_r60 != NULL) goto CPyL47;
    cpy_r_r61 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r62 = cpy_r_r61;
    cpy_r_r63 = NULL;
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r63;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL98;
    } else
        goto CPyL69;
CPyL47: ;
    cpy_r_r65 = cpy_r_r60;
CPyL48: ;
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r65;
CPyL49: ;
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r68 = cpy_r_type != cpy_r_r67;
    if (!cpy_r_r68) goto CPyL99;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL53;
    } else
        goto CPyL100;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL64;
CPyL53: ;
    cpy_r_r69 = CPy_CatchError();
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0);
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f1);
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f2);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r69;
    cpy_r_r70 = 1;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL101;
    }
    cpy_r_r71 = (PyObject **)&cpy_r_r1;
    cpy_r_r72 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__4", -1, CPyStatic_multicall___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r72);
CPyL55: ;
    cpy_r_r73 = CPy_YieldFromErrorHandle(cpy_r_r72, cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL101;
    }
    if (cpy_r_r73) goto CPyL59;
    cpy_r_r65 = cpy_r_r1;
    cpy_r_r74 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r74.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__5", -1, CPyStatic_multicall___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r74.f0);
    CPy_INCREF(cpy_r_r74.f1);
    CPy_INCREF(cpy_r_r74.f2);
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r74);
    CPy_DecRef(cpy_r_r74.f0);
    CPy_DecRef(cpy_r_r74.f1);
    CPy_DecRef(cpy_r_r74.f2);
    goto CPyL48;
CPyL59: ;
    cpy_r_r62 = cpy_r_r1;
    cpy_r_r75 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r75.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__5", -1, CPyStatic_multicall___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r75.f0);
    CPy_INCREF(cpy_r_r75.f1);
    CPy_INCREF(cpy_r_r75.f2);
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r75);
    CPy_DecRef(cpy_r_r75.f0);
    CPy_DecRef(cpy_r_r75.f1);
    CPy_DecRef(cpy_r_r75.f2);
    goto CPyL69;
CPyL61: ;
    cpy_r_r76 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__5", -1, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r76.f0);
    CPy_INCREF(cpy_r_r76.f1);
    CPy_INCREF(cpy_r_r76.f2);
CPyL62: ;
    CPy_RestoreExcInfo(cpy_r_r76);
    CPy_DecRef(cpy_r_r76.f0);
    CPy_DecRef(cpy_r_r76.f1);
    CPy_DecRef(cpy_r_r76.f2);
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) goto CPyL91;
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r78 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__4", -1, CPyStatic_multicall___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r78);
CPyL65: ;
    cpy_r_r79 = CPyIter_Send(cpy_r_r78, cpy_r_arg);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r79 == NULL) goto CPyL67;
    cpy_r_r65 = cpy_r_r79;
    goto CPyL48;
CPyL67: ;
    cpy_r_r80 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r62 = cpy_r_r80;
CPyL69: ;
    if (likely(PyList_Check(cpy_r_r62)))
        cpy_r_r81 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals, "list", cpy_r_r62);
        goto CPyL91;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batches != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batches);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batches = cpy_r_r81;
    cpy_r_r82 = 1;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r83 = (PyObject *)&PyDict_Type;
    cpy_r_r84 = CPyStatics[223]; /* 'items' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    cpy_r_r86 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batches;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "batches", 110, CPyStatic_multicall___globals);
        goto CPyL105;
    }
    CPy_INCREF_NO_IMM(cpy_r_r86);
CPyL73: ;
    cpy_r_r87 = CPyStatic_multicall___concat;
    if (unlikely(cpy_r_r87 == NULL)) {
        goto CPyL106;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"concat\" was not set");
    cpy_r_r88 = 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL76: ;
    PyObject *cpy_r_r89[1] = {cpy_r_r86};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = PyObject_Vectorcall(cpy_r_r87, cpy_r_r90, 1, 0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL107;
    }
    CPy_DECREF_NO_IMM(cpy_r_r86);
    cpy_r_r92 = CPyStatic_multicall___mapcat;
    if (unlikely(cpy_r_r92 == NULL)) {
        goto CPyL108;
    } else
        goto CPyL80;
CPyL78: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"mapcat\" was not set");
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL80: ;
    PyObject *cpy_r_r94[2] = {cpy_r_r85, cpy_r_r91};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = PyObject_Vectorcall(cpy_r_r92, cpy_r_r95, 2, 0);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL109;
    }
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r97 = CPyDict_FromAny(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL86;
    CPyGen_SetStopIterationValue(cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (!0) goto CPyL91;
    CPy_Unreachable();
CPyL86: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r97;
    return 0;
CPyL87: ;
    cpy_r_r99 = cpy_r_r2 == 0;
    if (cpy_r_r99) goto CPyL110;
    cpy_r_r100 = cpy_r_r2 == 1;
    if (cpy_r_r100) {
        goto CPyL49;
    } else
        goto CPyL111;
CPyL89: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL91: ;
    cpy_r_r102 = NULL;
    return cpy_r_r102;
CPyL92: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL12;
CPyL93: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL91;
CPyL94: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL91;
CPyL95: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    goto CPyL91;
CPyL96: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL91;
CPyL97: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL91;
CPyL98: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL91;
CPyL99: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL52;
CPyL100: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL51;
CPyL101: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL61;
CPyL102: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL61;
CPyL103: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL61;
CPyL104: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL91;
CPyL105: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL91;
CPyL106: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL74;
CPyL107: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL91;
CPyL108: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r91);
    goto CPyL78;
CPyL109: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r91);
    goto CPyL91;
CPyL110: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL111: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL89;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_multicall___coroutine_Multicall_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___coroutine_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.coroutine_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___coroutine_Multicall_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__next__", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_multicall___coroutine_Multicall_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___coroutine_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.coroutine_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_multicall___coroutine_Multicall_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "send", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_multicall___coroutine_Multicall_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___coroutine_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.coroutine_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___coroutine_Multicall_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__iter__", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_multicall___coroutine_Multicall_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___coroutine_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.coroutine_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_multicall___coroutine_Multicall_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "throw", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[24]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_multicall___coroutine_Multicall_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[25]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp56 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp56);
    PyObject *__tmp57 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp57);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_multicall___coroutine_Multicall_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___coroutine_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.coroutine_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___coroutine_Multicall_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "close", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_multicall___coroutine_Multicall_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___coroutine_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.coroutine_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___coroutine_Multicall_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__await__", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___Multicall___coroutine(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_multicall___coroutine_Multicall_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
        goto CPyL3;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
        goto CPyL4;
    }
    return cpy_r_r0;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL4: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_multicall___Multicall___coroutine(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":coroutine", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___Multicall___coroutine(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall____contract_method(PyObject *cpy_r_self, PyObject *cpy_r_request_signature, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_calls;
    CPy_INCREF_NO_IMM(cpy_r_r0);
    cpy_r_r1 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_multicall_address;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_New(1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_contract_method", 113, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    CPy_INCREF(cpy_r_return_signature);
    *(PyObject * *)cpy_r_r4 = cpy_r_return_signature;
    cpy_r_r5 = NULL;
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPyDef_call___Call(cpy_r_r1, cpy_r_request_signature, cpy_r_r2, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_contract_method", 113, CPyStatic_multicall___globals);
        goto CPyL6;
    }
    cpy_r_r11 = PyList_Append(cpy_r_r0, cpy_r_r10);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("multicall/multicall.py", "_contract_method", 113, CPyStatic_multicall___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_multicall___Multicall____contract_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"request_signature", "return_signature", 0};
    static CPyArg_Parser parser = {"OO:_contract_method", kwlist, 0};
    PyObject *obj_request_signature;
    PyObject *obj_return_signature;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_request_signature, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *arg_request_signature;
    if (likely(PyList_Check(obj_request_signature)))
        arg_request_signature = obj_request_signature;
    else {
        CPy_TypeError("list", obj_request_signature); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall____contract_method(arg_self, arg_request_signature, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "_contract_method", 112, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_base_fee(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[224]; /* 'base_fee' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp58 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp58);
    PyObject *__tmp59 = Py_None;
    CPy_INCREF(__tmp59);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp59);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[225]; /* 'getBasefee()(uint256)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_base_fee", 116, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_base_fee", 117, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_base_fee(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_base_fee", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_base_fee(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_base_fee", 115, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_block_hash(PyObject *cpy_r_self, CPyTagged cpy_r_block_number, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[226]; /* 'block_hash' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp60 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp60);
    PyObject *__tmp61 = Py_None;
    CPy_INCREF(__tmp61);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp61);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[227]; /* 'getBlockHash(uint256)(bytes32)' */
    cpy_r_r4 = PyList_New(2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_hash", 122, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    CPyTagged_INCREF(cpy_r_block_number);
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_block_number);
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r7 = cpy_r_r3;
    cpy_r_r8 = cpy_r_r7 + 8;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_r9 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_hash", 123, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_block_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block_number", "return_signature", 0};
    static CPyArg_Parser parser = {"O|O:add_block_hash", kwlist, 0};
    PyObject *obj_block_number;
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_block_number, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    CPyTagged arg_block_number;
    if (likely(PyLong_Check(obj_block_number)))
        arg_block_number = CPyTagged_BorrowFromObject(obj_block_number);
    else {
        CPy_TypeError("int", obj_block_number); goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_block_hash(arg_self, arg_block_number, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_block_hash", 119, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_block_number(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[228]; /* 'block_number' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp62 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp62);
    PyObject *__tmp63 = Py_None;
    CPy_INCREF(__tmp63);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp63);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[229]; /* 'getBlockNumber()(uint256)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_number", 126, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_number", 127, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_block_number(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_block_number", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_block_number(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_block_number", 125, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_chain_id(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[17]; /* 'chain_id' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp64 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp64);
    PyObject *__tmp65 = Py_None;
    CPy_INCREF(__tmp65);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp65);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[230]; /* 'getChainId()(uint256)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_chain_id", 130, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_chain_id", 131, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_chain_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_chain_id", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_chain_id(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_chain_id", 129, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_block_coinbase(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[231]; /* 'coinbase' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp66 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp66);
    PyObject *__tmp67 = Py_None;
    CPy_INCREF(__tmp67);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp67);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[232]; /* 'getCurrentBlockCoinbase()(address)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_coinbase", 134, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_coinbase", 135, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_block_coinbase(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_block_coinbase", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_block_coinbase(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_block_coinbase", 133, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_block_difficulty(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[233]; /* 'difficulty' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp68 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp68);
    PyObject *__tmp69 = Py_None;
    CPy_INCREF(__tmp69);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp69);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[234]; /* 'getCurrentBlockDifficulty()(address)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_difficulty", 138, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_difficulty", 139, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_block_difficulty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_block_difficulty", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_block_difficulty(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_block_difficulty", 137, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_block_gas_limit(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[76]; /* 'gas_limit' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp70 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp70);
    PyObject *__tmp71 = Py_None;
    CPy_INCREF(__tmp71);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp71);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[235]; /* 'getCurrentBlockGasLimit()(uint256)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_gas_limit", 142, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_gas_limit", 143, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_block_gas_limit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_block_gas_limit", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_block_gas_limit(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_block_gas_limit", 141, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_block_timestamp(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[236]; /* 'timestamp' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp72 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp72);
    PyObject *__tmp73 = Py_None;
    CPy_INCREF(__tmp73);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp73);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[237]; /* 'getCurrentBlockTimestamp()(uint256)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_timestamp", 146, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_block_timestamp", 147, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_block_timestamp(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_block_timestamp", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_block_timestamp(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_block_timestamp", 145, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_eth_balance(PyObject *cpy_r_self, PyObject *cpy_r_address, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[238]; /* 'eth_balance' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp74 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp74);
    PyObject *__tmp75 = Py_None;
    CPy_INCREF(__tmp75);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp75);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[239]; /* 'getEthBalance(address)(uint256)' */
    cpy_r_r4 = PyList_New(2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_eth_balance", 152, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    CPy_INCREF(cpy_r_address);
    cpy_r_r7 = cpy_r_r6 + 8;
    *(PyObject * *)cpy_r_r7 = cpy_r_address;
    cpy_r_r8 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_eth_balance", 153, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_eth_balance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"address", "return_signature", 0};
    static CPyArg_Parser parser = {"O|O:add_eth_balance", kwlist, 0};
    PyObject *obj_address;
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_address, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *arg_address = obj_address;
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_eth_balance(arg_self, arg_address, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_eth_balance", 149, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___Multicall___add_last_block_hash(PyObject *cpy_r_self, PyObject *cpy_r_return_signature) {
    PyObject *cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_return_signature != NULL) goto CPyL6;
    cpy_r_r0 = CPyStatics[240]; /* 'last_block_hash' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp76 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp76);
    PyObject *__tmp77 = Py_None;
    CPy_INCREF(__tmp77);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp77);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[241]; /* 'getLastBlockHash()(bytes32)' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "add_last_block_hash", 156, CPyStatic_multicall___globals);
        goto CPyL7;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_multicall___Multicall____contract_method(cpy_r_self, cpy_r_r4, cpy_r_return_signature);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_DECREF(cpy_r_return_signature);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "add_last_block_hash", 157, CPyStatic_multicall___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_INCREF(cpy_r_return_signature);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_return_signature);
    goto CPyL5;
}

PyObject *CPyPy_multicall___Multicall___add_last_block_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"return_signature", 0};
    static CPyArg_Parser parser = {"|O:add_last_block_hash", kwlist, 0};
    PyObject *obj_return_signature = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_return_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject * arg_return_signature;
    if (obj_return_signature == NULL) {
        arg_return_signature = NULL;
    } else if (likely(PyTuple_Check(obj_return_signature)))
        arg_return_signature = obj_return_signature;
    else {
        CPy_TypeError("tuple", obj_return_signature); 
        goto fail;
    }
    char retval = CPyDef_multicall___Multicall___add_last_block_hash(arg_self, arg_return_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "add_last_block_hash", 155, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    tuple_T3OOO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    char cpy_r_r58;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    tuple_T3OOO cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    tuple_T3OOO cpy_r_r98;
    char cpy_r_r99;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    tuple_T3OOO cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    tuple_T3OOO cpy_r_r143;
    char cpy_r_r144;
    PyObject **cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    tuple_T3OOO cpy_r_r148;
    tuple_T3OOO cpy_r_r149;
    tuple_T3OOO cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyPtr cpy_r_r179;
    int64_t cpy_r_r180;
    int64_t cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    int64_t cpy_r_r186;
    CPyPtr cpy_r_r187;
    CPyPtr cpy_r_r188;
    int64_t cpy_r_r189;
    CPyPtr cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    int32_t cpy_r_r212;
    char cpy_r_r213;
    int64_t cpy_r_r214;
    int64_t cpy_r_r215;
    char cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    char cpy_r_r223;
    PyObject **cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    tuple_T3OOO cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    CPyPtr cpy_r_r240;
    int64_t cpy_r_r241;
    CPyTagged cpy_r_r242;
    CPyTagged cpy_r_r243;
    char cpy_r_r244;
    tuple_T3OOO cpy_r_r245;
    tuple_T3OOO cpy_r_r246;
    char cpy_r_r247;
    tuple_T3OOO cpy_r_r248;
    char cpy_r_r249;
    char cpy_r_r250;
    tuple_T3OOO cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject **cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    tuple_T3OOO cpy_r_r272;
    char cpy_r_r273;
    PyObject **cpy_r_r274;
    PyObject *cpy_r_r275;
    char cpy_r_r276;
    tuple_T3OOO cpy_r_r277;
    tuple_T3OOO cpy_r_r278;
    tuple_T3OOO cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    int32_t cpy_r_r284;
    char cpy_r_r285;
    char cpy_r_r286;
    tuple_T3OOO cpy_r_r287;
    tuple_T3OOO cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    char cpy_r_r291;
    tuple_T3OOO cpy_r_r292;
    PyObject *cpy_r_r293;
    char cpy_r_r294;
    tuple_T3OOO cpy_r_r295;
    char cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject **cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    char cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    char cpy_r_r314;
    tuple_T3OOO cpy_r_r315;
    char cpy_r_r316;
    PyObject **cpy_r_r317;
    PyObject *cpy_r_r318;
    char cpy_r_r319;
    tuple_T3OOO cpy_r_r320;
    tuple_T3OOO cpy_r_r321;
    tuple_T3OOO cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    char cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    char cpy_r_r332;
    PyObject *cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    char cpy_r_r338;
    char cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    CPyTagged cpy_r_r342;
    char cpy_r_r343;
    PyObject *cpy_r_r344;
    char cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    CPyTagged cpy_r_r348;
    CPyTagged cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    CPyTagged cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    int32_t cpy_r_r357;
    char cpy_r_r358;
    CPyTagged cpy_r_r359;
    CPyTagged cpy_r_r360;
    char cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject **cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    char cpy_r_r382;
    tuple_T3OOO cpy_r_r383;
    char cpy_r_r384;
    PyObject **cpy_r_r385;
    PyObject *cpy_r_r386;
    char cpy_r_r387;
    tuple_T3OOO cpy_r_r388;
    tuple_T3OOO cpy_r_r389;
    tuple_T3OOO cpy_r_r390;
    char cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    char cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    char cpy_r_r400;
    PyObject **cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    char cpy_r_r407;
    char cpy_r_r408;
    PyObject *cpy_r_r409;
    CPyPtr cpy_r_r410;
    int64_t cpy_r_r411;
    int64_t cpy_r_r412;
    char cpy_r_r413;
    PyObject *cpy_r_r414;
    int64_t cpy_r_r415;
    CPyPtr cpy_r_r416;
    CPyPtr cpy_r_r417;
    int64_t cpy_r_r418;
    CPyPtr cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    char cpy_r_r422;
    PyObject *cpy_r_r423;
    char cpy_r_r424;
    char cpy_r_r425;
    PyObject *cpy_r_r426;
    CPyPtr cpy_r_r427;
    int64_t cpy_r_r428;
    int64_t cpy_r_r429;
    char cpy_r_r430;
    PyObject *cpy_r_r431;
    int64_t cpy_r_r432;
    CPyPtr cpy_r_r433;
    CPyPtr cpy_r_r434;
    int64_t cpy_r_r435;
    CPyPtr cpy_r_r436;
    PyObject *cpy_r_r437;
    tuple_T2OO cpy_r_r438;
    char cpy_r_r439;
    tuple_T2OO cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    int32_t cpy_r_r443;
    char cpy_r_r444;
    int64_t cpy_r_r445;
    int64_t cpy_r_r446;
    char cpy_r_r447;
    int64_t cpy_r_r448;
    int64_t cpy_r_r449;
    char cpy_r_r450;
    PyObject *cpy_r_r451;
    char cpy_r_r452;
    char cpy_r_r453;
    char cpy_r_r454;
    char cpy_r_r455;
    char cpy_r_r456;
    char cpy_r_r457;
    char cpy_r_r458;
    char cpy_r_r459;
    char cpy_r_r460;
    PyObject *cpy_r_r461;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    cpy_r_r8 = NULL;
    cpy_r_r9 = cpy_r_r8;
    tuple_T3OOO __tmp78 = { NULL, NULL, NULL };
    cpy_r_r10 = __tmp78;
    cpy_r_r11 = cpy_r_r10;
    cpy_r_r12 = NULL;
    cpy_r_r13 = cpy_r_r12;
    cpy_r_r14 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL414;
CPyL1: ;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_type != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r17 = CPyStatics[242]; /* 'coroutine %s started' */
    cpy_r_r18 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__id;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 162, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r18);
CPyL5: ;
    cpy_r_r19 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL424;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 162, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_Unreachable();
CPyL8: ;
    PyObject *cpy_r_r21[2] = {cpy_r_r17, cpy_r_r18};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r22, 2, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 162, CPyStatic_multicall___globals);
        goto CPyL425;
    } else
        goto CPyL426;
CPyL9: ;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r24 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 164, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r24);
CPyL10: ;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 == cpy_r_r25;
    CPy_DECREF_NO_IMM(cpy_r_r24);
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 165, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r27);
CPyL12: ;
    cpy_r_r28 = ((multicall___multicall___MulticallObject *)cpy_r_r27)->_calls;
    CPy_INCREF_NO_IMM(cpy_r_r28);
    CPy_DECREF_NO_IMM(cpy_r_r27);
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 165, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL13: ;
    cpy_r_r30 = CPyStatic_multicall___globals;
    cpy_r_r31 = CPyStatics[20]; /* '_get_semaphore' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r33 = PyObject_Vectorcall(cpy_r_r32, 0, 0, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r34 = CPy_TYPE(cpy_r_r33);
    cpy_r_r35 = CPyStatics[21]; /* '__aexit__' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL427;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL427;
    }
    cpy_r_r38 = CPyStatics[22]; /* '__aenter__' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL428;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r33};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL428;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r33;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL429;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = 1;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL429;
    }
    cpy_r_r45 = CPy_GetCoro(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r47 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__9", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r47);
CPyL24: ;
    cpy_r_r48 = CPyIter_Next(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (cpy_r_r48 != NULL) goto CPyL27;
    cpy_r_r49 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r50 = cpy_r_r49;
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r51;
    cpy_r_r52 = 1;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    } else
        goto CPyL49;
CPyL27: ;
    cpy_r_r53 = cpy_r_r48;
CPyL28: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r53;
CPyL29: ;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_type != cpy_r_r55;
    if (!cpy_r_r56) goto CPyL430;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL33;
    } else
        goto CPyL431;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL44;
CPyL33: ;
    cpy_r_r57 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r57;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL432;
    }
    cpy_r_r59 = (PyObject **)&cpy_r_r1;
    cpy_r_r60 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__9", -1, CPyStatic_multicall___globals);
        goto CPyL432;
    }
    CPy_INCREF(cpy_r_r60);
CPyL35: ;
    cpy_r_r61 = CPy_YieldFromErrorHandle(cpy_r_r60, cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL432;
    }
    if (cpy_r_r61) goto CPyL39;
    cpy_r_r53 = cpy_r_r1;
    cpy_r_r62 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__10", -1, CPyStatic_multicall___globals);
        goto CPyL433;
    }
    CPy_INCREF(cpy_r_r62.f0);
    CPy_INCREF(cpy_r_r62.f1);
    CPy_INCREF(cpy_r_r62.f2);
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    goto CPyL28;
CPyL39: ;
    cpy_r_r50 = cpy_r_r1;
    CPy_DecRef(cpy_r_r50);
    cpy_r_r63 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r63.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__10", -1, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r63.f0);
    CPy_INCREF(cpy_r_r63.f1);
    CPy_INCREF(cpy_r_r63.f2);
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r63);
    CPy_DecRef(cpy_r_r63.f0);
    CPy_DecRef(cpy_r_r63.f1);
    CPy_DecRef(cpy_r_r63.f2);
    goto CPyL49;
CPyL41: ;
    cpy_r_r64 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__10", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    CPy_INCREF(cpy_r_r64.f2);
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r64);
    CPy_DecRef(cpy_r_r64.f0);
    CPy_DecRef(cpy_r_r64.f1);
    CPy_DecRef(cpy_r_r64.f2);
    cpy_r_r65 = CPy_KeepPropagating();
    if (!cpy_r_r65) goto CPyL423;
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r66 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__9", -1, CPyStatic_multicall___globals);
        goto CPyL434;
    }
    CPy_INCREF(cpy_r_r66);
CPyL45: ;
    cpy_r_r67 = CPyIter_Send(cpy_r_r66, cpy_r_arg);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r67 == NULL) goto CPyL47;
    cpy_r_r53 = cpy_r_r67;
    goto CPyL28;
CPyL47: ;
    cpy_r_r68 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r50 = cpy_r_r68;
    CPy_DECREF(cpy_r_r50);
CPyL49: ;
    cpy_r_r69 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 169, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r69);
CPyL50: ;
    cpy_r_r70 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 169, CPyStatic_multicall___globals);
        goto CPyL435;
    }
    CPy_INCREF_NO_IMM(cpy_r_r70);
CPyL51: ;
    cpy_r_r71 = ((multicall___multicall___MulticallObject *)cpy_r_r70)->_require_success;
    CPy_DECREF_NO_IMM(cpy_r_r70);
    cpy_r_r72 = CPyDef_multicall___get_args(cpy_r_r69, cpy_r_r71);
    CPy_DECREF_NO_IMM(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 169, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__args != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__args);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__args = cpy_r_r72;
    cpy_r_r73 = 1;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 169, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r74 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 170, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r74);
CPyL54: ;
    cpy_r_r75 = ((multicall___multicall___MulticallObject *)cpy_r_r74)->_require_success;
    CPy_DECREF_NO_IMM(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 ? Py_True : Py_False;
    cpy_r_r77 = 1 ? Py_True : Py_False;
    cpy_r_r78 = cpy_r_r76 == cpy_r_r77;
    if (!cpy_r_r78) goto CPyL103;
    cpy_r_r79 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r79);
CPyL56: ;
    cpy_r_r80 = CPyDef_multicall___Multicall___aggregate(cpy_r_r79);
    CPy_DECREF_NO_IMM(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL57: ;
    cpy_r_r81 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__args;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "args", 171, CPyStatic_multicall___globals);
        goto CPyL436;
    }
    CPy_INCREF_NO_IMM(cpy_r_r81);
CPyL58: ;
    cpy_r_r82 = CPyStatics[13]; /* 'coroutine' */
    PyObject *cpy_r_r83[2] = {cpy_r_r80, cpy_r_r81};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = PyObject_VectorcallMethod(cpy_r_r82, cpy_r_r84, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL437;
    }
    CPy_DECREF_NO_IMM(cpy_r_r80);
    CPy_DECREF_NO_IMM(cpy_r_r81);
    cpy_r_r86 = CPy_GetCoro(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r86;
    cpy_r_r87 = 1;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r88 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__11", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r88);
CPyL62: ;
    cpy_r_r89 = CPyIter_Next(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (cpy_r_r89 != NULL) goto CPyL65;
    cpy_r_r90 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r91 = cpy_r_r90;
    cpy_r_r92 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r92;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL438;
    } else
        goto CPyL87;
CPyL65: ;
    cpy_r_r94 = cpy_r_r89;
CPyL66: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r94;
CPyL67: ;
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = cpy_r_type != cpy_r_r96;
    if (!cpy_r_r97) goto CPyL439;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL71;
    } else
        goto CPyL440;
CPyL69: ;
    CPy_Unreachable();
CPyL70: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL82;
CPyL71: ;
    cpy_r_r98 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12 = cpy_r_r98;
    cpy_r_r99 = 1;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL441;
    }
    cpy_r_r100 = (PyObject **)&cpy_r_r3;
    cpy_r_r101 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__11", -1, CPyStatic_multicall___globals);
        goto CPyL441;
    }
    CPy_INCREF(cpy_r_r101);
CPyL73: ;
    cpy_r_r102 = CPy_YieldFromErrorHandle(cpy_r_r101, cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL441;
    }
    if (cpy_r_r102) goto CPyL77;
    cpy_r_r94 = cpy_r_r3;
    cpy_r_r103 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r103.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__12", -1, CPyStatic_multicall___globals);
        goto CPyL442;
    }
    CPy_INCREF(cpy_r_r103.f0);
    CPy_INCREF(cpy_r_r103.f1);
    CPy_INCREF(cpy_r_r103.f2);
CPyL76: ;
    CPy_RestoreExcInfo(cpy_r_r103);
    CPy_DecRef(cpy_r_r103.f0);
    CPy_DecRef(cpy_r_r103.f1);
    CPy_DecRef(cpy_r_r103.f2);
    goto CPyL66;
CPyL77: ;
    cpy_r_r91 = cpy_r_r3;
    cpy_r_r104 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r104.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__12", -1, CPyStatic_multicall___globals);
        goto CPyL443;
    }
    CPy_INCREF(cpy_r_r104.f0);
    CPy_INCREF(cpy_r_r104.f1);
    CPy_INCREF(cpy_r_r104.f2);
CPyL78: ;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_DecRef(cpy_r_r104.f0);
    CPy_DecRef(cpy_r_r104.f1);
    CPy_DecRef(cpy_r_r104.f2);
    goto CPyL87;
CPyL79: ;
    cpy_r_r105 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r105.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__12", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_INCREF(cpy_r_r105.f2);
CPyL80: ;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    cpy_r_r106 = CPy_KeepPropagating();
    if (!cpy_r_r106) goto CPyL203;
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r107 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__11", -1, CPyStatic_multicall___globals);
        goto CPyL444;
    }
    CPy_INCREF(cpy_r_r107);
CPyL83: ;
    cpy_r_r108 = CPyIter_Send(cpy_r_r107, cpy_r_arg);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r108 == NULL) goto CPyL85;
    cpy_r_r94 = cpy_r_r108;
    goto CPyL66;
CPyL85: ;
    cpy_r_r109 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r91 = cpy_r_r109;
CPyL87: ;
    cpy_r_r110 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 171, CPyStatic_multicall___globals);
        goto CPyL438;
    }
    CPy_INCREF_NO_IMM(cpy_r_r110);
CPyL88: ;
    cpy_r_r111 = PyObject_GetIter(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL445;
    }
    cpy_r_r112 = PyIter_Next(cpy_r_r111);
    if (cpy_r_r112 == NULL) {
        goto CPyL446;
    } else
        goto CPyL92;
CPyL90: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r113 = 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL92: ;
    if (PyLong_Check(cpy_r_r112))
        cpy_r_r114 = cpy_r_r112;
    else {
        cpy_r_r114 = NULL;
    }
    if (cpy_r_r114 != NULL) goto __LL79;
    if (cpy_r_r112 == Py_None)
        cpy_r_r114 = cpy_r_r112;
    else {
        cpy_r_r114 = NULL;
    }
    if (cpy_r_r114 != NULL) goto __LL79;
    CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals, "int or None", cpy_r_r112);
    goto CPyL447;
__LL79: ;
    CPy_DECREF(((multicall___multicall___MulticallObject *)cpy_r_r110)->_block_id);
    ((multicall___multicall___MulticallObject *)cpy_r_r110)->_block_id = cpy_r_r114;
    CPy_DECREF_NO_IMM(cpy_r_r110);
    cpy_r_r116 = PyIter_Next(cpy_r_r111);
    if (cpy_r_r116 == NULL) {
        goto CPyL448;
    } else
        goto CPyL96;
CPyL94: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r117 = 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL96: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs = cpy_r_r116;
    cpy_r_r118 = 1;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL449;
    }
    cpy_r_r119 = PyIter_Next(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (cpy_r_r119 == NULL) {
        goto CPyL100;
    } else
        goto CPyL450;
CPyL98: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r121 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "outputs", 172, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r121);
CPyL101: ;
    cpy_r_r122 = CPyDef_multicall___unpack_aggregate_outputs(cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 172, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs = cpy_r_r122;
    cpy_r_r123 = 1;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 172, CPyStatic_multicall___globals);
        goto CPyL203;
    } else
        goto CPyL152;
CPyL103: ;
    cpy_r_r124 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r124);
CPyL104: ;
    cpy_r_r125 = CPyDef_multicall___Multicall___aggregate(cpy_r_r124);
    CPy_DECREF_NO_IMM(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL105: ;
    cpy_r_r126 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__args;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "args", 174, CPyStatic_multicall___globals);
        goto CPyL451;
    }
    CPy_INCREF_NO_IMM(cpy_r_r126);
CPyL106: ;
    cpy_r_r127 = CPyStatics[13]; /* 'coroutine' */
    PyObject *cpy_r_r128[2] = {cpy_r_r125, cpy_r_r126};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_VectorcallMethod(cpy_r_r127, cpy_r_r129, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL452;
    }
    CPy_DECREF_NO_IMM(cpy_r_r125);
    CPy_DECREF_NO_IMM(cpy_r_r126);
    cpy_r_r131 = CPy_GetCoro(cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r131;
    cpy_r_r132 = 1;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r133 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__13", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r133);
CPyL110: ;
    cpy_r_r134 = CPyIter_Next(cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    if (cpy_r_r134 != NULL) goto CPyL113;
    cpy_r_r135 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r136 = cpy_r_r135;
    cpy_r_r137 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13 = cpy_r_r137;
    cpy_r_r138 = 1;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL453;
    } else
        goto CPyL135;
CPyL113: ;
    cpy_r_r139 = cpy_r_r134;
CPyL114: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 3;
    return cpy_r_r139;
CPyL115: ;
    cpy_r_r141 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r142 = cpy_r_type != cpy_r_r141;
    if (!cpy_r_r142) goto CPyL454;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL119;
    } else
        goto CPyL455;
CPyL117: ;
    CPy_Unreachable();
CPyL118: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL130;
CPyL119: ;
    cpy_r_r143 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14 = cpy_r_r143;
    cpy_r_r144 = 1;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL456;
    }
    cpy_r_r145 = (PyObject **)&cpy_r_r5;
    cpy_r_r146 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__13", -1, CPyStatic_multicall___globals);
        goto CPyL456;
    }
    CPy_INCREF(cpy_r_r146);
CPyL121: ;
    cpy_r_r147 = CPy_YieldFromErrorHandle(cpy_r_r146, cpy_r_r145);
    CPy_DecRef(cpy_r_r146);
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL456;
    }
    if (cpy_r_r147) goto CPyL125;
    cpy_r_r139 = cpy_r_r5;
    cpy_r_r148 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r148.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__14", -1, CPyStatic_multicall___globals);
        goto CPyL457;
    }
    CPy_INCREF(cpy_r_r148.f0);
    CPy_INCREF(cpy_r_r148.f1);
    CPy_INCREF(cpy_r_r148.f2);
CPyL124: ;
    CPy_RestoreExcInfo(cpy_r_r148);
    CPy_DecRef(cpy_r_r148.f0);
    CPy_DecRef(cpy_r_r148.f1);
    CPy_DecRef(cpy_r_r148.f2);
    goto CPyL114;
CPyL125: ;
    cpy_r_r136 = cpy_r_r5;
    cpy_r_r149 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r149.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__14", -1, CPyStatic_multicall___globals);
        goto CPyL458;
    }
    CPy_INCREF(cpy_r_r149.f0);
    CPy_INCREF(cpy_r_r149.f1);
    CPy_INCREF(cpy_r_r149.f2);
CPyL126: ;
    CPy_RestoreExcInfo(cpy_r_r149);
    CPy_DecRef(cpy_r_r149.f0);
    CPy_DecRef(cpy_r_r149.f1);
    CPy_DecRef(cpy_r_r149.f2);
    goto CPyL135;
CPyL127: ;
    cpy_r_r150 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r150.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__14", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r150.f0);
    CPy_INCREF(cpy_r_r150.f1);
    CPy_INCREF(cpy_r_r150.f2);
CPyL128: ;
    CPy_RestoreExcInfo(cpy_r_r150);
    CPy_DecRef(cpy_r_r150.f0);
    CPy_DecRef(cpy_r_r150.f1);
    CPy_DecRef(cpy_r_r150.f2);
    cpy_r_r151 = CPy_KeepPropagating();
    if (!cpy_r_r151) goto CPyL203;
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r152 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__13", -1, CPyStatic_multicall___globals);
        goto CPyL459;
    }
    CPy_INCREF(cpy_r_r152);
CPyL131: ;
    cpy_r_r153 = CPyIter_Send(cpy_r_r152, cpy_r_arg);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r153 == NULL) goto CPyL133;
    cpy_r_r139 = cpy_r_r153;
    goto CPyL114;
CPyL133: ;
    cpy_r_r154 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r136 = cpy_r_r154;
CPyL135: ;
    cpy_r_r155 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 174, CPyStatic_multicall___globals);
        goto CPyL453;
    }
    CPy_INCREF_NO_IMM(cpy_r_r155);
CPyL136: ;
    cpy_r_r156 = PyObject_GetIter(cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL460;
    }
    cpy_r_r157 = PyIter_Next(cpy_r_r156);
    if (cpy_r_r157 == NULL) {
        goto CPyL461;
    } else
        goto CPyL140;
CPyL138: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r158 = 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL140: ;
    if (PyLong_Check(cpy_r_r157))
        cpy_r_r159 = cpy_r_r157;
    else {
        cpy_r_r159 = NULL;
    }
    if (cpy_r_r159 != NULL) goto __LL80;
    if (cpy_r_r157 == Py_None)
        cpy_r_r159 = cpy_r_r157;
    else {
        cpy_r_r159 = NULL;
    }
    if (cpy_r_r159 != NULL) goto __LL80;
    CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals, "int or None", cpy_r_r157);
    goto CPyL462;
__LL80: ;
    CPy_DECREF(((multicall___multicall___MulticallObject *)cpy_r_r155)->_block_id);
    ((multicall___multicall___MulticallObject *)cpy_r_r155)->_block_id = cpy_r_r159;
    CPy_DECREF_NO_IMM(cpy_r_r155);
    cpy_r_r161 = PyIter_Next(cpy_r_r156);
    if (cpy_r_r161 == NULL) {
        goto CPyL463;
    } else
        goto CPyL144;
CPyL142: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r162 = 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL144: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute___ = cpy_r_r161;
    cpy_r_r163 = 1;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL464;
    }
    cpy_r_r164 = PyIter_Next(cpy_r_r156);
    if (cpy_r_r164 == NULL) {
        goto CPyL465;
    } else
        goto CPyL148;
CPyL146: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r165 = 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL148: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs = cpy_r_r164;
    cpy_r_r166 = 1;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL464;
    }
    cpy_r_r167 = PyIter_Next(cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    if (cpy_r_r167 == NULL) {
        goto CPyL152;
    } else
        goto CPyL466;
CPyL150: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r168 = 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL152: ;
    cpy_r_r169 = PyList_New(0);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15 = cpy_r_r169;
    cpy_r_r170 = 1;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r171 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls;
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 177, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r171);
CPyL155: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16 = cpy_r_r171;
    cpy_r_r172 = 1;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17 = 0;
    cpy_r_r173 = 1;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r174 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "outputs", 177, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r174);
CPyL158: ;
    cpy_r_r175 = PyObject_GetIter(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL467;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 = cpy_r_r174;
    cpy_r_r176 = 1;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL468;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19 = cpy_r_r175;
    cpy_r_r177 = 1;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL161: ;
    cpy_r_r178 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16;
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__16", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r178);
CPyL162: ;
    cpy_r_r179 = (CPyPtr)&((PyVarObject *)cpy_r_r178)->ob_size;
    cpy_r_r180 = *(int64_t *)cpy_r_r179;
    CPy_DECREF_NO_IMM(cpy_r_r178);
    cpy_r_r181 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r181 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__17", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL163: ;
    cpy_r_r182 = cpy_r_r181 < cpy_r_r180;
    if (!cpy_r_r182) goto CPyL192;
    cpy_r_r183 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__19", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r183);
CPyL165: ;
    cpy_r_r184 = PyIter_Next(cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    if (cpy_r_r184 == NULL) goto CPyL192;
    cpy_r_r185 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16;
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__16", 175, CPyStatic_multicall___globals);
        goto CPyL469;
    }
    CPy_INCREF_NO_IMM(cpy_r_r185);
CPyL167: ;
    cpy_r_r186 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r186 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__17", 175, CPyStatic_multicall___globals);
        goto CPyL470;
    }
CPyL168: ;
    cpy_r_r187 = (CPyPtr)&((PyListObject *)cpy_r_r185)->ob_item;
    cpy_r_r188 = *(CPyPtr *)cpy_r_r187;
    cpy_r_r189 = cpy_r_r186 * 8;
    cpy_r_r190 = cpy_r_r188 + cpy_r_r189;
    cpy_r_r191 = *(PyObject * *)cpy_r_r190;
    CPy_INCREF(cpy_r_r191);
    CPy_DECREF_NO_IMM(cpy_r_r185);
    if (likely(Py_TYPE(cpy_r_r191) == CPyType_call___Call))
        cpy_r_r192 = cpy_r_r191;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals, "multicall.call.Call", cpy_r_r191);
        goto CPyL469;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__call != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__call);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__call = cpy_r_r192;
    cpy_r_r193 = 1;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL469;
    }
    cpy_r_r194 = PyObject_GetIter(cpy_r_r184);
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r195 = PyIter_Next(cpy_r_r194);
    if (cpy_r_r195 == NULL) {
        goto CPyL471;
    } else
        goto CPyL174;
CPyL172: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r196 = 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL174: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__success != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__success);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__success = cpy_r_r195;
    cpy_r_r197 = 1;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL472;
    }
    cpy_r_r198 = PyIter_Next(cpy_r_r194);
    if (cpy_r_r198 == NULL) {
        goto CPyL473;
    } else
        goto CPyL178;
CPyL176: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r199 = 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL178: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output = cpy_r_r198;
    cpy_r_r200 = 1;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL472;
    }
    cpy_r_r201 = PyIter_Next(cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (cpy_r_r201 == NULL) {
        goto CPyL182;
    } else
        goto CPyL474;
CPyL180: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r202 = 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL182: ;
    cpy_r_r203 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__output;
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "output", 176, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r203);
CPyL183: ;
    cpy_r_r204 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__call;
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "call", 176, CPyStatic_multicall___globals);
        goto CPyL475;
    }
    CPy_INCREF_NO_IMM(cpy_r_r204);
CPyL184: ;
    cpy_r_r205 = ((multicall___call___CallObject *)cpy_r_r204)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r205);
    CPy_DECREF_NO_IMM(cpy_r_r204);
    cpy_r_r206 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__call;
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "call", 176, CPyStatic_multicall___globals);
        goto CPyL476;
    }
    CPy_INCREF_NO_IMM(cpy_r_r206);
CPyL185: ;
    cpy_r_r207 = ((multicall___call___CallObject *)cpy_r_r206)->_returns;
    CPy_INCREF(cpy_r_r207);
    CPy_DECREF_NO_IMM(cpy_r_r206);
    cpy_r_r208 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__success;
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "success", 176, CPyStatic_multicall___globals);
        goto CPyL477;
    }
    CPy_INCREF(cpy_r_r208);
CPyL186: ;
    if (PyBool_Check(cpy_r_r208))
        cpy_r_r209 = cpy_r_r208;
    else {
        cpy_r_r209 = NULL;
    }
    if (cpy_r_r209 != NULL) goto __LL81;
    if (cpy_r_r208 == Py_None)
        cpy_r_r209 = cpy_r_r208;
    else {
        cpy_r_r209 = NULL;
    }
    if (cpy_r_r209 != NULL) goto __LL81;
    CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 176, CPyStatic_multicall___globals, "bool or None", cpy_r_r208);
    goto CPyL477;
__LL81: ;
    cpy_r_r210 = CPyDef_call___Call___decode_output(cpy_r_r203, cpy_r_r205, cpy_r_r207, cpy_r_r209);
    CPy_DECREF(cpy_r_r203);
    CPy_DECREF_NO_IMM(cpy_r_r205);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 176, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r211 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15;
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__15", -1, CPyStatic_multicall___globals);
        goto CPyL478;
    }
    CPy_INCREF_NO_IMM(cpy_r_r211);
CPyL189: ;
    cpy_r_r212 = PyList_Append(cpy_r_r211, cpy_r_r210);
    CPy_DECREF_NO_IMM(cpy_r_r211);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r214 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r214 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__17", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL191: ;
    cpy_r_r215 = cpy_r_r214 + 1;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17 = cpy_r_r215;
    cpy_r_r216 = 1;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    } else
        goto CPyL161;
CPyL192: ;
    cpy_r_r217 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r218 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15;
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__15", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r218);
CPyL194: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs = cpy_r_r218;
    cpy_r_r219 = 1;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r220 = CPyStatics[243]; /* 'coroutine %s finished' */
    cpy_r_r221 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__id;
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 179, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r221);
CPyL196: ;
    cpy_r_r222 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r222 == NULL)) {
        goto CPyL479;
    } else
        goto CPyL199;
CPyL197: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r223 = 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 179, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL199: ;
    PyObject *cpy_r_r224[2] = {cpy_r_r220, cpy_r_r221};
    cpy_r_r225 = (PyObject **)&cpy_r_r224;
    cpy_r_r226 = PyObject_Vectorcall(cpy_r_r222, cpy_r_r225, 2, 0);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 179, CPyStatic_multicall___globals);
        goto CPyL480;
    } else
        goto CPyL481;
CPyL200: ;
    CPy_DECREF(cpy_r_r221);
    cpy_r_r227 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__outputs;
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "outputs", 180, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r227);
CPyL201: ;
    if (likely(PyList_Check(cpy_r_r227)))
        cpy_r_r228 = cpy_r_r227;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 180, CPyStatic_multicall___globals, "list", cpy_r_r227);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r228;
    cpy_r_r229 = 1;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 180, CPyStatic_multicall___globals);
    } else
        goto CPyL261;
CPyL203: ;
    cpy_r_r230 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21 = cpy_r_r230;
    cpy_r_r231 = 1;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    cpy_r_r232 = CPyModule_builtins;
    cpy_r_r233 = CPyStatics[208]; /* 'Exception' */
    cpy_r_r234 = CPyObject_GetAttr(cpy_r_r232, cpy_r_r233);
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 181, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    cpy_r_r235 = CPy_ExceptionMatches(cpy_r_r234);
    CPy_DecRef(cpy_r_r234);
    if (!cpy_r_r235) goto CPyL211;
    cpy_r_r236 = CPy_GetExcValue();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e = cpy_r_r236;
    cpy_r_r237 = 1;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 181, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    cpy_r_r238 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__e;
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "e", 182, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    CPy_INCREF(cpy_r_r238);
CPyL208: ;
    cpy_r_r239 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls;
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 182, CPyStatic_multicall___globals);
        goto CPyL482;
    }
    CPy_INCREF_NO_IMM(cpy_r_r239);
CPyL209: ;
    cpy_r_r240 = (CPyPtr)&((PyVarObject *)cpy_r_r239)->ob_size;
    cpy_r_r241 = *(int64_t *)cpy_r_r240;
    CPy_DecRef(cpy_r_r239);
    cpy_r_r242 = cpy_r_r241 << 1;
    cpy_r_r243 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__ConnErr_retries;
    if (unlikely(cpy_r_r243 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "ConnErr_retries", 182, CPyStatic_multicall___globals);
        goto CPyL482;
    }
    CPyTagged_INCREF(cpy_r_r243);
CPyL210: ;
    cpy_r_r244 = CPyDef_multicall____raise_or_proceed(cpy_r_r238, cpy_r_r242, cpy_r_r243);
    CPy_DecRef(cpy_r_r238);
    CPyTagged_DecRef(cpy_r_r243);
    if (unlikely(cpy_r_r244 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 182, CPyStatic_multicall___globals);
        goto CPyL215;
    } else
        goto CPyL213;
CPyL211: ;
    CPy_Reraise();
    if (!0) goto CPyL215;
    CPy_Unreachable();
CPyL213: ;
    cpy_r_r245 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21;
    if (unlikely(cpy_r_r245.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__21", -1, CPyStatic_multicall___globals);
        goto CPyL218;
    }
    CPy_INCREF(cpy_r_r245.f0);
    CPy_INCREF(cpy_r_r245.f1);
    CPy_INCREF(cpy_r_r245.f2);
CPyL214: ;
    CPy_RestoreExcInfo(cpy_r_r245);
    CPy_DecRef(cpy_r_r245.f0);
    CPy_DecRef(cpy_r_r245.f1);
    CPy_DecRef(cpy_r_r245.f2);
    goto CPyL260;
CPyL215: ;
    cpy_r_r246 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21;
    if (unlikely(cpy_r_r246.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__21", -1, CPyStatic_multicall___globals);
        goto CPyL218;
    }
    CPy_INCREF(cpy_r_r246.f0);
    CPy_INCREF(cpy_r_r246.f1);
    CPy_INCREF(cpy_r_r246.f2);
CPyL216: ;
    CPy_RestoreExcInfo(cpy_r_r246);
    CPy_DecRef(cpy_r_r246.f0);
    CPy_DecRef(cpy_r_r246.f1);
    CPy_DecRef(cpy_r_r246.f2);
    cpy_r_r247 = CPy_KeepPropagating();
    if (!cpy_r_r247) goto CPyL218;
    CPy_Unreachable();
CPyL218: ;
    cpy_r_r248 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22 = cpy_r_r248;
    cpy_r_r249 = 1;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = 0;
    cpy_r_r250 = 1;
    if (unlikely(!cpy_r_r250)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r251 = CPy_GetExcInfo();
    cpy_r_r252 = cpy_r_r251.f0;
    CPy_INCREF(cpy_r_r252);
    cpy_r_r253 = cpy_r_r251.f1;
    CPy_INCREF(cpy_r_r253);
    cpy_r_r254 = cpy_r_r251.f2;
    CPy_INCREF(cpy_r_r254);
    CPy_DecRef(cpy_r_r251.f0);
    CPy_DecRef(cpy_r_r251.f1);
    CPy_DecRef(cpy_r_r251.f2);
    cpy_r_r255 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__6", -1, CPyStatic_multicall___globals);
        goto CPyL483;
    }
    CPy_INCREF(cpy_r_r255);
CPyL221: ;
    cpy_r_r256 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__7", -1, CPyStatic_multicall___globals);
        goto CPyL484;
    }
    CPy_INCREF(cpy_r_r256);
CPyL222: ;
    PyObject *cpy_r_r257[4] = {cpy_r_r256, cpy_r_r252, cpy_r_r253, cpy_r_r254};
    cpy_r_r258 = (PyObject **)&cpy_r_r257;
    cpy_r_r259 = PyObject_Vectorcall(cpy_r_r255, cpy_r_r258, 4, 0);
    CPy_DecRef(cpy_r_r255);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL485;
    }
    CPy_DecRef(cpy_r_r256);
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r254);
    cpy_r_r260 = CPy_GetCoro(cpy_r_r259);
    CPy_DecRef(cpy_r_r259);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 = cpy_r_r260;
    cpy_r_r261 = 1;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r262 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23;
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__23", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    CPy_INCREF(cpy_r_r262);
CPyL226: ;
    cpy_r_r263 = CPyIter_Next(cpy_r_r262);
    CPy_DecRef(cpy_r_r262);
    if (cpy_r_r263 != NULL) goto CPyL229;
    cpy_r_r264 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r265 = cpy_r_r264;
    cpy_r_r266 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 = cpy_r_r266;
    cpy_r_r267 = 1;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL486;
    } else
        goto CPyL251;
CPyL229: ;
    cpy_r_r268 = cpy_r_r263;
CPyL230: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 4;
    return cpy_r_r268;
CPyL231: ;
    cpy_r_r270 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r271 = cpy_r_type != cpy_r_r270;
    if (!cpy_r_r271) goto CPyL487;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL235;
    } else
        goto CPyL488;
CPyL233: ;
    CPy_Unreachable();
CPyL234: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL246;
CPyL235: ;
    cpy_r_r272 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24 = cpy_r_r272;
    cpy_r_r273 = 1;
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL489;
    }
    cpy_r_r274 = (PyObject **)&cpy_r_r7;
    cpy_r_r275 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23;
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__23", -1, CPyStatic_multicall___globals);
        goto CPyL489;
    }
    CPy_INCREF(cpy_r_r275);
CPyL237: ;
    cpy_r_r276 = CPy_YieldFromErrorHandle(cpy_r_r275, cpy_r_r274);
    CPy_DecRef(cpy_r_r275);
    if (unlikely(cpy_r_r276 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL489;
    }
    if (cpy_r_r276) goto CPyL241;
    cpy_r_r268 = cpy_r_r7;
    cpy_r_r277 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24;
    if (unlikely(cpy_r_r277.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__24", -1, CPyStatic_multicall___globals);
        goto CPyL490;
    }
    CPy_INCREF(cpy_r_r277.f0);
    CPy_INCREF(cpy_r_r277.f1);
    CPy_INCREF(cpy_r_r277.f2);
CPyL240: ;
    CPy_RestoreExcInfo(cpy_r_r277);
    CPy_DecRef(cpy_r_r277.f0);
    CPy_DecRef(cpy_r_r277.f1);
    CPy_DecRef(cpy_r_r277.f2);
    goto CPyL230;
CPyL241: ;
    cpy_r_r265 = cpy_r_r7;
    cpy_r_r278 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24;
    if (unlikely(cpy_r_r278.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__24", -1, CPyStatic_multicall___globals);
        goto CPyL491;
    }
    CPy_INCREF(cpy_r_r278.f0);
    CPy_INCREF(cpy_r_r278.f1);
    CPy_INCREF(cpy_r_r278.f2);
CPyL242: ;
    CPy_RestoreExcInfo(cpy_r_r278);
    CPy_DecRef(cpy_r_r278.f0);
    CPy_DecRef(cpy_r_r278.f1);
    CPy_DecRef(cpy_r_r278.f2);
    goto CPyL251;
CPyL243: ;
    cpy_r_r279 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24;
    if (unlikely(cpy_r_r279.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__24", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    CPy_INCREF(cpy_r_r279.f0);
    CPy_INCREF(cpy_r_r279.f1);
    CPy_INCREF(cpy_r_r279.f2);
CPyL244: ;
    CPy_RestoreExcInfo(cpy_r_r279);
    CPy_DecRef(cpy_r_r279.f0);
    CPy_DecRef(cpy_r_r279.f1);
    CPy_DecRef(cpy_r_r279.f2);
    cpy_r_r280 = CPy_KeepPropagating();
    if (!cpy_r_r280) goto CPyL257;
    CPy_Unreachable();
CPyL246: ;
    cpy_r_r281 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23;
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__23", -1, CPyStatic_multicall___globals);
        goto CPyL492;
    }
    CPy_INCREF(cpy_r_r281);
CPyL247: ;
    cpy_r_r282 = CPyIter_Send(cpy_r_r281, cpy_r_arg);
    CPy_DECREF(cpy_r_r281);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r282 == NULL) goto CPyL249;
    cpy_r_r268 = cpy_r_r282;
    goto CPyL230;
CPyL249: ;
    cpy_r_r283 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r265 = cpy_r_r283;
CPyL251: ;
    cpy_r_r284 = PyObject_IsTrue(cpy_r_r265);
    CPy_DECREF(cpy_r_r265);
    cpy_r_r285 = cpy_r_r284 >= 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r286 = cpy_r_r284;
    if (cpy_r_r286) goto CPyL255;
    CPy_Reraise();
    if (!0) goto CPyL257;
    CPy_Unreachable();
CPyL255: ;
    cpy_r_r287 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22;
    if (unlikely(cpy_r_r287.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__22", -1, CPyStatic_multicall___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r287.f0);
    CPy_INCREF(cpy_r_r287.f1);
    CPy_INCREF(cpy_r_r287.f2);
CPyL256: ;
    CPy_RestoreExcInfo(cpy_r_r287);
    CPy_DECREF(cpy_r_r287.f0);
    CPy_DECREF(cpy_r_r287.f1);
    CPy_DECREF(cpy_r_r287.f2);
    goto CPyL260;
CPyL257: ;
    cpy_r_r288 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22;
    if (unlikely(cpy_r_r288.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__22", -1, CPyStatic_multicall___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r288.f0);
    CPy_INCREF(cpy_r_r288.f1);
    CPy_INCREF(cpy_r_r288.f2);
CPyL258: ;
    CPy_RestoreExcInfo(cpy_r_r288);
    CPy_DECREF(cpy_r_r288.f0);
    CPy_DECREF(cpy_r_r288.f1);
    CPy_DECREF(cpy_r_r288.f2);
    cpy_r_r289 = CPy_KeepPropagating();
    if (!cpy_r_r289) goto CPyL262;
    CPy_Unreachable();
CPyL260: ;
    cpy_r_r290 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r290;
    cpy_r_r291 = 1;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL261: ;
    tuple_T3OOO __tmp82 = { NULL, NULL, NULL };
    cpy_r_r292 = __tmp82;
    cpy_r_r11 = cpy_r_r292;
    goto CPyL264;
CPyL262: ;
    cpy_r_r293 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r293;
    cpy_r_r294 = 1;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r295 = CPy_CatchError();
    cpy_r_r11 = cpy_r_r295;
CPyL264: ;
    cpy_r_r296 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r296 == 2)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__8", -1, CPyStatic_multicall___globals);
        goto CPyL306;
    }
CPyL265: ;
    if (!cpy_r_r296) goto CPyL297;
CPyL266: ;
    cpy_r_r297 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r298 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__6", -1, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    CPy_INCREF(cpy_r_r298);
CPyL267: ;
    cpy_r_r299 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__7", -1, CPyStatic_multicall___globals);
        goto CPyL493;
    }
    CPy_INCREF(cpy_r_r299);
CPyL268: ;
    PyObject *cpy_r_r300[4] = {cpy_r_r299, cpy_r_r297, cpy_r_r297, cpy_r_r297};
    cpy_r_r301 = (PyObject **)&cpy_r_r300;
    cpy_r_r302 = PyObject_Vectorcall(cpy_r_r298, cpy_r_r301, 4, 0);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(cpy_r_r302 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL494;
    }
    CPy_DECREF(cpy_r_r299);
    cpy_r_r303 = CPy_GetCoro(cpy_r_r302);
    CPy_DECREF(cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 = cpy_r_r303;
    cpy_r_r304 = 1;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    cpy_r_r305 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25;
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__25", -1, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    CPy_INCREF(cpy_r_r305);
CPyL272: ;
    cpy_r_r306 = CPyIter_Next(cpy_r_r305);
    CPy_DECREF(cpy_r_r305);
    if (cpy_r_r306 != NULL) goto CPyL495;
    cpy_r_r307 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    cpy_r_r308 = cpy_r_r307;
    CPy_DECREF(cpy_r_r308);
    cpy_r_r309 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 = cpy_r_r309;
    cpy_r_r310 = 1;
    if (unlikely(!cpy_r_r310)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL306;
    } else
        goto CPyL297;
CPyL275: ;
    cpy_r_r311 = cpy_r_r306;
CPyL276: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 5;
    return cpy_r_r311;
CPyL277: ;
    cpy_r_r313 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r314 = cpy_r_type != cpy_r_r313;
    if (!cpy_r_r314) goto CPyL496;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL281;
    } else
        goto CPyL497;
CPyL279: ;
    CPy_Unreachable();
CPyL280: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL292;
CPyL281: ;
    cpy_r_r315 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26 = cpy_r_r315;
    cpy_r_r316 = 1;
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL498;
    }
    cpy_r_r317 = (PyObject **)&cpy_r_r9;
    cpy_r_r318 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25;
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__25", -1, CPyStatic_multicall___globals);
        goto CPyL498;
    }
    CPy_INCREF(cpy_r_r318);
CPyL283: ;
    cpy_r_r319 = CPy_YieldFromErrorHandle(cpy_r_r318, cpy_r_r317);
    CPy_DecRef(cpy_r_r318);
    if (unlikely(cpy_r_r319 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL498;
    }
    if (cpy_r_r319) goto CPyL287;
    cpy_r_r311 = cpy_r_r9;
    cpy_r_r320 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26;
    if (unlikely(cpy_r_r320.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__26", -1, CPyStatic_multicall___globals);
        goto CPyL499;
    }
    CPy_INCREF(cpy_r_r320.f0);
    CPy_INCREF(cpy_r_r320.f1);
    CPy_INCREF(cpy_r_r320.f2);
    goto CPyL500;
CPyL286: ;
    CPy_RestoreExcInfo(cpy_r_r320);
    CPy_DecRef(cpy_r_r320.f0);
    CPy_DecRef(cpy_r_r320.f1);
    CPy_DecRef(cpy_r_r320.f2);
    goto CPyL276;
CPyL287: ;
    cpy_r_r308 = cpy_r_r9;
    CPy_DecRef(cpy_r_r308);
    cpy_r_r321 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26;
    if (unlikely(cpy_r_r321.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__26", -1, CPyStatic_multicall___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r321.f0);
    CPy_INCREF(cpy_r_r321.f1);
    CPy_INCREF(cpy_r_r321.f2);
CPyL288: ;
    CPy_RestoreExcInfo(cpy_r_r321);
    CPy_DecRef(cpy_r_r321.f0);
    CPy_DecRef(cpy_r_r321.f1);
    CPy_DecRef(cpy_r_r321.f2);
    goto CPyL297;
CPyL289: ;
    cpy_r_r322 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26;
    if (unlikely(cpy_r_r322.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__26", -1, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    CPy_INCREF(cpy_r_r322.f0);
    CPy_INCREF(cpy_r_r322.f1);
    CPy_INCREF(cpy_r_r322.f2);
CPyL290: ;
    CPy_RestoreExcInfo(cpy_r_r322);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r322.f2);
    cpy_r_r323 = CPy_KeepPropagating();
    if (!cpy_r_r323) {
        goto CPyL306;
    } else
        goto CPyL501;
CPyL291: ;
    CPy_Unreachable();
CPyL292: ;
    cpy_r_r324 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25;
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__25", -1, CPyStatic_multicall___globals);
        goto CPyL502;
    }
    CPy_INCREF(cpy_r_r324);
CPyL293: ;
    cpy_r_r325 = CPyIter_Send(cpy_r_r324, cpy_r_arg);
    CPy_DECREF(cpy_r_r324);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r325 == NULL) {
        goto CPyL295;
    } else
        goto CPyL503;
CPyL294: ;
    cpy_r_r311 = cpy_r_r325;
    goto CPyL276;
CPyL295: ;
    cpy_r_r326 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL306;
    }
    cpy_r_r308 = cpy_r_r326;
    CPy_DECREF(cpy_r_r308);
CPyL297: ;
    if (cpy_r_r11.f0 == NULL) goto CPyL300;
    CPy_Reraise();
    if (!0) {
        goto CPyL306;
    } else
        goto CPyL504;
CPyL299: ;
    CPy_Unreachable();
CPyL300: ;
    cpy_r_r327 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20;
    if (cpy_r_r327 != NULL) {
        CPy_INCREF(cpy_r_r327);
    }
    if (cpy_r_r327 == NULL) goto CPyL310;
CPyL301: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL305;
    CPyGen_SetStopIterationValue(cpy_r_r327);
    CPy_DECREF(cpy_r_r327);
    if (!0) goto CPyL423;
    CPy_Unreachable();
CPyL305: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r327;
    return 0;
CPyL306: ;
    if (cpy_r_r11.f0 == NULL) goto CPyL308;
    CPy_RestoreExcInfo(cpy_r_r11);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
CPyL308: ;
    cpy_r_r329 = CPy_KeepPropagating();
    if (!cpy_r_r329) goto CPyL423;
    CPy_Unreachable();
CPyL310: ;
    cpy_r_r330 = PyList_New(0);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27 = cpy_r_r330;
    cpy_r_r331 = 1;
    if (unlikely(!cpy_r_r331)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28 = 0;
    cpy_r_r332 = 1;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r333 = CPyStatic_multicall___batcher;
    if (likely(cpy_r_r333 != NULL)) goto CPyL316;
    PyErr_SetString(PyExc_NameError, "value for final name \"batcher\" was not set");
    cpy_r_r334 = 0;
    if (unlikely(!cpy_r_r334)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 188, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_Unreachable();
CPyL316: ;
    cpy_r_r335 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__calls;
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 188, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r335);
CPyL317: ;
    cpy_r_r336 = CPyDef_multicall___NotSoBrightBatcher___rebatch(cpy_r_r333, cpy_r_r335);
    CPy_DECREF_NO_IMM(cpy_r_r335);
    if (unlikely(cpy_r_r336 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 188, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r337 = PyObject_GetIter(cpy_r_r336);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL505;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__29 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__29);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__29 = cpy_r_r336;
    cpy_r_r338 = 1;
    if (unlikely(!cpy_r_r338)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL506;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30 = cpy_r_r337;
    cpy_r_r339 = 1;
    if (unlikely(!cpy_r_r339)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL321: ;
    cpy_r_r340 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30;
    if (unlikely(cpy_r_r340 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__30", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r340);
CPyL322: ;
    cpy_r_r341 = PyIter_Next(cpy_r_r340);
    CPy_DECREF(cpy_r_r340);
    if (cpy_r_r341 == NULL) goto CPyL339;
    cpy_r_r342 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28;
    if (unlikely(cpy_r_r342 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__28", -1, CPyStatic_multicall___globals);
        goto CPyL507;
    }
CPyL324: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i != CPY_INT_TAG) {
        CPyTagged_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i = cpy_r_r342;
    cpy_r_r343 = 1;
    if (unlikely(!cpy_r_r343)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL507;
    }
    if (likely(PyList_Check(cpy_r_r341)))
        cpy_r_r344 = cpy_r_r341;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals, "list", cpy_r_r341);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk = cpy_r_r344;
    cpy_r_r345 = 1;
    if (unlikely(!cpy_r_r345)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r346 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 187, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r346);
CPyL328: ;
    cpy_r_r347 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk;
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "chunk", 187, CPyStatic_multicall___globals);
        goto CPyL508;
    }
    CPy_INCREF_NO_IMM(cpy_r_r347);
CPyL329: ;
    cpy_r_r348 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__ConnErr_retries;
    if (unlikely(cpy_r_r348 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "ConnErr_retries", 187, CPyStatic_multicall___globals);
        goto CPyL509;
    }
    CPyTagged_INCREF(cpy_r_r348);
CPyL330: ;
    cpy_r_r349 = CPyTagged_Add(cpy_r_r348, 2);
    CPyTagged_DECREF(cpy_r_r348);
    cpy_r_r350 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__id;
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 187, CPyStatic_multicall___globals);
        goto CPyL510;
    }
    CPy_INCREF(cpy_r_r350);
CPyL331: ;
    cpy_r_r351 = CPyStatics[244]; /* '_' */
    cpy_r_r352 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__i;
    if (unlikely(cpy_r_r352 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "i", 187, CPyStatic_multicall___globals);
        goto CPyL511;
    }
    CPyTagged_INCREF(cpy_r_r352);
CPyL332: ;
    cpy_r_r353 = CPyTagged_Str(cpy_r_r352);
    CPyTagged_DECREF(cpy_r_r352);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 187, CPyStatic_multicall___globals);
        goto CPyL511;
    }
    cpy_r_r354 = CPyStr_Build(3, cpy_r_r350, cpy_r_r351, cpy_r_r353);
    CPy_DECREF(cpy_r_r350);
    CPy_DECREF(cpy_r_r353);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 187, CPyStatic_multicall___globals);
        goto CPyL510;
    }
    cpy_r_r355 = CPyDef_multicall___Multicall___fetch_outputs(cpy_r_r346, cpy_r_r347, cpy_r_r349, cpy_r_r354);
    CPy_DECREF_NO_IMM(cpy_r_r347);
    CPyTagged_DECREF(cpy_r_r349);
    CPy_DECREF(cpy_r_r354);
    CPy_DECREF_NO_IMM(cpy_r_r346);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 187, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r356 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27;
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__27", -1, CPyStatic_multicall___globals);
        goto CPyL512;
    }
    CPy_INCREF_NO_IMM(cpy_r_r356);
CPyL336: ;
    cpy_r_r357 = PyList_Append(cpy_r_r356, cpy_r_r355);
    CPy_DECREF_NO_IMM(cpy_r_r356);
    CPy_DECREF_NO_IMM(cpy_r_r355);
    cpy_r_r358 = cpy_r_r357 >= 0;
    if (unlikely(!cpy_r_r358)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r359 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28;
    if (unlikely(cpy_r_r359 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__28", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL338: ;
    cpy_r_r360 = cpy_r_r359 + 2;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28 = cpy_r_r360;
    cpy_r_r361 = 1;
    if (unlikely(!cpy_r_r361)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    } else
        goto CPyL321;
CPyL339: ;
    cpy_r_r362 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r362)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r363 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27;
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__27", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r363);
CPyL341: ;
    cpy_r_r364 = PyObject_GetIter(cpy_r_r363);
    CPy_DECREF_NO_IMM(cpy_r_r363);
    if (unlikely(cpy_r_r364 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r365 = CPyStatic_multicall___globals;
    cpy_r_r366 = CPyStatics[222]; /* 'gather' */
    cpy_r_r367 = CPyDict_GetItem(cpy_r_r365, cpy_r_r366);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL513;
    }
    PyObject *cpy_r_r368[1] = {cpy_r_r364};
    cpy_r_r369 = (PyObject **)&cpy_r_r368;
    cpy_r_r370 = PyObject_Vectorcall(cpy_r_r367, cpy_r_r369, 1, 0);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL513;
    }
    CPy_DECREF(cpy_r_r364);
    cpy_r_r371 = CPy_GetCoro(cpy_r_r370);
    CPy_DECREF(cpy_r_r370);
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 = cpy_r_r371;
    cpy_r_r372 = 1;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r373 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31;
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__31", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r373);
CPyL347: ;
    cpy_r_r374 = CPyIter_Next(cpy_r_r373);
    CPy_DECREF(cpy_r_r373);
    if (cpy_r_r374 != NULL) goto CPyL350;
    cpy_r_r375 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r376 = cpy_r_r375;
    cpy_r_r377 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 = cpy_r_r377;
    cpy_r_r378 = 1;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL514;
    } else
        goto CPyL372;
CPyL350: ;
    cpy_r_r379 = cpy_r_r374;
CPyL351: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 6;
    return cpy_r_r379;
CPyL352: ;
    cpy_r_r381 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r382 = cpy_r_type != cpy_r_r381;
    if (!cpy_r_r382) goto CPyL515;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL356;
    } else
        goto CPyL516;
CPyL354: ;
    CPy_Unreachable();
CPyL355: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL367;
CPyL356: ;
    cpy_r_r383 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32 = cpy_r_r383;
    cpy_r_r384 = 1;
    if (unlikely(!cpy_r_r384)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL517;
    }
    cpy_r_r385 = (PyObject **)&cpy_r_r13;
    cpy_r_r386 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31;
    if (unlikely(cpy_r_r386 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__31", -1, CPyStatic_multicall___globals);
        goto CPyL517;
    }
    CPy_INCREF(cpy_r_r386);
CPyL358: ;
    cpy_r_r387 = CPy_YieldFromErrorHandle(cpy_r_r386, cpy_r_r385);
    CPy_DecRef(cpy_r_r386);
    if (unlikely(cpy_r_r387 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL517;
    }
    if (cpy_r_r387) goto CPyL362;
    cpy_r_r379 = cpy_r_r13;
    cpy_r_r388 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32;
    if (unlikely(cpy_r_r388.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__32", -1, CPyStatic_multicall___globals);
        goto CPyL518;
    }
    CPy_INCREF(cpy_r_r388.f0);
    CPy_INCREF(cpy_r_r388.f1);
    CPy_INCREF(cpy_r_r388.f2);
CPyL361: ;
    CPy_RestoreExcInfo(cpy_r_r388);
    CPy_DecRef(cpy_r_r388.f0);
    CPy_DecRef(cpy_r_r388.f1);
    CPy_DecRef(cpy_r_r388.f2);
    goto CPyL351;
CPyL362: ;
    cpy_r_r376 = cpy_r_r13;
    cpy_r_r389 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32;
    if (unlikely(cpy_r_r389.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__32", -1, CPyStatic_multicall___globals);
        goto CPyL519;
    }
    CPy_INCREF(cpy_r_r389.f0);
    CPy_INCREF(cpy_r_r389.f1);
    CPy_INCREF(cpy_r_r389.f2);
CPyL363: ;
    CPy_RestoreExcInfo(cpy_r_r389);
    CPy_DecRef(cpy_r_r389.f0);
    CPy_DecRef(cpy_r_r389.f1);
    CPy_DecRef(cpy_r_r389.f2);
    goto CPyL372;
CPyL364: ;
    cpy_r_r390 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32;
    if (unlikely(cpy_r_r390.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__32", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r390.f0);
    CPy_INCREF(cpy_r_r390.f1);
    CPy_INCREF(cpy_r_r390.f2);
CPyL365: ;
    CPy_RestoreExcInfo(cpy_r_r390);
    CPy_DecRef(cpy_r_r390.f0);
    CPy_DecRef(cpy_r_r390.f1);
    CPy_DecRef(cpy_r_r390.f2);
    cpy_r_r391 = CPy_KeepPropagating();
    if (!cpy_r_r391) goto CPyL423;
    CPy_Unreachable();
CPyL367: ;
    cpy_r_r392 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31;
    if (unlikely(cpy_r_r392 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__31", -1, CPyStatic_multicall___globals);
        goto CPyL520;
    }
    CPy_INCREF(cpy_r_r392);
CPyL368: ;
    cpy_r_r393 = CPyIter_Send(cpy_r_r392, cpy_r_arg);
    CPy_DECREF(cpy_r_r392);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r393 == NULL) goto CPyL370;
    cpy_r_r379 = cpy_r_r393;
    goto CPyL351;
CPyL370: ;
    cpy_r_r394 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r394 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r376 = cpy_r_r394;
CPyL372: ;
    if (likely(PyList_Check(cpy_r_r376)))
        cpy_r_r395 = cpy_r_r376;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals, "list", cpy_r_r376);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch_results != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch_results);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch_results = cpy_r_r395;
    cpy_r_r396 = 1;
    if (unlikely(!cpy_r_r396)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r397 = CPyStatics[243]; /* 'coroutine %s finished' */
    cpy_r_r398 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__id;
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 192, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r398);
CPyL375: ;
    cpy_r_r399 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r399 == NULL)) {
        goto CPyL521;
    } else
        goto CPyL378;
CPyL376: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r400 = 0;
    if (unlikely(!cpy_r_r400)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 192, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_Unreachable();
CPyL378: ;
    PyObject *cpy_r_r401[2] = {cpy_r_r397, cpy_r_r398};
    cpy_r_r402 = (PyObject **)&cpy_r_r401;
    cpy_r_r403 = PyObject_Vectorcall(cpy_r_r399, cpy_r_r402, 2, 0);
    if (unlikely(cpy_r_r403 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 192, CPyStatic_multicall___globals);
        goto CPyL522;
    } else
        goto CPyL523;
CPyL379: ;
    CPy_DECREF(cpy_r_r398);
    cpy_r_r404 = PyList_New(0);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33 = cpy_r_r404;
    cpy_r_r405 = 1;
    if (unlikely(!cpy_r_r405)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r406 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__batch_results;
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "batch_results", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r406);
CPyL382: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34 = cpy_r_r406;
    cpy_r_r407 = 1;
    if (unlikely(!cpy_r_r407)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35 = 0;
    cpy_r_r408 = 1;
    if (unlikely(!cpy_r_r408)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL384: ;
    cpy_r_r409 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34;
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__34", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r409);
CPyL385: ;
    cpy_r_r410 = (CPyPtr)&((PyVarObject *)cpy_r_r409)->ob_size;
    cpy_r_r411 = *(int64_t *)cpy_r_r410;
    CPy_DECREF_NO_IMM(cpy_r_r409);
    cpy_r_r412 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35;
    if (unlikely(cpy_r_r412 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__35", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL386: ;
    cpy_r_r413 = cpy_r_r412 < cpy_r_r411;
    if (!cpy_r_r413) goto CPyL408;
    cpy_r_r414 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34;
    if (unlikely(cpy_r_r414 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__34", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r414);
CPyL388: ;
    cpy_r_r415 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35;
    if (unlikely(cpy_r_r415 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__35", 193, CPyStatic_multicall___globals);
        goto CPyL524;
    }
CPyL389: ;
    cpy_r_r416 = (CPyPtr)&((PyListObject *)cpy_r_r414)->ob_item;
    cpy_r_r417 = *(CPyPtr *)cpy_r_r416;
    cpy_r_r418 = cpy_r_r415 * 8;
    cpy_r_r419 = cpy_r_r417 + cpy_r_r418;
    cpy_r_r420 = *(PyObject * *)cpy_r_r419;
    CPy_INCREF(cpy_r_r420);
    CPy_DECREF_NO_IMM(cpy_r_r414);
    if (likely(PyList_Check(cpy_r_r420)))
        cpy_r_r421 = cpy_r_r420;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals, "list", cpy_r_r420);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk = cpy_r_r421;
    cpy_r_r422 = 1;
    if (unlikely(!cpy_r_r422)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r423 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__chunk;
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "chunk", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r423);
CPyL392: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36 = cpy_r_r423;
    cpy_r_r424 = 1;
    if (unlikely(!cpy_r_r424)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37 = 0;
    cpy_r_r425 = 1;
    if (unlikely(!cpy_r_r425)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL394: ;
    cpy_r_r426 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36;
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__36", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r426);
CPyL395: ;
    cpy_r_r427 = (CPyPtr)&((PyVarObject *)cpy_r_r426)->ob_size;
    cpy_r_r428 = *(int64_t *)cpy_r_r427;
    CPy_DECREF_NO_IMM(cpy_r_r426);
    cpy_r_r429 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37;
    if (unlikely(cpy_r_r429 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__37", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL396: ;
    cpy_r_r430 = cpy_r_r429 < cpy_r_r428;
    if (!cpy_r_r430) goto CPyL406;
    cpy_r_r431 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36;
    if (unlikely(cpy_r_r431 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__36", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r431);
CPyL398: ;
    cpy_r_r432 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37;
    if (unlikely(cpy_r_r432 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__37", 193, CPyStatic_multicall___globals);
        goto CPyL525;
    }
CPyL399: ;
    cpy_r_r433 = (CPyPtr)&((PyListObject *)cpy_r_r431)->ob_item;
    cpy_r_r434 = *(CPyPtr *)cpy_r_r433;
    cpy_r_r435 = cpy_r_r432 * 8;
    cpy_r_r436 = cpy_r_r434 + cpy_r_r435;
    cpy_r_r437 = *(PyObject * *)cpy_r_r436;
    CPy_INCREF(cpy_r_r437);
    CPy_DECREF_NO_IMM(cpy_r_r431);
    PyObject *__tmp83;
    if (unlikely(!(PyTuple_Check(cpy_r_r437) && PyTuple_GET_SIZE(cpy_r_r437) == 2))) {
        __tmp83 = NULL;
        goto __LL84;
    }
    if (PyTuple_GET_ITEM(cpy_r_r437, 0) == Py_None)
        __tmp83 = PyTuple_GET_ITEM(cpy_r_r437, 0);
    else {
        __tmp83 = NULL;
    }
    if (__tmp83 != NULL) goto __LL85;
    if (PyBool_Check(PyTuple_GET_ITEM(cpy_r_r437, 0)))
        __tmp83 = PyTuple_GET_ITEM(cpy_r_r437, 0);
    else {
        __tmp83 = NULL;
    }
    if (__tmp83 != NULL) goto __LL85;
    __tmp83 = NULL;
__LL85: ;
    if (__tmp83 == NULL) goto __LL84;
    if (likely(PyBytes_Check(PyTuple_GET_ITEM(cpy_r_r437, 1)) || PyByteArray_Check(PyTuple_GET_ITEM(cpy_r_r437, 1))))
        __tmp83 = PyTuple_GET_ITEM(cpy_r_r437, 1);
    else {
        __tmp83 = NULL;
    }
    if (__tmp83 == NULL) goto __LL84;
    __tmp83 = cpy_r_r437;
__LL84: ;
    if (unlikely(__tmp83 == NULL)) {
        CPy_TypeError("tuple[union[None, bool], bytes]", cpy_r_r437); cpy_r_r438 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp86 = PyTuple_GET_ITEM(cpy_r_r437, 0);
        CPy_INCREF(__tmp86);
        PyObject *__tmp87;
        if (__tmp86 == Py_None)
            __tmp87 = __tmp86;
        else {
            __tmp87 = NULL;
        }
        if (__tmp87 != NULL) goto __LL88;
        if (PyBool_Check(__tmp86))
            __tmp87 = __tmp86;
        else {
            __tmp87 = NULL;
        }
        if (__tmp87 != NULL) goto __LL88;
        CPy_TypeError("bool or None", __tmp86); 
        __tmp87 = NULL;
__LL88: ;
        cpy_r_r438.f0 = __tmp87;
        PyObject *__tmp89 = PyTuple_GET_ITEM(cpy_r_r437, 1);
        CPy_INCREF(__tmp89);
        PyObject *__tmp90;
        if (likely(PyBytes_Check(__tmp89) || PyByteArray_Check(__tmp89)))
            __tmp90 = __tmp89;
        else {
            CPy_TypeError("bytes", __tmp89); 
            __tmp90 = NULL;
        }
        cpy_r_r438.f1 = __tmp90;
    }
    CPy_DECREF(cpy_r_r437);
    if (unlikely(cpy_r_r438.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result.f1);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result = cpy_r_r438;
    cpy_r_r439 = 1;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r440 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__result;
    if (unlikely(cpy_r_r440.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "result", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF(cpy_r_r440.f0);
    CPy_INCREF(cpy_r_r440.f1);
CPyL402: ;
    cpy_r_r441 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33;
    if (unlikely(cpy_r_r441 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__33", -1, CPyStatic_multicall___globals);
        goto CPyL526;
    }
    CPy_INCREF_NO_IMM(cpy_r_r441);
CPyL403: ;
    cpy_r_r442 = PyTuple_New(2);
    if (unlikely(cpy_r_r442 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp91 = cpy_r_r440.f0;
    PyTuple_SET_ITEM(cpy_r_r442, 0, __tmp91);
    PyObject *__tmp92 = cpy_r_r440.f1;
    PyTuple_SET_ITEM(cpy_r_r442, 1, __tmp92);
    cpy_r_r443 = PyList_Append(cpy_r_r441, cpy_r_r442);
    CPy_DECREF_NO_IMM(cpy_r_r441);
    CPy_DECREF(cpy_r_r442);
    cpy_r_r444 = cpy_r_r443 >= 0;
    if (unlikely(!cpy_r_r444)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r445 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37;
    if (unlikely(cpy_r_r445 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__37", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL405: ;
    cpy_r_r446 = cpy_r_r445 + 1;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37 = cpy_r_r446;
    cpy_r_r447 = 1;
    if (unlikely(!cpy_r_r447)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    } else
        goto CPyL394;
CPyL406: ;
    cpy_r_r448 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35;
    if (unlikely(cpy_r_r448 == -113)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__35", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    }
CPyL407: ;
    cpy_r_r449 = cpy_r_r448 + 1;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35 = cpy_r_r449;
    cpy_r_r450 = 1;
    if (unlikely(!cpy_r_r450)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL423;
    } else
        goto CPyL384;
CPyL408: ;
    cpy_r_r451 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33;
    if (unlikely(cpy_r_r451 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__33", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_INCREF_NO_IMM(cpy_r_r451);
CPyL409: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL413;
    CPyGen_SetStopIterationValue(cpy_r_r451);
    CPy_DECREF_NO_IMM(cpy_r_r451);
    if (!0) goto CPyL423;
    CPy_Unreachable();
CPyL413: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r451;
    return 0;
CPyL414: ;
    cpy_r_r453 = cpy_r_r14 == 0;
    if (cpy_r_r453) goto CPyL527;
    cpy_r_r454 = cpy_r_r14 == 1;
    if (cpy_r_r454) {
        goto CPyL528;
    } else
        goto CPyL529;
CPyL416: ;
    cpy_r_r455 = cpy_r_r14 == 2;
    if (cpy_r_r455) {
        goto CPyL530;
    } else
        goto CPyL531;
CPyL417: ;
    cpy_r_r456 = cpy_r_r14 == 3;
    if (cpy_r_r456) {
        goto CPyL532;
    } else
        goto CPyL533;
CPyL418: ;
    cpy_r_r457 = cpy_r_r14 == 4;
    if (cpy_r_r457) {
        goto CPyL534;
    } else
        goto CPyL535;
CPyL419: ;
    cpy_r_r458 = cpy_r_r14 == 5;
    if (cpy_r_r458) {
        goto CPyL536;
    } else
        goto CPyL537;
CPyL420: ;
    cpy_r_r459 = cpy_r_r14 == 6;
    if (cpy_r_r459) {
        goto CPyL352;
    } else
        goto CPyL538;
CPyL421: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r460 = 0;
    if (unlikely(!cpy_r_r460)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    CPy_Unreachable();
CPyL423: ;
    cpy_r_r461 = NULL;
    return cpy_r_r461;
CPyL424: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL6;
CPyL425: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL423;
CPyL426: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL9;
CPyL427: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL423;
CPyL428: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL423;
CPyL429: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL423;
CPyL430: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL32;
CPyL431: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL31;
CPyL432: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL41;
CPyL433: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL41;
CPyL434: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL423;
CPyL435: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL203;
CPyL436: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL203;
CPyL437: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL203;
CPyL438: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL203;
CPyL439: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL70;
CPyL440: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL69;
CPyL441: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL79;
CPyL442: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL79;
CPyL443: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL79;
CPyL444: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL203;
CPyL445: ;
    CPy_DecRef(cpy_r_r110);
    goto CPyL203;
CPyL446: ;
    CPy_DECREF_NO_IMM(cpy_r_r110);
    CPy_DECREF(cpy_r_r111);
    goto CPyL90;
CPyL447: ;
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    goto CPyL203;
CPyL448: ;
    CPy_DECREF(cpy_r_r111);
    goto CPyL94;
CPyL449: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL203;
CPyL450: ;
    CPy_DECREF(cpy_r_r119);
    goto CPyL98;
CPyL451: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL203;
CPyL452: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r126);
    goto CPyL203;
CPyL453: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL203;
CPyL454: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL118;
CPyL455: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL117;
CPyL456: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL127;
CPyL457: ;
    CPy_DecRef(cpy_r_r139);
    goto CPyL127;
CPyL458: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL127;
CPyL459: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL203;
CPyL460: ;
    CPy_DecRef(cpy_r_r155);
    goto CPyL203;
CPyL461: ;
    CPy_DECREF_NO_IMM(cpy_r_r155);
    CPy_DECREF(cpy_r_r156);
    goto CPyL138;
CPyL462: ;
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r156);
    goto CPyL203;
CPyL463: ;
    CPy_DECREF(cpy_r_r156);
    goto CPyL142;
CPyL464: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL203;
CPyL465: ;
    CPy_DECREF(cpy_r_r156);
    goto CPyL146;
CPyL466: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL150;
CPyL467: ;
    CPy_DecRef(cpy_r_r174);
    goto CPyL203;
CPyL468: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL203;
CPyL469: ;
    CPy_DecRef(cpy_r_r184);
    goto CPyL203;
CPyL470: ;
    CPy_DecRef(cpy_r_r184);
    CPy_DecRef(cpy_r_r185);
    goto CPyL203;
CPyL471: ;
    CPy_DECREF(cpy_r_r194);
    goto CPyL172;
CPyL472: ;
    CPy_DecRef(cpy_r_r194);
    goto CPyL203;
CPyL473: ;
    CPy_DECREF(cpy_r_r194);
    goto CPyL176;
CPyL474: ;
    CPy_DECREF(cpy_r_r201);
    goto CPyL180;
CPyL475: ;
    CPy_DecRef(cpy_r_r203);
    goto CPyL203;
CPyL476: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    goto CPyL203;
CPyL477: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    goto CPyL203;
CPyL478: ;
    CPy_DecRef(cpy_r_r210);
    goto CPyL203;
CPyL479: ;
    CPy_DecRef(cpy_r_r221);
    goto CPyL197;
CPyL480: ;
    CPy_DecRef(cpy_r_r221);
    goto CPyL203;
CPyL481: ;
    CPy_DECREF(cpy_r_r226);
    goto CPyL200;
CPyL482: ;
    CPy_DecRef(cpy_r_r238);
    goto CPyL215;
CPyL483: ;
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r254);
    goto CPyL257;
CPyL484: ;
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r255);
    goto CPyL257;
CPyL485: ;
    CPy_DecRef(cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r256);
    goto CPyL257;
CPyL486: ;
    CPy_DecRef(cpy_r_r265);
    goto CPyL257;
CPyL487: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL234;
CPyL488: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL233;
CPyL489: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL243;
CPyL490: ;
    CPy_DecRef(cpy_r_r268);
    goto CPyL243;
CPyL491: ;
    CPy_DecRef(cpy_r_r265);
    goto CPyL243;
CPyL492: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL257;
CPyL493: ;
    CPy_DecRef(cpy_r_r298);
    goto CPyL306;
CPyL494: ;
    CPy_DecRef(cpy_r_r299);
    goto CPyL306;
CPyL495: ;
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL275;
CPyL496: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL280;
CPyL497: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL279;
CPyL498: ;
    CPy_XDecRef(cpy_r_r9);
    goto CPyL289;
CPyL499: ;
    CPy_DecRef(cpy_r_r311);
    goto CPyL289;
CPyL500: ;
    CPy_XDecRef(cpy_r_r11.f0);
    CPy_XDecRef(cpy_r_r11.f1);
    CPy_XDecRef(cpy_r_r11.f2);
    goto CPyL286;
CPyL501: ;
    CPy_XDecRef(cpy_r_r11.f0);
    CPy_XDecRef(cpy_r_r11.f1);
    CPy_XDecRef(cpy_r_r11.f2);
    goto CPyL291;
CPyL502: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL306;
CPyL503: ;
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL294;
CPyL504: ;
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL299;
CPyL505: ;
    CPy_DecRef(cpy_r_r336);
    goto CPyL423;
CPyL506: ;
    CPy_DecRef(cpy_r_r337);
    goto CPyL423;
CPyL507: ;
    CPy_DecRef(cpy_r_r341);
    goto CPyL423;
CPyL508: ;
    CPy_DecRef(cpy_r_r346);
    goto CPyL423;
CPyL509: ;
    CPy_DecRef(cpy_r_r346);
    CPy_DecRef(cpy_r_r347);
    goto CPyL423;
CPyL510: ;
    CPy_DecRef(cpy_r_r346);
    CPy_DecRef(cpy_r_r347);
    CPyTagged_DecRef(cpy_r_r349);
    goto CPyL423;
CPyL511: ;
    CPy_DecRef(cpy_r_r346);
    CPy_DecRef(cpy_r_r347);
    CPyTagged_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r350);
    goto CPyL423;
CPyL512: ;
    CPy_DecRef(cpy_r_r355);
    goto CPyL423;
CPyL513: ;
    CPy_DecRef(cpy_r_r364);
    goto CPyL423;
CPyL514: ;
    CPy_DecRef(cpy_r_r376);
    goto CPyL423;
CPyL515: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL355;
CPyL516: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL354;
CPyL517: ;
    CPy_XDecRef(cpy_r_r13);
    goto CPyL364;
CPyL518: ;
    CPy_DecRef(cpy_r_r379);
    goto CPyL364;
CPyL519: ;
    CPy_DecRef(cpy_r_r376);
    goto CPyL364;
CPyL520: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL423;
CPyL521: ;
    CPy_DecRef(cpy_r_r398);
    goto CPyL376;
CPyL522: ;
    CPy_DecRef(cpy_r_r398);
    goto CPyL423;
CPyL523: ;
    CPy_DECREF(cpy_r_r403);
    goto CPyL379;
CPyL524: ;
    CPy_DecRef(cpy_r_r414);
    goto CPyL423;
CPyL525: ;
    CPy_DecRef(cpy_r_r431);
    goto CPyL423;
CPyL526: ;
    CPy_DecRef(cpy_r_r440.f0);
    CPy_DecRef(cpy_r_r440.f1);
    goto CPyL423;
CPyL527: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL1;
CPyL528: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL29;
CPyL529: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL416;
CPyL530: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL67;
CPyL531: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL417;
CPyL532: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL115;
CPyL533: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL418;
CPyL534: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL231;
CPyL535: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL419;
CPyL536: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL277;
CPyL537: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL420;
CPyL538: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL421;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___fetch_outputs_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.fetch_outputs_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___fetch_outputs_Multicall_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__next__", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___fetch_outputs_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.fetch_outputs_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_multicall___fetch_outputs_Multicall_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "send", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___fetch_outputs_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.fetch_outputs_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__iter__", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___fetch_outputs_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.fetch_outputs_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_multicall___fetch_outputs_Multicall_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "throw", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[24]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_multicall___fetch_outputs_Multicall_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[25]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp93 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp93);
    PyObject *__tmp94 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp94);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___fetch_outputs_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.fetch_outputs_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___fetch_outputs_Multicall_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "close", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_multicall___fetch_outputs_Multicall_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("multicall.multicall.fetch_outputs_Multicall_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___fetch_outputs_Multicall_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__await__", -1, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___Multicall___fetch_outputs(PyObject *cpy_r_self, PyObject *cpy_r_calls, CPyTagged cpy_r_ConnErr_retries, PyObject *cpy_r_id) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    if (cpy_r_ConnErr_retries != CPY_INT_TAG) goto CPyL11;
    cpy_r_ConnErr_retries = 0;
CPyL2: ;
    if (cpy_r_id != NULL) goto CPyL12;
    cpy_r_r0 = CPyStatics[245]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_id = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL13;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__self);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL14;
    }
    CPy_INCREF_NO_IMM(cpy_r_calls);
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__calls != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__calls);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__calls = cpy_r_calls;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL14;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__ConnErr_retries != CPY_INT_TAG) {
        CPyTagged_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__ConnErr_retries);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__ConnErr_retries = cpy_r_ConnErr_retries;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL15;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__id != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__id);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->___mypyc_generator_attribute__id = cpy_r_id;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL16;
    }
    return cpy_r_r1;
CPyL10: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL11: ;
    CPyTagged_INCREF(cpy_r_ConnErr_retries);
    goto CPyL2;
CPyL12: ;
    CPy_INCREF(cpy_r_id);
    goto CPyL4;
CPyL13: ;
    CPyTagged_DecRef(cpy_r_ConnErr_retries);
    CPy_DecRef(cpy_r_id);
    goto CPyL10;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_ConnErr_retries);
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
}

PyObject *CPyPy_multicall___Multicall___fetch_outputs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"calls", "ConnErr_retries", "id", 0};
    static CPyArg_Parser parser = {"O|OO:fetch_outputs", kwlist, 0};
    PyObject *obj_calls;
    PyObject *obj_ConnErr_retries = NULL;
    PyObject *obj_id = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_calls, &obj_ConnErr_retries, &obj_id)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *arg_calls;
    if (likely(PyList_Check(obj_calls)))
        arg_calls = obj_calls;
    else {
        CPy_TypeError("list", obj_calls); 
        goto fail;
    }
    CPyTagged arg_ConnErr_retries;
    if (obj_ConnErr_retries == NULL) {
        arg_ConnErr_retries = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_ConnErr_retries)))
        arg_ConnErr_retries = CPyTagged_BorrowFromObject(obj_ConnErr_retries);
    else {
        CPy_TypeError("int", obj_ConnErr_retries); goto fail;
    }
    PyObject *arg_id;
    if (obj_id == NULL) {
        arg_id = NULL;
    } else if (likely(PyUnicode_Check(obj_id)))
        arg_id = obj_id;
    else {
        CPy_TypeError("str", obj_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___Multicall___fetch_outputs(arg_self, arg_calls, arg_ConnErr_retries, arg_id);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___Multicall___aggregate(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_w3;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_multicall___globals;
    cpy_r_r2 = CPyStatics[15]; /* 'state_override_supported' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 197, CPyStatic_multicall___globals);
        goto CPyL14;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 197, CPyStatic_multicall___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 197, CPyStatic_multicall___globals);
        goto CPyL13;
    }
    if (!cpy_r_r7) goto CPyL10;
    cpy_r_r8 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_multicall_address;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_multicall___Multicall___multicall_sig(cpy_r_self);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 200, CPyStatic_multicall___globals);
        goto CPyL15;
    }
CPyL5: ;
    cpy_r_r10 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_w3;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_block_id;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_origin;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_gas_limit;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyStatic_constants___MULTICALL3_BYTECODE;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL16;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL3_BYTECODE\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 206, CPyStatic_multicall___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r16 = Py_None;
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r18 = CPyDef_call___Call(cpy_r_r8, cpy_r_r9, cpy_r_r16, cpy_r_r11, cpy_r_r17, cpy_r_r14, cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 198, CPyStatic_multicall___globals);
        goto CPyL13;
    }
    return cpy_r_r18;
CPyL10: ;
    cpy_r_r19 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_multicall_address;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_multicall___Multicall___multicall_sig(cpy_r_self);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 213, CPyStatic_multicall___globals);
        goto CPyL17;
    }
CPyL11: ;
    cpy_r_r21 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_w3;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_origin;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_block_id;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = ((multicall___multicall___MulticallObject *)cpy_r_self)->_gas_limit;
    CPyTagged_INCREF(cpy_r_r24);
    cpy_r_r25 = Py_None;
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_call___Call(cpy_r_r19, cpy_r_r20, cpy_r_r25, cpy_r_r23, cpy_r_r26, cpy_r_r27, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "aggregate", 211, CPyStatic_multicall___globals);
        goto CPyL13;
    }
    return cpy_r_r28;
CPyL13: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    CPyTagged_DecRef(cpy_r_r13);
    goto CPyL6;
CPyL17: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL13;
}

PyObject *CPyPy_multicall___Multicall___aggregate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":aggregate", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___Multicall))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.Multicall", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___Multicall___aggregate(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "aggregate", 196, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall___NotSoBrightBatcher_____init__(PyObject *cpy_r_self) {
    ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step = 20000;
    return 1;
}

PyObject *CPyPy_multicall___NotSoBrightBatcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___NotSoBrightBatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.NotSoBrightBatcher", obj_self); 
        goto fail;
    }
    char retval = CPyDef_multicall___NotSoBrightBatcher_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "__init__", 231, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___NotSoBrightBatcher___batch_calls(PyObject *cpy_r_self, PyObject *cpy_r_calls, CPyTagged cpy_r_step) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_start;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "batch_calls", 238, CPyStatic_multicall___globals);
        goto CPyL13;
    }
    cpy_r_start = 0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_r3, 2);
CPyL2: ;
    if (!1) goto CPyL14;
    cpy_r_r5 = CPyTagged_Add(cpy_r_start, cpy_r_step);
    cpy_r_r6 = CPyList_GetSlice(cpy_r_calls, cpy_r_start, cpy_r_r5);
    CPyTagged_DECREF(cpy_r_start);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "batch_calls", 243, CPyStatic_multicall___globals);
        goto CPyL15;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "batch_calls", 243, CPyStatic_multicall___globals, "list", cpy_r_r6);
        goto CPyL15;
    }
    cpy_r_r8 = PyList_Append(cpy_r_r0, cpy_r_r7);
    CPy_DECREF_NO_IMM(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("multicall/multicall.py", "batch_calls", 243, CPyStatic_multicall___globals);
        goto CPyL15;
    }
    cpy_r_r10 = cpy_r_r5 & 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (cpy_r_r11) goto CPyL8;
    cpy_r_r12 = cpy_r_r4 & 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL9;
CPyL8: ;
    cpy_r_r14 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r4);
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (cpy_r_r15) {
        goto CPyL16;
    } else
        goto CPyL11;
CPyL9: ;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r5 >= (Py_ssize_t)cpy_r_r4;
    if (cpy_r_r16) {
        goto CPyL16;
    } else
        goto CPyL11;
CPyL10: ;
    return cpy_r_r0;
CPyL11: ;
    cpy_r_start = cpy_r_r5;
    goto CPyL2;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL14: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_start);
    CPyTagged_DECREF(cpy_r_r4);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL16: ;
    CPyTagged_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_multicall___NotSoBrightBatcher___batch_calls(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"calls", "step", 0};
    static CPyArg_Parser parser = {"OO:batch_calls", kwlist, 0};
    PyObject *obj_calls;
    PyObject *obj_step;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_calls, &obj_step)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___NotSoBrightBatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.NotSoBrightBatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_calls;
    if (likely(PyList_Check(obj_calls)))
        arg_calls = obj_calls;
    else {
        CPy_TypeError("list", obj_calls); 
        goto fail;
    }
    CPyTagged arg_step;
    if (likely(PyLong_Check(obj_step)))
        arg_step = CPyTagged_BorrowFromObject(obj_step);
    else {
        CPy_TypeError("int", obj_step); goto fail;
    }
    PyObject *retval = CPyDef_multicall___NotSoBrightBatcher___batch_calls(arg_self, arg_calls, arg_step);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "batch_calls", 234, CPyStatic_multicall___globals);
    return NULL;
}

tuple_T2OO CPyDef_multicall___NotSoBrightBatcher___split_calls(PyObject *cpy_r_self, PyObject *cpy_r_calls, PyObject *cpy_r_unused) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    if (cpy_r_unused != NULL) goto CPyL2;
    cpy_r_r0 = Py_None;
    cpy_r_unused = cpy_r_r0;
    CPy_DECREF(cpy_r_unused);
CPyL2: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Rshift(cpy_r_r3, 2);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/multicall.py", "split_calls", -1, CPyStatic_multicall___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPyList_GetSlice(cpy_r_calls, 0, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "split_calls", 256, CPyStatic_multicall___globals);
        goto CPyL9;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "split_calls", 256, CPyStatic_multicall___globals, "list", cpy_r_r5);
        goto CPyL9;
    }
    cpy_r_r7 = CPyList_GetSlice(cpy_r_calls, cpy_r_r4, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "split_calls", 257, CPyStatic_multicall___globals);
        goto CPyL10;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "split_calls", 257, CPyStatic_multicall___globals, "list", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_r9.f0 = cpy_r_r6;
    cpy_r_r9.f1 = cpy_r_r8;
    return cpy_r_r9;
CPyL8: ;
    tuple_T2OO __tmp95 = { NULL, NULL };
    cpy_r_r10 = __tmp95;
    return cpy_r_r10;
CPyL9: ;
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL8;
}

PyObject *CPyPy_multicall___NotSoBrightBatcher___split_calls(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"calls", "unused", 0};
    static CPyArg_Parser parser = {"O|O:split_calls", kwlist, 0};
    PyObject *obj_calls;
    PyObject *obj_unused = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_calls, &obj_unused)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___NotSoBrightBatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.NotSoBrightBatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_calls;
    if (likely(PyList_Check(obj_calls)))
        arg_calls = obj_calls;
    else {
        CPy_TypeError("list", obj_calls); 
        goto fail;
    }
    PyObject *arg_unused;
    if (obj_unused == NULL) {
        arg_unused = NULL;
        goto __LL96;
    }
    if (PyLong_Check(obj_unused))
        arg_unused = obj_unused;
    else {
        arg_unused = NULL;
    }
    if (arg_unused != NULL) goto __LL96;
    if (obj_unused == Py_None)
        arg_unused = obj_unused;
    else {
        arg_unused = NULL;
    }
    if (arg_unused != NULL) goto __LL96;
    CPy_TypeError("int or None", obj_unused); 
    goto fail;
__LL96: ;
    tuple_T2OO retval = CPyDef_multicall___NotSoBrightBatcher___split_calls(arg_self, arg_calls, arg_unused);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp97 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp97);
    PyObject *__tmp98 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp98);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "split_calls", 248, CPyStatic_multicall___globals);
    return NULL;
}

PyObject *CPyDef_multicall___NotSoBrightBatcher___rebatch(PyObject *cpy_r_self, PyObject *cpy_r_calls) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    double cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_new_step;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T2OO cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Rshift(cpy_r_r3, 2);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", -1, CPyStatic_multicall___globals);
        goto CPyL34;
    }
    cpy_r_r5 = cpy_r_r0 & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (cpy_r_r6) goto CPyL3;
    cpy_r_r7 = cpy_r_r4 & 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL4;
CPyL3: ;
    cpy_r_r9 = CPyTagged_IsLt_(cpy_r_r4, cpy_r_r0);
    cpy_r_r10 = cpy_r_r9 ^ 1;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL5;
CPyL4: ;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r0 <= (Py_ssize_t)cpy_r_r4;
    cpy_r_r11 = cpy_r_r12;
CPyL5: ;
    CPyTagged_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r4);
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r13 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_multicall___NotSoBrightBatcher___batch_calls(cpy_r_self, cpy_r_calls, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 263, CPyStatic_multicall___globals);
        goto CPyL33;
    }
    return cpy_r_r14;
CPyL8: ;
    cpy_r_r15 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step;
    CPyTagged_INCREF(cpy_r_r15);
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = cpy_r_r15 & 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (cpy_r_r20) goto CPyL10;
    cpy_r_r21 = cpy_r_r18 & 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (!cpy_r_r22) goto CPyL11;
CPyL10: ;
    cpy_r_r23 = CPyTagged_IsLt_(cpy_r_r15, cpy_r_r18);
    cpy_r_r24 = cpy_r_r23 ^ 1;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL12;
CPyL11: ;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r15 >= (Py_ssize_t)cpy_r_r18;
    cpy_r_r25 = cpy_r_r26;
CPyL12: ;
    CPyTagged_DECREF(cpy_r_r15);
    if (!cpy_r_r25) goto CPyL31;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r29 >= (Py_ssize_t)200;
    if (!cpy_r_r30) goto CPyL21;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = CPyTagged_StealAsObject(cpy_r_r33);
    cpy_r_r35 = PyFloat_FromDouble(0.99);
    cpy_r_r36 = PyNumber_Multiply(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 267, CPyStatic_multicall___globals);
        goto CPyL33;
    }
    cpy_r_r37 = PyFloat_AsDouble(cpy_r_r36);
    if (cpy_r_r37 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r36); cpy_r_r37 = -113.0;
    }
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 == -113.0;
    if (unlikely(cpy_r_r38)) goto CPyL17;
CPyL16: ;
    cpy_r_r39 = CPyModule_builtins;
    cpy_r_r40 = CPyStatics[246]; /* 'round' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 267, CPyStatic_multicall___globals);
        goto CPyL33;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r42 = PyErr_Occurred();
    if (unlikely(cpy_r_r42 != NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 267, CPyStatic_multicall___globals);
        goto CPyL33;
    } else
        goto CPyL16;
CPyL18: ;
    cpy_r_r43 = PyFloat_FromDouble(cpy_r_r37);
    PyObject *cpy_r_r44[1] = {cpy_r_r43};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r41, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 267, CPyStatic_multicall___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r43);
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r47 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r47 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 267, CPyStatic_multicall___globals);
        goto CPyL33;
    }
    cpy_r_r48 = cpy_r_r47;
    goto CPyL22;
CPyL21: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = CPyTagged_Subtract(cpy_r_r51, 2);
    cpy_r_r48 = cpy_r_r52;
CPyL22: ;
    cpy_r_new_step = cpy_r_r48;
    cpy_r_r53 = CPyStatics[247]; /* 'Multicall batch size reduced from ' */
    cpy_r_r54 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step;
    CPyTagged_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyTagged_Str(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL36;
    }
    cpy_r_r56 = CPyStatics[248]; /* ' to ' */
    cpy_r_r57 = CPyTagged_Str(cpy_r_new_step);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL37;
    }
    cpy_r_r58 = CPyStatics[249]; /* '. The failed batch had ' */
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = CPyTagged_Str(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL38;
    }
    cpy_r_r63 = CPyStatics[250]; /* ' calls.' */
    cpy_r_r64 = CPyStr_Build(7, cpy_r_r53, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL36;
    }
    cpy_r_r65 = CPyStatic_multicall___log_warning;
    if (unlikely(cpy_r_r65 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_warning\" was not set");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 268, CPyStatic_multicall___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL29: ;
    PyObject *cpy_r_r67[1] = {cpy_r_r64};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_Vectorcall(cpy_r_r65, cpy_r_r68, 1, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 268, CPyStatic_multicall___globals);
        goto CPyL40;
    } else
        goto CPyL41;
CPyL30: ;
    CPy_DECREF(cpy_r_r64);
    CPyTagged_DECREF(((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step);
    ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step = cpy_r_new_step;
CPyL31: ;
    cpy_r_r71 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step;
    CPyTagged_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyTagged_StealAsObject(cpy_r_r71);
    cpy_r_r73 = CPyDef_multicall___NotSoBrightBatcher___split_calls(cpy_r_self, cpy_r_calls, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 272, CPyStatic_multicall___globals);
        goto CPyL33;
    }
    cpy_r_r74 = PyTuple_New(2);
    if (unlikely(cpy_r_r74 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp99 = cpy_r_r73.f0;
    PyTuple_SET_ITEM(cpy_r_r74, 0, __tmp99);
    PyObject *__tmp100 = cpy_r_r73.f1;
    PyTuple_SET_ITEM(cpy_r_r74, 1, __tmp100);
    return cpy_r_r74;
CPyL33: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL33;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_new_step);
    goto CPyL33;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_new_step);
    CPy_DecRef(cpy_r_r55);
    goto CPyL33;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_new_step);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    goto CPyL33;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_new_step);
    CPy_DecRef(cpy_r_r64);
    goto CPyL27;
CPyL40: ;
    CPyTagged_DecRef(cpy_r_new_step);
    CPy_DecRef(cpy_r_r64);
    goto CPyL33;
CPyL41: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL30;
}

PyObject *CPyPy_multicall___NotSoBrightBatcher___rebatch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"calls", 0};
    static CPyArg_Parser parser = {"O:rebatch", kwlist, 0};
    PyObject *obj_calls;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_calls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_multicall___NotSoBrightBatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.multicall.NotSoBrightBatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_calls;
    if (likely(PyList_Check(obj_calls)))
        arg_calls = obj_calls;
    else {
        CPy_TypeError("list", obj_calls); 
        goto fail;
    }
    PyObject *retval = CPyDef_multicall___NotSoBrightBatcher___rebatch(arg_self, arg_calls);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "rebatch", 260, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall____raise_or_proceed(PyObject *cpy_r_e, CPyTagged cpy_r_ct_calls, CPyTagged cpy_r_ConnErr_retries) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    tuple_T2OO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_strings;
    char cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    int64_t cpy_r_r67;
    char cpy_r_r68;
    int64_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T4OOOO cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    tuple_T4OOOO cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject **cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    cpy_r_r0 = CPyModule_aiohttp;
    cpy_r_r1 = CPyStatics[251]; /* 'ClientOSError' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 281, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r3 = PyObject_IsInstance(cpy_r_e, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 281, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = CPyStatics[252]; /* 'broken pipe' */
    cpy_r_r7 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 282, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r8 = CPyStatics[253]; /* 'lower' */
    PyObject *cpy_r_r9[1] = {cpy_r_r7};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 282, CPyStatic_multicall___globals);
        goto CPyL91;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "_raise_or_proceed", 282, CPyStatic_multicall___globals, "str", cpy_r_r11);
        goto CPyL90;
    }
    cpy_r_r13 = PyUnicode_Contains(cpy_r_r12, cpy_r_r6);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 282, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r15 = cpy_r_r13;
    cpy_r_r16 = cpy_r_r15 ^ 1;
    if (!cpy_r_r16) goto CPyL10;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 283, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r17 = CPyStatic_multicall___log_warning;
    if (likely(cpy_r_r17 != NULL)) goto CPyL13;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_warning\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 284, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL13: ;
    PyObject *cpy_r_r19[1] = {cpy_r_e};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r17, cpy_r_r20, 1, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 284, CPyStatic_multicall___globals);
        goto CPyL90;
    } else
        goto CPyL92;
CPyL14: ;
    cpy_r_r22 = CPyModule_aiohttp;
    cpy_r_r23 = CPyStatics[254]; /* 'ClientResponseError' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 285, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r25 = PyObject_IsInstance(cpy_r_e, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 285, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL35;
    cpy_r_r28 = CPyStatics[255]; /* 'request entity too large' */
    cpy_r_r29 = CPyStatics[256]; /* 'connection reset by peer' */
    CPy_INCREF(cpy_r_r28);
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30.f0 = cpy_r_r28;
    cpy_r_r30.f1 = cpy_r_r29;
    cpy_r_r31 = PyTuple_New(2);
    if (unlikely(cpy_r_r31 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp101 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r31, 0, __tmp101);
    PyObject *__tmp102 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r31, 1, __tmp102);
    cpy_r_strings = cpy_r_r31;
    cpy_r_r32 = 1;
    PyObject *__tmp103;
    if (unlikely(!(PyTuple_Check(cpy_r_strings) && PyTuple_GET_SIZE(cpy_r_strings) == 2))) {
        __tmp103 = NULL;
        goto __LL104;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 0))))
        __tmp103 = PyTuple_GET_ITEM(cpy_r_strings, 0);
    else {
        __tmp103 = NULL;
    }
    if (__tmp103 == NULL) goto __LL104;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 1))))
        __tmp103 = PyTuple_GET_ITEM(cpy_r_strings, 1);
    else {
        __tmp103 = NULL;
    }
    if (__tmp103 == NULL) goto __LL104;
    __tmp103 = cpy_r_strings;
__LL104: ;
    if (unlikely(__tmp103 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_strings); cpy_r_r33 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp105 = PyTuple_GET_ITEM(cpy_r_strings, 0);
        CPy_INCREF(__tmp105);
        PyObject *__tmp106;
        if (likely(PyUnicode_Check(__tmp105)))
            __tmp106 = __tmp105;
        else {
            CPy_TypeError("str", __tmp105); 
            __tmp106 = NULL;
        }
        cpy_r_r33.f0 = __tmp106;
        PyObject *__tmp107 = PyTuple_GET_ITEM(cpy_r_strings, 1);
        CPy_INCREF(__tmp107);
        PyObject *__tmp108;
        if (likely(PyUnicode_Check(__tmp107)))
            __tmp108 = __tmp107;
        else {
            CPy_TypeError("str", __tmp107); 
            __tmp108 = NULL;
        }
        cpy_r_r33.f1 = __tmp108;
    }
    CPy_DECREF(cpy_r_strings);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp109 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp109);
    PyObject *__tmp110 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp110);
    cpy_r_r35 = PyObject_GetIter(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL90;
    }
CPyL19: ;
    cpy_r_r36 = PyIter_Next(cpy_r_r35);
    if (cpy_r_r36 == NULL) goto CPyL93;
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals, "str", cpy_r_r36);
        goto CPyL94;
    }
    cpy_r_r38 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL95;
    }
    cpy_r_r39 = CPyStatics[253]; /* 'lower' */
    PyObject *cpy_r_r40[1] = {cpy_r_r38};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_VectorcallMethod(cpy_r_r39, cpy_r_r41, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL96;
    }
    CPy_DECREF(cpy_r_r38);
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals, "str", cpy_r_r42);
        goto CPyL95;
    }
    cpy_r_r44 = PyUnicode_Contains(cpy_r_r43, cpy_r_r37);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL94;
    }
    cpy_r_r46 = cpy_r_r44;
    cpy_r_r47 = cpy_r_r46 ^ 1;
    cpy_r_r48 = cpy_r_r47 ^ 1;
    if (cpy_r_r48) {
        goto CPyL97;
    } else
        goto CPyL19;
CPyL26: ;
    cpy_r_r32 = 0;
    goto CPyL28;
CPyL27: ;
    cpy_r_r49 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL90;
    }
CPyL28: ;
    if (!cpy_r_r32) goto CPyL31;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 288, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r50 = CPyStatic_multicall___log_warning;
    if (likely(cpy_r_r50 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_warning\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 289, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL34: ;
    PyObject *cpy_r_r52[1] = {cpy_r_e};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r53, 1, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 289, CPyStatic_multicall___globals);
        goto CPyL90;
    } else
        goto CPyL98;
CPyL35: ;
    cpy_r_r55 = CPyModule_requests;
    cpy_r_r56 = CPyStatics[257]; /* 'ConnectionError' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 290, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r58 = PyObject_IsInstance(cpy_r_e, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 290, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r60 = cpy_r_r58;
    if (!cpy_r_r60) goto CPyL47;
    cpy_r_r61 = CPyStatics[258]; /* ("('Connection aborted.', ConnectionResetError(104, "
                                    "'Connection reset by peer'))") */
    cpy_r_r62 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 293, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r63 = PyUnicode_Contains(cpy_r_r62, cpy_r_r61);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 292, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r65 = cpy_r_r63;
    cpy_r_r66 = cpy_r_r65 ^ 1;
    if (cpy_r_r66) goto CPyL45;
    cpy_r_r67 = cpy_r_ConnErr_retries & 1;
    cpy_r_r68 = cpy_r_r67 != 0;
    if (cpy_r_r68) goto CPyL43;
    cpy_r_r69 = 10 & 1;
    cpy_r_r70 = cpy_r_r69 != 0;
    if (!cpy_r_r70) goto CPyL44;
CPyL43: ;
    cpy_r_r71 = CPyTagged_IsLt_(10, cpy_r_ConnErr_retries);
    if (cpy_r_r71) {
        goto CPyL45;
    } else
        goto CPyL89;
CPyL44: ;
    cpy_r_r72 = (Py_ssize_t)cpy_r_ConnErr_retries > (Py_ssize_t)10;
    if (!cpy_r_r72) goto CPyL89;
CPyL45: ;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 296, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r73 = CPyModule_requests;
    cpy_r_r74 = CPyStatics[259]; /* 'HTTPError' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 297, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r76 = PyObject_IsInstance(cpy_r_e, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 297, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r78 = cpy_r_r76;
    if (!cpy_r_r78) goto CPyL67;
    cpy_r_r79 = CPyStatics[255]; /* 'request entity too large' */
    cpy_r_r80 = CPyStatics[260]; /* 'payload too large' */
    cpy_r_r81 = CPyStatics[261]; /* 'time-out' */
    cpy_r_r82 = CPyStatics[262]; /* '520 server error' */
    CPy_INCREF(cpy_r_r79);
    CPy_INCREF(cpy_r_r80);
    CPy_INCREF(cpy_r_r81);
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83.f0 = cpy_r_r79;
    cpy_r_r83.f1 = cpy_r_r80;
    cpy_r_r83.f2 = cpy_r_r81;
    cpy_r_r83.f3 = cpy_r_r82;
    cpy_r_r84 = PyTuple_New(4);
    if (unlikely(cpy_r_r84 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp111 = cpy_r_r83.f0;
    PyTuple_SET_ITEM(cpy_r_r84, 0, __tmp111);
    PyObject *__tmp112 = cpy_r_r83.f1;
    PyTuple_SET_ITEM(cpy_r_r84, 1, __tmp112);
    PyObject *__tmp113 = cpy_r_r83.f2;
    PyTuple_SET_ITEM(cpy_r_r84, 2, __tmp113);
    PyObject *__tmp114 = cpy_r_r83.f3;
    PyTuple_SET_ITEM(cpy_r_r84, 3, __tmp114);
    cpy_r_strings = cpy_r_r84;
    cpy_r_r85 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    cpy_r_r86 = CPyStatics[253]; /* 'lower' */
    PyObject *cpy_r_r87[1] = {cpy_r_r85};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r86, cpy_r_r88, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL100;
    }
    CPy_DECREF(cpy_r_r85);
    if (likely(PyUnicode_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals, "str", cpy_r_r89);
        goto CPyL99;
    }
    cpy_r_r91 = CPyStatics[263]; /* '__contains__' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    PyObject *__tmp115;
    if (unlikely(!(PyTuple_Check(cpy_r_strings) && PyTuple_GET_SIZE(cpy_r_strings) == 4))) {
        __tmp115 = NULL;
        goto __LL116;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 0))))
        __tmp115 = PyTuple_GET_ITEM(cpy_r_strings, 0);
    else {
        __tmp115 = NULL;
    }
    if (__tmp115 == NULL) goto __LL116;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 1))))
        __tmp115 = PyTuple_GET_ITEM(cpy_r_strings, 1);
    else {
        __tmp115 = NULL;
    }
    if (__tmp115 == NULL) goto __LL116;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 2))))
        __tmp115 = PyTuple_GET_ITEM(cpy_r_strings, 2);
    else {
        __tmp115 = NULL;
    }
    if (__tmp115 == NULL) goto __LL116;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 3))))
        __tmp115 = PyTuple_GET_ITEM(cpy_r_strings, 3);
    else {
        __tmp115 = NULL;
    }
    if (__tmp115 == NULL) goto __LL116;
    __tmp115 = cpy_r_strings;
__LL116: ;
    if (unlikely(__tmp115 == NULL)) {
        CPy_TypeError("tuple[str, str, str, str]", cpy_r_strings); cpy_r_r93 = (tuple_T4OOOO) { NULL, NULL, NULL, NULL };
    } else {
        PyObject *__tmp117 = PyTuple_GET_ITEM(cpy_r_strings, 0);
        CPy_INCREF(__tmp117);
        PyObject *__tmp118;
        if (likely(PyUnicode_Check(__tmp117)))
            __tmp118 = __tmp117;
        else {
            CPy_TypeError("str", __tmp117); 
            __tmp118 = NULL;
        }
        cpy_r_r93.f0 = __tmp118;
        PyObject *__tmp119 = PyTuple_GET_ITEM(cpy_r_strings, 1);
        CPy_INCREF(__tmp119);
        PyObject *__tmp120;
        if (likely(PyUnicode_Check(__tmp119)))
            __tmp120 = __tmp119;
        else {
            CPy_TypeError("str", __tmp119); 
            __tmp120 = NULL;
        }
        cpy_r_r93.f1 = __tmp120;
        PyObject *__tmp121 = PyTuple_GET_ITEM(cpy_r_strings, 2);
        CPy_INCREF(__tmp121);
        PyObject *__tmp122;
        if (likely(PyUnicode_Check(__tmp121)))
            __tmp122 = __tmp121;
        else {
            CPy_TypeError("str", __tmp121); 
            __tmp122 = NULL;
        }
        cpy_r_r93.f2 = __tmp122;
        PyObject *__tmp123 = PyTuple_GET_ITEM(cpy_r_strings, 3);
        CPy_INCREF(__tmp123);
        PyObject *__tmp124;
        if (likely(PyUnicode_Check(__tmp123)))
            __tmp124 = __tmp123;
        else {
            CPy_TypeError("str", __tmp123); 
            __tmp124 = NULL;
        }
        cpy_r_r93.f3 = __tmp124;
    }
    CPy_DECREF(cpy_r_strings);
    if (unlikely(cpy_r_r93.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL101;
    }
    cpy_r_r94 = CPyModule_builtins;
    cpy_r_r95 = CPyStatics[264]; /* 'map' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL102;
    }
    cpy_r_r97 = PyTuple_New(4);
    if (unlikely(cpy_r_r97 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp125 = cpy_r_r93.f0;
    PyTuple_SET_ITEM(cpy_r_r97, 0, __tmp125);
    PyObject *__tmp126 = cpy_r_r93.f1;
    PyTuple_SET_ITEM(cpy_r_r97, 1, __tmp126);
    PyObject *__tmp127 = cpy_r_r93.f2;
    PyTuple_SET_ITEM(cpy_r_r97, 2, __tmp127);
    PyObject *__tmp128 = cpy_r_r93.f3;
    PyTuple_SET_ITEM(cpy_r_r97, 3, __tmp128);
    PyObject *cpy_r_r98[2] = {cpy_r_r92, cpy_r_r97};
    cpy_r_r99 = (PyObject **)&cpy_r_r98;
    cpy_r_r100 = PyObject_Vectorcall(cpy_r_r96, cpy_r_r99, 2, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r101 = CPyModule_builtins;
    cpy_r_r102 = CPyStatics[265]; /* 'any' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL104;
    }
    PyObject *cpy_r_r104[1] = {cpy_r_r100};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = PyObject_Vectorcall(cpy_r_r103, cpy_r_r105, 1, 0);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL104;
    }
    CPy_DECREF(cpy_r_r100);
    if (unlikely(!PyBool_Check(cpy_r_r106))) {
        CPy_TypeError("bool", cpy_r_r106); cpy_r_r107 = 2;
    } else
        cpy_r_r107 = cpy_r_r106 == Py_True;
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    if (cpy_r_r107) goto CPyL63;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 305, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r108 = CPyStatic_multicall___log_warning;
    if (likely(cpy_r_r108 != NULL)) goto CPyL66;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_warning\" was not set");
    cpy_r_r109 = 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 306, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL66: ;
    PyObject *cpy_r_r110[1] = {cpy_r_e};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = PyObject_Vectorcall(cpy_r_r108, cpy_r_r111, 1, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 306, CPyStatic_multicall___globals);
        goto CPyL90;
    } else
        goto CPyL105;
CPyL67: ;
    cpy_r_r113 = CPyModule_builtins;
    cpy_r_r114 = CPyStatics[266]; /* 'TimeoutError' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 307, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r116 = PyObject_IsInstance(cpy_r_e, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 307, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r118 = cpy_r_r116;
    if (cpy_r_r118) goto CPyL89;
    cpy_r_r119 = CPyModule_builtins;
    cpy_r_r120 = CPyStatics[267]; /* 'ValueError' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 309, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r122 = PyObject_IsInstance(cpy_r_e, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 309, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r124 = cpy_r_r122;
    if (!cpy_r_r124) goto CPyL87;
    cpy_r_r125 = CPyStatics[268]; /* 'out of gas' */
    cpy_r_r126 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 310, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r127 = CPyStatics[253]; /* 'lower' */
    PyObject *cpy_r_r128[1] = {cpy_r_r126};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_VectorcallMethod(cpy_r_r127, cpy_r_r129, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 310, CPyStatic_multicall___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_r126);
    if (likely(PyUnicode_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "_raise_or_proceed", 310, CPyStatic_multicall___globals, "str", cpy_r_r130);
        goto CPyL90;
    }
    cpy_r_r132 = PyUnicode_Contains(cpy_r_r131, cpy_r_r125);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 310, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r134 = cpy_r_r132;
    cpy_r_r135 = cpy_r_r134 ^ 1;
    if (!cpy_r_r135) goto CPyL80;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 311, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r136 = cpy_r_ct_calls == 2;
    if (!cpy_r_r136) goto CPyL83;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 313, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r137 = CPyStatic_multicall___log_warning;
    if (likely(cpy_r_r137 != NULL)) goto CPyL86;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_warning\" was not set");
    cpy_r_r138 = 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 314, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL86: ;
    PyObject *cpy_r_r139[1] = {cpy_r_e};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = PyObject_Vectorcall(cpy_r_r137, cpy_r_r140, 1, 0);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 314, CPyStatic_multicall___globals);
        goto CPyL90;
    } else
        goto CPyL107;
CPyL87: ;
    CPy_Raise(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 316, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL89: ;
    return 1;
CPyL90: ;
    cpy_r_r142 = 2;
    return cpy_r_r142;
CPyL91: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL90;
CPyL92: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL89;
CPyL93: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL27;
CPyL94: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL90;
CPyL95: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL90;
CPyL96: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    goto CPyL90;
CPyL97: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL26;
CPyL98: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL89;
CPyL99: ;
    CPy_DecRef(cpy_r_strings);
    goto CPyL90;
CPyL100: ;
    CPy_DecRef(cpy_r_strings);
    CPy_DecRef(cpy_r_r85);
    goto CPyL90;
CPyL101: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL90;
CPyL102: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r93.f0);
    CPy_DecRef(cpy_r_r93.f1);
    CPy_DecRef(cpy_r_r93.f2);
    CPy_DecRef(cpy_r_r93.f3);
    goto CPyL90;
CPyL103: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r97);
    goto CPyL90;
CPyL104: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL90;
CPyL105: ;
    CPy_DECREF(cpy_r_r112);
    goto CPyL89;
CPyL106: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL90;
CPyL107: ;
    CPy_DECREF(cpy_r_r141);
    goto CPyL89;
}

PyObject *CPyPy_multicall____raise_or_proceed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"e", "ct_calls", "ConnErr_retries", 0};
    static CPyArg_Parser parser = {"OOO:_raise_or_proceed", kwlist, 0};
    PyObject *obj_e;
    PyObject *obj_ct_calls;
    PyObject *obj_ConnErr_retries;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_e, &obj_ct_calls, &obj_ConnErr_retries)) {
        return NULL;
    }
    PyObject *arg_e = obj_e;
    CPyTagged arg_ct_calls;
    if (likely(PyLong_Check(obj_ct_calls)))
        arg_ct_calls = CPyTagged_BorrowFromObject(obj_ct_calls);
    else {
        CPy_TypeError("int", obj_ct_calls); goto fail;
    }
    CPyTagged arg_ConnErr_retries;
    if (likely(PyLong_Check(obj_ConnErr_retries)))
        arg_ConnErr_retries = CPyTagged_BorrowFromObject(obj_ConnErr_retries);
    else {
        CPy_TypeError("int", obj_ConnErr_retries); goto fail;
    }
    char retval = CPyDef_multicall____raise_or_proceed(arg_e, arg_ct_calls, arg_ConnErr_retries);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 278, CPyStatic_multicall___globals);
    return NULL;
}

char CPyDef_multicall_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r17;
    PyObject **cpy_r_r18;
    PyObject **cpy_r_r19;
    void *cpy_r_r21;
    void *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    tuple_T2OO cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    tuple_T2OO cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", -1, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[411]; /* ('TimeoutError',) */
    cpy_r_r6 = CPyStatics[269]; /* 'asyncio' */
    cpy_r_r7 = CPyStatic_multicall___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 1, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_asyncio = cpy_r_r8;
    CPy_INCREF(CPyModule_asyncio);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[412]; /* ('time',) */
    cpy_r_r10 = CPyStatics[217]; /* 'time' */
    cpy_r_r11 = CPyStatic_multicall___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 2, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_time = cpy_r_r12;
    CPy_INCREF(CPyModule_time);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[413]; /* ('Any', 'Dict', 'Final', 'Generator', 'List', 'Optional',
                                    'Sequence', 'Tuple', 'Union', 'final') */
    cpy_r_r14 = CPyStatics[42]; /* 'typing' */
    cpy_r_r15 = CPyStatic_multicall___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 3, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject **)&CPyModule_aiohttp;
    cpy_r_r18 = (PyObject **)&CPyModule_cchecksum;
    cpy_r_r19 = (PyObject **)&CPyModule_requests;
    PyObject **cpy_r_r20[3] = {cpy_r_r17, cpy_r_r18, cpy_r_r19};
    cpy_r_r21 = (void *)&cpy_r_r20;
    int64_t cpy_r_r22[3] = {5, 6, 7};
    cpy_r_r23 = (void *)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[417]; /* (('aiohttp', 'aiohttp', 'aiohttp'),
                                    ('cchecksum', 'cchecksum', 'cchecksum'),
                                    ('requests', 'requests', 'requests')) */
    cpy_r_r25 = CPyStatic_multicall___globals;
    cpy_r_r26 = CPyStatics[271]; /* 'multicall/multicall.py' */
    cpy_r_r27 = CPyStatics[45]; /* '<module>' */
    cpy_r_r28 = CPyImport_ImportMany(cpy_r_r24, cpy_r_r21, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r23);
    if (!cpy_r_r28) goto CPyL55;
    cpy_r_r29 = CPyStatics[418]; /* ('AnyAddress',) */
    cpy_r_r30 = CPyStatics[51]; /* 'eth_typing' */
    cpy_r_r31 = CPyStatic_multicall___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 8, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_eth_typing = cpy_r_r32;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[419]; /* ('toolz',) */
    cpy_r_r34 = CPyStatics[273]; /* 'eth_utils' */
    cpy_r_r35 = CPyStatic_multicall___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 9, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_eth_utils = cpy_r_r36;
    CPy_INCREF(CPyModule_eth_utils);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[393]; /* ('Web3',) */
    cpy_r_r38 = CPyStatics[55]; /* 'web3' */
    cpy_r_r39 = CPyStatic_multicall___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 10, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_web3 = cpy_r_r40;
    CPy_INCREF(CPyModule_web3);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[420]; /* ('Call',) */
    cpy_r_r42 = CPyStatics[71]; /* 'multicall.call' */
    cpy_r_r43 = CPyStatic_multicall___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 12, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_multicall___call = cpy_r_r44;
    CPy_INCREF(CPyModule_multicall___call);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[421]; /* ('GAS_LIMIT', 'MULTICALL2_ADDRESSES',
                                    'MULTICALL3_ADDRESSES', 'MULTICALL3_BYTECODE', 'w3') */
    cpy_r_r46 = CPyStatics[57]; /* 'multicall.constants' */
    cpy_r_r47 = CPyStatic_multicall___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 13, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_multicall___constants = cpy_r_r48;
    CPy_INCREF(CPyModule_multicall___constants);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[396]; /* ('setup_logger',) */
    cpy_r_r50 = CPyStatics[61]; /* 'multicall.loggers' */
    cpy_r_r51 = CPyStatic_multicall___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 20, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_multicall___loggers = cpy_r_r52;
    CPy_INCREF(CPyModule_multicall___loggers);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[422]; /* ('_get_semaphore', 'await_awaitable', 'chain_id',
                                    'gather', 'state_override_supported') */
    cpy_r_r54 = CPyStatics[65]; /* 'multicall.utils' */
    cpy_r_r55 = CPyStatic_multicall___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 21, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_multicall___utils = cpy_r_r56;
    CPy_INCREF(CPyModule_multicall___utils);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatic_multicall___globals;
    cpy_r_r58 = CPyStatics[66]; /* '__name__' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 29, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    if (likely(PyUnicode_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "<module>", 29, CPyStatic_multicall___globals, "str", cpy_r_r59);
        goto CPyL55;
    }
    cpy_r_r61 = CPyDef_loggers___setup_logger(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 29, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___logger = cpy_r_r61;
    CPy_INCREF(CPyStatic_multicall___logger);
    cpy_r_r62 = CPyStatic_multicall___globals;
    cpy_r_r63 = CPyStatics[67]; /* 'logger' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 29, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r66 = CPyStatic_multicall___logger;
    if (likely(cpy_r_r66 != NULL)) goto CPyL21;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 30, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r68 = CPyStatics[274]; /* 'warning' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 30, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___log_warning = cpy_r_r69;
    CPy_INCREF(CPyStatic_multicall___log_warning);
    cpy_r_r70 = CPyStatic_multicall___globals;
    cpy_r_r71 = CPyStatics[275]; /* 'log_warning' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 30, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r74 = CPyStatic_multicall___logger;
    if (likely(cpy_r_r74 != NULL)) goto CPyL26;
    PyErr_SetString(PyExc_NameError, "value for final name \"logger\" was not set");
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 31, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r76 = CPyStatics[68]; /* 'debug' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 31, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___log_debug = cpy_r_r77;
    CPy_INCREF(CPyStatic_multicall___log_debug);
    cpy_r_r78 = CPyStatic_multicall___globals;
    cpy_r_r79 = CPyStatics[69]; /* 'log_debug' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r78, cpy_r_r79, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 31, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r82 = CPyStatic_multicall___globals;
    cpy_r_r83 = CPyStatics[39]; /* 'Tuple' */
    cpy_r_r84 = CPyDict_GetItem(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 33, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r85 = CPyStatic_multicall___globals;
    cpy_r_r86 = CPyStatics[40]; /* 'Union' */
    cpy_r_r87 = CPyDict_GetItem(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 33, CPyStatic_multicall___globals);
        goto CPyL56;
    }
    cpy_r_r88 = Py_None;
    cpy_r_r89 = (PyObject *)&PyBool_Type;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90.f0 = cpy_r_r88;
    cpy_r_r90.f1 = cpy_r_r89;
    cpy_r_r91 = PyTuple_New(2);
    if (unlikely(cpy_r_r91 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp129 = cpy_r_r90.f0;
    PyTuple_SET_ITEM(cpy_r_r91, 0, __tmp129);
    PyObject *__tmp130 = cpy_r_r90.f1;
    PyTuple_SET_ITEM(cpy_r_r91, 1, __tmp130);
    cpy_r_r92 = PyObject_GetItem(cpy_r_r87, cpy_r_r91);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 33, CPyStatic_multicall___globals);
        goto CPyL56;
    }
    cpy_r_r93 = (PyObject *)&PyBytes_Type;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94.f0 = cpy_r_r92;
    cpy_r_r94.f1 = cpy_r_r93;
    cpy_r_r95 = PyTuple_New(2);
    if (unlikely(cpy_r_r95 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp131 = cpy_r_r94.f0;
    PyTuple_SET_ITEM(cpy_r_r95, 0, __tmp131);
    PyObject *__tmp132 = cpy_r_r94.f1;
    PyTuple_SET_ITEM(cpy_r_r95, 1, __tmp132);
    cpy_r_r96 = PyObject_GetItem(cpy_r_r84, cpy_r_r95);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 33, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r97 = CPyStatic_multicall___globals;
    cpy_r_r98 = CPyStatics[276]; /* 'CallResponse' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 33, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r101 = CPyModule_cchecksum;
    cpy_r_r102 = CPyStatics[3]; /* 'to_checksum_address' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 35, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___to_checksum_address = cpy_r_r103;
    CPy_INCREF(CPyStatic_multicall___to_checksum_address);
    cpy_r_r104 = CPyStatic_multicall___globals;
    cpy_r_r105 = CPyStatics[3]; /* 'to_checksum_address' */
    cpy_r_r106 = CPyDict_SetItem(cpy_r_r104, cpy_r_r105, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 35, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r108 = CPyStatic_multicall___globals;
    cpy_r_r109 = CPyStatics[272]; /* 'toolz' */
    cpy_r_r110 = CPyDict_GetItem(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 37, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r111 = CPyStatics[277]; /* 'concat' */
    cpy_r_r112 = CPyObject_GetAttr(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 37, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___concat = cpy_r_r112;
    CPy_INCREF(CPyStatic_multicall___concat);
    cpy_r_r113 = CPyStatic_multicall___globals;
    cpy_r_r114 = CPyStatics[277]; /* 'concat' */
    cpy_r_r115 = CPyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 37, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r117 = CPyStatic_multicall___globals;
    cpy_r_r118 = CPyStatics[272]; /* 'toolz' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 38, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r120 = CPyStatics[278]; /* 'mapcat' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 38, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___mapcat = cpy_r_r121;
    CPy_INCREF(CPyStatic_multicall___mapcat);
    cpy_r_r122 = CPyStatic_multicall___globals;
    cpy_r_r123 = CPyStatics[278]; /* 'mapcat' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r122, cpy_r_r123, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 38, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r126 = NULL;
    cpy_r_r127 = CPyStatics[279]; /* 'multicall.multicall' */
    cpy_r_r128 = (PyObject *)CPyType_multicall___Multicall_template;
    cpy_r_r129 = CPyType_FromTemplate(cpy_r_r128, cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 52, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r130 = CPyDef_multicall___Multicall_trait_vtable_setup();
    if (unlikely(cpy_r_r130 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", -1, CPyStatic_multicall___globals);
        goto CPyL57;
    }
    cpy_r_r131 = CPyStatics[72]; /* '__mypyc_attrs__' */
    cpy_r_r132 = CPyStatics[280]; /* 'calls' */
    cpy_r_r133 = CPyStatics[75]; /* 'block_id' */
    cpy_r_r134 = CPyStatics[281]; /* 'require_success' */
    cpy_r_r135 = CPyStatics[76]; /* 'gas_limit' */
    cpy_r_r136 = CPyStatics[9]; /* 'w3' */
    cpy_r_r137 = CPyStatics[78]; /* 'origin' */
    cpy_r_r138 = CPyStatics[282]; /* 'chainid' */
    cpy_r_r139 = CPyStatics[283]; /* 'multicall_address' */
    cpy_r_r140 = PyTuple_Pack(8, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 52, CPyStatic_multicall___globals);
        goto CPyL57;
    }
    cpy_r_r141 = PyObject_SetAttr(cpy_r_r129, cpy_r_r131, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 52, CPyStatic_multicall___globals);
        goto CPyL57;
    }
    CPyType_multicall___Multicall = (PyTypeObject *)cpy_r_r129;
    CPy_INCREF(CPyType_multicall___Multicall);
    cpy_r_r143 = CPyStatic_multicall___globals;
    cpy_r_r144 = CPyStatics[284]; /* 'Multicall' */
    cpy_r_r145 = PyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 52, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r147 = CPyStatic_multicall___globals;
    cpy_r_r148 = CPyStatics[9]; /* 'w3' */
    cpy_r_r149 = CPyDict_GetItem(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 70, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___multicall___multicall___Multicall_____init______w3 = cpy_r_r149;
    CPy_INCREF(CPyStatic_multicall___multicall___multicall___Multicall_____init______w3);
    CPy_DECREF(cpy_r_r149);
    cpy_r_r150 = NULL;
    cpy_r_r151 = CPyStatics[279]; /* 'multicall.multicall' */
    cpy_r_r152 = (PyObject *)CPyType_multicall___NotSoBrightBatcher_template;
    cpy_r_r153 = CPyType_FromTemplate(cpy_r_r152, cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 223, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r154 = CPyDef_multicall___NotSoBrightBatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", -1, CPyStatic_multicall___globals);
        goto CPyL58;
    }
    cpy_r_r155 = CPyStatics[72]; /* '__mypyc_attrs__' */
    cpy_r_r156 = CPyStatics[285]; /* 'step' */
    cpy_r_r157 = PyTuple_Pack(1, cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 223, CPyStatic_multicall___globals);
        goto CPyL58;
    }
    cpy_r_r158 = PyObject_SetAttr(cpy_r_r153, cpy_r_r155, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 223, CPyStatic_multicall___globals);
        goto CPyL58;
    }
    CPyType_multicall___NotSoBrightBatcher = (PyTypeObject *)cpy_r_r153;
    CPy_INCREF(CPyType_multicall___NotSoBrightBatcher);
    cpy_r_r160 = CPyStatic_multicall___globals;
    cpy_r_r161 = CPyStatics[286]; /* 'NotSoBrightBatcher' */
    cpy_r_r162 = PyDict_SetItem(cpy_r_r160, cpy_r_r161, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 223, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r164 = CPyDef_multicall___NotSoBrightBatcher();
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 275, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___batcher = cpy_r_r164;
    CPy_INCREF_NO_IMM(CPyStatic_multicall___batcher);
    cpy_r_r165 = CPyStatic_multicall___globals;
    cpy_r_r166 = CPyStatics[287]; /* 'batcher' */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r165, cpy_r_r166, cpy_r_r164);
    CPy_DECREF_NO_IMM(cpy_r_r164);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 275, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    return 1;
CPyL55: ;
    cpy_r_r169 = 2;
    return cpy_r_r169;
CPyL56: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL55;
CPyL57: ;
    CPy_DecRef(cpy_r_r129);
    goto CPyL55;
CPyL58: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL55;
}

static int
signature___Signature_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef_signature_____mypyc__Signature_setup(PyObject *cpy_r_type);
PyObject *CPyDef_signature___Signature(PyObject *cpy_r_signature);

static PyObject *
signature___Signature_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_signature___Signature) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef_signature_____mypyc__Signature_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_signature___Signature_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
signature___Signature_traverse(multicall___signature___SignatureObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_signature);
    Py_VISIT(self->_function);
    Py_VISIT(self->_input_types);
    Py_VISIT(self->_output_types);
    Py_VISIT(self->_fourbyte);
    Py_VISIT(self->__encoder);
    Py_VISIT(self->__decoder);
    return 0;
}

static int
signature___Signature_clear(multicall___signature___SignatureObject *self)
{
    Py_CLEAR(self->_signature);
    Py_CLEAR(self->_function);
    Py_CLEAR(self->_input_types);
    Py_CLEAR(self->_output_types);
    Py_CLEAR(self->_fourbyte);
    Py_CLEAR(self->__encoder);
    Py_CLEAR(self->__decoder);
    return 0;
}

static void
signature___Signature_dealloc(multicall___signature___SignatureObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, signature___Signature_dealloc)
    signature___Signature_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem signature___Signature_vtable[3];
static bool
CPyDef_signature___Signature_trait_vtable_setup(void)
{
    CPyVTableItem signature___Signature_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_signature___Signature_____init__,
        (CPyVTableItem)CPyDef_signature___Signature___encode_data,
        (CPyVTableItem)CPyDef_signature___Signature___decode_data,
    };
    memcpy(signature___Signature_vtable, signature___Signature_vtable_scratch, sizeof(signature___Signature_vtable));
    return 1;
}

static PyObject *
signature___Signature_get_signature(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set_signature(multicall___signature___SignatureObject *self, PyObject *value, void *closure);
static PyObject *
signature___Signature_get_function(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set_function(multicall___signature___SignatureObject *self, PyObject *value, void *closure);
static PyObject *
signature___Signature_get_input_types(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set_input_types(multicall___signature___SignatureObject *self, PyObject *value, void *closure);
static PyObject *
signature___Signature_get_output_types(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set_output_types(multicall___signature___SignatureObject *self, PyObject *value, void *closure);
static PyObject *
signature___Signature_get_fourbyte(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set_fourbyte(multicall___signature___SignatureObject *self, PyObject *value, void *closure);
static PyObject *
signature___Signature_get__encoder(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set__encoder(multicall___signature___SignatureObject *self, PyObject *value, void *closure);
static PyObject *
signature___Signature_get__decoder(multicall___signature___SignatureObject *self, void *closure);
static int
signature___Signature_set__decoder(multicall___signature___SignatureObject *self, PyObject *value, void *closure);

static PyGetSetDef signature___Signature_getseters[] = {
    {"signature",
     (getter)signature___Signature_get_signature, (setter)signature___Signature_set_signature,
     NULL, NULL},
    {"function",
     (getter)signature___Signature_get_function, (setter)signature___Signature_set_function,
     NULL, NULL},
    {"input_types",
     (getter)signature___Signature_get_input_types, (setter)signature___Signature_set_input_types,
     NULL, NULL},
    {"output_types",
     (getter)signature___Signature_get_output_types, (setter)signature___Signature_set_output_types,
     NULL, NULL},
    {"fourbyte",
     (getter)signature___Signature_get_fourbyte, (setter)signature___Signature_set_fourbyte,
     NULL, NULL},
    {"_encoder",
     (getter)signature___Signature_get__encoder, (setter)signature___Signature_set__encoder,
     NULL, NULL},
    {"_decoder",
     (getter)signature___Signature_get__decoder, (setter)signature___Signature_set__decoder,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef signature___Signature_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_signature___Signature_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, signature)\n--\n\n")},
    {"encode_data",
     (PyCFunction)CPyPy_signature___Signature___encode_data,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("encode_data($self, args=None)\n--\n\n")},
    {"decode_data",
     (PyCFunction)CPyPy_signature___Signature___decode_data,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("decode_data($self, output)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_signature___Signature_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Signature",
    .tp_new = signature___Signature_new,
    .tp_dealloc = (destructor)signature___Signature_dealloc,
    .tp_traverse = (traverseproc)signature___Signature_traverse,
    .tp_clear = (inquiry)signature___Signature_clear,
    .tp_getset = signature___Signature_getseters,
    .tp_methods = signature___Signature_methods,
    .tp_init = signature___Signature_init,
    .tp_basicsize = sizeof(multicall___signature___SignatureObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("Signature(signature)\n--\n\n"),
};
static PyTypeObject *CPyType_signature___Signature_template = &CPyType_signature___Signature_template_;

PyObject *CPyDef_signature_____mypyc__Signature_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    multicall___signature___SignatureObject *self;
    self = (multicall___signature___SignatureObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = signature___Signature_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_signature___Signature(PyObject *cpy_r_signature)
{
    PyObject *self = CPyDef_signature_____mypyc__Signature_setup((PyObject *)CPyType_signature___Signature);
    if (self == NULL)
        return NULL;
    char res = CPyDef_signature___Signature_____init__(self, cpy_r_signature);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
signature___Signature_get_signature(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->_signature == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'signature' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF(self->_signature);
    PyObject *retval = self->_signature;
    return retval;
}

static int
signature___Signature_set_signature(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute 'signature' cannot be deleted");
        return -1;
    }
    if (self->_signature != NULL) {
        CPy_DECREF(self->_signature);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_signature = tmp;
    return 0;
}

static PyObject *
signature___Signature_get_function(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->_function == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'function' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF(self->_function);
    PyObject *retval = self->_function;
    return retval;
}

static int
signature___Signature_set_function(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute 'function' cannot be deleted");
        return -1;
    }
    if (self->_function != NULL) {
        CPy_DECREF(self->_function);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_function = tmp;
    return 0;
}

static PyObject *
signature___Signature_get_input_types(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->_input_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'input_types' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->_input_types);
    PyObject *retval = self->_input_types;
    return retval;
}

static int
signature___Signature_set_input_types(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute 'input_types' cannot be deleted");
        return -1;
    }
    if (self->_input_types != NULL) {
        CPy_DECREF_NO_IMM(self->_input_types);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->_input_types = tmp;
    return 0;
}

static PyObject *
signature___Signature_get_output_types(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->_output_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'output_types' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->_output_types);
    PyObject *retval = self->_output_types;
    return retval;
}

static int
signature___Signature_set_output_types(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute 'output_types' cannot be deleted");
        return -1;
    }
    if (self->_output_types != NULL) {
        CPy_DECREF_NO_IMM(self->_output_types);
    }
    PyObject *tmp;
    if (likely(PyList_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("list", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->_output_types = tmp;
    return 0;
}

static PyObject *
signature___Signature_get_fourbyte(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->_fourbyte == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fourbyte' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fourbyte);
    PyObject *retval = self->_fourbyte;
    return retval;
}

static int
signature___Signature_set_fourbyte(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute 'fourbyte' cannot be deleted");
        return -1;
    }
    if (self->_fourbyte != NULL) {
        CPy_DECREF(self->_fourbyte);
    }
    PyObject *tmp;
    if (likely(PyBytes_Check(value) || PyByteArray_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("bytes", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fourbyte = tmp;
    return 0;
}

static PyObject *
signature___Signature_get__encoder(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->__encoder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_encoder' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF(self->__encoder);
    PyObject *retval = self->__encoder;
    return retval;
}

static int
signature___Signature_set__encoder(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute '_encoder' cannot be deleted");
        return -1;
    }
    if (self->__encoder != NULL) {
        CPy_DECREF(self->__encoder);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL133;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL133;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL133: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__encoder = tmp;
    return 0;
}

static PyObject *
signature___Signature_get__decoder(multicall___signature___SignatureObject *self, void *closure)
{
    if (unlikely(self->__decoder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_decoder' of 'Signature' undefined");
        return NULL;
    }
    CPy_INCREF(self->__decoder);
    PyObject *retval = self->__decoder;
    return retval;
}

static int
signature___Signature_set__decoder(multicall___signature___SignatureObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Signature' object attribute '_decoder' cannot be deleted");
        return -1;
    }
    if (self->__decoder != NULL) {
        CPy_DECREF(self->__decoder);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->__decoder = tmp;
    return 0;
}
static PyMethodDef signaturemodule_methods[] = {
    {"get_4byte_selector", (PyCFunction)CPyPy_signature___get_4byte_selector, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("get_4byte_selector(signature)\n--\n\n") /* docstring */},
    {"parse_signature", (PyCFunction)CPyPy_signature___parse_signature, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("parse_signature(signature)\n--\n\n") /* docstring */},
    {"parse_typestring", (PyCFunction)CPyPy_signature___parse_typestring, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("parse_typestring(typestring)\n--\n\n") /* docstring */},
    {"_get_signature", (PyCFunction)CPyPy_signature____get_signature, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_get_signature(signature)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_multicall___signature(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___signature__internal, "__name__");
    CPyStatic_signature___globals = PyModule_GetDict(CPyModule_multicall___signature__internal);
    if (unlikely(CPyStatic_signature___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_signature_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_multicall___signature__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_signature____SIGNATURES);
    CPyStatic_signature____SIGNATURES = NULL;
    CPy_XDECREF(CPyStatic_signature___TupleEncoder);
    CPyStatic_signature___TupleEncoder = NULL;
    CPy_XDECREF(CPyStatic_signature___TupleDecoder);
    CPyStatic_signature___TupleDecoder = NULL;
    CPy_XDECREF(CPyStatic_signature____keccak);
    CPyStatic_signature____keccak = NULL;
    CPy_XDECREF(CPyStatic_signature____get_encoder);
    CPyStatic_signature____get_encoder = NULL;
    CPy_XDECREF(CPyStatic_signature____get_decoder);
    CPyStatic_signature____get_decoder = NULL;
    CPy_XDECREF(CPyStatic_signature____stream_cls);
    CPyStatic_signature____stream_cls = NULL;
    Py_CLEAR(CPyType_signature___Signature);
    return -1;
}
static struct PyModuleDef signaturemodule = {
    PyModuleDef_HEAD_INIT,
    "multicall.signature",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    signaturemodule_methods,
    NULL,
};

PyObject *CPyInit_multicall___signature(void)
{
    if (CPyModule_multicall___signature__internal) {
        Py_INCREF(CPyModule_multicall___signature__internal);
        return CPyModule_multicall___signature__internal;
    }
    CPyModule_multicall___signature__internal = PyModule_Create(&signaturemodule);
    if (unlikely(CPyModule_multicall___signature__internal == NULL))
        goto fail;
    if (CPyExec_multicall___signature(CPyModule_multicall___signature__internal) != 0)
        goto fail;
    return CPyModule_multicall___signature__internal;
    fail:
    return NULL;
}

PyObject *CPyDef_signature___get_4byte_selector(PyObject *cpy_r_signature) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[288]; /* ' ' */
    cpy_r_r1 = CPyStatics[245]; /* '' */
    cpy_r_r2 = PyUnicode_Replace(cpy_r_signature, cpy_r_r0, cpy_r_r1, -1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "get_4byte_selector", 22, CPyStatic_signature___globals);
        goto CPyL9;
    }
    cpy_r_r3 = PyUnicode_AsUTF8String(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "get_4byte_selector", 22, CPyStatic_signature___globals);
        goto CPyL9;
    }
    cpy_r_r4 = CPyStatic_signature____keccak;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL10;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_keccak\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/signature.py", "get_4byte_selector", 22, CPyStatic_signature___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL5: ;
    PyObject *cpy_r_r6[1] = {cpy_r_r3};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_r4, cpy_r_r7, 1, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "get_4byte_selector", 22, CPyStatic_signature___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyBytes_Check(cpy_r_r8) || PyByteArray_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "get_4byte_selector", 22, CPyStatic_signature___globals, "bytes", cpy_r_r8);
        goto CPyL9;
    }
    cpy_r_r10 = CPyBytes_GetSlice(cpy_r_r9, 0, 8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "get_4byte_selector", 22, CPyStatic_signature___globals);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL9: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL3;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
}

PyObject *CPyPy_signature___get_4byte_selector(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"signature", 0};
    static CPyArg_Parser parser = {"O:get_4byte_selector", kwlist, 0};
    PyObject *obj_signature;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_signature)) {
        return NULL;
    }
    PyObject *arg_signature;
    if (likely(PyUnicode_Check(obj_signature)))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("str", obj_signature); 
        goto fail;
    }
    PyObject *retval = CPyDef_signature___get_4byte_selector(arg_signature);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "get_4byte_selector", 21, CPyStatic_signature___globals);
    return NULL;
}

tuple_T3OOO CPyDef_signature___parse_signature(PyObject *cpy_r_signature) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_start;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_end;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    int64_t cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 48, CPyStatic_signature___globals);
        goto CPyL32;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 49, CPyStatic_signature___globals);
        goto CPyL33;
    }
    cpy_r_start = 0;
    cpy_r_r2 = 0;
    cpy_r_r3 = CPyStr_Size_size_t(cpy_r_signature);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 51, CPyStatic_signature___globals);
        goto CPyL34;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = cpy_r_r5 < cpy_r_r3;
    if (!cpy_r_r6) goto CPyL35;
    cpy_r_end = cpy_r_r2;
    cpy_r_r7 = CPyStr_GetItemUnsafe(cpy_r_signature, cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 51, CPyStatic_signature___globals);
        goto CPyL36;
    }
    cpy_r_r8 = CPyStatics[289]; /* '(' */
    cpy_r_r9 = CPyStr_Equal(cpy_r_r7, cpy_r_r8);
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = PyList_Append(cpy_r_r1, cpy_r_r7);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 53, CPyStatic_signature___globals);
        goto CPyL37;
    }
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL13;
    cpy_r_r16 = CPyStr_GetSlice(cpy_r_signature, cpy_r_start, cpy_r_end);
    CPyTagged_DECREF(cpy_r_start);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 55, CPyStatic_signature___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 55, CPyStatic_signature___globals, "str", cpy_r_r16);
        goto CPyL38;
    }
    cpy_r_r18 = PyList_Append(cpy_r_r0, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 55, CPyStatic_signature___globals);
        goto CPyL38;
    }
    CPyTagged_INCREF(cpy_r_end);
    cpy_r_start = cpy_r_end;
CPyL13: ;
    cpy_r_r20 = CPyStatics[290]; /* ')' */
    cpy_r_r21 = CPyStr_Equal(cpy_r_r7, cpy_r_r20);
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r21) goto CPyL39;
    cpy_r_r22 = CPyList_PopLast(cpy_r_r1);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 58, CPyStatic_signature___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeError("str", cpy_r_r22); 
        cpy_r_r23 = NULL;
    }
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 58, CPyStatic_signature___globals);
        goto CPyL36;
    } else
        goto CPyL40;
CPyL16: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = cpy_r_r26 != 0;
    if (cpy_r_r27) goto CPyL39;
    cpy_r_r28 = CPyTagged_Add(cpy_r_end, 2);
    cpy_r_r29 = CPyStr_GetSlice(cpy_r_signature, cpy_r_start, cpy_r_r28);
    CPyTagged_DECREF(cpy_r_start);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 60, CPyStatic_signature___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 60, CPyStatic_signature___globals, "str", cpy_r_r29);
        goto CPyL41;
    }
    cpy_r_r31 = PyList_Append(cpy_r_r0, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 60, CPyStatic_signature___globals);
        goto CPyL41;
    }
    cpy_r_r33 = CPyTagged_Add(cpy_r_end, 2);
    CPyTagged_DECREF(cpy_r_end);
    cpy_r_start = cpy_r_r33;
CPyL21: ;
    cpy_r_r34 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r34;
    cpy_r_r35 = cpy_r_r5 + 1;
    cpy_r_r5 = cpy_r_r35;
    goto CPyL4;
CPyL22: ;
    cpy_r_r36 = CPyStatics[245]; /* '' */
    cpy_r_r37 = CPyList_GetSlice(cpy_r_r0, 0, 4);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 62, CPyStatic_signature___globals);
        goto CPyL33;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 62, CPyStatic_signature___globals, "list", cpy_r_r37);
        goto CPyL33;
    }
    cpy_r_r39 = PyUnicode_Join(cpy_r_r36, cpy_r_r38);
    CPy_DECREF_NO_IMM(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 62, CPyStatic_signature___globals);
        goto CPyL33;
    }
    cpy_r_r40 = CPyList_GetItemShort(cpy_r_r0, 2);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 63, CPyStatic_signature___globals);
        goto CPyL42;
    }
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 63, CPyStatic_signature___globals, "str", cpy_r_r40);
        goto CPyL42;
    }
    cpy_r_r42 = CPyDef_signature___parse_typestring(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 63, CPyStatic_signature___globals);
        goto CPyL42;
    }
    cpy_r_r43 = CPyList_GetItemShort(cpy_r_r0, 4);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 64, CPyStatic_signature___globals);
        goto CPyL43;
    }
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 64, CPyStatic_signature___globals, "str", cpy_r_r43);
        goto CPyL43;
    }
    cpy_r_r45 = CPyDef_signature___parse_typestring(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 64, CPyStatic_signature___globals);
        goto CPyL43;
    }
    cpy_r_r46.f0 = cpy_r_r39;
    cpy_r_r46.f1 = cpy_r_r42;
    cpy_r_r46.f2 = cpy_r_r45;
    return cpy_r_r46;
CPyL32: ;
    tuple_T3OOO __tmp134 = { NULL, NULL, NULL };
    cpy_r_r47 = __tmp134;
    return cpy_r_r47;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_start);
    goto CPyL32;
CPyL35: ;
    CPy_DECREF_NO_IMM(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_start);
    goto CPyL22;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_start);
    CPyTagged_DecRef(cpy_r_end);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_start);
    CPyTagged_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r7);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r7);
    goto CPyL32;
CPyL39: ;
    CPyTagged_DECREF(cpy_r_end);
    goto CPyL21;
CPyL40: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL16;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_end);
    goto CPyL32;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL32;
}

PyObject *CPyPy_signature___parse_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"signature", 0};
    static CPyArg_Parser parser = {"O:parse_signature", kwlist, 0};
    PyObject *obj_signature;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_signature)) {
        return NULL;
    }
    PyObject *arg_signature;
    if (likely(PyUnicode_Check(obj_signature)))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("str", obj_signature); 
        goto fail;
    }
    tuple_T3OOO retval = CPyDef_signature___parse_signature(arg_signature);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp135 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp135);
    PyObject *__tmp136 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp136);
    PyObject *__tmp137 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp137);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "parse_signature", 25, CPyStatic_signature___globals);
    return NULL;
}

PyObject *CPyDef_signature___parse_typestring(PyObject *cpy_r_typestring) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_part;
    CPyTagged cpy_r_inside_tuples;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int64_t cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyStatics[291]; /* '()' */
    cpy_r_r1 = CPyStr_Equal(cpy_r_typestring, cpy_r_r0);
    if (!cpy_r_r1) goto CPyL3;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 70, CPyStatic_signature___globals);
        goto CPyL23;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 71, CPyStatic_signature___globals);
        goto CPyL23;
    }
    cpy_r_r4 = CPyStatics[245]; /* '' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_part = cpy_r_r4;
    cpy_r_inside_tuples = 0;
    cpy_r_r5 = CPyStr_GetSlice(cpy_r_typestring, 2, -2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals, "str", cpy_r_r5);
        goto CPyL24;
    }
    cpy_r_r7 = CPyStr_Size_size_t(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals);
        goto CPyL25;
    }
    cpy_r_r9 = 0;
CPyL8: ;
    cpy_r_r10 = cpy_r_r9 < cpy_r_r7;
    if (!cpy_r_r10) goto CPyL26;
    cpy_r_r11 = CPyStr_GetItemUnsafe(cpy_r_r6, cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals);
        goto CPyL25;
    }
    cpy_r_r12 = CPyStatics[289]; /* '(' */
    cpy_r_r13 = CPyStr_Equal(cpy_r_r11, cpy_r_r12);
    if (!cpy_r_r13) goto CPyL12;
    cpy_r_r14 = CPyTagged_Add(cpy_r_inside_tuples, 2);
    CPyTagged_DECREF(cpy_r_inside_tuples);
    cpy_r_inside_tuples = cpy_r_r14;
    goto CPyL18;
CPyL12: ;
    cpy_r_r15 = CPyStatics[290]; /* ')' */
    cpy_r_r16 = CPyStr_Equal(cpy_r_r11, cpy_r_r15);
    if (!cpy_r_r16) goto CPyL14;
    cpy_r_r17 = CPyTagged_Subtract(cpy_r_inside_tuples, 2);
    CPyTagged_DECREF(cpy_r_inside_tuples);
    cpy_r_inside_tuples = cpy_r_r17;
    goto CPyL18;
CPyL14: ;
    cpy_r_r18 = CPyStatics[292]; /* ',' */
    cpy_r_r19 = CPyStr_Equal(cpy_r_r11, cpy_r_r18);
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r20 = cpy_r_inside_tuples == 0;
    if (cpy_r_r20) {
        goto CPyL27;
    } else
        goto CPyL18;
CPyL16: ;
    cpy_r_r21 = PyList_Append(cpy_r_r3, cpy_r_part);
    CPy_DECREF(cpy_r_part);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 80, CPyStatic_signature___globals);
        goto CPyL28;
    }
    cpy_r_r23 = CPyStatics[245]; /* '' */
    CPy_INCREF(cpy_r_r23);
    cpy_r_part = cpy_r_r23;
    goto CPyL20;
CPyL18: ;
    cpy_r_r24 = CPyStr_Append(cpy_r_part, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 83, CPyStatic_signature___globals);
        goto CPyL28;
    }
    cpy_r_part = cpy_r_r24;
CPyL20: ;
    cpy_r_r25 = cpy_r_r9 + 1;
    cpy_r_r9 = cpy_r_r25;
    goto CPyL8;
CPyL21: ;
    cpy_r_r26 = PyList_Append(cpy_r_r3, cpy_r_part);
    CPy_DECREF(cpy_r_part);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 84, CPyStatic_signature___globals);
        goto CPyL29;
    }
    return cpy_r_r3;
CPyL23: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL24: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_part);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_part);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    CPy_DecRef(cpy_r_r6);
    goto CPyL23;
CPyL26: ;
    CPyTagged_DECREF(cpy_r_inside_tuples);
    CPy_DECREF(cpy_r_r6);
    goto CPyL21;
CPyL27: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL16;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    CPy_DecRef(cpy_r_r6);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL23;
}

PyObject *CPyPy_signature___parse_typestring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typestring", 0};
    static CPyArg_Parser parser = {"O:parse_typestring", kwlist, 0};
    PyObject *obj_typestring;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typestring)) {
        return NULL;
    }
    PyObject *arg_typestring;
    if (likely(PyUnicode_Check(obj_typestring)))
        arg_typestring = obj_typestring;
    else {
        CPy_TypeError("str", obj_typestring); 
        goto fail;
    }
    PyObject *retval = CPyDef_signature___parse_typestring(arg_typestring);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "parse_typestring", 68, CPyStatic_signature___globals);
    return NULL;
}

PyObject *CPyDef_signature____get_signature(PyObject *cpy_r_signature) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatic_signature____SIGNATURES;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"_SIGNATURES\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("multicall/signature.py", "_get_signature", 90, CPyStatic_signature___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_signature);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "_get_signature", 90, CPyStatic_signature___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_signature___Signature))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "_get_signature", 90, CPyStatic_signature___globals, "multicall.signature.Signature", cpy_r_r2);
        goto CPyL7;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[293]; /* 'KeyError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "_get_signature", 91, CPyStatic_signature___globals);
        goto CPyL17;
    }
    cpy_r_r8 = CPy_ExceptionMatches(cpy_r_r7);
    CPy_DecRef(cpy_r_r7);
    if (!cpy_r_r8) goto CPyL15;
    cpy_r_r9 = CPyDef_signature___Signature(cpy_r_signature);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "_get_signature", 92, CPyStatic_signature___globals);
        goto CPyL17;
    }
    cpy_r_r10 = CPyStatic_signature____SIGNATURES;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL20;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_SIGNATURES\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("multicall/signature.py", "_get_signature", 93, CPyStatic_signature___globals);
        goto CPyL17;
    } else
        goto CPyL21;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r10, cpy_r_signature, cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("multicall/signature.py", "_get_signature", 93, CPyStatic_signature___globals);
        goto CPyL22;
    }
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    return cpy_r_r9;
CPyL15: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL23;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r14 = CPy_KeepPropagating();
    if (!cpy_r_r14) goto CPyL19;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL20: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL11;
CPyL21: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL12;
CPyL22: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL16;
}

PyObject *CPyPy_signature____get_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"signature", 0};
    static CPyArg_Parser parser = {"O:_get_signature", kwlist, 0};
    PyObject *obj_signature;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_signature)) {
        return NULL;
    }
    PyObject *arg_signature;
    if (likely(PyUnicode_Check(obj_signature)))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("str", obj_signature); 
        goto fail;
    }
    PyObject *retval = CPyDef_signature____get_signature(arg_signature);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "_get_signature", 88, CPyStatic_signature___globals);
    return NULL;
}

char CPyDef_signature___Signature_____init__(PyObject *cpy_r_self, PyObject *cpy_r_signature) {
    tuple_T3OOO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    PyObject *cpy_r_r12;
    int64_t cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    int64_t cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    PyObject *cpy_r_r39;
    int64_t cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    char cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    int64_t cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    CPy_INCREF(cpy_r_signature);
    ((multicall___signature___SignatureObject *)cpy_r_self)->_signature = cpy_r_signature;
    cpy_r_r0 = CPyDef_signature___parse_signature(cpy_r_signature);
    if (unlikely(cpy_r_r0.f0 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 111, CPyStatic_signature___globals);
        goto CPyL34;
    }
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    ((multicall___signature___SignatureObject *)cpy_r_self)->_function = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF_NO_IMM(cpy_r_r2);
    CPy_INCREF_NO_IMM(cpy_r_r2);
    ((multicall___signature___SignatureObject *)cpy_r_self)->_input_types = cpy_r_r2;
    cpy_r_r3 = cpy_r_r0.f2;
    CPy_INCREF_NO_IMM(cpy_r_r3);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF_NO_IMM(cpy_r_r0.f1);
    CPy_DECREF_NO_IMM(cpy_r_r0.f2);
    CPy_INCREF_NO_IMM(cpy_r_r3);
    ((multicall___signature___SignatureObject *)cpy_r_self)->_output_types = cpy_r_r3;
    cpy_r_r4 = ((multicall___signature___SignatureObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_signature___get_4byte_selector(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 117, CPyStatic_signature___globals);
        goto CPyL35;
    }
    ((multicall___signature___SignatureObject *)cpy_r_self)->_fourbyte = cpy_r_r5;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 != 0;
    if (!cpy_r_r9) goto CPyL36;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = PyTuple_New(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL35;
    }
    cpy_r_r13 = 0;
CPyL5: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r13 < cpy_r_r15;
    if (!cpy_r_r16) goto CPyL37;
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r13 * 8;
    cpy_r_r20 = cpy_r_r18 + cpy_r_r19;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    CPy_INCREF(cpy_r_r21);
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals, "str", cpy_r_r21);
        goto CPyL38;
    }
    cpy_r_r23 = CPyStatic_signature____get_encoder;
    if (unlikely(cpy_r_r23 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_get_encoder\" was not set");
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *cpy_r_r25[1] = {cpy_r_r22};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_Vectorcall(cpy_r_r23, cpy_r_r26, 1, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r22);
    CPySequenceTuple_SetItemUnsafe(cpy_r_r12, cpy_r_r13, cpy_r_r27);
    cpy_r_r28 = cpy_r_r13 + 1;
    cpy_r_r13 = cpy_r_r28;
    goto CPyL5;
CPyL13: ;
    cpy_r_r29 = CPyStatic_signature___TupleEncoder;
    if (unlikely(cpy_r_r29 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TupleEncoder\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r31[1] = {cpy_r_r12};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = CPyStatics[423]; /* ('encoders',) */
    cpy_r_r34 = PyObject_Vectorcall(cpy_r_r29, cpy_r_r32, 0, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r35 = cpy_r_r34;
    goto CPyL19;
CPyL18: ;
    cpy_r_r36 = Py_None;
    cpy_r_r35 = cpy_r_r36;
CPyL19: ;
    ((multicall___signature___SignatureObject *)cpy_r_self)->__encoder = cpy_r_r35;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = PyTuple_New(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL43;
    }
    cpy_r_r40 = 0;
CPyL21: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r40 < cpy_r_r42;
    if (!cpy_r_r43) goto CPyL44;
    cpy_r_r44 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r45 = *(CPyPtr *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r40 * 8;
    cpy_r_r47 = cpy_r_r45 + cpy_r_r46;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    CPy_INCREF(cpy_r_r48);
    if (likely(PyUnicode_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals, "str", cpy_r_r48);
        goto CPyL45;
    }
    cpy_r_r50 = CPyStatic_signature____get_decoder;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_get_decoder\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL26: ;
    PyObject *cpy_r_r52[1] = {cpy_r_r49};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r53, 1, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r49);
    CPySequenceTuple_SetItemUnsafe(cpy_r_r39, cpy_r_r40, cpy_r_r54);
    cpy_r_r55 = cpy_r_r40 + 1;
    cpy_r_r40 = cpy_r_r55;
    goto CPyL21;
CPyL29: ;
    cpy_r_r56 = CPyStatic_signature___TupleDecoder;
    if (unlikely(cpy_r_r56 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TupleDecoder\" was not set");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 123, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL32: ;
    PyObject *cpy_r_r58[1] = {cpy_r_r39};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = CPyStatics[424]; /* ('decoders',) */
    cpy_r_r61 = PyObject_Vectorcall(cpy_r_r56, cpy_r_r59, 0, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 123, CPyStatic_signature___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r39);
    ((multicall___signature___SignatureObject *)cpy_r_self)->__decoder = cpy_r_r61;
    return 1;
CPyL34: ;
    cpy_r_r62 = 2;
    return cpy_r_r62;
CPyL35: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL34;
CPyL36: ;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL18;
CPyL37: ;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL13;
CPyL38: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r22);
    goto CPyL8;
CPyL40: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r22);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
CPyL42: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL43: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL34;
CPyL44: ;
    CPy_DECREF_NO_IMM(cpy_r_r3);
    goto CPyL29;
CPyL45: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r39);
    goto CPyL34;
CPyL46: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r49);
    goto CPyL24;
CPyL47: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r49);
    goto CPyL34;
CPyL48: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL30;
CPyL49: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL34;
}

PyObject *CPyPy_signature___Signature_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"signature", 0};
    PyObject *obj_signature;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_signature)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_signature___Signature))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.signature.Signature", obj_self); 
        goto fail;
    }
    PyObject *arg_signature;
    if (likely(PyUnicode_Check(obj_signature)))
        arg_signature = obj_signature;
    else {
        CPy_TypeError("str", obj_signature); 
        goto fail;
    }
    char retval = CPyDef_signature___Signature_____init__(arg_self, arg_signature);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "__init__", 109, CPyStatic_signature___globals);
    return NULL;
}

PyObject *CPyDef_signature___Signature___encode_data(PyObject *cpy_r_self, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    if (cpy_r_args != NULL) goto CPyL12;
    cpy_r_r0 = Py_None;
    cpy_r_args = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyObject_IsTrue(cpy_r_args);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("multicall/signature.py", "encode_data", 127, CPyStatic_signature___globals);
        goto CPyL13;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL14;
    cpy_r_r4 = ((multicall___signature___SignatureObject *)cpy_r_self)->_fourbyte;
    CPy_INCREF(cpy_r_r4);
    if (PyList_Check(cpy_r_args))
        cpy_r_r5 = cpy_r_args;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL138;
    if (PyTuple_Check(cpy_r_args))
        cpy_r_r5 = cpy_r_args;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL138;
    CPy_TypeErrorTraceback("multicall/signature.py", "encode_data", 128, CPyStatic_signature___globals, "union[list, tuple]", cpy_r_args);
    goto CPyL15;
__LL138: ;
    cpy_r_r6 = ((multicall___signature___SignatureObject *)cpy_r_self)->__encoder;
    CPy_INCREF(cpy_r_r6);
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "encode_data", 128, CPyStatic_signature___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r10 = PyNumber_Add(cpy_r_r4, cpy_r_r9);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "encode_data", 128, CPyStatic_signature___globals);
        goto CPyL11;
    }
    cpy_r_r11 = cpy_r_r10;
    goto CPyL9;
CPyL8: ;
    cpy_r_r12 = ((multicall___signature___SignatureObject *)cpy_r_self)->_fourbyte;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r11 = cpy_r_r12;
CPyL9: ;
    if (likely(PyBytes_Check(cpy_r_r11) || PyByteArray_Check(cpy_r_r11)))
        cpy_r_r13 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "encode_data", 128, CPyStatic_signature___globals, "bytes", cpy_r_r11);
        goto CPyL11;
    }
    return cpy_r_r13;
CPyL11: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL12: ;
    CPy_INCREF(cpy_r_args);
    goto CPyL2;
CPyL13: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL8;
CPyL15: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
}

PyObject *CPyPy_signature___Signature___encode_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"|O:encode_data", kwlist, 0};
    PyObject *obj_args = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_signature___Signature))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.signature.Signature", obj_self); 
        goto fail;
    }
    PyObject *arg_args;
    if (obj_args == NULL) {
        arg_args = NULL;
        goto __LL139;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL139;
    if (PyTuple_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL139;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL139;
    CPy_TypeError("union[list, tuple, None]", obj_args); 
    goto fail;
__LL139: ;
    PyObject *retval = CPyDef_signature___Signature___encode_data(arg_self, arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "encode_data", 127, CPyStatic_signature___globals);
    return NULL;
}

PyObject *CPyDef_signature___Signature___decode_data(PyObject *cpy_r_self, PyObject *cpy_r_output) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatic_signature____stream_cls;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"_stream_cls\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("multicall/signature.py", "decode_data", 131, CPyStatic_signature___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL3: ;
    PyObject *cpy_r_r2[1] = {cpy_r_output};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r0, cpy_r_r3, 1, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "decode_data", 131, CPyStatic_signature___globals);
        goto CPyL6;
    }
    cpy_r_r5 = ((multicall___signature___SignatureObject *)cpy_r_self)->__decoder;
    CPy_INCREF(cpy_r_r5);
    PyObject *cpy_r_r6[1] = {cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "decode_data", 131, CPyStatic_signature___globals);
        goto CPyL7;
    }
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL7: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL6;
}

PyObject *CPyPy_signature___Signature___decode_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"output", 0};
    static CPyArg_Parser parser = {"O:decode_data", kwlist, 0};
    PyObject *obj_output;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_output)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_signature___Signature))
        arg_self = obj_self;
    else {
        CPy_TypeError("multicall.signature.Signature", obj_self); 
        goto fail;
    }
    PyObject *arg_output;
    if (PyBytes_Check(obj_output) || PyByteArray_Check(obj_output))
        arg_output = obj_output;
    else {
        arg_output = NULL;
    }
    if (arg_output != NULL) goto __LL140;
    arg_output = obj_output;
    if (arg_output != NULL) goto __LL140;
    CPy_TypeError("union[bytes, object]", obj_output); 
    goto fail;
__LL140: ;
    PyObject *retval = CPyDef_signature___Signature___decode_data(arg_self, arg_output);
    return retval;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "decode_data", 130, CPyStatic_signature___globals);
    return NULL;
}

char CPyDef_signature_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    PyObject **cpy_r_r10;
    PyObject **cpy_r_r11;
    PyObject **cpy_r_r12;
    void *cpy_r_r14;
    void *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", -1, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[425]; /* ('Any', 'Dict', 'Final', 'List', 'Optional', 'Tuple',
                                   'Union', 'final') */
    cpy_r_r6 = CPyStatics[42]; /* 'typing' */
    cpy_r_r7 = CPyStatic_signature___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 1, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_faster_eth_abi___abi;
    cpy_r_r10 = (PyObject **)&CPyModule_faster_eth_abi___decoding;
    cpy_r_r11 = (PyObject **)&CPyModule_faster_eth_abi___encoding;
    cpy_r_r12 = (PyObject **)&CPyModule_eth_hash___auto;
    PyObject **cpy_r_r13[4] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12};
    cpy_r_r14 = (void *)&cpy_r_r13;
    int64_t cpy_r_r15[4] = {3, 4, 5, 6};
    cpy_r_r16 = (void *)&cpy_r_r15;
    cpy_r_r17 = CPyStatics[430]; /* (('faster_eth_abi.abi', 'faster_eth_abi',
                                     'faster_eth_abi'),
                                    ('faster_eth_abi.decoding', 'faster_eth_abi',
                                     'faster_eth_abi'),
                                    ('faster_eth_abi.encoding', 'faster_eth_abi',
                                     'faster_eth_abi'),
                                    ('eth_hash.auto', 'eth_hash', 'eth_hash')) */
    cpy_r_r18 = CPyStatic_signature___globals;
    cpy_r_r19 = CPyStatics[302]; /* 'multicall/signature.py' */
    cpy_r_r20 = CPyStatics[45]; /* '<module>' */
    cpy_r_r21 = CPyImport_ImportMany(cpy_r_r17, cpy_r_r14, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r16);
    if (!cpy_r_r21) goto CPyL31;
    cpy_r_r22 = CPyStatics[431]; /* ('Decodable', 'TypeStr') */
    cpy_r_r23 = CPyStatics[51]; /* 'eth_typing' */
    cpy_r_r24 = CPyStatic_signature___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 7, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyModule_eth_typing = cpy_r_r25;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = PyDict_New();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 10, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____SIGNATURES = cpy_r_r26;
    CPy_INCREF(CPyStatic_signature____SIGNATURES);
    cpy_r_r27 = CPyStatic_signature___globals;
    cpy_r_r28 = CPyStatics[304]; /* '_SIGNATURES' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 10, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r31 = CPyModule_faster_eth_abi___encoding;
    cpy_r_r32 = CPyStatics[305]; /* 'TupleEncoder' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 12, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature___TupleEncoder = cpy_r_r33;
    CPy_INCREF(CPyStatic_signature___TupleEncoder);
    cpy_r_r34 = CPyStatic_signature___globals;
    cpy_r_r35 = CPyStatics[305]; /* 'TupleEncoder' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 12, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r38 = CPyModule_faster_eth_abi___decoding;
    cpy_r_r39 = CPyStatics[306]; /* 'TupleDecoder' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 13, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature___TupleDecoder = cpy_r_r40;
    CPy_INCREF(CPyStatic_signature___TupleDecoder);
    cpy_r_r41 = CPyStatic_signature___globals;
    cpy_r_r42 = CPyStatics[306]; /* 'TupleDecoder' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 13, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r45 = CPyModule_eth_hash___auto;
    cpy_r_r46 = CPyStatics[307]; /* 'keccak' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 15, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____keccak = cpy_r_r47;
    CPy_INCREF(CPyStatic_signature____keccak);
    cpy_r_r48 = CPyStatic_signature___globals;
    cpy_r_r49 = CPyStatics[308]; /* '_keccak' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 15, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r52 = CPyModule_faster_eth_abi___abi;
    cpy_r_r53 = CPyStatics[309]; /* 'default_codec' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r55 = CPyStatics[310]; /* '_registry' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r57 = CPyStatics[311]; /* 'get_encoder' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____get_encoder = cpy_r_r58;
    CPy_INCREF(CPyStatic_signature____get_encoder);
    cpy_r_r59 = CPyStatic_signature___globals;
    cpy_r_r60 = CPyStatics[312]; /* '_get_encoder' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r63 = CPyModule_faster_eth_abi___abi;
    cpy_r_r64 = CPyStatics[309]; /* 'default_codec' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r66 = CPyStatics[310]; /* '_registry' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r68 = CPyStatics[313]; /* 'get_decoder' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____get_decoder = cpy_r_r69;
    CPy_INCREF(CPyStatic_signature____get_decoder);
    cpy_r_r70 = CPyStatic_signature___globals;
    cpy_r_r71 = CPyStatics[314]; /* '_get_decoder' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r74 = CPyModule_faster_eth_abi___abi;
    cpy_r_r75 = CPyStatics[309]; /* 'default_codec' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 18, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r77 = CPyStatics[315]; /* 'stream_class' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 18, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____stream_cls = cpy_r_r78;
    CPy_INCREF(CPyStatic_signature____stream_cls);
    cpy_r_r79 = CPyStatic_signature___globals;
    cpy_r_r80 = CPyStatics[316]; /* '_stream_cls' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r79, cpy_r_r80, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 18, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r83 = NULL;
    cpy_r_r84 = CPyStatics[64]; /* 'multicall.signature' */
    cpy_r_r85 = (PyObject *)CPyType_signature___Signature_template;
    cpy_r_r86 = CPyType_FromTemplate(cpy_r_r85, cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 98, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r87 = CPyDef_signature___Signature_trait_vtable_setup();
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", -1, CPyStatic_signature___globals);
        goto CPyL32;
    }
    cpy_r_r88 = CPyStatics[72]; /* '__mypyc_attrs__' */
    cpy_r_r89 = CPyStatics[81]; /* 'signature' */
    cpy_r_r90 = CPyStatics[79]; /* 'function' */
    cpy_r_r91 = CPyStatics[317]; /* 'input_types' */
    cpy_r_r92 = CPyStatics[318]; /* 'output_types' */
    cpy_r_r93 = CPyStatics[319]; /* 'fourbyte' */
    cpy_r_r94 = CPyStatics[320]; /* '_encoder' */
    cpy_r_r95 = CPyStatics[321]; /* '_decoder' */
    cpy_r_r96 = PyTuple_Pack(7, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 98, CPyStatic_signature___globals);
        goto CPyL32;
    }
    cpy_r_r97 = PyObject_SetAttr(cpy_r_r86, cpy_r_r88, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 98, CPyStatic_signature___globals);
        goto CPyL32;
    }
    CPyType_signature___Signature = (PyTypeObject *)cpy_r_r86;
    CPy_INCREF(CPyType_signature___Signature);
    cpy_r_r99 = CPyStatic_signature___globals;
    cpy_r_r100 = CPyStatics[62]; /* 'Signature' */
    cpy_r_r101 = PyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 98, CPyStatic_signature___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r103 = 2;
    return cpy_r_r103;
CPyL32: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL31;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_multicall___call = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_retry = Py_None;
    CPyModule_cchecksum = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_eth_typing___abi = Py_None;
    CPyModule_web3 = Py_None;
    CPyModule_multicall___constants = Py_None;
    CPyModule_multicall___exceptions = Py_None;
    CPyModule_multicall___loggers = Py_None;
    CPyModule_multicall___signature = Py_None;
    CPyModule_multicall___utils = Py_None;
    CPyModule_multicall___constants = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_os = Py_None;
    CPyModule_enum = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_aiohttp = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_brownie = Py_None;
    CPyModule_web3___auto = Py_None;
    CPyModule_multicall___exceptions = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_multicall___loggers = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_logging = Py_None;
    CPyModule_os = Py_None;
    CPyModule_multicall___multicall = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_asyncio = Py_None;
    CPyModule_time = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_aiohttp = Py_None;
    CPyModule_cchecksum = Py_None;
    CPyModule_requests = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_eth_utils = Py_None;
    CPyModule_web3 = Py_None;
    CPyModule_multicall___call = Py_None;
    CPyModule_multicall___constants = Py_None;
    CPyModule_multicall___loggers = Py_None;
    CPyModule_multicall___utils = Py_None;
    CPyModule_multicall___signature = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_abi___abi = Py_None;
    CPyModule_faster_eth_abi___decoding = Py_None;
    CPyModule_faster_eth_abi___encoding = Py_None;
    CPyModule_eth_hash___auto = Py_None;
    CPyModule_eth_typing = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[432];
const char * const CPyLit_Str[] = {
    "\t\023to_checksum_address\006<Call \004 on \a block=\t returns=\001>\002w3\003eth\004call",
    "\004\016%s returned %s\tcoroutine\t__await__\030state_override_supported",
    "\004#State override is not supported on \bchain_id\b__repr__\001.",
    "\005\016_get_semaphore\t__aexit__\n__aenter__\fget_async_w3\rGeneratorExit",
    "\n\rStopIteration\002to\004data\004from\003gas\004code\bbuiltins\003Any\bCallable\005Final",
    "\t\tGenerator\004List\bOptional\bSequence\005Tuple\005Union\005final\006typing\teth_retry",
    "\005\021multicall/call.py\b<module>\tcchecksum\aAddress\017ChecksumAddress",
    "\a\nHexAddress\006HexStr\neth_typing\tDecodable\016eth_typing.abi\004Web3\004web3",
    "\003\aNetwork\023multicall.constants\031StateOverrideNotSupported",
    "\004\024multicall.exceptions\fsetup_logger\021multicall.loggers\tSignature",
    "\005\016_get_signature\023multicall.signature\017multicall.utils\b__name__\006logger",
    "\006\005debug\tlog_debug\nAnyAddress\016multicall.call\017__mypyc_attrs__\006target",
    "\a\areturns\bblock_id\tgas_limit\023state_override_code\006origin\bfunction\004args",
    "\a\tsignature\004Call\b__call__\nauto_retry\016min_sleep_time\016max_sleep_time\002os",
    "\006\026multicall/constants.py\aIntEnum\004enum\004Dict\rClientTimeout\aaiohttp",
    "\a\anetwork\abrownie\fis_connected\tweb3.auto\vImportError\aenviron\tGAS_LIMIT",
    "\001\003get",
    "\001\251\0000x608060405234801561001057600080fd5b50600436106100b45760003560e01c806372425d9d1161007157806372425d9d1461013d57806386d516e814610145578063a8b0574e1461014d578063bce38bd714610162578063c3077fa914610182578063ee82ac5e14610195576100b4565b80630f28c97d146100b9578063252dba42146100d757806327e86d6e146100f8578063399542e91461010057806342cbb15c146101225780634d2301cc1461012a575b600080fd5b6100c16101a8565b6040516100ce919061083b565b60405180910390f35b6100ea6100e53660046106bb565b6101ac565b6040516100ce9291906108ba565b6100c1610340565b61011361010e3660046106f6565b610353565b6040516100ce93929190610922565b6100c161036b565b6100c161013836600461069a565b61036f565b6100c161037c565b6100c1610380565b610155610384565b6040516100ce9190610814565b6101756101703660046106f6565b610388565b6040516100ce9190610828565b6101136101903660046106bb565b610533565b6100c16101a3366004610748565b610550565b4290565b8051439060609067ffffffffffffffff8111156101d957634e487b7160e01b600052604160045260246000fd5b60405190808252806020026020018201604052801561020c57816020015b60608152602001906001900390816101f75790505b50905060005b835181101561033a5760008085838151811061023e57634e487b7160e01b600052603260045260246000fd5b6020026020010151600001516001600160a01b031686848151811061027357634e487b7160e01b600052603260045260246000fd5b60200260200101516020015160405161028c91906107f8565b6000604051808303816000865af19150503d80600081146102c9576040519150601f19603f3d011682016040523d82523d6000602084013e6102ce565b606091505b5091509150816102f95760405162461bcd60e51b81526004016102f090610885565b60405180910390fd5b8084848151811061031a57634e487b7160e01b600052603260045260246000fd5b602002602001018190525050508080610332906109c2565b915050610212565b50915091565b600061034d60014361097b565b40905090565b43804060606103628585610388565b90509250925092565b4390565b6001600160a01b03163190565b4490565b4590565b4190565b6060815167ffffffffffffffff8111156103b257634e487b7160e01b600052604160045260246000fd5b6040519080825280602002602001820160405280156103eb57816020015b6103d8610554565b8152602001906001900390816103d05790505b50905060005b825181101561052c5760008084838151811061041d57634e487b7160e01b600052603260045260246000fd5b6020026020010151600001516001600160a01b031685848151811061045257634e487b7160e01b600052603260045260246000fd5b60200260200101516020015160405161046b91906107f8565b6000604051808303816000865af19150503d80600081146104a8576040519150601f19603f3d011682016040523d82523d6000602084013e6104ad565b606091505b509150915085156104d557816104d55760405162461bcd60e51b81526004016102f090610844565b604051806040016040528083151581526020018281525084848151811061050c57634e487b7160e01b600052603260045260246000fd5b602002602001018190525050508080610524906109c2565b9150506103f1565b5092915050565b6000806060610543600185610353565b9196909550909350915050565b4090565b60408051808201909152600081526060602082015290565b80356001600160a01b038116811461058357600080fd5b919050565b600082601f830112610598578081fd5b8135602067ffffffffffffffff808311156105b5576105b56109f3565b6105c2828385020161094a565b83815282810190868401865b8681101561068c57813589016040601f198181848f030112156105ef578a8bfd5b6105f88261094a565b6106038a850161056c565b81528284013589811115610615578c8dfd5b8085019450508d603f850112610629578b8cfd5b898401358981111561063d5761063d6109f3565b61064d8b84601f8401160161094a565b92508083528e84828701011115610662578c8dfd5b808486018c85013782018a018c9052808a01919091528652505092850192908501906001016105ce565b509098975050505050505050565b6000602082840312156106ab578081fd5b6106b48261056c565b9392505050565b6000602082840312156106cc578081fd5b813567ffffffffffffffff8111156106e2578182fd5b6106ee84828501610588565b949350505050565b60008060408385031215610708578081fd5b82358015158114610717578182fd5b9150602083013567ffffffffffffffff811115610732578182fd5b61073e85828601610588565b9150509250929050565b600060208284031215610759578081fd5b5035919050565b60008282518085526020808601955080818302840101818601855b848110156107bf57858303601f19018952815180511515845284015160408585018190526107ab818601836107cc565b9a86019a945050509083019060010161077b565b5090979650505050505050565b600081518084526107e4816020860160208601610992565b601f01601f19169290920160200192915050565b6000825161080a818460208701610992565b9190910192915050565b6001600160a01b0391909116815260200190565b6000602082526106b46020830184610760565b90815260200190565b60208082526021908201527f4d756c746963616c6c32206167677265676174653a2063616c6c206661696c656040820152601960fa1b606082015260800190565b6020808252818101527f4d756c746963616c6c206167677265676174653a2063616c6c206661696c6564604082015260600190565b600060408201848352602060408185015281855180845260608601915060608382028701019350828701855b8281101561091457605f198887030184526109028683516107cc565b955092840192908401906001016108e6565b509398975050505050505050565b6000848252836020830152606060408301526109416060830184610760565b95945050505050565b604051601f8201601f1916810167ffffffffffffffff81118282101715610973576109736109f3565b604052919050565b60008282101561098d5761098d6109dd565b500390565b60005b838110156109ad578181015183820152602001610995565b838111156109bc576000848401525b50505050565b60006000198214156109d6576109d66109dd565b5060010190565b634e487b7160e01b600052601160045260246000fd5b634e487b7160e01b600052604160045260246000fdfea2646970667358221220c1152f751f29ece4d7bce5287ceafc8a153de9c2c633e3f21943a87d845bd83064736f6c63430008010033",
    "\001\023MULTICALL2_BYTECODE",
    "\001\273B0x6080604052600436106100f35760003560e01c80634d2301cc1161008a578063a8b0574e11610059578063a8b0574e1461025a578063bce38bd714610275578063c3077fa914610288578063ee82ac5e1461029b57600080fd5b80634d2301cc146101ec57806372425d9d1461022157806382ad56cb1461023457806386d516e81461024757600080fd5b80633408e470116100c65780633408e47014610191578063399542e9146101a45780633e64a696146101c657806342cbb15c146101d957600080fd5b80630f28c97d146100f8578063174dea711461011a578063252dba421461013a57806327e86d6e1461015b575b600080fd5b34801561010457600080fd5b50425b6040519081526020015b60405180910390f35b61012d610128366004610a85565b6102ba565b6040516101119190610bbe565b61014d610148366004610a85565b6104ef565b604051610111929190610bd8565b34801561016757600080fd5b50437fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff0140610107565b34801561019d57600080fd5b5046610107565b6101b76101b2366004610c60565b610690565b60405161011193929190610cba565b3480156101d257600080fd5b5048610107565b3480156101e557600080fd5b5043610107565b3480156101f857600080fd5b50610107610207366004610ce2565b73ffffffffffffffffffffffffffffffffffffffff163190565b34801561022d57600080fd5b5044610107565b61012d610242366004610a85565b6106ab565b34801561025357600080fd5b5045610107565b34801561026657600080fd5b50604051418152602001610111565b61012d610283366004610c60565b61085a565b6101b7610296366004610a85565b610a1a565b3480156102a757600080fd5b506101076102b6366004610d18565b4090565b60606000828067ffffffffffffffff8111156102d8576102d8610d31565b60405190808252806020026020018201604052801561031e57816020015b6040805180820190915260008152606060208201528152602001906001900390816102f65790505b5092503660005b8281101561047757600085828151811061034157610341610d60565b6020026020010151905087878381811061035d5761035d610d60565b905060200281019061036f9190610d8f565b6040810135958601959093506103886020850185610ce2565b73ffffffffffffffffffffffffffffffffffffffff16816103ac6060870187610dcd565b6040516103ba929190610e32565b60006040518083038185875af1925050503d80600081146103f7576040519150601f19603f3d011682016040523d82523d6000602084013e6103fc565b606091505b50602080850191909152901515808452908501351761046d577f08c379a000000000000000000000000000000000000000000000000000000000600052602060045260176024527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060445260846000fd5b5050600101610325565b508234146104e6576040517f08c379a000000000000000000000000000000000000000000000000000000000815260206004820152601a60248201527f4d756c746963616c6c333a2076616c7565206d69736d6174636800000000000060448201526064015b60405180910390fd5b50505092915050565b436060828067ffffffffffffffff81111561050c5761050c610d31565b60405190808252806020026020018201604052801561053f57816020015b606081526020019060019003908161052a5790505b5091503660005b8281101561068657600087878381811061056257610562610d60565b90506020028101906105749190610e42565b92506105836020840184610ce2565b73ffffffffffffffffffffffffffffffffffffffff166105a66020850185610dcd565b6040516105b4929190610e32565b6000604051808303816000865af19150503d80600081146105f1576040519150601f19603f3d011682016040523d82523d6000602084013e6105f6565b606091505b5086848151811061060957610609610d60565b602090810291909101015290508061067d576040517f08c379a000000000000000000000000000000000000000000000000000000000815260206004820152601760248201527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060448201526064016104dd565b50600101610546565b5050509250929050565b43804060606106a086868661085a565b905093509350939050565b6060818067ffffffffffffffff8111156106c7576106c7610d31565b60405190808252806020026020018201604052801561070d57816020015b6040805180820190915260008152606060208201528152602001906001900390816106e55790505b5091503660005b828110156104e657600084828151811061073057610730610d60565b6020026020010151905086868381811061074c5761074c610d60565b905060200281019061075e9190610e76565b925061076d6020840184610ce2565b73ffffffffffffffffffffffffffffffffffffffff166107906040850185610dcd565b60405161079e929190610e32565b6000604051808303816000865af19150503d80600081146107db576040519150601f19603f3d011682016040523d82523d6000602084013e6107e0565b606091505b506020808401919091529015158083529084013517610851577f08c379a000000000000000000000000000000000000000000000000000000000600052602060045260176024527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060445260646000fd5b50600101610714565b6060818067ffffffffffffffff81111561087657610876610d31565b6040519080825280602002602001820160405280156108bc57816020015b6040805180820190915260008152606060208201528152602001906001900390816108945790505b5091503660005b82811015610a105760008482815181106108df576108df610d60565b602002602001015190508686838181106108fb576108fb610d60565b905060200281019061090d9190610e42565b925061091c6020840184610ce2565b73ffffffffffffffffffffffffffffffffffffffff1661093f6020850185610dcd565b60405161094d929190610e32565b6000604051808303816000865af19150503d806000811461098a576040519150601f19603f3d011682016040523d82523d6000602084013e61098f565b606091505b506020830152151581528715610a07578051610a07576040517f08c379a000000000000000000000000000000000000000000000000000000000815260206004820152601760248201527f4d756c746963616c6c333a2063616c6c206661696c656400000000000000000060448201526064016104dd565b506001016108c3565b5050509392505050565b6000806060610a2b60018686610690565b919790965090945092505050565b60008083601f840112610a4b57600080fd5b50813567ffffffffffffffff811115610a6357600080fd5b6020830191508360208260051b8501011115610a7e57600080fd5b9250929050565b60008060208385031215610a9857600080fd5b823567ffffffffffffffff811115610aaf57600080fd5b610abb85828601610a39565b90969095509350505050565b6000815180845260005b81811015610aed57602081850181015186830182015201610ad1565b81811115610aff576000602083870101525b50601f017fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe0169290920160200192915050565b600082825180855260208086019550808260051b84010181860160005b84811015610bb1578583037fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe001895281518051151584528401516040858501819052610b9d81860183610ac7565b9a86019a9450505090830190600101610b4f565b5090979650505050505050565b602081526000610bd16020830184610b32565b9392505050565b600060408201848352602060408185015281855180845260608601915060608160051b870101935082870160005b82811015610c52577fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffa0888703018452610c40868351610ac7565b95509284019290840190600101610c06565b509398975050505050505050565b600080600060408486031215610c7557600080fd5b83358015158114610c8557600080fd5b9250602084013567ffffffffffffffff811115610ca157600080fd5b610cad86828701610a39565b9497909650939450505050565b838152826020820152606060408201526000610cd96060830184610b32565b95945050505050565b600060208284031215610cf457600080fd5b813573ffffffffffffffffffffffffffffffffffffffff81168114610bd157600080fd5b600060208284031215610d2a57600080fd5b5035919050565b7f4e487b7100000000000000000000000000000000000000000000000000000000600052604160045260246000fd5b7f4e487b7100000000000000000000000000000000000000000000000000000000600052603260045260246000fd5b600082357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff81833603018112610dc357600080fd5b9190910192915050565b60008083357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe1843603018112610e0257600080fd5b83018035915067ffffffffffffffff821115610e1d57600080fd5b602001915036819003821315610a7e57600080fd5b8183823760009101908152919050565b600082357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffc1833603018112610dc357600080fd5b600082357fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffa1833603018112610dc357600080fdfea2646970667358221220bb2b5c71a328032f97c676ae39a1ec2148d3e5d6f73d95e9b17910152d61f16264736f6c634300080c0033",
    "\006\023MULTICALL3_BYTECODE\v__prepare__\aMainnet\aRopsten\aRinkeby\005Gorli",
    "\004\bOptimism\rCostonTestnet\022ThundercoreTestnet\025SongbirdCanaryNetwork",
    "\t\006Cronos\003RSK\nRSKTestnet\005Kovan\003Bsc\003OKC\rOptimismKovan\nBscTestnet\006Gnosis",
    "\t\005Velas\vThundercore\016Coston2Testnet\004Fuse\004Heco\aPolygon\006Fantom\004Boba\003KCC",
    "\006\006ZkSync\rOptimismGorli\005Astar\005Metis\bMoonbeam\tMoonriver",
    "\a\024MoonbaseAlphaTestnet\tMilkomeda\004Kava\rFantomTestnet\005Canto\006Klaytn\004Base",
    "\b\fEvmosTestnet\005Evmos\aHolesky\bArbitrum\004Celo\005Oasis\rAvalancheFuji\004Avax",
    "\006\017GodwokenTestnet\bGodwoken\006Mumbai\017ArbitrumRinkeby\rArbitrumGorli\aSepolia",
    "\a\006Aurora\aHarmony\nPulseChain\021PulseChainTestnet\003Sei\005Hoodi\bHyperEVM",
    "\005\tBerachain\006Katana\017__annotations__\026mypyc filler docstring\a__doc__",
    "\002\n__module__*0xeefBa1e63905eF1D7ACbA5a8513c70307C1cE441",
    "\001*0x2cc8688C5f75E365aaEEb4ea8D6a480405A48D2A",
    "\001*0x42Ad527de7d4e9d9d011aC45B31D8551f8Fe9821",
    "\001*0x77dCa2C955b15e9dE4dbBCf1246B4B85b651e50e",
    "\001*0xb5b692a88BDFc81ca69dcB1d924f59f0413A602a",
    "\001*0x95028E5B8a734bb7E2071F96De89BABe75be9C8E",
    "\001*0x1Ee38d535d541c55C9dae27B12edf090C608E6Fb",
    "\001*0xb828C456600857abd4ed6C32FAcc607bD0464F4F",
    "\001*0xc9a9F768ebD123A00B52e7A0E590df2e9E998707",
    "\001*0xFE4980f62D708c2A84D3929859Ea226340759320",
    "\001*0x5e954f5972EC6BFc7dECd75779F10d848230345F",
    "\001*0x187C0F98FEF80E87880Db50241D40551eDd027Bf",
    "\001*0x2DC0E2aa608532Da689e89e237dF582B783E552C",
    "\002*0x7ED7bBd8C454a1B0D9EdD939c45a81A03c20131C\023MULTICALL_ADDRESSES",
    "\001*0x5ba1e12693dc8f9c48aad8770482f4739beed696",
    "\001*0x9903f30c1469d8A2f415D4E8184C93BD26992573",
    "\001*0xc8E51042792d7405184DfCa245F2d27B94D013b6",
    "\001*0xfF6FD90A470Aaa0c1B8A54681746b07AcdFedc9B",
    "\001*0xBAD2B082e2212DE4B065F636CA4e5e0717623d18",
    "\001*0xB44a9B6905aF7c801311e8F4E76932ee959c663C",
    "\001*0x842eC2c7D803033Edf55E478F461FC547Bc54EB2",
    "\001*0xdf2122931FEb939FB8Cf4e67Ea752D1125e18858",
    "\001*0xd1F3BE686D64e1EA33fcF64980b65847aA43D79C",
    "\001*0xe0e3887b158F7F9c80c835a61ED809389BC08d1b",
    "\002*0x45be772faE4a9F31401dfF4738E5DC7DD439aC0b\024MULTICALL2_ADDRESSES",
    "\001*0xcA11bde05977b3631167028862bE2a173976CA11",
    "\001*0x47898B2C52C957663aE9AB46922dCec150a2272c",
    "\002*0xca11bde05977b3631167028862be2a173976ca11\024MULTICALL3_ADDRESSES",
    "\003\017AIOHTTP_TIMEOUT\021NO_STATE_OVERRIDE\030MULTICALL_CALL_SEMAPHORE",
    "\005\017ASYNC_SEMAPHORE\tException\b__dict__\tgetLogger\017MULTICALL_DEBUG",
    "\006\rStreamHandler\naddHandler\bsetLevel\alogging\024multicall/loggers.py\004time",
    "\002\017await_awaitable\022Multicall took %ss",
    "\001-aggregate((address,bytes)[])(uint256,bytes[])",
    "\001LtryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])",
    "\005\006gather\005items\bbase_fee\025getBasefee()(uint256)\nblock_hash",
    "\003\036getBlockHash(uint256)(bytes32)\fblock_number\031getBlockNumber()(uint256)",
    "\003\025getChainId()(uint256)\bcoinbase\"getCurrentBlockCoinbase()(address)",
    "\002\ndifficulty$getCurrentBlockDifficulty()(address)",
    "\002\"getCurrentBlockGasLimit()(uint256)\ttimestamp",
    "\002#getCurrentBlockTimestamp()(uint256)\veth_balance",
    "\002\037getEthBalance(address)(uint256)\017last_block_hash",
    "\002\033getLastBlockHash()(bytes32)\024coroutine %s started",
    "\005\025coroutine %s finished\001_\000\005round\"Multicall batch size reduced from ",
    "\006\004 to \027. The failed batch had \a calls.\rClientOSError\vbroken pipe\005lower",
    "\003\023ClientResponseError\030request entity too large\030connection reset by peer",
    "\001\017ConnectionError",
    "\001N(\'Connection aborted.\', ConnectionResetError(104, \'Connection reset by peer\'))",
    "\005\tHTTPError\021payload too large\btime-out\020520 server error\f__contains__",
    "\a\003map\003any\fTimeoutError\nValueError\nout of gas\aasyncio\brequests",
    "\005\026multicall/multicall.py\005toolz\teth_utils\awarning\vlog_warning",
    "\006\fCallResponse\006concat\006mapcat\023multicall.multicall\005calls\017require_success",
    "\a\achainid\021multicall_address\tMulticall\004step\022NotSoBrightBatcher\abatcher\001 ",
    "\t\001(\001)\002()\001,\bKeyError\bencoders\bdecoders\022faster_eth_abi.abi\016faster_eth_abi",
    "\003\027faster_eth_abi.decoding\027faster_eth_abi.encoding\reth_hash.auto",
    "\005\beth_hash\026multicall/signature.py\aTypeStr\v_SIGNATURES\fTupleEncoder",
    "\006\fTupleDecoder\006keccak\a_keccak\rdefault_codec\t_registry\vget_encoder",
    "\005\f_get_encoder\vget_decoder\f_get_decoder\fstream_class\v_stream_cls",
    "\005\vinput_types\foutput_types\bfourbyte\b_encoder\b_decoder",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0350\0001\0003\00050000000\0004\0005\00010\00016\00018\00019\00025\00030\00031\00042\00056\00066\00069\00097\000100\000106\000108\000114\000122\000128\000137\000250\000288\000321\000324",
    "\021420\000592\0001088\0001284\0001285\0001287\0002001\0002222\0004002\0007700\0008217\0008453\0009000\0009001\00017000\00042161\00042220",
    "\v42262\00043113\00043114\00071401\00071402\00080001\000421611\000421613\00011155111\0001313161554\0001666600000",
    "\b369\000943\0001329\000560048\000999\00080094\000747474\0001000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    45, 10, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 3, 43, 43, 43, 1,
    388, 1, 3, 4, 47, 48, 49, 50, 1, 52, 1, 54, 2, 56, 9, 1, 58, 1, 60, 2,
    62, 63, 4, 20, 17, 23, 15, 2, 85, 86, 3, 87, 87, 87, 1, 400, 1, 89, 3,
    91, 34, 41, 1, 92, 2, 48, 50, 2, 94, 55, 1, 9, 1, 41, 3, 215, 215,
    215, 2, 409, 400, 1, 266, 1, 217, 10, 32, 91, 34, 35, 36, 37, 38, 39,
    40, 41, 3, 93, 93, 93, 3, 46, 46, 46, 3, 270, 270, 270, 3, 414, 415,
    416, 1, 70, 1, 272, 1, 82, 5, 100, 199, 203, 105, 9, 5, 20, 218, 17,
    222, 15, 1, 294, 1, 295, 8, 32, 91, 34, 36, 37, 39, 40, 41, 3, 296,
    297, 297, 3, 298, 297, 297, 3, 299, 297, 297, 3, 300, 301, 301, 4,
    426, 427, 428, 429, 2, 52, 303
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_multicall___call__internal = NULL;
CPyModule *CPyModule_multicall___call;
PyObject *CPyStatic_call___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_retry;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_eth_typing___abi;
CPyModule *CPyModule_web3;
CPyModule *CPyModule_multicall___constants__internal = NULL;
CPyModule *CPyModule_multicall___constants;
CPyModule *CPyModule_multicall___exceptions__internal = NULL;
CPyModule *CPyModule_multicall___exceptions;
CPyModule *CPyModule_multicall___loggers__internal = NULL;
CPyModule *CPyModule_multicall___loggers;
CPyModule *CPyModule_multicall___signature__internal = NULL;
CPyModule *CPyModule_multicall___signature;
CPyModule *CPyModule_multicall___utils;
PyObject *CPyStatic_constants___globals;
CPyModule *CPyModule_os;
CPyModule *CPyModule_enum;
CPyModule *CPyModule_aiohttp;
CPyModule *CPyModule_brownie;
CPyModule *CPyModule_web3___auto;
PyObject *CPyStatic_exceptions___globals;
PyObject *CPyStatic_loggers___globals;
CPyModule *CPyModule_logging;
CPyModule *CPyModule_multicall___multicall__internal = NULL;
CPyModule *CPyModule_multicall___multicall;
PyObject *CPyStatic_multicall___globals;
CPyModule *CPyModule_asyncio;
CPyModule *CPyModule_time;
CPyModule *CPyModule_requests;
CPyModule *CPyModule_eth_utils;
PyObject *CPyStatic_signature___globals;
CPyModule *CPyModule_faster_eth_abi___abi;
CPyModule *CPyModule_faster_eth_abi___decoding;
CPyModule *CPyModule_faster_eth_abi___encoding;
CPyModule *CPyModule_eth_hash___auto;
PyObject *CPyStatic_call___logger = NULL;
PyObject *CPyStatic_call___log_debug = NULL;
PyTypeObject *CPyType_call___Call;
PyObject *CPyDef_call___Call(PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
PyTypeObject *CPyType_call___decode_output_Call_env;
PyObject *CPyDef_call___decode_output_Call_env(void);
CPyThreadLocal multicall___call___decode_output_Call_envObject *call___decode_output_Call_env_free_instance;
PyTypeObject *CPyType_call_____mypyc_lambda__0_decode_output_Call_obj;
PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj(void);
CPyThreadLocal multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *call_____mypyc_lambda__0_decode_output_Call_obj_free_instance;
PyTypeObject *CPyType_call_____mypyc_lambda__1_decode_output_Call_obj;
PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj(void);
CPyThreadLocal multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *call_____mypyc_lambda__1_decode_output_Call_obj_free_instance;
PyTypeObject *CPyType_call___coroutine_Call_gen;
PyObject *CPyDef_call___coroutine_Call_gen(void);
CPyThreadLocal multicall___call___coroutine_Call_genObject *call___coroutine_Call_gen_free_instance;
char CPyDef_call___Call_____init__(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
PyObject *CPyPy_call___Call_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_call___Call_____repr__(PyObject *cpy_r_self);
PyObject *CPyPy_call___Call_____repr__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___Call___data(PyObject *cpy_r_self);
PyObject *CPyPy_call___Call___data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_handler, PyObject *cpy_r_value);
PyObject *CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_handler, PyObject *cpy_r_value);
PyObject *CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___Call___decode_output(PyObject *cpy_r_output, PyObject *cpy_r_signature, PyObject *cpy_r_returns, PyObject *cpy_r_success);
PyObject *CPyPy_call___Call___decode_output(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___Call_____call__(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r__w3, PyObject *cpy_r_block_id);
PyObject *CPyPy_call___Call_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___Call_____await__(PyObject *cpy_r_self);
PyObject *CPyPy_call___Call_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_call___coroutine_Call_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_call___coroutine_Call_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___coroutine_Call_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_call___coroutine_Call_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___coroutine_Call_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_call___coroutine_Call_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___coroutine_Call_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_call___coroutine_Call_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___coroutine_Call_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_call___coroutine_Call_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___coroutine_Call_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_call___coroutine_Call_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___Call___coroutine(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r__w3, PyObject *cpy_r_block_id);
PyObject *CPyPy_call___Call___coroutine(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_call___prep_args(PyObject *cpy_r_target, PyObject *cpy_r_signature, PyObject *cpy_r_args, PyObject *cpy_r_block_id, PyObject *cpy_r_origin, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code);
PyObject *CPyPy_call___prep_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_call_____top_level__(void);
CPyTagged CPyStatic_constants___GAS_LIMIT = CPY_INT_TAG;
PyObject *CPyStatic_constants___MULTICALL2_BYTECODE = NULL;
PyObject *CPyStatic_constants___MULTICALL3_BYTECODE = NULL;
PyObject *CPyStatic_constants___Network___Mainnet = NULL;
PyObject *CPyStatic_constants___Network___Ropsten = NULL;
PyObject *CPyStatic_constants___Network___Rinkeby = NULL;
PyObject *CPyStatic_constants___Network___Gorli = NULL;
PyObject *CPyStatic_constants___Network___Optimism = NULL;
PyObject *CPyStatic_constants___Network___CostonTestnet = NULL;
PyObject *CPyStatic_constants___Network___ThundercoreTestnet = NULL;
PyObject *CPyStatic_constants___Network___SongbirdCanaryNetwork = NULL;
PyObject *CPyStatic_constants___Network___Cronos = NULL;
PyObject *CPyStatic_constants___Network___RSK = NULL;
PyObject *CPyStatic_constants___Network___RSKTestnet = NULL;
PyObject *CPyStatic_constants___Network___Kovan = NULL;
PyObject *CPyStatic_constants___Network___Bsc = NULL;
PyObject *CPyStatic_constants___Network___OKC = NULL;
PyObject *CPyStatic_constants___Network___OptimismKovan = NULL;
PyObject *CPyStatic_constants___Network___BscTestnet = NULL;
PyObject *CPyStatic_constants___Network___Gnosis = NULL;
PyObject *CPyStatic_constants___Network___Velas = NULL;
PyObject *CPyStatic_constants___Network___Thundercore = NULL;
PyObject *CPyStatic_constants___Network___Coston2Testnet = NULL;
PyObject *CPyStatic_constants___Network___Fuse = NULL;
PyObject *CPyStatic_constants___Network___Heco = NULL;
PyObject *CPyStatic_constants___Network___Polygon = NULL;
PyObject *CPyStatic_constants___Network___Fantom = NULL;
PyObject *CPyStatic_constants___Network___Boba = NULL;
PyObject *CPyStatic_constants___Network___KCC = NULL;
PyObject *CPyStatic_constants___Network___ZkSync = NULL;
PyObject *CPyStatic_constants___Network___OptimismGorli = NULL;
PyObject *CPyStatic_constants___Network___Astar = NULL;
PyObject *CPyStatic_constants___Network___Metis = NULL;
PyObject *CPyStatic_constants___Network___Moonbeam = NULL;
PyObject *CPyStatic_constants___Network___Moonriver = NULL;
PyObject *CPyStatic_constants___Network___MoonbaseAlphaTestnet = NULL;
PyObject *CPyStatic_constants___Network___Milkomeda = NULL;
PyObject *CPyStatic_constants___Network___Kava = NULL;
PyObject *CPyStatic_constants___Network___FantomTestnet = NULL;
PyObject *CPyStatic_constants___Network___Canto = NULL;
PyObject *CPyStatic_constants___Network___Klaytn = NULL;
PyObject *CPyStatic_constants___Network___Base = NULL;
PyObject *CPyStatic_constants___Network___EvmosTestnet = NULL;
PyObject *CPyStatic_constants___Network___Evmos = NULL;
PyObject *CPyStatic_constants___Network___Holesky = NULL;
PyObject *CPyStatic_constants___Network___Arbitrum = NULL;
PyObject *CPyStatic_constants___Network___Celo = NULL;
PyObject *CPyStatic_constants___Network___Oasis = NULL;
PyObject *CPyStatic_constants___Network___AvalancheFuji = NULL;
PyObject *CPyStatic_constants___Network___Avax = NULL;
PyObject *CPyStatic_constants___Network___GodwokenTestnet = NULL;
PyObject *CPyStatic_constants___Network___Godwoken = NULL;
PyObject *CPyStatic_constants___Network___Mumbai = NULL;
PyObject *CPyStatic_constants___Network___ArbitrumRinkeby = NULL;
PyObject *CPyStatic_constants___Network___ArbitrumGorli = NULL;
PyObject *CPyStatic_constants___Network___Sepolia = NULL;
PyObject *CPyStatic_constants___Network___Aurora = NULL;
PyObject *CPyStatic_constants___Network___Harmony = NULL;
PyObject *CPyStatic_constants___Network___PulseChain = NULL;
PyObject *CPyStatic_constants___Network___PulseChainTestnet = NULL;
PyObject *CPyStatic_constants___Network___Sei = NULL;
PyObject *CPyStatic_constants___Network___Hoodi = NULL;
PyObject *CPyStatic_constants___Network___HyperEVM = NULL;
PyObject *CPyStatic_constants___Network___Berachain = NULL;
PyObject *CPyStatic_constants___Network___Katana = NULL;
PyObject *CPyStatic_constants___MULTICALL_ADDRESSES = NULL;
PyObject *CPyStatic_constants___MULTICALL2_ADDRESSES = NULL;
PyObject *CPyStatic_constants___MULTICALL3_ADDRESSES = NULL;
PyObject *CPyStatic_constants___AIOHTTP_TIMEOUT = NULL;
PyObject *CPyStatic_constants___NO_STATE_OVERRIDE = NULL;
CPyTagged CPyStatic_constants___ASYNC_SEMAPHORE = CPY_INT_TAG;
PyTypeObject *CPyType_constants___Network;
char CPyDef_constants_____top_level__(void);
PyTypeObject *CPyType_exceptions___StateOverrideNotSupported;
char CPyDef_exceptions_____top_level__(void);
PyObject *CPyDef_loggers___setup_logger(PyObject *cpy_r_name);
PyObject *CPyPy_loggers___setup_logger(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_loggers_____top_level__(void);
PyObject *CPyStatic_multicall___logger = NULL;
PyObject *CPyStatic_multicall___log_warning = NULL;
PyObject *CPyStatic_multicall___log_debug = NULL;
PyObject *CPyStatic_multicall___to_checksum_address = NULL;
PyObject *CPyStatic_multicall___concat = NULL;
PyObject *CPyStatic_multicall___mapcat = NULL;
PyObject *CPyStatic_multicall___multicall___multicall___Multicall_____init______w3 = NULL;
PyObject *CPyStatic_multicall___batcher = NULL;
PyTypeObject *CPyType_multicall___Multicall;
PyObject *CPyDef_multicall___Multicall(PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
PyTypeObject *CPyType_multicall___NotSoBrightBatcher;
PyObject *CPyDef_multicall___NotSoBrightBatcher(void);
PyTypeObject *CPyType_multicall___coroutine_Multicall_gen;
PyObject *CPyDef_multicall___coroutine_Multicall_gen(void);
CPyThreadLocal multicall___multicall___coroutine_Multicall_genObject *multicall___coroutine_Multicall_gen_free_instance;
PyTypeObject *CPyType_multicall___fetch_outputs_Multicall_gen;
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen(void);
CPyThreadLocal multicall___multicall___fetch_outputs_Multicall_genObject *multicall___fetch_outputs_Multicall_gen_free_instance;
PyObject *CPyDef_multicall___get_args(PyObject *cpy_r_calls, char cpy_r_require_success);
PyObject *CPyPy_multicall___get_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___unpack_aggregate_outputs(PyObject *cpy_r_outputs);
PyObject *CPyPy_multicall___unpack_aggregate_outputs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall_____init__(PyObject *cpy_r_self, PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
PyObject *CPyPy_multicall___Multicall_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_multicall___Multicall_____call__(PyObject *cpy_r_self);
PyObject *CPyPy_multicall___Multicall_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___Multicall_____await__(PyObject *cpy_r_self);
PyObject *CPyPy_multicall___Multicall_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___Multicall___multicall_sig(PyObject *cpy_r_self);
PyObject *CPyPy_multicall___Multicall___multicall_sig(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_multicall___coroutine_Multicall_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___coroutine_Multicall_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___coroutine_Multicall_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_multicall___coroutine_Multicall_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___coroutine_Multicall_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___coroutine_Multicall_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___coroutine_Multicall_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_multicall___coroutine_Multicall_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___coroutine_Multicall_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___coroutine_Multicall_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___coroutine_Multicall_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___coroutine_Multicall_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___Multicall___coroutine(PyObject *cpy_r_self);
PyObject *CPyPy_multicall___Multicall___coroutine(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall____contract_method(PyObject *cpy_r_self, PyObject *cpy_r_request_signature, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall____contract_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_base_fee(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_base_fee(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_block_hash(PyObject *cpy_r_self, CPyTagged cpy_r_block_number, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_block_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_block_number(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_block_number(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_chain_id(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_chain_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_block_coinbase(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_block_coinbase(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_block_difficulty(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_block_difficulty(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_block_gas_limit(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_block_gas_limit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_block_timestamp(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_block_timestamp(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_eth_balance(PyObject *cpy_r_self, PyObject *cpy_r_address, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_eth_balance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___Multicall___add_last_block_hash(PyObject *cpy_r_self, PyObject *cpy_r_return_signature);
PyObject *CPyPy_multicall___Multicall___add_last_block_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_multicall___fetch_outputs_Multicall_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___Multicall___fetch_outputs(PyObject *cpy_r_self, PyObject *cpy_r_calls, CPyTagged cpy_r_ConnErr_retries, PyObject *cpy_r_id);
PyObject *CPyPy_multicall___Multicall___fetch_outputs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___Multicall___aggregate(PyObject *cpy_r_self);
PyObject *CPyPy_multicall___Multicall___aggregate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall___NotSoBrightBatcher_____init__(PyObject *cpy_r_self);
PyObject *CPyPy_multicall___NotSoBrightBatcher_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_multicall___NotSoBrightBatcher___batch_calls(PyObject *cpy_r_self, PyObject *cpy_r_calls, CPyTagged cpy_r_step);
PyObject *CPyPy_multicall___NotSoBrightBatcher___batch_calls(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
tuple_T2OO CPyDef_multicall___NotSoBrightBatcher___split_calls(PyObject *cpy_r_self, PyObject *cpy_r_calls, PyObject *cpy_r_unused);
PyObject *CPyPy_multicall___NotSoBrightBatcher___split_calls(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_multicall___NotSoBrightBatcher___rebatch(PyObject *cpy_r_self, PyObject *cpy_r_calls);
PyObject *CPyPy_multicall___NotSoBrightBatcher___rebatch(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall____raise_or_proceed(PyObject *cpy_r_e, CPyTagged cpy_r_ct_calls, CPyTagged cpy_r_ConnErr_retries);
PyObject *CPyPy_multicall____raise_or_proceed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_multicall_____top_level__(void);
PyObject *CPyStatic_signature____SIGNATURES = NULL;
PyObject *CPyStatic_signature___TupleEncoder = NULL;
PyObject *CPyStatic_signature___TupleDecoder = NULL;
PyObject *CPyStatic_signature____keccak = NULL;
PyObject *CPyStatic_signature____get_encoder = NULL;
PyObject *CPyStatic_signature____get_decoder = NULL;
PyObject *CPyStatic_signature____stream_cls = NULL;
PyTypeObject *CPyType_signature___Signature;
PyObject *CPyDef_signature___Signature(PyObject *cpy_r_signature);
PyObject *CPyDef_signature___get_4byte_selector(PyObject *cpy_r_signature);
PyObject *CPyPy_signature___get_4byte_selector(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
tuple_T3OOO CPyDef_signature___parse_signature(PyObject *cpy_r_signature);
PyObject *CPyPy_signature___parse_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_signature___parse_typestring(PyObject *cpy_r_typestring);
PyObject *CPyPy_signature___parse_typestring(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_signature____get_signature(PyObject *cpy_r_signature);
PyObject *CPyPy_signature____get_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_signature___Signature_____init__(PyObject *cpy_r_self, PyObject *cpy_r_signature);
PyObject *CPyPy_signature___Signature_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_signature___Signature___encode_data(PyObject *cpy_r_self, PyObject *cpy_r_args);
PyObject *CPyPy_signature___Signature___encode_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_signature___Signature___decode_data(PyObject *cpy_r_self, PyObject *cpy_r_output);
PyObject *CPyPy_signature___Signature___decode_data(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_signature_____top_level__(void);

static int exec_847fc2cb349a9b029d5a__mypyc(PyObject *module)
{
    int res;
    PyObject *capsule;
    PyObject *tmp;
    
    extern PyObject *CPyInit_multicall___call(void);
    capsule = PyCapsule_New((void *)CPyInit_multicall___call, "847fc2cb349a9b029d5a__mypyc.init_multicall___call", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_multicall___call", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_multicall___constants(void);
    capsule = PyCapsule_New((void *)CPyInit_multicall___constants, "847fc2cb349a9b029d5a__mypyc.init_multicall___constants", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_multicall___constants", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_multicall___exceptions(void);
    capsule = PyCapsule_New((void *)CPyInit_multicall___exceptions, "847fc2cb349a9b029d5a__mypyc.init_multicall___exceptions", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_multicall___exceptions", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_multicall___loggers(void);
    capsule = PyCapsule_New((void *)CPyInit_multicall___loggers, "847fc2cb349a9b029d5a__mypyc.init_multicall___loggers", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_multicall___loggers", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_multicall___multicall(void);
    capsule = PyCapsule_New((void *)CPyInit_multicall___multicall, "847fc2cb349a9b029d5a__mypyc.init_multicall___multicall", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_multicall___multicall", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_multicall___signature(void);
    capsule = PyCapsule_New((void *)CPyInit_multicall___signature, "847fc2cb349a9b029d5a__mypyc.init_multicall___signature", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_multicall___signature", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return 0;
    fail:
    return -1;
}
static PyModuleDef module_def_847fc2cb349a9b029d5a__mypyc = {
    PyModuleDef_HEAD_INIT,
    .m_name = "847fc2cb349a9b029d5a__mypyc",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = NULL,
};
PyMODINIT_FUNC PyInit_847fc2cb349a9b029d5a__mypyc(void) {
    static PyObject *module = NULL;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&module_def_847fc2cb349a9b029d5a__mypyc);
    if (!module) {
        return NULL;
    }
    if (exec_847fc2cb349a9b029d5a__mypyc(module) < 0) {
        Py_DECREF(module);
        return NULL;
    }
    return module;
}
