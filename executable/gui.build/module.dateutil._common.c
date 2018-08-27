/* Generated code for Python source for module 'dateutil._common'
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

/* The _module_dateutil$_common is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil$_common;
PyDictObject *moduledict_dateutil$_common;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_0bb31820afe8200aa2e6f08fb3a3471a;
extern PyObject *const_str_plain___hash__;
extern PyObject *const_str_plain_MO;
static PyObject *const_tuple_str_plain_self_str_plain_n_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_b933f3f6e6f39491ddadb780d31644dd;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___ne__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_16af89a1a0641f5c93ef8517d4bec87f;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_SU;
static PyObject *const_str_digest_e62e9a308b8ee9b830742ddcfccb78e3;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_7362ab9966ac0550e62a56fcea84cc1a;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_other;
extern PyObject *const_int_0;
static PyObject *const_str_digest_61437dccee41b5e49809d9336d6d0355;
extern PyObject *const_str_plain_weekday;
static PyObject *const_list_str_plain_weekday_str_plain_n_list;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_TH;
static PyObject *const_str_digest_e39977cb27cf6b5316b3b5c879565989;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_FR;
static PyObject *const_str_digest_e5700bd688657c898e9bf091bc1acb1b;
extern PyObject *const_str_plain_TU;
static PyObject *const_str_digest_1237694a887badaad5f47fabad543b69;
extern PyObject *const_str_plain___slots__;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_SA;
extern PyObject *const_str_plain___call__;
static PyObject *const_tuple_str_plain_self_str_plain_weekday_str_plain_n_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_WE;
static PyObject *const_str_digest_ee64785b48932c4265ad3362f5316168;
static PyObject *const_tuple_str_plain_self_str_plain_s_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_digest_bd8ad05d099b6a030a25bc7092713268;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_0bb31820afe8200aa2e6f08fb3a3471a = UNSTREAM_STRING( &constant_bin[ 376088 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_n_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_b933f3f6e6f39491ddadb780d31644dd = UNSTREAM_STRING( &constant_bin[ 376102 ], 7, 0 );
    const_str_digest_16af89a1a0641f5c93ef8517d4bec87f = UNSTREAM_STRING( &constant_bin[ 376109 ], 16, 0 );
    const_str_digest_e62e9a308b8ee9b830742ddcfccb78e3 = UNSTREAM_STRING( &constant_bin[ 376125 ], 39, 0 );
    const_str_digest_7362ab9966ac0550e62a56fcea84cc1a = UNSTREAM_STRING( &constant_bin[ 376164 ], 60, 0 );
    const_str_digest_61437dccee41b5e49809d9336d6d0355 = UNSTREAM_STRING( &constant_bin[ 376224 ], 16, 0 );
    const_list_str_plain_weekday_str_plain_n_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_weekday_str_plain_n_list, 0, const_str_plain_weekday ); Py_INCREF( const_str_plain_weekday );
    PyList_SET_ITEM( const_list_str_plain_weekday_str_plain_n_list, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 0, const_str_plain_MO ); Py_INCREF( const_str_plain_MO );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 1, const_str_plain_TU ); Py_INCREF( const_str_plain_TU );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 2, const_str_plain_WE ); Py_INCREF( const_str_plain_WE );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 3, const_str_plain_TH ); Py_INCREF( const_str_plain_TH );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 4, const_str_plain_FR ); Py_INCREF( const_str_plain_FR );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 5, const_str_plain_SA ); Py_INCREF( const_str_plain_SA );
    PyTuple_SET_ITEM( const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple, 6, const_str_plain_SU ); Py_INCREF( const_str_plain_SU );
    const_str_digest_e39977cb27cf6b5316b3b5c879565989 = UNSTREAM_STRING( &constant_bin[ 376240 ], 16, 0 );
    const_str_digest_e5700bd688657c898e9bf091bc1acb1b = UNSTREAM_STRING( &constant_bin[ 376256 ], 14, 0 );
    const_str_digest_1237694a887badaad5f47fabad543b69 = UNSTREAM_STRING( &constant_bin[ 376270 ], 25, 0 );
    const_tuple_str_plain_self_str_plain_weekday_str_plain_n_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_weekday_str_plain_n_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_weekday_str_plain_n_tuple, 1, const_str_plain_weekday ); Py_INCREF( const_str_plain_weekday );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_weekday_str_plain_n_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_ee64785b48932c4265ad3362f5316168 = UNSTREAM_STRING( &constant_bin[ 376278 ], 16, 0 );
    const_tuple_str_plain_self_str_plain_s_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_s_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_s_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil$_common( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_743f61f02ead5d93d4d4c3f8d573e769;
static PyCodeObject *codeobj_b4ef0675089ba641fd7c38ce5065da9a;
static PyCodeObject *codeobj_89d47690bc565385c3c9737ffb60fe47;
static PyCodeObject *codeobj_2225da3a9142161d14bf7cb7fcd16cef;
static PyCodeObject *codeobj_1c34d1079a2196ee4604b4cf675d0688;
static PyCodeObject *codeobj_c75a6d08526757a35fa02964956021cb;
static PyCodeObject *codeobj_d968ad55f414b3d9db0e3d123f0666e5;
static PyCodeObject *codeobj_af2e6d46a6fe3fdd94edbf2cc3fa614c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7362ab9966ac0550e62a56fcea84cc1a;
    codeobj_743f61f02ead5d93d4d4c3f8d573e769 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1237694a887badaad5f47fabad543b69, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b4ef0675089ba641fd7c38ce5065da9a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 13, const_tuple_str_plain_self_str_plain_n_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89d47690bc565385c3c9737ffb60fe47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 19, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2225da3a9142161d14bf7cb7fcd16cef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___hash__, 27, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c34d1079a2196ee4604b4cf675d0688 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 9, const_tuple_str_plain_self_str_plain_weekday_str_plain_n_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c75a6d08526757a35fa02964956021cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 33, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d968ad55f414b3d9db0e3d123f0666e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 36, const_tuple_str_plain_self_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af2e6d46a6fe3fdd94edbf2cc3fa614c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_weekday, 6, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_2___call__(  );


static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_3___eq__(  );


static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_4___hash__(  );


static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_5___ne__(  );


static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_6___repr__(  );


// The module function definitions.
static PyObject *impl_dateutil$_common$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_weekday = python_pars[ 1 ];
    PyObject *par_n = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_1c34d1079a2196ee4604b4cf675d0688 = NULL;

    struct Nuitka_FrameObject *frame_1c34d1079a2196ee4604b4cf675d0688;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c34d1079a2196ee4604b4cf675d0688, codeobj_1c34d1079a2196ee4604b4cf675d0688, module_dateutil$_common, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1c34d1079a2196ee4604b4cf675d0688 = cache_frame_1c34d1079a2196ee4604b4cf675d0688;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c34d1079a2196ee4604b4cf675d0688 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c34d1079a2196ee4604b4cf675d0688 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_weekday;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_weekday, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_n;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_n, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c34d1079a2196ee4604b4cf675d0688 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c34d1079a2196ee4604b4cf675d0688 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c34d1079a2196ee4604b4cf675d0688, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c34d1079a2196ee4604b4cf675d0688->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c34d1079a2196ee4604b4cf675d0688, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c34d1079a2196ee4604b4cf675d0688,
        type_description_1,
        par_self,
        par_weekday,
        par_n
    );


    // Release cached frame.
    if ( frame_1c34d1079a2196ee4604b4cf675d0688 == cache_frame_1c34d1079a2196ee4604b4cf675d0688 )
    {
        Py_DECREF( frame_1c34d1079a2196ee4604b4cf675d0688 );
    }
    cache_frame_1c34d1079a2196ee4604b4cf675d0688 = NULL;

    assertFrameObject( frame_1c34d1079a2196ee4604b4cf675d0688 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_weekday );
    par_weekday = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

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

    Py_XDECREF( par_weekday );
    par_weekday = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_1___init__ );
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


static PyObject *impl_dateutil$_common$$$function_2___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_b4ef0675089ba641fd7c38ce5065da9a = NULL;

    struct Nuitka_FrameObject *frame_b4ef0675089ba641fd7c38ce5065da9a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4ef0675089ba641fd7c38ce5065da9a, codeobj_b4ef0675089ba641fd7c38ce5065da9a, module_dateutil$_common, sizeof(void *)+sizeof(void *) );
    frame_b4ef0675089ba641fd7c38ce5065da9a = cache_frame_b4ef0675089ba641fd7c38ce5065da9a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4ef0675089ba641fd7c38ce5065da9a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4ef0675089ba641fd7c38ce5065da9a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_n;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_self;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_weekday );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_n;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_b4ef0675089ba641fd7c38ce5065da9a->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4ef0675089ba641fd7c38ce5065da9a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4ef0675089ba641fd7c38ce5065da9a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4ef0675089ba641fd7c38ce5065da9a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4ef0675089ba641fd7c38ce5065da9a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4ef0675089ba641fd7c38ce5065da9a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4ef0675089ba641fd7c38ce5065da9a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4ef0675089ba641fd7c38ce5065da9a,
        type_description_1,
        par_self,
        par_n
    );


    // Release cached frame.
    if ( frame_b4ef0675089ba641fd7c38ce5065da9a == cache_frame_b4ef0675089ba641fd7c38ce5065da9a )
    {
        Py_DECREF( frame_b4ef0675089ba641fd7c38ce5065da9a );
    }
    cache_frame_b4ef0675089ba641fd7c38ce5065da9a = NULL;

    assertFrameObject( frame_b4ef0675089ba641fd7c38ce5065da9a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_2___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_2___call__ );
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


static PyObject *impl_dateutil$_common$$$function_3___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_89d47690bc565385c3c9737ffb60fe47 = NULL;

    struct Nuitka_FrameObject *frame_89d47690bc565385c3c9737ffb60fe47;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89d47690bc565385c3c9737ffb60fe47, codeobj_89d47690bc565385c3c9737ffb60fe47, module_dateutil$_common, sizeof(void *)+sizeof(void *) );
    frame_89d47690bc565385c3c9737ffb60fe47 = cache_frame_89d47690bc565385c3c9737ffb60fe47;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89d47690bc565385c3c9737ffb60fe47 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89d47690bc565385c3c9737ffb60fe47 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_weekday );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_other;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_weekday );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_4 = par_other;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_or_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_89d47690bc565385c3c9737ffb60fe47, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_89d47690bc565385c3c9737ffb60fe47, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 20;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_89d47690bc565385c3c9737ffb60fe47->m_frame) frame_89d47690bc565385c3c9737ffb60fe47->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_3___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89d47690bc565385c3c9737ffb60fe47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89d47690bc565385c3c9737ffb60fe47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89d47690bc565385c3c9737ffb60fe47 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89d47690bc565385c3c9737ffb60fe47, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89d47690bc565385c3c9737ffb60fe47->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89d47690bc565385c3c9737ffb60fe47, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89d47690bc565385c3c9737ffb60fe47,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_89d47690bc565385c3c9737ffb60fe47 == cache_frame_89d47690bc565385c3c9737ffb60fe47 )
    {
        Py_DECREF( frame_89d47690bc565385c3c9737ffb60fe47 );
    }
    cache_frame_89d47690bc565385c3c9737ffb60fe47 = NULL;

    assertFrameObject( frame_89d47690bc565385c3c9737ffb60fe47 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_3___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_3___eq__ );
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


static PyObject *impl_dateutil$_common$$$function_4___hash__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_hash_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_2225da3a9142161d14bf7cb7fcd16cef = NULL;

    struct Nuitka_FrameObject *frame_2225da3a9142161d14bf7cb7fcd16cef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2225da3a9142161d14bf7cb7fcd16cef, codeobj_2225da3a9142161d14bf7cb7fcd16cef, module_dateutil$_common, sizeof(void *) );
    frame_2225da3a9142161d14bf7cb7fcd16cef = cache_frame_2225da3a9142161d14bf7cb7fcd16cef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2225da3a9142161d14bf7cb7fcd16cef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2225da3a9142161d14bf7cb7fcd16cef ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_weekday );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hash_arg_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_hash_arg_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_hash_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_hash_arg_1 );

        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_hash_arg_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_HASH( tmp_hash_arg_1 );
    Py_DECREF( tmp_hash_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2225da3a9142161d14bf7cb7fcd16cef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2225da3a9142161d14bf7cb7fcd16cef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2225da3a9142161d14bf7cb7fcd16cef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2225da3a9142161d14bf7cb7fcd16cef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2225da3a9142161d14bf7cb7fcd16cef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2225da3a9142161d14bf7cb7fcd16cef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2225da3a9142161d14bf7cb7fcd16cef,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2225da3a9142161d14bf7cb7fcd16cef == cache_frame_2225da3a9142161d14bf7cb7fcd16cef )
    {
        Py_DECREF( frame_2225da3a9142161d14bf7cb7fcd16cef );
    }
    cache_frame_2225da3a9142161d14bf7cb7fcd16cef = NULL;

    assertFrameObject( frame_2225da3a9142161d14bf7cb7fcd16cef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_4___hash__ );
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
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_4___hash__ );
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


static PyObject *impl_dateutil$_common$$$function_5___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c75a6d08526757a35fa02964956021cb = NULL;

    struct Nuitka_FrameObject *frame_c75a6d08526757a35fa02964956021cb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c75a6d08526757a35fa02964956021cb, codeobj_c75a6d08526757a35fa02964956021cb, module_dateutil$_common, sizeof(void *)+sizeof(void *) );
    frame_c75a6d08526757a35fa02964956021cb = cache_frame_c75a6d08526757a35fa02964956021cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c75a6d08526757a35fa02964956021cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c75a6d08526757a35fa02964956021cb ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c75a6d08526757a35fa02964956021cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c75a6d08526757a35fa02964956021cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c75a6d08526757a35fa02964956021cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c75a6d08526757a35fa02964956021cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c75a6d08526757a35fa02964956021cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c75a6d08526757a35fa02964956021cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c75a6d08526757a35fa02964956021cb,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_c75a6d08526757a35fa02964956021cb == cache_frame_c75a6d08526757a35fa02964956021cb )
    {
        Py_DECREF( frame_c75a6d08526757a35fa02964956021cb );
    }
    cache_frame_c75a6d08526757a35fa02964956021cb = NULL;

    assertFrameObject( frame_c75a6d08526757a35fa02964956021cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_5___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_5___ne__ );
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


static PyObject *impl_dateutil$_common$$$function_6___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_s = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_d968ad55f414b3d9db0e3d123f0666e5 = NULL;

    struct Nuitka_FrameObject *frame_d968ad55f414b3d9db0e3d123f0666e5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d968ad55f414b3d9db0e3d123f0666e5, codeobj_d968ad55f414b3d9db0e3d123f0666e5, module_dateutil$_common, sizeof(void *)+sizeof(void *) );
    frame_d968ad55f414b3d9db0e3d123f0666e5 = cache_frame_d968ad55f414b3d9db0e3d123f0666e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d968ad55f414b3d9db0e3d123f0666e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d968ad55f414b3d9db0e3d123f0666e5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = const_tuple_b452a2d3126cbe015754ecd10a759ca9_tuple;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_weekday );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_n );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = var_s;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_b933f3f6e6f39491ddadb780d31644dd;
    tmp_tuple_element_1 = var_s;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_n );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d968ad55f414b3d9db0e3d123f0666e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d968ad55f414b3d9db0e3d123f0666e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d968ad55f414b3d9db0e3d123f0666e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d968ad55f414b3d9db0e3d123f0666e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d968ad55f414b3d9db0e3d123f0666e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d968ad55f414b3d9db0e3d123f0666e5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d968ad55f414b3d9db0e3d123f0666e5,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame.
    if ( frame_d968ad55f414b3d9db0e3d123f0666e5 == cache_frame_d968ad55f414b3d9db0e3d123f0666e5 )
    {
        Py_DECREF( frame_d968ad55f414b3d9db0e3d123f0666e5 );
    }
    cache_frame_d968ad55f414b3d9db0e3d123f0666e5 = NULL;

    assertFrameObject( frame_d968ad55f414b3d9db0e3d123f0666e5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_6___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$_common$$$function_6___repr__ );
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



static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$_common$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_bd8ad05d099b6a030a25bc7092713268,
#endif
        codeobj_1c34d1079a2196ee4604b4cf675d0688,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$_common,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_2___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$_common$$$function_2___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_e39977cb27cf6b5316b3b5c879565989,
#endif
        codeobj_b4ef0675089ba641fd7c38ce5065da9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$_common,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_3___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$_common$$$function_3___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_0bb31820afe8200aa2e6f08fb3a3471a,
#endif
        codeobj_89d47690bc565385c3c9737ffb60fe47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$_common,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_4___hash__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$_common$$$function_4___hash__,
        const_str_plain___hash__,
#if PYTHON_VERSION >= 300
        const_str_digest_16af89a1a0641f5c93ef8517d4bec87f,
#endif
        codeobj_2225da3a9142161d14bf7cb7fcd16cef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$_common,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_5___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$_common$$$function_5___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        const_str_digest_e5700bd688657c898e9bf091bc1acb1b,
#endif
        codeobj_c75a6d08526757a35fa02964956021cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$_common,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$_common$$$function_6___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$_common$$$function_6___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_61437dccee41b5e49809d9336d6d0355,
#endif
        codeobj_d968ad55f414b3d9db0e3d123f0666e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$_common,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil$_common =
{
    PyModuleDef_HEAD_INIT,
    "dateutil._common",   /* m_name */
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

