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
static PyObject *call___Call_setup(PyTypeObject *type);
PyObject *CPyDef_call___Call(PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin);

static PyObject *
call___Call_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call___Call) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = call___Call_setup(type);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__repr__",
     (PyCFunction)CPyPy_call___Call_____repr__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"decode_output",
     (PyCFunction)CPyPy_call___Call___decode_output,
     METH_FASTCALL | METH_KEYWORDS | METH_STATIC, NULL},
    {"__call__",
     (PyCFunction)CPyPy_call___Call_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_call___Call_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"coroutine",
     (PyCFunction)CPyPy_call___Call___coroutine,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_call___Call_template = &CPyType_call___Call_template_;

static PyObject *
call___Call_setup(PyTypeObject *type)
{
    multicall___call___CallObject *self;
    self = (multicall___call___CallObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call___Call_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_call___Call(PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin)
{
    PyObject *self = call___Call_setup(CPyType_call___Call);
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
    PyObject *tmp = value;
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
    tmp = value;
    if (tmp != NULL) goto __LL4;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4;
    CPy_TypeError("object or None", value); 
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
    tmp = value;
    if (tmp != NULL) goto __LL6;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL6;
    CPy_TypeError("object or None", value); 
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

static PyObject *call___decode_output_Call_env_setup(PyTypeObject *type);
PyObject *CPyDef_call___decode_output_Call_env(void);

static PyObject *
call___decode_output_Call_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call___decode_output_Call_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return call___decode_output_Call_env_setup(type);
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
};
static PyTypeObject *CPyType_call___decode_output_Call_env_template = &CPyType_call___decode_output_Call_env_template_;

static PyObject *
call___decode_output_Call_env_setup(PyTypeObject *type)
{
    multicall___call___decode_output_Call_envObject *self;
    self = (multicall___call___decode_output_Call_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call___decode_output_Call_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_call___decode_output_Call_env(void)
{
    PyObject *self = call___decode_output_Call_env_setup(CPyType_call___decode_output_Call_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__call_____mypyc_lambda__0_decode_output_Call_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__(self, instance, owner);
}
static PyObject *call_____mypyc_lambda__0_decode_output_Call_obj_setup(PyTypeObject *type);
PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj(void);

static PyObject *
call_____mypyc_lambda__0_decode_output_Call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call_____mypyc_lambda__0_decode_output_Call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return call_____mypyc_lambda__0_decode_output_Call_obj_setup(type);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_call_____mypyc_lambda__0_decode_output_Call_obj_template = &CPyType_call_____mypyc_lambda__0_decode_output_Call_obj_template_;

static PyObject *
call_____mypyc_lambda__0_decode_output_Call_obj_setup(PyTypeObject *type)
{
    multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *self;
    self = (multicall___call_____mypyc_lambda__0_decode_output_Call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call_____mypyc_lambda__0_decode_output_Call_obj_vtable;
    self->vectorcall = CPyPy_call_____mypyc_lambda__0_decode_output_Call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj(void)
{
    PyObject *self = call_____mypyc_lambda__0_decode_output_Call_obj_setup(CPyType_call_____mypyc_lambda__0_decode_output_Call_obj);
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
static PyObject *call_____mypyc_lambda__1_decode_output_Call_obj_setup(PyTypeObject *type);
PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj(void);

static PyObject *
call_____mypyc_lambda__1_decode_output_Call_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call_____mypyc_lambda__1_decode_output_Call_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return call_____mypyc_lambda__1_decode_output_Call_obj_setup(type);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_call_____mypyc_lambda__1_decode_output_Call_obj_template = &CPyType_call_____mypyc_lambda__1_decode_output_Call_obj_template_;

static PyObject *
call_____mypyc_lambda__1_decode_output_Call_obj_setup(PyTypeObject *type)
{
    multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *self;
    self = (multicall___call_____mypyc_lambda__1_decode_output_Call_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = call_____mypyc_lambda__1_decode_output_Call_obj_vtable;
    self->vectorcall = CPyPy_call_____mypyc_lambda__1_decode_output_Call_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj(void)
{
    PyObject *self = call_____mypyc_lambda__1_decode_output_Call_obj_setup(CPyType_call_____mypyc_lambda__1_decode_output_Call_obj);
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
static PyObject *call___coroutine_Call_gen_setup(PyTypeObject *type);
PyObject *CPyDef_call___coroutine_Call_gen(void);

static PyObject *
call___coroutine_Call_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_call___coroutine_Call_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return call___coroutine_Call_gen_setup(type);
}

static int
call___coroutine_Call_gen_traverse(multicall___call___coroutine_Call_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_self);
    Py_VISIT(self->_args);
    Py_VISIT(self->__w3);
    Py_VISIT(self->_block_id);
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
    Py_VISIT(self->_output);
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
    Py_VISIT(self->_result);
    return 0;
}

static int
call___coroutine_Call_gen_clear(multicall___call___coroutine_Call_genObject *self)
{
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->__w3);
    Py_CLEAR(self->_block_id);
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
    Py_CLEAR(self->_output);
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
    Py_CLEAR(self->_result);
    return 0;
}

static void
call___coroutine_Call_gen_dealloc(multicall___call___coroutine_Call_genObject *self)
{
    PyObject_GC_UnTrack(self);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_call___coroutine_Call_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_call___coroutine_Call_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_call___coroutine_Call_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_call___coroutine_Call_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_call___coroutine_Call_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_call___coroutine_Call_gen_template = &CPyType_call___coroutine_Call_gen_template_;

static PyObject *
call___coroutine_Call_gen_setup(PyTypeObject *type)
{
    multicall___call___coroutine_Call_genObject *self;
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
    PyObject *self = call___coroutine_Call_gen_setup(CPyType_call___coroutine_Call_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static int call_exec(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___call_internal, "__name__");
    CPyStatic_call___globals = PyModule_GetDict(CPyModule_multicall___call_internal);
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
    Py_CLEAR(CPyModule_multicall___call_internal);
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
static PyMethodDef callmodule_methods[] = {
    {"prep_args", (PyCFunction)CPyPy_call___prep_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

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
    if (CPyModule_multicall___call_internal) {
        Py_INCREF(CPyModule_multicall___call_internal);
        return CPyModule_multicall___call_internal;
    }
    CPyModule_multicall___call_internal = PyModule_Create(&callmodule);
    if (unlikely(CPyModule_multicall___call_internal == NULL))
        goto fail;
    if (call_exec(CPyModule_multicall___call_internal) != 0)
        goto fail;
    return CPyModule_multicall___call_internal;
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
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    if (cpy_r_returns != NULL) goto CPyL38;
    cpy_r_r0 = Py_None;
    cpy_r_returns = cpy_r_r0;
CPyL2: ;
    if (cpy_r_block_id != NULL) goto CPyL39;
    cpy_r_r1 = Py_None;
    cpy_r_block_id = cpy_r_r1;
CPyL4: ;
    if (cpy_r_gas_limit != NULL) goto CPyL40;
    cpy_r_r2 = Py_None;
    cpy_r_gas_limit = cpy_r_r2;
CPyL6: ;
    if (cpy_r_state_override_code != NULL) goto CPyL41;
    cpy_r_r3 = Py_None;
    cpy_r_state_override_code = cpy_r_r3;
CPyL8: ;
    if (cpy_r__w3 != NULL) goto CPyL42;
    cpy_r_r4 = Py_None;
    cpy_r__w3 = cpy_r_r4;
CPyL10: ;
    if (cpy_r_origin != NULL) goto CPyL43;
    cpy_r_r5 = Py_None;
    cpy_r_origin = cpy_r_r5;
CPyL12: ;
    cpy_r_r6 = CPyStatic_call___globals;
    cpy_r_r7 = CPyStatics[3]; /* 'to_checksum_address' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 56, CPyStatic_call___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_target};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 56, CPyStatic_call___globals);
        goto CPyL44;
    }
    ((multicall___call___CallObject *)cpy_r_self)->_target = cpy_r_r11;
    ((multicall___call___CallObject *)cpy_r_self)->_returns = cpy_r_returns;
    ((multicall___call___CallObject *)cpy_r_self)->_block_id = cpy_r_block_id;
    ((multicall___call___CallObject *)cpy_r_self)->_gas_limit = cpy_r_gas_limit;
    ((multicall___call___CallObject *)cpy_r_self)->_state_override_code = cpy_r_state_override_code;
    ((multicall___call___CallObject *)cpy_r_self)->_w3 = cpy_r__w3;
    cpy_r_r12 = PyObject_IsTrue(cpy_r_origin);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 54, CPyStatic_call___globals);
        goto CPyL45;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL46;
    cpy_r_r15 = CPyStatic_call___globals;
    cpy_r_r16 = CPyStatics[3]; /* 'to_checksum_address' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 62, CPyStatic_call___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_origin};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 62, CPyStatic_call___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_origin);
    cpy_r_r21 = cpy_r_r20;
    goto CPyL20;
CPyL19: ;
    cpy_r_r22 = Py_None;
    cpy_r_r21 = cpy_r_r22;
CPyL20: ;
    ((multicall___call___CallObject *)cpy_r_self)->_origin = cpy_r_r21;
    cpy_r_r23 = (PyObject *)&PyList_Type;
    cpy_r_r24 = PyObject_IsInstance(cpy_r_function, cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals);
        goto CPyL37;
    }
    cpy_r_r26 = cpy_r_r24;
    if (!cpy_r_r26) goto CPyL25;
    if (likely(PyList_Check(cpy_r_function)))
        cpy_r_r27 = cpy_r_function;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals, "list", cpy_r_function);
        goto CPyL37;
    }
    cpy_r_r28 = CPyList_GetItemShort(cpy_r_r27, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals);
        goto CPyL37;
    }
    cpy_r_r29 = cpy_r_r28;
    goto CPyL27;
CPyL25: ;
    CPy_INCREF(cpy_r_function);
    if (likely(PyUnicode_Check(cpy_r_function)))
        cpy_r_r30 = cpy_r_function;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 64, CPyStatic_call___globals, "str", cpy_r_function);
        goto CPyL37;
    }
    cpy_r_r29 = cpy_r_r30;
CPyL27: ;
    ((multicall___call___CallObject *)cpy_r_self)->_function = cpy_r_r29;
    cpy_r_r31 = (PyObject *)&PyList_Type;
    cpy_r_r32 = PyObject_IsInstance(cpy_r_function, cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals);
        goto CPyL37;
    }
    cpy_r_r34 = cpy_r_r32;
    if (!cpy_r_r34) goto CPyL33;
    CPy_INCREF(cpy_r_function);
    if (likely(PyList_Check(cpy_r_function)))
        cpy_r_r35 = cpy_r_function;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals, "list", cpy_r_function);
        goto CPyL37;
    }
    cpy_r_r36 = CPyList_GetSlice(cpy_r_r35, 2, 9223372036854775806LL);
    CPy_DECREF_NO_IMM(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals);
        goto CPyL37;
    }
    if (likely(PyList_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 65, CPyStatic_call___globals, "list", cpy_r_r36);
        goto CPyL37;
    }
    cpy_r_r38 = cpy_r_r37;
    goto CPyL34;
CPyL33: ;
    cpy_r_r39 = Py_None;
    cpy_r_r38 = cpy_r_r39;
CPyL34: ;
    ((multicall___call___CallObject *)cpy_r_self)->_args = cpy_r_r38;
    cpy_r_r40 = ((multicall___call___CallObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r40);
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__init__", 66, CPyStatic_call___globals, "str", cpy_r_r40);
        goto CPyL37;
    }
    cpy_r_r42 = CPyDef_signature____get_signature(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__init__", 66, CPyStatic_call___globals);
        goto CPyL37;
    }
    ((multicall___call___CallObject *)cpy_r_self)->_signature = cpy_r_r42;
    return 1;
CPyL37: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL38: ;
    CPy_INCREF(cpy_r_returns);
    goto CPyL2;
CPyL39: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL4;
CPyL40: ;
    CPy_INCREF(cpy_r_gas_limit);
    goto CPyL6;
CPyL41: ;
    CPy_INCREF(cpy_r_state_override_code);
    goto CPyL8;
CPyL42: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL10;
CPyL43: ;
    CPy_INCREF(cpy_r_origin);
    goto CPyL12;
CPyL44: ;
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_gas_limit);
    CPy_DecRef(cpy_r_state_override_code);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_origin);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_origin);
    goto CPyL37;
CPyL46: ;
    CPy_DECREF(cpy_r_origin);
    goto CPyL19;
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
    if (arg_target != NULL) goto __LL9;
    arg_target = obj_target;
    if (arg_target != NULL) goto __LL9;
    CPy_TypeError("union[str, object]", obj_target); 
    goto fail;
__LL9: ;
    PyObject *arg_function;
    if (PyUnicode_Check(obj_function))
        arg_function = obj_function;
    else {
        arg_function = NULL;
    }
    if (arg_function != NULL) goto __LL10;
    if (PyList_Check(obj_function))
        arg_function = obj_function;
    else {
        arg_function = NULL;
    }
    if (arg_function != NULL) goto __LL10;
    CPy_TypeError("union[str, list]", obj_function); 
    goto fail;
__LL10: ;
    PyObject *arg_returns;
    if (obj_returns == NULL) {
        arg_returns = NULL;
        goto __LL11;
    }
    arg_returns = obj_returns;
    if (arg_returns != NULL) goto __LL11;
    if (obj_returns == Py_None)
        arg_returns = obj_returns;
    else {
        arg_returns = NULL;
    }
    if (arg_returns != NULL) goto __LL11;
    CPy_TypeError("object or None", obj_returns); 
    goto fail;
__LL11: ;
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL12;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL12;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL12;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL12: ;
    PyObject *arg_gas_limit;
    if (obj_gas_limit == NULL) {
        arg_gas_limit = NULL;
        goto __LL13;
    }
    if (PyLong_Check(obj_gas_limit))
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL13;
    if (obj_gas_limit == Py_None)
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL13;
    CPy_TypeError("int or None", obj_gas_limit); 
    goto fail;
__LL13: ;
    PyObject *arg_state_override_code;
    if (obj_state_override_code == NULL) {
        arg_state_override_code = NULL;
        goto __LL14;
    }
    arg_state_override_code = obj_state_override_code;
    if (arg_state_override_code != NULL) goto __LL14;
    if (obj_state_override_code == Py_None)
        arg_state_override_code = obj_state_override_code;
    else {
        arg_state_override_code = NULL;
    }
    if (arg_state_override_code != NULL) goto __LL14;
    CPy_TypeError("object or None", obj_state_override_code); 
    goto fail;
__LL14: ;
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
        goto __LL15;
    }
    arg__w3 = obj__w3;
    if (arg__w3 != NULL) goto __LL15;
    if (obj__w3 == Py_None)
        arg__w3 = obj__w3;
    else {
        arg__w3 = NULL;
    }
    if (arg__w3 != NULL) goto __LL15;
    CPy_TypeError("object or None", obj__w3); 
    goto fail;
__LL15: ;
    PyObject *arg_origin;
    if (obj_origin == NULL) {
        arg_origin = NULL;
        goto __LL16;
    }
    if (PyUnicode_Check(obj_origin))
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL16;
    arg_origin = obj_origin;
    if (arg_origin != NULL) goto __LL16;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL16;
    CPy_TypeError("union[str, object, None]", obj_origin); 
    goto fail;
__LL16: ;
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
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_string;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = CPyStatics[4]; /* '<Call ' */
    cpy_r_r1 = ((multicall___call___CallObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyObject_Str(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL18;
    }
    cpy_r_r3 = CPyStatics[5]; /* ' on ' */
    cpy_r_r4 = ((multicall___call___CallObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = CPyStatics[321]; /* 8 */
    cpy_r_r8 = PySlice_New(cpy_r_r5, cpy_r_r7, cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL19;
    }
    cpy_r_r9 = PyObject_GetItem(cpy_r_r4, cpy_r_r8);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals, "str", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_r11 = CPyStr_Build(4, cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r10);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 69, CPyStatic_call___globals);
        goto CPyL18;
    }
    cpy_r_string = cpy_r_r11;
    cpy_r_r12 = ((multicall___call___CallObject *)cpy_r_self)->_block_id;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = CPyStatics[6]; /* ' block=' */
    cpy_r_r16 = ((multicall___call___CallObject *)cpy_r_self)->_block_id;
    CPy_INCREF(cpy_r_r16);
    if (likely(PyLong_Check(cpy_r_r16)))
        cpy_r_r17 = CPyTagged_FromObject(cpy_r_r16);
    else {
        CPy_TypeError("int", cpy_r_r16); cpy_r_r17 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL21;
    }
    cpy_r_r18 = CPyTagged_Str(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL21;
    }
    cpy_r_r19 = CPyStr_Build(2, cpy_r_r15, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL21;
    }
    cpy_r_r20 = CPyStr_Append(cpy_r_string, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 71, CPyStatic_call___globals);
        goto CPyL18;
    }
    cpy_r_string = cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = ((multicall___call___CallObject *)cpy_r_self)->_returns;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = CPyStatics[7]; /* ' returns=' */
    cpy_r_r25 = ((multicall___call___CallObject *)cpy_r_self)->_returns;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PyObject_Str(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 73, CPyStatic_call___globals);
        goto CPyL21;
    }
    cpy_r_r27 = CPyStr_Build(2, cpy_r_r24, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 73, CPyStatic_call___globals);
        goto CPyL21;
    }
    cpy_r_r28 = CPyStr_Append(cpy_r_string, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 73, CPyStatic_call___globals);
        goto CPyL18;
    }
    cpy_r_string = cpy_r_r28;
CPyL16: ;
    cpy_r_r29 = CPyStatics[8]; /* '>' */
    cpy_r_r30 = CPyStr_Build(2, cpy_r_string, cpy_r_r29);
    CPy_DECREF(cpy_r_string);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__repr__", 74, CPyStatic_call___globals);
        goto CPyL18;
    }
    return cpy_r_r30;
CPyL18: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_string);
    goto CPyL18;
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
    PyObject *__tmp17;
    if (unlikely(!(PyTuple_Check(cpy_r_r56) && PyTuple_GET_SIZE(cpy_r_r56) == 2))) {
        __tmp17 = NULL;
        goto __LL18;
    }
    __tmp17 = PyTuple_GET_ITEM(cpy_r_r56, 0);
    if (__tmp17 == NULL) goto __LL18;
    __tmp17 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    if (__tmp17 != NULL) goto __LL19;
    if (PyTuple_GET_ITEM(cpy_r_r56, 1) == Py_None)
        __tmp17 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    else {
        __tmp17 = NULL;
    }
    if (__tmp17 != NULL) goto __LL19;
    __tmp17 = NULL;
__LL19: ;
    if (__tmp17 == NULL) goto __LL18;
    __tmp17 = cpy_r_r56;
__LL18: ;
    if (unlikely(__tmp17 == NULL)) {
        CPy_TypeError("tuple[object, union[object, None]]", cpy_r_r56); cpy_r_r58 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp20 = PyTuple_GET_ITEM(cpy_r_r56, 0);
        CPy_INCREF(__tmp20);
        PyObject *__tmp21;
        __tmp21 = __tmp20;
        cpy_r_r58.f0 = __tmp21;
        PyObject *__tmp22 = PyTuple_GET_ITEM(cpy_r_r56, 1);
        CPy_INCREF(__tmp22);
        PyObject *__tmp23;
        __tmp23 = __tmp22;
        if (__tmp23 != NULL) goto __LL24;
        if (__tmp22 == Py_None)
            __tmp23 = __tmp22;
        else {
            __tmp23 = NULL;
        }
        if (__tmp23 != NULL) goto __LL24;
        CPy_TypeError("object or None", __tmp22); 
        __tmp23 = NULL;
__LL24: ;
        cpy_r_r58.f1 = __tmp23;
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
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r53, cpy_r_r59, cpy_r_r70);
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
    if (arg_output != NULL) goto __LL25;
    arg_output = obj_output;
    if (arg_output != NULL) goto __LL25;
    CPy_TypeError("union[bytes, object]", obj_output); 
    goto fail;
__LL25: ;
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
        goto __LL26;
    }
    arg_returns = obj_returns;
    if (arg_returns != NULL) goto __LL26;
    if (obj_returns == Py_None)
        arg_returns = obj_returns;
    else {
        arg_returns = NULL;
    }
    if (arg_returns != NULL) goto __LL26;
    CPy_TypeError("object or None", obj_returns); 
    goto fail;
__LL26: ;
    PyObject *arg_success;
    if (obj_success == NULL) {
        arg_success = NULL;
        goto __LL27;
    }
    if (PyBool_Check(obj_success))
        arg_success = obj_success;
    else {
        arg_success = NULL;
    }
    if (arg_success != NULL) goto __LL27;
    if (obj_success == Py_None)
        arg_success = obj_success;
    else {
        arg_success = NULL;
    }
    if (arg_success != NULL) goto __LL27;
    CPy_TypeError("bool or None", obj_success); 
    goto fail;
__LL27: ;
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
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    if (cpy_r_args != NULL) goto CPyL48;
    cpy_r_r0 = Py_None;
    cpy_r_args = cpy_r_r0;
CPyL2: ;
    if (cpy_r__w3 != NULL) goto CPyL49;
    cpy_r_r1 = Py_None;
    cpy_r__w3 = cpy_r_r1;
CPyL4: ;
    if (cpy_r_block_id != NULL) goto CPyL50;
    cpy_r_r2 = Py_None;
    cpy_r_block_id = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = ((multicall___call___CallObject *)cpy_r_self)->_w3;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL51;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = PyObject_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 117, CPyStatic_call___globals);
        goto CPyL52;
    }
    cpy_r_r9 = cpy_r_r7;
    if (cpy_r_r9) {
        goto CPyL53;
    } else
        goto CPyL51;
CPyL10: ;
    cpy_r_r10 = cpy_r_r3;
    goto CPyL19;
CPyL11: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r__w3 != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL54;
    CPy_INCREF(cpy_r__w3);
    cpy_r_r13 = cpy_r__w3;
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 113, CPyStatic_call___globals);
        goto CPyL55;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL54;
    cpy_r_r17 = cpy_r__w3;
    goto CPyL18;
CPyL16: ;
    cpy_r_r18 = CPyStatic_call___globals;
    cpy_r_r19 = CPyStatics[9]; /* 'w3' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 117, CPyStatic_call___globals);
        goto CPyL56;
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
    if (!cpy_r_r24) goto CPyL57;
    CPy_INCREF(cpy_r_args);
    cpy_r_r25 = cpy_r_args;
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 112, CPyStatic_call___globals);
        goto CPyL58;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL57;
    cpy_r_r29 = cpy_r_args;
    goto CPyL25;
CPyL24: ;
    cpy_r_r30 = ((multicall___call___CallObject *)cpy_r_self)->_args;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r29 = cpy_r_r30;
CPyL25: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_block_id != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL59;
    if (likely(PyLong_Check(cpy_r_block_id)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_block_id);
    else {
        CPy_TypeError("int", cpy_r_block_id); cpy_r_r33 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 115, CPyStatic_call___globals);
        goto CPyL60;
    }
    cpy_r_r34 = cpy_r_r33 != 0;
    CPyTagged_DECREF(cpy_r_r33);
    if (!cpy_r_r34) goto CPyL59;
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
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r40 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__call__", 118, CPyStatic_call___globals, "str", cpy_r_r21);
        goto CPyL61;
    }
    cpy_r_r41 = CPyDef_call___prep_args(cpy_r_r40, cpy_r_r22, cpy_r_r29, cpy_r_r35, cpy_r_r37, cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF_NO_IMM(cpy_r_r22);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 118, CPyStatic_call___globals);
        goto CPyL62;
    }
    cpy_r_args = cpy_r_r41;
    cpy_r_r42 = cpy_r__w3;
    cpy_r_r43 = CPyStatics[10]; /* 'eth' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL63;
    }
    if (likely(PyList_Check(cpy_r_args)))
        cpy_r_r45 = cpy_r_args;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals, "list", cpy_r_args);
        goto CPyL64;
    }
    cpy_r_r46 = CPyStatics[11]; /* 'call' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL65;
    }
    cpy_r_r48 = PyList_New(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL66;
    }
    cpy_r_r49 = CPyList_Extend(cpy_r_r48, cpy_r_r45);
    CPy_DECREF_NO_IMM(cpy_r_r45);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL67;
    } else
        goto CPyL68;
CPyL38: ;
    cpy_r_r50 = PyList_AsTuple(cpy_r_r48);
    CPy_DECREF_NO_IMM(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL69;
    }
    cpy_r_r51 = PyDict_New();
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL70;
    }
    cpy_r_r52 = PyObject_Call(cpy_r_r47, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 128, CPyStatic_call___globals);
        goto CPyL47;
    }
    cpy_r_r53 = ((multicall___call___CallObject *)cpy_r_self)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r53);
    cpy_r_r54 = ((multicall___call___CallObject *)cpy_r_self)->_returns;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_call___Call___decode_output(cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF_NO_IMM(cpy_r_r53);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 127, CPyStatic_call___globals);
        goto CPyL47;
    }
    cpy_r_r57 = CPyStatics[12]; /* '%s returned %s' */
    cpy_r_r58 = CPyStatic_call___log_debug;
    if (unlikely(cpy_r_r58 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL45;
CPyL43: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 132, CPyStatic_call___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL45: ;
    PyObject *cpy_r_r60[3] = {cpy_r_r57, cpy_r_self, cpy_r_r56};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_Vectorcall(cpy_r_r58, cpy_r_r61, 3, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "__call__", 132, CPyStatic_call___globals);
        goto CPyL72;
    } else
        goto CPyL73;
CPyL46: ;
    return cpy_r_r56;
CPyL47: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL48: ;
    CPy_INCREF(cpy_r_args);
    goto CPyL2;
CPyL49: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL4;
CPyL50: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL6;
CPyL51: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL11;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r3);
    goto CPyL47;
CPyL53: ;
    CPy_DECREF(cpy_r__w3);
    goto CPyL10;
CPyL54: ;
    CPy_DECREF(cpy_r__w3);
    goto CPyL16;
CPyL55: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_block_id);
    goto CPyL47;
CPyL57: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL24;
CPyL58: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL47;
CPyL59: ;
    CPy_DECREF(cpy_r_block_id);
    goto CPyL29;
CPyL60: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_block_id);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r29);
    goto CPyL47;
CPyL61: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    goto CPyL47;
CPyL62: ;
    CPy_DecRef(cpy_r__w3);
    goto CPyL47;
CPyL63: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL47;
CPyL64: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL47;
CPyL65: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL47;
CPyL66: ;
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r47);
    goto CPyL47;
CPyL67: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    goto CPyL47;
CPyL68: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL38;
CPyL69: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL47;
CPyL70: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL47;
CPyL71: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL43;
CPyL72: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL47;
CPyL73: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL46;
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
        goto __LL28;
    }
    arg_args = obj_args;
    if (arg_args != NULL) goto __LL28;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL28;
    CPy_TypeError("object or None", obj_args); 
    goto fail;
__LL28: ;
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
        goto __LL29;
    }
    arg__w3 = obj__w3;
    if (arg__w3 != NULL) goto __LL29;
    if (obj__w3 == Py_None)
        arg__w3 = obj__w3;
    else {
        arg__w3 = NULL;
    }
    if (arg__w3 != NULL) goto __LL29;
    CPy_TypeError("object or None", obj__w3); 
    goto fail;
__LL29: ;
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL30;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL30;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL30;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL30: ;
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

PyObject *CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
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
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject **cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    char cpy_r_r105;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    tuple_T3OOO cpy_r_r110;
    tuple_T3OOO cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
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
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    tuple_T3OOO cpy_r_r174;
    char cpy_r_r175;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    tuple_T3OOO cpy_r_r179;
    tuple_T3OOO cpy_r_r180;
    tuple_T3OOO cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    tuple_T3OOO cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    tuple_T3OOO cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject **cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    tuple_T3OOO cpy_r_r211;
    char cpy_r_r212;
    PyObject **cpy_r_r213;
    PyObject *cpy_r_r214;
    char cpy_r_r215;
    tuple_T3OOO cpy_r_r216;
    tuple_T3OOO cpy_r_r217;
    tuple_T3OOO cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    char cpy_r_r225;
    tuple_T3OOO cpy_r_r226;
    tuple_T3OOO cpy_r_r227;
    char cpy_r_r228;
    tuple_T3OOO cpy_r_r229;
    tuple_T3OOO cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject **cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    tuple_T3OOO cpy_r_r250;
    char cpy_r_r251;
    PyObject **cpy_r_r252;
    PyObject *cpy_r_r253;
    char cpy_r_r254;
    tuple_T3OOO cpy_r_r255;
    tuple_T3OOO cpy_r_r256;
    tuple_T3OOO cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    PyObject **cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    char cpy_r_r281;
    char cpy_r_r282;
    char cpy_r_r283;
    char cpy_r_r284;
    char cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = NULL;
    cpy_r_r7 = cpy_r_r6;
    tuple_T3OOO __tmp31 = { NULL, NULL, NULL };
    cpy_r_r8 = __tmp31;
    cpy_r_r9 = cpy_r_r8;
    cpy_r_r10 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL240;
CPyL1: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_type != cpy_r_r11;
    if (!cpy_r_r12) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r13 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 146, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF_NO_IMM(cpy_r_r13);
CPyL5: ;
    cpy_r_r14 = ((multicall___call___CallObject *)cpy_r_r13)->_w3;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF_NO_IMM(cpy_r_r13);
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_r14 != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL248;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r14;
    cpy_r_r18 = PyObject_IsTrue(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL249;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL248;
    cpy_r_r21 = cpy_r_r14;
    goto CPyL19;
CPyL10: ;
    cpy_r_r22 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 146, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r22);
CPyL11: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL250;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r22;
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL251;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL250;
    cpy_r_r29 = cpy_r_r22;
    goto CPyL18;
CPyL16: ;
    cpy_r_r30 = CPyStatic_call___globals;
    cpy_r_r31 = CPyStatics[9]; /* 'w3' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r29 = cpy_r_r32;
CPyL18: ;
    cpy_r_r21 = cpy_r_r29;
CPyL19: ;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3 = cpy_r_r21;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 146, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r34 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 148, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF_NO_IMM(cpy_r_r34);
CPyL21: ;
    cpy_r_r35 = ((multicall___call___CallObject *)cpy_r_r34)->_state_override_code;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF_NO_IMM(cpy_r_r34);
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL252;
    cpy_r_r38 = cpy_r_r35;
    cpy_r_r39 = PyObject_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL44;
    cpy_r_r42 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 148, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r42);
CPyL26: ;
    cpy_r_r43 = CPyStatic_call___globals;
    cpy_r_r44 = CPyStatics[15]; /* 'state_override_supported' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL253;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_r42};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL253;
    }
    CPy_DECREF(cpy_r_r42);
    if (unlikely(!PyBool_Check(cpy_r_r48))) {
        CPy_TypeError("bool", cpy_r_r48); cpy_r_r49 = 2;
    } else
        cpy_r_r49 = cpy_r_r48 == Py_True;
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 148, CPyStatic_call___globals);
        goto CPyL247;
    }
    if (cpy_r_r49) goto CPyL44;
    cpy_r_r50 = CPyStatics[16]; /* 'State override is not supported on ' */
    cpy_r_r51 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 150, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r51);
CPyL31: ;
    cpy_r_r52 = CPyStatic_call___globals;
    cpy_r_r53 = CPyStatics[17]; /* 'chain_id' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL254;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r51};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 1, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL254;
    }
    CPy_DECREF(cpy_r_r51);
    cpy_r_r58 = (PyObject *)CPyType_constants___Network;
    PyObject *cpy_r_r59[1] = {cpy_r_r57};
    cpy_r_r60 = (PyObject **)&cpy_r_r59;
    cpy_r_r61 = PyObject_Vectorcall(cpy_r_r58, cpy_r_r60, 1, 0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL255;
    }
    CPy_DECREF(cpy_r_r57);
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_constants___Network))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals, "multicall.constants.Network", cpy_r_r61);
        goto CPyL247;
    }
    cpy_r_r63 = CPyStatics[18]; /* '__repr__' */
    PyObject *cpy_r_r64[1] = {cpy_r_r62};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r65, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL256;
    }
    CPy_DECREF_NO_IMM(cpy_r_r62);
    if (likely(PyUnicode_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals, "str", cpy_r_r66);
        goto CPyL247;
    }
    cpy_r_r68 = CPyStr_GetSlice(cpy_r_r67, 2, -2);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL247;
    }
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals, "str", cpy_r_r68);
        goto CPyL247;
    }
    cpy_r_r70 = CPyStatics[19]; /* '.' */
    cpy_r_r71 = CPyStr_Build(3, cpy_r_r50, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 150, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r72 = (PyObject *)CPyType_exceptions___StateOverrideNotSupported;
    PyObject *cpy_r_r73[1] = {cpy_r_r71};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 149, CPyStatic_call___globals);
        goto CPyL257;
    }
    CPy_DECREF(cpy_r_r71);
    if (likely(Py_TYPE(cpy_r_r75) == CPyType_exceptions___StateOverrideNotSupported))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 149, CPyStatic_call___globals, "multicall.exceptions.StateOverrideNotSupported", cpy_r_r75);
        goto CPyL247;
    }
    CPy_Raise(cpy_r_r76);
    CPy_DECREF_NO_IMM(cpy_r_r76);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 149, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r77 = CPyStatic_call___globals;
    cpy_r_r78 = CPyStatics[20]; /* '_get_semaphore' */
    cpy_r_r79 = CPyDict_GetItem(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r80 = PyObject_Vectorcall(cpy_r_r79, 0, 0, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r81 = PyObject_Type(cpy_r_r80);
    cpy_r_r82 = CPyStatics[21]; /* '__aexit__' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL258;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r83;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL258;
    }
    cpy_r_r85 = CPyStatics[22]; /* '__aenter__' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r85);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL259;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r80};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL259;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r80;
    cpy_r_r90 = 1;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL260;
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 1;
    cpy_r_r91 = 1;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL260;
    }
    cpy_r_r92 = CPy_GetCoro(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL247;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r92;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r94 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__3", -1, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r94);
CPyL55: ;
    cpy_r_r95 = CPyIter_Next(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (cpy_r_r95 != NULL) goto CPyL58;
    cpy_r_r96 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r97 = cpy_r_r96;
    CPy_DECREF(cpy_r_r97);
    cpy_r_r98 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r98;
    cpy_r_r99 = 1;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL247;
    } else
        goto CPyL80;
CPyL58: ;
    cpy_r_r100 = cpy_r_r95;
CPyL59: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r100;
CPyL60: ;
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r103 = cpy_r_type != cpy_r_r102;
    if (!cpy_r_r103) goto CPyL261;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL64;
    } else
        goto CPyL262;
CPyL62: ;
    CPy_Unreachable();
CPyL63: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL75;
CPyL64: ;
    cpy_r_r104 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r104;
    cpy_r_r105 = 1;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL263;
    }
    cpy_r_r106 = (PyObject **)&cpy_r_r1;
    cpy_r_r107 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__3", -1, CPyStatic_call___globals);
        goto CPyL263;
    }
    CPy_INCREF(cpy_r_r107);
CPyL66: ;
    cpy_r_r108 = CPy_YieldFromErrorHandle(cpy_r_r107, cpy_r_r106);
    CPy_DecRef(cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL263;
    }
    if (cpy_r_r108) goto CPyL70;
    cpy_r_r100 = cpy_r_r1;
    cpy_r_r109 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__4", -1, CPyStatic_call___globals);
        goto CPyL264;
    }
    CPy_INCREF(cpy_r_r109.f0);
    CPy_INCREF(cpy_r_r109.f1);
    CPy_INCREF(cpy_r_r109.f2);
CPyL69: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    goto CPyL59;
CPyL70: ;
    cpy_r_r97 = cpy_r_r1;
    CPy_DecRef(cpy_r_r97);
    cpy_r_r110 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r110.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__4", -1, CPyStatic_call___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    CPy_INCREF(cpy_r_r110.f2);
CPyL71: ;
    CPy_RestoreExcInfo(cpy_r_r110);
    CPy_DecRef(cpy_r_r110.f0);
    CPy_DecRef(cpy_r_r110.f1);
    CPy_DecRef(cpy_r_r110.f2);
    goto CPyL80;
CPyL72: ;
    cpy_r_r111 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r111.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__4", -1, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r111.f0);
    CPy_INCREF(cpy_r_r111.f1);
    CPy_INCREF(cpy_r_r111.f2);
CPyL73: ;
    CPy_RestoreExcInfo(cpy_r_r111);
    CPy_DecRef(cpy_r_r111.f0);
    CPy_DecRef(cpy_r_r111.f1);
    CPy_DecRef(cpy_r_r111.f2);
    cpy_r_r112 = CPy_KeepPropagating();
    if (!cpy_r_r112) goto CPyL247;
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r113 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__3", -1, CPyStatic_call___globals);
        goto CPyL265;
    }
    CPy_INCREF(cpy_r_r113);
CPyL76: ;
    cpy_r_r114 = CPyIter_Send(cpy_r_r113, cpy_r_arg);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r114 == NULL) goto CPyL78;
    cpy_r_r100 = cpy_r_r114;
    goto CPyL59;
CPyL78: ;
    cpy_r_r115 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r97 = cpy_r_r115;
    CPy_DECREF(cpy_r_r97);
CPyL80: ;
    cpy_r_r116 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->__w3;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "_w3", 154, CPyStatic_call___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r116);
CPyL81: ;
    cpy_r_r117 = CPyStatic_call___globals;
    cpy_r_r118 = CPyStatics[23]; /* 'get_async_w3' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL266;
    }
    PyObject *cpy_r_r120[1] = {cpy_r_r116};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = PyObject_Vectorcall(cpy_r_r119, cpy_r_r121, 1, 0);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL266;
    }
    CPy_DECREF(cpy_r_r116);
    cpy_r_r123 = CPyStatics[10]; /* 'eth' */
    cpy_r_r124 = CPyObject_GetAttr(cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL141;
    }
    cpy_r_r125 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 156, CPyStatic_call___globals);
        goto CPyL267;
    }
    CPy_INCREF_NO_IMM(cpy_r_r125);
CPyL85: ;
    cpy_r_r126 = ((multicall___call___CallObject *)cpy_r_r125)->_target;
    CPy_INCREF(cpy_r_r126);
    CPy_DECREF_NO_IMM(cpy_r_r125);
    cpy_r_r127 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 157, CPyStatic_call___globals);
        goto CPyL268;
    }
    CPy_INCREF_NO_IMM(cpy_r_r127);
CPyL86: ;
    cpy_r_r128 = ((multicall___call___CallObject *)cpy_r_r127)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r128);
    CPy_DECREF_NO_IMM(cpy_r_r127);
    cpy_r_r129 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_args;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "args", 158, CPyStatic_call___globals);
        goto CPyL269;
    }
    CPy_INCREF(cpy_r_r129);
CPyL87: ;
    cpy_r_r130 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r131 = cpy_r_r129 != cpy_r_r130;
    if (!cpy_r_r131) goto CPyL270;
    CPy_INCREF(cpy_r_r129);
    cpy_r_r132 = cpy_r_r129;
    cpy_r_r133 = PyObject_IsTrue(cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 158, CPyStatic_call___globals);
        goto CPyL271;
    }
    cpy_r_r135 = cpy_r_r133;
    if (!cpy_r_r135) goto CPyL270;
    cpy_r_r136 = cpy_r_r129;
    goto CPyL94;
CPyL92: ;
    cpy_r_r137 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 158, CPyStatic_call___globals);
        goto CPyL269;
    }
    CPy_INCREF_NO_IMM(cpy_r_r137);
CPyL93: ;
    cpy_r_r138 = ((multicall___call___CallObject *)cpy_r_r137)->_args;
    CPy_INCREF(cpy_r_r138);
    CPy_DECREF_NO_IMM(cpy_r_r137);
    cpy_r_r136 = cpy_r_r138;
CPyL94: ;
    cpy_r_r139 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_block_id;
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "block_id", 159, CPyStatic_call___globals);
        goto CPyL272;
    }
    CPy_INCREF(cpy_r_r139);
CPyL95: ;
    cpy_r_r140 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r141 = cpy_r_r139 != cpy_r_r140;
    if (!cpy_r_r141) goto CPyL273;
    if (likely(PyLong_Check(cpy_r_r139)))
        cpy_r_r142 = CPyTagged_FromObject(cpy_r_r139);
    else {
        CPy_TypeError("int", cpy_r_r139); cpy_r_r142 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r142 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 159, CPyStatic_call___globals);
        goto CPyL274;
    }
    cpy_r_r143 = cpy_r_r142 != 0;
    CPyTagged_DECREF(cpy_r_r142);
    if (!cpy_r_r143) goto CPyL273;
    cpy_r_r144 = cpy_r_r139;
    goto CPyL101;
CPyL99: ;
    cpy_r_r145 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 159, CPyStatic_call___globals);
        goto CPyL272;
    }
    CPy_INCREF_NO_IMM(cpy_r_r145);
CPyL100: ;
    cpy_r_r146 = ((multicall___call___CallObject *)cpy_r_r145)->_block_id;
    CPy_INCREF(cpy_r_r146);
    CPy_DECREF_NO_IMM(cpy_r_r145);
    cpy_r_r144 = cpy_r_r146;
CPyL101: ;
    cpy_r_r147 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 160, CPyStatic_call___globals);
        goto CPyL275;
    }
    CPy_INCREF_NO_IMM(cpy_r_r147);
CPyL102: ;
    cpy_r_r148 = ((multicall___call___CallObject *)cpy_r_r147)->_origin;
    CPy_INCREF(cpy_r_r148);
    CPy_DECREF_NO_IMM(cpy_r_r147);
    cpy_r_r149 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 161, CPyStatic_call___globals);
        goto CPyL276;
    }
    CPy_INCREF_NO_IMM(cpy_r_r149);
CPyL103: ;
    cpy_r_r150 = ((multicall___call___CallObject *)cpy_r_r149)->_gas_limit;
    CPy_INCREF(cpy_r_r150);
    CPy_DECREF_NO_IMM(cpy_r_r149);
    cpy_r_r151 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 162, CPyStatic_call___globals);
        goto CPyL277;
    }
    CPy_INCREF_NO_IMM(cpy_r_r151);
CPyL104: ;
    cpy_r_r152 = ((multicall___call___CallObject *)cpy_r_r151)->_state_override_code;
    CPy_INCREF(cpy_r_r152);
    CPy_DECREF_NO_IMM(cpy_r_r151);
    if (likely(PyUnicode_Check(cpy_r_r126)))
        cpy_r_r153 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("multicall/call.py", "coroutine", 155, CPyStatic_call___globals, "str", cpy_r_r126);
        goto CPyL278;
    }
    cpy_r_r154 = CPyDef_call___prep_args(cpy_r_r153, cpy_r_r128, cpy_r_r136, cpy_r_r144, cpy_r_r148, cpy_r_r150, cpy_r_r152);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF_NO_IMM(cpy_r_r128);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 155, CPyStatic_call___globals);
        goto CPyL267;
    }
    cpy_r_r155 = CPyStatics[11]; /* 'call' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_r124, cpy_r_r155);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL279;
    }
    cpy_r_r157 = PyList_New(0);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL280;
    }
    cpy_r_r158 = CPyList_Extend(cpy_r_r157, cpy_r_r154);
    CPy_DECREF_NO_IMM(cpy_r_r154);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL281;
    } else
        goto CPyL282;
CPyL109: ;
    cpy_r_r159 = PyList_AsTuple(cpy_r_r157);
    CPy_DECREF_NO_IMM(cpy_r_r157);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL283;
    }
    cpy_r_r160 = PyDict_New();
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL284;
    }
    cpy_r_r161 = PyObject_Call(cpy_r_r156, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL141;
    }
    cpy_r_r162 = CPy_GetCoro(cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL141;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r162;
    cpy_r_r163 = 1;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL141;
    }
    cpy_r_r164 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__5", -1, CPyStatic_call___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r164);
CPyL115: ;
    cpy_r_r165 = CPyIter_Next(cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    if (cpy_r_r165 != NULL) goto CPyL118;
    cpy_r_r166 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL141;
    }
    cpy_r_r167 = cpy_r_r166;
    cpy_r_r168 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r168;
    cpy_r_r169 = 1;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL285;
    } else
        goto CPyL140;
CPyL118: ;
    cpy_r_r170 = cpy_r_r165;
CPyL119: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r170;
CPyL120: ;
    cpy_r_r172 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r173 = cpy_r_type != cpy_r_r172;
    if (!cpy_r_r173) goto CPyL286;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL124;
    } else
        goto CPyL287;
CPyL122: ;
    CPy_Unreachable();
CPyL123: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL135;
CPyL124: ;
    cpy_r_r174 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r174;
    cpy_r_r175 = 1;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL288;
    }
    cpy_r_r176 = (PyObject **)&cpy_r_r3;
    cpy_r_r177 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__5", -1, CPyStatic_call___globals);
        goto CPyL288;
    }
    CPy_INCREF(cpy_r_r177);
CPyL126: ;
    cpy_r_r178 = CPy_YieldFromErrorHandle(cpy_r_r177, cpy_r_r176);
    CPy_DecRef(cpy_r_r177);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL288;
    }
    if (cpy_r_r178) goto CPyL130;
    cpy_r_r170 = cpy_r_r3;
    cpy_r_r179 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r179.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__6", -1, CPyStatic_call___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r179.f0);
    CPy_INCREF(cpy_r_r179.f1);
    CPy_INCREF(cpy_r_r179.f2);
CPyL129: ;
    CPy_RestoreExcInfo(cpy_r_r179);
    CPy_DecRef(cpy_r_r179.f0);
    CPy_DecRef(cpy_r_r179.f1);
    CPy_DecRef(cpy_r_r179.f2);
    goto CPyL119;
CPyL130: ;
    cpy_r_r167 = cpy_r_r3;
    cpy_r_r180 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r180.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__6", -1, CPyStatic_call___globals);
        goto CPyL290;
    }
    CPy_INCREF(cpy_r_r180.f0);
    CPy_INCREF(cpy_r_r180.f1);
    CPy_INCREF(cpy_r_r180.f2);
CPyL131: ;
    CPy_RestoreExcInfo(cpy_r_r180);
    CPy_DecRef(cpy_r_r180.f0);
    CPy_DecRef(cpy_r_r180.f1);
    CPy_DecRef(cpy_r_r180.f2);
    goto CPyL140;
CPyL132: ;
    cpy_r_r181 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r181.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__6", -1, CPyStatic_call___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r181.f0);
    CPy_INCREF(cpy_r_r181.f1);
    CPy_INCREF(cpy_r_r181.f2);
CPyL133: ;
    CPy_RestoreExcInfo(cpy_r_r181);
    CPy_DecRef(cpy_r_r181.f0);
    CPy_DecRef(cpy_r_r181.f1);
    CPy_DecRef(cpy_r_r181.f2);
    cpy_r_r182 = CPy_KeepPropagating();
    if (!cpy_r_r182) goto CPyL141;
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r183 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__5", -1, CPyStatic_call___globals);
        goto CPyL291;
    }
    CPy_INCREF(cpy_r_r183);
CPyL136: ;
    cpy_r_r184 = CPyIter_Send(cpy_r_r183, cpy_r_arg);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r184 == NULL) goto CPyL138;
    cpy_r_r170 = cpy_r_r184;
    goto CPyL119;
CPyL138: ;
    cpy_r_r185 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
        goto CPyL141;
    }
    cpy_r_r167 = cpy_r_r185;
CPyL140: ;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_output != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_output);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_output = cpy_r_r167;
    cpy_r_r186 = 1;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 154, CPyStatic_call___globals);
    } else
        goto CPyL183;
CPyL141: ;
    cpy_r_r187 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r187;
    cpy_r_r188 = 1;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL180;
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = 0;
    cpy_r_r189 = 1;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL180;
    }
    cpy_r_r190 = CPy_GetExcInfo();
    cpy_r_r191 = cpy_r_r190.f0;
    CPy_INCREF(cpy_r_r191);
    cpy_r_r192 = cpy_r_r190.f1;
    CPy_INCREF(cpy_r_r192);
    cpy_r_r193 = cpy_r_r190.f2;
    CPy_INCREF(cpy_r_r193);
    CPy_DecRef(cpy_r_r190.f0);
    CPy_DecRef(cpy_r_r190.f1);
    CPy_DecRef(cpy_r_r190.f2);
    cpy_r_r194 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__0", -1, CPyStatic_call___globals);
        goto CPyL292;
    }
    CPy_INCREF(cpy_r_r194);
CPyL144: ;
    cpy_r_r195 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__1", -1, CPyStatic_call___globals);
        goto CPyL293;
    }
    CPy_INCREF(cpy_r_r195);
CPyL145: ;
    PyObject *cpy_r_r196[4] = {cpy_r_r195, cpy_r_r191, cpy_r_r192, cpy_r_r193};
    cpy_r_r197 = (PyObject **)&cpy_r_r196;
    cpy_r_r198 = PyObject_Vectorcall(cpy_r_r194, cpy_r_r197, 4, 0);
    CPy_DecRef(cpy_r_r194);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL294;
    }
    CPy_DecRef(cpy_r_r195);
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r193);
    cpy_r_r199 = CPy_GetCoro(cpy_r_r198);
    CPy_DecRef(cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL180;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r199;
    cpy_r_r200 = 1;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL180;
    }
    cpy_r_r201 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__8", -1, CPyStatic_call___globals);
        goto CPyL180;
    }
    CPy_INCREF(cpy_r_r201);
CPyL149: ;
    cpy_r_r202 = CPyIter_Next(cpy_r_r201);
    CPy_DecRef(cpy_r_r201);
    if (cpy_r_r202 != NULL) goto CPyL152;
    cpy_r_r203 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL180;
    }
    cpy_r_r204 = cpy_r_r203;
    cpy_r_r205 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r205;
    cpy_r_r206 = 1;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL295;
    } else
        goto CPyL174;
CPyL152: ;
    cpy_r_r207 = cpy_r_r202;
CPyL153: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 3;
    return cpy_r_r207;
CPyL154: ;
    cpy_r_r209 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r210 = cpy_r_type != cpy_r_r209;
    if (!cpy_r_r210) goto CPyL296;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL158;
    } else
        goto CPyL297;
CPyL156: ;
    CPy_Unreachable();
CPyL157: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL169;
CPyL158: ;
    cpy_r_r211 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r211;
    cpy_r_r212 = 1;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL298;
    }
    cpy_r_r213 = (PyObject **)&cpy_r_r5;
    cpy_r_r214 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__8", -1, CPyStatic_call___globals);
        goto CPyL298;
    }
    CPy_INCREF(cpy_r_r214);
CPyL160: ;
    cpy_r_r215 = CPy_YieldFromErrorHandle(cpy_r_r214, cpy_r_r213);
    CPy_DecRef(cpy_r_r214);
    if (unlikely(cpy_r_r215 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL298;
    }
    if (cpy_r_r215) goto CPyL164;
    cpy_r_r207 = cpy_r_r5;
    cpy_r_r216 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r216.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__9", -1, CPyStatic_call___globals);
        goto CPyL299;
    }
    CPy_INCREF(cpy_r_r216.f0);
    CPy_INCREF(cpy_r_r216.f1);
    CPy_INCREF(cpy_r_r216.f2);
CPyL163: ;
    CPy_RestoreExcInfo(cpy_r_r216);
    CPy_DecRef(cpy_r_r216.f0);
    CPy_DecRef(cpy_r_r216.f1);
    CPy_DecRef(cpy_r_r216.f2);
    goto CPyL153;
CPyL164: ;
    cpy_r_r204 = cpy_r_r5;
    cpy_r_r217 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r217.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__9", -1, CPyStatic_call___globals);
        goto CPyL300;
    }
    CPy_INCREF(cpy_r_r217.f0);
    CPy_INCREF(cpy_r_r217.f1);
    CPy_INCREF(cpy_r_r217.f2);
CPyL165: ;
    CPy_RestoreExcInfo(cpy_r_r217);
    CPy_DecRef(cpy_r_r217.f0);
    CPy_DecRef(cpy_r_r217.f1);
    CPy_DecRef(cpy_r_r217.f2);
    goto CPyL174;
CPyL166: ;
    cpy_r_r218 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r218.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__9", -1, CPyStatic_call___globals);
        goto CPyL180;
    }
    CPy_INCREF(cpy_r_r218.f0);
    CPy_INCREF(cpy_r_r218.f1);
    CPy_INCREF(cpy_r_r218.f2);
CPyL167: ;
    CPy_RestoreExcInfo(cpy_r_r218);
    CPy_DecRef(cpy_r_r218.f0);
    CPy_DecRef(cpy_r_r218.f1);
    CPy_DecRef(cpy_r_r218.f2);
    cpy_r_r219 = CPy_KeepPropagating();
    if (!cpy_r_r219) goto CPyL180;
    CPy_Unreachable();
CPyL169: ;
    cpy_r_r220 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__8", -1, CPyStatic_call___globals);
        goto CPyL301;
    }
    CPy_INCREF(cpy_r_r220);
CPyL170: ;
    cpy_r_r221 = CPyIter_Send(cpy_r_r220, cpy_r_arg);
    CPy_DECREF(cpy_r_r220);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r221 == NULL) goto CPyL172;
    cpy_r_r207 = cpy_r_r221;
    goto CPyL153;
CPyL172: ;
    cpy_r_r222 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL180;
    }
    cpy_r_r204 = cpy_r_r222;
CPyL174: ;
    cpy_r_r223 = PyObject_IsTrue(cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL180;
    }
    cpy_r_r225 = cpy_r_r223;
    if (cpy_r_r225) goto CPyL178;
    CPy_Reraise();
    if (!0) goto CPyL180;
    CPy_Unreachable();
CPyL178: ;
    cpy_r_r226 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r226.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__7", -1, CPyStatic_call___globals);
        goto CPyL184;
    }
    CPy_INCREF(cpy_r_r226.f0);
    CPy_INCREF(cpy_r_r226.f1);
    CPy_INCREF(cpy_r_r226.f2);
CPyL179: ;
    CPy_RestoreExcInfo(cpy_r_r226);
    CPy_DECREF(cpy_r_r226.f0);
    CPy_DECREF(cpy_r_r226.f1);
    CPy_DECREF(cpy_r_r226.f2);
    goto CPyL183;
CPyL180: ;
    cpy_r_r227 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r227.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__7", -1, CPyStatic_call___globals);
        goto CPyL184;
    }
    CPy_INCREF(cpy_r_r227.f0);
    CPy_INCREF(cpy_r_r227.f1);
    CPy_INCREF(cpy_r_r227.f2);
CPyL181: ;
    CPy_RestoreExcInfo(cpy_r_r227);
    CPy_DECREF(cpy_r_r227.f0);
    CPy_DECREF(cpy_r_r227.f1);
    CPy_DECREF(cpy_r_r227.f2);
    cpy_r_r228 = CPy_KeepPropagating();
    if (!cpy_r_r228) goto CPyL184;
    CPy_Unreachable();
CPyL183: ;
    tuple_T3OOO __tmp32 = { NULL, NULL, NULL };
    cpy_r_r229 = __tmp32;
    cpy_r_r9 = cpy_r_r229;
    goto CPyL185;
CPyL184: ;
    cpy_r_r230 = CPy_CatchError();
    cpy_r_r9 = cpy_r_r230;
CPyL185: ;
    cpy_r_r231 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r231 == 2)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__2", -1, CPyStatic_call___globals);
        goto CPyL221;
    }
CPyL186: ;
    if (!cpy_r_r231) goto CPyL218;
CPyL187: ;
    cpy_r_r232 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r233 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__0", -1, CPyStatic_call___globals);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_r233);
CPyL188: ;
    cpy_r_r234 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__1", -1, CPyStatic_call___globals);
        goto CPyL302;
    }
    CPy_INCREF(cpy_r_r234);
CPyL189: ;
    PyObject *cpy_r_r235[4] = {cpy_r_r234, cpy_r_r232, cpy_r_r232, cpy_r_r232};
    cpy_r_r236 = (PyObject **)&cpy_r_r235;
    cpy_r_r237 = PyObject_Vectorcall(cpy_r_r233, cpy_r_r236, 4, 0);
    CPy_DECREF(cpy_r_r233);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL303;
    }
    CPy_DECREF(cpy_r_r234);
    cpy_r_r238 = CPy_GetCoro(cpy_r_r237);
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL221;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r238;
    cpy_r_r239 = 1;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL221;
    }
    cpy_r_r240 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__10", -1, CPyStatic_call___globals);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_r240);
CPyL193: ;
    cpy_r_r241 = CPyIter_Next(cpy_r_r240);
    CPy_DECREF(cpy_r_r240);
    if (cpy_r_r241 != NULL) goto CPyL304;
    cpy_r_r242 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL221;
    }
    cpy_r_r243 = cpy_r_r242;
    CPy_DECREF(cpy_r_r243);
    cpy_r_r244 = NULL;
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r244;
    cpy_r_r245 = 1;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL221;
    } else
        goto CPyL218;
CPyL196: ;
    cpy_r_r246 = cpy_r_r241;
CPyL197: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 4;
    return cpy_r_r246;
CPyL198: ;
    cpy_r_r248 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r249 = cpy_r_type != cpy_r_r248;
    if (!cpy_r_r249) goto CPyL305;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL202;
    } else
        goto CPyL306;
CPyL200: ;
    CPy_Unreachable();
CPyL201: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL213;
CPyL202: ;
    cpy_r_r250 = CPy_CatchError();
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f1);
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f2);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r250;
    cpy_r_r251 = 1;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", -1, CPyStatic_call___globals);
        goto CPyL307;
    }
    cpy_r_r252 = (PyObject **)&cpy_r_r7;
    cpy_r_r253 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__10", -1, CPyStatic_call___globals);
        goto CPyL307;
    }
    CPy_INCREF(cpy_r_r253);
CPyL204: ;
    cpy_r_r254 = CPy_YieldFromErrorHandle(cpy_r_r253, cpy_r_r252);
    CPy_DecRef(cpy_r_r253);
    if (unlikely(cpy_r_r254 == 2)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL307;
    }
    if (cpy_r_r254) goto CPyL208;
    cpy_r_r246 = cpy_r_r7;
    cpy_r_r255 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r255.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__11", -1, CPyStatic_call___globals);
        goto CPyL308;
    }
    CPy_INCREF(cpy_r_r255.f0);
    CPy_INCREF(cpy_r_r255.f1);
    CPy_INCREF(cpy_r_r255.f2);
    goto CPyL309;
CPyL207: ;
    CPy_RestoreExcInfo(cpy_r_r255);
    CPy_DecRef(cpy_r_r255.f0);
    CPy_DecRef(cpy_r_r255.f1);
    CPy_DecRef(cpy_r_r255.f2);
    goto CPyL197;
CPyL208: ;
    cpy_r_r243 = cpy_r_r7;
    CPy_DecRef(cpy_r_r243);
    cpy_r_r256 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r256.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__11", -1, CPyStatic_call___globals);
        goto CPyL210;
    }
    CPy_INCREF(cpy_r_r256.f0);
    CPy_INCREF(cpy_r_r256.f1);
    CPy_INCREF(cpy_r_r256.f2);
CPyL209: ;
    CPy_RestoreExcInfo(cpy_r_r256);
    CPy_DecRef(cpy_r_r256.f0);
    CPy_DecRef(cpy_r_r256.f1);
    CPy_DecRef(cpy_r_r256.f2);
    goto CPyL218;
CPyL210: ;
    cpy_r_r257 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r257.f0 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__11", -1, CPyStatic_call___globals);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_r257.f0);
    CPy_INCREF(cpy_r_r257.f1);
    CPy_INCREF(cpy_r_r257.f2);
CPyL211: ;
    CPy_RestoreExcInfo(cpy_r_r257);
    CPy_DecRef(cpy_r_r257.f0);
    CPy_DecRef(cpy_r_r257.f1);
    CPy_DecRef(cpy_r_r257.f2);
    cpy_r_r258 = CPy_KeepPropagating();
    if (!cpy_r_r258) {
        goto CPyL221;
    } else
        goto CPyL310;
CPyL212: ;
    CPy_Unreachable();
CPyL213: ;
    cpy_r_r259 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "__mypyc_temp__10", -1, CPyStatic_call___globals);
        goto CPyL311;
    }
    CPy_INCREF(cpy_r_r259);
CPyL214: ;
    cpy_r_r260 = CPyIter_Send(cpy_r_r259, cpy_r_arg);
    CPy_DECREF(cpy_r_r259);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r260 == NULL) {
        goto CPyL216;
    } else
        goto CPyL312;
CPyL215: ;
    cpy_r_r246 = cpy_r_r260;
    goto CPyL197;
CPyL216: ;
    cpy_r_r261 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 153, CPyStatic_call___globals);
        goto CPyL221;
    }
    cpy_r_r243 = cpy_r_r261;
    CPy_DECREF(cpy_r_r243);
CPyL218: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL225;
    CPy_Reraise();
    if (!0) {
        goto CPyL221;
    } else
        goto CPyL313;
CPyL220: ;
    CPy_Unreachable();
CPyL221: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL223;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
CPyL223: ;
    cpy_r_r262 = CPy_KeepPropagating();
    if (!cpy_r_r262) goto CPyL247;
    CPy_Unreachable();
CPyL225: ;
    cpy_r_r263 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_output;
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "output", 166, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r263);
CPyL226: ;
    cpy_r_r264 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 166, CPyStatic_call___globals);
        goto CPyL314;
    }
    CPy_INCREF_NO_IMM(cpy_r_r264);
CPyL227: ;
    cpy_r_r265 = ((multicall___call___CallObject *)cpy_r_r264)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r265);
    CPy_DECREF_NO_IMM(cpy_r_r264);
    cpy_r_r266 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 166, CPyStatic_call___globals);
        goto CPyL315;
    }
    CPy_INCREF_NO_IMM(cpy_r_r266);
CPyL228: ;
    cpy_r_r267 = ((multicall___call___CallObject *)cpy_r_r266)->_returns;
    CPy_INCREF(cpy_r_r267);
    CPy_DECREF_NO_IMM(cpy_r_r266);
    cpy_r_r268 = NULL;
    cpy_r_r269 = CPyDef_call___Call___decode_output(cpy_r_r263, cpy_r_r265, cpy_r_r267, cpy_r_r268);
    CPy_DECREF(cpy_r_r263);
    CPy_DECREF_NO_IMM(cpy_r_r265);
    CPy_DECREF(cpy_r_r267);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 166, CPyStatic_call___globals);
        goto CPyL247;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_result != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_result);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_result = cpy_r_r269;
    cpy_r_r270 = 1;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 166, CPyStatic_call___globals);
        goto CPyL247;
    }
    cpy_r_r271 = CPyStatics[12]; /* '%s returned %s' */
    cpy_r_r272 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "self", 167, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF_NO_IMM(cpy_r_r272);
CPyL231: ;
    cpy_r_r273 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_result;
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "result", 167, CPyStatic_call___globals);
        goto CPyL316;
    }
    CPy_INCREF(cpy_r_r273);
CPyL232: ;
    cpy_r_r274 = CPyStatic_call___log_debug;
    if (unlikely(cpy_r_r274 == NULL)) {
        goto CPyL317;
    } else
        goto CPyL235;
CPyL233: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r275 = 0;
    if (unlikely(!cpy_r_r275)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 167, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_Unreachable();
CPyL235: ;
    PyObject *cpy_r_r276[3] = {cpy_r_r271, cpy_r_r272, cpy_r_r273};
    cpy_r_r277 = (PyObject **)&cpy_r_r276;
    cpy_r_r278 = PyObject_Vectorcall(cpy_r_r274, cpy_r_r277, 3, 0);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 167, CPyStatic_call___globals);
        goto CPyL318;
    } else
        goto CPyL319;
CPyL236: ;
    CPy_DECREF_NO_IMM(cpy_r_r272);
    CPy_DECREF(cpy_r_r273);
    cpy_r_r279 = ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->_result;
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AttributeError("multicall/call.py", "coroutine", "coroutine_Call_gen", "result", 168, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_INCREF(cpy_r_r279);
CPyL237: ;
    ((multicall___call___coroutine_Call_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    CPyGen_SetStopIterationValue(cpy_r_r279);
    CPy_DECREF(cpy_r_r279);
    if (!0) goto CPyL247;
    CPy_Unreachable();
CPyL240: ;
    cpy_r_r281 = cpy_r_r10 == 0;
    if (cpy_r_r281) goto CPyL320;
    cpy_r_r282 = cpy_r_r10 == 1;
    if (cpy_r_r282) {
        goto CPyL321;
    } else
        goto CPyL322;
CPyL242: ;
    cpy_r_r283 = cpy_r_r10 == 2;
    if (cpy_r_r283) {
        goto CPyL323;
    } else
        goto CPyL324;
CPyL243: ;
    cpy_r_r284 = cpy_r_r10 == 3;
    if (cpy_r_r284) {
        goto CPyL325;
    } else
        goto CPyL326;
CPyL244: ;
    cpy_r_r285 = cpy_r_r10 == 4;
    if (cpy_r_r285) {
        goto CPyL198;
    } else
        goto CPyL327;
CPyL245: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r286 = 0;
    if (unlikely(!cpy_r_r286)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL247;
    }
    CPy_Unreachable();
CPyL247: ;
    cpy_r_r287 = NULL;
    return cpy_r_r287;
CPyL248: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL10;
CPyL249: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL247;
CPyL250: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL16;
CPyL251: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL247;
CPyL252: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL44;
CPyL253: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL247;
CPyL254: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL247;
CPyL255: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL247;
CPyL256: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL247;
CPyL257: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL247;
CPyL258: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL247;
CPyL259: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL247;
CPyL260: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL247;
CPyL261: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL63;
CPyL262: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL62;
CPyL263: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL72;
CPyL264: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL72;
CPyL265: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL247;
CPyL266: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL141;
CPyL267: ;
    CPy_DecRef(cpy_r_r124);
    goto CPyL141;
CPyL268: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    goto CPyL141;
CPyL269: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    goto CPyL141;
CPyL270: ;
    CPy_DECREF(cpy_r_r129);
    goto CPyL92;
CPyL271: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r129);
    goto CPyL141;
CPyL272: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    goto CPyL141;
CPyL273: ;
    CPy_DECREF(cpy_r_r139);
    goto CPyL99;
CPyL274: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r139);
    goto CPyL141;
CPyL275: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r144);
    goto CPyL141;
CPyL276: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r148);
    goto CPyL141;
CPyL277: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r150);
    goto CPyL141;
CPyL278: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r128);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r152);
    goto CPyL141;
CPyL279: ;
    CPy_DecRef(cpy_r_r154);
    goto CPyL141;
CPyL280: ;
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_r156);
    goto CPyL141;
CPyL281: ;
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r157);
    goto CPyL141;
CPyL282: ;
    CPy_DECREF(cpy_r_r158);
    goto CPyL109;
CPyL283: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL141;
CPyL284: ;
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r159);
    goto CPyL141;
CPyL285: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL141;
CPyL286: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL123;
CPyL287: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL122;
CPyL288: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL132;
CPyL289: ;
    CPy_DecRef(cpy_r_r170);
    goto CPyL132;
CPyL290: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL132;
CPyL291: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL141;
CPyL292: ;
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r193);
    goto CPyL180;
CPyL293: ;
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r193);
    CPy_DecRef(cpy_r_r194);
    goto CPyL180;
CPyL294: ;
    CPy_DecRef(cpy_r_r191);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r193);
    CPy_DecRef(cpy_r_r195);
    goto CPyL180;
CPyL295: ;
    CPy_DecRef(cpy_r_r204);
    goto CPyL180;
CPyL296: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL157;
CPyL297: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL156;
CPyL298: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL166;
CPyL299: ;
    CPy_DecRef(cpy_r_r207);
    goto CPyL166;
CPyL300: ;
    CPy_DecRef(cpy_r_r204);
    goto CPyL166;
CPyL301: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL180;
CPyL302: ;
    CPy_DecRef(cpy_r_r233);
    goto CPyL221;
CPyL303: ;
    CPy_DecRef(cpy_r_r234);
    goto CPyL221;
CPyL304: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL196;
CPyL305: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL201;
CPyL306: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL200;
CPyL307: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL210;
CPyL308: ;
    CPy_DecRef(cpy_r_r246);
    goto CPyL210;
CPyL309: ;
    CPy_XDecRef(cpy_r_r9.f0);
    CPy_XDecRef(cpy_r_r9.f1);
    CPy_XDecRef(cpy_r_r9.f2);
    goto CPyL207;
CPyL310: ;
    CPy_XDecRef(cpy_r_r9.f0);
    CPy_XDecRef(cpy_r_r9.f1);
    CPy_XDecRef(cpy_r_r9.f2);
    goto CPyL212;
CPyL311: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL221;
CPyL312: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL215;
CPyL313: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL220;
CPyL314: ;
    CPy_DecRef(cpy_r_r263);
    goto CPyL247;
CPyL315: ;
    CPy_DecRef(cpy_r_r263);
    CPy_DecRef(cpy_r_r265);
    goto CPyL247;
CPyL316: ;
    CPy_DecRef(cpy_r_r272);
    goto CPyL247;
CPyL317: ;
    CPy_DecRef(cpy_r_r272);
    CPy_DecRef(cpy_r_r273);
    goto CPyL233;
CPyL318: ;
    CPy_DecRef(cpy_r_r272);
    CPy_DecRef(cpy_r_r273);
    goto CPyL247;
CPyL319: ;
    CPy_DECREF(cpy_r_r278);
    goto CPyL236;
CPyL320: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL1;
CPyL321: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL60;
CPyL322: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL242;
CPyL323: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL120;
CPyL324: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL243;
CPyL325: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL154;
CPyL326: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL244;
CPyL327: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL245;
}

PyObject *CPyDef_call___coroutine_Call_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
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
    cpy_r_r1 = CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
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
    cpy_r_r1 = CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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
    PyObject *__tmp33 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp33);
    PyObject *__tmp34 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp34);
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
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_self != NULL) {
        CPy_DECREF_NO_IMM(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_self);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_self = cpy_r_self;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL17;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_args != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_args);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_args = cpy_r_args;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL18;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->__w3 != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->__w3);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->__w3 = cpy_r__w3;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("multicall/call.py", "coroutine", 139, CPyStatic_call___globals);
        goto CPyL19;
    }
    if (((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_block_id != NULL) {
        CPy_DECREF(((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_block_id);
    }
    ((multicall___call___coroutine_Call_genObject *)cpy_r_r3)->_block_id = cpy_r_block_id;
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
        goto __LL35;
    }
    arg_args = obj_args;
    if (arg_args != NULL) goto __LL35;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL35;
    CPy_TypeError("object or None", obj_args); 
    goto fail;
__LL35: ;
    PyObject *arg__w3;
    if (obj__w3 == NULL) {
        arg__w3 = NULL;
        goto __LL36;
    }
    arg__w3 = obj__w3;
    if (arg__w3 != NULL) goto __LL36;
    if (obj__w3 == Py_None)
        arg__w3 = obj__w3;
    else {
        arg__w3 = NULL;
    }
    if (arg__w3 != NULL) goto __LL36;
    CPy_TypeError("object or None", obj__w3); 
    goto fail;
__LL36: ;
    PyObject *arg_block_id;
    if (obj_block_id == NULL) {
        arg_block_id = NULL;
        goto __LL37;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL37;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL37;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL37: ;
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
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPy_INCREF(cpy_r_args);
    if (PyList_Check(cpy_r_args))
        cpy_r_r0 = cpy_r_args;
    else {
        cpy_r_r0 = NULL;
    }
    if (cpy_r_r0 != NULL) goto __LL38;
    if (PyTuple_Check(cpy_r_args))
        cpy_r_r0 = cpy_r_args;
    else {
        cpy_r_r0 = NULL;
    }
    if (cpy_r_r0 != NULL) goto __LL38;
    if (cpy_r_args == Py_None)
        cpy_r_r0 = cpy_r_args;
    else {
        cpy_r_r0 = NULL;
    }
    if (cpy_r_r0 != NULL) goto __LL38;
    CPy_TypeErrorTraceback("multicall/call.py", "prep_args", 181, CPyStatic_call___globals, "union[list, tuple, None]", cpy_r_args);
    goto CPyL22;
__LL38: ;
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
    cpy_r_r11 = cpy_r_origin;
    cpy_r_r12 = PyObject_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 176, CPyStatic_call___globals);
        goto CPyL24;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPyStatics[28]; /* 'from' */
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r4, cpy_r_r15, cpy_r_origin);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 187, CPyStatic_call___globals);
        goto CPyL24;
    }
CPyL9: ;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_gas_limit != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL25;
    if (likely(PyLong_Check(cpy_r_gas_limit)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_gas_limit);
    else {
        CPy_TypeError("int", cpy_r_gas_limit); cpy_r_r20 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 177, CPyStatic_call___globals);
        goto CPyL24;
    }
    cpy_r_r21 = cpy_r_r20 != 0;
    CPyTagged_DECREF(cpy_r_r20);
    if (!cpy_r_r21) goto CPyL25;
    if (likely(PyLong_Check(cpy_r_gas_limit)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_gas_limit);
    else {
        CPy_TypeError("int", cpy_r_gas_limit); cpy_r_r22 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 190, CPyStatic_call___globals);
        goto CPyL24;
    }
    cpy_r_r23 = CPyStatics[29]; /* 'gas' */
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r22);
    cpy_r_r25 = CPyDict_SetItem(cpy_r_r4, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 190, CPyStatic_call___globals);
        goto CPyL26;
    }
CPyL14: ;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_state_override_code != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL21;
    CPy_INCREF(cpy_r_state_override_code);
    cpy_r_r29 = cpy_r_state_override_code;
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 178, CPyStatic_call___globals);
        goto CPyL26;
    }
    cpy_r_r32 = cpy_r_r30;
    if (!cpy_r_r32) goto CPyL21;
    cpy_r_r33 = CPyStatics[30]; /* 'code' */
    cpy_r_r34 = CPyDict_Build(1, cpy_r_r33, cpy_r_state_override_code);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals);
        goto CPyL26;
    }
    cpy_r_r35 = CPyDict_Build(1, cpy_r_target, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals);
        goto CPyL26;
    }
    cpy_r_r36 = PyList_Append(cpy_r_r5, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("multicall/call.py", "prep_args", 193, CPyStatic_call___globals);
        goto CPyL26;
    }
CPyL21: ;
    return cpy_r_r5;
CPyL22: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
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
    if (arg_args != NULL) goto __LL39;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL39;
    CPy_TypeError("object or None", obj_args); 
    goto fail;
__LL39: ;
    PyObject *arg_block_id;
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL40;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL40;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL40: ;
    PyObject *arg_origin;
    arg_origin = obj_origin;
    if (arg_origin != NULL) goto __LL41;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL41;
    CPy_TypeError("object or None", obj_origin); 
    goto fail;
__LL41: ;
    PyObject *arg_gas_limit;
    if (PyLong_Check(obj_gas_limit))
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL42;
    if (obj_gas_limit == Py_None)
        arg_gas_limit = obj_gas_limit;
    else {
        arg_gas_limit = NULL;
    }
    if (arg_gas_limit != NULL) goto __LL42;
    CPy_TypeError("int or None", obj_gas_limit); 
    goto fail;
__LL42: ;
    PyObject *arg_state_override_code;
    arg_state_override_code = obj_state_override_code;
    if (arg_state_override_code != NULL) goto __LL43;
    if (obj_state_override_code == Py_None)
        arg_state_override_code = obj_state_override_code;
    else {
        arg_state_override_code = NULL;
    }
    if (arg_state_override_code != NULL) goto __LL43;
    CPy_TypeError("object or None", obj_state_override_code); 
    goto fail;
__LL43: ;
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
    cpy_r_r5 = CPyStatics[386]; /* ('Any', 'Callable', 'Final', 'Generator', 'List',
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
    cpy_r_r14 = CPyStatics[388]; /* (('eth_retry', 'eth_retry', 'eth_retry'),) */
    cpy_r_r15 = CPyStatic_call___globals;
    cpy_r_r16 = CPyStatics[44]; /* 'multicall/call.py' */
    cpy_r_r17 = CPyStatics[45]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL45;
    cpy_r_r19 = CPyStatics[389]; /* ('to_checksum_address',) */
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
    cpy_r_r23 = CPyStatics[390]; /* ('Address', 'ChecksumAddress', 'HexAddress', 'HexStr') */
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
    cpy_r_r27 = CPyStatics[391]; /* ('Decodable',) */
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
    cpy_r_r31 = CPyStatics[392]; /* ('Web3',) */
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
    cpy_r_r35 = CPyStatics[393]; /* ('Network', 'w3') */
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
    cpy_r_r39 = CPyStatics[394]; /* ('StateOverrideNotSupported',) */
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
    cpy_r_r43 = CPyStatics[395]; /* ('setup_logger',) */
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
    cpy_r_r47 = CPyStatics[396]; /* ('Signature', '_get_signature') */
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
    cpy_r_r51 = CPyStatics[397]; /* ('_get_semaphore', 'chain_id', 'get_async_w3',
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
    PyObject *__tmp44 = cpy_r_r85.f0;
    PyTuple_SET_ITEM(cpy_r_r86, 0, __tmp44);
    PyObject *__tmp45 = cpy_r_r85.f1;
    PyTuple_SET_ITEM(cpy_r_r86, 1, __tmp45);
    PyObject *__tmp46 = cpy_r_r85.f2;
    PyTuple_SET_ITEM(cpy_r_r86, 2, __tmp46);
    PyObject *__tmp47 = cpy_r_r85.f3;
    PyTuple_SET_ITEM(cpy_r_r86, 3, __tmp47);
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
    cpy_r_r113 = CPyDict_SetItem(cpy_r_r111, cpy_r_r112, cpy_r_r95);
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
    cpy_r_r125 = CPyStatics[398]; /* ('min_sleep_time', 'max_sleep_time') */
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
    cpy_r_r143 = CPyStatics[398]; /* ('min_sleep_time', 'max_sleep_time') */
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
static int constants_exec(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___constants_internal, "__name__");
    CPyStatic_constants___globals = PyModule_GetDict(CPyModule_multicall___constants_internal);
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
    Py_CLEAR(CPyModule_multicall___constants_internal);
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
static PyMethodDef constantsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

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
    if (CPyModule_multicall___constants_internal) {
        Py_INCREF(CPyModule_multicall___constants_internal);
        return CPyModule_multicall___constants_internal;
    }
    CPyModule_multicall___constants_internal = PyModule_Create(&constantsmodule);
    if (unlikely(CPyModule_multicall___constants_internal == NULL))
        goto fail;
    if (constants_exec(CPyModule_multicall___constants_internal) != 0)
        goto fail;
    return CPyModule_multicall___constants_internal;
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
    PyObject **cpy_r_r614;
    PyObject *cpy_r_r615;
    PyObject *cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject **cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject *cpy_r_r622;
    PyObject *cpy_r_r623;
    int32_t cpy_r_r624;
    char cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
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
    char cpy_r_r750;
    PyObject *cpy_r_r751;
    PyObject *cpy_r_r752;
    char cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    char cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    char cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    char cpy_r_r762;
    PyObject *cpy_r_r763;
    PyObject *cpy_r_r764;
    char cpy_r_r765;
    PyObject *cpy_r_r766;
    PyObject *cpy_r_r767;
    char cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    char cpy_r_r771;
    PyObject *cpy_r_r772;
    PyObject *cpy_r_r773;
    char cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    char cpy_r_r777;
    PyObject *cpy_r_r778;
    PyObject *cpy_r_r779;
    char cpy_r_r780;
    PyObject *cpy_r_r781;
    PyObject *cpy_r_r782;
    char cpy_r_r783;
    PyObject *cpy_r_r784;
    PyObject *cpy_r_r785;
    char cpy_r_r786;
    PyObject *cpy_r_r787;
    PyObject *cpy_r_r788;
    char cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    PyObject *cpy_r_r793;
    int32_t cpy_r_r794;
    char cpy_r_r795;
    PyObject *cpy_r_r796;
    char cpy_r_r797;
    PyObject *cpy_r_r798;
    PyObject *cpy_r_r799;
    char cpy_r_r800;
    PyObject *cpy_r_r801;
    PyObject *cpy_r_r802;
    char cpy_r_r803;
    PyObject *cpy_r_r804;
    PyObject *cpy_r_r805;
    char cpy_r_r806;
    PyObject *cpy_r_r807;
    PyObject *cpy_r_r808;
    char cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    char cpy_r_r812;
    PyObject *cpy_r_r813;
    PyObject *cpy_r_r814;
    char cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject *cpy_r_r817;
    char cpy_r_r818;
    PyObject *cpy_r_r819;
    PyObject *cpy_r_r820;
    char cpy_r_r821;
    PyObject *cpy_r_r822;
    PyObject *cpy_r_r823;
    char cpy_r_r824;
    PyObject *cpy_r_r825;
    PyObject *cpy_r_r826;
    char cpy_r_r827;
    PyObject *cpy_r_r828;
    PyObject *cpy_r_r829;
    char cpy_r_r830;
    PyObject *cpy_r_r831;
    PyObject *cpy_r_r832;
    char cpy_r_r833;
    PyObject *cpy_r_r834;
    PyObject *cpy_r_r835;
    char cpy_r_r836;
    PyObject *cpy_r_r837;
    PyObject *cpy_r_r838;
    char cpy_r_r839;
    PyObject *cpy_r_r840;
    PyObject *cpy_r_r841;
    char cpy_r_r842;
    PyObject *cpy_r_r843;
    PyObject *cpy_r_r844;
    char cpy_r_r845;
    PyObject *cpy_r_r846;
    PyObject *cpy_r_r847;
    PyObject *cpy_r_r848;
    PyObject *cpy_r_r849;
    int32_t cpy_r_r850;
    char cpy_r_r851;
    PyObject *cpy_r_r852;
    char cpy_r_r853;
    PyObject *cpy_r_r854;
    PyObject *cpy_r_r855;
    char cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    char cpy_r_r859;
    PyObject *cpy_r_r860;
    PyObject *cpy_r_r861;
    char cpy_r_r862;
    PyObject *cpy_r_r863;
    PyObject *cpy_r_r864;
    char cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject *cpy_r_r867;
    char cpy_r_r868;
    PyObject *cpy_r_r869;
    PyObject *cpy_r_r870;
    char cpy_r_r871;
    PyObject *cpy_r_r872;
    PyObject *cpy_r_r873;
    char cpy_r_r874;
    PyObject *cpy_r_r875;
    PyObject *cpy_r_r876;
    char cpy_r_r877;
    PyObject *cpy_r_r878;
    PyObject *cpy_r_r879;
    char cpy_r_r880;
    PyObject *cpy_r_r881;
    PyObject *cpy_r_r882;
    char cpy_r_r883;
    PyObject *cpy_r_r884;
    PyObject *cpy_r_r885;
    char cpy_r_r886;
    PyObject *cpy_r_r887;
    PyObject *cpy_r_r888;
    char cpy_r_r889;
    PyObject *cpy_r_r890;
    PyObject *cpy_r_r891;
    char cpy_r_r892;
    PyObject *cpy_r_r893;
    PyObject *cpy_r_r894;
    char cpy_r_r895;
    PyObject *cpy_r_r896;
    PyObject *cpy_r_r897;
    char cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject *cpy_r_r900;
    char cpy_r_r901;
    PyObject *cpy_r_r902;
    PyObject *cpy_r_r903;
    char cpy_r_r904;
    PyObject *cpy_r_r905;
    PyObject *cpy_r_r906;
    char cpy_r_r907;
    PyObject *cpy_r_r908;
    PyObject *cpy_r_r909;
    char cpy_r_r910;
    PyObject *cpy_r_r911;
    PyObject *cpy_r_r912;
    char cpy_r_r913;
    PyObject *cpy_r_r914;
    PyObject *cpy_r_r915;
    char cpy_r_r916;
    PyObject *cpy_r_r917;
    PyObject *cpy_r_r918;
    char cpy_r_r919;
    PyObject *cpy_r_r920;
    PyObject *cpy_r_r921;
    char cpy_r_r922;
    PyObject *cpy_r_r923;
    PyObject *cpy_r_r924;
    char cpy_r_r925;
    PyObject *cpy_r_r926;
    PyObject *cpy_r_r927;
    char cpy_r_r928;
    PyObject *cpy_r_r929;
    PyObject *cpy_r_r930;
    char cpy_r_r931;
    PyObject *cpy_r_r932;
    PyObject *cpy_r_r933;
    char cpy_r_r934;
    PyObject *cpy_r_r935;
    PyObject *cpy_r_r936;
    char cpy_r_r937;
    PyObject *cpy_r_r938;
    PyObject *cpy_r_r939;
    char cpy_r_r940;
    PyObject *cpy_r_r941;
    PyObject *cpy_r_r942;
    char cpy_r_r943;
    PyObject *cpy_r_r944;
    PyObject *cpy_r_r945;
    char cpy_r_r946;
    PyObject *cpy_r_r947;
    PyObject *cpy_r_r948;
    char cpy_r_r949;
    PyObject *cpy_r_r950;
    PyObject *cpy_r_r951;
    char cpy_r_r952;
    PyObject *cpy_r_r953;
    PyObject *cpy_r_r954;
    char cpy_r_r955;
    PyObject *cpy_r_r956;
    PyObject *cpy_r_r957;
    char cpy_r_r958;
    PyObject *cpy_r_r959;
    PyObject *cpy_r_r960;
    char cpy_r_r961;
    PyObject *cpy_r_r962;
    PyObject *cpy_r_r963;
    char cpy_r_r964;
    PyObject *cpy_r_r965;
    PyObject *cpy_r_r966;
    char cpy_r_r967;
    PyObject *cpy_r_r968;
    PyObject *cpy_r_r969;
    char cpy_r_r970;
    PyObject *cpy_r_r971;
    PyObject *cpy_r_r972;
    char cpy_r_r973;
    PyObject *cpy_r_r974;
    PyObject *cpy_r_r975;
    char cpy_r_r976;
    PyObject *cpy_r_r977;
    PyObject *cpy_r_r978;
    char cpy_r_r979;
    PyObject *cpy_r_r980;
    PyObject *cpy_r_r981;
    char cpy_r_r982;
    PyObject *cpy_r_r983;
    PyObject *cpy_r_r984;
    char cpy_r_r985;
    PyObject *cpy_r_r986;
    PyObject *cpy_r_r987;
    char cpy_r_r988;
    PyObject *cpy_r_r989;
    PyObject *cpy_r_r990;
    char cpy_r_r991;
    PyObject *cpy_r_r992;
    PyObject *cpy_r_r993;
    char cpy_r_r994;
    PyObject *cpy_r_r995;
    PyObject *cpy_r_r996;
    char cpy_r_r997;
    PyObject *cpy_r_r998;
    PyObject *cpy_r_r999;
    char cpy_r_r1000;
    PyObject *cpy_r_r1001;
    PyObject *cpy_r_r1002;
    char cpy_r_r1003;
    PyObject *cpy_r_r1004;
    PyObject *cpy_r_r1005;
    char cpy_r_r1006;
    PyObject *cpy_r_r1007;
    PyObject *cpy_r_r1008;
    char cpy_r_r1009;
    PyObject *cpy_r_r1010;
    PyObject *cpy_r_r1011;
    char cpy_r_r1012;
    PyObject *cpy_r_r1013;
    PyObject *cpy_r_r1014;
    char cpy_r_r1015;
    PyObject *cpy_r_r1016;
    PyObject *cpy_r_r1017;
    char cpy_r_r1018;
    PyObject *cpy_r_r1019;
    PyObject *cpy_r_r1020;
    char cpy_r_r1021;
    PyObject *cpy_r_r1022;
    PyObject *cpy_r_r1023;
    char cpy_r_r1024;
    PyObject *cpy_r_r1025;
    PyObject *cpy_r_r1026;
    char cpy_r_r1027;
    PyObject *cpy_r_r1028;
    PyObject *cpy_r_r1029;
    PyObject *cpy_r_r1030;
    PyObject *cpy_r_r1031;
    int32_t cpy_r_r1032;
    char cpy_r_r1033;
    PyObject *cpy_r_r1034;
    PyObject *cpy_r_r1035;
    PyObject *cpy_r_r1036;
    PyObject *cpy_r_r1037;
    PyObject *cpy_r_r1038;
    PyObject *cpy_r_r1039;
    PyObject **cpy_r_r1041;
    PyObject *cpy_r_r1042;
    PyObject *cpy_r_r1043;
    PyObject **cpy_r_r1045;
    PyObject *cpy_r_r1046;
    CPyTagged cpy_r_r1047;
    PyObject *cpy_r_r1048;
    PyObject *cpy_r_r1049;
    PyObject *cpy_r_r1050;
    PyObject *cpy_r_r1051;
    PyObject **cpy_r_r1053;
    PyObject *cpy_r_r1054;
    PyObject *cpy_r_r1055;
    PyObject *cpy_r_r1056;
    int32_t cpy_r_r1057;
    char cpy_r_r1058;
    PyObject *cpy_r_r1059;
    char cpy_r_r1060;
    PyObject *cpy_r_r1061;
    char cpy_r_r1062;
    PyObject *cpy_r_r1063;
    char cpy_r_r1064;
    PyObject *cpy_r_r1065;
    char cpy_r_r1066;
    PyObject *cpy_r_r1067;
    char cpy_r_r1068;
    PyObject *cpy_r_r1069;
    char cpy_r_r1070;
    PyObject *cpy_r_r1071;
    char cpy_r_r1072;
    PyObject *cpy_r_r1073;
    int32_t cpy_r_r1074;
    char cpy_r_r1075;
    int32_t cpy_r_r1076;
    char cpy_r_r1077;
    int32_t cpy_r_r1078;
    char cpy_r_r1079;
    int32_t cpy_r_r1080;
    char cpy_r_r1081;
    int32_t cpy_r_r1082;
    char cpy_r_r1083;
    int32_t cpy_r_r1084;
    char cpy_r_r1085;
    int32_t cpy_r_r1086;
    char cpy_r_r1087;
    PyObject *cpy_r_r1088;
    PyObject *cpy_r_r1089;
    int32_t cpy_r_r1090;
    char cpy_r_r1091;
    PyObject *cpy_r_r1092;
    PyObject *cpy_r_r1093;
    PyObject *cpy_r_r1094;
    PyObject *cpy_r_r1095;
    PyObject *cpy_r_r1096;
    PyObject *cpy_r_r1097;
    PyObject **cpy_r_r1099;
    PyObject *cpy_r_r1100;
    PyObject *cpy_r_r1101;
    PyObject **cpy_r_r1103;
    PyObject *cpy_r_r1104;
    CPyTagged cpy_r_r1105;
    PyObject *cpy_r_r1106;
    PyObject *cpy_r_r1107;
    PyObject *cpy_r_r1108;
    int32_t cpy_r_r1109;
    char cpy_r_r1110;
    char cpy_r_r1111;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[31]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", -1, CPyStatic_constants___globals);
        goto CPyL554;
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
    cpy_r_r10 = CPyStatics[400]; /* (('os', 'os', 'os'),) */
    cpy_r_r11 = CPyStatic_constants___globals;
    cpy_r_r12 = CPyStatics[88]; /* 'multicall/constants.py' */
    cpy_r_r13 = CPyStatics[45]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL554;
    cpy_r_r15 = CPyStatics[401]; /* ('IntEnum',) */
    cpy_r_r16 = CPyStatics[90]; /* 'enum' */
    cpy_r_r17 = CPyStatic_constants___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 3, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyModule_enum = cpy_r_r18;
    CPy_INCREF(CPyModule_enum);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[402]; /* ('Dict', 'Final', 'final') */
    cpy_r_r20 = CPyStatics[42]; /* 'typing' */
    cpy_r_r21 = CPyStatic_constants___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 4, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[403]; /* ('ClientTimeout',) */
    cpy_r_r24 = CPyStatics[93]; /* 'aiohttp' */
    cpy_r_r25 = CPyStatic_constants___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 6, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyModule_aiohttp = cpy_r_r26;
    CPy_INCREF(CPyModule_aiohttp);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[404]; /* ('ChecksumAddress', 'HexStr') */
    cpy_r_r28 = CPyStatics[51]; /* 'eth_typing' */
    cpy_r_r29 = CPyStatic_constants___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 7, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyModule_eth_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[405]; /* ('network', 'web3') */
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
        goto CPyL555;
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
    cpy_r_r52 = CPyStatics[406]; /* ('w3',) */
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
    cpy_r_r61 = CPyStatics[406]; /* ('w3',) */
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
        goto CPyL556;
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
    if (!cpy_r_r65) goto CPyL554;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r66 = CPyModule_os;
    cpy_r_r67 = CPyStatics[99]; /* 'environ' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r69 = CPyStatics[100]; /* 'GAS_LIMIT' */
    cpy_r_r70 = CPyStatics[101]; /* 'get' */
    cpy_r_r71 = CPyStatics[325]; /* 50000000 */
    PyObject *cpy_r_r72[3] = {cpy_r_r68, cpy_r_r69, cpy_r_r71};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = PyObject_VectorcallMethod(cpy_r_r70, cpy_r_r73, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL557;
    }
    CPy_DECREF(cpy_r_r68);
    cpy_r_r75 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r76[1] = {cpy_r_r74};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = PyObject_Vectorcall(cpy_r_r75, cpy_r_r77, 1, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 22, CPyStatic_constants___globals);
        goto CPyL558;
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
        goto CPyL554;
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
        goto CPyL554;
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
        goto CPyL554;
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
        goto CPyL554;
    }
    cpy_r_r95 = CPyModule_enum;
    cpy_r_r96 = CPyStatics[89]; /* 'IntEnum' */
    cpy_r_r97 = CPyObject_GetAttr(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r98 = PyTuple_Pack(1, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r99 = (PyObject *)&PyType_Type;
    cpy_r_r100 = CPy_CalculateMetaclass(cpy_r_r99, cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL559;
    }
    cpy_r_r101 = CPyStatics[106]; /* '__prepare__' */
    cpy_r_r102 = PyObject_HasAttr(cpy_r_r100, cpy_r_r101);
    if (!cpy_r_r102) goto CPyL42;
    cpy_r_r103 = CPyStatics[56]; /* 'Network' */
    cpy_r_r104 = CPyStatics[106]; /* '__prepare__' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL559;
    }
    PyObject *cpy_r_r106[2] = {cpy_r_r103, cpy_r_r98};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 2, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL559;
    }
    if (likely(PyDict_Check(cpy_r_r108)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals, "dict", cpy_r_r108);
        goto CPyL559;
    }
    cpy_r_r110 = cpy_r_r109;
    goto CPyL44;
CPyL42: ;
    cpy_r_r111 = PyDict_New();
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL559;
    }
    cpy_r_r110 = cpy_r_r111;
CPyL44: ;
    cpy_r_r112 = PyDict_New();
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL560;
    }
    cpy_r_r113 = (PyObject *)&PyLong_Type;
    cpy_r_r114 = CPyStatics[107]; /* 'Mainnet' */
    cpy_r_r115 = CPyDict_SetItem(cpy_r_r112, cpy_r_r114, cpy_r_r113);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 35, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r117 = CPyStatics[107]; /* 'Mainnet' */
    cpy_r_r118 = CPyStatics[323]; /* 1 */
    cpy_r_r119 = CPyDict_SetItem(cpy_r_r110, cpy_r_r117, cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 35, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r121 = (PyObject *)&PyLong_Type;
    cpy_r_r122 = CPyStatics[108]; /* 'Ropsten' */
    cpy_r_r123 = CPyDict_SetItem(cpy_r_r112, cpy_r_r122, cpy_r_r121);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 36, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r125 = CPyStatics[108]; /* 'Ropsten' */
    cpy_r_r126 = CPyStatics[324]; /* 3 */
    cpy_r_r127 = CPyDict_SetItem(cpy_r_r110, cpy_r_r125, cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 36, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r129 = (PyObject *)&PyLong_Type;
    cpy_r_r130 = CPyStatics[109]; /* 'Rinkeby' */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r112, cpy_r_r130, cpy_r_r129);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 37, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r133 = CPyStatics[109]; /* 'Rinkeby' */
    cpy_r_r134 = CPyStatics[326]; /* 4 */
    cpy_r_r135 = CPyDict_SetItem(cpy_r_r110, cpy_r_r133, cpy_r_r134);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 37, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r137 = (PyObject *)&PyLong_Type;
    cpy_r_r138 = CPyStatics[110]; /* 'Gorli' */
    cpy_r_r139 = CPyDict_SetItem(cpy_r_r112, cpy_r_r138, cpy_r_r137);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 38, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r141 = CPyStatics[110]; /* 'Gorli' */
    cpy_r_r142 = CPyStatics[327]; /* 5 */
    cpy_r_r143 = CPyDict_SetItem(cpy_r_r110, cpy_r_r141, cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 38, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r145 = (PyObject *)&PyLong_Type;
    cpy_r_r146 = CPyStatics[111]; /* 'Optimism' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r112, cpy_r_r146, cpy_r_r145);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 39, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r149 = CPyStatics[111]; /* 'Optimism' */
    cpy_r_r150 = CPyStatics[328]; /* 10 */
    cpy_r_r151 = CPyDict_SetItem(cpy_r_r110, cpy_r_r149, cpy_r_r150);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 39, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r153 = (PyObject *)&PyLong_Type;
    cpy_r_r154 = CPyStatics[112]; /* 'CostonTestnet' */
    cpy_r_r155 = CPyDict_SetItem(cpy_r_r112, cpy_r_r154, cpy_r_r153);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 40, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r157 = CPyStatics[112]; /* 'CostonTestnet' */
    cpy_r_r158 = CPyStatics[329]; /* 16 */
    cpy_r_r159 = CPyDict_SetItem(cpy_r_r110, cpy_r_r157, cpy_r_r158);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 40, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r161 = (PyObject *)&PyLong_Type;
    cpy_r_r162 = CPyStatics[113]; /* 'ThundercoreTestnet' */
    cpy_r_r163 = CPyDict_SetItem(cpy_r_r112, cpy_r_r162, cpy_r_r161);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 41, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r165 = CPyStatics[113]; /* 'ThundercoreTestnet' */
    cpy_r_r166 = CPyStatics[330]; /* 18 */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r110, cpy_r_r165, cpy_r_r166);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 41, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r169 = (PyObject *)&PyLong_Type;
    cpy_r_r170 = CPyStatics[114]; /* 'SongbirdCanaryNetwork' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r112, cpy_r_r170, cpy_r_r169);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 42, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r173 = CPyStatics[114]; /* 'SongbirdCanaryNetwork' */
    cpy_r_r174 = CPyStatics[331]; /* 19 */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r110, cpy_r_r173, cpy_r_r174);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 42, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r177 = (PyObject *)&PyLong_Type;
    cpy_r_r178 = CPyStatics[115]; /* 'Cronos' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r112, cpy_r_r178, cpy_r_r177);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 43, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r181 = CPyStatics[115]; /* 'Cronos' */
    cpy_r_r182 = CPyStatics[332]; /* 25 */
    cpy_r_r183 = CPyDict_SetItem(cpy_r_r110, cpy_r_r181, cpy_r_r182);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 43, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r185 = (PyObject *)&PyLong_Type;
    cpy_r_r186 = CPyStatics[116]; /* 'RSK' */
    cpy_r_r187 = CPyDict_SetItem(cpy_r_r112, cpy_r_r186, cpy_r_r185);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 44, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r189 = CPyStatics[116]; /* 'RSK' */
    cpy_r_r190 = CPyStatics[333]; /* 30 */
    cpy_r_r191 = CPyDict_SetItem(cpy_r_r110, cpy_r_r189, cpy_r_r190);
    cpy_r_r192 = cpy_r_r191 >= 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 44, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r193 = (PyObject *)&PyLong_Type;
    cpy_r_r194 = CPyStatics[117]; /* 'RSKTestnet' */
    cpy_r_r195 = CPyDict_SetItem(cpy_r_r112, cpy_r_r194, cpy_r_r193);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 45, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r197 = CPyStatics[117]; /* 'RSKTestnet' */
    cpy_r_r198 = CPyStatics[334]; /* 31 */
    cpy_r_r199 = CPyDict_SetItem(cpy_r_r110, cpy_r_r197, cpy_r_r198);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 45, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r201 = (PyObject *)&PyLong_Type;
    cpy_r_r202 = CPyStatics[118]; /* 'Kovan' */
    cpy_r_r203 = CPyDict_SetItem(cpy_r_r112, cpy_r_r202, cpy_r_r201);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 46, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r205 = CPyStatics[118]; /* 'Kovan' */
    cpy_r_r206 = CPyStatics[335]; /* 42 */
    cpy_r_r207 = CPyDict_SetItem(cpy_r_r110, cpy_r_r205, cpy_r_r206);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 46, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r209 = (PyObject *)&PyLong_Type;
    cpy_r_r210 = CPyStatics[119]; /* 'Bsc' */
    cpy_r_r211 = CPyDict_SetItem(cpy_r_r112, cpy_r_r210, cpy_r_r209);
    cpy_r_r212 = cpy_r_r211 >= 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 47, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r213 = CPyStatics[119]; /* 'Bsc' */
    cpy_r_r214 = CPyStatics[336]; /* 56 */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r110, cpy_r_r213, cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 47, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r217 = (PyObject *)&PyLong_Type;
    cpy_r_r218 = CPyStatics[120]; /* 'OKC' */
    cpy_r_r219 = CPyDict_SetItem(cpy_r_r112, cpy_r_r218, cpy_r_r217);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 48, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r221 = CPyStatics[120]; /* 'OKC' */
    cpy_r_r222 = CPyStatics[337]; /* 66 */
    cpy_r_r223 = CPyDict_SetItem(cpy_r_r110, cpy_r_r221, cpy_r_r222);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 48, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r225 = (PyObject *)&PyLong_Type;
    cpy_r_r226 = CPyStatics[121]; /* 'OptimismKovan' */
    cpy_r_r227 = CPyDict_SetItem(cpy_r_r112, cpy_r_r226, cpy_r_r225);
    cpy_r_r228 = cpy_r_r227 >= 0;
    if (unlikely(!cpy_r_r228)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 49, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r229 = CPyStatics[121]; /* 'OptimismKovan' */
    cpy_r_r230 = CPyStatics[338]; /* 69 */
    cpy_r_r231 = CPyDict_SetItem(cpy_r_r110, cpy_r_r229, cpy_r_r230);
    cpy_r_r232 = cpy_r_r231 >= 0;
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 49, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r233 = (PyObject *)&PyLong_Type;
    cpy_r_r234 = CPyStatics[122]; /* 'BscTestnet' */
    cpy_r_r235 = CPyDict_SetItem(cpy_r_r112, cpy_r_r234, cpy_r_r233);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 50, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r237 = CPyStatics[122]; /* 'BscTestnet' */
    cpy_r_r238 = CPyStatics[339]; /* 97 */
    cpy_r_r239 = CPyDict_SetItem(cpy_r_r110, cpy_r_r237, cpy_r_r238);
    cpy_r_r240 = cpy_r_r239 >= 0;
    if (unlikely(!cpy_r_r240)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 50, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r241 = (PyObject *)&PyLong_Type;
    cpy_r_r242 = CPyStatics[123]; /* 'Gnosis' */
    cpy_r_r243 = CPyDict_SetItem(cpy_r_r112, cpy_r_r242, cpy_r_r241);
    cpy_r_r244 = cpy_r_r243 >= 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 51, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r245 = CPyStatics[123]; /* 'Gnosis' */
    cpy_r_r246 = CPyStatics[340]; /* 100 */
    cpy_r_r247 = CPyDict_SetItem(cpy_r_r110, cpy_r_r245, cpy_r_r246);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 51, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r249 = (PyObject *)&PyLong_Type;
    cpy_r_r250 = CPyStatics[124]; /* 'Velas' */
    cpy_r_r251 = CPyDict_SetItem(cpy_r_r112, cpy_r_r250, cpy_r_r249);
    cpy_r_r252 = cpy_r_r251 >= 0;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 52, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r253 = CPyStatics[124]; /* 'Velas' */
    cpy_r_r254 = CPyStatics[341]; /* 106 */
    cpy_r_r255 = CPyDict_SetItem(cpy_r_r110, cpy_r_r253, cpy_r_r254);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 52, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r257 = (PyObject *)&PyLong_Type;
    cpy_r_r258 = CPyStatics[125]; /* 'Thundercore' */
    cpy_r_r259 = CPyDict_SetItem(cpy_r_r112, cpy_r_r258, cpy_r_r257);
    cpy_r_r260 = cpy_r_r259 >= 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 53, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r261 = CPyStatics[125]; /* 'Thundercore' */
    cpy_r_r262 = CPyStatics[342]; /* 108 */
    cpy_r_r263 = CPyDict_SetItem(cpy_r_r110, cpy_r_r261, cpy_r_r262);
    cpy_r_r264 = cpy_r_r263 >= 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 53, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r265 = (PyObject *)&PyLong_Type;
    cpy_r_r266 = CPyStatics[126]; /* 'Coston2Testnet' */
    cpy_r_r267 = CPyDict_SetItem(cpy_r_r112, cpy_r_r266, cpy_r_r265);
    cpy_r_r268 = cpy_r_r267 >= 0;
    if (unlikely(!cpy_r_r268)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 54, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r269 = CPyStatics[126]; /* 'Coston2Testnet' */
    cpy_r_r270 = CPyStatics[343]; /* 114 */
    cpy_r_r271 = CPyDict_SetItem(cpy_r_r110, cpy_r_r269, cpy_r_r270);
    cpy_r_r272 = cpy_r_r271 >= 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 54, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r273 = (PyObject *)&PyLong_Type;
    cpy_r_r274 = CPyStatics[127]; /* 'Fuse' */
    cpy_r_r275 = CPyDict_SetItem(cpy_r_r112, cpy_r_r274, cpy_r_r273);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 55, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r277 = CPyStatics[127]; /* 'Fuse' */
    cpy_r_r278 = CPyStatics[344]; /* 122 */
    cpy_r_r279 = CPyDict_SetItem(cpy_r_r110, cpy_r_r277, cpy_r_r278);
    cpy_r_r280 = cpy_r_r279 >= 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 55, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r281 = (PyObject *)&PyLong_Type;
    cpy_r_r282 = CPyStatics[128]; /* 'Heco' */
    cpy_r_r283 = CPyDict_SetItem(cpy_r_r112, cpy_r_r282, cpy_r_r281);
    cpy_r_r284 = cpy_r_r283 >= 0;
    if (unlikely(!cpy_r_r284)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 56, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r285 = CPyStatics[128]; /* 'Heco' */
    cpy_r_r286 = CPyStatics[345]; /* 128 */
    cpy_r_r287 = CPyDict_SetItem(cpy_r_r110, cpy_r_r285, cpy_r_r286);
    cpy_r_r288 = cpy_r_r287 >= 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 56, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r289 = (PyObject *)&PyLong_Type;
    cpy_r_r290 = CPyStatics[129]; /* 'Polygon' */
    cpy_r_r291 = CPyDict_SetItem(cpy_r_r112, cpy_r_r290, cpy_r_r289);
    cpy_r_r292 = cpy_r_r291 >= 0;
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 57, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r293 = CPyStatics[129]; /* 'Polygon' */
    cpy_r_r294 = CPyStatics[346]; /* 137 */
    cpy_r_r295 = CPyDict_SetItem(cpy_r_r110, cpy_r_r293, cpy_r_r294);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 57, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r297 = (PyObject *)&PyLong_Type;
    cpy_r_r298 = CPyStatics[130]; /* 'Fantom' */
    cpy_r_r299 = CPyDict_SetItem(cpy_r_r112, cpy_r_r298, cpy_r_r297);
    cpy_r_r300 = cpy_r_r299 >= 0;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 58, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r301 = CPyStatics[130]; /* 'Fantom' */
    cpy_r_r302 = CPyStatics[347]; /* 250 */
    cpy_r_r303 = CPyDict_SetItem(cpy_r_r110, cpy_r_r301, cpy_r_r302);
    cpy_r_r304 = cpy_r_r303 >= 0;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 58, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r305 = (PyObject *)&PyLong_Type;
    cpy_r_r306 = CPyStatics[131]; /* 'Boba' */
    cpy_r_r307 = CPyDict_SetItem(cpy_r_r112, cpy_r_r306, cpy_r_r305);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 59, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r309 = CPyStatics[131]; /* 'Boba' */
    cpy_r_r310 = CPyStatics[348]; /* 288 */
    cpy_r_r311 = CPyDict_SetItem(cpy_r_r110, cpy_r_r309, cpy_r_r310);
    cpy_r_r312 = cpy_r_r311 >= 0;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 59, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r313 = (PyObject *)&PyLong_Type;
    cpy_r_r314 = CPyStatics[132]; /* 'KCC' */
    cpy_r_r315 = CPyDict_SetItem(cpy_r_r112, cpy_r_r314, cpy_r_r313);
    cpy_r_r316 = cpy_r_r315 >= 0;
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 60, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r317 = CPyStatics[132]; /* 'KCC' */
    cpy_r_r318 = CPyStatics[349]; /* 321 */
    cpy_r_r319 = CPyDict_SetItem(cpy_r_r110, cpy_r_r317, cpy_r_r318);
    cpy_r_r320 = cpy_r_r319 >= 0;
    if (unlikely(!cpy_r_r320)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 60, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r321 = (PyObject *)&PyLong_Type;
    cpy_r_r322 = CPyStatics[133]; /* 'ZkSync' */
    cpy_r_r323 = CPyDict_SetItem(cpy_r_r112, cpy_r_r322, cpy_r_r321);
    cpy_r_r324 = cpy_r_r323 >= 0;
    if (unlikely(!cpy_r_r324)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 61, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r325 = CPyStatics[133]; /* 'ZkSync' */
    cpy_r_r326 = CPyStatics[350]; /* 324 */
    cpy_r_r327 = CPyDict_SetItem(cpy_r_r110, cpy_r_r325, cpy_r_r326);
    cpy_r_r328 = cpy_r_r327 >= 0;
    if (unlikely(!cpy_r_r328)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 61, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r329 = (PyObject *)&PyLong_Type;
    cpy_r_r330 = CPyStatics[134]; /* 'OptimismGorli' */
    cpy_r_r331 = CPyDict_SetItem(cpy_r_r112, cpy_r_r330, cpy_r_r329);
    cpy_r_r332 = cpy_r_r331 >= 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 62, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r333 = CPyStatics[134]; /* 'OptimismGorli' */
    cpy_r_r334 = CPyStatics[351]; /* 420 */
    cpy_r_r335 = CPyDict_SetItem(cpy_r_r110, cpy_r_r333, cpy_r_r334);
    cpy_r_r336 = cpy_r_r335 >= 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 62, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r337 = (PyObject *)&PyLong_Type;
    cpy_r_r338 = CPyStatics[135]; /* 'Astar' */
    cpy_r_r339 = CPyDict_SetItem(cpy_r_r112, cpy_r_r338, cpy_r_r337);
    cpy_r_r340 = cpy_r_r339 >= 0;
    if (unlikely(!cpy_r_r340)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 63, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r341 = CPyStatics[135]; /* 'Astar' */
    cpy_r_r342 = CPyStatics[352]; /* 592 */
    cpy_r_r343 = CPyDict_SetItem(cpy_r_r110, cpy_r_r341, cpy_r_r342);
    cpy_r_r344 = cpy_r_r343 >= 0;
    if (unlikely(!cpy_r_r344)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 63, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r345 = (PyObject *)&PyLong_Type;
    cpy_r_r346 = CPyStatics[136]; /* 'Metis' */
    cpy_r_r347 = CPyDict_SetItem(cpy_r_r112, cpy_r_r346, cpy_r_r345);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 64, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r349 = CPyStatics[136]; /* 'Metis' */
    cpy_r_r350 = CPyStatics[353]; /* 1088 */
    cpy_r_r351 = CPyDict_SetItem(cpy_r_r110, cpy_r_r349, cpy_r_r350);
    cpy_r_r352 = cpy_r_r351 >= 0;
    if (unlikely(!cpy_r_r352)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 64, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r353 = (PyObject *)&PyLong_Type;
    cpy_r_r354 = CPyStatics[137]; /* 'Moonbeam' */
    cpy_r_r355 = CPyDict_SetItem(cpy_r_r112, cpy_r_r354, cpy_r_r353);
    cpy_r_r356 = cpy_r_r355 >= 0;
    if (unlikely(!cpy_r_r356)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 65, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r357 = CPyStatics[137]; /* 'Moonbeam' */
    cpy_r_r358 = CPyStatics[354]; /* 1284 */
    cpy_r_r359 = CPyDict_SetItem(cpy_r_r110, cpy_r_r357, cpy_r_r358);
    cpy_r_r360 = cpy_r_r359 >= 0;
    if (unlikely(!cpy_r_r360)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 65, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r361 = (PyObject *)&PyLong_Type;
    cpy_r_r362 = CPyStatics[138]; /* 'Moonriver' */
    cpy_r_r363 = CPyDict_SetItem(cpy_r_r112, cpy_r_r362, cpy_r_r361);
    cpy_r_r364 = cpy_r_r363 >= 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 66, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r365 = CPyStatics[138]; /* 'Moonriver' */
    cpy_r_r366 = CPyStatics[355]; /* 1285 */
    cpy_r_r367 = CPyDict_SetItem(cpy_r_r110, cpy_r_r365, cpy_r_r366);
    cpy_r_r368 = cpy_r_r367 >= 0;
    if (unlikely(!cpy_r_r368)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 66, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r369 = (PyObject *)&PyLong_Type;
    cpy_r_r370 = CPyStatics[139]; /* 'MoonbaseAlphaTestnet' */
    cpy_r_r371 = CPyDict_SetItem(cpy_r_r112, cpy_r_r370, cpy_r_r369);
    cpy_r_r372 = cpy_r_r371 >= 0;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 67, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r373 = CPyStatics[139]; /* 'MoonbaseAlphaTestnet' */
    cpy_r_r374 = CPyStatics[356]; /* 1287 */
    cpy_r_r375 = CPyDict_SetItem(cpy_r_r110, cpy_r_r373, cpy_r_r374);
    cpy_r_r376 = cpy_r_r375 >= 0;
    if (unlikely(!cpy_r_r376)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 67, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r377 = (PyObject *)&PyLong_Type;
    cpy_r_r378 = CPyStatics[140]; /* 'Milkomeda' */
    cpy_r_r379 = CPyDict_SetItem(cpy_r_r112, cpy_r_r378, cpy_r_r377);
    cpy_r_r380 = cpy_r_r379 >= 0;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 68, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r381 = CPyStatics[140]; /* 'Milkomeda' */
    cpy_r_r382 = CPyStatics[357]; /* 2001 */
    cpy_r_r383 = CPyDict_SetItem(cpy_r_r110, cpy_r_r381, cpy_r_r382);
    cpy_r_r384 = cpy_r_r383 >= 0;
    if (unlikely(!cpy_r_r384)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 68, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r385 = (PyObject *)&PyLong_Type;
    cpy_r_r386 = CPyStatics[141]; /* 'Kava' */
    cpy_r_r387 = CPyDict_SetItem(cpy_r_r112, cpy_r_r386, cpy_r_r385);
    cpy_r_r388 = cpy_r_r387 >= 0;
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 69, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r389 = CPyStatics[141]; /* 'Kava' */
    cpy_r_r390 = CPyStatics[358]; /* 2222 */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r110, cpy_r_r389, cpy_r_r390);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 69, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r393 = (PyObject *)&PyLong_Type;
    cpy_r_r394 = CPyStatics[142]; /* 'FantomTestnet' */
    cpy_r_r395 = CPyDict_SetItem(cpy_r_r112, cpy_r_r394, cpy_r_r393);
    cpy_r_r396 = cpy_r_r395 >= 0;
    if (unlikely(!cpy_r_r396)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 70, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r397 = CPyStatics[142]; /* 'FantomTestnet' */
    cpy_r_r398 = CPyStatics[359]; /* 4002 */
    cpy_r_r399 = CPyDict_SetItem(cpy_r_r110, cpy_r_r397, cpy_r_r398);
    cpy_r_r400 = cpy_r_r399 >= 0;
    if (unlikely(!cpy_r_r400)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 70, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r401 = (PyObject *)&PyLong_Type;
    cpy_r_r402 = CPyStatics[143]; /* 'Canto' */
    cpy_r_r403 = CPyDict_SetItem(cpy_r_r112, cpy_r_r402, cpy_r_r401);
    cpy_r_r404 = cpy_r_r403 >= 0;
    if (unlikely(!cpy_r_r404)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 71, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r405 = CPyStatics[143]; /* 'Canto' */
    cpy_r_r406 = CPyStatics[360]; /* 7700 */
    cpy_r_r407 = CPyDict_SetItem(cpy_r_r110, cpy_r_r405, cpy_r_r406);
    cpy_r_r408 = cpy_r_r407 >= 0;
    if (unlikely(!cpy_r_r408)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 71, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r409 = (PyObject *)&PyLong_Type;
    cpy_r_r410 = CPyStatics[144]; /* 'Klaytn' */
    cpy_r_r411 = CPyDict_SetItem(cpy_r_r112, cpy_r_r410, cpy_r_r409);
    cpy_r_r412 = cpy_r_r411 >= 0;
    if (unlikely(!cpy_r_r412)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 72, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r413 = CPyStatics[144]; /* 'Klaytn' */
    cpy_r_r414 = CPyStatics[361]; /* 8217 */
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r110, cpy_r_r413, cpy_r_r414);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 72, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r417 = (PyObject *)&PyLong_Type;
    cpy_r_r418 = CPyStatics[145]; /* 'Base' */
    cpy_r_r419 = CPyDict_SetItem(cpy_r_r112, cpy_r_r418, cpy_r_r417);
    cpy_r_r420 = cpy_r_r419 >= 0;
    if (unlikely(!cpy_r_r420)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 73, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r421 = CPyStatics[145]; /* 'Base' */
    cpy_r_r422 = CPyStatics[362]; /* 8453 */
    cpy_r_r423 = CPyDict_SetItem(cpy_r_r110, cpy_r_r421, cpy_r_r422);
    cpy_r_r424 = cpy_r_r423 >= 0;
    if (unlikely(!cpy_r_r424)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 73, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r425 = (PyObject *)&PyLong_Type;
    cpy_r_r426 = CPyStatics[146]; /* 'EvmosTestnet' */
    cpy_r_r427 = CPyDict_SetItem(cpy_r_r112, cpy_r_r426, cpy_r_r425);
    cpy_r_r428 = cpy_r_r427 >= 0;
    if (unlikely(!cpy_r_r428)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 74, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r429 = CPyStatics[146]; /* 'EvmosTestnet' */
    cpy_r_r430 = CPyStatics[363]; /* 9000 */
    cpy_r_r431 = CPyDict_SetItem(cpy_r_r110, cpy_r_r429, cpy_r_r430);
    cpy_r_r432 = cpy_r_r431 >= 0;
    if (unlikely(!cpy_r_r432)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 74, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r433 = (PyObject *)&PyLong_Type;
    cpy_r_r434 = CPyStatics[147]; /* 'Evmos' */
    cpy_r_r435 = CPyDict_SetItem(cpy_r_r112, cpy_r_r434, cpy_r_r433);
    cpy_r_r436 = cpy_r_r435 >= 0;
    if (unlikely(!cpy_r_r436)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 75, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r437 = CPyStatics[147]; /* 'Evmos' */
    cpy_r_r438 = CPyStatics[364]; /* 9001 */
    cpy_r_r439 = CPyDict_SetItem(cpy_r_r110, cpy_r_r437, cpy_r_r438);
    cpy_r_r440 = cpy_r_r439 >= 0;
    if (unlikely(!cpy_r_r440)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 75, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r441 = (PyObject *)&PyLong_Type;
    cpy_r_r442 = CPyStatics[148]; /* 'Holesky' */
    cpy_r_r443 = CPyDict_SetItem(cpy_r_r112, cpy_r_r442, cpy_r_r441);
    cpy_r_r444 = cpy_r_r443 >= 0;
    if (unlikely(!cpy_r_r444)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 76, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r445 = CPyStatics[148]; /* 'Holesky' */
    cpy_r_r446 = CPyStatics[365]; /* 17000 */
    cpy_r_r447 = CPyDict_SetItem(cpy_r_r110, cpy_r_r445, cpy_r_r446);
    cpy_r_r448 = cpy_r_r447 >= 0;
    if (unlikely(!cpy_r_r448)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 76, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r449 = (PyObject *)&PyLong_Type;
    cpy_r_r450 = CPyStatics[149]; /* 'Arbitrum' */
    cpy_r_r451 = CPyDict_SetItem(cpy_r_r112, cpy_r_r450, cpy_r_r449);
    cpy_r_r452 = cpy_r_r451 >= 0;
    if (unlikely(!cpy_r_r452)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 77, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r453 = CPyStatics[149]; /* 'Arbitrum' */
    cpy_r_r454 = CPyStatics[366]; /* 42161 */
    cpy_r_r455 = CPyDict_SetItem(cpy_r_r110, cpy_r_r453, cpy_r_r454);
    cpy_r_r456 = cpy_r_r455 >= 0;
    if (unlikely(!cpy_r_r456)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 77, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r457 = (PyObject *)&PyLong_Type;
    cpy_r_r458 = CPyStatics[150]; /* 'Celo' */
    cpy_r_r459 = CPyDict_SetItem(cpy_r_r112, cpy_r_r458, cpy_r_r457);
    cpy_r_r460 = cpy_r_r459 >= 0;
    if (unlikely(!cpy_r_r460)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 78, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r461 = CPyStatics[150]; /* 'Celo' */
    cpy_r_r462 = CPyStatics[367]; /* 42220 */
    cpy_r_r463 = CPyDict_SetItem(cpy_r_r110, cpy_r_r461, cpy_r_r462);
    cpy_r_r464 = cpy_r_r463 >= 0;
    if (unlikely(!cpy_r_r464)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 78, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r465 = (PyObject *)&PyLong_Type;
    cpy_r_r466 = CPyStatics[151]; /* 'Oasis' */
    cpy_r_r467 = CPyDict_SetItem(cpy_r_r112, cpy_r_r466, cpy_r_r465);
    cpy_r_r468 = cpy_r_r467 >= 0;
    if (unlikely(!cpy_r_r468)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 79, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r469 = CPyStatics[151]; /* 'Oasis' */
    cpy_r_r470 = CPyStatics[368]; /* 42262 */
    cpy_r_r471 = CPyDict_SetItem(cpy_r_r110, cpy_r_r469, cpy_r_r470);
    cpy_r_r472 = cpy_r_r471 >= 0;
    if (unlikely(!cpy_r_r472)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 79, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r473 = (PyObject *)&PyLong_Type;
    cpy_r_r474 = CPyStatics[152]; /* 'AvalancheFuji' */
    cpy_r_r475 = CPyDict_SetItem(cpy_r_r112, cpy_r_r474, cpy_r_r473);
    cpy_r_r476 = cpy_r_r475 >= 0;
    if (unlikely(!cpy_r_r476)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 80, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r477 = CPyStatics[152]; /* 'AvalancheFuji' */
    cpy_r_r478 = CPyStatics[369]; /* 43113 */
    cpy_r_r479 = CPyDict_SetItem(cpy_r_r110, cpy_r_r477, cpy_r_r478);
    cpy_r_r480 = cpy_r_r479 >= 0;
    if (unlikely(!cpy_r_r480)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 80, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r481 = (PyObject *)&PyLong_Type;
    cpy_r_r482 = CPyStatics[153]; /* 'Avax' */
    cpy_r_r483 = CPyDict_SetItem(cpy_r_r112, cpy_r_r482, cpy_r_r481);
    cpy_r_r484 = cpy_r_r483 >= 0;
    if (unlikely(!cpy_r_r484)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 81, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r485 = CPyStatics[153]; /* 'Avax' */
    cpy_r_r486 = CPyStatics[370]; /* 43114 */
    cpy_r_r487 = CPyDict_SetItem(cpy_r_r110, cpy_r_r485, cpy_r_r486);
    cpy_r_r488 = cpy_r_r487 >= 0;
    if (unlikely(!cpy_r_r488)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 81, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r489 = (PyObject *)&PyLong_Type;
    cpy_r_r490 = CPyStatics[154]; /* 'GodwokenTestnet' */
    cpy_r_r491 = CPyDict_SetItem(cpy_r_r112, cpy_r_r490, cpy_r_r489);
    cpy_r_r492 = cpy_r_r491 >= 0;
    if (unlikely(!cpy_r_r492)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 82, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r493 = CPyStatics[154]; /* 'GodwokenTestnet' */
    cpy_r_r494 = CPyStatics[371]; /* 71401 */
    cpy_r_r495 = CPyDict_SetItem(cpy_r_r110, cpy_r_r493, cpy_r_r494);
    cpy_r_r496 = cpy_r_r495 >= 0;
    if (unlikely(!cpy_r_r496)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 82, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r497 = (PyObject *)&PyLong_Type;
    cpy_r_r498 = CPyStatics[155]; /* 'Godwoken' */
    cpy_r_r499 = CPyDict_SetItem(cpy_r_r112, cpy_r_r498, cpy_r_r497);
    cpy_r_r500 = cpy_r_r499 >= 0;
    if (unlikely(!cpy_r_r500)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 83, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r501 = CPyStatics[155]; /* 'Godwoken' */
    cpy_r_r502 = CPyStatics[372]; /* 71402 */
    cpy_r_r503 = CPyDict_SetItem(cpy_r_r110, cpy_r_r501, cpy_r_r502);
    cpy_r_r504 = cpy_r_r503 >= 0;
    if (unlikely(!cpy_r_r504)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 83, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r505 = (PyObject *)&PyLong_Type;
    cpy_r_r506 = CPyStatics[156]; /* 'Mumbai' */
    cpy_r_r507 = CPyDict_SetItem(cpy_r_r112, cpy_r_r506, cpy_r_r505);
    cpy_r_r508 = cpy_r_r507 >= 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 84, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r509 = CPyStatics[156]; /* 'Mumbai' */
    cpy_r_r510 = CPyStatics[373]; /* 80001 */
    cpy_r_r511 = CPyDict_SetItem(cpy_r_r110, cpy_r_r509, cpy_r_r510);
    cpy_r_r512 = cpy_r_r511 >= 0;
    if (unlikely(!cpy_r_r512)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 84, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r513 = (PyObject *)&PyLong_Type;
    cpy_r_r514 = CPyStatics[157]; /* 'ArbitrumRinkeby' */
    cpy_r_r515 = CPyDict_SetItem(cpy_r_r112, cpy_r_r514, cpy_r_r513);
    cpy_r_r516 = cpy_r_r515 >= 0;
    if (unlikely(!cpy_r_r516)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 85, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r517 = CPyStatics[157]; /* 'ArbitrumRinkeby' */
    cpy_r_r518 = CPyStatics[374]; /* 421611 */
    cpy_r_r519 = CPyDict_SetItem(cpy_r_r110, cpy_r_r517, cpy_r_r518);
    cpy_r_r520 = cpy_r_r519 >= 0;
    if (unlikely(!cpy_r_r520)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 85, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r521 = (PyObject *)&PyLong_Type;
    cpy_r_r522 = CPyStatics[158]; /* 'ArbitrumGorli' */
    cpy_r_r523 = CPyDict_SetItem(cpy_r_r112, cpy_r_r522, cpy_r_r521);
    cpy_r_r524 = cpy_r_r523 >= 0;
    if (unlikely(!cpy_r_r524)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 86, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r525 = CPyStatics[158]; /* 'ArbitrumGorli' */
    cpy_r_r526 = CPyStatics[375]; /* 421613 */
    cpy_r_r527 = CPyDict_SetItem(cpy_r_r110, cpy_r_r525, cpy_r_r526);
    cpy_r_r528 = cpy_r_r527 >= 0;
    if (unlikely(!cpy_r_r528)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 86, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r529 = (PyObject *)&PyLong_Type;
    cpy_r_r530 = CPyStatics[159]; /* 'Sepolia' */
    cpy_r_r531 = CPyDict_SetItem(cpy_r_r112, cpy_r_r530, cpy_r_r529);
    cpy_r_r532 = cpy_r_r531 >= 0;
    if (unlikely(!cpy_r_r532)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 87, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r533 = CPyStatics[159]; /* 'Sepolia' */
    cpy_r_r534 = CPyStatics[376]; /* 11155111 */
    cpy_r_r535 = CPyDict_SetItem(cpy_r_r110, cpy_r_r533, cpy_r_r534);
    cpy_r_r536 = cpy_r_r535 >= 0;
    if (unlikely(!cpy_r_r536)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 87, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r537 = (PyObject *)&PyLong_Type;
    cpy_r_r538 = CPyStatics[160]; /* 'Aurora' */
    cpy_r_r539 = CPyDict_SetItem(cpy_r_r112, cpy_r_r538, cpy_r_r537);
    cpy_r_r540 = cpy_r_r539 >= 0;
    if (unlikely(!cpy_r_r540)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 88, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r541 = CPyStatics[160]; /* 'Aurora' */
    cpy_r_r542 = CPyStatics[377]; /* 1313161554 */
    cpy_r_r543 = CPyDict_SetItem(cpy_r_r110, cpy_r_r541, cpy_r_r542);
    cpy_r_r544 = cpy_r_r543 >= 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 88, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r545 = (PyObject *)&PyLong_Type;
    cpy_r_r546 = CPyStatics[161]; /* 'Harmony' */
    cpy_r_r547 = CPyDict_SetItem(cpy_r_r112, cpy_r_r546, cpy_r_r545);
    cpy_r_r548 = cpy_r_r547 >= 0;
    if (unlikely(!cpy_r_r548)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 89, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r549 = CPyStatics[161]; /* 'Harmony' */
    cpy_r_r550 = CPyStatics[378]; /* 1666600000 */
    cpy_r_r551 = CPyDict_SetItem(cpy_r_r110, cpy_r_r549, cpy_r_r550);
    cpy_r_r552 = cpy_r_r551 >= 0;
    if (unlikely(!cpy_r_r552)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 89, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r553 = (PyObject *)&PyLong_Type;
    cpy_r_r554 = CPyStatics[162]; /* 'PulseChain' */
    cpy_r_r555 = CPyDict_SetItem(cpy_r_r112, cpy_r_r554, cpy_r_r553);
    cpy_r_r556 = cpy_r_r555 >= 0;
    if (unlikely(!cpy_r_r556)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 90, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r557 = CPyStatics[162]; /* 'PulseChain' */
    cpy_r_r558 = CPyStatics[379]; /* 369 */
    cpy_r_r559 = CPyDict_SetItem(cpy_r_r110, cpy_r_r557, cpy_r_r558);
    cpy_r_r560 = cpy_r_r559 >= 0;
    if (unlikely(!cpy_r_r560)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 90, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r561 = (PyObject *)&PyLong_Type;
    cpy_r_r562 = CPyStatics[163]; /* 'PulseChainTestnet' */
    cpy_r_r563 = CPyDict_SetItem(cpy_r_r112, cpy_r_r562, cpy_r_r561);
    cpy_r_r564 = cpy_r_r563 >= 0;
    if (unlikely(!cpy_r_r564)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 91, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r565 = CPyStatics[163]; /* 'PulseChainTestnet' */
    cpy_r_r566 = CPyStatics[380]; /* 943 */
    cpy_r_r567 = CPyDict_SetItem(cpy_r_r110, cpy_r_r565, cpy_r_r566);
    cpy_r_r568 = cpy_r_r567 >= 0;
    if (unlikely(!cpy_r_r568)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 91, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r569 = (PyObject *)&PyLong_Type;
    cpy_r_r570 = CPyStatics[164]; /* 'Sei' */
    cpy_r_r571 = CPyDict_SetItem(cpy_r_r112, cpy_r_r570, cpy_r_r569);
    cpy_r_r572 = cpy_r_r571 >= 0;
    if (unlikely(!cpy_r_r572)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 92, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r573 = CPyStatics[164]; /* 'Sei' */
    cpy_r_r574 = CPyStatics[381]; /* 1329 */
    cpy_r_r575 = CPyDict_SetItem(cpy_r_r110, cpy_r_r573, cpy_r_r574);
    cpy_r_r576 = cpy_r_r575 >= 0;
    if (unlikely(!cpy_r_r576)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 92, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r577 = (PyObject *)&PyLong_Type;
    cpy_r_r578 = CPyStatics[165]; /* 'Hoodi' */
    cpy_r_r579 = CPyDict_SetItem(cpy_r_r112, cpy_r_r578, cpy_r_r577);
    cpy_r_r580 = cpy_r_r579 >= 0;
    if (unlikely(!cpy_r_r580)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 93, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r581 = CPyStatics[165]; /* 'Hoodi' */
    cpy_r_r582 = CPyStatics[382]; /* 560048 */
    cpy_r_r583 = CPyDict_SetItem(cpy_r_r110, cpy_r_r581, cpy_r_r582);
    cpy_r_r584 = cpy_r_r583 >= 0;
    if (unlikely(!cpy_r_r584)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 93, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r585 = (PyObject *)&PyLong_Type;
    cpy_r_r586 = CPyStatics[166]; /* 'HyperEVM' */
    cpy_r_r587 = CPyDict_SetItem(cpy_r_r112, cpy_r_r586, cpy_r_r585);
    cpy_r_r588 = cpy_r_r587 >= 0;
    if (unlikely(!cpy_r_r588)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 94, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r589 = CPyStatics[166]; /* 'HyperEVM' */
    cpy_r_r590 = CPyStatics[383]; /* 999 */
    cpy_r_r591 = CPyDict_SetItem(cpy_r_r110, cpy_r_r589, cpy_r_r590);
    cpy_r_r592 = cpy_r_r591 >= 0;
    if (unlikely(!cpy_r_r592)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 94, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r593 = (PyObject *)&PyLong_Type;
    cpy_r_r594 = CPyStatics[167]; /* 'Berachain' */
    cpy_r_r595 = CPyDict_SetItem(cpy_r_r112, cpy_r_r594, cpy_r_r593);
    cpy_r_r596 = cpy_r_r595 >= 0;
    if (unlikely(!cpy_r_r596)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 95, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r597 = CPyStatics[167]; /* 'Berachain' */
    cpy_r_r598 = CPyStatics[384]; /* 80094 */
    cpy_r_r599 = CPyDict_SetItem(cpy_r_r110, cpy_r_r597, cpy_r_r598);
    cpy_r_r600 = cpy_r_r599 >= 0;
    if (unlikely(!cpy_r_r600)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 95, CPyStatic_constants___globals);
        goto CPyL561;
    }
    cpy_r_r601 = CPyStatics[56]; /* 'Network' */
    cpy_r_r602 = CPyStatics[168]; /* '__annotations__' */
    cpy_r_r603 = CPyDict_SetItem(cpy_r_r110, cpy_r_r602, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r604 = cpy_r_r603 >= 0;
    if (unlikely(!cpy_r_r604)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL560;
    }
    cpy_r_r605 = CPyStatics[169]; /* 'mypyc filler docstring' */
    cpy_r_r606 = CPyStatics[170]; /* '__doc__' */
    cpy_r_r607 = CPyDict_SetItem(cpy_r_r110, cpy_r_r606, cpy_r_r605);
    cpy_r_r608 = cpy_r_r607 >= 0;
    if (unlikely(!cpy_r_r608)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL560;
    }
    cpy_r_r609 = CPyStatics[57]; /* 'multicall.constants' */
    cpy_r_r610 = CPyStatics[171]; /* '__module__' */
    cpy_r_r611 = CPyDict_SetItem(cpy_r_r110, cpy_r_r610, cpy_r_r609);
    cpy_r_r612 = cpy_r_r611 >= 0;
    if (unlikely(!cpy_r_r612)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL560;
    }
    PyObject *cpy_r_r613[3] = {cpy_r_r601, cpy_r_r98, cpy_r_r110};
    cpy_r_r614 = (PyObject **)&cpy_r_r613;
    cpy_r_r615 = PyObject_Vectorcall(cpy_r_r100, cpy_r_r614, 3, 0);
    if (unlikely(cpy_r_r615 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL560;
    }
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r616 = CPyStatic_constants___globals;
    cpy_r_r617 = CPyStatics[41]; /* 'final' */
    cpy_r_r618 = CPyDict_GetItem(cpy_r_r616, cpy_r_r617);
    if (unlikely(cpy_r_r618 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 33, CPyStatic_constants___globals);
        goto CPyL562;
    }
    PyObject *cpy_r_r619[1] = {cpy_r_r615};
    cpy_r_r620 = (PyObject **)&cpy_r_r619;
    cpy_r_r621 = PyObject_Vectorcall(cpy_r_r618, cpy_r_r620, 1, 0);
    CPy_DECREF(cpy_r_r618);
    if (unlikely(cpy_r_r621 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL562;
    }
    CPy_DECREF(cpy_r_r615);
    CPyType_constants___Network = (PyTypeObject *)cpy_r_r621;
    CPy_INCREF(CPyType_constants___Network);
    cpy_r_r622 = CPyStatic_constants___globals;
    cpy_r_r623 = CPyStatics[56]; /* 'Network' */
    cpy_r_r624 = CPyDict_SetItem(cpy_r_r622, cpy_r_r623, cpy_r_r621);
    CPy_DECREF(cpy_r_r621);
    cpy_r_r625 = cpy_r_r624 >= 0;
    if (unlikely(!cpy_r_r625)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r626 = (PyObject *)CPyType_constants___Network;
    cpy_r_r627 = CPyStatics[107]; /* 'Mainnet' */
    cpy_r_r628 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r627);
    if (unlikely(cpy_r_r628 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Mainnet = cpy_r_r628;
    CPy_INCREF(CPyStatic_constants___Network___Mainnet);
    CPy_DECREF(cpy_r_r628);
    cpy_r_r629 = CPyStatics[108]; /* 'Ropsten' */
    cpy_r_r630 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r629);
    if (unlikely(cpy_r_r630 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Ropsten = cpy_r_r630;
    CPy_INCREF(CPyStatic_constants___Network___Ropsten);
    CPy_DECREF(cpy_r_r630);
    cpy_r_r631 = CPyStatics[109]; /* 'Rinkeby' */
    cpy_r_r632 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r631);
    if (unlikely(cpy_r_r632 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Rinkeby = cpy_r_r632;
    CPy_INCREF(CPyStatic_constants___Network___Rinkeby);
    CPy_DECREF(cpy_r_r632);
    cpy_r_r633 = CPyStatics[110]; /* 'Gorli' */
    cpy_r_r634 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r633);
    if (unlikely(cpy_r_r634 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Gorli = cpy_r_r634;
    CPy_INCREF(CPyStatic_constants___Network___Gorli);
    CPy_DECREF(cpy_r_r634);
    cpy_r_r635 = CPyStatics[111]; /* 'Optimism' */
    cpy_r_r636 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r635);
    if (unlikely(cpy_r_r636 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Optimism = cpy_r_r636;
    CPy_INCREF(CPyStatic_constants___Network___Optimism);
    CPy_DECREF(cpy_r_r636);
    cpy_r_r637 = CPyStatics[112]; /* 'CostonTestnet' */
    cpy_r_r638 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r637);
    if (unlikely(cpy_r_r638 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___CostonTestnet = cpy_r_r638;
    CPy_INCREF(CPyStatic_constants___Network___CostonTestnet);
    CPy_DECREF(cpy_r_r638);
    cpy_r_r639 = CPyStatics[113]; /* 'ThundercoreTestnet' */
    cpy_r_r640 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r639);
    if (unlikely(cpy_r_r640 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___ThundercoreTestnet = cpy_r_r640;
    CPy_INCREF(CPyStatic_constants___Network___ThundercoreTestnet);
    CPy_DECREF(cpy_r_r640);
    cpy_r_r641 = CPyStatics[114]; /* 'SongbirdCanaryNetwork' */
    cpy_r_r642 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r641);
    if (unlikely(cpy_r_r642 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___SongbirdCanaryNetwork = cpy_r_r642;
    CPy_INCREF(CPyStatic_constants___Network___SongbirdCanaryNetwork);
    CPy_DECREF(cpy_r_r642);
    cpy_r_r643 = CPyStatics[115]; /* 'Cronos' */
    cpy_r_r644 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r643);
    if (unlikely(cpy_r_r644 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Cronos = cpy_r_r644;
    CPy_INCREF(CPyStatic_constants___Network___Cronos);
    CPy_DECREF(cpy_r_r644);
    cpy_r_r645 = CPyStatics[116]; /* 'RSK' */
    cpy_r_r646 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r645);
    if (unlikely(cpy_r_r646 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___RSK = cpy_r_r646;
    CPy_INCREF(CPyStatic_constants___Network___RSK);
    CPy_DECREF(cpy_r_r646);
    cpy_r_r647 = CPyStatics[117]; /* 'RSKTestnet' */
    cpy_r_r648 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r647);
    if (unlikely(cpy_r_r648 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___RSKTestnet = cpy_r_r648;
    CPy_INCREF(CPyStatic_constants___Network___RSKTestnet);
    CPy_DECREF(cpy_r_r648);
    cpy_r_r649 = CPyStatics[118]; /* 'Kovan' */
    cpy_r_r650 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r649);
    if (unlikely(cpy_r_r650 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Kovan = cpy_r_r650;
    CPy_INCREF(CPyStatic_constants___Network___Kovan);
    CPy_DECREF(cpy_r_r650);
    cpy_r_r651 = CPyStatics[119]; /* 'Bsc' */
    cpy_r_r652 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r651);
    if (unlikely(cpy_r_r652 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Bsc = cpy_r_r652;
    CPy_INCREF(CPyStatic_constants___Network___Bsc);
    CPy_DECREF(cpy_r_r652);
    cpy_r_r653 = CPyStatics[120]; /* 'OKC' */
    cpy_r_r654 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r653);
    if (unlikely(cpy_r_r654 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___OKC = cpy_r_r654;
    CPy_INCREF(CPyStatic_constants___Network___OKC);
    CPy_DECREF(cpy_r_r654);
    cpy_r_r655 = CPyStatics[121]; /* 'OptimismKovan' */
    cpy_r_r656 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r655);
    if (unlikely(cpy_r_r656 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___OptimismKovan = cpy_r_r656;
    CPy_INCREF(CPyStatic_constants___Network___OptimismKovan);
    CPy_DECREF(cpy_r_r656);
    cpy_r_r657 = CPyStatics[122]; /* 'BscTestnet' */
    cpy_r_r658 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r657);
    if (unlikely(cpy_r_r658 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___BscTestnet = cpy_r_r658;
    CPy_INCREF(CPyStatic_constants___Network___BscTestnet);
    CPy_DECREF(cpy_r_r658);
    cpy_r_r659 = CPyStatics[123]; /* 'Gnosis' */
    cpy_r_r660 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r659);
    if (unlikely(cpy_r_r660 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Gnosis = cpy_r_r660;
    CPy_INCREF(CPyStatic_constants___Network___Gnosis);
    CPy_DECREF(cpy_r_r660);
    cpy_r_r661 = CPyStatics[124]; /* 'Velas' */
    cpy_r_r662 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r661);
    if (unlikely(cpy_r_r662 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Velas = cpy_r_r662;
    CPy_INCREF(CPyStatic_constants___Network___Velas);
    CPy_DECREF(cpy_r_r662);
    cpy_r_r663 = CPyStatics[125]; /* 'Thundercore' */
    cpy_r_r664 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r663);
    if (unlikely(cpy_r_r664 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Thundercore = cpy_r_r664;
    CPy_INCREF(CPyStatic_constants___Network___Thundercore);
    CPy_DECREF(cpy_r_r664);
    cpy_r_r665 = CPyStatics[126]; /* 'Coston2Testnet' */
    cpy_r_r666 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r665);
    if (unlikely(cpy_r_r666 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Coston2Testnet = cpy_r_r666;
    CPy_INCREF(CPyStatic_constants___Network___Coston2Testnet);
    CPy_DECREF(cpy_r_r666);
    cpy_r_r667 = CPyStatics[127]; /* 'Fuse' */
    cpy_r_r668 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r667);
    if (unlikely(cpy_r_r668 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Fuse = cpy_r_r668;
    CPy_INCREF(CPyStatic_constants___Network___Fuse);
    CPy_DECREF(cpy_r_r668);
    cpy_r_r669 = CPyStatics[128]; /* 'Heco' */
    cpy_r_r670 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r669);
    if (unlikely(cpy_r_r670 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Heco = cpy_r_r670;
    CPy_INCREF(CPyStatic_constants___Network___Heco);
    CPy_DECREF(cpy_r_r670);
    cpy_r_r671 = CPyStatics[129]; /* 'Polygon' */
    cpy_r_r672 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r671);
    if (unlikely(cpy_r_r672 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Polygon = cpy_r_r672;
    CPy_INCREF(CPyStatic_constants___Network___Polygon);
    CPy_DECREF(cpy_r_r672);
    cpy_r_r673 = CPyStatics[130]; /* 'Fantom' */
    cpy_r_r674 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r673);
    if (unlikely(cpy_r_r674 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Fantom = cpy_r_r674;
    CPy_INCREF(CPyStatic_constants___Network___Fantom);
    CPy_DECREF(cpy_r_r674);
    cpy_r_r675 = CPyStatics[131]; /* 'Boba' */
    cpy_r_r676 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r675);
    if (unlikely(cpy_r_r676 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Boba = cpy_r_r676;
    CPy_INCREF(CPyStatic_constants___Network___Boba);
    CPy_DECREF(cpy_r_r676);
    cpy_r_r677 = CPyStatics[132]; /* 'KCC' */
    cpy_r_r678 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r677);
    if (unlikely(cpy_r_r678 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___KCC = cpy_r_r678;
    CPy_INCREF(CPyStatic_constants___Network___KCC);
    CPy_DECREF(cpy_r_r678);
    cpy_r_r679 = CPyStatics[133]; /* 'ZkSync' */
    cpy_r_r680 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r679);
    if (unlikely(cpy_r_r680 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___ZkSync = cpy_r_r680;
    CPy_INCREF(CPyStatic_constants___Network___ZkSync);
    CPy_DECREF(cpy_r_r680);
    cpy_r_r681 = CPyStatics[134]; /* 'OptimismGorli' */
    cpy_r_r682 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r681);
    if (unlikely(cpy_r_r682 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___OptimismGorli = cpy_r_r682;
    CPy_INCREF(CPyStatic_constants___Network___OptimismGorli);
    CPy_DECREF(cpy_r_r682);
    cpy_r_r683 = CPyStatics[135]; /* 'Astar' */
    cpy_r_r684 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r683);
    if (unlikely(cpy_r_r684 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Astar = cpy_r_r684;
    CPy_INCREF(CPyStatic_constants___Network___Astar);
    CPy_DECREF(cpy_r_r684);
    cpy_r_r685 = CPyStatics[136]; /* 'Metis' */
    cpy_r_r686 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r685);
    if (unlikely(cpy_r_r686 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Metis = cpy_r_r686;
    CPy_INCREF(CPyStatic_constants___Network___Metis);
    CPy_DECREF(cpy_r_r686);
    cpy_r_r687 = CPyStatics[137]; /* 'Moonbeam' */
    cpy_r_r688 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r687);
    if (unlikely(cpy_r_r688 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Moonbeam = cpy_r_r688;
    CPy_INCREF(CPyStatic_constants___Network___Moonbeam);
    CPy_DECREF(cpy_r_r688);
    cpy_r_r689 = CPyStatics[138]; /* 'Moonriver' */
    cpy_r_r690 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r689);
    if (unlikely(cpy_r_r690 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Moonriver = cpy_r_r690;
    CPy_INCREF(CPyStatic_constants___Network___Moonriver);
    CPy_DECREF(cpy_r_r690);
    cpy_r_r691 = CPyStatics[139]; /* 'MoonbaseAlphaTestnet' */
    cpy_r_r692 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r691);
    if (unlikely(cpy_r_r692 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___MoonbaseAlphaTestnet = cpy_r_r692;
    CPy_INCREF(CPyStatic_constants___Network___MoonbaseAlphaTestnet);
    CPy_DECREF(cpy_r_r692);
    cpy_r_r693 = CPyStatics[140]; /* 'Milkomeda' */
    cpy_r_r694 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r693);
    if (unlikely(cpy_r_r694 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Milkomeda = cpy_r_r694;
    CPy_INCREF(CPyStatic_constants___Network___Milkomeda);
    CPy_DECREF(cpy_r_r694);
    cpy_r_r695 = CPyStatics[141]; /* 'Kava' */
    cpy_r_r696 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r695);
    if (unlikely(cpy_r_r696 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Kava = cpy_r_r696;
    CPy_INCREF(CPyStatic_constants___Network___Kava);
    CPy_DECREF(cpy_r_r696);
    cpy_r_r697 = CPyStatics[142]; /* 'FantomTestnet' */
    cpy_r_r698 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r697);
    if (unlikely(cpy_r_r698 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___FantomTestnet = cpy_r_r698;
    CPy_INCREF(CPyStatic_constants___Network___FantomTestnet);
    CPy_DECREF(cpy_r_r698);
    cpy_r_r699 = CPyStatics[143]; /* 'Canto' */
    cpy_r_r700 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r699);
    if (unlikely(cpy_r_r700 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Canto = cpy_r_r700;
    CPy_INCREF(CPyStatic_constants___Network___Canto);
    CPy_DECREF(cpy_r_r700);
    cpy_r_r701 = CPyStatics[144]; /* 'Klaytn' */
    cpy_r_r702 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r701);
    if (unlikely(cpy_r_r702 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Klaytn = cpy_r_r702;
    CPy_INCREF(CPyStatic_constants___Network___Klaytn);
    CPy_DECREF(cpy_r_r702);
    cpy_r_r703 = CPyStatics[145]; /* 'Base' */
    cpy_r_r704 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r703);
    if (unlikely(cpy_r_r704 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Base = cpy_r_r704;
    CPy_INCREF(CPyStatic_constants___Network___Base);
    CPy_DECREF(cpy_r_r704);
    cpy_r_r705 = CPyStatics[146]; /* 'EvmosTestnet' */
    cpy_r_r706 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r705);
    if (unlikely(cpy_r_r706 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___EvmosTestnet = cpy_r_r706;
    CPy_INCREF(CPyStatic_constants___Network___EvmosTestnet);
    CPy_DECREF(cpy_r_r706);
    cpy_r_r707 = CPyStatics[147]; /* 'Evmos' */
    cpy_r_r708 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r707);
    if (unlikely(cpy_r_r708 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Evmos = cpy_r_r708;
    CPy_INCREF(CPyStatic_constants___Network___Evmos);
    CPy_DECREF(cpy_r_r708);
    cpy_r_r709 = CPyStatics[148]; /* 'Holesky' */
    cpy_r_r710 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r709);
    if (unlikely(cpy_r_r710 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Holesky = cpy_r_r710;
    CPy_INCREF(CPyStatic_constants___Network___Holesky);
    CPy_DECREF(cpy_r_r710);
    cpy_r_r711 = CPyStatics[149]; /* 'Arbitrum' */
    cpy_r_r712 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r711);
    if (unlikely(cpy_r_r712 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Arbitrum = cpy_r_r712;
    CPy_INCREF(CPyStatic_constants___Network___Arbitrum);
    CPy_DECREF(cpy_r_r712);
    cpy_r_r713 = CPyStatics[150]; /* 'Celo' */
    cpy_r_r714 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r713);
    if (unlikely(cpy_r_r714 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Celo = cpy_r_r714;
    CPy_INCREF(CPyStatic_constants___Network___Celo);
    CPy_DECREF(cpy_r_r714);
    cpy_r_r715 = CPyStatics[151]; /* 'Oasis' */
    cpy_r_r716 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r715);
    if (unlikely(cpy_r_r716 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Oasis = cpy_r_r716;
    CPy_INCREF(CPyStatic_constants___Network___Oasis);
    CPy_DECREF(cpy_r_r716);
    cpy_r_r717 = CPyStatics[152]; /* 'AvalancheFuji' */
    cpy_r_r718 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r717);
    if (unlikely(cpy_r_r718 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___AvalancheFuji = cpy_r_r718;
    CPy_INCREF(CPyStatic_constants___Network___AvalancheFuji);
    CPy_DECREF(cpy_r_r718);
    cpy_r_r719 = CPyStatics[153]; /* 'Avax' */
    cpy_r_r720 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r719);
    if (unlikely(cpy_r_r720 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Avax = cpy_r_r720;
    CPy_INCREF(CPyStatic_constants___Network___Avax);
    CPy_DECREF(cpy_r_r720);
    cpy_r_r721 = CPyStatics[154]; /* 'GodwokenTestnet' */
    cpy_r_r722 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r721);
    if (unlikely(cpy_r_r722 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___GodwokenTestnet = cpy_r_r722;
    CPy_INCREF(CPyStatic_constants___Network___GodwokenTestnet);
    CPy_DECREF(cpy_r_r722);
    cpy_r_r723 = CPyStatics[155]; /* 'Godwoken' */
    cpy_r_r724 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r723);
    if (unlikely(cpy_r_r724 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Godwoken = cpy_r_r724;
    CPy_INCREF(CPyStatic_constants___Network___Godwoken);
    CPy_DECREF(cpy_r_r724);
    cpy_r_r725 = CPyStatics[156]; /* 'Mumbai' */
    cpy_r_r726 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r725);
    if (unlikely(cpy_r_r726 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Mumbai = cpy_r_r726;
    CPy_INCREF(CPyStatic_constants___Network___Mumbai);
    CPy_DECREF(cpy_r_r726);
    cpy_r_r727 = CPyStatics[157]; /* 'ArbitrumRinkeby' */
    cpy_r_r728 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r727);
    if (unlikely(cpy_r_r728 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___ArbitrumRinkeby = cpy_r_r728;
    CPy_INCREF(CPyStatic_constants___Network___ArbitrumRinkeby);
    CPy_DECREF(cpy_r_r728);
    cpy_r_r729 = CPyStatics[158]; /* 'ArbitrumGorli' */
    cpy_r_r730 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r729);
    if (unlikely(cpy_r_r730 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___ArbitrumGorli = cpy_r_r730;
    CPy_INCREF(CPyStatic_constants___Network___ArbitrumGorli);
    CPy_DECREF(cpy_r_r730);
    cpy_r_r731 = CPyStatics[159]; /* 'Sepolia' */
    cpy_r_r732 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r731);
    if (unlikely(cpy_r_r732 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Sepolia = cpy_r_r732;
    CPy_INCREF(CPyStatic_constants___Network___Sepolia);
    CPy_DECREF(cpy_r_r732);
    cpy_r_r733 = CPyStatics[160]; /* 'Aurora' */
    cpy_r_r734 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r733);
    if (unlikely(cpy_r_r734 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Aurora = cpy_r_r734;
    CPy_INCREF(CPyStatic_constants___Network___Aurora);
    CPy_DECREF(cpy_r_r734);
    cpy_r_r735 = CPyStatics[161]; /* 'Harmony' */
    cpy_r_r736 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r735);
    if (unlikely(cpy_r_r736 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Harmony = cpy_r_r736;
    CPy_INCREF(CPyStatic_constants___Network___Harmony);
    CPy_DECREF(cpy_r_r736);
    cpy_r_r737 = CPyStatics[162]; /* 'PulseChain' */
    cpy_r_r738 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r737);
    if (unlikely(cpy_r_r738 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___PulseChain = cpy_r_r738;
    CPy_INCREF(CPyStatic_constants___Network___PulseChain);
    CPy_DECREF(cpy_r_r738);
    cpy_r_r739 = CPyStatics[163]; /* 'PulseChainTestnet' */
    cpy_r_r740 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r739);
    if (unlikely(cpy_r_r740 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___PulseChainTestnet = cpy_r_r740;
    CPy_INCREF(CPyStatic_constants___Network___PulseChainTestnet);
    CPy_DECREF(cpy_r_r740);
    cpy_r_r741 = CPyStatics[164]; /* 'Sei' */
    cpy_r_r742 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r741);
    if (unlikely(cpy_r_r742 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Sei = cpy_r_r742;
    CPy_INCREF(CPyStatic_constants___Network___Sei);
    CPy_DECREF(cpy_r_r742);
    cpy_r_r743 = CPyStatics[165]; /* 'Hoodi' */
    cpy_r_r744 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r743);
    if (unlikely(cpy_r_r744 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Hoodi = cpy_r_r744;
    CPy_INCREF(CPyStatic_constants___Network___Hoodi);
    CPy_DECREF(cpy_r_r744);
    cpy_r_r745 = CPyStatics[166]; /* 'HyperEVM' */
    cpy_r_r746 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r745);
    if (unlikely(cpy_r_r746 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___HyperEVM = cpy_r_r746;
    CPy_INCREF(CPyStatic_constants___Network___HyperEVM);
    CPy_DECREF(cpy_r_r746);
    cpy_r_r747 = CPyStatics[167]; /* 'Berachain' */
    cpy_r_r748 = CPyObject_GetAttr(cpy_r_r626, cpy_r_r747);
    if (unlikely(cpy_r_r748 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 34, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___Network___Berachain = cpy_r_r748;
    CPy_INCREF(CPyStatic_constants___Network___Berachain);
    CPy_DECREF(cpy_r_r748);
    cpy_r_r749 = CPyStatic_constants___Network___Mainnet;
    if (likely(cpy_r_r749 != NULL)) goto CPyL238;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mainnet\" was not set");
    cpy_r_r750 = 0;
    if (unlikely(!cpy_r_r750)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 99, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL238: ;
    cpy_r_r751 = CPyStatics[172]; /* '0xeefBa1e63905eF1D7ACbA5a8513c70307C1cE441' */
    cpy_r_r752 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r752 != NULL)) goto CPyL241;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r753 = 0;
    if (unlikely(!cpy_r_r753)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 100, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL241: ;
    cpy_r_r754 = CPyStatics[173]; /* '0x2cc8688C5f75E365aaEEb4ea8D6a480405A48D2A' */
    cpy_r_r755 = CPyStatic_constants___Network___Rinkeby;
    if (likely(cpy_r_r755 != NULL)) goto CPyL244;
    PyErr_SetString(PyExc_NameError, "value for final name \"Rinkeby\" was not set");
    cpy_r_r756 = 0;
    if (unlikely(!cpy_r_r756)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 101, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL244: ;
    cpy_r_r757 = CPyStatics[174]; /* '0x42Ad527de7d4e9d9d011aC45B31D8551f8Fe9821' */
    cpy_r_r758 = CPyStatic_constants___Network___Gorli;
    if (likely(cpy_r_r758 != NULL)) goto CPyL247;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gorli\" was not set");
    cpy_r_r759 = 0;
    if (unlikely(!cpy_r_r759)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 102, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL247: ;
    cpy_r_r760 = CPyStatics[175]; /* '0x77dCa2C955b15e9dE4dbBCf1246B4B85b651e50e' */
    cpy_r_r761 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r761 != NULL)) goto CPyL250;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r762 = 0;
    if (unlikely(!cpy_r_r762)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 103, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL250: ;
    cpy_r_r763 = CPyStatics[176]; /* '0xb5b692a88BDFc81ca69dcB1d924f59f0413A602a' */
    cpy_r_r764 = CPyStatic_constants___Network___Polygon;
    if (likely(cpy_r_r764 != NULL)) goto CPyL253;
    PyErr_SetString(PyExc_NameError, "value for final name \"Polygon\" was not set");
    cpy_r_r765 = 0;
    if (unlikely(!cpy_r_r765)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 104, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL253: ;
    cpy_r_r766 = CPyStatics[177]; /* '0x95028E5B8a734bb7E2071F96De89BABe75be9C8E' */
    cpy_r_r767 = CPyStatic_constants___Network___Bsc;
    if (likely(cpy_r_r767 != NULL)) goto CPyL256;
    PyErr_SetString(PyExc_NameError, "value for final name \"Bsc\" was not set");
    cpy_r_r768 = 0;
    if (unlikely(!cpy_r_r768)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 105, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL256: ;
    cpy_r_r769 = CPyStatics[178]; /* '0x1Ee38d535d541c55C9dae27B12edf090C608E6Fb' */
    cpy_r_r770 = CPyStatic_constants___Network___Fantom;
    if (likely(cpy_r_r770 != NULL)) goto CPyL259;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fantom\" was not set");
    cpy_r_r771 = 0;
    if (unlikely(!cpy_r_r771)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 106, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL259: ;
    cpy_r_r772 = CPyStatics[179]; /* '0xb828C456600857abd4ed6C32FAcc607bD0464F4F' */
    cpy_r_r773 = CPyStatic_constants___Network___Heco;
    if (likely(cpy_r_r773 != NULL)) goto CPyL262;
    PyErr_SetString(PyExc_NameError, "value for final name \"Heco\" was not set");
    cpy_r_r774 = 0;
    if (unlikely(!cpy_r_r774)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 107, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL262: ;
    cpy_r_r775 = CPyStatics[180]; /* '0xc9a9F768ebD123A00B52e7A0E590df2e9E998707' */
    cpy_r_r776 = CPyStatic_constants___Network___Harmony;
    if (likely(cpy_r_r776 != NULL)) goto CPyL265;
    PyErr_SetString(PyExc_NameError, "value for final name \"Harmony\" was not set");
    cpy_r_r777 = 0;
    if (unlikely(!cpy_r_r777)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 108, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL265: ;
    cpy_r_r778 = CPyStatics[181]; /* '0xFE4980f62D708c2A84D3929859Ea226340759320' */
    cpy_r_r779 = CPyStatic_constants___Network___Cronos;
    if (likely(cpy_r_r779 != NULL)) goto CPyL268;
    PyErr_SetString(PyExc_NameError, "value for final name \"Cronos\" was not set");
    cpy_r_r780 = 0;
    if (unlikely(!cpy_r_r780)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 109, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL268: ;
    cpy_r_r781 = CPyStatics[182]; /* '0x5e954f5972EC6BFc7dECd75779F10d848230345F' */
    cpy_r_r782 = CPyStatic_constants___Network___Optimism;
    if (likely(cpy_r_r782 != NULL)) goto CPyL271;
    PyErr_SetString(PyExc_NameError, "value for final name \"Optimism\" was not set");
    cpy_r_r783 = 0;
    if (unlikely(!cpy_r_r783)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 110, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL271: ;
    cpy_r_r784 = CPyStatics[183]; /* '0x187C0F98FEF80E87880Db50241D40551eDd027Bf' */
    cpy_r_r785 = CPyStatic_constants___Network___OptimismKovan;
    if (likely(cpy_r_r785 != NULL)) goto CPyL274;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismKovan\" was not set");
    cpy_r_r786 = 0;
    if (unlikely(!cpy_r_r786)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 111, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL274: ;
    cpy_r_r787 = CPyStatics[184]; /* '0x2DC0E2aa608532Da689e89e237dF582B783E552C' */
    cpy_r_r788 = CPyStatic_constants___Network___Kava;
    if (likely(cpy_r_r788 != NULL)) goto CPyL277;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kava\" was not set");
    cpy_r_r789 = 0;
    if (unlikely(!cpy_r_r789)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 112, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL277: ;
    cpy_r_r790 = CPyStatics[185]; /* '0x7ED7bBd8C454a1B0D9EdD939c45a81A03c20131C' */
    cpy_r_r791 = CPyDict_Build(14, cpy_r_r749, cpy_r_r751, cpy_r_r752, cpy_r_r754, cpy_r_r755, cpy_r_r757, cpy_r_r758, cpy_r_r760, cpy_r_r761, cpy_r_r763, cpy_r_r764, cpy_r_r766, cpy_r_r767, cpy_r_r769, cpy_r_r770, cpy_r_r772, cpy_r_r773, cpy_r_r775, cpy_r_r776, cpy_r_r778, cpy_r_r779, cpy_r_r781, cpy_r_r782, cpy_r_r784, cpy_r_r785, cpy_r_r787, cpy_r_r788, cpy_r_r790);
    if (unlikely(cpy_r_r791 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 98, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___MULTICALL_ADDRESSES = cpy_r_r791;
    CPy_INCREF(CPyStatic_constants___MULTICALL_ADDRESSES);
    cpy_r_r792 = CPyStatic_constants___globals;
    cpy_r_r793 = CPyStatics[186]; /* 'MULTICALL_ADDRESSES' */
    cpy_r_r794 = CPyDict_SetItem(cpy_r_r792, cpy_r_r793, cpy_r_r791);
    CPy_DECREF(cpy_r_r791);
    cpy_r_r795 = cpy_r_r794 >= 0;
    if (unlikely(!cpy_r_r795)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 98, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r796 = CPyStatic_constants___Network___Mainnet;
    if (likely(cpy_r_r796 != NULL)) goto CPyL282;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mainnet\" was not set");
    cpy_r_r797 = 0;
    if (unlikely(!cpy_r_r797)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 116, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL282: ;
    cpy_r_r798 = CPyStatics[187]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r799 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r799 != NULL)) goto CPyL285;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r800 = 0;
    if (unlikely(!cpy_r_r800)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 117, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r801 = CPyStatics[187]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r802 = CPyStatic_constants___Network___Rinkeby;
    if (likely(cpy_r_r802 != NULL)) goto CPyL288;
    PyErr_SetString(PyExc_NameError, "value for final name \"Rinkeby\" was not set");
    cpy_r_r803 = 0;
    if (unlikely(!cpy_r_r803)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 118, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL288: ;
    cpy_r_r804 = CPyStatics[187]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r805 = CPyStatic_constants___Network___Gorli;
    if (likely(cpy_r_r805 != NULL)) goto CPyL291;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gorli\" was not set");
    cpy_r_r806 = 0;
    if (unlikely(!cpy_r_r806)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 119, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL291: ;
    cpy_r_r807 = CPyStatics[187]; /* '0x5ba1e12693dc8f9c48aad8770482f4739beed696' */
    cpy_r_r808 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r808 != NULL)) goto CPyL294;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r809 = 0;
    if (unlikely(!cpy_r_r809)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 120, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL294: ;
    cpy_r_r810 = CPyStatics[188]; /* '0x9903f30c1469d8A2f415D4E8184C93BD26992573' */
    cpy_r_r811 = CPyStatic_constants___Network___Polygon;
    if (likely(cpy_r_r811 != NULL)) goto CPyL297;
    PyErr_SetString(PyExc_NameError, "value for final name \"Polygon\" was not set");
    cpy_r_r812 = 0;
    if (unlikely(!cpy_r_r812)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 121, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL297: ;
    cpy_r_r813 = CPyStatics[189]; /* '0xc8E51042792d7405184DfCa245F2d27B94D013b6' */
    cpy_r_r814 = CPyStatic_constants___Network___Bsc;
    if (likely(cpy_r_r814 != NULL)) goto CPyL300;
    PyErr_SetString(PyExc_NameError, "value for final name \"Bsc\" was not set");
    cpy_r_r815 = 0;
    if (unlikely(!cpy_r_r815)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 122, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL300: ;
    cpy_r_r816 = CPyStatics[190]; /* '0xfF6FD90A470Aaa0c1B8A54681746b07AcdFedc9B' */
    cpy_r_r817 = CPyStatic_constants___Network___Fantom;
    if (likely(cpy_r_r817 != NULL)) goto CPyL303;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fantom\" was not set");
    cpy_r_r818 = 0;
    if (unlikely(!cpy_r_r818)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 123, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL303: ;
    cpy_r_r819 = CPyStatics[191]; /* '0xBAD2B082e2212DE4B065F636CA4e5e0717623d18' */
    cpy_r_r820 = CPyStatic_constants___Network___Moonriver;
    if (likely(cpy_r_r820 != NULL)) goto CPyL306;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonriver\" was not set");
    cpy_r_r821 = 0;
    if (unlikely(!cpy_r_r821)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 124, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL306: ;
    cpy_r_r822 = CPyStatics[192]; /* '0xB44a9B6905aF7c801311e8F4E76932ee959c663C' */
    cpy_r_r823 = CPyStatic_constants___Network___Arbitrum;
    if (likely(cpy_r_r823 != NULL)) goto CPyL309;
    PyErr_SetString(PyExc_NameError, "value for final name \"Arbitrum\" was not set");
    cpy_r_r824 = 0;
    if (unlikely(!cpy_r_r824)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 125, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL309: ;
    cpy_r_r825 = CPyStatics[193]; /* '0x842eC2c7D803033Edf55E478F461FC547Bc54EB2' */
    cpy_r_r826 = CPyStatic_constants___Network___Avax;
    if (likely(cpy_r_r826 != NULL)) goto CPyL312;
    PyErr_SetString(PyExc_NameError, "value for final name \"Avax\" was not set");
    cpy_r_r827 = 0;
    if (unlikely(!cpy_r_r827)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 126, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL312: ;
    cpy_r_r828 = CPyStatics[194]; /* '0xdf2122931FEb939FB8Cf4e67Ea752D1125e18858' */
    cpy_r_r829 = CPyStatic_constants___Network___Heco;
    if (likely(cpy_r_r829 != NULL)) goto CPyL315;
    PyErr_SetString(PyExc_NameError, "value for final name \"Heco\" was not set");
    cpy_r_r830 = 0;
    if (unlikely(!cpy_r_r830)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 127, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL315: ;
    cpy_r_r831 = CPyStatics[195]; /* '0xd1F3BE686D64e1EA33fcF64980b65847aA43D79C' */
    cpy_r_r832 = CPyStatic_constants___Network___Aurora;
    if (likely(cpy_r_r832 != NULL)) goto CPyL318;
    PyErr_SetString(PyExc_NameError, "value for final name \"Aurora\" was not set");
    cpy_r_r833 = 0;
    if (unlikely(!cpy_r_r833)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 128, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL318: ;
    cpy_r_r834 = CPyStatics[196]; /* '0xe0e3887b158F7F9c80c835a61ED809389BC08d1b' */
    cpy_r_r835 = CPyStatic_constants___Network___Cronos;
    if (likely(cpy_r_r835 != NULL)) goto CPyL321;
    PyErr_SetString(PyExc_NameError, "value for final name \"Cronos\" was not set");
    cpy_r_r836 = 0;
    if (unlikely(!cpy_r_r836)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 129, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL321: ;
    cpy_r_r837 = CPyStatics[182]; /* '0x5e954f5972EC6BFc7dECd75779F10d848230345F' */
    cpy_r_r838 = CPyStatic_constants___Network___Optimism;
    if (likely(cpy_r_r838 != NULL)) goto CPyL324;
    PyErr_SetString(PyExc_NameError, "value for final name \"Optimism\" was not set");
    cpy_r_r839 = 0;
    if (unlikely(!cpy_r_r839)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 130, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL324: ;
    cpy_r_r840 = CPyStatics[184]; /* '0x2DC0E2aa608532Da689e89e237dF582B783E552C' */
    cpy_r_r841 = CPyStatic_constants___Network___OptimismKovan;
    if (likely(cpy_r_r841 != NULL)) goto CPyL327;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismKovan\" was not set");
    cpy_r_r842 = 0;
    if (unlikely(!cpy_r_r842)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 131, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL327: ;
    cpy_r_r843 = CPyStatics[184]; /* '0x2DC0E2aa608532Da689e89e237dF582B783E552C' */
    cpy_r_r844 = CPyStatic_constants___Network___Kava;
    if (likely(cpy_r_r844 != NULL)) goto CPyL330;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kava\" was not set");
    cpy_r_r845 = 0;
    if (unlikely(!cpy_r_r845)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 132, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL330: ;
    cpy_r_r846 = CPyStatics[197]; /* '0x45be772faE4a9F31401dfF4738E5DC7DD439aC0b' */
    cpy_r_r847 = CPyDict_Build(17, cpy_r_r796, cpy_r_r798, cpy_r_r799, cpy_r_r801, cpy_r_r802, cpy_r_r804, cpy_r_r805, cpy_r_r807, cpy_r_r808, cpy_r_r810, cpy_r_r811, cpy_r_r813, cpy_r_r814, cpy_r_r816, cpy_r_r817, cpy_r_r819, cpy_r_r820, cpy_r_r822, cpy_r_r823, cpy_r_r825, cpy_r_r826, cpy_r_r828, cpy_r_r829, cpy_r_r831, cpy_r_r832, cpy_r_r834, cpy_r_r835, cpy_r_r837, cpy_r_r838, cpy_r_r840, cpy_r_r841, cpy_r_r843, cpy_r_r844, cpy_r_r846);
    if (unlikely(cpy_r_r847 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 115, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___MULTICALL2_ADDRESSES = cpy_r_r847;
    CPy_INCREF(CPyStatic_constants___MULTICALL2_ADDRESSES);
    cpy_r_r848 = CPyStatic_constants___globals;
    cpy_r_r849 = CPyStatics[198]; /* 'MULTICALL2_ADDRESSES' */
    cpy_r_r850 = CPyDict_SetItem(cpy_r_r848, cpy_r_r849, cpy_r_r847);
    CPy_DECREF(cpy_r_r847);
    cpy_r_r851 = cpy_r_r850 >= 0;
    if (unlikely(!cpy_r_r851)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 115, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r852 = CPyStatic_constants___Network___Mainnet;
    if (likely(cpy_r_r852 != NULL)) goto CPyL335;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mainnet\" was not set");
    cpy_r_r853 = 0;
    if (unlikely(!cpy_r_r853)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 137, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL335: ;
    cpy_r_r854 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r855 = CPyStatic_constants___Network___Ropsten;
    if (likely(cpy_r_r855 != NULL)) goto CPyL338;
    PyErr_SetString(PyExc_NameError, "value for final name \"Ropsten\" was not set");
    cpy_r_r856 = 0;
    if (unlikely(!cpy_r_r856)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 138, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL338: ;
    cpy_r_r857 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r858 = CPyStatic_constants___Network___Rinkeby;
    if (likely(cpy_r_r858 != NULL)) goto CPyL341;
    PyErr_SetString(PyExc_NameError, "value for final name \"Rinkeby\" was not set");
    cpy_r_r859 = 0;
    if (unlikely(!cpy_r_r859)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 139, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL341: ;
    cpy_r_r860 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r861 = CPyStatic_constants___Network___Gorli;
    if (likely(cpy_r_r861 != NULL)) goto CPyL344;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gorli\" was not set");
    cpy_r_r862 = 0;
    if (unlikely(!cpy_r_r862)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 140, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL344: ;
    cpy_r_r863 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r864 = CPyStatic_constants___Network___Optimism;
    if (likely(cpy_r_r864 != NULL)) goto CPyL347;
    PyErr_SetString(PyExc_NameError, "value for final name \"Optimism\" was not set");
    cpy_r_r865 = 0;
    if (unlikely(!cpy_r_r865)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 141, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL347: ;
    cpy_r_r866 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r867 = CPyStatic_constants___Network___CostonTestnet;
    if (likely(cpy_r_r867 != NULL)) goto CPyL350;
    PyErr_SetString(PyExc_NameError, "value for final name \"CostonTestnet\" was not set");
    cpy_r_r868 = 0;
    if (unlikely(!cpy_r_r868)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 142, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL350: ;
    cpy_r_r869 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r870 = CPyStatic_constants___Network___ThundercoreTestnet;
    if (likely(cpy_r_r870 != NULL)) goto CPyL353;
    PyErr_SetString(PyExc_NameError, "value for final name \"ThundercoreTestnet\" was not set");
    cpy_r_r871 = 0;
    if (unlikely(!cpy_r_r871)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 143, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL353: ;
    cpy_r_r872 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r873 = CPyStatic_constants___Network___SongbirdCanaryNetwork;
    if (likely(cpy_r_r873 != NULL)) goto CPyL356;
    PyErr_SetString(PyExc_NameError, "value for final name \"SongbirdCanaryNetwork\" was not set");
    cpy_r_r874 = 0;
    if (unlikely(!cpy_r_r874)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 144, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL356: ;
    cpy_r_r875 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r876 = CPyStatic_constants___Network___Cronos;
    if (likely(cpy_r_r876 != NULL)) goto CPyL359;
    PyErr_SetString(PyExc_NameError, "value for final name \"Cronos\" was not set");
    cpy_r_r877 = 0;
    if (unlikely(!cpy_r_r877)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 145, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL359: ;
    cpy_r_r878 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r879 = CPyStatic_constants___Network___RSK;
    if (likely(cpy_r_r879 != NULL)) goto CPyL362;
    PyErr_SetString(PyExc_NameError, "value for final name \"RSK\" was not set");
    cpy_r_r880 = 0;
    if (unlikely(!cpy_r_r880)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 146, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL362: ;
    cpy_r_r881 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r882 = CPyStatic_constants___Network___RSKTestnet;
    if (likely(cpy_r_r882 != NULL)) goto CPyL365;
    PyErr_SetString(PyExc_NameError, "value for final name \"RSKTestnet\" was not set");
    cpy_r_r883 = 0;
    if (unlikely(!cpy_r_r883)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 147, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL365: ;
    cpy_r_r884 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r885 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r885 != NULL)) goto CPyL368;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r886 = 0;
    if (unlikely(!cpy_r_r886)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 148, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL368: ;
    cpy_r_r887 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r888 = CPyStatic_constants___Network___Bsc;
    if (likely(cpy_r_r888 != NULL)) goto CPyL371;
    PyErr_SetString(PyExc_NameError, "value for final name \"Bsc\" was not set");
    cpy_r_r889 = 0;
    if (unlikely(!cpy_r_r889)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 149, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL371: ;
    cpy_r_r890 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r891 = CPyStatic_constants___Network___OKC;
    if (likely(cpy_r_r891 != NULL)) goto CPyL374;
    PyErr_SetString(PyExc_NameError, "value for final name \"OKC\" was not set");
    cpy_r_r892 = 0;
    if (unlikely(!cpy_r_r892)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 150, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL374: ;
    cpy_r_r893 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r894 = CPyStatic_constants___Network___OptimismKovan;
    if (likely(cpy_r_r894 != NULL)) goto CPyL377;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismKovan\" was not set");
    cpy_r_r895 = 0;
    if (unlikely(!cpy_r_r895)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 151, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL377: ;
    cpy_r_r896 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r897 = CPyStatic_constants___Network___BscTestnet;
    if (likely(cpy_r_r897 != NULL)) goto CPyL380;
    PyErr_SetString(PyExc_NameError, "value for final name \"BscTestnet\" was not set");
    cpy_r_r898 = 0;
    if (unlikely(!cpy_r_r898)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 152, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL380: ;
    cpy_r_r899 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r900 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r900 != NULL)) goto CPyL383;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r901 = 0;
    if (unlikely(!cpy_r_r901)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 153, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL383: ;
    cpy_r_r902 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r903 = CPyStatic_constants___Network___Velas;
    if (likely(cpy_r_r903 != NULL)) goto CPyL386;
    PyErr_SetString(PyExc_NameError, "value for final name \"Velas\" was not set");
    cpy_r_r904 = 0;
    if (unlikely(!cpy_r_r904)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 154, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL386: ;
    cpy_r_r905 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r906 = CPyStatic_constants___Network___Thundercore;
    if (likely(cpy_r_r906 != NULL)) goto CPyL389;
    PyErr_SetString(PyExc_NameError, "value for final name \"Thundercore\" was not set");
    cpy_r_r907 = 0;
    if (unlikely(!cpy_r_r907)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 155, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL389: ;
    cpy_r_r908 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r909 = CPyStatic_constants___Network___Coston2Testnet;
    if (likely(cpy_r_r909 != NULL)) goto CPyL392;
    PyErr_SetString(PyExc_NameError, "value for final name \"Coston2Testnet\" was not set");
    cpy_r_r910 = 0;
    if (unlikely(!cpy_r_r910)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 156, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL392: ;
    cpy_r_r911 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r912 = CPyStatic_constants___Network___Fuse;
    if (likely(cpy_r_r912 != NULL)) goto CPyL395;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fuse\" was not set");
    cpy_r_r913 = 0;
    if (unlikely(!cpy_r_r913)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 157, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL395: ;
    cpy_r_r914 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r915 = CPyStatic_constants___Network___Heco;
    if (likely(cpy_r_r915 != NULL)) goto CPyL398;
    PyErr_SetString(PyExc_NameError, "value for final name \"Heco\" was not set");
    cpy_r_r916 = 0;
    if (unlikely(!cpy_r_r916)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 158, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL398: ;
    cpy_r_r917 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r918 = CPyStatic_constants___Network___Polygon;
    if (likely(cpy_r_r918 != NULL)) goto CPyL401;
    PyErr_SetString(PyExc_NameError, "value for final name \"Polygon\" was not set");
    cpy_r_r919 = 0;
    if (unlikely(!cpy_r_r919)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 159, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL401: ;
    cpy_r_r920 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r921 = CPyStatic_constants___Network___Fantom;
    if (likely(cpy_r_r921 != NULL)) goto CPyL404;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fantom\" was not set");
    cpy_r_r922 = 0;
    if (unlikely(!cpy_r_r922)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 160, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL404: ;
    cpy_r_r923 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r924 = CPyStatic_constants___Network___Boba;
    if (likely(cpy_r_r924 != NULL)) goto CPyL407;
    PyErr_SetString(PyExc_NameError, "value for final name \"Boba\" was not set");
    cpy_r_r925 = 0;
    if (unlikely(!cpy_r_r925)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 161, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL407: ;
    cpy_r_r926 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r927 = CPyStatic_constants___Network___KCC;
    if (likely(cpy_r_r927 != NULL)) goto CPyL410;
    PyErr_SetString(PyExc_NameError, "value for final name \"KCC\" was not set");
    cpy_r_r928 = 0;
    if (unlikely(!cpy_r_r928)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 162, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL410: ;
    cpy_r_r929 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r930 = CPyStatic_constants___Network___ZkSync;
    if (likely(cpy_r_r930 != NULL)) goto CPyL413;
    PyErr_SetString(PyExc_NameError, "value for final name \"ZkSync\" was not set");
    cpy_r_r931 = 0;
    if (unlikely(!cpy_r_r931)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 163, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL413: ;
    cpy_r_r932 = CPyStatics[200]; /* '0x47898B2C52C957663aE9AB46922dCec150a2272c' */
    cpy_r_r933 = CPyStatic_constants___Network___OptimismGorli;
    if (likely(cpy_r_r933 != NULL)) goto CPyL416;
    PyErr_SetString(PyExc_NameError, "value for final name \"OptimismGorli\" was not set");
    cpy_r_r934 = 0;
    if (unlikely(!cpy_r_r934)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 164, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL416: ;
    cpy_r_r935 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r936 = CPyStatic_constants___Network___Astar;
    if (likely(cpy_r_r936 != NULL)) goto CPyL419;
    PyErr_SetString(PyExc_NameError, "value for final name \"Astar\" was not set");
    cpy_r_r937 = 0;
    if (unlikely(!cpy_r_r937)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 165, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL419: ;
    cpy_r_r938 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r939 = CPyStatic_constants___Network___Metis;
    if (likely(cpy_r_r939 != NULL)) goto CPyL422;
    PyErr_SetString(PyExc_NameError, "value for final name \"Metis\" was not set");
    cpy_r_r940 = 0;
    if (unlikely(!cpy_r_r940)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 166, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL422: ;
    cpy_r_r941 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r942 = CPyStatic_constants___Network___Moonbeam;
    if (likely(cpy_r_r942 != NULL)) goto CPyL425;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonbeam\" was not set");
    cpy_r_r943 = 0;
    if (unlikely(!cpy_r_r943)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 167, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL425: ;
    cpy_r_r944 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r945 = CPyStatic_constants___Network___Moonriver;
    if (likely(cpy_r_r945 != NULL)) goto CPyL428;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonriver\" was not set");
    cpy_r_r946 = 0;
    if (unlikely(!cpy_r_r946)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 168, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL428: ;
    cpy_r_r947 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r948 = CPyStatic_constants___Network___MoonbaseAlphaTestnet;
    if (likely(cpy_r_r948 != NULL)) goto CPyL431;
    PyErr_SetString(PyExc_NameError, "value for final name \"MoonbaseAlphaTestnet\" was not set");
    cpy_r_r949 = 0;
    if (unlikely(!cpy_r_r949)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 169, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL431: ;
    cpy_r_r950 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r951 = CPyStatic_constants___Network___Milkomeda;
    if (likely(cpy_r_r951 != NULL)) goto CPyL434;
    PyErr_SetString(PyExc_NameError, "value for final name \"Milkomeda\" was not set");
    cpy_r_r952 = 0;
    if (unlikely(!cpy_r_r952)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 170, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL434: ;
    cpy_r_r953 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r954 = CPyStatic_constants___Network___FantomTestnet;
    if (likely(cpy_r_r954 != NULL)) goto CPyL437;
    PyErr_SetString(PyExc_NameError, "value for final name \"FantomTestnet\" was not set");
    cpy_r_r955 = 0;
    if (unlikely(!cpy_r_r955)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 171, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL437: ;
    cpy_r_r956 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r957 = CPyStatic_constants___Network___Canto;
    if (likely(cpy_r_r957 != NULL)) goto CPyL440;
    PyErr_SetString(PyExc_NameError, "value for final name \"Canto\" was not set");
    cpy_r_r958 = 0;
    if (unlikely(!cpy_r_r958)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 172, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL440: ;
    cpy_r_r959 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r960 = CPyStatic_constants___Network___Klaytn;
    if (likely(cpy_r_r960 != NULL)) goto CPyL443;
    PyErr_SetString(PyExc_NameError, "value for final name \"Klaytn\" was not set");
    cpy_r_r961 = 0;
    if (unlikely(!cpy_r_r961)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 173, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL443: ;
    cpy_r_r962 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r963 = CPyStatic_constants___Network___EvmosTestnet;
    if (likely(cpy_r_r963 != NULL)) goto CPyL446;
    PyErr_SetString(PyExc_NameError, "value for final name \"EvmosTestnet\" was not set");
    cpy_r_r964 = 0;
    if (unlikely(!cpy_r_r964)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 174, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL446: ;
    cpy_r_r965 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r966 = CPyStatic_constants___Network___Evmos;
    if (likely(cpy_r_r966 != NULL)) goto CPyL449;
    PyErr_SetString(PyExc_NameError, "value for final name \"Evmos\" was not set");
    cpy_r_r967 = 0;
    if (unlikely(!cpy_r_r967)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 175, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL449: ;
    cpy_r_r968 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r969 = CPyStatic_constants___Network___Arbitrum;
    if (likely(cpy_r_r969 != NULL)) goto CPyL452;
    PyErr_SetString(PyExc_NameError, "value for final name \"Arbitrum\" was not set");
    cpy_r_r970 = 0;
    if (unlikely(!cpy_r_r970)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 176, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL452: ;
    cpy_r_r971 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r972 = CPyStatic_constants___Network___Celo;
    if (likely(cpy_r_r972 != NULL)) goto CPyL455;
    PyErr_SetString(PyExc_NameError, "value for final name \"Celo\" was not set");
    cpy_r_r973 = 0;
    if (unlikely(!cpy_r_r973)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 177, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL455: ;
    cpy_r_r974 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r975 = CPyStatic_constants___Network___Oasis;
    if (likely(cpy_r_r975 != NULL)) goto CPyL458;
    PyErr_SetString(PyExc_NameError, "value for final name \"Oasis\" was not set");
    cpy_r_r976 = 0;
    if (unlikely(!cpy_r_r976)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 178, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL458: ;
    cpy_r_r977 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r978 = CPyStatic_constants___Network___AvalancheFuji;
    if (likely(cpy_r_r978 != NULL)) goto CPyL461;
    PyErr_SetString(PyExc_NameError, "value for final name \"AvalancheFuji\" was not set");
    cpy_r_r979 = 0;
    if (unlikely(!cpy_r_r979)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 179, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL461: ;
    cpy_r_r980 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r981 = CPyStatic_constants___Network___Avax;
    if (likely(cpy_r_r981 != NULL)) goto CPyL464;
    PyErr_SetString(PyExc_NameError, "value for final name \"Avax\" was not set");
    cpy_r_r982 = 0;
    if (unlikely(!cpy_r_r982)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 180, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL464: ;
    cpy_r_r983 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r984 = CPyStatic_constants___Network___GodwokenTestnet;
    if (likely(cpy_r_r984 != NULL)) goto CPyL467;
    PyErr_SetString(PyExc_NameError, "value for final name \"GodwokenTestnet\" was not set");
    cpy_r_r985 = 0;
    if (unlikely(!cpy_r_r985)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 181, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL467: ;
    cpy_r_r986 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r987 = CPyStatic_constants___Network___Godwoken;
    if (likely(cpy_r_r987 != NULL)) goto CPyL470;
    PyErr_SetString(PyExc_NameError, "value for final name \"Godwoken\" was not set");
    cpy_r_r988 = 0;
    if (unlikely(!cpy_r_r988)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 182, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL470: ;
    cpy_r_r989 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r990 = CPyStatic_constants___Network___Mumbai;
    if (likely(cpy_r_r990 != NULL)) goto CPyL473;
    PyErr_SetString(PyExc_NameError, "value for final name \"Mumbai\" was not set");
    cpy_r_r991 = 0;
    if (unlikely(!cpy_r_r991)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 183, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL473: ;
    cpy_r_r992 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r993 = CPyStatic_constants___Network___ArbitrumRinkeby;
    if (likely(cpy_r_r993 != NULL)) goto CPyL476;
    PyErr_SetString(PyExc_NameError, "value for final name \"ArbitrumRinkeby\" was not set");
    cpy_r_r994 = 0;
    if (unlikely(!cpy_r_r994)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 184, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL476: ;
    cpy_r_r995 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r996 = CPyStatic_constants___Network___ArbitrumGorli;
    if (likely(cpy_r_r996 != NULL)) goto CPyL479;
    PyErr_SetString(PyExc_NameError, "value for final name \"ArbitrumGorli\" was not set");
    cpy_r_r997 = 0;
    if (unlikely(!cpy_r_r997)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 185, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL479: ;
    cpy_r_r998 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r999 = CPyStatic_constants___Network___Sepolia;
    if (likely(cpy_r_r999 != NULL)) goto CPyL482;
    PyErr_SetString(PyExc_NameError, "value for final name \"Sepolia\" was not set");
    cpy_r_r1000 = 0;
    if (unlikely(!cpy_r_r1000)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 186, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL482: ;
    cpy_r_r1001 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1002 = CPyStatic_constants___Network___Aurora;
    if (likely(cpy_r_r1002 != NULL)) goto CPyL485;
    PyErr_SetString(PyExc_NameError, "value for final name \"Aurora\" was not set");
    cpy_r_r1003 = 0;
    if (unlikely(!cpy_r_r1003)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 187, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL485: ;
    cpy_r_r1004 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1005 = CPyStatic_constants___Network___Harmony;
    if (likely(cpy_r_r1005 != NULL)) goto CPyL488;
    PyErr_SetString(PyExc_NameError, "value for final name \"Harmony\" was not set");
    cpy_r_r1006 = 0;
    if (unlikely(!cpy_r_r1006)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 188, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL488: ;
    cpy_r_r1007 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1008 = CPyStatic_constants___Network___PulseChain;
    if (likely(cpy_r_r1008 != NULL)) goto CPyL491;
    PyErr_SetString(PyExc_NameError, "value for final name \"PulseChain\" was not set");
    cpy_r_r1009 = 0;
    if (unlikely(!cpy_r_r1009)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 189, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL491: ;
    cpy_r_r1010 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1011 = CPyStatic_constants___Network___PulseChainTestnet;
    if (likely(cpy_r_r1011 != NULL)) goto CPyL494;
    PyErr_SetString(PyExc_NameError, "value for final name \"PulseChainTestnet\" was not set");
    cpy_r_r1012 = 0;
    if (unlikely(!cpy_r_r1012)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 190, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL494: ;
    cpy_r_r1013 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1014 = CPyStatic_constants___Network___Base;
    if (likely(cpy_r_r1014 != NULL)) goto CPyL497;
    PyErr_SetString(PyExc_NameError, "value for final name \"Base\" was not set");
    cpy_r_r1015 = 0;
    if (unlikely(!cpy_r_r1015)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 191, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL497: ;
    cpy_r_r1016 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1017 = CPyStatic_constants___Network___Holesky;
    if (likely(cpy_r_r1017 != NULL)) goto CPyL500;
    PyErr_SetString(PyExc_NameError, "value for final name \"Holesky\" was not set");
    cpy_r_r1018 = 0;
    if (unlikely(!cpy_r_r1018)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 192, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL500: ;
    cpy_r_r1019 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1020 = CPyStatic_constants___Network___Sei;
    if (likely(cpy_r_r1020 != NULL)) goto CPyL503;
    PyErr_SetString(PyExc_NameError, "value for final name \"Sei\" was not set");
    cpy_r_r1021 = 0;
    if (unlikely(!cpy_r_r1021)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 193, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL503: ;
    cpy_r_r1022 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1023 = CPyStatic_constants___Network___Hoodi;
    if (likely(cpy_r_r1023 != NULL)) goto CPyL506;
    PyErr_SetString(PyExc_NameError, "value for final name \"Hoodi\" was not set");
    cpy_r_r1024 = 0;
    if (unlikely(!cpy_r_r1024)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 194, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL506: ;
    cpy_r_r1025 = CPyStatics[201]; /* '0xca11bde05977b3631167028862be2a173976ca11' */
    cpy_r_r1026 = CPyStatic_constants___Network___HyperEVM;
    if (likely(cpy_r_r1026 != NULL)) goto CPyL509;
    PyErr_SetString(PyExc_NameError, "value for final name \"HyperEVM\" was not set");
    cpy_r_r1027 = 0;
    if (unlikely(!cpy_r_r1027)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 195, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL509: ;
    cpy_r_r1028 = CPyStatics[199]; /* '0xcA11bde05977b3631167028862bE2a173976CA11' */
    cpy_r_r1029 = CPyDict_Build(59, cpy_r_r852, cpy_r_r854, cpy_r_r855, cpy_r_r857, cpy_r_r858, cpy_r_r860, cpy_r_r861, cpy_r_r863, cpy_r_r864, cpy_r_r866, cpy_r_r867, cpy_r_r869, cpy_r_r870, cpy_r_r872, cpy_r_r873, cpy_r_r875, cpy_r_r876, cpy_r_r878, cpy_r_r879, cpy_r_r881, cpy_r_r882, cpy_r_r884, cpy_r_r885, cpy_r_r887, cpy_r_r888, cpy_r_r890, cpy_r_r891, cpy_r_r893, cpy_r_r894, cpy_r_r896, cpy_r_r897, cpy_r_r899, cpy_r_r900, cpy_r_r902, cpy_r_r903, cpy_r_r905, cpy_r_r906, cpy_r_r908, cpy_r_r909, cpy_r_r911, cpy_r_r912, cpy_r_r914, cpy_r_r915, cpy_r_r917, cpy_r_r918, cpy_r_r920, cpy_r_r921, cpy_r_r923, cpy_r_r924, cpy_r_r926, cpy_r_r927, cpy_r_r929, cpy_r_r930, cpy_r_r932, cpy_r_r933, cpy_r_r935, cpy_r_r936, cpy_r_r938, cpy_r_r939, cpy_r_r941, cpy_r_r942, cpy_r_r944, cpy_r_r945, cpy_r_r947, cpy_r_r948, cpy_r_r950, cpy_r_r951, cpy_r_r953, cpy_r_r954, cpy_r_r956, cpy_r_r957, cpy_r_r959, cpy_r_r960, cpy_r_r962, cpy_r_r963, cpy_r_r965, cpy_r_r966, cpy_r_r968, cpy_r_r969, cpy_r_r971, cpy_r_r972, cpy_r_r974, cpy_r_r975, cpy_r_r977, cpy_r_r978, cpy_r_r980, cpy_r_r981, cpy_r_r983, cpy_r_r984, cpy_r_r986, cpy_r_r987, cpy_r_r989, cpy_r_r990, cpy_r_r992, cpy_r_r993, cpy_r_r995, cpy_r_r996, cpy_r_r998, cpy_r_r999, cpy_r_r1001, cpy_r_r1002, cpy_r_r1004, cpy_r_r1005, cpy_r_r1007, cpy_r_r1008, cpy_r_r1010, cpy_r_r1011, cpy_r_r1013, cpy_r_r1014, cpy_r_r1016, cpy_r_r1017, cpy_r_r1019, cpy_r_r1020, cpy_r_r1022, cpy_r_r1023, cpy_r_r1025, cpy_r_r1026, cpy_r_r1028);
    if (unlikely(cpy_r_r1029 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 136, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___MULTICALL3_ADDRESSES = cpy_r_r1029;
    CPy_INCREF(CPyStatic_constants___MULTICALL3_ADDRESSES);
    cpy_r_r1030 = CPyStatic_constants___globals;
    cpy_r_r1031 = CPyStatics[202]; /* 'MULTICALL3_ADDRESSES' */
    cpy_r_r1032 = CPyDict_SetItem(cpy_r_r1030, cpy_r_r1031, cpy_r_r1029);
    CPy_DECREF(cpy_r_r1029);
    cpy_r_r1033 = cpy_r_r1032 >= 0;
    if (unlikely(!cpy_r_r1033)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 136, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1034 = CPyModule_os;
    cpy_r_r1035 = CPyStatics[99]; /* 'environ' */
    cpy_r_r1036 = CPyObject_GetAttr(cpy_r_r1034, cpy_r_r1035);
    if (unlikely(cpy_r_r1036 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1037 = CPyStatics[203]; /* 'AIOHTTP_TIMEOUT' */
    cpy_r_r1038 = CPyStatics[101]; /* 'get' */
    cpy_r_r1039 = CPyStatics[333]; /* 30 */
    PyObject *cpy_r_r1040[3] = {cpy_r_r1036, cpy_r_r1037, cpy_r_r1039};
    cpy_r_r1041 = (PyObject **)&cpy_r_r1040;
    cpy_r_r1042 = PyObject_VectorcallMethod(cpy_r_r1038, cpy_r_r1041, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r1042 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL563;
    }
    CPy_DECREF(cpy_r_r1036);
    cpy_r_r1043 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r1044[1] = {cpy_r_r1042};
    cpy_r_r1045 = (PyObject **)&cpy_r_r1044;
    cpy_r_r1046 = PyObject_Vectorcall(cpy_r_r1043, cpy_r_r1045, 1, 0);
    if (unlikely(cpy_r_r1046 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL564;
    }
    CPy_DECREF(cpy_r_r1042);
    if (likely(PyLong_Check(cpy_r_r1046)))
        cpy_r_r1047 = CPyTagged_FromObject(cpy_r_r1046);
    else {
        CPy_TypeError("int", cpy_r_r1046); cpy_r_r1047 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1046);
    if (unlikely(cpy_r_r1047 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1048 = CPyStatic_constants___globals;
    cpy_r_r1049 = CPyStatics[92]; /* 'ClientTimeout' */
    cpy_r_r1050 = CPyDict_GetItem(cpy_r_r1048, cpy_r_r1049);
    if (unlikely(cpy_r_r1050 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL565;
    }
    cpy_r_r1051 = CPyTagged_StealAsObject(cpy_r_r1047);
    PyObject *cpy_r_r1052[1] = {cpy_r_r1051};
    cpy_r_r1053 = (PyObject **)&cpy_r_r1052;
    cpy_r_r1054 = PyObject_Vectorcall(cpy_r_r1050, cpy_r_r1053, 1, 0);
    CPy_DECREF(cpy_r_r1050);
    if (unlikely(cpy_r_r1054 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL566;
    }
    CPy_DECREF(cpy_r_r1051);
    CPyStatic_constants___AIOHTTP_TIMEOUT = cpy_r_r1054;
    CPy_INCREF(CPyStatic_constants___AIOHTTP_TIMEOUT);
    cpy_r_r1055 = CPyStatic_constants___globals;
    cpy_r_r1056 = CPyStatics[203]; /* 'AIOHTTP_TIMEOUT' */
    cpy_r_r1057 = CPyDict_SetItem(cpy_r_r1055, cpy_r_r1056, cpy_r_r1054);
    CPy_DECREF(cpy_r_r1054);
    cpy_r_r1058 = cpy_r_r1057 >= 0;
    if (unlikely(!cpy_r_r1058)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 200, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1059 = CPyStatic_constants___Network___Gnosis;
    if (likely(cpy_r_r1059 != NULL)) goto CPyL521;
    PyErr_SetString(PyExc_NameError, "value for final name \"Gnosis\" was not set");
    cpy_r_r1060 = 0;
    if (unlikely(!cpy_r_r1060)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 203, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL521: ;
    cpy_r_r1061 = CPyStatic_constants___Network___Harmony;
    if (likely(cpy_r_r1061 != NULL)) goto CPyL524;
    PyErr_SetString(PyExc_NameError, "value for final name \"Harmony\" was not set");
    cpy_r_r1062 = 0;
    if (unlikely(!cpy_r_r1062)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 204, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL524: ;
    cpy_r_r1063 = CPyStatic_constants___Network___Moonbeam;
    if (likely(cpy_r_r1063 != NULL)) goto CPyL527;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonbeam\" was not set");
    cpy_r_r1064 = 0;
    if (unlikely(!cpy_r_r1064)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 205, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL527: ;
    cpy_r_r1065 = CPyStatic_constants___Network___Moonriver;
    if (likely(cpy_r_r1065 != NULL)) goto CPyL530;
    PyErr_SetString(PyExc_NameError, "value for final name \"Moonriver\" was not set");
    cpy_r_r1066 = 0;
    if (unlikely(!cpy_r_r1066)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 206, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL530: ;
    cpy_r_r1067 = CPyStatic_constants___Network___Kovan;
    if (likely(cpy_r_r1067 != NULL)) goto CPyL533;
    PyErr_SetString(PyExc_NameError, "value for final name \"Kovan\" was not set");
    cpy_r_r1068 = 0;
    if (unlikely(!cpy_r_r1068)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 207, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL533: ;
    cpy_r_r1069 = CPyStatic_constants___Network___Fuse;
    if (likely(cpy_r_r1069 != NULL)) goto CPyL536;
    PyErr_SetString(PyExc_NameError, "value for final name \"Fuse\" was not set");
    cpy_r_r1070 = 0;
    if (unlikely(!cpy_r_r1070)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 208, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL536: ;
    cpy_r_r1071 = CPyStatic_constants___Network___ZkSync;
    if (likely(cpy_r_r1071 != NULL)) goto CPyL539;
    PyErr_SetString(PyExc_NameError, "value for final name \"ZkSync\" was not set");
    cpy_r_r1072 = 0;
    if (unlikely(!cpy_r_r1072)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 209, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPy_Unreachable();
CPyL539: ;
    cpy_r_r1073 = PySet_New(NULL);
    if (unlikely(cpy_r_r1073 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1074 = PySet_Add(cpy_r_r1073, cpy_r_r1059);
    cpy_r_r1075 = cpy_r_r1074 >= 0;
    if (unlikely(!cpy_r_r1075)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    cpy_r_r1076 = PySet_Add(cpy_r_r1073, cpy_r_r1061);
    cpy_r_r1077 = cpy_r_r1076 >= 0;
    if (unlikely(!cpy_r_r1077)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    cpy_r_r1078 = PySet_Add(cpy_r_r1073, cpy_r_r1063);
    cpy_r_r1079 = cpy_r_r1078 >= 0;
    if (unlikely(!cpy_r_r1079)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    cpy_r_r1080 = PySet_Add(cpy_r_r1073, cpy_r_r1065);
    cpy_r_r1081 = cpy_r_r1080 >= 0;
    if (unlikely(!cpy_r_r1081)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    cpy_r_r1082 = PySet_Add(cpy_r_r1073, cpy_r_r1067);
    cpy_r_r1083 = cpy_r_r1082 >= 0;
    if (unlikely(!cpy_r_r1083)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    cpy_r_r1084 = PySet_Add(cpy_r_r1073, cpy_r_r1069);
    cpy_r_r1085 = cpy_r_r1084 >= 0;
    if (unlikely(!cpy_r_r1085)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    cpy_r_r1086 = PySet_Add(cpy_r_r1073, cpy_r_r1071);
    cpy_r_r1087 = cpy_r_r1086 >= 0;
    if (unlikely(!cpy_r_r1087)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL567;
    }
    CPyStatic_constants___NO_STATE_OVERRIDE = cpy_r_r1073;
    CPy_INCREF(CPyStatic_constants___NO_STATE_OVERRIDE);
    cpy_r_r1088 = CPyStatic_constants___globals;
    cpy_r_r1089 = CPyStatics[204]; /* 'NO_STATE_OVERRIDE' */
    cpy_r_r1090 = CPyDict_SetItem(cpy_r_r1088, cpy_r_r1089, cpy_r_r1073);
    CPy_DECREF(cpy_r_r1073);
    cpy_r_r1091 = cpy_r_r1090 >= 0;
    if (unlikely(!cpy_r_r1091)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 202, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1092 = CPyModule_os;
    cpy_r_r1093 = CPyStatics[99]; /* 'environ' */
    cpy_r_r1094 = CPyObject_GetAttr(cpy_r_r1092, cpy_r_r1093);
    if (unlikely(cpy_r_r1094 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 214, CPyStatic_constants___globals);
        goto CPyL554;
    }
    cpy_r_r1095 = CPyStatics[205]; /* 'MULTICALL_CALL_SEMAPHORE' */
    cpy_r_r1096 = CPyStatics[101]; /* 'get' */
    cpy_r_r1097 = CPyStatics[385]; /* 1000 */
    PyObject *cpy_r_r1098[3] = {cpy_r_r1094, cpy_r_r1095, cpy_r_r1097};
    cpy_r_r1099 = (PyObject **)&cpy_r_r1098;
    cpy_r_r1100 = PyObject_VectorcallMethod(cpy_r_r1096, cpy_r_r1099, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r1100 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 214, CPyStatic_constants___globals);
        goto CPyL568;
    }
    CPy_DECREF(cpy_r_r1094);
    cpy_r_r1101 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r1102[1] = {cpy_r_r1100};
    cpy_r_r1103 = (PyObject **)&cpy_r_r1102;
    cpy_r_r1104 = PyObject_Vectorcall(cpy_r_r1101, cpy_r_r1103, 1, 0);
    if (unlikely(cpy_r_r1104 == NULL)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 214, CPyStatic_constants___globals);
        goto CPyL569;
    }
    CPy_DECREF(cpy_r_r1100);
    if (likely(PyLong_Check(cpy_r_r1104)))
        cpy_r_r1105 = CPyTagged_FromObject(cpy_r_r1104);
    else {
        CPy_TypeError("int", cpy_r_r1104); cpy_r_r1105 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1104);
    if (unlikely(cpy_r_r1105 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 214, CPyStatic_constants___globals);
        goto CPyL554;
    }
    CPyStatic_constants___ASYNC_SEMAPHORE = cpy_r_r1105;
    CPyTagged_INCREF(CPyStatic_constants___ASYNC_SEMAPHORE);
    cpy_r_r1106 = CPyStatic_constants___globals;
    cpy_r_r1107 = CPyStatics[206]; /* 'ASYNC_SEMAPHORE' */
    cpy_r_r1108 = CPyTagged_StealAsObject(cpy_r_r1105);
    cpy_r_r1109 = CPyDict_SetItem(cpy_r_r1106, cpy_r_r1107, cpy_r_r1108);
    CPy_DECREF(cpy_r_r1108);
    cpy_r_r1110 = cpy_r_r1109 >= 0;
    if (unlikely(!cpy_r_r1110)) {
        CPy_AddTraceback("multicall/constants.py", "<module>", 214, CPyStatic_constants___globals);
        goto CPyL554;
    }
    return 1;
CPyL554: ;
    cpy_r_r1111 = 2;
    return cpy_r_r1111;
CPyL555: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL18;
CPyL556: ;
    CPy_DecRef(cpy_r_r56.f0);
    CPy_DecRef(cpy_r_r56.f1);
    CPy_DecRef(cpy_r_r56.f2);
    goto CPyL23;
CPyL557: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL554;
CPyL558: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL554;
CPyL559: ;
    CPy_DecRef(cpy_r_r98);
    goto CPyL554;
CPyL560: ;
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r110);
    goto CPyL554;
CPyL561: ;
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r112);
    goto CPyL554;
CPyL562: ;
    CPy_DecRef(cpy_r_r615);
    goto CPyL554;
CPyL563: ;
    CPy_DecRef(cpy_r_r1036);
    goto CPyL554;
CPyL564: ;
    CPy_DecRef(cpy_r_r1042);
    goto CPyL554;
CPyL565: ;
    CPyTagged_DecRef(cpy_r_r1047);
    goto CPyL554;
CPyL566: ;
    CPy_DecRef(cpy_r_r1051);
    goto CPyL554;
CPyL567: ;
    CPy_DecRef(cpy_r_r1073);
    goto CPyL554;
CPyL568: ;
    CPy_DecRef(cpy_r_r1094);
    goto CPyL554;
CPyL569: ;
    CPy_DecRef(cpy_r_r1100);
    goto CPyL554;
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
};
static PyTypeObject *CPyType_exceptions___StateOverrideNotSupported_template = &CPyType_exceptions___StateOverrideNotSupported_template_;

static int exceptions_exec(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___exceptions_internal, "__name__");
    CPyStatic_exceptions___globals = PyModule_GetDict(CPyModule_multicall___exceptions_internal);
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
    Py_CLEAR(CPyModule_multicall___exceptions_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_exceptions___StateOverrideNotSupported);
    return -1;
}
static PyMethodDef exceptionsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

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
    if (CPyModule_multicall___exceptions_internal) {
        Py_INCREF(CPyModule_multicall___exceptions_internal);
        return CPyModule_multicall___exceptions_internal;
    }
    CPyModule_multicall___exceptions_internal = PyModule_Create(&exceptionsmodule);
    if (unlikely(CPyModule_multicall___exceptions_internal == NULL))
        goto fail;
    if (exceptions_exec(CPyModule_multicall___exceptions_internal) != 0)
        goto fail;
    return CPyModule_multicall___exceptions_internal;
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
    cpy_r_r5 = CPyStatics[407]; /* ('final',) */
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
    cpy_r_r10 = CPyStatics[207]; /* 'Exception' */
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
    cpy_r_r17 = CPyStatics[208]; /* '__dict__' */
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
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r21, cpy_r_r22, cpy_r_r15);
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
static int loggers_exec(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___loggers_internal, "__name__");
    CPyStatic_loggers___globals = PyModule_GetDict(CPyModule_multicall___loggers_internal);
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
    Py_CLEAR(CPyModule_multicall___loggers_internal);
    Py_CLEAR(modname);
    return -1;
}
static PyMethodDef loggersmodule_methods[] = {
    {"setup_logger", (PyCFunction)CPyPy_loggers___setup_logger, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

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
    if (CPyModule_multicall___loggers_internal) {
        Py_INCREF(CPyModule_multicall___loggers_internal);
        return CPyModule_multicall___loggers_internal;
    }
    CPyModule_multicall___loggers_internal = PyModule_Create(&loggersmodule);
    if (unlikely(CPyModule_multicall___loggers_internal == NULL))
        goto fail;
    if (loggers_exec(CPyModule_multicall___loggers_internal) != 0)
        goto fail;
    return CPyModule_multicall___loggers_internal;
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
    cpy_r_r1 = CPyStatics[209]; /* 'getLogger' */
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
    cpy_r_r9 = CPyStatics[210]; /* 'MULTICALL_DEBUG' */
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
    if (cpy_r_r15 != NULL) goto __LL48;
    if (PyBool_Check(cpy_r_r14))
        cpy_r_r15 = cpy_r_r14;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL48;
    CPy_TypeErrorTraceback("multicall/loggers.py", "setup_logger", 7, CPyStatic_loggers___globals, "union[str, bool]", cpy_r_r14);
    goto CPyL13;
__LL48: ;
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
    cpy_r_r20 = CPyStatics[211]; /* 'StreamHandler' */
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
    cpy_r_r23 = CPyStatics[212]; /* 'addHandler' */
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
    cpy_r_r27 = CPyStatics[213]; /* 'setLevel' */
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
    cpy_r_r11 = CPyStatics[409]; /* (('logging', 'logging', 'logging'), ('os', 'os', 'os')) */
    cpy_r_r12 = CPyStatic_loggers___globals;
    cpy_r_r13 = CPyStatics[215]; /* 'multicall/loggers.py' */
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
static PyObject *multicall___Multicall_setup(PyTypeObject *type);
PyObject *CPyDef_multicall___Multicall(PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin);

static PyObject *
multicall___Multicall_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___Multicall) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = multicall___Multicall_setup(type);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__call__",
     (PyCFunction)CPyPy_multicall___Multicall_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_multicall___Multicall_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"coroutine",
     (PyCFunction)CPyPy_multicall___Multicall___coroutine,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_contract_method",
     (PyCFunction)CPyPy_multicall___Multicall____contract_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_base_fee",
     (PyCFunction)CPyPy_multicall___Multicall___add_base_fee,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_block_hash",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_hash,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_block_number",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_number,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_chain_id",
     (PyCFunction)CPyPy_multicall___Multicall___add_chain_id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_block_coinbase",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_coinbase,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_block_difficulty",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_difficulty,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_block_gas_limit",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_gas_limit,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_block_timestamp",
     (PyCFunction)CPyPy_multicall___Multicall___add_block_timestamp,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_eth_balance",
     (PyCFunction)CPyPy_multicall___Multicall___add_eth_balance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_last_block_hash",
     (PyCFunction)CPyPy_multicall___Multicall___add_last_block_hash,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fetch_outputs",
     (PyCFunction)CPyPy_multicall___Multicall___fetch_outputs,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_multicall___Multicall_template = &CPyType_multicall___Multicall_template_;

static PyObject *
multicall___Multicall_setup(PyTypeObject *type)
{
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
    PyObject *self = multicall___Multicall_setup(CPyType_multicall___Multicall);
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
    if (tmp != NULL) goto __LL49;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL49;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL49: ;
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
    tmp = value;
    if (tmp != NULL) goto __LL50;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL50;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL50: ;
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
    PyObject *tmp = value;
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
static PyObject *multicall___NotSoBrightBatcher_setup(PyTypeObject *type);
PyObject *CPyDef_multicall___NotSoBrightBatcher(void);

static PyObject *
multicall___NotSoBrightBatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___NotSoBrightBatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = multicall___NotSoBrightBatcher_setup(type);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"batch_calls",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher___batch_calls,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"split_calls",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher___split_calls,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"rebatch",
     (PyCFunction)CPyPy_multicall___NotSoBrightBatcher___rebatch,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_multicall___NotSoBrightBatcher_template = &CPyType_multicall___NotSoBrightBatcher_template_;

static PyObject *
multicall___NotSoBrightBatcher_setup(PyTypeObject *type)
{
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
    PyObject *self = multicall___NotSoBrightBatcher_setup(CPyType_multicall___NotSoBrightBatcher);
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
static PyObject *multicall___coroutine_Multicall_gen_setup(PyTypeObject *type);
PyObject *CPyDef_multicall___coroutine_Multicall_gen(void);

static PyObject *
multicall___coroutine_Multicall_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___coroutine_Multicall_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return multicall___coroutine_Multicall_gen_setup(type);
}

static int
multicall___coroutine_Multicall_gen_traverse(multicall___multicall___coroutine_Multicall_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_self);
    Py_VISIT(self->___mypyc_temp__0);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->_batch);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5.f0);
    Py_VISIT(self->___mypyc_temp__5.f1);
    Py_VISIT(self->___mypyc_temp__5.f2);
    Py_VISIT(self->_batches);
    return 0;
}

static int
multicall___coroutine_Multicall_gen_clear(multicall___multicall___coroutine_Multicall_genObject *self)
{
    Py_CLEAR(self->_self);
    Py_CLEAR(self->___mypyc_temp__0);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->_batch);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5.f0);
    Py_CLEAR(self->___mypyc_temp__5.f1);
    Py_CLEAR(self->___mypyc_temp__5.f2);
    Py_CLEAR(self->_batches);
    return 0;
}

static void
multicall___coroutine_Multicall_gen_dealloc(multicall___multicall___coroutine_Multicall_genObject *self)
{
    PyObject_GC_UnTrack(self);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_multicall___coroutine_Multicall_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_multicall___coroutine_Multicall_gen_template = &CPyType_multicall___coroutine_Multicall_gen_template_;

static PyObject *
multicall___coroutine_Multicall_gen_setup(PyTypeObject *type)
{
    multicall___multicall___coroutine_Multicall_genObject *self;
    self = (multicall___multicall___coroutine_Multicall_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = multicall___coroutine_Multicall_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->_i = CPY_INT_TAG;
    self->___mypyc_temp__3 = CPY_INT_TAG;
    self->___mypyc_temp__5 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen(void)
{
    PyObject *self = multicall___coroutine_Multicall_gen_setup(CPyType_multicall___coroutine_Multicall_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods multicall___fetch_outputs_Multicall_gen_as_async = {
    .am_await = CPyDef_multicall___fetch_outputs_Multicall_gen_____await__,
};
static PyObject *multicall___fetch_outputs_Multicall_gen_setup(PyTypeObject *type);
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen(void);

static PyObject *
multicall___fetch_outputs_Multicall_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_multicall___fetch_outputs_Multicall_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return multicall___fetch_outputs_Multicall_gen_setup(type);
}

static int
multicall___fetch_outputs_Multicall_gen_traverse(multicall___multicall___fetch_outputs_Multicall_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_self);
    Py_VISIT(self->_calls);
    if (CPyTagged_CheckLong(self->_ConnErr_retries)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_ConnErr_retries));
    }
    Py_VISIT(self->_id);
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7);
    Py_VISIT(self->___mypyc_temp__9);
    Py_VISIT(self->___mypyc_temp__10.f0);
    Py_VISIT(self->___mypyc_temp__10.f1);
    Py_VISIT(self->___mypyc_temp__10.f2);
    Py_VISIT(self->_args);
    Py_VISIT(self->___mypyc_temp__11);
    Py_VISIT(self->___mypyc_temp__12.f0);
    Py_VISIT(self->___mypyc_temp__12.f1);
    Py_VISIT(self->___mypyc_temp__12.f2);
    Py_VISIT(self->_outputs);
    Py_VISIT(self->___mypyc_temp__13);
    Py_VISIT(self->___mypyc_temp__14.f0);
    Py_VISIT(self->___mypyc_temp__14.f1);
    Py_VISIT(self->___mypyc_temp__14.f2);
    Py_VISIT(self->__);
    Py_VISIT(self->___mypyc_temp__15);
    Py_VISIT(self->___mypyc_temp__16);
    Py_VISIT(self->___mypyc_temp__18);
    Py_VISIT(self->___mypyc_temp__19);
    Py_VISIT(self->_call);
    Py_VISIT(self->_success);
    Py_VISIT(self->_output);
    Py_VISIT(self->___mypyc_temp__20);
    Py_VISIT(self->___mypyc_temp__21.f0);
    Py_VISIT(self->___mypyc_temp__21.f1);
    Py_VISIT(self->___mypyc_temp__21.f2);
    Py_VISIT(self->_e);
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
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    Py_VISIT(self->___mypyc_temp__29);
    Py_VISIT(self->___mypyc_temp__30);
    Py_VISIT(self->_chunk);
    Py_VISIT(self->___mypyc_temp__31);
    Py_VISIT(self->___mypyc_temp__32.f0);
    Py_VISIT(self->___mypyc_temp__32.f1);
    Py_VISIT(self->___mypyc_temp__32.f2);
    Py_VISIT(self->_batch_results);
    Py_VISIT(self->___mypyc_temp__33);
    Py_VISIT(self->___mypyc_temp__34);
    Py_VISIT(self->___mypyc_temp__36);
    Py_VISIT(self->_result.f0);
    Py_VISIT(self->_result.f1);
    return 0;
}

static int
multicall___fetch_outputs_Multicall_gen_clear(multicall___multicall___fetch_outputs_Multicall_genObject *self)
{
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_calls);
    if (CPyTagged_CheckLong(self->_ConnErr_retries)) {
        CPyTagged __tmp = self->_ConnErr_retries;
        self->_ConnErr_retries = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_id);
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7);
    Py_CLEAR(self->___mypyc_temp__9);
    Py_CLEAR(self->___mypyc_temp__10.f0);
    Py_CLEAR(self->___mypyc_temp__10.f1);
    Py_CLEAR(self->___mypyc_temp__10.f2);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->___mypyc_temp__11);
    Py_CLEAR(self->___mypyc_temp__12.f0);
    Py_CLEAR(self->___mypyc_temp__12.f1);
    Py_CLEAR(self->___mypyc_temp__12.f2);
    Py_CLEAR(self->_outputs);
    Py_CLEAR(self->___mypyc_temp__13);
    Py_CLEAR(self->___mypyc_temp__14.f0);
    Py_CLEAR(self->___mypyc_temp__14.f1);
    Py_CLEAR(self->___mypyc_temp__14.f2);
    Py_CLEAR(self->__);
    Py_CLEAR(self->___mypyc_temp__15);
    Py_CLEAR(self->___mypyc_temp__16);
    Py_CLEAR(self->___mypyc_temp__18);
    Py_CLEAR(self->___mypyc_temp__19);
    Py_CLEAR(self->_call);
    Py_CLEAR(self->_success);
    Py_CLEAR(self->_output);
    Py_CLEAR(self->___mypyc_temp__20);
    Py_CLEAR(self->___mypyc_temp__21.f0);
    Py_CLEAR(self->___mypyc_temp__21.f1);
    Py_CLEAR(self->___mypyc_temp__21.f2);
    Py_CLEAR(self->_e);
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
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__29);
    Py_CLEAR(self->___mypyc_temp__30);
    Py_CLEAR(self->_chunk);
    Py_CLEAR(self->___mypyc_temp__31);
    Py_CLEAR(self->___mypyc_temp__32.f0);
    Py_CLEAR(self->___mypyc_temp__32.f1);
    Py_CLEAR(self->___mypyc_temp__32.f2);
    Py_CLEAR(self->_batch_results);
    Py_CLEAR(self->___mypyc_temp__33);
    Py_CLEAR(self->___mypyc_temp__34);
    Py_CLEAR(self->___mypyc_temp__36);
    Py_CLEAR(self->_result.f0);
    Py_CLEAR(self->_result.f1);
    return 0;
}

static void
multicall___fetch_outputs_Multicall_gen_dealloc(multicall___multicall___fetch_outputs_Multicall_genObject *self)
{
    PyObject_GC_UnTrack(self);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__await__",
     (PyCFunction)CPyPy_multicall___fetch_outputs_Multicall_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_multicall___fetch_outputs_Multicall_gen_template = &CPyType_multicall___fetch_outputs_Multicall_gen_template_;

static PyObject *
multicall___fetch_outputs_Multicall_gen_setup(PyTypeObject *type)
{
    multicall___multicall___fetch_outputs_Multicall_genObject *self;
    self = (multicall___multicall___fetch_outputs_Multicall_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = multicall___fetch_outputs_Multicall_gen_vtable;
    self->_ConnErr_retries = CPY_INT_TAG;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__8 = 2;
    self->___mypyc_temp__10 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__12 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__14 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__17 = CPY_INT_TAG;
    self->___mypyc_temp__21 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__22 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__24 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__26 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__28 = CPY_INT_TAG;
    self->_i = CPY_INT_TAG;
    self->___mypyc_temp__32 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__35 = CPY_INT_TAG;
    self->___mypyc_temp__37 = CPY_INT_TAG;
    self->_result = (tuple_T2OO) { NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen(void)
{
    PyObject *self = multicall___fetch_outputs_Multicall_gen_setup(CPyType_multicall___fetch_outputs_Multicall_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static int multicall_exec(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___multicall_internal, "__name__");
    CPyStatic_multicall___globals = PyModule_GetDict(CPyModule_multicall___multicall_internal);
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
    Py_CLEAR(CPyModule_multicall___multicall_internal);
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
static PyMethodDef multicallmodule_methods[] = {
    {"get_args", (PyCFunction)CPyPy_multicall___get_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"unpack_aggregate_outputs", (PyCFunction)CPyPy_multicall___unpack_aggregate_outputs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_raise_or_proceed", (PyCFunction)CPyPy_multicall____raise_or_proceed, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

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
    if (CPyModule_multicall___multicall_internal) {
        Py_INCREF(CPyModule_multicall___multicall_internal);
        return CPyModule_multicall___multicall_internal;
    }
    CPyModule_multicall___multicall_internal = PyModule_Create(&multicallmodule);
    if (unlikely(CPyModule_multicall___multicall_internal == NULL))
        goto fail;
    if (multicall_exec(CPyModule_multicall___multicall_internal) != 0)
        goto fail;
    return CPyModule_multicall___multicall_internal;
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
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    int64_t cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    int64_t cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    CPyPtr cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
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
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r6 >> 1;
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_calls)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r11 * 8;
    cpy_r_r15 = cpy_r_r13 + cpy_r_r14;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    CPy_INCREF(cpy_r_r16);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_call___Call))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals, "multicall.call.Call", cpy_r_r16);
        goto CPyL24;
    }
    cpy_r_r18 = ((multicall___call___CallObject *)cpy_r_r17)->_target;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_call___Call___data(cpy_r_r17);
    CPy_DECREF_NO_IMM(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL25;
    }
CPyL8: ;
    cpy_r_r20 = PyList_New(2);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL26;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    *(PyObject * *)cpy_r_r22 = cpy_r_r18;
    cpy_r_r23 = cpy_r_r22 + 8;
    *(PyObject * *)cpy_r_r23 = cpy_r_r19;
    cpy_r_r24 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r20);
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL24;
    }
    cpy_r_r25 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r25;
    goto CPyL5;
CPyL11: ;
    cpy_r_r26 = PyList_New(1);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 43, CPyStatic_multicall___globals);
        goto CPyL24;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r5;
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = PyList_New(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL23;
    }
    cpy_r_r32 = 0;
CPyL15: ;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r35;
    if (!cpy_r_r36) goto CPyL21;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r32 >> 1;
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_calls)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r37 * 8;
    cpy_r_r41 = cpy_r_r39 + cpy_r_r40;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    CPy_INCREF(cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_call___Call))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals, "multicall.call.Call", cpy_r_r42);
        goto CPyL27;
    }
    cpy_r_r44 = ((multicall___call___CallObject *)cpy_r_r43)->_target;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyDef_call___Call___data(cpy_r_r43);
    CPy_DECREF_NO_IMM(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL28;
    }
CPyL18: ;
    cpy_r_r46 = PyList_New(2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL29;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_r44;
    cpy_r_r49 = cpy_r_r48 + 8;
    *(PyObject * *)cpy_r_r49 = cpy_r_r45;
    cpy_r_r50 = CPyList_SetItemUnsafe(cpy_r_r31, cpy_r_r32, cpy_r_r46);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL27;
    }
    cpy_r_r51 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r51;
    goto CPyL15;
CPyL21: ;
    cpy_r_r52 = PyList_New(2);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "get_args", 44, CPyStatic_multicall___globals);
        goto CPyL27;
    }
    cpy_r_r53 = cpy_r_require_success ? Py_True : Py_False;
    cpy_r_r54 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r55 = *(CPyPtr *)cpy_r_r54;
    *(PyObject * *)cpy_r_r55 = cpy_r_r53;
    cpy_r_r56 = cpy_r_r55 + 8;
    *(PyObject * *)cpy_r_r56 = cpy_r_r31;
    return cpy_r_r52;
CPyL23: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL24: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r18);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r44);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
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
    PyObject *__tmp51 = Py_None;
    CPy_INCREF(__tmp51);
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp51);
    PyObject *__tmp52 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp52);
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
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_multicall_map;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    if (cpy_r_block_id != NULL) goto CPyL42;
    cpy_r_r0 = Py_None;
    cpy_r_block_id = cpy_r_r0;
CPyL2: ;
    if (cpy_r_require_success != 2) goto CPyL4;
    cpy_r_require_success = 1;
CPyL4: ;
    if (cpy_r_gas_limit != CPY_INT_TAG) goto CPyL43;
    cpy_r_r1 = CPyStatic_constants___GAS_LIMIT;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        goto CPyL44;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"GAS_LIMIT\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 69, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL8: ;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_gas_limit = cpy_r_r1;
CPyL9: ;
    if (cpy_r__w3 != NULL) goto CPyL45;
    cpy_r_r3 = CPyStatic_multicall___multicall___multicall___Multicall_____init______w3;
    CPy_INCREF(cpy_r_r3);
    cpy_r__w3 = cpy_r_r3;
CPyL11: ;
    if (cpy_r_origin != NULL) goto CPyL46;
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
    if (!cpy_r_r6) goto CPyL47;
    CPy_INCREF(cpy_r_origin);
    cpy_r_r7 = cpy_r_origin;
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 71, CPyStatic_multicall___globals);
        goto CPyL48;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL47;
    cpy_r_r11 = CPyStatic_multicall___to_checksum_address;
    if (unlikely(cpy_r_r11 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"to_checksum_address\" was not set");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 78, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL20: ;
    PyObject *cpy_r_r13[1] = {cpy_r_origin};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r11, cpy_r_r14, 1, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 78, CPyStatic_multicall___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_origin);
    cpy_r_r16 = cpy_r_r15;
    goto CPyL23;
CPyL22: ;
    cpy_r_r17 = Py_None;
    cpy_r_r16 = cpy_r_r17;
CPyL23: ;
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_origin = cpy_r_r16;
    cpy_r_r18 = CPyStatic_multicall___globals;
    cpy_r_r19 = CPyStatics[17]; /* 'chain_id' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 79, CPyStatic_multicall___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r21[1] = {cpy_r__w3};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 79, CPyStatic_multicall___globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r__w3);
    if (likely(PyLong_Check(cpy_r_r23)))
        cpy_r_r24 = CPyTagged_FromObject(cpy_r_r23);
    else {
        CPy_TypeError("int", cpy_r_r23); cpy_r_r24 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 79, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPyTagged_INCREF(cpy_r_r24);
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_chainid = cpy_r_r24;
    cpy_r_r25 = CPyStatic_constants___MULTICALL3_ADDRESSES;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL3_ADDRESSES\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL29: ;
    CPyTagged_INCREF(cpy_r_r24);
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r28 = PyDict_Contains(cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL52;
    }
    cpy_r_r30 = cpy_r_r28;
    if (!cpy_r_r30) goto CPyL35;
    cpy_r_r31 = CPyStatic_constants___MULTICALL3_ADDRESSES;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL3_ADDRESSES\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL34: ;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r31;
    goto CPyL39;
CPyL35: ;
    cpy_r_r34 = CPyStatic_constants___MULTICALL2_ADDRESSES;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL54;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MULTICALL2_ADDRESSES\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 82, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL38: ;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r33 = cpy_r_r34;
CPyL39: ;
    cpy_r_multicall_map = cpy_r_r33;
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r37 = CPyDict_GetItem(cpy_r_multicall_map, cpy_r_r36);
    CPy_DECREF(cpy_r_multicall_map);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "__init__", 84, CPyStatic_multicall___globals);
        goto CPyL41;
    }
    ((multicall___multicall___MulticallObject *)cpy_r_self)->_multicall_address = cpy_r_r37;
    return 1;
CPyL41: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL42: ;
    CPy_INCREF(cpy_r_block_id);
    goto CPyL2;
CPyL43: ;
    CPyTagged_INCREF(cpy_r_gas_limit);
    goto CPyL9;
CPyL44: ;
    CPy_DecRef(cpy_r_block_id);
    goto CPyL6;
CPyL45: ;
    CPy_INCREF(cpy_r__w3);
    goto CPyL11;
CPyL46: ;
    CPy_INCREF(cpy_r_origin);
    goto CPyL13;
CPyL47: ;
    CPy_DECREF(cpy_r_origin);
    goto CPyL22;
CPyL48: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_origin);
    goto CPyL41;
CPyL49: ;
    CPy_DecRef(cpy_r__w3);
    CPy_DecRef(cpy_r_origin);
    goto CPyL18;
CPyL50: ;
    CPy_DecRef(cpy_r__w3);
    goto CPyL41;
CPyL51: ;
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL27;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL41;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL32;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_r24);
    goto CPyL36;
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
        goto __LL53;
    }
    if (PyLong_Check(obj_block_id))
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL53;
    if (obj_block_id == Py_None)
        arg_block_id = obj_block_id;
    else {
        arg_block_id = NULL;
    }
    if (arg_block_id != NULL) goto __LL53;
    CPy_TypeError("int or None", obj_block_id); 
    goto fail;
__LL53: ;
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
        goto __LL54;
    }
    arg_origin = obj_origin;
    if (arg_origin != NULL) goto __LL54;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL54;
    CPy_TypeError("object or None", obj_origin); 
    goto fail;
__LL54: ;
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
    cpy_r_r1 = CPyStatics[216]; /* 'time' */
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
    cpy_r_r7 = CPyStatics[217]; /* 'await_awaitable' */
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
    cpy_r_r14 = CPyStatics[218]; /* 'Multicall took %ss' */
    cpy_r_r15 = CPyStatic_multicall___globals;
    cpy_r_r16 = CPyStatics[216]; /* 'time' */
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
    CPy_DECREF(cpy_r_r0);
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
    cpy_r_r1 = CPyStatics[219]; /* 'aggregate((address,bytes)[])(uint256,bytes[])' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = cpy_r_r1;
    goto CPyL3;
CPyL2: ;
    cpy_r_r3 = CPyStatics[220]; /* 'tryBlockAndAggregate(bool,(address,bytes)[])(uint256,uint256,(bool,bytes)[])' */
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

PyObject *CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
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
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    int64_t cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    char cpy_r_r72;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    tuple_T3OOO cpy_r_r76;
    tuple_T3OOO cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL85;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = 0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r8 = CPyStatic_multicall___batcher;
    if (likely(cpy_r_r8 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"batcher\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 107, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r10 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "self", 107, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF_NO_IMM(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = ((multicall___multicall___MulticallObject *)cpy_r_r10)->_calls;
    CPy_INCREF_NO_IMM(cpy_r_r11);
    CPy_DECREF_NO_IMM(cpy_r_r10);
    cpy_r_r12 = CPyStatic_multicall___batcher;
    if (unlikely(cpy_r_r12 == NULL)) {
        goto CPyL90;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"batcher\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 107, CPyStatic_multicall___globals);
        goto CPyL89;
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
        goto CPyL89;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = 0;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
CPyL17: ;
    cpy_r_r18 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__2", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF_NO_IMM(cpy_r_r18);
CPyL18: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF_NO_IMM(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__3", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
CPyL19: ;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r23) goto CPyL37;
    cpy_r_r24 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__1", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
CPyL21: ;
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_i != CPY_INT_TAG) {
        CPyTagged_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_i);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_i = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r26 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__2", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF_NO_IMM(cpy_r_r26);
CPyL23: ;
    cpy_r_r27 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__3", 105, CPyStatic_multicall___globals);
        goto CPyL91;
    }
CPyL24: ;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r27 >> 1;
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r28 * 8;
    cpy_r_r32 = cpy_r_r30 + cpy_r_r31;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF_NO_IMM(cpy_r_r26);
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals, "list", cpy_r_r33);
        goto CPyL89;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batch != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batch);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batch = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r36 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "self", 106, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF_NO_IMM(cpy_r_r36);
CPyL27: ;
    cpy_r_r37 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batch;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "batch", 106, CPyStatic_multicall___globals);
        goto CPyL92;
    }
    CPy_INCREF_NO_IMM(cpy_r_r37);
CPyL28: ;
    cpy_r_r38 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_i;
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "i", 106, CPyStatic_multicall___globals);
        goto CPyL93;
    }
    CPyTagged_INCREF(cpy_r_r38);
CPyL29: ;
    cpy_r_r39 = CPyTagged_Str(cpy_r_r38);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 106, CPyStatic_multicall___globals);
        goto CPyL93;
    }
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPyDef_multicall___Multicall___fetch_outputs(cpy_r_r36, cpy_r_r37, cpy_r_r40, cpy_r_r39);
    CPy_DECREF_NO_IMM(cpy_r_r37);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF_NO_IMM(cpy_r_r36);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 106, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r42 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__0", -1, CPyStatic_multicall___globals);
        goto CPyL94;
    }
    CPy_INCREF_NO_IMM(cpy_r_r42);
CPyL32: ;
    cpy_r_r43 = PyList_Append(cpy_r_r42, cpy_r_r41);
    CPy_DECREF_NO_IMM(cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r45 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__1", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
CPyL34: ;
    cpy_r_r46 = cpy_r_r45 + 2;
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r46;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r48 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__3", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
CPyL36: ;
    cpy_r_r49 = cpy_r_r48 + 2;
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r49;
    cpy_r_r50 = 1;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    } else
        goto CPyL17;
CPyL37: ;
    cpy_r_r51 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__0", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF_NO_IMM(cpy_r_r51);
CPyL38: ;
    cpy_r_r52 = PyObject_GetIter(cpy_r_r51);
    CPy_DECREF_NO_IMM(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 105, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r53 = CPyStatic_multicall___globals;
    cpy_r_r54 = CPyStatics[221]; /* 'gather' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r56[1] = {cpy_r_r52};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_Vectorcall(cpy_r_r55, cpy_r_r57, 1, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_r52);
    cpy_r_r59 = CPy_GetCoro(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r61 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__4", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r61);
CPyL44: ;
    cpy_r_r62 = CPyIter_Next(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (cpy_r_r62 != NULL) goto CPyL47;
    cpy_r_r63 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r64 = cpy_r_r63;
    cpy_r_r65 = NULL;
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r65;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL96;
    } else
        goto CPyL69;
CPyL47: ;
    cpy_r_r67 = cpy_r_r62;
CPyL48: ;
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r67;
CPyL49: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_type != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL97;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL53;
    } else
        goto CPyL98;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL64;
CPyL53: ;
    cpy_r_r71 = CPy_CatchError();
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0);
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f1);
        CPy_DECREF(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f2);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r71;
    cpy_r_r72 = 1;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", -1, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    cpy_r_r73 = (PyObject **)&cpy_r_r1;
    cpy_r_r74 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__4", -1, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r74);
CPyL55: ;
    cpy_r_r75 = CPy_YieldFromErrorHandle(cpy_r_r74, cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    if (cpy_r_r75) goto CPyL59;
    cpy_r_r67 = cpy_r_r1;
    cpy_r_r76 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__5", -1, CPyStatic_multicall___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r76.f0);
    CPy_INCREF(cpy_r_r76.f1);
    CPy_INCREF(cpy_r_r76.f2);
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r76);
    CPy_DecRef(cpy_r_r76.f0);
    CPy_DecRef(cpy_r_r76.f1);
    CPy_DecRef(cpy_r_r76.f2);
    goto CPyL48;
CPyL59: ;
    cpy_r_r64 = cpy_r_r1;
    cpy_r_r77 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r77.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__5", -1, CPyStatic_multicall___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r77.f0);
    CPy_INCREF(cpy_r_r77.f1);
    CPy_INCREF(cpy_r_r77.f2);
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r77);
    CPy_DecRef(cpy_r_r77.f0);
    CPy_DecRef(cpy_r_r77.f1);
    CPy_DecRef(cpy_r_r77.f2);
    goto CPyL69;
CPyL61: ;
    cpy_r_r78 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r78.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__5", -1, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r78.f0);
    CPy_INCREF(cpy_r_r78.f1);
    CPy_INCREF(cpy_r_r78.f2);
CPyL62: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) goto CPyL89;
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r80 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "__mypyc_temp__4", -1, CPyStatic_multicall___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r80);
CPyL65: ;
    cpy_r_r81 = CPyIter_Send(cpy_r_r80, cpy_r_arg);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r81 == NULL) goto CPyL67;
    cpy_r_r67 = cpy_r_r81;
    goto CPyL48;
CPyL67: ;
    cpy_r_r82 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r64 = cpy_r_r82;
CPyL69: ;
    if (likely(PyList_Check(cpy_r_r64)))
        cpy_r_r83 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals, "list", cpy_r_r64);
        goto CPyL89;
    }
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batches != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batches);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batches = cpy_r_r83;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 104, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r85 = (PyObject *)&PyDict_Type;
    cpy_r_r86 = CPyStatics[222]; /* 'items' */
    cpy_r_r87 = CPyObject_GetAttr(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    cpy_r_r88 = ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->_batches;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "coroutine", "coroutine_Multicall_gen", "batches", 110, CPyStatic_multicall___globals);
        goto CPyL103;
    }
    CPy_INCREF_NO_IMM(cpy_r_r88);
CPyL73: ;
    cpy_r_r89 = CPyStatic_multicall___concat;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"concat\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_Unreachable();
CPyL76: ;
    PyObject *cpy_r_r91[1] = {cpy_r_r88};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_Vectorcall(cpy_r_r89, cpy_r_r92, 1, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL105;
    }
    CPy_DECREF_NO_IMM(cpy_r_r88);
    cpy_r_r94 = CPyStatic_multicall___mapcat;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL106;
    } else
        goto CPyL80;
CPyL78: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"mapcat\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_Unreachable();
CPyL80: ;
    PyObject *cpy_r_r96[2] = {cpy_r_r87, cpy_r_r93};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = PyObject_Vectorcall(cpy_r_r94, cpy_r_r97, 2, 0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL107;
    }
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r99 = CPyDict_FromAny(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 110, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    CPyGen_SetStopIterationValue(cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (!0) goto CPyL89;
    CPy_Unreachable();
CPyL85: ;
    cpy_r_r101 = cpy_r_r2 == 0;
    if (cpy_r_r101) goto CPyL108;
    cpy_r_r102 = cpy_r_r2 == 1;
    if (cpy_r_r102) {
        goto CPyL49;
    } else
        goto CPyL109;
CPyL87: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r103 = 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("multicall/multicall.py", "coroutine", 103, CPyStatic_multicall___globals);
        goto CPyL89;
    }
    CPy_Unreachable();
CPyL89: ;
    cpy_r_r104 = NULL;
    return cpy_r_r104;
CPyL90: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL12;
CPyL91: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL89;
CPyL92: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL89;
CPyL93: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    goto CPyL89;
CPyL94: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL89;
CPyL95: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL89;
CPyL96: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL89;
CPyL97: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL52;
CPyL98: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL51;
CPyL99: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL61;
CPyL100: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL61;
CPyL101: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL61;
CPyL102: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL89;
CPyL103: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL89;
CPyL104: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r88);
    goto CPyL74;
CPyL105: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r88);
    goto CPyL89;
CPyL106: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r93);
    goto CPyL78;
CPyL107: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r93);
    goto CPyL89;
CPyL108: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL109: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL87;
}

PyObject *CPyDef_multicall___coroutine_Multicall_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
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
    cpy_r_r1 = CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
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
    cpy_r_r1 = CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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
    PyObject *__tmp55 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp55);
    PyObject *__tmp56 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp56);
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
    if (((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->_self);
    }
    ((multicall___multicall___coroutine_Multicall_genObject *)cpy_r_r0)->_self = cpy_r_self;
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
    cpy_r_r0 = CPyStatics[223]; /* 'base_fee' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp57 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp57);
    PyObject *__tmp58 = Py_None;
    CPy_INCREF(__tmp58);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp58);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[224]; /* 'getBasefee()(uint256)' */
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
    cpy_r_r0 = CPyStatics[225]; /* 'block_hash' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp59 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp59);
    PyObject *__tmp60 = Py_None;
    CPy_INCREF(__tmp60);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp60);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[226]; /* 'getBlockHash(uint256)(bytes32)' */
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
    cpy_r_r0 = CPyStatics[227]; /* 'block_number' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp61 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp61);
    PyObject *__tmp62 = Py_None;
    CPy_INCREF(__tmp62);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp62);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[228]; /* 'getBlockNumber()(uint256)' */
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
    PyObject *__tmp63 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp63);
    PyObject *__tmp64 = Py_None;
    CPy_INCREF(__tmp64);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp64);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[229]; /* 'getChainId()(uint256)' */
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
    cpy_r_r0 = CPyStatics[230]; /* 'coinbase' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp65 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp65);
    PyObject *__tmp66 = Py_None;
    CPy_INCREF(__tmp66);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp66);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[231]; /* 'getCurrentBlockCoinbase()(address)' */
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
    cpy_r_r0 = CPyStatics[232]; /* 'difficulty' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp67 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp67);
    PyObject *__tmp68 = Py_None;
    CPy_INCREF(__tmp68);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp68);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[233]; /* 'getCurrentBlockDifficulty()(address)' */
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
    PyObject *__tmp69 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp69);
    PyObject *__tmp70 = Py_None;
    CPy_INCREF(__tmp70);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp70);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[234]; /* 'getCurrentBlockGasLimit()(uint256)' */
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
    cpy_r_r0 = CPyStatics[235]; /* 'timestamp' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp71 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp71);
    PyObject *__tmp72 = Py_None;
    CPy_INCREF(__tmp72);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp72);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[236]; /* 'getCurrentBlockTimestamp()(uint256)' */
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
    cpy_r_r0 = CPyStatics[237]; /* 'eth_balance' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp73 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp73);
    PyObject *__tmp74 = Py_None;
    CPy_INCREF(__tmp74);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp74);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[238]; /* 'getEthBalance(address)(uint256)' */
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
    cpy_r_r0 = CPyStatics[239]; /* 'last_block_hash' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1.f0 = cpy_r_r0;
    cpy_r_r1.f1 = 1;
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp75 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp75);
    PyObject *__tmp76 = Py_None;
    CPy_INCREF(__tmp76);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp76);
    cpy_r_return_signature = cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = CPyStatics[240]; /* 'getLastBlockHash()(bytes32)' */
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

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
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
    CPyTagged cpy_r_r181;
    CPyTagged cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    CPyTagged cpy_r_r187;
    int64_t cpy_r_r188;
    CPyPtr cpy_r_r189;
    CPyPtr cpy_r_r190;
    int64_t cpy_r_r191;
    CPyPtr cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    int32_t cpy_r_r214;
    char cpy_r_r215;
    CPyTagged cpy_r_r216;
    CPyTagged cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject **cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    tuple_T3OOO cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    CPyPtr cpy_r_r242;
    int64_t cpy_r_r243;
    CPyTagged cpy_r_r244;
    CPyTagged cpy_r_r245;
    char cpy_r_r246;
    tuple_T3OOO cpy_r_r247;
    tuple_T3OOO cpy_r_r248;
    char cpy_r_r249;
    tuple_T3OOO cpy_r_r250;
    char cpy_r_r251;
    char cpy_r_r252;
    tuple_T3OOO cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject **cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    char cpy_r_r273;
    tuple_T3OOO cpy_r_r274;
    char cpy_r_r275;
    PyObject **cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    tuple_T3OOO cpy_r_r279;
    tuple_T3OOO cpy_r_r280;
    tuple_T3OOO cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    int32_t cpy_r_r286;
    char cpy_r_r287;
    char cpy_r_r288;
    tuple_T3OOO cpy_r_r289;
    tuple_T3OOO cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    char cpy_r_r293;
    tuple_T3OOO cpy_r_r294;
    PyObject *cpy_r_r295;
    char cpy_r_r296;
    tuple_T3OOO cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject **cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    char cpy_r_r314;
    PyObject *cpy_r_r315;
    char cpy_r_r316;
    tuple_T3OOO cpy_r_r317;
    char cpy_r_r318;
    PyObject **cpy_r_r319;
    PyObject *cpy_r_r320;
    char cpy_r_r321;
    tuple_T3OOO cpy_r_r322;
    tuple_T3OOO cpy_r_r323;
    tuple_T3OOO cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    char cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    char cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    char cpy_r_r340;
    char cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    CPyTagged cpy_r_r344;
    char cpy_r_r345;
    PyObject *cpy_r_r346;
    char cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    CPyTagged cpy_r_r350;
    CPyTagged cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    CPyTagged cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    int32_t cpy_r_r359;
    char cpy_r_r360;
    CPyTagged cpy_r_r361;
    CPyTagged cpy_r_r362;
    char cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject **cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    char cpy_r_r382;
    PyObject *cpy_r_r383;
    char cpy_r_r384;
    tuple_T3OOO cpy_r_r385;
    char cpy_r_r386;
    PyObject **cpy_r_r387;
    PyObject *cpy_r_r388;
    char cpy_r_r389;
    tuple_T3OOO cpy_r_r390;
    tuple_T3OOO cpy_r_r391;
    tuple_T3OOO cpy_r_r392;
    char cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    char cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    char cpy_r_r402;
    PyObject **cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    char cpy_r_r407;
    PyObject *cpy_r_r408;
    char cpy_r_r409;
    char cpy_r_r410;
    PyObject *cpy_r_r411;
    CPyPtr cpy_r_r412;
    int64_t cpy_r_r413;
    CPyTagged cpy_r_r414;
    CPyTagged cpy_r_r415;
    char cpy_r_r416;
    PyObject *cpy_r_r417;
    CPyTagged cpy_r_r418;
    int64_t cpy_r_r419;
    CPyPtr cpy_r_r420;
    CPyPtr cpy_r_r421;
    int64_t cpy_r_r422;
    CPyPtr cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    char cpy_r_r426;
    PyObject *cpy_r_r427;
    char cpy_r_r428;
    char cpy_r_r429;
    PyObject *cpy_r_r430;
    CPyPtr cpy_r_r431;
    int64_t cpy_r_r432;
    CPyTagged cpy_r_r433;
    CPyTagged cpy_r_r434;
    char cpy_r_r435;
    PyObject *cpy_r_r436;
    CPyTagged cpy_r_r437;
    int64_t cpy_r_r438;
    CPyPtr cpy_r_r439;
    CPyPtr cpy_r_r440;
    int64_t cpy_r_r441;
    CPyPtr cpy_r_r442;
    PyObject *cpy_r_r443;
    tuple_T2OO cpy_r_r444;
    char cpy_r_r445;
    tuple_T2OO cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    int32_t cpy_r_r449;
    char cpy_r_r450;
    CPyTagged cpy_r_r451;
    CPyTagged cpy_r_r452;
    char cpy_r_r453;
    CPyTagged cpy_r_r454;
    CPyTagged cpy_r_r455;
    char cpy_r_r456;
    PyObject *cpy_r_r457;
    char cpy_r_r458;
    char cpy_r_r459;
    char cpy_r_r460;
    char cpy_r_r461;
    char cpy_r_r462;
    char cpy_r_r463;
    char cpy_r_r464;
    char cpy_r_r465;
    char cpy_r_r466;
    PyObject *cpy_r_r467;
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
    tuple_T3OOO __tmp77 = { NULL, NULL, NULL };
    cpy_r_r10 = __tmp77;
    cpy_r_r11 = cpy_r_r10;
    cpy_r_r12 = NULL;
    cpy_r_r13 = cpy_r_r12;
    cpy_r_r14 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL410;
CPyL1: ;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_type != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r17 = CPyStatics[241]; /* 'coroutine %s started' */
    cpy_r_r18 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_id;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 162, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r18);
CPyL5: ;
    cpy_r_r19 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL420;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 162, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL8: ;
    PyObject *cpy_r_r21[2] = {cpy_r_r17, cpy_r_r18};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r22, 2, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 162, CPyStatic_multicall___globals);
        goto CPyL421;
    } else
        goto CPyL422;
CPyL9: ;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r24 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 164, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r24);
CPyL10: ;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 == cpy_r_r25;
    CPy_DECREF_NO_IMM(cpy_r_r24);
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 165, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r27);
CPyL12: ;
    cpy_r_r28 = ((multicall___multicall___MulticallObject *)cpy_r_r27)->_calls;
    CPy_INCREF_NO_IMM(cpy_r_r28);
    CPy_DECREF_NO_IMM(cpy_r_r27);
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 165, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL13: ;
    cpy_r_r30 = CPyStatic_multicall___globals;
    cpy_r_r31 = CPyStatics[20]; /* '_get_semaphore' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r33 = PyObject_Vectorcall(cpy_r_r32, 0, 0, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r34 = PyObject_Type(cpy_r_r33);
    cpy_r_r35 = CPyStatics[21]; /* '__aexit__' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL423;
    }
    cpy_r_r38 = CPyStatics[22]; /* '__aenter__' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL424;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r33};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL424;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r33;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL425;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = 1;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL425;
    }
    cpy_r_r45 = CPy_GetCoro(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r47 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__9", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r47);
CPyL24: ;
    cpy_r_r48 = CPyIter_Next(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (cpy_r_r48 != NULL) goto CPyL27;
    cpy_r_r49 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL419;
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
        goto CPyL419;
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
    if (!cpy_r_r56) goto CPyL426;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL33;
    } else
        goto CPyL427;
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
        goto CPyL428;
    }
    cpy_r_r59 = (PyObject **)&cpy_r_r1;
    cpy_r_r60 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__9", -1, CPyStatic_multicall___globals);
        goto CPyL428;
    }
    CPy_INCREF(cpy_r_r60);
CPyL35: ;
    cpy_r_r61 = CPy_YieldFromErrorHandle(cpy_r_r60, cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL428;
    }
    if (cpy_r_r61) goto CPyL39;
    cpy_r_r53 = cpy_r_r1;
    cpy_r_r62 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__10", -1, CPyStatic_multicall___globals);
        goto CPyL429;
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
        goto CPyL419;
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
    if (!cpy_r_r65) goto CPyL419;
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r66 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__9", -1, CPyStatic_multicall___globals);
        goto CPyL430;
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
        goto CPyL419;
    }
    cpy_r_r50 = cpy_r_r68;
    CPy_DECREF(cpy_r_r50);
CPyL49: ;
    cpy_r_r69 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 169, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r69);
CPyL50: ;
    cpy_r_r70 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 169, CPyStatic_multicall___globals);
        goto CPyL431;
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
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_args != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_args);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_args = cpy_r_r72;
    cpy_r_r73 = 1;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 169, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r74 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
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
    cpy_r_r79 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
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
    cpy_r_r81 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_args;
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "args", 171, CPyStatic_multicall___globals);
        goto CPyL432;
    }
    CPy_INCREF_NO_IMM(cpy_r_r81);
CPyL58: ;
    cpy_r_r82 = CPyStatics[13]; /* 'coroutine' */
    PyObject *cpy_r_r83[2] = {cpy_r_r80, cpy_r_r81};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = PyObject_VectorcallMethod(cpy_r_r82, cpy_r_r84, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL433;
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
        goto CPyL434;
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
    if (!cpy_r_r97) goto CPyL435;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL71;
    } else
        goto CPyL436;
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
        goto CPyL437;
    }
    cpy_r_r100 = (PyObject **)&cpy_r_r3;
    cpy_r_r101 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__11", -1, CPyStatic_multicall___globals);
        goto CPyL437;
    }
    CPy_INCREF(cpy_r_r101);
CPyL73: ;
    cpy_r_r102 = CPy_YieldFromErrorHandle(cpy_r_r101, cpy_r_r100);
    CPy_DecRef(cpy_r_r101);
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL437;
    }
    if (cpy_r_r102) goto CPyL77;
    cpy_r_r94 = cpy_r_r3;
    cpy_r_r103 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__12;
    if (unlikely(cpy_r_r103.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__12", -1, CPyStatic_multicall___globals);
        goto CPyL438;
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
        goto CPyL439;
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
        goto CPyL440;
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
    cpy_r_r110 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 171, CPyStatic_multicall___globals);
        goto CPyL434;
    }
    CPy_INCREF_NO_IMM(cpy_r_r110);
CPyL88: ;
    cpy_r_r111 = PyObject_GetIter(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL441;
    }
    cpy_r_r112 = PyIter_Next(cpy_r_r111);
    if (cpy_r_r112 == NULL) {
        goto CPyL442;
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
    if (cpy_r_r114 != NULL) goto __LL78;
    if (cpy_r_r112 == Py_None)
        cpy_r_r114 = cpy_r_r112;
    else {
        cpy_r_r114 = NULL;
    }
    if (cpy_r_r114 != NULL) goto __LL78;
    CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals, "int or None", cpy_r_r112);
    goto CPyL443;
__LL78: ;
    CPy_DECREF(((multicall___multicall___MulticallObject *)cpy_r_r110)->_block_id);
    ((multicall___multicall___MulticallObject *)cpy_r_r110)->_block_id = cpy_r_r114;
    CPy_DECREF_NO_IMM(cpy_r_r110);
    cpy_r_r116 = PyIter_Next(cpy_r_r111);
    if (cpy_r_r116 == NULL) {
        goto CPyL444;
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
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs = cpy_r_r116;
    cpy_r_r118 = 1;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL445;
    }
    cpy_r_r119 = PyIter_Next(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (cpy_r_r119 == NULL) {
        goto CPyL100;
    } else
        goto CPyL446;
CPyL98: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 171, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r121 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs;
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
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs = cpy_r_r122;
    cpy_r_r123 = 1;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 172, CPyStatic_multicall___globals);
        goto CPyL203;
    } else
        goto CPyL152;
CPyL103: ;
    cpy_r_r124 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
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
    cpy_r_r126 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_args;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "args", 174, CPyStatic_multicall___globals);
        goto CPyL447;
    }
    CPy_INCREF_NO_IMM(cpy_r_r126);
CPyL106: ;
    cpy_r_r127 = CPyStatics[13]; /* 'coroutine' */
    PyObject *cpy_r_r128[2] = {cpy_r_r125, cpy_r_r126};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_VectorcallMethod(cpy_r_r127, cpy_r_r129, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL448;
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
        goto CPyL449;
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
    if (!cpy_r_r142) goto CPyL450;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL119;
    } else
        goto CPyL451;
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
        goto CPyL452;
    }
    cpy_r_r145 = (PyObject **)&cpy_r_r5;
    cpy_r_r146 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__13;
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__13", -1, CPyStatic_multicall___globals);
        goto CPyL452;
    }
    CPy_INCREF(cpy_r_r146);
CPyL121: ;
    cpy_r_r147 = CPy_YieldFromErrorHandle(cpy_r_r146, cpy_r_r145);
    CPy_DecRef(cpy_r_r146);
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL452;
    }
    if (cpy_r_r147) goto CPyL125;
    cpy_r_r139 = cpy_r_r5;
    cpy_r_r148 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__14;
    if (unlikely(cpy_r_r148.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__14", -1, CPyStatic_multicall___globals);
        goto CPyL453;
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
        goto CPyL454;
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
        goto CPyL455;
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
    cpy_r_r155 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 174, CPyStatic_multicall___globals);
        goto CPyL449;
    }
    CPy_INCREF_NO_IMM(cpy_r_r155);
CPyL136: ;
    cpy_r_r156 = PyObject_GetIter(cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL456;
    }
    cpy_r_r157 = PyIter_Next(cpy_r_r156);
    if (cpy_r_r157 == NULL) {
        goto CPyL457;
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
    if (cpy_r_r159 != NULL) goto __LL79;
    if (cpy_r_r157 == Py_None)
        cpy_r_r159 = cpy_r_r157;
    else {
        cpy_r_r159 = NULL;
    }
    if (cpy_r_r159 != NULL) goto __LL79;
    CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals, "int or None", cpy_r_r157);
    goto CPyL458;
__LL79: ;
    CPy_DECREF(((multicall___multicall___MulticallObject *)cpy_r_r155)->_block_id);
    ((multicall___multicall___MulticallObject *)cpy_r_r155)->_block_id = cpy_r_r159;
    CPy_DECREF_NO_IMM(cpy_r_r155);
    cpy_r_r161 = PyIter_Next(cpy_r_r156);
    if (cpy_r_r161 == NULL) {
        goto CPyL459;
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
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->__ != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->__);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->__ = cpy_r_r161;
    cpy_r_r163 = 1;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL460;
    }
    cpy_r_r164 = PyIter_Next(cpy_r_r156);
    if (cpy_r_r164 == NULL) {
        goto CPyL461;
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
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs = cpy_r_r164;
    cpy_r_r166 = 1;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 174, CPyStatic_multicall___globals);
        goto CPyL460;
    }
    cpy_r_r167 = PyIter_Next(cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    if (cpy_r_r167 == NULL) {
        goto CPyL152;
    } else
        goto CPyL462;
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
    cpy_r_r171 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls;
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
    cpy_r_r174 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs;
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "outputs", 177, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r174);
CPyL158: ;
    cpy_r_r175 = PyObject_GetIter(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL463;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__18 = cpy_r_r174;
    cpy_r_r176 = 1;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL464;
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
    cpy_r_r181 = cpy_r_r180 << 1;
    cpy_r_r182 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r182 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__17", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL163: ;
    cpy_r_r183 = (Py_ssize_t)cpy_r_r182 < (Py_ssize_t)cpy_r_r181;
    if (!cpy_r_r183) goto CPyL192;
    cpy_r_r184 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__19;
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__19", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r184);
CPyL165: ;
    cpy_r_r185 = PyIter_Next(cpy_r_r184);
    CPy_DECREF(cpy_r_r184);
    if (cpy_r_r185 == NULL) goto CPyL192;
    cpy_r_r186 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__16;
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__16", 175, CPyStatic_multicall___globals);
        goto CPyL465;
    }
    CPy_INCREF_NO_IMM(cpy_r_r186);
CPyL167: ;
    cpy_r_r187 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r187 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__17", 175, CPyStatic_multicall___globals);
        goto CPyL466;
    }
CPyL168: ;
    cpy_r_r188 = (Py_ssize_t)cpy_r_r187 >> 1;
    cpy_r_r189 = (CPyPtr)&((PyListObject *)cpy_r_r186)->ob_item;
    cpy_r_r190 = *(CPyPtr *)cpy_r_r189;
    cpy_r_r191 = cpy_r_r188 * 8;
    cpy_r_r192 = cpy_r_r190 + cpy_r_r191;
    cpy_r_r193 = *(PyObject * *)cpy_r_r192;
    CPy_INCREF(cpy_r_r193);
    CPy_DECREF_NO_IMM(cpy_r_r186);
    if (likely(Py_TYPE(cpy_r_r193) == CPyType_call___Call))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals, "multicall.call.Call", cpy_r_r193);
        goto CPyL465;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_call != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_call);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_call = cpy_r_r194;
    cpy_r_r195 = 1;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL465;
    }
    cpy_r_r196 = PyObject_GetIter(cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r197 = PyIter_Next(cpy_r_r196);
    if (cpy_r_r197 == NULL) {
        goto CPyL467;
    } else
        goto CPyL174;
CPyL172: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r198 = 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL174: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_success != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_success);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_success = cpy_r_r197;
    cpy_r_r199 = 1;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL468;
    }
    cpy_r_r200 = PyIter_Next(cpy_r_r196);
    if (cpy_r_r200 == NULL) {
        goto CPyL469;
    } else
        goto CPyL178;
CPyL176: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r201 = 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL178: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_output != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_output);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_output = cpy_r_r200;
    cpy_r_r202 = 1;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL468;
    }
    cpy_r_r203 = PyIter_Next(cpy_r_r196);
    CPy_DECREF(cpy_r_r196);
    if (cpy_r_r203 == NULL) {
        goto CPyL182;
    } else
        goto CPyL470;
CPyL180: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r204 = 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL182: ;
    cpy_r_r205 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_output;
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "output", 176, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r205);
CPyL183: ;
    cpy_r_r206 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_call;
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "call", 176, CPyStatic_multicall___globals);
        goto CPyL471;
    }
    CPy_INCREF_NO_IMM(cpy_r_r206);
CPyL184: ;
    cpy_r_r207 = ((multicall___call___CallObject *)cpy_r_r206)->_signature;
    CPy_INCREF_NO_IMM(cpy_r_r207);
    CPy_DECREF_NO_IMM(cpy_r_r206);
    cpy_r_r208 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_call;
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "call", 176, CPyStatic_multicall___globals);
        goto CPyL472;
    }
    CPy_INCREF_NO_IMM(cpy_r_r208);
CPyL185: ;
    cpy_r_r209 = ((multicall___call___CallObject *)cpy_r_r208)->_returns;
    CPy_INCREF(cpy_r_r209);
    CPy_DECREF_NO_IMM(cpy_r_r208);
    cpy_r_r210 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_success;
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "success", 176, CPyStatic_multicall___globals);
        goto CPyL473;
    }
    CPy_INCREF(cpy_r_r210);
CPyL186: ;
    if (PyBool_Check(cpy_r_r210))
        cpy_r_r211 = cpy_r_r210;
    else {
        cpy_r_r211 = NULL;
    }
    if (cpy_r_r211 != NULL) goto __LL80;
    if (cpy_r_r210 == Py_None)
        cpy_r_r211 = cpy_r_r210;
    else {
        cpy_r_r211 = NULL;
    }
    if (cpy_r_r211 != NULL) goto __LL80;
    CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 176, CPyStatic_multicall___globals, "bool or None", cpy_r_r210);
    goto CPyL473;
__LL80: ;
    cpy_r_r212 = CPyDef_call___Call___decode_output(cpy_r_r205, cpy_r_r207, cpy_r_r209, cpy_r_r211);
    CPy_DECREF(cpy_r_r205);
    CPy_DECREF_NO_IMM(cpy_r_r207);
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 176, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r213 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15;
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__15", -1, CPyStatic_multicall___globals);
        goto CPyL474;
    }
    CPy_INCREF_NO_IMM(cpy_r_r213);
CPyL189: ;
    cpy_r_r214 = PyList_Append(cpy_r_r213, cpy_r_r212);
    CPy_DECREF_NO_IMM(cpy_r_r213);
    CPy_DECREF(cpy_r_r212);
    cpy_r_r215 = cpy_r_r214 >= 0;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r216 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17;
    if (unlikely(cpy_r_r216 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__17", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
CPyL191: ;
    cpy_r_r217 = cpy_r_r216 + 2;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__17 = cpy_r_r217;
    cpy_r_r218 = 1;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    } else
        goto CPyL161;
CPyL192: ;
    cpy_r_r219 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r220 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__15;
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__15", -1, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF_NO_IMM(cpy_r_r220);
CPyL194: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs = cpy_r_r220;
    cpy_r_r221 = 1;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 175, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    cpy_r_r222 = CPyStatics[242]; /* 'coroutine %s finished' */
    cpy_r_r223 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_id;
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 179, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r223);
CPyL196: ;
    cpy_r_r224 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r224 == NULL)) {
        goto CPyL475;
    } else
        goto CPyL199;
CPyL197: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r225 = 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 179, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_Unreachable();
CPyL199: ;
    PyObject *cpy_r_r226[2] = {cpy_r_r222, cpy_r_r223};
    cpy_r_r227 = (PyObject **)&cpy_r_r226;
    cpy_r_r228 = PyObject_Vectorcall(cpy_r_r224, cpy_r_r227, 2, 0);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 179, CPyStatic_multicall___globals);
        goto CPyL476;
    } else
        goto CPyL477;
CPyL200: ;
    CPy_DECREF(cpy_r_r223);
    cpy_r_r229 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_outputs;
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "outputs", 180, CPyStatic_multicall___globals);
        goto CPyL203;
    }
    CPy_INCREF(cpy_r_r229);
CPyL201: ;
    if (likely(PyList_Check(cpy_r_r229)))
        cpy_r_r230 = cpy_r_r229;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 180, CPyStatic_multicall___globals, "list", cpy_r_r229);
        goto CPyL203;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r230;
    cpy_r_r231 = 1;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 180, CPyStatic_multicall___globals);
    } else
        goto CPyL261;
CPyL203: ;
    cpy_r_r232 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21 = cpy_r_r232;
    cpy_r_r233 = 1;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    cpy_r_r234 = CPyModule_builtins;
    cpy_r_r235 = CPyStatics[207]; /* 'Exception' */
    cpy_r_r236 = CPyObject_GetAttr(cpy_r_r234, cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 181, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    cpy_r_r237 = CPy_ExceptionMatches(cpy_r_r236);
    CPy_DecRef(cpy_r_r236);
    if (!cpy_r_r237) goto CPyL211;
    cpy_r_r238 = CPy_GetExcValue();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_e != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_e);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_e = cpy_r_r238;
    cpy_r_r239 = 1;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 181, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    cpy_r_r240 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_e;
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "e", 182, CPyStatic_multicall___globals);
        goto CPyL215;
    }
    CPy_INCREF(cpy_r_r240);
CPyL208: ;
    cpy_r_r241 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls;
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 182, CPyStatic_multicall___globals);
        goto CPyL478;
    }
    CPy_INCREF_NO_IMM(cpy_r_r241);
CPyL209: ;
    cpy_r_r242 = (CPyPtr)&((PyVarObject *)cpy_r_r241)->ob_size;
    cpy_r_r243 = *(int64_t *)cpy_r_r242;
    CPy_DecRef(cpy_r_r241);
    cpy_r_r244 = cpy_r_r243 << 1;
    cpy_r_r245 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_ConnErr_retries;
    if (unlikely(cpy_r_r245 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "ConnErr_retries", 182, CPyStatic_multicall___globals);
        goto CPyL478;
    }
    CPyTagged_INCREF(cpy_r_r245);
CPyL210: ;
    cpy_r_r246 = CPyDef_multicall____raise_or_proceed(cpy_r_r240, cpy_r_r244, cpy_r_r245);
    CPy_DecRef(cpy_r_r240);
    CPyTagged_DecRef(cpy_r_r245);
    if (unlikely(cpy_r_r246 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 182, CPyStatic_multicall___globals);
        goto CPyL215;
    } else
        goto CPyL213;
CPyL211: ;
    CPy_Reraise();
    if (!0) goto CPyL215;
    CPy_Unreachable();
CPyL213: ;
    cpy_r_r247 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21;
    if (unlikely(cpy_r_r247.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__21", -1, CPyStatic_multicall___globals);
        goto CPyL218;
    }
    CPy_INCREF(cpy_r_r247.f0);
    CPy_INCREF(cpy_r_r247.f1);
    CPy_INCREF(cpy_r_r247.f2);
CPyL214: ;
    CPy_RestoreExcInfo(cpy_r_r247);
    CPy_DecRef(cpy_r_r247.f0);
    CPy_DecRef(cpy_r_r247.f1);
    CPy_DecRef(cpy_r_r247.f2);
    goto CPyL260;
CPyL215: ;
    cpy_r_r248 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__21;
    if (unlikely(cpy_r_r248.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__21", -1, CPyStatic_multicall___globals);
        goto CPyL218;
    }
    CPy_INCREF(cpy_r_r248.f0);
    CPy_INCREF(cpy_r_r248.f1);
    CPy_INCREF(cpy_r_r248.f2);
CPyL216: ;
    CPy_RestoreExcInfo(cpy_r_r248);
    CPy_DecRef(cpy_r_r248.f0);
    CPy_DecRef(cpy_r_r248.f1);
    CPy_DecRef(cpy_r_r248.f2);
    cpy_r_r249 = CPy_KeepPropagating();
    if (!cpy_r_r249) goto CPyL218;
    CPy_Unreachable();
CPyL218: ;
    cpy_r_r250 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22 = cpy_r_r250;
    cpy_r_r251 = 1;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = 0;
    cpy_r_r252 = 1;
    if (unlikely(!cpy_r_r252)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r253 = CPy_GetExcInfo();
    cpy_r_r254 = cpy_r_r253.f0;
    CPy_INCREF(cpy_r_r254);
    cpy_r_r255 = cpy_r_r253.f1;
    CPy_INCREF(cpy_r_r255);
    cpy_r_r256 = cpy_r_r253.f2;
    CPy_INCREF(cpy_r_r256);
    CPy_DecRef(cpy_r_r253.f0);
    CPy_DecRef(cpy_r_r253.f1);
    CPy_DecRef(cpy_r_r253.f2);
    cpy_r_r257 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__6", -1, CPyStatic_multicall___globals);
        goto CPyL479;
    }
    CPy_INCREF(cpy_r_r257);
CPyL221: ;
    cpy_r_r258 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__7", -1, CPyStatic_multicall___globals);
        goto CPyL480;
    }
    CPy_INCREF(cpy_r_r258);
CPyL222: ;
    PyObject *cpy_r_r259[4] = {cpy_r_r258, cpy_r_r254, cpy_r_r255, cpy_r_r256};
    cpy_r_r260 = (PyObject **)&cpy_r_r259;
    cpy_r_r261 = PyObject_Vectorcall(cpy_r_r257, cpy_r_r260, 4, 0);
    CPy_DecRef(cpy_r_r257);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL481;
    }
    CPy_DecRef(cpy_r_r258);
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r256);
    cpy_r_r262 = CPy_GetCoro(cpy_r_r261);
    CPy_DecRef(cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 = cpy_r_r262;
    cpy_r_r263 = 1;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r264 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23;
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__23", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    CPy_INCREF(cpy_r_r264);
CPyL226: ;
    cpy_r_r265 = CPyIter_Next(cpy_r_r264);
    CPy_DecRef(cpy_r_r264);
    if (cpy_r_r265 != NULL) goto CPyL229;
    cpy_r_r266 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r267 = cpy_r_r266;
    cpy_r_r268 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23 = cpy_r_r268;
    cpy_r_r269 = 1;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL482;
    } else
        goto CPyL251;
CPyL229: ;
    cpy_r_r270 = cpy_r_r265;
CPyL230: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 4;
    return cpy_r_r270;
CPyL231: ;
    cpy_r_r272 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r273 = cpy_r_type != cpy_r_r272;
    if (!cpy_r_r273) goto CPyL483;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL235;
    } else
        goto CPyL484;
CPyL233: ;
    CPy_Unreachable();
CPyL234: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL246;
CPyL235: ;
    cpy_r_r274 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24 = cpy_r_r274;
    cpy_r_r275 = 1;
    if (unlikely(!cpy_r_r275)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL485;
    }
    cpy_r_r276 = (PyObject **)&cpy_r_r7;
    cpy_r_r277 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23;
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__23", -1, CPyStatic_multicall___globals);
        goto CPyL485;
    }
    CPy_INCREF(cpy_r_r277);
CPyL237: ;
    cpy_r_r278 = CPy_YieldFromErrorHandle(cpy_r_r277, cpy_r_r276);
    CPy_DecRef(cpy_r_r277);
    if (unlikely(cpy_r_r278 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL485;
    }
    if (cpy_r_r278) goto CPyL241;
    cpy_r_r270 = cpy_r_r7;
    cpy_r_r279 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24;
    if (unlikely(cpy_r_r279.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__24", -1, CPyStatic_multicall___globals);
        goto CPyL486;
    }
    CPy_INCREF(cpy_r_r279.f0);
    CPy_INCREF(cpy_r_r279.f1);
    CPy_INCREF(cpy_r_r279.f2);
CPyL240: ;
    CPy_RestoreExcInfo(cpy_r_r279);
    CPy_DecRef(cpy_r_r279.f0);
    CPy_DecRef(cpy_r_r279.f1);
    CPy_DecRef(cpy_r_r279.f2);
    goto CPyL230;
CPyL241: ;
    cpy_r_r267 = cpy_r_r7;
    cpy_r_r280 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24;
    if (unlikely(cpy_r_r280.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__24", -1, CPyStatic_multicall___globals);
        goto CPyL487;
    }
    CPy_INCREF(cpy_r_r280.f0);
    CPy_INCREF(cpy_r_r280.f1);
    CPy_INCREF(cpy_r_r280.f2);
CPyL242: ;
    CPy_RestoreExcInfo(cpy_r_r280);
    CPy_DecRef(cpy_r_r280.f0);
    CPy_DecRef(cpy_r_r280.f1);
    CPy_DecRef(cpy_r_r280.f2);
    goto CPyL251;
CPyL243: ;
    cpy_r_r281 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__24;
    if (unlikely(cpy_r_r281.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__24", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    CPy_INCREF(cpy_r_r281.f0);
    CPy_INCREF(cpy_r_r281.f1);
    CPy_INCREF(cpy_r_r281.f2);
CPyL244: ;
    CPy_RestoreExcInfo(cpy_r_r281);
    CPy_DecRef(cpy_r_r281.f0);
    CPy_DecRef(cpy_r_r281.f1);
    CPy_DecRef(cpy_r_r281.f2);
    cpy_r_r282 = CPy_KeepPropagating();
    if (!cpy_r_r282) goto CPyL257;
    CPy_Unreachable();
CPyL246: ;
    cpy_r_r283 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__23;
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__23", -1, CPyStatic_multicall___globals);
        goto CPyL488;
    }
    CPy_INCREF(cpy_r_r283);
CPyL247: ;
    cpy_r_r284 = CPyIter_Send(cpy_r_r283, cpy_r_arg);
    CPy_DECREF(cpy_r_r283);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r284 == NULL) goto CPyL249;
    cpy_r_r270 = cpy_r_r284;
    goto CPyL230;
CPyL249: ;
    cpy_r_r285 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r267 = cpy_r_r285;
CPyL251: ;
    cpy_r_r286 = PyObject_IsTrue(cpy_r_r267);
    CPy_DECREF(cpy_r_r267);
    cpy_r_r287 = cpy_r_r286 >= 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL257;
    }
    cpy_r_r288 = cpy_r_r286;
    if (cpy_r_r288) goto CPyL255;
    CPy_Reraise();
    if (!0) goto CPyL257;
    CPy_Unreachable();
CPyL255: ;
    cpy_r_r289 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22;
    if (unlikely(cpy_r_r289.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__22", -1, CPyStatic_multicall___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r289.f0);
    CPy_INCREF(cpy_r_r289.f1);
    CPy_INCREF(cpy_r_r289.f2);
CPyL256: ;
    CPy_RestoreExcInfo(cpy_r_r289);
    CPy_DECREF(cpy_r_r289.f0);
    CPy_DECREF(cpy_r_r289.f1);
    CPy_DECREF(cpy_r_r289.f2);
    goto CPyL260;
CPyL257: ;
    cpy_r_r290 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__22;
    if (unlikely(cpy_r_r290.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__22", -1, CPyStatic_multicall___globals);
        goto CPyL262;
    }
    CPy_INCREF(cpy_r_r290.f0);
    CPy_INCREF(cpy_r_r290.f1);
    CPy_INCREF(cpy_r_r290.f2);
CPyL258: ;
    CPy_RestoreExcInfo(cpy_r_r290);
    CPy_DECREF(cpy_r_r290.f0);
    CPy_DECREF(cpy_r_r290.f1);
    CPy_DECREF(cpy_r_r290.f2);
    cpy_r_r291 = CPy_KeepPropagating();
    if (!cpy_r_r291) goto CPyL262;
    CPy_Unreachable();
CPyL260: ;
    cpy_r_r292 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r292;
    cpy_r_r293 = 1;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL261: ;
    tuple_T3OOO __tmp81 = { NULL, NULL, NULL };
    cpy_r_r294 = __tmp81;
    cpy_r_r11 = cpy_r_r294;
    goto CPyL264;
CPyL262: ;
    cpy_r_r295 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20 = cpy_r_r295;
    cpy_r_r296 = 1;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r297 = CPy_CatchError();
    cpy_r_r11 = cpy_r_r297;
CPyL264: ;
    cpy_r_r298 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r298 == 2)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__8", -1, CPyStatic_multicall___globals);
        goto CPyL304;
    }
CPyL265: ;
    if (!cpy_r_r298) goto CPyL297;
CPyL266: ;
    cpy_r_r299 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r300 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r300 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__6", -1, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r300);
CPyL267: ;
    cpy_r_r301 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__7", -1, CPyStatic_multicall___globals);
        goto CPyL489;
    }
    CPy_INCREF(cpy_r_r301);
CPyL268: ;
    PyObject *cpy_r_r302[4] = {cpy_r_r301, cpy_r_r299, cpy_r_r299, cpy_r_r299};
    cpy_r_r303 = (PyObject **)&cpy_r_r302;
    cpy_r_r304 = PyObject_Vectorcall(cpy_r_r300, cpy_r_r303, 4, 0);
    CPy_DECREF(cpy_r_r300);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL490;
    }
    CPy_DECREF(cpy_r_r301);
    cpy_r_r305 = CPy_GetCoro(cpy_r_r304);
    CPy_DECREF(cpy_r_r304);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 = cpy_r_r305;
    cpy_r_r306 = 1;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    cpy_r_r307 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25;
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__25", -1, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r307);
CPyL272: ;
    cpy_r_r308 = CPyIter_Next(cpy_r_r307);
    CPy_DECREF(cpy_r_r307);
    if (cpy_r_r308 != NULL) goto CPyL491;
    cpy_r_r309 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    cpy_r_r310 = cpy_r_r309;
    CPy_DECREF(cpy_r_r310);
    cpy_r_r311 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25 = cpy_r_r311;
    cpy_r_r312 = 1;
    if (unlikely(!cpy_r_r312)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL304;
    } else
        goto CPyL297;
CPyL275: ;
    cpy_r_r313 = cpy_r_r308;
CPyL276: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 5;
    return cpy_r_r313;
CPyL277: ;
    cpy_r_r315 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r316 = cpy_r_type != cpy_r_r315;
    if (!cpy_r_r316) goto CPyL492;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL281;
    } else
        goto CPyL493;
CPyL279: ;
    CPy_Unreachable();
CPyL280: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL292;
CPyL281: ;
    cpy_r_r317 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26 = cpy_r_r317;
    cpy_r_r318 = 1;
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL494;
    }
    cpy_r_r319 = (PyObject **)&cpy_r_r9;
    cpy_r_r320 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25;
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__25", -1, CPyStatic_multicall___globals);
        goto CPyL494;
    }
    CPy_INCREF(cpy_r_r320);
CPyL283: ;
    cpy_r_r321 = CPy_YieldFromErrorHandle(cpy_r_r320, cpy_r_r319);
    CPy_DecRef(cpy_r_r320);
    if (unlikely(cpy_r_r321 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL494;
    }
    if (cpy_r_r321) goto CPyL287;
    cpy_r_r313 = cpy_r_r9;
    cpy_r_r322 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26;
    if (unlikely(cpy_r_r322.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__26", -1, CPyStatic_multicall___globals);
        goto CPyL495;
    }
    CPy_INCREF(cpy_r_r322.f0);
    CPy_INCREF(cpy_r_r322.f1);
    CPy_INCREF(cpy_r_r322.f2);
    goto CPyL496;
CPyL286: ;
    CPy_RestoreExcInfo(cpy_r_r322);
    CPy_DecRef(cpy_r_r322.f0);
    CPy_DecRef(cpy_r_r322.f1);
    CPy_DecRef(cpy_r_r322.f2);
    goto CPyL276;
CPyL287: ;
    cpy_r_r310 = cpy_r_r9;
    CPy_DecRef(cpy_r_r310);
    cpy_r_r323 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26;
    if (unlikely(cpy_r_r323.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__26", -1, CPyStatic_multicall___globals);
        goto CPyL289;
    }
    CPy_INCREF(cpy_r_r323.f0);
    CPy_INCREF(cpy_r_r323.f1);
    CPy_INCREF(cpy_r_r323.f2);
CPyL288: ;
    CPy_RestoreExcInfo(cpy_r_r323);
    CPy_DecRef(cpy_r_r323.f0);
    CPy_DecRef(cpy_r_r323.f1);
    CPy_DecRef(cpy_r_r323.f2);
    goto CPyL297;
CPyL289: ;
    cpy_r_r324 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__26;
    if (unlikely(cpy_r_r324.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__26", -1, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    CPy_INCREF(cpy_r_r324.f0);
    CPy_INCREF(cpy_r_r324.f1);
    CPy_INCREF(cpy_r_r324.f2);
CPyL290: ;
    CPy_RestoreExcInfo(cpy_r_r324);
    CPy_DecRef(cpy_r_r324.f0);
    CPy_DecRef(cpy_r_r324.f1);
    CPy_DecRef(cpy_r_r324.f2);
    cpy_r_r325 = CPy_KeepPropagating();
    if (!cpy_r_r325) {
        goto CPyL304;
    } else
        goto CPyL497;
CPyL291: ;
    CPy_Unreachable();
CPyL292: ;
    cpy_r_r326 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__25;
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__25", -1, CPyStatic_multicall___globals);
        goto CPyL498;
    }
    CPy_INCREF(cpy_r_r326);
CPyL293: ;
    cpy_r_r327 = CPyIter_Send(cpy_r_r326, cpy_r_arg);
    CPy_DECREF(cpy_r_r326);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r327 == NULL) {
        goto CPyL295;
    } else
        goto CPyL499;
CPyL294: ;
    cpy_r_r313 = cpy_r_r327;
    goto CPyL276;
CPyL295: ;
    cpy_r_r328 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 167, CPyStatic_multicall___globals);
        goto CPyL304;
    }
    cpy_r_r310 = cpy_r_r328;
    CPy_DECREF(cpy_r_r310);
CPyL297: ;
    if (cpy_r_r11.f0 == NULL) goto CPyL300;
    CPy_Reraise();
    if (!0) {
        goto CPyL304;
    } else
        goto CPyL500;
CPyL299: ;
    CPy_Unreachable();
CPyL300: ;
    cpy_r_r329 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__20;
    if (cpy_r_r329 != NULL) {
        CPy_INCREF(cpy_r_r329);
    }
    if (cpy_r_r329 == NULL) goto CPyL308;
CPyL301: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    CPyGen_SetStopIterationValue(cpy_r_r329);
    CPy_DECREF(cpy_r_r329);
    if (!0) goto CPyL419;
    CPy_Unreachable();
CPyL304: ;
    if (cpy_r_r11.f0 == NULL) goto CPyL306;
    CPy_RestoreExcInfo(cpy_r_r11);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
CPyL306: ;
    cpy_r_r331 = CPy_KeepPropagating();
    if (!cpy_r_r331) goto CPyL419;
    CPy_Unreachable();
CPyL308: ;
    cpy_r_r332 = PyList_New(0);
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27 = cpy_r_r332;
    cpy_r_r333 = 1;
    if (unlikely(!cpy_r_r333)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28 = 0;
    cpy_r_r334 = 1;
    if (unlikely(!cpy_r_r334)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r335 = CPyStatic_multicall___batcher;
    if (likely(cpy_r_r335 != NULL)) goto CPyL314;
    PyErr_SetString(PyExc_NameError, "value for final name \"batcher\" was not set");
    cpy_r_r336 = 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 188, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL314: ;
    cpy_r_r337 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_calls;
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "calls", 188, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r337);
CPyL315: ;
    cpy_r_r338 = CPyDef_multicall___NotSoBrightBatcher___rebatch(cpy_r_r335, cpy_r_r337);
    CPy_DECREF_NO_IMM(cpy_r_r337);
    if (unlikely(cpy_r_r338 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 188, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r339 = PyObject_GetIter(cpy_r_r338);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL501;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__29 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__29);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__29 = cpy_r_r338;
    cpy_r_r340 = 1;
    if (unlikely(!cpy_r_r340)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL502;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30 = cpy_r_r339;
    cpy_r_r341 = 1;
    if (unlikely(!cpy_r_r341)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL319: ;
    cpy_r_r342 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__30;
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__30", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r342);
CPyL320: ;
    cpy_r_r343 = PyIter_Next(cpy_r_r342);
    CPy_DECREF(cpy_r_r342);
    if (cpy_r_r343 == NULL) goto CPyL337;
    cpy_r_r344 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28;
    if (unlikely(cpy_r_r344 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__28", -1, CPyStatic_multicall___globals);
        goto CPyL503;
    }
CPyL322: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_i != CPY_INT_TAG) {
        CPyTagged_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_i);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_i = cpy_r_r344;
    cpy_r_r345 = 1;
    if (unlikely(!cpy_r_r345)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL503;
    }
    if (likely(PyList_Check(cpy_r_r343)))
        cpy_r_r346 = cpy_r_r343;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals, "list", cpy_r_r343);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk = cpy_r_r346;
    cpy_r_r347 = 1;
    if (unlikely(!cpy_r_r347)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r348 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_self;
    if (unlikely(cpy_r_r348 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "self", 187, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r348);
CPyL326: ;
    cpy_r_r349 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk;
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "chunk", 187, CPyStatic_multicall___globals);
        goto CPyL504;
    }
    CPy_INCREF_NO_IMM(cpy_r_r349);
CPyL327: ;
    cpy_r_r350 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_ConnErr_retries;
    if (unlikely(cpy_r_r350 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "ConnErr_retries", 187, CPyStatic_multicall___globals);
        goto CPyL505;
    }
    CPyTagged_INCREF(cpy_r_r350);
CPyL328: ;
    cpy_r_r351 = CPyTagged_Add(cpy_r_r350, 2);
    CPyTagged_DECREF(cpy_r_r350);
    cpy_r_r352 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_id;
    if (unlikely(cpy_r_r352 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 187, CPyStatic_multicall___globals);
        goto CPyL506;
    }
    CPy_INCREF(cpy_r_r352);
CPyL329: ;
    cpy_r_r353 = CPyStatics[243]; /* '_' */
    cpy_r_r354 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_i;
    if (unlikely(cpy_r_r354 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "i", 187, CPyStatic_multicall___globals);
        goto CPyL507;
    }
    CPyTagged_INCREF(cpy_r_r354);
CPyL330: ;
    cpy_r_r355 = CPyTagged_Str(cpy_r_r354);
    CPyTagged_DECREF(cpy_r_r354);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 187, CPyStatic_multicall___globals);
        goto CPyL507;
    }
    cpy_r_r356 = CPyStr_Build(3, cpy_r_r352, cpy_r_r353, cpy_r_r355);
    CPy_DECREF(cpy_r_r352);
    CPy_DECREF(cpy_r_r355);
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 187, CPyStatic_multicall___globals);
        goto CPyL506;
    }
    cpy_r_r357 = CPyDef_multicall___Multicall___fetch_outputs(cpy_r_r348, cpy_r_r349, cpy_r_r351, cpy_r_r356);
    CPy_DECREF_NO_IMM(cpy_r_r349);
    CPyTagged_DECREF(cpy_r_r351);
    CPy_DECREF(cpy_r_r356);
    CPy_DECREF_NO_IMM(cpy_r_r348);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 187, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r358 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27;
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__27", -1, CPyStatic_multicall___globals);
        goto CPyL508;
    }
    CPy_INCREF_NO_IMM(cpy_r_r358);
CPyL334: ;
    cpy_r_r359 = PyList_Append(cpy_r_r358, cpy_r_r357);
    CPy_DECREF_NO_IMM(cpy_r_r358);
    CPy_DECREF(cpy_r_r357);
    cpy_r_r360 = cpy_r_r359 >= 0;
    if (unlikely(!cpy_r_r360)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r361 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28;
    if (unlikely(cpy_r_r361 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__28", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL336: ;
    cpy_r_r362 = cpy_r_r361 + 2;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__28 = cpy_r_r362;
    cpy_r_r363 = 1;
    if (unlikely(!cpy_r_r363)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    } else
        goto CPyL319;
CPyL337: ;
    cpy_r_r364 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r365 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__27;
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__27", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r365);
CPyL339: ;
    cpy_r_r366 = PyObject_GetIter(cpy_r_r365);
    CPy_DECREF_NO_IMM(cpy_r_r365);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 186, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r367 = CPyStatic_multicall___globals;
    cpy_r_r368 = CPyStatics[221]; /* 'gather' */
    cpy_r_r369 = CPyDict_GetItem(cpy_r_r367, cpy_r_r368);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL509;
    }
    PyObject *cpy_r_r370[1] = {cpy_r_r366};
    cpy_r_r371 = (PyObject **)&cpy_r_r370;
    cpy_r_r372 = PyObject_Vectorcall(cpy_r_r369, cpy_r_r371, 1, 0);
    CPy_DECREF(cpy_r_r369);
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL509;
    }
    CPy_DECREF(cpy_r_r366);
    cpy_r_r373 = CPy_GetCoro(cpy_r_r372);
    CPy_DECREF(cpy_r_r372);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 = cpy_r_r373;
    cpy_r_r374 = 1;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r375 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31;
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__31", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r375);
CPyL345: ;
    cpy_r_r376 = CPyIter_Next(cpy_r_r375);
    CPy_DECREF(cpy_r_r375);
    if (cpy_r_r376 != NULL) goto CPyL348;
    cpy_r_r377 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r377 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r378 = cpy_r_r377;
    cpy_r_r379 = NULL;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31 = cpy_r_r379;
    cpy_r_r380 = 1;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL510;
    } else
        goto CPyL370;
CPyL348: ;
    cpy_r_r381 = cpy_r_r376;
CPyL349: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 6;
    return cpy_r_r381;
CPyL350: ;
    cpy_r_r383 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r384 = cpy_r_type != cpy_r_r383;
    if (!cpy_r_r384) goto CPyL511;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL354;
    } else
        goto CPyL512;
CPyL352: ;
    CPy_Unreachable();
CPyL353: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL365;
CPyL354: ;
    cpy_r_r385 = CPy_CatchError();
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f1);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32.f2);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32 = cpy_r_r385;
    cpy_r_r386 = 1;
    if (unlikely(!cpy_r_r386)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL513;
    }
    cpy_r_r387 = (PyObject **)&cpy_r_r13;
    cpy_r_r388 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31;
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__31", -1, CPyStatic_multicall___globals);
        goto CPyL513;
    }
    CPy_INCREF(cpy_r_r388);
CPyL356: ;
    cpy_r_r389 = CPy_YieldFromErrorHandle(cpy_r_r388, cpy_r_r387);
    CPy_DecRef(cpy_r_r388);
    if (unlikely(cpy_r_r389 == 2)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL513;
    }
    if (cpy_r_r389) goto CPyL360;
    cpy_r_r381 = cpy_r_r13;
    cpy_r_r390 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32;
    if (unlikely(cpy_r_r390.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__32", -1, CPyStatic_multicall___globals);
        goto CPyL514;
    }
    CPy_INCREF(cpy_r_r390.f0);
    CPy_INCREF(cpy_r_r390.f1);
    CPy_INCREF(cpy_r_r390.f2);
CPyL359: ;
    CPy_RestoreExcInfo(cpy_r_r390);
    CPy_DecRef(cpy_r_r390.f0);
    CPy_DecRef(cpy_r_r390.f1);
    CPy_DecRef(cpy_r_r390.f2);
    goto CPyL349;
CPyL360: ;
    cpy_r_r378 = cpy_r_r13;
    cpy_r_r391 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32;
    if (unlikely(cpy_r_r391.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__32", -1, CPyStatic_multicall___globals);
        goto CPyL515;
    }
    CPy_INCREF(cpy_r_r391.f0);
    CPy_INCREF(cpy_r_r391.f1);
    CPy_INCREF(cpy_r_r391.f2);
CPyL361: ;
    CPy_RestoreExcInfo(cpy_r_r391);
    CPy_DecRef(cpy_r_r391.f0);
    CPy_DecRef(cpy_r_r391.f1);
    CPy_DecRef(cpy_r_r391.f2);
    goto CPyL370;
CPyL362: ;
    cpy_r_r392 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__32;
    if (unlikely(cpy_r_r392.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__32", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r392.f0);
    CPy_INCREF(cpy_r_r392.f1);
    CPy_INCREF(cpy_r_r392.f2);
CPyL363: ;
    CPy_RestoreExcInfo(cpy_r_r392);
    CPy_DecRef(cpy_r_r392.f0);
    CPy_DecRef(cpy_r_r392.f1);
    CPy_DecRef(cpy_r_r392.f2);
    cpy_r_r393 = CPy_KeepPropagating();
    if (!cpy_r_r393) goto CPyL419;
    CPy_Unreachable();
CPyL365: ;
    cpy_r_r394 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__31;
    if (unlikely(cpy_r_r394 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__31", -1, CPyStatic_multicall___globals);
        goto CPyL516;
    }
    CPy_INCREF(cpy_r_r394);
CPyL366: ;
    cpy_r_r395 = CPyIter_Send(cpy_r_r394, cpy_r_arg);
    CPy_DECREF(cpy_r_r394);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r395 == NULL) goto CPyL368;
    cpy_r_r381 = cpy_r_r395;
    goto CPyL349;
CPyL368: ;
    cpy_r_r396 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r378 = cpy_r_r396;
CPyL370: ;
    if (likely(PyList_Check(cpy_r_r378)))
        cpy_r_r397 = cpy_r_r378;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals, "list", cpy_r_r378);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_batch_results != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_batch_results);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_batch_results = cpy_r_r397;
    cpy_r_r398 = 1;
    if (unlikely(!cpy_r_r398)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 185, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r399 = CPyStatics[242]; /* 'coroutine %s finished' */
    cpy_r_r400 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_id;
    if (unlikely(cpy_r_r400 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "id", 192, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r400);
CPyL373: ;
    cpy_r_r401 = CPyStatic_multicall___log_debug;
    if (unlikely(cpy_r_r401 == NULL)) {
        goto CPyL517;
    } else
        goto CPyL376;
CPyL374: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"log_debug\" was not set");
    cpy_r_r402 = 0;
    if (unlikely(!cpy_r_r402)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 192, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL376: ;
    PyObject *cpy_r_r403[2] = {cpy_r_r399, cpy_r_r400};
    cpy_r_r404 = (PyObject **)&cpy_r_r403;
    cpy_r_r405 = PyObject_Vectorcall(cpy_r_r401, cpy_r_r404, 2, 0);
    if (unlikely(cpy_r_r405 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 192, CPyStatic_multicall___globals);
        goto CPyL518;
    } else
        goto CPyL519;
CPyL377: ;
    CPy_DECREF(cpy_r_r400);
    cpy_r_r406 = PyList_New(0);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33 = cpy_r_r406;
    cpy_r_r407 = 1;
    if (unlikely(!cpy_r_r407)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r408 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_batch_results;
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "batch_results", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r408);
CPyL380: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34 = cpy_r_r408;
    cpy_r_r409 = 1;
    if (unlikely(!cpy_r_r409)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35 = 0;
    cpy_r_r410 = 1;
    if (unlikely(!cpy_r_r410)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL382: ;
    cpy_r_r411 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34;
    if (unlikely(cpy_r_r411 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__34", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r411);
CPyL383: ;
    cpy_r_r412 = (CPyPtr)&((PyVarObject *)cpy_r_r411)->ob_size;
    cpy_r_r413 = *(int64_t *)cpy_r_r412;
    CPy_DECREF_NO_IMM(cpy_r_r411);
    cpy_r_r414 = cpy_r_r413 << 1;
    cpy_r_r415 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35;
    if (unlikely(cpy_r_r415 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__35", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL384: ;
    cpy_r_r416 = (Py_ssize_t)cpy_r_r415 < (Py_ssize_t)cpy_r_r414;
    if (!cpy_r_r416) goto CPyL406;
    cpy_r_r417 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__34;
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__34", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r417);
CPyL386: ;
    cpy_r_r418 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35;
    if (unlikely(cpy_r_r418 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__35", 193, CPyStatic_multicall___globals);
        goto CPyL520;
    }
CPyL387: ;
    cpy_r_r419 = (Py_ssize_t)cpy_r_r418 >> 1;
    cpy_r_r420 = (CPyPtr)&((PyListObject *)cpy_r_r417)->ob_item;
    cpy_r_r421 = *(CPyPtr *)cpy_r_r420;
    cpy_r_r422 = cpy_r_r419 * 8;
    cpy_r_r423 = cpy_r_r421 + cpy_r_r422;
    cpy_r_r424 = *(PyObject * *)cpy_r_r423;
    CPy_INCREF(cpy_r_r424);
    CPy_DECREF_NO_IMM(cpy_r_r417);
    if (likely(PyList_Check(cpy_r_r424)))
        cpy_r_r425 = cpy_r_r424;
    else {
        CPy_TypeErrorTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals, "list", cpy_r_r424);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk = cpy_r_r425;
    cpy_r_r426 = 1;
    if (unlikely(!cpy_r_r426)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r427 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_chunk;
    if (unlikely(cpy_r_r427 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "chunk", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r427);
CPyL390: ;
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36 != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36 = cpy_r_r427;
    cpy_r_r428 = 1;
    if (unlikely(!cpy_r_r428)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37 = 0;
    cpy_r_r429 = 1;
    if (unlikely(!cpy_r_r429)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL392: ;
    cpy_r_r430 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36;
    if (unlikely(cpy_r_r430 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__36", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r430);
CPyL393: ;
    cpy_r_r431 = (CPyPtr)&((PyVarObject *)cpy_r_r430)->ob_size;
    cpy_r_r432 = *(int64_t *)cpy_r_r431;
    CPy_DECREF_NO_IMM(cpy_r_r430);
    cpy_r_r433 = cpy_r_r432 << 1;
    cpy_r_r434 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37;
    if (unlikely(cpy_r_r434 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__37", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL394: ;
    cpy_r_r435 = (Py_ssize_t)cpy_r_r434 < (Py_ssize_t)cpy_r_r433;
    if (!cpy_r_r435) goto CPyL404;
    cpy_r_r436 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__36;
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__36", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r436);
CPyL396: ;
    cpy_r_r437 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37;
    if (unlikely(cpy_r_r437 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__37", 193, CPyStatic_multicall___globals);
        goto CPyL521;
    }
CPyL397: ;
    cpy_r_r438 = (Py_ssize_t)cpy_r_r437 >> 1;
    cpy_r_r439 = (CPyPtr)&((PyListObject *)cpy_r_r436)->ob_item;
    cpy_r_r440 = *(CPyPtr *)cpy_r_r439;
    cpy_r_r441 = cpy_r_r438 * 8;
    cpy_r_r442 = cpy_r_r440 + cpy_r_r441;
    cpy_r_r443 = *(PyObject * *)cpy_r_r442;
    CPy_INCREF(cpy_r_r443);
    CPy_DECREF_NO_IMM(cpy_r_r436);
    PyObject *__tmp82;
    if (unlikely(!(PyTuple_Check(cpy_r_r443) && PyTuple_GET_SIZE(cpy_r_r443) == 2))) {
        __tmp82 = NULL;
        goto __LL83;
    }
    if (PyTuple_GET_ITEM(cpy_r_r443, 0) == Py_None)
        __tmp82 = PyTuple_GET_ITEM(cpy_r_r443, 0);
    else {
        __tmp82 = NULL;
    }
    if (__tmp82 != NULL) goto __LL84;
    if (PyBool_Check(PyTuple_GET_ITEM(cpy_r_r443, 0)))
        __tmp82 = PyTuple_GET_ITEM(cpy_r_r443, 0);
    else {
        __tmp82 = NULL;
    }
    if (__tmp82 != NULL) goto __LL84;
    __tmp82 = NULL;
__LL84: ;
    if (__tmp82 == NULL) goto __LL83;
    if (likely(PyBytes_Check(PyTuple_GET_ITEM(cpy_r_r443, 1)) || PyByteArray_Check(PyTuple_GET_ITEM(cpy_r_r443, 1))))
        __tmp82 = PyTuple_GET_ITEM(cpy_r_r443, 1);
    else {
        __tmp82 = NULL;
    }
    if (__tmp82 == NULL) goto __LL83;
    __tmp82 = cpy_r_r443;
__LL83: ;
    if (unlikely(__tmp82 == NULL)) {
        CPy_TypeError("tuple[union[None, bool], bytes]", cpy_r_r443); cpy_r_r444 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp85 = PyTuple_GET_ITEM(cpy_r_r443, 0);
        CPy_INCREF(__tmp85);
        PyObject *__tmp86;
        if (__tmp85 == Py_None)
            __tmp86 = __tmp85;
        else {
            __tmp86 = NULL;
        }
        if (__tmp86 != NULL) goto __LL87;
        if (PyBool_Check(__tmp85))
            __tmp86 = __tmp85;
        else {
            __tmp86 = NULL;
        }
        if (__tmp86 != NULL) goto __LL87;
        CPy_TypeError("bool or None", __tmp85); 
        __tmp86 = NULL;
__LL87: ;
        cpy_r_r444.f0 = __tmp86;
        PyObject *__tmp88 = PyTuple_GET_ITEM(cpy_r_r443, 1);
        CPy_INCREF(__tmp88);
        PyObject *__tmp89;
        if (likely(PyBytes_Check(__tmp88) || PyByteArray_Check(__tmp88)))
            __tmp89 = __tmp88;
        else {
            CPy_TypeError("bytes", __tmp88); 
            __tmp89 = NULL;
        }
        cpy_r_r444.f1 = __tmp89;
    }
    CPy_DECREF(cpy_r_r443);
    if (unlikely(cpy_r_r444.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_result.f0 != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_result.f0);
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_result.f1);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_result = cpy_r_r444;
    cpy_r_r445 = 1;
    if (unlikely(!cpy_r_r445)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r446 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->_result;
    if (unlikely(cpy_r_r446.f0 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "result", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF(cpy_r_r446.f0);
    CPy_INCREF(cpy_r_r446.f1);
CPyL400: ;
    cpy_r_r447 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33;
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__33", -1, CPyStatic_multicall___globals);
        goto CPyL522;
    }
    CPy_INCREF_NO_IMM(cpy_r_r447);
CPyL401: ;
    cpy_r_r448 = PyTuple_New(2);
    if (unlikely(cpy_r_r448 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp90 = cpy_r_r446.f0;
    PyTuple_SET_ITEM(cpy_r_r448, 0, __tmp90);
    PyObject *__tmp91 = cpy_r_r446.f1;
    PyTuple_SET_ITEM(cpy_r_r448, 1, __tmp91);
    cpy_r_r449 = PyList_Append(cpy_r_r447, cpy_r_r448);
    CPy_DECREF_NO_IMM(cpy_r_r447);
    CPy_DECREF(cpy_r_r448);
    cpy_r_r450 = cpy_r_r449 >= 0;
    if (unlikely(!cpy_r_r450)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    cpy_r_r451 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37;
    if (unlikely(cpy_r_r451 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__37", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL403: ;
    cpy_r_r452 = cpy_r_r451 + 2;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__37 = cpy_r_r452;
    cpy_r_r453 = 1;
    if (unlikely(!cpy_r_r453)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    } else
        goto CPyL392;
CPyL404: ;
    cpy_r_r454 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35;
    if (unlikely(cpy_r_r454 == CPY_INT_TAG)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__35", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    }
CPyL405: ;
    cpy_r_r455 = cpy_r_r454 + 2;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__35 = cpy_r_r455;
    cpy_r_r456 = 1;
    if (unlikely(!cpy_r_r456)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 193, CPyStatic_multicall___globals);
        goto CPyL419;
    } else
        goto CPyL382;
CPyL406: ;
    cpy_r_r457 = ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__33;
    if (unlikely(cpy_r_r457 == NULL)) {
        CPy_AttributeError("multicall/multicall.py", "fetch_outputs", "fetch_outputs_Multicall_gen", "__mypyc_temp__33", -1, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_INCREF_NO_IMM(cpy_r_r457);
CPyL407: ;
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    CPyGen_SetStopIterationValue(cpy_r_r457);
    CPy_DECREF_NO_IMM(cpy_r_r457);
    if (!0) goto CPyL419;
    CPy_Unreachable();
CPyL410: ;
    cpy_r_r459 = cpy_r_r14 == 0;
    if (cpy_r_r459) goto CPyL523;
    cpy_r_r460 = cpy_r_r14 == 1;
    if (cpy_r_r460) {
        goto CPyL524;
    } else
        goto CPyL525;
CPyL412: ;
    cpy_r_r461 = cpy_r_r14 == 2;
    if (cpy_r_r461) {
        goto CPyL526;
    } else
        goto CPyL527;
CPyL413: ;
    cpy_r_r462 = cpy_r_r14 == 3;
    if (cpy_r_r462) {
        goto CPyL528;
    } else
        goto CPyL529;
CPyL414: ;
    cpy_r_r463 = cpy_r_r14 == 4;
    if (cpy_r_r463) {
        goto CPyL530;
    } else
        goto CPyL531;
CPyL415: ;
    cpy_r_r464 = cpy_r_r14 == 5;
    if (cpy_r_r464) {
        goto CPyL532;
    } else
        goto CPyL533;
CPyL416: ;
    cpy_r_r465 = cpy_r_r14 == 6;
    if (cpy_r_r465) {
        goto CPyL350;
    } else
        goto CPyL534;
CPyL417: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r466 = 0;
    if (unlikely(!cpy_r_r466)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL419: ;
    cpy_r_r467 = NULL;
    return cpy_r_r467;
CPyL420: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL6;
CPyL421: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL419;
CPyL422: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL9;
CPyL423: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL419;
CPyL424: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL419;
CPyL425: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL419;
CPyL426: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL32;
CPyL427: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL31;
CPyL428: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL41;
CPyL429: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL41;
CPyL430: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL419;
CPyL431: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL203;
CPyL432: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL203;
CPyL433: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL203;
CPyL434: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL203;
CPyL435: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL70;
CPyL436: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL69;
CPyL437: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL79;
CPyL438: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL79;
CPyL439: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL79;
CPyL440: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL203;
CPyL441: ;
    CPy_DecRef(cpy_r_r110);
    goto CPyL203;
CPyL442: ;
    CPy_DECREF_NO_IMM(cpy_r_r110);
    CPy_DECREF(cpy_r_r111);
    goto CPyL90;
CPyL443: ;
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    goto CPyL203;
CPyL444: ;
    CPy_DECREF(cpy_r_r111);
    goto CPyL94;
CPyL445: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL203;
CPyL446: ;
    CPy_DECREF(cpy_r_r119);
    goto CPyL98;
CPyL447: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL203;
CPyL448: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r126);
    goto CPyL203;
CPyL449: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL203;
CPyL450: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL118;
CPyL451: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL117;
CPyL452: ;
    CPy_XDecRef(cpy_r_r5);
    goto CPyL127;
CPyL453: ;
    CPy_DecRef(cpy_r_r139);
    goto CPyL127;
CPyL454: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL127;
CPyL455: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL203;
CPyL456: ;
    CPy_DecRef(cpy_r_r155);
    goto CPyL203;
CPyL457: ;
    CPy_DECREF_NO_IMM(cpy_r_r155);
    CPy_DECREF(cpy_r_r156);
    goto CPyL138;
CPyL458: ;
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r156);
    goto CPyL203;
CPyL459: ;
    CPy_DECREF(cpy_r_r156);
    goto CPyL142;
CPyL460: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL203;
CPyL461: ;
    CPy_DECREF(cpy_r_r156);
    goto CPyL146;
CPyL462: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL150;
CPyL463: ;
    CPy_DecRef(cpy_r_r174);
    goto CPyL203;
CPyL464: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL203;
CPyL465: ;
    CPy_DecRef(cpy_r_r185);
    goto CPyL203;
CPyL466: ;
    CPy_DecRef(cpy_r_r185);
    CPy_DecRef(cpy_r_r186);
    goto CPyL203;
CPyL467: ;
    CPy_DECREF(cpy_r_r196);
    goto CPyL172;
CPyL468: ;
    CPy_DecRef(cpy_r_r196);
    goto CPyL203;
CPyL469: ;
    CPy_DECREF(cpy_r_r196);
    goto CPyL176;
CPyL470: ;
    CPy_DECREF(cpy_r_r203);
    goto CPyL180;
CPyL471: ;
    CPy_DecRef(cpy_r_r205);
    goto CPyL203;
CPyL472: ;
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    goto CPyL203;
CPyL473: ;
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    goto CPyL203;
CPyL474: ;
    CPy_DecRef(cpy_r_r212);
    goto CPyL203;
CPyL475: ;
    CPy_DecRef(cpy_r_r223);
    goto CPyL197;
CPyL476: ;
    CPy_DecRef(cpy_r_r223);
    goto CPyL203;
CPyL477: ;
    CPy_DECREF(cpy_r_r228);
    goto CPyL200;
CPyL478: ;
    CPy_DecRef(cpy_r_r240);
    goto CPyL215;
CPyL479: ;
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r256);
    goto CPyL257;
CPyL480: ;
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r256);
    CPy_DecRef(cpy_r_r257);
    goto CPyL257;
CPyL481: ;
    CPy_DecRef(cpy_r_r254);
    CPy_DecRef(cpy_r_r255);
    CPy_DecRef(cpy_r_r256);
    CPy_DecRef(cpy_r_r258);
    goto CPyL257;
CPyL482: ;
    CPy_DecRef(cpy_r_r267);
    goto CPyL257;
CPyL483: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL234;
CPyL484: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL233;
CPyL485: ;
    CPy_XDecRef(cpy_r_r7);
    goto CPyL243;
CPyL486: ;
    CPy_DecRef(cpy_r_r270);
    goto CPyL243;
CPyL487: ;
    CPy_DecRef(cpy_r_r267);
    goto CPyL243;
CPyL488: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL257;
CPyL489: ;
    CPy_DecRef(cpy_r_r300);
    goto CPyL304;
CPyL490: ;
    CPy_DecRef(cpy_r_r301);
    goto CPyL304;
CPyL491: ;
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL275;
CPyL492: ;
    CPy_XDECREF(cpy_r_r9);
    goto CPyL280;
CPyL493: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL279;
CPyL494: ;
    CPy_XDecRef(cpy_r_r9);
    goto CPyL289;
CPyL495: ;
    CPy_DecRef(cpy_r_r313);
    goto CPyL289;
CPyL496: ;
    CPy_XDecRef(cpy_r_r11.f0);
    CPy_XDecRef(cpy_r_r11.f1);
    CPy_XDecRef(cpy_r_r11.f2);
    goto CPyL286;
CPyL497: ;
    CPy_XDecRef(cpy_r_r11.f0);
    CPy_XDecRef(cpy_r_r11.f1);
    CPy_XDecRef(cpy_r_r11.f2);
    goto CPyL291;
CPyL498: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL304;
CPyL499: ;
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL294;
CPyL500: ;
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL299;
CPyL501: ;
    CPy_DecRef(cpy_r_r338);
    goto CPyL419;
CPyL502: ;
    CPy_DecRef(cpy_r_r339);
    goto CPyL419;
CPyL503: ;
    CPy_DecRef(cpy_r_r343);
    goto CPyL419;
CPyL504: ;
    CPy_DecRef(cpy_r_r348);
    goto CPyL419;
CPyL505: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    goto CPyL419;
CPyL506: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    CPyTagged_DecRef(cpy_r_r351);
    goto CPyL419;
CPyL507: ;
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    CPyTagged_DecRef(cpy_r_r351);
    CPy_DecRef(cpy_r_r352);
    goto CPyL419;
CPyL508: ;
    CPy_DecRef(cpy_r_r357);
    goto CPyL419;
CPyL509: ;
    CPy_DecRef(cpy_r_r366);
    goto CPyL419;
CPyL510: ;
    CPy_DecRef(cpy_r_r378);
    goto CPyL419;
CPyL511: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL353;
CPyL512: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL352;
CPyL513: ;
    CPy_XDecRef(cpy_r_r13);
    goto CPyL362;
CPyL514: ;
    CPy_DecRef(cpy_r_r381);
    goto CPyL362;
CPyL515: ;
    CPy_DecRef(cpy_r_r378);
    goto CPyL362;
CPyL516: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL419;
CPyL517: ;
    CPy_DecRef(cpy_r_r400);
    goto CPyL374;
CPyL518: ;
    CPy_DecRef(cpy_r_r400);
    goto CPyL419;
CPyL519: ;
    CPy_DECREF(cpy_r_r405);
    goto CPyL377;
CPyL520: ;
    CPy_DecRef(cpy_r_r417);
    goto CPyL419;
CPyL521: ;
    CPy_DecRef(cpy_r_r436);
    goto CPyL419;
CPyL522: ;
    CPy_DecRef(cpy_r_r446.f0);
    CPy_DecRef(cpy_r_r446.f1);
    goto CPyL419;
CPyL523: ;
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
CPyL524: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL29;
CPyL525: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL412;
CPyL526: ;
    CPy_XDECREF(cpy_r_r5);
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL67;
CPyL527: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL413;
CPyL528: ;
    CPy_XDECREF(cpy_r_r7);
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL115;
CPyL529: ;
    CPy_XDECREF(cpy_r_r5);
    goto CPyL414;
CPyL530: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    CPy_XDECREF(cpy_r_r13);
    goto CPyL231;
CPyL531: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL415;
CPyL532: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL277;
CPyL533: ;
    CPy_XDECREF(cpy_r_r9);
    CPy_XDECREF(cpy_r_r11.f0);
    CPy_XDECREF(cpy_r_r11.f1);
    CPy_XDECREF(cpy_r_r11.f2);
    goto CPyL416;
CPyL534: ;
    CPy_XDECREF(cpy_r_r13);
    goto CPyL417;
}

PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
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
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
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
    cpy_r_r1 = CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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
    PyObject *__tmp92 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp92);
    PyObject *__tmp93 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp93);
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
    cpy_r_r0 = CPyStatics[244]; /* '' */
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
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_self != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_self);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_self = cpy_r_self;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL14;
    }
    CPy_INCREF_NO_IMM(cpy_r_calls);
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_calls != NULL) {
        CPy_DECREF_NO_IMM(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_calls);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_calls = cpy_r_calls;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL14;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_ConnErr_retries != CPY_INT_TAG) {
        CPyTagged_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_ConnErr_retries);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_ConnErr_retries = cpy_r_ConnErr_retries;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/multicall.py", "fetch_outputs", 159, CPyStatic_multicall___globals);
        goto CPyL15;
    }
    if (((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_id != NULL) {
        CPy_DECREF(((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_id);
    }
    ((multicall___multicall___fetch_outputs_Multicall_genObject *)cpy_r_r1)->_id = cpy_r_id;
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
    tuple_T2OO __tmp94 = { NULL, NULL };
    cpy_r_r10 = __tmp94;
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
        goto __LL95;
    }
    if (PyLong_Check(obj_unused))
        arg_unused = obj_unused;
    else {
        arg_unused = NULL;
    }
    if (arg_unused != NULL) goto __LL95;
    if (obj_unused == Py_None)
        arg_unused = obj_unused;
    else {
        arg_unused = NULL;
    }
    if (arg_unused != NULL) goto __LL95;
    CPy_TypeError("int or None", obj_unused); 
    goto fail;
__LL95: ;
    tuple_T2OO retval = CPyDef_multicall___NotSoBrightBatcher___split_calls(arg_self, arg_calls, arg_unused);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp96 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp96);
    PyObject *__tmp97 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp97);
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
    cpy_r_r40 = CPyStatics[245]; /* 'round' */
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
    cpy_r_r53 = CPyStatics[246]; /* 'Multicall batch size reduced from ' */
    cpy_r_r54 = ((multicall___multicall___NotSoBrightBatcherObject *)cpy_r_self)->_step;
    CPyTagged_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyTagged_Str(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL36;
    }
    cpy_r_r56 = CPyStatics[247]; /* ' to ' */
    cpy_r_r57 = CPyTagged_Str(cpy_r_new_step);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL37;
    }
    cpy_r_r58 = CPyStatics[248]; /* '. The failed batch had ' */
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_calls)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = CPyTagged_Str(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "rebatch", 269, CPyStatic_multicall___globals);
        goto CPyL38;
    }
    cpy_r_r63 = CPyStatics[249]; /* ' calls.' */
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
    PyObject *__tmp98 = cpy_r_r73.f0;
    PyTuple_SET_ITEM(cpy_r_r74, 0, __tmp98);
    PyObject *__tmp99 = cpy_r_r73.f1;
    PyTuple_SET_ITEM(cpy_r_r74, 1, __tmp99);
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
    cpy_r_r1 = CPyStatics[250]; /* 'ClientOSError' */
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
    cpy_r_r6 = CPyStatics[251]; /* 'broken pipe' */
    cpy_r_r7 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 282, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r8 = CPyStatics[252]; /* 'lower' */
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
    cpy_r_r23 = CPyStatics[253]; /* 'ClientResponseError' */
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
    cpy_r_r28 = CPyStatics[254]; /* 'request entity too large' */
    cpy_r_r29 = CPyStatics[255]; /* 'connection reset by peer' */
    CPy_INCREF(cpy_r_r28);
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30.f0 = cpy_r_r28;
    cpy_r_r30.f1 = cpy_r_r29;
    cpy_r_r31 = PyTuple_New(2);
    if (unlikely(cpy_r_r31 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp100 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r31, 0, __tmp100);
    PyObject *__tmp101 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r31, 1, __tmp101);
    cpy_r_strings = cpy_r_r31;
    cpy_r_r32 = 1;
    PyObject *__tmp102;
    if (unlikely(!(PyTuple_Check(cpy_r_strings) && PyTuple_GET_SIZE(cpy_r_strings) == 2))) {
        __tmp102 = NULL;
        goto __LL103;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 0))))
        __tmp102 = PyTuple_GET_ITEM(cpy_r_strings, 0);
    else {
        __tmp102 = NULL;
    }
    if (__tmp102 == NULL) goto __LL103;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 1))))
        __tmp102 = PyTuple_GET_ITEM(cpy_r_strings, 1);
    else {
        __tmp102 = NULL;
    }
    if (__tmp102 == NULL) goto __LL103;
    __tmp102 = cpy_r_strings;
__LL103: ;
    if (unlikely(__tmp102 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_strings); cpy_r_r33 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp104 = PyTuple_GET_ITEM(cpy_r_strings, 0);
        CPy_INCREF(__tmp104);
        PyObject *__tmp105;
        if (likely(PyUnicode_Check(__tmp104)))
            __tmp105 = __tmp104;
        else {
            CPy_TypeError("str", __tmp104); 
            __tmp105 = NULL;
        }
        cpy_r_r33.f0 = __tmp105;
        PyObject *__tmp106 = PyTuple_GET_ITEM(cpy_r_strings, 1);
        CPy_INCREF(__tmp106);
        PyObject *__tmp107;
        if (likely(PyUnicode_Check(__tmp106)))
            __tmp107 = __tmp106;
        else {
            CPy_TypeError("str", __tmp106); 
            __tmp107 = NULL;
        }
        cpy_r_r33.f1 = __tmp107;
    }
    CPy_DECREF(cpy_r_strings);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 287, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp108 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp108);
    PyObject *__tmp109 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp109);
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
    cpy_r_r39 = CPyStatics[252]; /* 'lower' */
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
    cpy_r_r56 = CPyStatics[256]; /* 'ConnectionError' */
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
    cpy_r_r61 = CPyStatics[257]; /* ("('Connection aborted.', ConnectionResetError(104, "
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
    cpy_r_r74 = CPyStatics[258]; /* 'HTTPError' */
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
    cpy_r_r79 = CPyStatics[254]; /* 'request entity too large' */
    cpy_r_r80 = CPyStatics[259]; /* 'payload too large' */
    cpy_r_r81 = CPyStatics[260]; /* 'time-out' */
    cpy_r_r82 = CPyStatics[261]; /* '520 server error' */
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
    PyObject *__tmp110 = cpy_r_r83.f0;
    PyTuple_SET_ITEM(cpy_r_r84, 0, __tmp110);
    PyObject *__tmp111 = cpy_r_r83.f1;
    PyTuple_SET_ITEM(cpy_r_r84, 1, __tmp111);
    PyObject *__tmp112 = cpy_r_r83.f2;
    PyTuple_SET_ITEM(cpy_r_r84, 2, __tmp112);
    PyObject *__tmp113 = cpy_r_r83.f3;
    PyTuple_SET_ITEM(cpy_r_r84, 3, __tmp113);
    cpy_r_strings = cpy_r_r84;
    cpy_r_r85 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    cpy_r_r86 = CPyStatics[252]; /* 'lower' */
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
    cpy_r_r91 = CPyStatics[262]; /* '__contains__' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL99;
    }
    PyObject *__tmp114;
    if (unlikely(!(PyTuple_Check(cpy_r_strings) && PyTuple_GET_SIZE(cpy_r_strings) == 4))) {
        __tmp114 = NULL;
        goto __LL115;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 0))))
        __tmp114 = PyTuple_GET_ITEM(cpy_r_strings, 0);
    else {
        __tmp114 = NULL;
    }
    if (__tmp114 == NULL) goto __LL115;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 1))))
        __tmp114 = PyTuple_GET_ITEM(cpy_r_strings, 1);
    else {
        __tmp114 = NULL;
    }
    if (__tmp114 == NULL) goto __LL115;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 2))))
        __tmp114 = PyTuple_GET_ITEM(cpy_r_strings, 2);
    else {
        __tmp114 = NULL;
    }
    if (__tmp114 == NULL) goto __LL115;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_strings, 3))))
        __tmp114 = PyTuple_GET_ITEM(cpy_r_strings, 3);
    else {
        __tmp114 = NULL;
    }
    if (__tmp114 == NULL) goto __LL115;
    __tmp114 = cpy_r_strings;
__LL115: ;
    if (unlikely(__tmp114 == NULL)) {
        CPy_TypeError("tuple[str, str, str, str]", cpy_r_strings); cpy_r_r93 = (tuple_T4OOOO) { NULL, NULL, NULL, NULL };
    } else {
        PyObject *__tmp116 = PyTuple_GET_ITEM(cpy_r_strings, 0);
        CPy_INCREF(__tmp116);
        PyObject *__tmp117;
        if (likely(PyUnicode_Check(__tmp116)))
            __tmp117 = __tmp116;
        else {
            CPy_TypeError("str", __tmp116); 
            __tmp117 = NULL;
        }
        cpy_r_r93.f0 = __tmp117;
        PyObject *__tmp118 = PyTuple_GET_ITEM(cpy_r_strings, 1);
        CPy_INCREF(__tmp118);
        PyObject *__tmp119;
        if (likely(PyUnicode_Check(__tmp118)))
            __tmp119 = __tmp118;
        else {
            CPy_TypeError("str", __tmp118); 
            __tmp119 = NULL;
        }
        cpy_r_r93.f1 = __tmp119;
        PyObject *__tmp120 = PyTuple_GET_ITEM(cpy_r_strings, 2);
        CPy_INCREF(__tmp120);
        PyObject *__tmp121;
        if (likely(PyUnicode_Check(__tmp120)))
            __tmp121 = __tmp120;
        else {
            CPy_TypeError("str", __tmp120); 
            __tmp121 = NULL;
        }
        cpy_r_r93.f2 = __tmp121;
        PyObject *__tmp122 = PyTuple_GET_ITEM(cpy_r_strings, 3);
        CPy_INCREF(__tmp122);
        PyObject *__tmp123;
        if (likely(PyUnicode_Check(__tmp122)))
            __tmp123 = __tmp122;
        else {
            CPy_TypeError("str", __tmp122); 
            __tmp123 = NULL;
        }
        cpy_r_r93.f3 = __tmp123;
    }
    CPy_DECREF(cpy_r_strings);
    if (unlikely(cpy_r_r93.f0 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL101;
    }
    cpy_r_r94 = CPyModule_builtins;
    cpy_r_r95 = CPyStatics[263]; /* 'map' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 304, CPyStatic_multicall___globals);
        goto CPyL102;
    }
    cpy_r_r97 = PyTuple_New(4);
    if (unlikely(cpy_r_r97 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp124 = cpy_r_r93.f0;
    PyTuple_SET_ITEM(cpy_r_r97, 0, __tmp124);
    PyObject *__tmp125 = cpy_r_r93.f1;
    PyTuple_SET_ITEM(cpy_r_r97, 1, __tmp125);
    PyObject *__tmp126 = cpy_r_r93.f2;
    PyTuple_SET_ITEM(cpy_r_r97, 2, __tmp126);
    PyObject *__tmp127 = cpy_r_r93.f3;
    PyTuple_SET_ITEM(cpy_r_r97, 3, __tmp127);
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
    cpy_r_r102 = CPyStatics[264]; /* 'any' */
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
    cpy_r_r114 = CPyStatics[265]; /* 'TimeoutError' */
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
    cpy_r_r120 = CPyStatics[266]; /* 'ValueError' */
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
    cpy_r_r125 = CPyStatics[267]; /* 'out of gas' */
    cpy_r_r126 = PyObject_Str(cpy_r_e);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "_raise_or_proceed", 310, CPyStatic_multicall___globals);
        goto CPyL90;
    }
    cpy_r_r127 = CPyStatics[252]; /* 'lower' */
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
    cpy_r_r5 = CPyStatics[410]; /* ('TimeoutError',) */
    cpy_r_r6 = CPyStatics[268]; /* 'asyncio' */
    cpy_r_r7 = CPyStatic_multicall___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 1, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_asyncio = cpy_r_r8;
    CPy_INCREF(CPyModule_asyncio);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[411]; /* ('time',) */
    cpy_r_r10 = CPyStatics[216]; /* 'time' */
    cpy_r_r11 = CPyStatic_multicall___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 2, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_time = cpy_r_r12;
    CPy_INCREF(CPyModule_time);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[412]; /* ('Any', 'Dict', 'Final', 'Generator', 'List', 'Optional',
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
    cpy_r_r24 = CPyStatics[416]; /* (('aiohttp', 'aiohttp', 'aiohttp'),
                                    ('cchecksum', 'cchecksum', 'cchecksum'),
                                    ('requests', 'requests', 'requests')) */
    cpy_r_r25 = CPyStatic_multicall___globals;
    cpy_r_r26 = CPyStatics[270]; /* 'multicall/multicall.py' */
    cpy_r_r27 = CPyStatics[45]; /* '<module>' */
    cpy_r_r28 = CPyImport_ImportMany(cpy_r_r24, cpy_r_r21, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r23);
    if (!cpy_r_r28) goto CPyL55;
    cpy_r_r29 = CPyStatics[417]; /* ('AnyAddress',) */
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
    cpy_r_r33 = CPyStatics[418]; /* ('toolz',) */
    cpy_r_r34 = CPyStatics[272]; /* 'eth_utils' */
    cpy_r_r35 = CPyStatic_multicall___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 9, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyModule_eth_utils = cpy_r_r36;
    CPy_INCREF(CPyModule_eth_utils);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[392]; /* ('Web3',) */
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
    cpy_r_r41 = CPyStatics[419]; /* ('Call',) */
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
    cpy_r_r45 = CPyStatics[420]; /* ('GAS_LIMIT', 'MULTICALL2_ADDRESSES',
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
    cpy_r_r49 = CPyStatics[395]; /* ('setup_logger',) */
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
    cpy_r_r53 = CPyStatics[421]; /* ('_get_semaphore', 'await_awaitable', 'chain_id',
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
    cpy_r_r68 = CPyStatics[273]; /* 'warning' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 30, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___log_warning = cpy_r_r69;
    CPy_INCREF(CPyStatic_multicall___log_warning);
    cpy_r_r70 = CPyStatic_multicall___globals;
    cpy_r_r71 = CPyStatics[274]; /* 'log_warning' */
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
    PyObject *__tmp128 = cpy_r_r90.f0;
    PyTuple_SET_ITEM(cpy_r_r91, 0, __tmp128);
    PyObject *__tmp129 = cpy_r_r90.f1;
    PyTuple_SET_ITEM(cpy_r_r91, 1, __tmp129);
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
    PyObject *__tmp130 = cpy_r_r94.f0;
    PyTuple_SET_ITEM(cpy_r_r95, 0, __tmp130);
    PyObject *__tmp131 = cpy_r_r94.f1;
    PyTuple_SET_ITEM(cpy_r_r95, 1, __tmp131);
    cpy_r_r96 = PyObject_GetItem(cpy_r_r84, cpy_r_r95);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 33, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r97 = CPyStatic_multicall___globals;
    cpy_r_r98 = CPyStatics[275]; /* 'CallResponse' */
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
    cpy_r_r109 = CPyStatics[271]; /* 'toolz' */
    cpy_r_r110 = CPyDict_GetItem(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 37, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r111 = CPyStatics[276]; /* 'concat' */
    cpy_r_r112 = CPyObject_GetAttr(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 37, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___concat = cpy_r_r112;
    CPy_INCREF(CPyStatic_multicall___concat);
    cpy_r_r113 = CPyStatic_multicall___globals;
    cpy_r_r114 = CPyStatics[276]; /* 'concat' */
    cpy_r_r115 = CPyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 37, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r117 = CPyStatic_multicall___globals;
    cpy_r_r118 = CPyStatics[271]; /* 'toolz' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 38, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r120 = CPyStatics[277]; /* 'mapcat' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 38, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    CPyStatic_multicall___mapcat = cpy_r_r121;
    CPy_INCREF(CPyStatic_multicall___mapcat);
    cpy_r_r122 = CPyStatic_multicall___globals;
    cpy_r_r123 = CPyStatics[277]; /* 'mapcat' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r122, cpy_r_r123, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("multicall/multicall.py", "<module>", 38, CPyStatic_multicall___globals);
        goto CPyL55;
    }
    cpy_r_r126 = NULL;
    cpy_r_r127 = CPyStatics[278]; /* 'multicall.multicall' */
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
    cpy_r_r132 = CPyStatics[279]; /* 'calls' */
    cpy_r_r133 = CPyStatics[75]; /* 'block_id' */
    cpy_r_r134 = CPyStatics[280]; /* 'require_success' */
    cpy_r_r135 = CPyStatics[76]; /* 'gas_limit' */
    cpy_r_r136 = CPyStatics[9]; /* 'w3' */
    cpy_r_r137 = CPyStatics[78]; /* 'origin' */
    cpy_r_r138 = CPyStatics[281]; /* 'chainid' */
    cpy_r_r139 = CPyStatics[282]; /* 'multicall_address' */
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
    cpy_r_r144 = CPyStatics[283]; /* 'Multicall' */
    cpy_r_r145 = CPyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r129);
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
    cpy_r_r151 = CPyStatics[278]; /* 'multicall.multicall' */
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
    cpy_r_r156 = CPyStatics[284]; /* 'step' */
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
    cpy_r_r161 = CPyStatics[285]; /* 'NotSoBrightBatcher' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r160, cpy_r_r161, cpy_r_r153);
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
    cpy_r_r166 = CPyStatics[286]; /* 'batcher' */
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
static PyObject *signature___Signature_setup(PyTypeObject *type);
PyObject *CPyDef_signature___Signature(PyObject *cpy_r_signature);

static PyObject *
signature___Signature_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_signature___Signature) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = signature___Signature_setup(type);
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
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encode_data",
     (PyCFunction)CPyPy_signature___Signature___encode_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"decode_data",
     (PyCFunction)CPyPy_signature___Signature___decode_data,
     METH_FASTCALL | METH_KEYWORDS, NULL},
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
};
static PyTypeObject *CPyType_signature___Signature_template = &CPyType_signature___Signature_template_;

static PyObject *
signature___Signature_setup(PyTypeObject *type)
{
    multicall___signature___SignatureObject *self;
    self = (multicall___signature___SignatureObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = signature___Signature_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_signature___Signature(PyObject *cpy_r_signature)
{
    PyObject *self = signature___Signature_setup(CPyType_signature___Signature);
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
    if (tmp != NULL) goto __LL132;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL132;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL132: ;
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
static int signature_exec(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_multicall___signature_internal, "__name__");
    CPyStatic_signature___globals = PyModule_GetDict(CPyModule_multicall___signature_internal);
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
    Py_CLEAR(CPyModule_multicall___signature_internal);
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
static PyMethodDef signaturemodule_methods[] = {
    {"get_4byte_selector", (PyCFunction)CPyPy_signature___get_4byte_selector, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_signature", (PyCFunction)CPyPy_signature___parse_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_typestring", (PyCFunction)CPyPy_signature___parse_typestring, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_signature", (PyCFunction)CPyPy_signature____get_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

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
    if (CPyModule_multicall___signature_internal) {
        Py_INCREF(CPyModule_multicall___signature_internal);
        return CPyModule_multicall___signature_internal;
    }
    CPyModule_multicall___signature_internal = PyModule_Create(&signaturemodule);
    if (unlikely(CPyModule_multicall___signature_internal == NULL))
        goto fail;
    if (signature_exec(CPyModule_multicall___signature_internal) != 0)
        goto fail;
    return CPyModule_multicall___signature_internal;
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
    cpy_r_r0 = CPyStatics[287]; /* ' ' */
    cpy_r_r1 = CPyStatics[244]; /* '' */
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
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_end;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
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
    tuple_T3OOO cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 48, CPyStatic_signature___globals);
        goto CPyL38;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 49, CPyStatic_signature___globals);
        goto CPyL39;
    }
    cpy_r_start = 0;
    cpy_r_r2 = 0;
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = CPyStr_Size_size_t(cpy_r_signature);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 51, CPyStatic_signature___globals);
        goto CPyL40;
    }
    cpy_r_r6 = cpy_r_r4 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL41;
    cpy_r_end = cpy_r_r2;
    cpy_r_r8 = CPyStr_GetItem(cpy_r_signature, cpy_r_r3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 51, CPyStatic_signature___globals);
        goto CPyL42;
    }
    cpy_r_r9 = CPyStatics[288]; /* '(' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 52, CPyStatic_signature___globals);
        goto CPyL43;
    }
CPyL9: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = PyList_Append(cpy_r_r1, cpy_r_r8);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 53, CPyStatic_signature___globals);
        goto CPyL43;
    }
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r20 != 0;
    if (cpy_r_r21) goto CPyL16;
    cpy_r_r22 = CPyStr_GetSlice(cpy_r_signature, cpy_r_start, cpy_r_end);
    CPyTagged_DECREF(cpy_r_start);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 55, CPyStatic_signature___globals);
        goto CPyL44;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 55, CPyStatic_signature___globals, "str", cpy_r_r22);
        goto CPyL44;
    }
    cpy_r_r24 = PyList_Append(cpy_r_r0, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 55, CPyStatic_signature___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_end);
    cpy_r_start = cpy_r_end;
CPyL16: ;
    cpy_r_r26 = CPyStatics[289]; /* ')' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r8, cpy_r_r26);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL19;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL19;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 57, CPyStatic_signature___globals);
        goto CPyL42;
    }
CPyL19: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (!cpy_r_r32) goto CPyL45;
    cpy_r_r33 = CPyList_PopLast(cpy_r_r1);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 58, CPyStatic_signature___globals);
        goto CPyL42;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeError("str", cpy_r_r33); 
        cpy_r_r34 = NULL;
    }
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 58, CPyStatic_signature___globals);
        goto CPyL42;
    } else
        goto CPyL46;
CPyL22: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (cpy_r_r38) goto CPyL45;
    cpy_r_r39 = CPyTagged_Add(cpy_r_end, 2);
    cpy_r_r40 = CPyStr_GetSlice(cpy_r_signature, cpy_r_start, cpy_r_r39);
    CPyTagged_DECREF(cpy_r_start);
    CPyTagged_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 60, CPyStatic_signature___globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 60, CPyStatic_signature___globals, "str", cpy_r_r40);
        goto CPyL47;
    }
    cpy_r_r42 = PyList_Append(cpy_r_r0, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 60, CPyStatic_signature___globals);
        goto CPyL47;
    }
    cpy_r_r44 = CPyTagged_Add(cpy_r_end, 2);
    CPyTagged_DECREF(cpy_r_end);
    cpy_r_start = cpy_r_r44;
CPyL27: ;
    cpy_r_r45 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r45;
    cpy_r_r46 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r46;
    goto CPyL3;
CPyL28: ;
    cpy_r_r47 = CPyStatics[244]; /* '' */
    cpy_r_r48 = CPyList_GetSlice(cpy_r_r0, 0, 4);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 62, CPyStatic_signature___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 62, CPyStatic_signature___globals, "list", cpy_r_r48);
        goto CPyL39;
    }
    cpy_r_r50 = PyUnicode_Join(cpy_r_r47, cpy_r_r49);
    CPy_DECREF_NO_IMM(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 62, CPyStatic_signature___globals);
        goto CPyL39;
    }
    cpy_r_r51 = CPyList_GetItemShort(cpy_r_r0, 2);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 63, CPyStatic_signature___globals);
        goto CPyL48;
    }
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 63, CPyStatic_signature___globals, "str", cpy_r_r51);
        goto CPyL48;
    }
    cpy_r_r53 = CPyDef_signature___parse_typestring(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 63, CPyStatic_signature___globals);
        goto CPyL48;
    }
    cpy_r_r54 = CPyList_GetItemShort(cpy_r_r0, 4);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 64, CPyStatic_signature___globals);
        goto CPyL49;
    }
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_signature", 64, CPyStatic_signature___globals, "str", cpy_r_r54);
        goto CPyL49;
    }
    cpy_r_r56 = CPyDef_signature___parse_typestring(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_signature", 64, CPyStatic_signature___globals);
        goto CPyL49;
    }
    cpy_r_r57.f0 = cpy_r_r50;
    cpy_r_r57.f1 = cpy_r_r53;
    cpy_r_r57.f2 = cpy_r_r56;
    return cpy_r_r57;
CPyL38: ;
    tuple_T3OOO __tmp133 = { NULL, NULL, NULL };
    cpy_r_r58 = __tmp133;
    return cpy_r_r58;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_start);
    goto CPyL38;
CPyL41: ;
    CPy_DECREF_NO_IMM(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_start);
    goto CPyL28;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_start);
    CPyTagged_DecRef(cpy_r_end);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_start);
    CPyTagged_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r8);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r8);
    goto CPyL38;
CPyL45: ;
    CPyTagged_DECREF(cpy_r_end);
    goto CPyL27;
CPyL46: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_end);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r50);
    goto CPyL38;
CPyL49: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL38;
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
    PyObject *__tmp134 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp134);
    PyObject *__tmp135 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp135);
    PyObject *__tmp136 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp136);
    return retbox;
fail: ;
    CPy_AddTraceback("multicall/signature.py", "parse_signature", 25, CPyStatic_signature___globals);
    return NULL;
}

PyObject *CPyDef_signature___parse_typestring(PyObject *cpy_r_typestring) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_part;
    CPyTagged cpy_r_inside_tuples;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = CPyStatics[290]; /* '()' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_typestring, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 69, CPyStatic_signature___globals);
        goto CPyL35;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 70, CPyStatic_signature___globals);
        goto CPyL35;
    }
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 71, CPyStatic_signature___globals);
        goto CPyL35;
    }
    cpy_r_r9 = CPyStatics[244]; /* '' */
    CPy_INCREF(cpy_r_r9);
    cpy_r_part = cpy_r_r9;
    cpy_r_inside_tuples = 0;
    cpy_r_r10 = CPyStr_GetSlice(cpy_r_typestring, 2, -2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals, "str", cpy_r_r10);
        goto CPyL36;
    }
    cpy_r_r12 = 0;
CPyL10: ;
    cpy_r_r13 = CPyStr_Size_size_t(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals);
        goto CPyL37;
    }
    cpy_r_r15 = cpy_r_r13 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL38;
    cpy_r_r17 = CPyStr_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 74, CPyStatic_signature___globals);
        goto CPyL37;
    }
    cpy_r_r18 = CPyStatics[288]; /* '(' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_r17, cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL16;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 75, CPyStatic_signature___globals);
        goto CPyL39;
    }
CPyL16: ;
    cpy_r_r24 = cpy_r_r19 == 0;
    if (!cpy_r_r24) goto CPyL18;
    cpy_r_r25 = CPyTagged_Add(cpy_r_inside_tuples, 2);
    CPyTagged_DECREF(cpy_r_inside_tuples);
    cpy_r_inside_tuples = cpy_r_r25;
    goto CPyL30;
CPyL18: ;
    cpy_r_r26 = CPyStatics[289]; /* ')' */
    cpy_r_r27 = PyUnicode_Compare(cpy_r_r17, cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 == -1;
    if (!cpy_r_r28) goto CPyL21;
    cpy_r_r29 = PyErr_Occurred();
    cpy_r_r30 = cpy_r_r29 != NULL;
    if (!cpy_r_r30) goto CPyL21;
    cpy_r_r31 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 77, CPyStatic_signature___globals);
        goto CPyL39;
    }
CPyL21: ;
    cpy_r_r32 = cpy_r_r27 == 0;
    if (!cpy_r_r32) goto CPyL23;
    cpy_r_r33 = CPyTagged_Subtract(cpy_r_inside_tuples, 2);
    CPyTagged_DECREF(cpy_r_inside_tuples);
    cpy_r_inside_tuples = cpy_r_r33;
    goto CPyL30;
CPyL23: ;
    cpy_r_r34 = CPyStatics[291]; /* ',' */
    cpy_r_r35 = PyUnicode_Compare(cpy_r_r17, cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL26;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL26;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 79, CPyStatic_signature___globals);
        goto CPyL39;
    }
CPyL26: ;
    cpy_r_r40 = cpy_r_r35 == 0;
    if (!cpy_r_r40) goto CPyL30;
    cpy_r_r41 = cpy_r_inside_tuples == 0;
    if (cpy_r_r41) {
        goto CPyL40;
    } else
        goto CPyL30;
CPyL28: ;
    cpy_r_r42 = PyList_Append(cpy_r_r8, cpy_r_part);
    CPy_DECREF(cpy_r_part);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 80, CPyStatic_signature___globals);
        goto CPyL41;
    }
    cpy_r_r44 = CPyStatics[244]; /* '' */
    CPy_INCREF(cpy_r_r44);
    cpy_r_part = cpy_r_r44;
    goto CPyL32;
CPyL30: ;
    cpy_r_r45 = CPyStr_Append(cpy_r_part, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 83, CPyStatic_signature___globals);
        goto CPyL41;
    }
    cpy_r_part = cpy_r_r45;
CPyL32: ;
    cpy_r_r46 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r46;
    goto CPyL10;
CPyL33: ;
    cpy_r_r47 = PyList_Append(cpy_r_r8, cpy_r_part);
    CPy_DECREF(cpy_r_part);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("multicall/signature.py", "parse_typestring", 84, CPyStatic_signature___globals);
        goto CPyL42;
    }
    return cpy_r_r8;
CPyL35: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL36: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_part);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_part);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    CPy_DecRef(cpy_r_r11);
    goto CPyL35;
CPyL38: ;
    CPyTagged_DECREF(cpy_r_inside_tuples);
    CPy_DECREF(cpy_r_r11);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_part);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    goto CPyL35;
CPyL40: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL28;
CPyL41: ;
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_inside_tuples);
    CPy_DecRef(cpy_r_r11);
    goto CPyL35;
CPyL42: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL35;
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
    cpy_r_r6 = CPyStatics[292]; /* 'KeyError' */
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
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    int64_t cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    int64_t cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
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
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL37;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r13 >> 1;
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r18 * 8;
    cpy_r_r22 = cpy_r_r20 + cpy_r_r21;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    CPy_INCREF(cpy_r_r23);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals, "str", cpy_r_r23);
        goto CPyL38;
    }
    cpy_r_r25 = CPyStatic_signature____get_encoder;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL39;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_get_encoder\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL10: ;
    PyObject *cpy_r_r27[1] = {cpy_r_r24};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r28, 1, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL40;
    }
    CPy_DECREF(cpy_r_r24);
    cpy_r_r30 = CPySequenceTuple_SetItemUnsafe(cpy_r_r12, cpy_r_r13, cpy_r_r29);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL38;
    }
    cpy_r_r31 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r31;
    goto CPyL5;
CPyL13: ;
    cpy_r_r32 = CPyStatic_signature___TupleEncoder;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TupleEncoder\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL16: ;
    PyObject *cpy_r_r34[1] = {cpy_r_r12};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = CPyStatics[422]; /* ('encoders',) */
    cpy_r_r37 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r35, 0, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 119, CPyStatic_signature___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r38 = cpy_r_r37;
    goto CPyL19;
CPyL18: ;
    cpy_r_r39 = Py_None;
    cpy_r_r38 = cpy_r_r39;
CPyL19: ;
    ((multicall___signature___SignatureObject *)cpy_r_self)->__encoder = cpy_r_r38;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = PyTuple_New(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL43;
    }
    cpy_r_r43 = 0;
CPyL21: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r46;
    if (!cpy_r_r47) goto CPyL44;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r43 >> 1;
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r48 * 8;
    cpy_r_r52 = cpy_r_r50 + cpy_r_r51;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    CPy_INCREF(cpy_r_r53);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals, "str", cpy_r_r53);
        goto CPyL45;
    }
    cpy_r_r55 = CPyStatic_signature____get_decoder;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_get_decoder\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL26: ;
    PyObject *cpy_r_r57[1] = {cpy_r_r54};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = PyObject_Vectorcall(cpy_r_r55, cpy_r_r58, 1, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r54);
    cpy_r_r60 = CPySequenceTuple_SetItemUnsafe(cpy_r_r42, cpy_r_r43, cpy_r_r59);
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 124, CPyStatic_signature___globals);
        goto CPyL45;
    }
    cpy_r_r61 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r61;
    goto CPyL21;
CPyL29: ;
    cpy_r_r62 = CPyStatic_signature___TupleDecoder;
    if (unlikely(cpy_r_r62 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"TupleDecoder\" was not set");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 123, CPyStatic_signature___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL32: ;
    PyObject *cpy_r_r64[1] = {cpy_r_r42};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = CPyStatics[423]; /* ('decoders',) */
    cpy_r_r67 = PyObject_Vectorcall(cpy_r_r62, cpy_r_r65, 0, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "__init__", 123, CPyStatic_signature___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r42);
    ((multicall___signature___SignatureObject *)cpy_r_self)->__decoder = cpy_r_r67;
    return 1;
CPyL34: ;
    cpy_r_r68 = 2;
    return cpy_r_r68;
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
    CPy_DecRef(cpy_r_r24);
    goto CPyL8;
CPyL40: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r24);
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
    CPy_DecRef(cpy_r_r42);
    goto CPyL34;
CPyL46: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r54);
    goto CPyL24;
CPyL47: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r54);
    goto CPyL34;
CPyL48: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL30;
CPyL49: ;
    CPy_DecRef(cpy_r_r42);
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
    if (cpy_r_r5 != NULL) goto __LL137;
    if (PyTuple_Check(cpy_r_args))
        cpy_r_r5 = cpy_r_args;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL137;
    CPy_TypeErrorTraceback("multicall/signature.py", "encode_data", 128, CPyStatic_signature___globals, "union[list, tuple]", cpy_r_args);
    goto CPyL15;
__LL137: ;
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
        goto __LL138;
    }
    if (PyList_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL138;
    if (PyTuple_Check(obj_args))
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL138;
    if (obj_args == Py_None)
        arg_args = obj_args;
    else {
        arg_args = NULL;
    }
    if (arg_args != NULL) goto __LL138;
    CPy_TypeError("union[list, tuple, None]", obj_args); 
    goto fail;
__LL138: ;
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
    if (arg_output != NULL) goto __LL139;
    arg_output = obj_output;
    if (arg_output != NULL) goto __LL139;
    CPy_TypeError("union[bytes, object]", obj_output); 
    goto fail;
__LL139: ;
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
    cpy_r_r5 = CPyStatics[424]; /* ('Any', 'Dict', 'Final', 'List', 'Optional', 'Tuple',
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
    cpy_r_r17 = CPyStatics[429]; /* (('faster_eth_abi.abi', 'faster_eth_abi',
                                     'faster_eth_abi'),
                                    ('faster_eth_abi.decoding', 'faster_eth_abi',
                                     'faster_eth_abi'),
                                    ('faster_eth_abi.encoding', 'faster_eth_abi',
                                     'faster_eth_abi'),
                                    ('eth_hash.auto', 'eth_hash', 'eth_hash')) */
    cpy_r_r18 = CPyStatic_signature___globals;
    cpy_r_r19 = CPyStatics[301]; /* 'multicall/signature.py' */
    cpy_r_r20 = CPyStatics[45]; /* '<module>' */
    cpy_r_r21 = CPyImport_ImportMany(cpy_r_r17, cpy_r_r14, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r16);
    if (!cpy_r_r21) goto CPyL31;
    cpy_r_r22 = CPyStatics[430]; /* ('Decodable', 'TypeStr') */
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
    cpy_r_r28 = CPyStatics[303]; /* '_SIGNATURES' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 10, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r31 = CPyModule_faster_eth_abi___encoding;
    cpy_r_r32 = CPyStatics[304]; /* 'TupleEncoder' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 12, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature___TupleEncoder = cpy_r_r33;
    CPy_INCREF(CPyStatic_signature___TupleEncoder);
    cpy_r_r34 = CPyStatic_signature___globals;
    cpy_r_r35 = CPyStatics[304]; /* 'TupleEncoder' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 12, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r38 = CPyModule_faster_eth_abi___decoding;
    cpy_r_r39 = CPyStatics[305]; /* 'TupleDecoder' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 13, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature___TupleDecoder = cpy_r_r40;
    CPy_INCREF(CPyStatic_signature___TupleDecoder);
    cpy_r_r41 = CPyStatic_signature___globals;
    cpy_r_r42 = CPyStatics[305]; /* 'TupleDecoder' */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r41, cpy_r_r42, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 13, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r45 = CPyModule_eth_hash___auto;
    cpy_r_r46 = CPyStatics[306]; /* 'keccak' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 15, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____keccak = cpy_r_r47;
    CPy_INCREF(CPyStatic_signature____keccak);
    cpy_r_r48 = CPyStatic_signature___globals;
    cpy_r_r49 = CPyStatics[307]; /* '_keccak' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 15, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r52 = CPyModule_faster_eth_abi___abi;
    cpy_r_r53 = CPyStatics[308]; /* 'default_codec' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r55 = CPyStatics[309]; /* '_registry' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r57 = CPyStatics[310]; /* 'get_encoder' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____get_encoder = cpy_r_r58;
    CPy_INCREF(CPyStatic_signature____get_encoder);
    cpy_r_r59 = CPyStatic_signature___globals;
    cpy_r_r60 = CPyStatics[311]; /* '_get_encoder' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 16, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r63 = CPyModule_faster_eth_abi___abi;
    cpy_r_r64 = CPyStatics[308]; /* 'default_codec' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r66 = CPyStatics[309]; /* '_registry' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r68 = CPyStatics[312]; /* 'get_decoder' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____get_decoder = cpy_r_r69;
    CPy_INCREF(CPyStatic_signature____get_decoder);
    cpy_r_r70 = CPyStatic_signature___globals;
    cpy_r_r71 = CPyStatics[313]; /* '_get_decoder' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r70, cpy_r_r71, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 17, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r74 = CPyModule_faster_eth_abi___abi;
    cpy_r_r75 = CPyStatics[308]; /* 'default_codec' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 18, CPyStatic_signature___globals);
        goto CPyL31;
    }
    cpy_r_r77 = CPyStatics[314]; /* 'stream_class' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("multicall/signature.py", "<module>", 18, CPyStatic_signature___globals);
        goto CPyL31;
    }
    CPyStatic_signature____stream_cls = cpy_r_r78;
    CPy_INCREF(CPyStatic_signature____stream_cls);
    cpy_r_r79 = CPyStatic_signature___globals;
    cpy_r_r80 = CPyStatics[315]; /* '_stream_cls' */
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
    cpy_r_r91 = CPyStatics[316]; /* 'input_types' */
    cpy_r_r92 = CPyStatics[317]; /* 'output_types' */
    cpy_r_r93 = CPyStatics[318]; /* 'fourbyte' */
    cpy_r_r94 = CPyStatics[319]; /* '_encoder' */
    cpy_r_r95 = CPyStatics[320]; /* '_decoder' */
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
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r86);
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

PyObject *CPyStatics[431];
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
    "\005\tBerachain\017__annotations__\026mypyc filler docstring\a__doc__\n__module__",
    "\001*0xeefBa1e63905eF1D7ACbA5a8513c70307C1cE441",
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
    "\0358\0000\0001\0003\00050000000\0004\0005\00010\00016\00018\00019\00025\00030\00031\00042\00056\00066\00069\00097\000100\000106\000108\000114\000122\000128\000137\000250\000288\000321",
    "\021324\000420\000592\0001088\0001284\0001285\0001287\0002001\0002222\0004002\0007700\0008217\0008453\0009000\0009001\00017000\00042161",
    "\v42220\00042262\00043113\00043114\00071401\00071402\00080001\000421611\000421613\00011155111\0001313161554",
    "\b1666600000\000369\000943\0001329\000560048\000999\00080094\0001000",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    45, 10, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 3, 43, 43, 43, 1,
    387, 1, 3, 4, 47, 48, 49, 50, 1, 52, 1, 54, 2, 56, 9, 1, 58, 1, 60, 2,
    62, 63, 4, 20, 17, 23, 15, 2, 85, 86, 3, 87, 87, 87, 1, 399, 1, 89, 3,
    91, 34, 41, 1, 92, 2, 48, 50, 2, 94, 55, 1, 9, 1, 41, 3, 214, 214,
    214, 2, 408, 399, 1, 265, 1, 216, 10, 32, 91, 34, 35, 36, 37, 38, 39,
    40, 41, 3, 93, 93, 93, 3, 46, 46, 46, 3, 269, 269, 269, 3, 413, 414,
    415, 1, 70, 1, 271, 1, 82, 5, 100, 198, 202, 105, 9, 5, 20, 217, 17,
    221, 15, 1, 293, 1, 294, 8, 32, 91, 34, 36, 37, 39, 40, 41, 3, 295,
    296, 296, 3, 297, 296, 296, 3, 298, 296, 296, 3, 299, 300, 300, 4,
    425, 426, 427, 428, 2, 52, 302
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_multicall___call_internal = NULL;
CPyModule *CPyModule_multicall___call;
PyObject *CPyStatic_call___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_eth_retry;
CPyModule *CPyModule_cchecksum;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_eth_typing___abi;
CPyModule *CPyModule_web3;
CPyModule *CPyModule_multicall___constants_internal = NULL;
CPyModule *CPyModule_multicall___constants;
CPyModule *CPyModule_multicall___exceptions_internal = NULL;
CPyModule *CPyModule_multicall___exceptions;
CPyModule *CPyModule_multicall___loggers_internal = NULL;
CPyModule *CPyModule_multicall___loggers;
CPyModule *CPyModule_multicall___signature_internal = NULL;
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
CPyModule *CPyModule_multicall___multicall_internal = NULL;
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
PyTypeObject *CPyType_call_____mypyc_lambda__0_decode_output_Call_obj;
PyObject *CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj(void);
PyTypeObject *CPyType_call_____mypyc_lambda__1_decode_output_Call_obj;
PyObject *CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj(void);
PyTypeObject *CPyType_call___coroutine_Call_gen;
PyObject *CPyDef_call___coroutine_Call_gen(void);
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
PyObject *CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
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
PyTypeObject *CPyType_multicall___fetch_outputs_Multicall_gen;
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen(void);
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
PyObject *CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
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
PyObject *CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
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

static struct export_table_847fc2cb349a9b029d5a exports = {
    &CPyStatic_call___logger,
    &CPyStatic_call___log_debug,
    &CPyType_call___Call,
    &CPyDef_call___Call,
    &CPyType_call___decode_output_Call_env,
    &CPyDef_call___decode_output_Call_env,
    &CPyType_call_____mypyc_lambda__0_decode_output_Call_obj,
    &CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj,
    &CPyType_call_____mypyc_lambda__1_decode_output_Call_obj,
    &CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj,
    &CPyType_call___coroutine_Call_gen,
    &CPyDef_call___coroutine_Call_gen,
    &CPyDef_call___Call_____init__,
    &CPyDef_call___Call_____repr__,
    &CPyDef_call___Call___data,
    &CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__,
    &CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____call__,
    &CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__,
    &CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____call__,
    &CPyDef_call___Call___decode_output,
    &CPyDef_call___Call_____call__,
    &CPyDef_call___Call_____await__,
    &CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__,
    &CPyDef_call___coroutine_Call_gen_____next__,
    &CPyDef_call___coroutine_Call_gen___send,
    &CPyDef_call___coroutine_Call_gen_____iter__,
    &CPyDef_call___coroutine_Call_gen___throw,
    &CPyDef_call___coroutine_Call_gen___close,
    &CPyDef_call___coroutine_Call_gen_____await__,
    &CPyDef_call___Call___coroutine,
    &CPyDef_call___prep_args,
    &CPyDef_call_____top_level__,
    &CPyStatic_constants___GAS_LIMIT,
    &CPyStatic_constants___MULTICALL2_BYTECODE,
    &CPyStatic_constants___MULTICALL3_BYTECODE,
    &CPyStatic_constants___Network___Mainnet,
    &CPyStatic_constants___Network___Ropsten,
    &CPyStatic_constants___Network___Rinkeby,
    &CPyStatic_constants___Network___Gorli,
    &CPyStatic_constants___Network___Optimism,
    &CPyStatic_constants___Network___CostonTestnet,
    &CPyStatic_constants___Network___ThundercoreTestnet,
    &CPyStatic_constants___Network___SongbirdCanaryNetwork,
    &CPyStatic_constants___Network___Cronos,
    &CPyStatic_constants___Network___RSK,
    &CPyStatic_constants___Network___RSKTestnet,
    &CPyStatic_constants___Network___Kovan,
    &CPyStatic_constants___Network___Bsc,
    &CPyStatic_constants___Network___OKC,
    &CPyStatic_constants___Network___OptimismKovan,
    &CPyStatic_constants___Network___BscTestnet,
    &CPyStatic_constants___Network___Gnosis,
    &CPyStatic_constants___Network___Velas,
    &CPyStatic_constants___Network___Thundercore,
    &CPyStatic_constants___Network___Coston2Testnet,
    &CPyStatic_constants___Network___Fuse,
    &CPyStatic_constants___Network___Heco,
    &CPyStatic_constants___Network___Polygon,
    &CPyStatic_constants___Network___Fantom,
    &CPyStatic_constants___Network___Boba,
    &CPyStatic_constants___Network___KCC,
    &CPyStatic_constants___Network___ZkSync,
    &CPyStatic_constants___Network___OptimismGorli,
    &CPyStatic_constants___Network___Astar,
    &CPyStatic_constants___Network___Metis,
    &CPyStatic_constants___Network___Moonbeam,
    &CPyStatic_constants___Network___Moonriver,
    &CPyStatic_constants___Network___MoonbaseAlphaTestnet,
    &CPyStatic_constants___Network___Milkomeda,
    &CPyStatic_constants___Network___Kava,
    &CPyStatic_constants___Network___FantomTestnet,
    &CPyStatic_constants___Network___Canto,
    &CPyStatic_constants___Network___Klaytn,
    &CPyStatic_constants___Network___Base,
    &CPyStatic_constants___Network___EvmosTestnet,
    &CPyStatic_constants___Network___Evmos,
    &CPyStatic_constants___Network___Holesky,
    &CPyStatic_constants___Network___Arbitrum,
    &CPyStatic_constants___Network___Celo,
    &CPyStatic_constants___Network___Oasis,
    &CPyStatic_constants___Network___AvalancheFuji,
    &CPyStatic_constants___Network___Avax,
    &CPyStatic_constants___Network___GodwokenTestnet,
    &CPyStatic_constants___Network___Godwoken,
    &CPyStatic_constants___Network___Mumbai,
    &CPyStatic_constants___Network___ArbitrumRinkeby,
    &CPyStatic_constants___Network___ArbitrumGorli,
    &CPyStatic_constants___Network___Sepolia,
    &CPyStatic_constants___Network___Aurora,
    &CPyStatic_constants___Network___Harmony,
    &CPyStatic_constants___Network___PulseChain,
    &CPyStatic_constants___Network___PulseChainTestnet,
    &CPyStatic_constants___Network___Sei,
    &CPyStatic_constants___Network___Hoodi,
    &CPyStatic_constants___Network___HyperEVM,
    &CPyStatic_constants___Network___Berachain,
    &CPyStatic_constants___MULTICALL_ADDRESSES,
    &CPyStatic_constants___MULTICALL2_ADDRESSES,
    &CPyStatic_constants___MULTICALL3_ADDRESSES,
    &CPyStatic_constants___AIOHTTP_TIMEOUT,
    &CPyStatic_constants___NO_STATE_OVERRIDE,
    &CPyStatic_constants___ASYNC_SEMAPHORE,
    &CPyType_constants___Network,
    &CPyDef_constants_____top_level__,
    &CPyType_exceptions___StateOverrideNotSupported,
    &CPyDef_exceptions_____top_level__,
    &CPyDef_loggers___setup_logger,
    &CPyDef_loggers_____top_level__,
    &CPyStatic_multicall___logger,
    &CPyStatic_multicall___log_warning,
    &CPyStatic_multicall___log_debug,
    &CPyStatic_multicall___to_checksum_address,
    &CPyStatic_multicall___concat,
    &CPyStatic_multicall___mapcat,
    &CPyStatic_multicall___multicall___multicall___Multicall_____init______w3,
    &CPyStatic_multicall___batcher,
    &CPyType_multicall___Multicall,
    &CPyDef_multicall___Multicall,
    &CPyType_multicall___NotSoBrightBatcher,
    &CPyDef_multicall___NotSoBrightBatcher,
    &CPyType_multicall___coroutine_Multicall_gen,
    &CPyDef_multicall___coroutine_Multicall_gen,
    &CPyType_multicall___fetch_outputs_Multicall_gen,
    &CPyDef_multicall___fetch_outputs_Multicall_gen,
    &CPyDef_multicall___get_args,
    &CPyDef_multicall___unpack_aggregate_outputs,
    &CPyDef_multicall___Multicall_____init__,
    &CPyDef_multicall___Multicall_____call__,
    &CPyDef_multicall___Multicall_____await__,
    &CPyDef_multicall___Multicall___multicall_sig,
    &CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__,
    &CPyDef_multicall___coroutine_Multicall_gen_____next__,
    &CPyDef_multicall___coroutine_Multicall_gen___send,
    &CPyDef_multicall___coroutine_Multicall_gen_____iter__,
    &CPyDef_multicall___coroutine_Multicall_gen___throw,
    &CPyDef_multicall___coroutine_Multicall_gen___close,
    &CPyDef_multicall___coroutine_Multicall_gen_____await__,
    &CPyDef_multicall___Multicall___coroutine,
    &CPyDef_multicall___Multicall____contract_method,
    &CPyDef_multicall___Multicall___add_base_fee,
    &CPyDef_multicall___Multicall___add_block_hash,
    &CPyDef_multicall___Multicall___add_block_number,
    &CPyDef_multicall___Multicall___add_chain_id,
    &CPyDef_multicall___Multicall___add_block_coinbase,
    &CPyDef_multicall___Multicall___add_block_difficulty,
    &CPyDef_multicall___Multicall___add_block_gas_limit,
    &CPyDef_multicall___Multicall___add_block_timestamp,
    &CPyDef_multicall___Multicall___add_eth_balance,
    &CPyDef_multicall___Multicall___add_last_block_hash,
    &CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__,
    &CPyDef_multicall___fetch_outputs_Multicall_gen_____next__,
    &CPyDef_multicall___fetch_outputs_Multicall_gen___send,
    &CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__,
    &CPyDef_multicall___fetch_outputs_Multicall_gen___throw,
    &CPyDef_multicall___fetch_outputs_Multicall_gen___close,
    &CPyDef_multicall___fetch_outputs_Multicall_gen_____await__,
    &CPyDef_multicall___Multicall___fetch_outputs,
    &CPyDef_multicall___Multicall___aggregate,
    &CPyDef_multicall___NotSoBrightBatcher_____init__,
    &CPyDef_multicall___NotSoBrightBatcher___batch_calls,
    &CPyDef_multicall___NotSoBrightBatcher___split_calls,
    &CPyDef_multicall___NotSoBrightBatcher___rebatch,
    &CPyDef_multicall____raise_or_proceed,
    &CPyDef_multicall_____top_level__,
    &CPyStatic_signature____SIGNATURES,
    &CPyStatic_signature___TupleEncoder,
    &CPyStatic_signature___TupleDecoder,
    &CPyStatic_signature____keccak,
    &CPyStatic_signature____get_encoder,
    &CPyStatic_signature____get_decoder,
    &CPyStatic_signature____stream_cls,
    &CPyType_signature___Signature,
    &CPyDef_signature___Signature,
    &CPyDef_signature___get_4byte_selector,
    &CPyDef_signature___parse_signature,
    &CPyDef_signature___parse_typestring,
    &CPyDef_signature____get_signature,
    &CPyDef_signature___Signature_____init__,
    &CPyDef_signature___Signature___encode_data,
    &CPyDef_signature___Signature___decode_data,
    &CPyDef_signature_____top_level__,
};

PyMODINIT_FUNC PyInit_847fc2cb349a9b029d5a__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "847fc2cb349a9b029d5a__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "847fc2cb349a9b029d5a__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
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
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
