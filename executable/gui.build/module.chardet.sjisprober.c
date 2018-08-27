/* Generated code for Python source for module 'chardet.sjisprober'
 * created by Nuitka version 0.5.32.7
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_chardet$sjisprober is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$sjisprober;
PyDictObject *moduledict_chardet$sjisprober;

/* The module constants used, if any. */
extern PyObject *const_str_plain_SJISContextAnalysis;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_mbcharsetprober;
static PyObject *const_tuple_str_plain_SJISContextAnalysis_tuple;
static PyObject *const_str_digest_6be82e3a3208f85658198048003e263c;
static PyObject *const_str_digest_70bf8962aa7042312f0fe66e2701384b;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain_get_confidence;
static PyObject *const_str_digest_9b121e7421220d9f7a6616b76cddb3d2;
extern PyObject *const_str_plain_chardistribution;
extern PyObject *const_tuple_str_plain_self_str_plain_context_conf_str_plain_distrib_conf_tuple;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain_DETECTING;
static PyObject *const_str_digest_41eaed209616d44c5ff92c75e846cdf3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_char_len;
extern PyObject *const_str_plain_mbcssm;
extern PyObject *const_str_plain_SJISDistributionAnalysis;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_coding_state;
extern PyObject *const_str_plain_jpcntx;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_got_enough_data;
extern PyObject *const_str_plain_get_current_charlen;
static PyObject *const_str_digest_0ef65ba3a7622e22191133ebaf265c82;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_distribution_analyzer;
static PyObject *const_str_digest_d9ace954d913888bcd2ab222a4fc1c49;
static PyObject *const_tuple_str_plain_SJISDistributionAnalysis_tuple;
extern PyObject *const_str_plain_context_conf;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_distrib_conf;
extern PyObject *const_str_plain__last_char;
extern PyObject *const_str_plain_next_state;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProbingState;
extern PyObject *const_str_plain_MultiByteCharSetProber;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_coding_sm;
static PyObject *const_str_digest_cbfa2668b14f9a8a39690dd7ac268239;
extern PyObject *const_str_plain_Japanese;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_SHORTCUT_THRESHOLD;
extern PyObject *const_str_plain_codingstatemachine;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_digest_1429e5140ade1e372a3e639fc28337a7;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_str_plain_MultiByteCharSetProber_tuple;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_SJISProber;
extern PyObject *const_str_plain_language;
static PyObject *const_str_digest_e3b1a7ff8735167402aed74aa7e49f65;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_ITS_ME;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
extern PyObject *const_str_plain_context_analyzer;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_SJIS_SM_MODEL;
extern PyObject *const_str_plain_MachineState;
static PyObject *const_tuple_str_plain_SJIS_SM_MODEL_tuple;
extern PyObject *const_str_plain_CodingStateMachine;
extern PyObject *const_str_plain_START;
extern PyObject *const_str_plain__state;
extern PyObject *const_tuple_str_plain_CodingStateMachine_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_feed;
extern PyObject *const_tuple_4e3a048c2023c37c6f29cc8f8a458310_tuple;
static PyObject *const_str_digest_ad4e72f709a04e768b010965847e8ee1;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_SJISContextAnalysis_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SJISContextAnalysis_tuple, 0, const_str_plain_SJISContextAnalysis ); Py_INCREF( const_str_plain_SJISContextAnalysis );
    const_str_digest_6be82e3a3208f85658198048003e263c = UNSTREAM_STRING( &constant_bin[ 372872 ], 16, 0 );
    const_str_digest_70bf8962aa7042312f0fe66e2701384b = UNSTREAM_STRING( &constant_bin[ 372888 ], 23, 0 );
    const_str_digest_9b121e7421220d9f7a6616b76cddb3d2 = UNSTREAM_STRING( &constant_bin[ 372911 ], 18, 0 );
    const_str_digest_41eaed209616d44c5ff92c75e846cdf3 = UNSTREAM_STRING( &constant_bin[ 372929 ], 19, 0 );
    const_str_digest_0ef65ba3a7622e22191133ebaf265c82 = UNSTREAM_STRING( &constant_bin[ 372948 ], 19, 0 );
    const_str_digest_d9ace954d913888bcd2ab222a4fc1c49 = UNSTREAM_STRING( &constant_bin[ 372967 ], 25, 0 );
    const_tuple_str_plain_SJISDistributionAnalysis_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SJISDistributionAnalysis_tuple, 0, const_str_plain_SJISDistributionAnalysis ); Py_INCREF( const_str_plain_SJISDistributionAnalysis );
    const_str_digest_cbfa2668b14f9a8a39690dd7ac268239 = UNSTREAM_STRING( &constant_bin[ 372992 ], 15, 0 );
    const_str_digest_e3b1a7ff8735167402aed74aa7e49f65 = UNSTREAM_STRING( &constant_bin[ 373007 ], 27, 0 );
    const_tuple_str_plain_SJIS_SM_MODEL_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SJIS_SM_MODEL_tuple, 0, const_str_plain_SJIS_SM_MODEL ); Py_INCREF( const_str_plain_SJIS_SM_MODEL );
    const_str_digest_ad4e72f709a04e768b010965847e8ee1 = UNSTREAM_STRING( &constant_bin[ 373034 ], 62, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$sjisprober( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_54ba0b28a35fd75827536278fcca84fe;
static PyCodeObject *codeobj_1f65726dfc85f8cb905ecf0587f8599c;
static PyCodeObject *codeobj_76d7dd1605077366618600516d4cd805;
static PyCodeObject *codeobj_bc9c1f3184547b65f80b8433cb7ec120;
static PyCodeObject *codeobj_241919d801e1cf0e5d5b7d47cff70998;
static PyCodeObject *codeobj_bcffcc5d2bffa424a3cd4d17154b0b22;
static PyCodeObject *codeobj_989ce7f99de1aa34a4d220164184d8c6;
static PyCodeObject *codeobj_906326a9c1185b2f734e7abb2a5f6531;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ad4e72f709a04e768b010965847e8ee1;
    codeobj_54ba0b28a35fd75827536278fcca84fe = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e3b1a7ff8735167402aed74aa7e49f65, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1f65726dfc85f8cb905ecf0587f8599c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SJISProber, 36, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_76d7dd1605077366618600516d4cd805 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_bc9c1f3184547b65f80b8433cb7ec120 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_charset_name, 48, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_241919d801e1cf0e5d5b7d47cff70998 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 56, const_tuple_4e3a048c2023c37c6f29cc8f8a458310_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcffcc5d2bffa424a3cd4d17154b0b22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 89, const_tuple_str_plain_self_str_plain_context_conf_str_plain_distrib_conf_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_989ce7f99de1aa34a4d220164184d8c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_language, 52, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_906326a9c1185b2f734e7abb2a5f6531 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 44, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_3_charset_name(  );


static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_4_language(  );


static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_5_feed(  );


static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_6_get_confidence(  );


// The module function definitions.
static PyObject *impl_chardet$sjisprober$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_76d7dd1605077366618600516d4cd805 = NULL;

    struct Nuitka_FrameObject *frame_76d7dd1605077366618600516d4cd805;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76d7dd1605077366618600516d4cd805, codeobj_76d7dd1605077366618600516d4cd805, module_chardet$sjisprober, sizeof(void *)+sizeof(void *) );
    frame_76d7dd1605077366618600516d4cd805 = cache_frame_76d7dd1605077366618600516d4cd805;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76d7dd1605077366618600516d4cd805 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76d7dd1605077366618600516d4cd805 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISProber );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SJISProber );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SJISProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_76d7dd1605077366618600516d4cd805->m_frame.f_lineno = 38;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CodingStateMachine );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CodingStateMachine" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJIS_SM_MODEL );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SJIS_SM_MODEL );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SJIS_SM_MODEL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_76d7dd1605077366618600516d4cd805->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_coding_sm, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISDistributionAnalysis );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SJISDistributionAnalysis );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SJISDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_76d7dd1605077366618600516d4cd805->m_frame.f_lineno = 40;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_distribution_analyzer, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISContextAnalysis );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SJISContextAnalysis );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SJISContextAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_76d7dd1605077366618600516d4cd805->m_frame.f_lineno = 41;
    tmp_assattr_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_context_analyzer, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    frame_76d7dd1605077366618600516d4cd805->m_frame.f_lineno = 42;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d7dd1605077366618600516d4cd805 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d7dd1605077366618600516d4cd805 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76d7dd1605077366618600516d4cd805, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76d7dd1605077366618600516d4cd805->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76d7dd1605077366618600516d4cd805, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76d7dd1605077366618600516d4cd805,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_76d7dd1605077366618600516d4cd805 == cache_frame_76d7dd1605077366618600516d4cd805 )
    {
        Py_DECREF( frame_76d7dd1605077366618600516d4cd805 );
    }
    cache_frame_76d7dd1605077366618600516d4cd805 = NULL;

    assertFrameObject( frame_76d7dd1605077366618600516d4cd805 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_chardet$sjisprober$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_906326a9c1185b2f734e7abb2a5f6531 = NULL;

    struct Nuitka_FrameObject *frame_906326a9c1185b2f734e7abb2a5f6531;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_906326a9c1185b2f734e7abb2a5f6531, codeobj_906326a9c1185b2f734e7abb2a5f6531, module_chardet$sjisprober, sizeof(void *)+sizeof(void *) );
    frame_906326a9c1185b2f734e7abb2a5f6531 = cache_frame_906326a9c1185b2f734e7abb2a5f6531;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_906326a9c1185b2f734e7abb2a5f6531 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_906326a9c1185b2f734e7abb2a5f6531 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISProber );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SJISProber );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SJISProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_906326a9c1185b2f734e7abb2a5f6531->m_frame.f_lineno = 45;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_context_analyzer );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_906326a9c1185b2f734e7abb2a5f6531->m_frame.f_lineno = 46;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_906326a9c1185b2f734e7abb2a5f6531 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_906326a9c1185b2f734e7abb2a5f6531 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_906326a9c1185b2f734e7abb2a5f6531, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_906326a9c1185b2f734e7abb2a5f6531->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_906326a9c1185b2f734e7abb2a5f6531, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_906326a9c1185b2f734e7abb2a5f6531,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_906326a9c1185b2f734e7abb2a5f6531 == cache_frame_906326a9c1185b2f734e7abb2a5f6531 )
    {
        Py_DECREF( frame_906326a9c1185b2f734e7abb2a5f6531 );
    }
    cache_frame_906326a9c1185b2f734e7abb2a5f6531 = NULL;

    assertFrameObject( frame_906326a9c1185b2f734e7abb2a5f6531 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_2_reset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_2_reset );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_chardet$sjisprober$$$function_3_charset_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_bc9c1f3184547b65f80b8433cb7ec120 = NULL;

    struct Nuitka_FrameObject *frame_bc9c1f3184547b65f80b8433cb7ec120;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc9c1f3184547b65f80b8433cb7ec120, codeobj_bc9c1f3184547b65f80b8433cb7ec120, module_chardet$sjisprober, sizeof(void *) );
    frame_bc9c1f3184547b65f80b8433cb7ec120 = cache_frame_bc9c1f3184547b65f80b8433cb7ec120;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc9c1f3184547b65f80b8433cb7ec120 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc9c1f3184547b65f80b8433cb7ec120 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_context_analyzer );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_charset_name );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9c1f3184547b65f80b8433cb7ec120 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9c1f3184547b65f80b8433cb7ec120 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc9c1f3184547b65f80b8433cb7ec120 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc9c1f3184547b65f80b8433cb7ec120, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc9c1f3184547b65f80b8433cb7ec120->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc9c1f3184547b65f80b8433cb7ec120, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc9c1f3184547b65f80b8433cb7ec120,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bc9c1f3184547b65f80b8433cb7ec120 == cache_frame_bc9c1f3184547b65f80b8433cb7ec120 )
    {
        Py_DECREF( frame_bc9c1f3184547b65f80b8433cb7ec120 );
    }
    cache_frame_bc9c1f3184547b65f80b8433cb7ec120 = NULL;

    assertFrameObject( frame_bc9c1f3184547b65f80b8433cb7ec120 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_3_charset_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_3_charset_name );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_chardet$sjisprober$$$function_4_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_plain_Japanese;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_4_language );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_4_language );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_chardet$sjisprober$$$function_5_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_i = NULL;
    PyObject *var_coding_state = NULL;
    PyObject *var_char_len = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_241919d801e1cf0e5d5b7d47cff70998 = NULL;

    struct Nuitka_FrameObject *frame_241919d801e1cf0e5d5b7d47cff70998;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_241919d801e1cf0e5d5b7d47cff70998, codeobj_241919d801e1cf0e5d5b7d47cff70998, module_chardet$sjisprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_241919d801e1cf0e5d5b7d47cff70998 = cache_frame_241919d801e1cf0e5d5b7d47cff70998;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_241919d801e1cf0e5d5b7d47cff70998 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_241919d801e1cf0e5d5b7d47cff70998 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_byte_str;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 57;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_3;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coding_sm );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_next_state );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = par_byte_str;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_i;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coding_state;
        var_coding_state = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_coding_state;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ERROR );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_logger );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_debug );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = const_str_digest_1429e5140ade1e372a3e639fc28337a7;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_charset_name );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_language );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_i;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_NOT_ME );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = var_coding_state;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "coding_state" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ITS_ME );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_FOUND_IT );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__state, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_4 = var_coding_state;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "coding_state" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_START );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_coding_sm );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 68;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_current_charlen );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_char_len;
        var_char_len = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_5 = var_i;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__last_char );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_ass_subscript_1 = const_int_pos_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_context_analyzer );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_feed );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__last_char );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_1 = const_int_pos_2;
    tmp_right_name_1 = var_char_len;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_start_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_start_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_stop_name_1 = Py_None;
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_start_name_1 );
    assert( !(tmp_subscript_name_3 == NULL) );
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_char_len;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = par_self;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_distribution_analyzer );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_feed );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_19 = par_self;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__last_char );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_char_len;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_21 = par_self;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_context_analyzer );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_feed );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_4 = par_byte_str;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_left_name_3 = var_i;

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_3 = var_char_len;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_start_name_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_start_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_5 = var_i;

    if ( tmp_left_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_start_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_4 = const_int_pos_3;
    tmp_left_name_4 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_start_name_2 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_5 = var_char_len;

    if ( tmp_right_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_start_name_2 );
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_stop_name_2 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_start_name_2 );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_start_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( !(tmp_subscript_name_4 == NULL) );
    tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_11 = var_char_len;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = par_self;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_distribution_analyzer );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_feed );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_5 = par_byte_str;

    if ( tmp_subscribed_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_left_name_6 = var_i;

    if ( tmp_left_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_start_name_3 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_start_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_7 = var_i;

    if ( tmp_left_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_start_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_7 = const_int_pos_1;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_start_name_3 );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_start_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( !(tmp_subscript_name_5 == NULL) );
    tmp_args_element_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_13 = var_char_len;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_5:;
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_subscribed_name_6 = par_byte_str;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_6 = const_int_neg_1;
    tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = par_self;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__last_char );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_2 );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_int_0;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = par_self;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_state );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_DETECTING );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_27 = par_self;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_context_analyzer );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 83;
    tmp_and_left_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_got_enough_data );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_called_instance_3 = par_self;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_241919d801e1cf0e5d5b7d47cff70998->m_frame.f_lineno = 84;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_confidence );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = par_self;

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_SHORTCUT_THRESHOLD );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_ProbingState );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProbingState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_FOUND_IT );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__state, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    branch_no_6:;
    tmp_source_name_30 = par_self;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_state );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_241919d801e1cf0e5d5b7d47cff70998 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_241919d801e1cf0e5d5b7d47cff70998 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_241919d801e1cf0e5d5b7d47cff70998 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_241919d801e1cf0e5d5b7d47cff70998, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_241919d801e1cf0e5d5b7d47cff70998->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_241919d801e1cf0e5d5b7d47cff70998, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_241919d801e1cf0e5d5b7d47cff70998,
        type_description_1,
        par_self,
        par_byte_str,
        var_i,
        var_coding_state,
        var_char_len
    );


    // Release cached frame.
    if ( frame_241919d801e1cf0e5d5b7d47cff70998 == cache_frame_241919d801e1cf0e5d5b7d47cff70998 )
    {
        Py_DECREF( frame_241919d801e1cf0e5d5b7d47cff70998 );
    }
    cache_frame_241919d801e1cf0e5d5b7d47cff70998 = NULL;

    assertFrameObject( frame_241919d801e1cf0e5d5b7d47cff70998 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_5_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_coding_state );
    var_coding_state = NULL;

    Py_XDECREF( var_char_len );
    var_char_len = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_coding_state );
    var_coding_state = NULL;

    Py_XDECREF( var_char_len );
    var_char_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_5_feed );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_chardet$sjisprober$$$function_6_get_confidence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_context_conf = NULL;
    PyObject *var_distrib_conf = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_bcffcc5d2bffa424a3cd4d17154b0b22 = NULL;

    struct Nuitka_FrameObject *frame_bcffcc5d2bffa424a3cd4d17154b0b22;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcffcc5d2bffa424a3cd4d17154b0b22, codeobj_bcffcc5d2bffa424a3cd4d17154b0b22, module_chardet$sjisprober, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bcffcc5d2bffa424a3cd4d17154b0b22 = cache_frame_bcffcc5d2bffa424a3cd4d17154b0b22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcffcc5d2bffa424a3cd4d17154b0b22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcffcc5d2bffa424a3cd4d17154b0b22 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_context_analyzer );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_bcffcc5d2bffa424a3cd4d17154b0b22->m_frame.f_lineno = 90;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_confidence );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_context_conf == NULL );
    var_context_conf = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_distribution_analyzer );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_bcffcc5d2bffa424a3cd4d17154b0b22->m_frame.f_lineno = 91;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_confidence );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_distrib_conf == NULL );
    var_distrib_conf = tmp_assign_source_2;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = var_context_conf;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context_conf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_distrib_conf;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_bcffcc5d2bffa424a3cd4d17154b0b22->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcffcc5d2bffa424a3cd4d17154b0b22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcffcc5d2bffa424a3cd4d17154b0b22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcffcc5d2bffa424a3cd4d17154b0b22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcffcc5d2bffa424a3cd4d17154b0b22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcffcc5d2bffa424a3cd4d17154b0b22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcffcc5d2bffa424a3cd4d17154b0b22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcffcc5d2bffa424a3cd4d17154b0b22,
        type_description_1,
        par_self,
        var_context_conf,
        var_distrib_conf
    );


    // Release cached frame.
    if ( frame_bcffcc5d2bffa424a3cd4d17154b0b22 == cache_frame_bcffcc5d2bffa424a3cd4d17154b0b22 )
    {
        Py_DECREF( frame_bcffcc5d2bffa424a3cd4d17154b0b22 );
    }
    cache_frame_bcffcc5d2bffa424a3cd4d17154b0b22 = NULL;

    assertFrameObject( frame_bcffcc5d2bffa424a3cd4d17154b0b22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_6_get_confidence );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_context_conf );
    var_context_conf = NULL;

    Py_XDECREF( var_distrib_conf );
    var_distrib_conf = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_context_conf );
    var_context_conf = NULL;

    Py_XDECREF( var_distrib_conf );
    var_distrib_conf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober$$$function_6_get_confidence );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sjisprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_41eaed209616d44c5ff92c75e846cdf3,