MOD_INIT_DECL( dateutil$_common )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil$_common );
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
    puts("dateutil._common: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil._common: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil._common: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil$_common" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil$_common = Py_InitModule4(
        "dateutil._common",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil$_common = PyModule_Create( &mdef_dateutil$_common );
#endif

    moduledict_dateutil$_common = MODULE_DICT( module_dateutil$_common );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil$_common,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$_common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$_common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil$_common );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ee64785b48932c4265ad3362f5316168, module_dateutil$_common );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 = NULL;

    struct Nuitka_FrameObject *frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2;

    struct Nuitka_FrameObject *frame_743f61f02ead5d93d4d4c3f8d573e769;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_dateutil$_common_6 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_e62e9a308b8ee9b830742ddcfccb78e3;
    UPDATE_STRING_DICT0( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7362ab9966ac0550e62a56fcea84cc1a;
    UPDATE_STRING_DICT0( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_743f61f02ead5d93d4d4c3f8d573e769 = MAKE_MODULE_FRAME( codeobj_743f61f02ead5d93d4d4c3f8d573e769, module_dateutil$_common );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_743f61f02ead5d93d4d4c3f8d573e769 );
    assert( Py_REFCNT( frame_743f61f02ead5d93d4d4c3f8d573e769 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_4 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_4;

    tmp_assign_source_5 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
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


        exception_lineno = 6;

        goto try_except_handler_1;
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


        exception_lineno = 6;

        goto try_except_handler_1;
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


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_6 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_6;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
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


        exception_lineno = 6;

        goto try_except_handler_1;
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


        exception_lineno = 6;

        goto try_except_handler_1;
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


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    tmp_tuple_element_1 = const_str_plain_weekday;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_743f61f02ead5d93d4d4c3f8d573e769->m_frame.f_lineno = 6;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_7 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_7;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_dateutil$_common_6 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_ee64785b48932c4265ad3362f5316168;
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_weekday;
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2, codeobj_af2e6d46a6fe3fdd94edbf2cc3fa614c, module_dateutil$_common, sizeof(void *) );
    frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 = cache_frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = LIST_COPY( const_list_str_plain_weekday_str_plain_n_list );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___slots__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_dateutil$_common$$$function_1___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$_common$$$function_2___call__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___call__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$_common$$$function_3___eq__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$_common$$$function_4___hash__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___hash__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$_common$$$function_5___ne__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$_common$$$function_6___repr__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 == cache_frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 )
    {
        Py_DECREF( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 );
    }
    cache_frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 = NULL;

    assertFrameObject( frame_af2e6d46a6fe3fdd94edbf2cc3fa614c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
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
    tmp_dictset_value = const_tuple_type_object_tuple;
    tmp_res = PyObject_SetItem( locals_dateutil$_common_6, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain_weekday;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dateutil$_common_6;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_743f61f02ead5d93d4d4c3f8d573e769->m_frame.f_lineno = 6;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_9;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_dateutil$_common_6 );
    locals_dateutil$_common_6 = NULL;
    goto try_return_handler_2;
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

    Py_DECREF( locals_dateutil$_common_6 );
    locals_dateutil$_common_6 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$_common );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$_common );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 6;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_8 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_dateutil$_common, (Nuitka_StringObject *)const_str_plain_weekday, tmp_assign_source_8 );
    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_743f61f02ead5d93d4d4c3f8d573e769 );
#endif
    popFrameStack();

    assertFrameObject( frame_743f61f02ead5d93d4d4c3f8d573e769 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_743f61f02ead5d93d4d4c3f8d573e769 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_743f61f02ead5d93d4d4c3f8d573e769, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_743f61f02ead5d93d4d4c3f8d573e769->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_743f61f02ead5d93d4d4c3f8d573e769, exception_lineno );
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


    return MOD_RETURN_VALUE( module_dateutil$_common );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
