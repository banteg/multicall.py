#ifndef MYPYC_NATIVE_847fc2cb349a9b029d5a_H
#define MYPYC_NATIVE_847fc2cb349a9b029d5a_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4OOOO
#define MYPYC_DECLARED_tuple_T4OOOO
typedef struct tuple_T4OOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4OOOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2CO
#define MYPYC_DECLARED_tuple_T2CO
typedef struct tuple_T2CO {
    char f0;
    PyObject *f1;
} tuple_T2CO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OC
#define MYPYC_DECLARED_tuple_T2OC
typedef struct tuple_T2OC {
    PyObject *f0;
    char f1;
} tuple_T2OC;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_target;
    PyObject *_returns;
    PyObject *_block_id;
    PyObject *_gas_limit;
    PyObject *_state_override_code;
    PyObject *_w3;
    PyObject *_origin;
    PyObject *_function;
    PyObject *_args;
    PyObject *_signature;
} multicall___call___CallObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_success;
    PyObject *_output;
    PyObject *_signature;
    PyObject *_returns;
    PyObject *_apply_handler;
} multicall___call___decode_output_Call_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} multicall___call_____mypyc_lambda__0_decode_output_Call_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} multicall___call_____mypyc_lambda__1_decode_output_Call_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_generator_attribute___w3;
    PyObject *___mypyc_generator_attribute__block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    char ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *___mypyc_generator_attribute__output;
    tuple_T3OOO ___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
    PyObject *___mypyc_generator_attribute__result;
} multicall___call___coroutine_Call_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} multicall___exceptions___StateOverrideNotSupportedObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *_calls;
    PyObject *_block_id;
    char _require_success;
    CPyTagged _gas_limit;
    PyObject *_w3;
    PyObject *_origin;
    CPyTagged _chainid;
    PyObject *_multicall_address;
} multicall___multicall___MulticallObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _step;
} multicall___multicall___NotSoBrightBatcherObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    CPyTagged ___mypyc_generator_attribute__i;
    PyObject *___mypyc_temp__2;
    int64_t ___mypyc_temp__3;
    PyObject *___mypyc_generator_attribute__batch;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
    PyObject *___mypyc_generator_attribute__batches;
} multicall___multicall___coroutine_Multicall_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__self;
    PyObject *___mypyc_generator_attribute__calls;
    CPyTagged ___mypyc_generator_attribute__ConnErr_retries;
    PyObject *___mypyc_generator_attribute__id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    char ___mypyc_temp__8;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
    PyObject *___mypyc_generator_attribute__args;
    PyObject *___mypyc_temp__11;
    tuple_T3OOO ___mypyc_temp__12;
    PyObject *___mypyc_generator_attribute__outputs;
    PyObject *___mypyc_temp__13;
    tuple_T3OOO ___mypyc_temp__14;
    PyObject *___mypyc_generator_attribute___;
    PyObject *___mypyc_temp__15;
    PyObject *___mypyc_temp__16;
    int64_t ___mypyc_temp__17;
    PyObject *___mypyc_temp__18;
    PyObject *___mypyc_temp__19;
    PyObject *___mypyc_generator_attribute__call;
    PyObject *___mypyc_generator_attribute__success;
    PyObject *___mypyc_generator_attribute__output;
    PyObject *___mypyc_temp__20;
    tuple_T3OOO ___mypyc_temp__21;
    PyObject *___mypyc_generator_attribute__e;
    tuple_T3OOO ___mypyc_temp__22;
    PyObject *___mypyc_temp__23;
    tuple_T3OOO ___mypyc_temp__24;
    PyObject *___mypyc_temp__25;
    tuple_T3OOO ___mypyc_temp__26;
    PyObject *___mypyc_temp__27;
    CPyTagged ___mypyc_temp__28;
    CPyTagged ___mypyc_generator_attribute__i;
    PyObject *___mypyc_temp__29;
    PyObject *___mypyc_temp__30;
    PyObject *___mypyc_generator_attribute__chunk;
    PyObject *___mypyc_temp__31;
    tuple_T3OOO ___mypyc_temp__32;
    PyObject *___mypyc_generator_attribute__batch_results;
    PyObject *___mypyc_temp__33;
    PyObject *___mypyc_temp__34;
    int64_t ___mypyc_temp__35;
    PyObject *___mypyc_temp__36;
    int64_t ___mypyc_temp__37;
    tuple_T2OO ___mypyc_generator_attribute__result;
} multicall___multicall___fetch_outputs_Multicall_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_signature;
    PyObject *_function;
    PyObject *_input_types;
    PyObject *_output_types;
    PyObject *_fourbyte;
    PyObject *__encoder;
    PyObject *__decoder;
} multicall___signature___SignatureObject;

#endif
