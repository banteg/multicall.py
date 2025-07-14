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
    PyObject *_self;
    PyObject *_args;
    PyObject *__w3;
    PyObject *_block_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    char ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    tuple_T3OOO ___mypyc_temp__6;
    PyObject *_output;
    tuple_T3OOO ___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    tuple_T3OOO ___mypyc_temp__9;
    PyObject *___mypyc_temp__10;
    tuple_T3OOO ___mypyc_temp__11;
    PyObject *_result;
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
    PyObject *_self;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    CPyTagged ___mypyc_temp__1;
    CPyTagged _i;
    PyObject *___mypyc_temp__2;
    CPyTagged ___mypyc_temp__3;
    PyObject *_batch;
    PyObject *___mypyc_temp__4;
    tuple_T3OOO ___mypyc_temp__5;
    PyObject *_batches;
} multicall___multicall___coroutine_Multicall_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_self;
    PyObject *_calls;
    CPyTagged _ConnErr_retries;
    PyObject *_id;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    char ___mypyc_temp__8;
    PyObject *___mypyc_temp__9;
    tuple_T3OOO ___mypyc_temp__10;
    PyObject *_args;
    PyObject *___mypyc_temp__11;
    tuple_T3OOO ___mypyc_temp__12;
    PyObject *_outputs;
    PyObject *___mypyc_temp__13;
    tuple_T3OOO ___mypyc_temp__14;
    PyObject *__;
    PyObject *___mypyc_temp__15;
    PyObject *___mypyc_temp__16;
    CPyTagged ___mypyc_temp__17;
    PyObject *___mypyc_temp__18;
    PyObject *___mypyc_temp__19;
    PyObject *_call;
    PyObject *_success;
    PyObject *_output;
    PyObject *___mypyc_temp__20;
    tuple_T3OOO ___mypyc_temp__21;
    PyObject *_e;
    tuple_T3OOO ___mypyc_temp__22;
    PyObject *___mypyc_temp__23;
    tuple_T3OOO ___mypyc_temp__24;
    PyObject *___mypyc_temp__25;
    tuple_T3OOO ___mypyc_temp__26;
    PyObject *___mypyc_temp__27;
    CPyTagged ___mypyc_temp__28;
    CPyTagged _i;
    PyObject *___mypyc_temp__29;
    PyObject *___mypyc_temp__30;
    PyObject *_chunk;
    PyObject *___mypyc_temp__31;
    tuple_T3OOO ___mypyc_temp__32;
    PyObject *_batch_results;
    PyObject *___mypyc_temp__33;
    PyObject *___mypyc_temp__34;
    CPyTagged ___mypyc_temp__35;
    PyObject *___mypyc_temp__36;
    CPyTagged ___mypyc_temp__37;
    tuple_T2OO _result;
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