#endif
        codeobj_76d7dd1605077366618600516d4cd805,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sjisprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sjisprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_6be82e3a3208f85658198048003e263c,
#endif
        codeobj_906326a9c1185b2f734e7abb2a5f6531,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sjisprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_3_charset_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sjisprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        const_str_digest_70bf8962aa7042312f0fe66e2701384b,
#endif
        codeobj_bc9c1f3184547b65f80b8433cb7ec120,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sjisprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_4_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sjisprober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        const_str_digest_0ef65ba3a7622e22191133ebaf265c82,
#endif
        codeobj_989ce7f99de1aa34a4d220164184d8c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sjisprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_5_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sjisprober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        const_str_digest_cbfa2668b14f9a8a39690dd7ac268239,
#endif
        codeobj_241919d801e1cf0e5d5b7d47cff70998,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sjisprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sjisprober$$$function_6_get_confidence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sjisprober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        const_str_digest_d9ace954d913888bcd2ab222a4fc1c49,
#endif
        codeobj_bcffcc5d2bffa424a3cd4d17154b0b22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sjisprober,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$sjisprober =
{
    PyModuleDef_HEAD_INIT,
    "chardet.sjisprober",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( chardet$sjisprober )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$sjisprober );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("chardet.sjisprober: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.sjisprober: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.sjisprober: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$sjisprober" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$sjisprober = Py_InitModule4(
        "chardet.sjisprober",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$sjisprober = PyModule_Create( &mdef_chardet$sjisprober );
#endif

    moduledict_chardet$sjisprober = MODULE_DICT( module_chardet$sjisprober );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$sjisprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sjisprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sjisprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$sjisprober );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9b121e7421220d9f7a6616b76cddb3d2, module_chardet$sjisprober );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_1f65726dfc85f8cb905ecf0587f8599c_2 = NULL;

    struct Nuitka_FrameObject *frame_1f65726dfc85f8cb905ecf0587f8599c_2;

    struct Nuitka_FrameObject *frame_54ba0b28a35fd75827536278fcca84fe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_chardet$sjisprober_36 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ad4e72f709a04e768b010965847e8ee1;
    UPDATE_STRING_DICT0( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_54ba0b28a35fd75827536278fcca84fe = MAKE_MODULE_FRAME( codeobj_54ba0b28a35fd75827536278fcca84fe, module_chardet$sjisprober );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_54ba0b28a35fd75827536278fcca84fe );
    assert( Py_REFCNT( frame_54ba0b28a35fd75827536278fcca84fe ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_mbcharsetprober;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$sjisprober;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_MultiByteCharSetProber_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_MultiByteCharSetProber,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_MultiByteCharSetProber );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_codingstatemachine;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$sjisprober;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_CodingStateMachine_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 29;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_CodingStateMachine,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_CodingStateMachine );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_chardistribution;
    tmp_globals_name_3 = (PyObject *)moduledict_chardet$sjisprober;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_SJISDistributionAnalysis_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 30;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_SJISDistributionAnalysis,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SJISDistributionAnalysis );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISDistributionAnalysis, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_jpcntx;
    tmp_globals_name_4 = (PyObject *)moduledict_chardet$sjisprober;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_SJISContextAnalysis_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 31;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_SJISContextAnalysis,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SJISContextAnalysis );
    }

    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISContextAnalysis, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_mbcssm;
    tmp_globals_name_5 = (PyObject *)moduledict_chardet$sjisprober;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_SJIS_SM_MODEL_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 32;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_SJIS_SM_MODEL,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SJIS_SM_MODEL );
    }

    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJIS_SM_MODEL, tmp_assign_source_8 );
    tmp_name_name_6 = const_str_plain_enums;
    tmp_globals_name_6 = (PyObject *)moduledict_chardet$sjisprober;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_ProbingState_str_plain_MachineState_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 33;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_ProbingState,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ProbingState );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_10 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_MachineState,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_MachineState );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_11 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Tried code:
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MultiByteCharSetProber );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MultiByteCharSetProber" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;

        goto try_except_handler_2;
    }

    tmp_assign_source_12 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_12;

    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_13 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_13;

    tmp_assign_source_14 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_15;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    tmp_tuple_element_2 = const_str_plain_SJISProber;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 36;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_16 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_16;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$sjisprober_36 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9b121e7421220d9f7a6616b76cddb3d2;
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_SJISProber;
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_1f65726dfc85f8cb905ecf0587f8599c_2, codeobj_1f65726dfc85f8cb905ecf0587f8599c, module_chardet$sjisprober, sizeof(void *) );
    frame_1f65726dfc85f8cb905ecf0587f8599c_2 = cache_frame_1f65726dfc85f8cb905ecf0587f8599c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f65726dfc85f8cb905ecf0587f8599c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f65726dfc85f8cb905ecf0587f8599c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$sjisprober$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$sjisprober$$$function_2_reset(  );
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain_reset, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_chardet$sjisprober_36, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_called_name_2 = PyObject_GetItem( locals_chardet$sjisprober_36, const_str_plain_property );

    if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_chardet$sjisprober$$$function_3_charset_name(  );
    frame_1f65726dfc85f8cb905ecf0587f8599c_2->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_chardet$sjisprober$$$function_3_charset_name(  );
    frame_1f65726dfc85f8cb905ecf0587f8599c_2->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_4:;
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain_charset_name, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_chardet$sjisprober_36, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_called_name_4 = PyObject_GetItem( locals_chardet$sjisprober_36, const_str_plain_property );

    if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_chardet$sjisprober$$$function_4_language(  );
    frame_1f65726dfc85f8cb905ecf0587f8599c_2->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_chardet$sjisprober$$$function_4_language(  );
    frame_1f65726dfc85f8cb905ecf0587f8599c_2->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_5:;
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain_language, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$sjisprober$$$function_5_feed(  );
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain_feed, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$sjisprober$$$function_6_get_confidence(  );
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain_get_confidence, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f65726dfc85f8cb905ecf0587f8599c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f65726dfc85f8cb905ecf0587f8599c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f65726dfc85f8cb905ecf0587f8599c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f65726dfc85f8cb905ecf0587f8599c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f65726dfc85f8cb905ecf0587f8599c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f65726dfc85f8cb905ecf0587f8599c_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_1f65726dfc85f8cb905ecf0587f8599c_2 == cache_frame_1f65726dfc85f8cb905ecf0587f8599c_2 )
    {
        Py_DECREF( frame_1f65726dfc85f8cb905ecf0587f8599c_2 );
    }
    cache_frame_1f65726dfc85f8cb905ecf0587f8599c_2 = NULL;

    assertFrameObject( frame_1f65726dfc85f8cb905ecf0587f8599c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_4;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictset_value = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_chardet$sjisprober_36, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_called_name_6 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_3 = const_str_plain_SJISProber;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_chardet$sjisprober_36;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_54ba0b28a35fd75827536278fcca84fe->m_frame.f_lineno = 36;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_18;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_chardet$sjisprober_36 );
    locals_chardet$sjisprober_36 = NULL;
    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_chardet$sjisprober_36 );
    locals_chardet$sjisprober_36 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$sjisprober );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 36;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_17 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_chardet$sjisprober, (Nuitka_StringObject *)const_str_plain_SJISProber, tmp_assign_source_17 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54ba0b28a35fd75827536278fcca84fe );
#endif
    popFrameStack();

    assertFrameObject( frame_54ba0b28a35fd75827536278fcca84fe );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54ba0b28a35fd75827536278fcca84fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54ba0b28a35fd75827536278fcca84fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54ba0b28a35fd75827536278fcca84fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54ba0b28a35fd75827536278fcca84fe, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_chardet$sjisprober );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