struct export_table_847fc2cb349a9b029d5a {
    PyObject **CPyStatic_call___logger;
    PyObject **CPyStatic_call___log_debug;
    PyTypeObject **CPyType_call___Call;
    PyObject *(*CPyDef_call___Call)(PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
    PyTypeObject **CPyType_call___decode_output_Call_env;
    PyObject *(*CPyDef_call___decode_output_Call_env)(void);
    PyTypeObject **CPyType_call_____mypyc_lambda__0_decode_output_Call_obj;
    PyObject *(*CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj)(void);
    PyTypeObject **CPyType_call_____mypyc_lambda__1_decode_output_Call_obj;
    PyObject *(*CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj)(void);
    PyTypeObject **CPyType_call___coroutine_Call_gen;
    PyObject *(*CPyDef_call___coroutine_Call_gen)(void);
    char (*CPyDef_call___Call_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_target, PyObject *cpy_r_function, PyObject *cpy_r_returns, PyObject *cpy_r_block_id, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
    PyObject *(*CPyDef_call___Call_____repr__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_call___Call___data)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_call_____mypyc_lambda__0_decode_output_Call_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_handler, PyObject *cpy_r_value);
    PyObject *(*CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_call_____mypyc_lambda__1_decode_output_Call_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_handler, PyObject *cpy_r_value);
    PyObject *(*CPyDef_call___Call___decode_output)(PyObject *cpy_r_output, PyObject *cpy_r_signature, PyObject *cpy_r_returns, PyObject *cpy_r_success);
    PyObject *(*CPyDef_call___Call_____call__)(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r__w3, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_call___Call_____await__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_call___coroutine_Call_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_call___coroutine_Call_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_call___coroutine_Call_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_call___coroutine_Call_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_call___coroutine_Call_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_call___coroutine_Call_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_call___coroutine_Call_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_call___Call___coroutine)(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r__w3, PyObject *cpy_r_block_id);
    PyObject *(*CPyDef_call___prep_args)(PyObject *cpy_r_target, PyObject *cpy_r_signature, PyObject *cpy_r_args, PyObject *cpy_r_block_id, PyObject *cpy_r_origin, PyObject *cpy_r_gas_limit, PyObject *cpy_r_state_override_code);
    char (*CPyDef_call_____top_level__)(void);
    CPyTagged *CPyStatic_constants___GAS_LIMIT;
    PyObject **CPyStatic_constants___MULTICALL2_BYTECODE;
    PyObject **CPyStatic_constants___MULTICALL3_BYTECODE;
    PyObject **CPyStatic_constants___Network___Mainnet;
    PyObject **CPyStatic_constants___Network___Ropsten;
    PyObject **CPyStatic_constants___Network___Rinkeby;
    PyObject **CPyStatic_constants___Network___Gorli;
    PyObject **CPyStatic_constants___Network___Optimism;
    PyObject **CPyStatic_constants___Network___CostonTestnet;
    PyObject **CPyStatic_constants___Network___ThundercoreTestnet;
    PyObject **CPyStatic_constants___Network___SongbirdCanaryNetwork;
    PyObject **CPyStatic_constants___Network___Cronos;
    PyObject **CPyStatic_constants___Network___RSK;
    PyObject **CPyStatic_constants___Network___RSKTestnet;
    PyObject **CPyStatic_constants___Network___Kovan;
    PyObject **CPyStatic_constants___Network___Bsc;
    PyObject **CPyStatic_constants___Network___OKC;
    PyObject **CPyStatic_constants___Network___OptimismKovan;
    PyObject **CPyStatic_constants___Network___BscTestnet;
    PyObject **CPyStatic_constants___Network___Gnosis;
    PyObject **CPyStatic_constants___Network___Velas;
    PyObject **CPyStatic_constants___Network___Thundercore;
    PyObject **CPyStatic_constants___Network___Coston2Testnet;
    PyObject **CPyStatic_constants___Network___Fuse;
    PyObject **CPyStatic_constants___Network___Heco;
    PyObject **CPyStatic_constants___Network___Polygon;
    PyObject **CPyStatic_constants___Network___Fantom;
    PyObject **CPyStatic_constants___Network___Boba;
    PyObject **CPyStatic_constants___Network___KCC;
    PyObject **CPyStatic_constants___Network___ZkSync;
    PyObject **CPyStatic_constants___Network___OptimismGorli;
    PyObject **CPyStatic_constants___Network___Astar;
    PyObject **CPyStatic_constants___Network___Metis;
    PyObject **CPyStatic_constants___Network___Moonbeam;
    PyObject **CPyStatic_constants___Network___Moonriver;
    PyObject **CPyStatic_constants___Network___MoonbaseAlphaTestnet;
    PyObject **CPyStatic_constants___Network___Milkomeda;
    PyObject **CPyStatic_constants___Network___Kava;
    PyObject **CPyStatic_constants___Network___FantomTestnet;
    PyObject **CPyStatic_constants___Network___Canto;
    PyObject **CPyStatic_constants___Network___Klaytn;
    PyObject **CPyStatic_constants___Network___Base;
    PyObject **CPyStatic_constants___Network___EvmosTestnet;
    PyObject **CPyStatic_constants___Network___Evmos;
    PyObject **CPyStatic_constants___Network___Holesky;
    PyObject **CPyStatic_constants___Network___Arbitrum;
    PyObject **CPyStatic_constants___Network___Celo;
    PyObject **CPyStatic_constants___Network___Oasis;
    PyObject **CPyStatic_constants___Network___AvalancheFuji;
    PyObject **CPyStatic_constants___Network___Avax;
    PyObject **CPyStatic_constants___Network___GodwokenTestnet;
    PyObject **CPyStatic_constants___Network___Godwoken;
    PyObject **CPyStatic_constants___Network___Mumbai;
    PyObject **CPyStatic_constants___Network___ArbitrumRinkeby;
    PyObject **CPyStatic_constants___Network___ArbitrumGorli;
    PyObject **CPyStatic_constants___Network___Sepolia;
    PyObject **CPyStatic_constants___Network___Aurora;
    PyObject **CPyStatic_constants___Network___Harmony;
    PyObject **CPyStatic_constants___Network___PulseChain;
    PyObject **CPyStatic_constants___Network___PulseChainTestnet;
    PyObject **CPyStatic_constants___Network___Sei;
    PyObject **CPyStatic_constants___Network___Hoodi;
    PyObject **CPyStatic_constants___MULTICALL_ADDRESSES;
    PyObject **CPyStatic_constants___MULTICALL2_ADDRESSES;
    PyObject **CPyStatic_constants___MULTICALL3_ADDRESSES;
    PyObject **CPyStatic_constants___AIOHTTP_TIMEOUT;
    PyObject **CPyStatic_constants___NO_STATE_OVERRIDE;
    CPyTagged *CPyStatic_constants___ASYNC_SEMAPHORE;
    PyTypeObject **CPyType_constants___Network;
    char (*CPyDef_constants_____top_level__)(void);
    PyTypeObject **CPyType_exceptions___StateOverrideNotSupported;
    char (*CPyDef_exceptions_____top_level__)(void);
    PyObject *(*CPyDef_loggers___setup_logger)(PyObject *cpy_r_name);
    char (*CPyDef_loggers_____top_level__)(void);
    PyObject **CPyStatic_multicall___logger;
    PyObject **CPyStatic_multicall___log_warning;
    PyObject **CPyStatic_multicall___log_debug;
    PyObject **CPyStatic_multicall___to_checksum_address;
    PyObject **CPyStatic_multicall___concat;
    PyObject **CPyStatic_multicall___mapcat;
    PyObject **CPyStatic_multicall___multicall___multicall___Multicall_____init______w3;
    PyObject **CPyStatic_multicall___batcher;
    PyTypeObject **CPyType_multicall___Multicall;
    PyObject *(*CPyDef_multicall___Multicall)(PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
    PyTypeObject **CPyType_multicall___NotSoBrightBatcher;
    PyObject *(*CPyDef_multicall___NotSoBrightBatcher)(void);
    PyTypeObject **CPyType_multicall___coroutine_Multicall_gen;
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen)(void);
    PyTypeObject **CPyType_multicall___fetch_outputs_Multicall_gen;
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen)(void);
    PyObject *(*CPyDef_multicall___get_args)(PyObject *cpy_r_calls, char cpy_r_require_success);
    PyObject *(*CPyDef_multicall___unpack_aggregate_outputs)(PyObject *cpy_r_outputs);
    char (*CPyDef_multicall___Multicall_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_calls, PyObject *cpy_r_block_id, char cpy_r_require_success, CPyTagged cpy_r_gas_limit, PyObject *cpy_r__w3, PyObject *cpy_r_origin);
    PyObject *(*CPyDef_multicall___Multicall_____call__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_multicall___Multicall_____await__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_multicall___Multicall___multicall_sig)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___coroutine_Multicall_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___Multicall___coroutine)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___fetch_outputs_Multicall_gen_____await__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_multicall___Multicall___fetch_outputs)(PyObject *cpy_r_self, PyObject *cpy_r_calls, CPyTagged cpy_r_ConnErr_retries, PyObject *cpy_r_id);
    PyObject *(*CPyDef_multicall___Multicall___aggregate)(PyObject *cpy_r_self);
    char (*CPyDef_multicall___NotSoBrightBatcher_____init__)(PyObject *cpy_r_self);
    PyObject *(*CPyDef_multicall___NotSoBrightBatcher___batch_calls)(PyObject *cpy_r_self, PyObject *cpy_r_calls, CPyTagged cpy_r_step);
    tuple_T2OO (*CPyDef_multicall___NotSoBrightBatcher___split_calls)(PyObject *cpy_r_self, PyObject *cpy_r_calls, PyObject *cpy_r_unused);
    PyObject *(*CPyDef_multicall___NotSoBrightBatcher___rebatch)(PyObject *cpy_r_self, PyObject *cpy_r_calls);
    char (*CPyDef_multicall____raise_or_proceed)(PyObject *cpy_r_e, CPyTagged cpy_r_ct_calls, CPyTagged cpy_r_ConnErr_retries);
    char (*CPyDef_multicall_____top_level__)(void);
    PyObject **CPyStatic_signature____SIGNATURES;
    PyObject **CPyStatic_signature___TupleEncoder;
    PyObject **CPyStatic_signature___TupleDecoder;
    PyObject **CPyStatic_signature____keccak;
    PyObject **CPyStatic_signature____get_encoder;
    PyObject **CPyStatic_signature____get_decoder;
    PyObject **CPyStatic_signature____stream_cls;
    PyTypeObject **CPyType_signature___Signature;
    PyObject *(*CPyDef_signature___Signature)(PyObject *cpy_r_signature);
    PyObject *(*CPyDef_signature___get_4byte_selector)(PyObject *cpy_r_signature);
    tuple_T3OOO (*CPyDef_signature___parse_signature)(PyObject *cpy_r_signature);
    PyObject *(*CPyDef_signature___parse_typestring)(PyObject *cpy_r_typestring);
    PyObject *(*CPyDef_signature____get_signature)(PyObject *cpy_r_signature);
    char (*CPyDef_signature___Signature_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_signature);
    PyObject *(*CPyDef_signature___Signature___encode_data)(PyObject *cpy_r_self, PyObject *cpy_r_args);
    PyObject *(*CPyDef_signature___Signature___decode_data)(PyObject *cpy_r_self, PyObject *cpy_r_output);
    char (*CPyDef_signature_____top_level__)(void);
};
#endif
