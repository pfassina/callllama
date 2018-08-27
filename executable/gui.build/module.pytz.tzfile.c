/* Generated code for Python source for module 'pytz.tzfile'
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

/* The _module_pytz$tzfile is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pytz$tzfile;
PyDictObject *moduledict_pytz$tzfile;

/* The module constants used, if any. */
static PyObject *const_str_digest_83df5b81b91c606dcd11b3b9aef44e16;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_DstTzInfo;
extern PyObject *const_tuple_str_plain_ASCII_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_digest_214526c6d0919fd59e4c97cc9ee9cc75;
extern PyObject *const_str_digest_8fba0ec9be0c4ed486d17847c03a428a;
extern PyObject *const_str_plain__transition_info;
extern PyObject *const_str_plain__tzname;
static PyObject *const_tuple_str_plain_trans_tuple;
static PyObject *const_str_plain__byte_string;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_f77ef844930554e27ef8b715d57bc391;
static PyObject *const_str_digest_feaac583908f872e90691484b8e0adbe;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_6fd9762c0093626789d5dafcc090ede1;
static PyObject *const_str_plain_lBB;
extern PyObject *const_str_plain_TZif;
static PyObject *const_str_digest_6058f7e49513ef4387dbfc83498d0cc5;
static PyObject *const_tuple_str_plain_unpack_str_plain_calcsize_tuple;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_trans;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_plain_memorized_ttinfo;
static PyObject *const_tuple_str_plain_memorized_datetime_str_plain_memorized_timedelta_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_insert;
static PyObject *const_str_plain_calcsize;
static PyObject *const_str_plain_charcnt;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_ttinfo;
static PyObject *const_str_digest_adb3f84566075e68f9a9334af4d70244;
extern PyObject *const_str_plain__utcoffset;
extern PyObject *const_str_plain_memorized_datetime;
static PyObject *const_str_plain__NULL;
static PyObject *const_str_plain__std_string;
extern PyObject *const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
extern PyObject *const_tuple_str_plain_s_tuple;
static PyObject *const_tuple_be2523ab32168cc0680d1f6594340301_tuple;
static PyObject *const_tuple_e517d0dfc764dc61e4e6ddbb8c08104c_tuple;
extern PyObject *const_str_chr_0;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__utc_transition_times;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_build_tzinfo;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_StaticTzInfo;
static PyObject *const_tuple_str_plain_TZif_tuple;
extern PyObject *const_str_plain_read;
extern PyObject *const_tuple_str_plain_datetime_tuple;
static PyObject *const_str_digest_5553d0f72ee436dddba34f5b4d3fdfa8;
extern PyObject *const_tuple_str_chr_0_tuple;
extern PyObject *const_str_plain_find;
extern PyObject *const_str_plain_zone;
static PyObject *const_str_plain_timecnt;
extern PyObject *const_str_plain_memorized_timedelta;
static PyObject *const_tuple_str_digest_f77ef844930554e27ef8b715d57bc391_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_int_pos_10800;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain_ASCII;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_83df5b81b91c606dcd11b3b9aef44e16 = UNSTREAM_STRING( &constant_bin[ 768572 ], 55, 0 );
    const_str_digest_214526c6d0919fd59e4c97cc9ee9cc75 = UNSTREAM_STRING( &constant_bin[ 768627 ], 12, 0 );
    const_tuple_str_plain_trans_tuple = PyTuple_New( 1 );
    const_str_plain_trans = UNSTREAM_STRING( &constant_bin[ 423082 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trans_tuple, 0, const_str_plain_trans ); Py_INCREF( const_str_plain_trans );
    const_str_plain__byte_string = UNSTREAM_STRING( &constant_bin[ 768639 ], 12, 1 );
    const_str_digest_f77ef844930554e27ef8b715d57bc391 = UNSTREAM_STRING( &constant_bin[ 768651 ], 12, 0 );
    const_str_digest_feaac583908f872e90691484b8e0adbe = UNSTREAM_STRING( &constant_bin[ 768663 ], 20, 0 );
    const_str_digest_6fd9762c0093626789d5dafcc090ede1 = UNSTREAM_STRING( &constant_bin[ 768683 ], 48, 0 );
    const_str_plain_lBB = UNSTREAM_STRING( &constant_bin[ 768731 ], 3, 1 );
    const_str_digest_6058f7e49513ef4387dbfc83498d0cc5 = UNSTREAM_STRING( &constant_bin[ 768734 ], 50, 0 );
    const_tuple_str_plain_unpack_str_plain_calcsize_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_str_plain_calcsize_tuple, 0, const_str_plain_unpack ); Py_INCREF( const_str_plain_unpack );
    const_str_plain_calcsize = UNSTREAM_STRING( &constant_bin[ 768784 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_str_plain_calcsize_tuple, 1, const_str_plain_calcsize ); Py_INCREF( const_str_plain_calcsize );
    const_tuple_str_plain_memorized_datetime_str_plain_memorized_timedelta_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_memorized_datetime_str_plain_memorized_timedelta_tuple, 0, const_str_plain_memorized_datetime ); Py_INCREF( const_str_plain_memorized_datetime );
    PyTuple_SET_ITEM( const_tuple_str_plain_memorized_datetime_str_plain_memorized_timedelta_tuple, 1, const_str_plain_memorized_timedelta ); Py_INCREF( const_str_plain_memorized_timedelta );
    const_str_plain_charcnt = UNSTREAM_STRING( &constant_bin[ 435957 ], 7, 1 );
    const_str_digest_adb3f84566075e68f9a9334af4d70244 = UNSTREAM_STRING( &constant_bin[ 768792 ], 53, 0 );
    const_str_plain__NULL = UNSTREAM_STRING( &constant_bin[ 768845 ], 5, 1 );
    const_str_plain__std_string = UNSTREAM_STRING( &constant_bin[ 768850 ], 11, 1 );
    const_tuple_be2523ab32168cc0680d1f6594340301_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_be2523ab32168cc0680d1f6594340301_tuple, 0, const_str_plain_StaticTzInfo ); Py_INCREF( const_str_plain_StaticTzInfo );
    PyTuple_SET_ITEM( const_tuple_be2523ab32168cc0680d1f6594340301_tuple, 1, const_str_plain_DstTzInfo ); Py_INCREF( const_str_plain_DstTzInfo );
    PyTuple_SET_ITEM( const_tuple_be2523ab32168cc0680d1f6594340301_tuple, 2, const_str_plain_memorized_ttinfo ); Py_INCREF( const_str_plain_memorized_ttinfo );
    const_tuple_e517d0dfc764dc61e4e6ddbb8c08104c_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 768861 ], 295 );
    const_tuple_str_plain_TZif_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TZif_tuple, 0, const_str_plain_TZif ); Py_INCREF( const_str_plain_TZif );
    const_str_digest_5553d0f72ee436dddba34f5b4d3fdfa8 = UNSTREAM_STRING( &constant_bin[ 769156 ], 55, 0 );
    const_str_plain_timecnt = UNSTREAM_STRING( &constant_bin[ 435939 ], 7, 1 );
    const_tuple_str_digest_f77ef844930554e27ef8b715d57bc391_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f77ef844930554e27ef8b715d57bc391_tuple, 0, const_str_digest_f77ef844930554e27ef8b715d57bc391 ); Py_INCREF( const_str_digest_f77ef844930554e27ef8b715d57bc391 );
    const_int_pos_10800 = PyLong_FromUnsignedLong( 10800ul );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pytz$tzfile( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cc76d9863b71b9207192438d24eeef04;
static PyCodeObject *codeobj_4e0e6c6717274e4cc1227ebbc6385723;
static PyCodeObject *codeobj_d8cba1d646f8f2ff0585edaac23a37c1;
static PyCodeObject *codeobj_eda437a23a6e29293936178e4dbaf192;
static PyCodeObject *codeobj_847f7561769a46a15c834a7a693fe9a7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_83df5b81b91c606dcd11b3b9aef44e16;
    codeobj_cc76d9863b71b9207192438d24eeef04 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 42, const_tuple_str_plain_trans_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4e0e6c6717274e4cc1227ebbc6385723 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_feaac583908f872e90691484b8e0adbe, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d8cba1d646f8f2ff0585edaac23a37c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__byte_string, 13, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eda437a23a6e29293936178e4dbaf192 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__std_string, 20, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_847f7561769a46a15c834a7a693fe9a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_tzinfo, 25, const_tuple_e517d0dfc764dc61e4e6ddbb8c08104c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pytz$tzfile$$$function_1__byte_string(  );


static PyObject *MAKE_FUNCTION_pytz$tzfile$$$function_2__std_string(  );


static PyObject *MAKE_FUNCTION_pytz$tzfile$$$function_3_build_tzinfo(  );


// The module function definitions.
static PyObject *impl_pytz$tzfile$$$function_1__byte_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d8cba1d646f8f2ff0585edaac23a37c1 = NULL;

    struct Nuitka_FrameObject *frame_d8cba1d646f8f2ff0585edaac23a37c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8cba1d646f8f2ff0585edaac23a37c1, codeobj_d8cba1d646f8f2ff0585edaac23a37c1, module_pytz$tzfile, sizeof(void *) );
    frame_d8cba1d646f8f2ff0585edaac23a37c1 = cache_frame_d8cba1d646f8f2ff0585edaac23a37c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8cba1d646f8f2ff0585edaac23a37c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8cba1d646f8f2ff0585edaac23a37c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d8cba1d646f8f2ff0585edaac23a37c1->m_frame.f_lineno = 15;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8cba1d646f8f2ff0585edaac23a37c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8cba1d646f8f2ff0585edaac23a37c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8cba1d646f8f2ff0585edaac23a37c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8cba1d646f8f2ff0585edaac23a37c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8cba1d646f8f2ff0585edaac23a37c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8cba1d646f8f2ff0585edaac23a37c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8cba1d646f8f2ff0585edaac23a37c1,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_d8cba1d646f8f2ff0585edaac23a37c1 == cache_frame_d8cba1d646f8f2ff0585edaac23a37c1 )
    {
        Py_DECREF( frame_d8cba1d646f8f2ff0585edaac23a37c1 );
    }
    cache_frame_d8cba1d646f8f2ff0585edaac23a37c1 = NULL;

    assertFrameObject( frame_d8cba1d646f8f2ff0585edaac23a37c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_1__byte_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_1__byte_string );
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


static PyObject *impl_pytz$tzfile$$$function_2__std_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_unicode_arg_1;
    static struct Nuitka_FrameObject *cache_frame_eda437a23a6e29293936178e4dbaf192 = NULL;

    struct Nuitka_FrameObject *frame_eda437a23a6e29293936178e4dbaf192;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eda437a23a6e29293936178e4dbaf192, codeobj_eda437a23a6e29293936178e4dbaf192, module_pytz$tzfile, sizeof(void *) );
    frame_eda437a23a6e29293936178e4dbaf192 = cache_frame_eda437a23a6e29293936178e4dbaf192;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eda437a23a6e29293936178e4dbaf192 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eda437a23a6e29293936178e4dbaf192 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_eda437a23a6e29293936178e4dbaf192->m_frame.f_lineno = 22;
    tmp_unicode_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eda437a23a6e29293936178e4dbaf192 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eda437a23a6e29293936178e4dbaf192 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eda437a23a6e29293936178e4dbaf192 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eda437a23a6e29293936178e4dbaf192, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eda437a23a6e29293936178e4dbaf192->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eda437a23a6e29293936178e4dbaf192, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eda437a23a6e29293936178e4dbaf192,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_eda437a23a6e29293936178e4dbaf192 == cache_frame_eda437a23a6e29293936178e4dbaf192 )
    {
        Py_DECREF( frame_eda437a23a6e29293936178e4dbaf192 );
    }
    cache_frame_eda437a23a6e29293936178e4dbaf192 = NULL;

    assertFrameObject( frame_eda437a23a6e29293936178e4dbaf192 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_2__std_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_2__std_string );
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


static PyObject *impl_pytz$tzfile$$$function_3_build_tzinfo( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zone = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *var_head_fmt = NULL;
    PyObject *var_head_size = NULL;
    PyObject *var_magic = NULL;
    PyObject *var_format = NULL;
    PyObject *var_ttisgmtcnt = NULL;
    PyObject *var_ttisstdcnt = NULL;
    PyObject *var_leapcnt = NULL;
    PyObject *var_timecnt = NULL;
    PyObject *var_typecnt = NULL;
    PyObject *var_charcnt = NULL;
    PyObject *var_data_fmt = NULL;
    PyObject *var_data_size = NULL;
    PyObject *var_data = NULL;
    PyObject *var_transitions = NULL;
    PyObject *var_lindexes = NULL;
    PyObject *var_ttinfo_raw = NULL;
    PyObject *var_tznames_raw = NULL;
    PyObject *var_ttinfo = NULL;
    PyObject *var_tznames = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tzname_offset = NULL;
    PyObject *var_nul = NULL;
    PyObject *var_cls = NULL;
    PyObject *var_transition_info = NULL;
    PyObject *var_inf = NULL;
    PyObject *var_utcoffset = NULL;
    PyObject *var_dst = NULL;
    PyObject *var_j = NULL;
    PyObject *var_prev_inf = NULL;
    PyObject *var_stdinf = NULL;
    PyObject *var_tzname = NULL;
    PyObject *outline_0_var_trans = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bool_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_left_name_22;
    PyObject *tmp_left_name_23;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_right_name_22;
    PyObject *tmp_right_name_23;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_start_name_4;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_step_name_4;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_stop_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscribed_name_24;
    PyObject *tmp_subscribed_name_25;
    PyObject *tmp_subscribed_name_26;
    PyObject *tmp_subscribed_name_27;
    PyObject *tmp_subscribed_name_28;
    PyObject *tmp_subscribed_name_29;
    PyObject *tmp_subscribed_name_30;
    PyObject *tmp_subscribed_name_31;
    PyObject *tmp_subscribed_name_32;
    PyObject *tmp_subscribed_name_33;
    PyObject *tmp_subscribed_name_34;
    PyObject *tmp_subscribed_name_35;
    PyObject *tmp_subscribed_name_36;
    PyObject *tmp_subscribed_name_37;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_subscript_name_24;
    PyObject *tmp_subscript_name_25;
    PyObject *tmp_subscript_name_26;
    PyObject *tmp_subscript_name_27;
    PyObject *tmp_subscript_name_28;
    PyObject *tmp_subscript_name_29;
    PyObject *tmp_subscript_name_30;
    PyObject *tmp_subscript_name_31;
    PyObject *tmp_subscript_name_32;
    PyObject *tmp_subscript_name_33;
    PyObject *tmp_subscript_name_34;
    PyObject *tmp_subscript_name_35;
    PyObject *tmp_subscript_name_36;
    PyObject *tmp_subscript_name_37;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_name_name_1;
    PyObject *tmp_type_name_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    PyObject *tmp_value_name_4;
    PyObject *tmp_xrange_high_1;
    PyObject *tmp_xrange_high_2;
    PyObject *tmp_xrange_low_1;
    PyObject *tmp_xrange_low_2;
    PyObject *tmp_xrange_low_3;
    PyObject *tmp_xrange_step_1;
    static struct Nuitka_FrameObject *cache_frame_cc76d9863b71b9207192438d24eeef04_2 = NULL;

    struct Nuitka_FrameObject *frame_cc76d9863b71b9207192438d24eeef04_2;

    static struct Nuitka_FrameObject *cache_frame_847f7561769a46a15c834a7a693fe9a7 = NULL;

    struct Nuitka_FrameObject *frame_847f7561769a46a15c834a7a693fe9a7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_f77ef844930554e27ef8b715d57bc391;
    assert( var_head_fmt == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_head_fmt = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_847f7561769a46a15c834a7a693fe9a7, codeobj_847f7561769a46a15c834a7a693fe9a7, module_pytz$tzfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_847f7561769a46a15c834a7a693fe9a7 = cache_frame_847f7561769a46a15c834a7a693fe9a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_847f7561769a46a15c834a7a693fe9a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_847f7561769a46a15c834a7a693fe9a7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_calcsize );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calcsize );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calcsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 27;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_f77ef844930554e27ef8b715d57bc391_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_head_size == NULL );
    var_head_size = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_head_fmt;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "head_fmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_1 = par_fp;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_head_size;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "head_size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 8 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 8 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2, 8 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_4, 3, 8 );
    if ( tmp_assign_source_7 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_5, 4, 8 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;

    tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_6, 5, 8 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_6 == NULL );
    tmp_tuple_unpack_1__element_6 = tmp_assign_source_9;

    tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_7, 6, 8 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_7 == NULL );
    tmp_tuple_unpack_1__element_7 = tmp_assign_source_10;

    tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_8, 7, 8 );
    if ( tmp_assign_source_11 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_8 == NULL );
    tmp_tuple_unpack_1__element_8 = tmp_assign_source_11;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooooo";
                exception_lineno = 28;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 8)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 28;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_12 );
    assert( var_magic == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_magic = tmp_assign_source_12;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_13 );
    assert( var_format == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_format = tmp_assign_source_13;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_14 );
    assert( var_ttisgmtcnt == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_ttisgmtcnt = tmp_assign_source_14;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_15 = tmp_tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_15 );
    assert( var_ttisstdcnt == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_ttisstdcnt = tmp_assign_source_15;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_assign_source_16 = tmp_tuple_unpack_1__element_5;

    CHECK_OBJECT( tmp_assign_source_16 );
    assert( var_leapcnt == NULL );
    Py_INCREF( tmp_assign_source_16 );
    var_leapcnt = tmp_assign_source_16;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_assign_source_17 = tmp_tuple_unpack_1__element_6;

    CHECK_OBJECT( tmp_assign_source_17 );
    assert( var_timecnt == NULL );
    Py_INCREF( tmp_assign_source_17 );
    var_timecnt = tmp_assign_source_17;

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_1__element_7;

    CHECK_OBJECT( tmp_assign_source_18 );
    assert( var_typecnt == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_typecnt = tmp_assign_source_18;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_8;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( var_charcnt == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_charcnt = tmp_assign_source_19;

    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    tmp_compare_left_1 = var_magic;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "magic" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__byte_string );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__byte_string );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_byte_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 32;
    tmp_compare_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_TZif_tuple, 0 ) );

    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_left_name_1 = const_str_digest_214526c6d0919fd59e4c97cc9ee9cc75;
    tmp_operand_name_1 = var_magic;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "magic" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_raise_value_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_raise_value_1, 0, tmp_tuple_element_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 32;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_2 = const_str_digest_6058f7e49513ef4387dbfc83498d0cc5;
    tmp_dict_key_1 = const_str_plain_timecnt;
    tmp_dict_value_1 = var_timecnt;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_ttinfo;
    tmp_left_name_3 = const_str_plain_lBB;
    tmp_right_name_3 = var_typecnt;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "typecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 36;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_charcnt;
    tmp_dict_value_3 = var_charcnt;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "charcnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_assign_source_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_data_fmt == NULL );
    var_data_fmt = tmp_assign_source_20;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_calcsize );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calcsize );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calcsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_data_fmt;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_data_size == NULL );
    var_data_size = tmp_assign_source_21;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_data_fmt;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data_fmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_fp;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_read );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_data_size;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data_size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_22;

    tmp_len_arg_1 = var_data;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = const_int_pos_2;
    tmp_right_name_4 = var_timecnt;

    if ( tmp_right_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_4 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_int_pos_3;
    tmp_right_name_6 = var_typecnt;

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_left_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "typecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = const_int_pos_1;
    tmp_compare_right_2 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 41;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_1 = var_data;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = var_timecnt;

    if ( tmp_stop_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "timecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( !(tmp_subscript_name_1 == NULL) );
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_24;

    tmp_assign_source_25 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_25;

    MAKE_OR_REUSE_FRAME( cache_frame_cc76d9863b71b9207192438d24eeef04_2, codeobj_cc76d9863b71b9207192438d24eeef04, module_pytz$tzfile, sizeof(void *) );
    frame_cc76d9863b71b9207192438d24eeef04_2 = cache_frame_cc76d9863b71b9207192438d24eeef04_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc76d9863b71b9207192438d24eeef04_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc76d9863b71b9207192438d24eeef04_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_listcomp_1__$0;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_26 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_26 == NULL )
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


        type_description_2 = "o";
        exception_lineno = 42;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_3 = exception_keeper_type_3;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 42;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    branch_end_3:;
    // End of try:
    try_end_3:;
    tmp_assign_source_27 = tmp_listcomp_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_27 );
    {
        PyObject *old = outline_0_var_trans;
        outline_0_var_trans = tmp_assign_source_27;
        Py_INCREF( outline_0_var_trans );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_memorized_datetime );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memorized_datetime );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "memorized_datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_2 = "o";
        goto try_except_handler_5;
    }

    tmp_args_element_name_8 = outline_0_var_trans;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_cc76d9863b71b9207192438d24eeef04_2->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_3_build_tzinfo );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc76d9863b71b9207192438d24eeef04_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc76d9863b71b9207192438d24eeef04_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc76d9863b71b9207192438d24eeef04_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc76d9863b71b9207192438d24eeef04_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc76d9863b71b9207192438d24eeef04_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc76d9863b71b9207192438d24eeef04_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc76d9863b71b9207192438d24eeef04_2,
        type_description_2,
        outline_0_var_trans
    );


    // Release cached frame.
    if ( frame_cc76d9863b71b9207192438d24eeef04_2 == cache_frame_cc76d9863b71b9207192438d24eeef04_2 )
    {
        Py_DECREF( frame_cc76d9863b71b9207192438d24eeef04_2 );
    }
    cache_frame_cc76d9863b71b9207192438d24eeef04_2 = NULL;

    assertFrameObject( frame_cc76d9863b71b9207192438d24eeef04_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_3_build_tzinfo );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( outline_0_var_trans );
    outline_0_var_trans = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_trans );
    outline_0_var_trans = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_3_build_tzinfo );
    return NULL;
    outline_exception_1:;
    exception_lineno = 42;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_23 = tmp_outline_return_value_1;
    assert( var_transitions == NULL );
    var_transitions = tmp_assign_source_23;

    tmp_subscribed_name_2 = var_data;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = var_timecnt;

    if ( tmp_start_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_8 = const_int_pos_2;
    tmp_right_name_8 = var_timecnt;

    if ( tmp_right_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_2 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( !(tmp_subscript_name_2 == NULL) );
    tmp_list_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_lindexes == NULL );
    var_lindexes = tmp_assign_source_28;

    tmp_subscribed_name_3 = var_data;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = const_int_pos_2;
    tmp_right_name_9 = var_timecnt;

    if ( tmp_right_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timecnt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_start_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_stop_name_3 = const_int_neg_1;
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_start_name_3 );
    assert( !(tmp_subscript_name_3 == NULL) );
    tmp_assign_source_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ttinfo_raw == NULL );
    var_ttinfo_raw = tmp_assign_source_29;

    tmp_subscribed_name_4 = var_data;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_int_neg_1;
    tmp_assign_source_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tznames_raw == NULL );
    var_tznames_raw = tmp_assign_source_30;

    tmp_result = var_data != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( var_data );
        var_data = NULL;
    }

    if ( tmp_result == false )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_31 = PyList_New( 0 );
    assert( var_ttinfo == NULL );
    var_ttinfo = tmp_assign_source_31;

    tmp_assign_source_32 = PyDict_New();
    assert( var_tznames == NULL );
    var_tznames = tmp_assign_source_32;

    tmp_assign_source_33 = const_int_0;
    assert( var_i == NULL );
    Py_INCREF( tmp_assign_source_33 );
    var_i = tmp_assign_source_33;

    loop_start_2:;
    tmp_compare_left_4 = var_i;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = var_ttinfo_raw;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    goto loop_end_2;
    branch_no_4:;
    tmp_subscribed_name_5 = var_ttinfo_raw;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = var_i;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_int_pos_2;
    tmp_subscript_name_5 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_subscript_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_tzname_offset;
        var_tzname_offset = tmp_assign_source_34;
        Py_XDECREF( old );
    }

    tmp_compare_left_5 = var_tzname_offset;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = var_tznames;

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tznames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_3 = var_tznames_raw;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tznames_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_find );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__NULL );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NULL );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NULL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_tzname_offset;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname_offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_nul;
        var_nul = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_compare_left_6 = var_nul;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_len_arg_3 = var_tznames_raw;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tznames_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_36 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_nul;
        var_nul = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    branch_no_6:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__std_string );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__std_string );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_std_string" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_6 = var_tznames_raw;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tznames_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_4 = var_tzname_offset;

    if ( tmp_start_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname_offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_4 = var_nul;

    if ( tmp_stop_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nul" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_4 = Py_None;
    tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
    assert( !(tmp_subscript_name_6 == NULL) );
    tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscript_name_6 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_tznames;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tznames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = var_tzname_offset;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname_offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_source_name_4 = var_ttinfo;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_7 = var_ttinfo_raw;

    if ( tmp_subscribed_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_7 = var_i;

    if ( tmp_subscript_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 62;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = PyTuple_New( 3 );
    PyTuple_SET_ITEM( tmp_args_element_name_12, 0, tmp_tuple_element_2 );
    tmp_subscribed_name_8 = var_ttinfo_raw;

    if ( tmp_subscribed_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo_raw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_11 = var_i;

    if ( tmp_left_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_1;
    tmp_subscript_name_8 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_subscript_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 63;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_bool_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    Py_DECREF( tmp_subscript_name_8 );
    if ( tmp_bool_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 63;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = TO_BOOL( tmp_bool_arg_1 );
    Py_DECREF( tmp_bool_arg_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 63;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_12, 1, tmp_tuple_element_2 );
    tmp_subscribed_name_9 = var_tznames;

    if ( tmp_subscribed_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tznames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_9 = var_tzname_offset;

    if ( tmp_subscript_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname_offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 64;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_12, 2, tmp_tuple_element_2 );
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_12 = var_i;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_int_pos_3;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_37 = tmp_left_name_12;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_i = tmp_assign_source_37;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_len_arg_4 = var_ttinfo;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
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
    tmp_len_arg_5 = var_transitions;

    if ( tmp_len_arg_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transitions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
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

        exception_lineno = 68;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
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
    tmp_subscribed_name_11 = var_ttinfo;

    if ( tmp_subscribed_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_10 = const_int_0;
    tmp_subscribed_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_10 );
    if ( tmp_subscribed_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_11 = const_int_0;
    tmp_unused = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_11 );
    Py_DECREF( tmp_subscribed_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_13 = var_ttinfo;

    if ( tmp_subscribed_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_12 = const_int_0;
    tmp_subscribed_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_12 );
    if ( tmp_subscribed_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_13 = const_int_pos_2;
    tmp_unused = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_13 );
    Py_DECREF( tmp_subscribed_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_type_name_name_1 = par_zone;

    if ( tmp_type_name_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_StaticTzInfo );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StaticTzInfo );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "StaticTzInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_bases_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_bases_name_1, 0, tmp_tuple_element_3 );
    tmp_dict_key_4 = const_str_plain_zone;
    tmp_dict_value_4 = par_zone;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_bases_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain__utcoffset;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_memorized_timedelta );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memorized_timedelta );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "memorized_timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_15 = var_ttinfo;

    if ( tmp_subscribed_name_15 == NULL )
    {
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_14 = const_int_0;
    tmp_subscribed_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_14 );
    if ( tmp_subscribed_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_15 = const_int_0;
    tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_15 );
    Py_DECREF( tmp_subscribed_name_14 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain__tzname;
    tmp_subscribed_name_17 = var_ttinfo;

    if ( tmp_subscribed_name_17 == NULL )
    {
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_16 = const_int_0;
    tmp_subscribed_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_16 );
    if ( tmp_subscribed_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );

        exception_lineno = 73;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_17 = const_int_pos_2;
    tmp_dict_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_17 );
    Py_DECREF( tmp_subscribed_name_16 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );

        exception_lineno = 73;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_assign_source_38 = BUILTIN_TYPE3( const_str_digest_8fba0ec9be0c4ed486d17847c03a428a, tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1 );
    Py_DECREF( tmp_bases_name_1 );
    Py_DECREF( tmp_dict_name_1 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cls == NULL );
    var_cls = tmp_assign_source_38;

    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_39 = const_int_0;
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_39;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    loop_start_3:;
    tmp_subscribed_name_19 = var_ttinfo;

    if ( tmp_subscribed_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_18 = var_i;

    if ( tmp_subscript_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_18 );
    if ( tmp_subscribed_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_19 = const_int_pos_1;
    tmp_cond_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_19 );
    Py_DECREF( tmp_subscribed_name_18 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 77;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    goto loop_end_3;
    branch_no_8:;
    tmp_left_name_13 = var_i;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
    tmp_assign_source_40 = tmp_left_name_13;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_i = tmp_assign_source_40;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_subscribed_name_20 = var_ttinfo;

    if ( tmp_subscribed_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_20 = var_i;

    if ( tmp_subscript_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_21 = var_ttinfo;

    if ( tmp_subscribed_name_21 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_22 = var_lindexes;

    if ( tmp_subscribed_name_22 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lindexes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_22 = const_int_0;
    tmp_subscript_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_subscript_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    Py_DECREF( tmp_subscript_name_21 );
    if ( tmp_compare_right_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_min );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_transitions;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transitions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_6 = var_transitions;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transitions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_insert );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = const_int_0;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_min );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 82;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = var_lindexes;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lindexes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_insert );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = const_int_0;
    tmp_args_element_name_17 = var_i;

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_9:;
    tmp_assign_source_41 = PyList_New( 0 );
    assert( var_transition_info == NULL );
    var_transition_info = tmp_assign_source_41;

    tmp_len_arg_6 = var_transitions;

    if ( tmp_len_arg_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transitions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_xrange_low_1 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_42;

    // Tried code:
    loop_start_4:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_43 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_43 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 87;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_43;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_8 = exception_keeper_type_6;
    tmp_compare_right_8 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_6 );
        Py_XDECREF( exception_keeper_value_6 );
        Py_XDECREF( exception_keeper_tb_6 );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    Py_DECREF( exception_keeper_type_6 );
    Py_XDECREF( exception_keeper_value_6 );
    Py_XDECREF( exception_keeper_tb_6 );
    goto loop_end_4;
    goto branch_end_10;
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    branch_end_10:;
    // End of try:
    try_end_4:;
    tmp_assign_source_44 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_44 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_44;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_23 = var_ttinfo;

    if ( tmp_subscribed_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_subscribed_name_24 = var_lindexes;

    if ( tmp_subscribed_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lindexes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_24 = var_i;

    CHECK_OBJECT( tmp_subscript_name_24 );
    tmp_subscript_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
    if ( tmp_subscript_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_45 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    Py_DECREF( tmp_subscript_name_23 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_inf;
        var_inf = tmp_assign_source_45;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_25 = var_inf;

    CHECK_OBJECT( tmp_subscribed_name_25 );
    tmp_subscript_name_25 = const_int_0;
    tmp_assign_source_46 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_utcoffset;
        var_utcoffset = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_26 = var_inf;

    if ( tmp_subscribed_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_26 = const_int_pos_1;
    tmp_cond_value_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 90;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_11;
    }
    else
    {
        goto branch_yes_11;
    }
    branch_yes_11:;
    tmp_assign_source_47 = const_int_0;
    {
        PyObject *old = var_dst;
        var_dst = tmp_assign_source_47;
        Py_INCREF( var_dst );
        Py_XDECREF( old );
    }

    goto branch_end_11;
    branch_no_11:;
    tmp_left_name_14 = var_i;

    if ( tmp_left_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_14 = const_int_pos_1;
    tmp_xrange_low_2 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_14 );
    if ( tmp_xrange_low_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_xrange_high_1 = const_int_neg_1;
    tmp_xrange_step_1 = const_int_neg_1;
    tmp_iter_arg_4 = BUILTIN_XRANGE3( tmp_xrange_low_2, tmp_xrange_high_1, tmp_xrange_step_1 );
    Py_DECREF( tmp_xrange_low_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_48;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_5:;
    // Tried code:
    tmp_value_name_3 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_3 );
    tmp_assign_source_49 = ITERATOR_NEXT( tmp_value_name_3 );
    if ( tmp_assign_source_49 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 93;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_49;
        Py_XDECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_9 = exception_keeper_type_7;
    tmp_compare_right_9 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_7 );
        Py_XDECREF( exception_keeper_value_7 );
        Py_XDECREF( exception_keeper_tb_7 );

        exception_lineno = 93;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    Py_DECREF( exception_keeper_type_7 );
    Py_XDECREF( exception_keeper_value_7 );
    Py_XDECREF( exception_keeper_tb_7 );
    goto loop_end_5;
    goto branch_end_12;
    branch_no_12:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    branch_end_12:;
    // End of try:
    try_end_5:;
    tmp_assign_source_50 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_50 );
    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_50;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_27 = var_ttinfo;

    if ( tmp_subscribed_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_subscribed_name_28 = var_lindexes;

    if ( tmp_subscribed_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lindexes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_subscript_name_28 = var_j;

    CHECK_OBJECT( tmp_subscript_name_28 );
    tmp_subscript_name_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
    if ( tmp_subscript_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    tmp_assign_source_51 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
    Py_DECREF( tmp_subscript_name_27 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_prev_inf;
        var_prev_inf = tmp_assign_source_51;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_29 = var_prev_inf;

    CHECK_OBJECT( tmp_subscribed_name_29 );
    tmp_subscript_name_29 = const_int_pos_1;
    tmp_cond_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 95;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_13;
    }
    else
    {
        goto branch_yes_13;
    }
    branch_yes_13:;
    goto loop_end_5;
    branch_no_13:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_subscribed_name_30 = var_inf;

    if ( tmp_subscribed_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_30 = const_int_0;
    tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_30, tmp_subscript_name_30 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_subscribed_name_31 = var_prev_inf;

    if ( tmp_subscribed_name_31 == NULL )
    {
        Py_DECREF( tmp_left_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prev_inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_31 = const_int_0;
    tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_31, tmp_subscript_name_31 );
    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_15 );

        exception_lineno = 97;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_52 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_dst;
        var_dst = tmp_assign_source_52;
        Py_XDECREF( old );
    }

    tmp_compexpr_left_3 = var_dst;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = const_int_0;
    tmp_or_left_value_2 = RICH_COMPARE_LE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 101;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_compexpr_left_4 = var_dst;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dst" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compexpr_right_4 = const_int_pos_10800;
    tmp_or_right_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_cond_value_5 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_cond_value_5 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 101;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_left_name_16 = var_i;

    if ( tmp_left_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_16 = const_int_pos_1;
    tmp_xrange_low_3 = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_16 );
    if ( tmp_xrange_low_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_len_arg_7 = var_transitions;

    if ( tmp_len_arg_7 == NULL )
    {
        Py_DECREF( tmp_xrange_low_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transitions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_xrange_high_2 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_xrange_high_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_xrange_low_3 );

        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_iter_arg_5 = BUILTIN_XRANGE2( tmp_xrange_low_3, tmp_xrange_high_2 );
    Py_DECREF( tmp_xrange_low_3 );
    Py_DECREF( tmp_xrange_high_2 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_53 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_53;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_6:;
    // Tried code:
    tmp_value_name_4 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_value_name_4 );
    tmp_assign_source_54 = ITERATOR_NEXT( tmp_value_name_4 );
    if ( tmp_assign_source_54 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        exception_lineno = 102;
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_54;
        Py_XDECREF( old );
    }

    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_10 = exception_keeper_type_9;
    tmp_compare_right_10 = PyExc_StopIteration;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_9 );
        Py_XDECREF( exception_keeper_value_9 );
        Py_XDECREF( exception_keeper_tb_9 );

        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    Py_DECREF( exception_keeper_type_9 );
    Py_XDECREF( exception_keeper_value_9 );
    Py_XDECREF( exception_keeper_tb_9 );
    goto loop_end_6;
    goto branch_end_15;
    branch_no_15:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_11;
    branch_end_15:;
    // End of try:
    try_end_7:;
    tmp_assign_source_55 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_55 );
    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_55;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_32 = var_ttinfo;

    if ( tmp_subscribed_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }

    tmp_subscribed_name_33 = var_lindexes;

    if ( tmp_subscribed_name_33 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lindexes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }

    tmp_subscript_name_33 = var_j;

    CHECK_OBJECT( tmp_subscript_name_33 );
    tmp_subscript_name_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_33, tmp_subscript_name_33 );
    if ( tmp_subscript_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_assign_source_56 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_32, tmp_subscript_name_32 );
    Py_DECREF( tmp_subscript_name_32 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = var_stdinf;
        var_stdinf = tmp_assign_source_56;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_34 = var_stdinf;

    CHECK_OBJECT( tmp_subscribed_name_34 );
    tmp_subscript_name_34 = const_int_pos_1;
    tmp_cond_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_34, tmp_subscript_name_34 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 104;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_16;
    }
    else
    {
        goto branch_yes_16;
    }
    branch_yes_16:;
    tmp_subscribed_name_35 = var_inf;

    if ( tmp_subscribed_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }

    tmp_subscript_name_35 = const_int_0;
    tmp_left_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_35, tmp_subscript_name_35 );
    if ( tmp_left_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_subscribed_name_36 = var_stdinf;

    if ( tmp_subscribed_name_36 == NULL )
    {
        Py_DECREF( tmp_left_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stdinf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }

    tmp_subscript_name_36 = const_int_0;
    tmp_right_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_36, tmp_subscript_name_36 );
    if ( tmp_right_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_17 );

        exception_lineno = 105;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_assign_source_57 = BINARY_OPERATION_SUB( tmp_left_name_17, tmp_right_name_17 );
    Py_DECREF( tmp_left_name_17 );
    Py_DECREF( tmp_right_name_17 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = var_dst;
        var_dst = tmp_assign_source_57;
        Py_XDECREF( old );
    }

    tmp_compare_left_11 = var_dst;

    CHECK_OBJECT( tmp_compare_left_11 );
    tmp_compare_right_11 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    goto loop_end_6;
    branch_no_17:;
    branch_no_16:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_7;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    branch_no_14:;
    branch_end_11:;
    tmp_subscribed_name_37 = var_inf;

    if ( tmp_subscribed_name_37 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "inf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_37 = const_int_pos_2;
    tmp_assign_source_58 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_37, tmp_subscript_name_37 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_tzname;
        var_tzname = tmp_assign_source_58;
        Py_XDECREF( old );
    }

    tmp_left_name_20 = var_utcoffset;

    if ( tmp_left_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "utcoffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_18 = const_int_pos_30;
    tmp_left_name_19 = BINARY_OPERATION_ADD( tmp_left_name_20, tmp_right_name_18 );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_19 = const_int_pos_60;
    tmp_int_arg_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_19, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_19 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_left_name_18 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_20 = const_int_pos_60;
    tmp_assign_source_59 = BINARY_OPERATION_MUL( tmp_left_name_18, tmp_right_name_20 );
    Py_DECREF( tmp_left_name_18 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_utcoffset;
        var_utcoffset = tmp_assign_source_59;
        Py_XDECREF( old );
    }

    tmp_left_name_23 = var_dst;

    if ( tmp_left_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dst" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_21 = const_int_pos_30;
    tmp_left_name_22 = BINARY_OPERATION_ADD( tmp_left_name_23, tmp_right_name_21 );
    if ( tmp_left_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_22 = const_int_pos_60;
    tmp_int_arg_2 = BINARY_OPERATION_FLOORDIV( tmp_left_name_22, tmp_right_name_22 );
    Py_DECREF( tmp_left_name_22 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_left_name_21 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_left_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_23 = const_int_pos_60;
    tmp_assign_source_60 = BINARY_OPERATION_MUL( tmp_left_name_21, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_21 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_dst;
        var_dst = tmp_assign_source_60;
        Py_XDECREF( old );
    }

    tmp_source_name_9 = var_transition_info;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transition_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_memorized_ttinfo );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memorized_ttinfo );
    }

    if ( tmp_called_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "memorized_ttinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_19 = var_utcoffset;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "utcoffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_20 = var_dst;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dst" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_element_name_21 = var_tzname;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_type_name_name_2 = par_zone;

    if ( tmp_type_name_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_DstTzInfo );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DstTzInfo );
    }

    if ( tmp_tuple_element_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DstTzInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_bases_name_2 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_bases_name_2, 0, tmp_tuple_element_4 );
    tmp_dict_key_7 = const_str_plain_zone;
    tmp_dict_value_7 = par_zone;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_bases_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_name_2 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_dict_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain__utc_transition_times;
    tmp_dict_value_8 = var_transitions;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_bases_name_2 );
        Py_DECREF( tmp_dict_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transitions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dict_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain__transition_info;
    tmp_dict_value_9 = var_transition_info;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_bases_name_2 );
        Py_DECREF( tmp_dict_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "transition_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dict_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_assign_source_61 = BUILTIN_TYPE3( const_str_digest_8fba0ec9be0c4ed486d17847c03a428a, tmp_type_name_name_2, tmp_bases_name_2, tmp_dict_name_2 );
    Py_DECREF( tmp_bases_name_2 );
    Py_DECREF( tmp_dict_name_2 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cls == NULL );
    var_cls = tmp_assign_source_61;

    branch_end_7:;
    tmp_called_name_17 = var_cls;

    CHECK_OBJECT( tmp_called_name_17 );
    frame_847f7561769a46a15c834a7a693fe9a7->m_frame.f_lineno = 124;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_17 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_847f7561769a46a15c834a7a693fe9a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_847f7561769a46a15c834a7a693fe9a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_847f7561769a46a15c834a7a693fe9a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_847f7561769a46a15c834a7a693fe9a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_847f7561769a46a15c834a7a693fe9a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_847f7561769a46a15c834a7a693fe9a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_847f7561769a46a15c834a7a693fe9a7,
        type_description_1,
        par_zone,
        par_fp,
        var_head_fmt,
        var_head_size,
        var_magic,
        var_format,
        var_ttisgmtcnt,
        var_ttisstdcnt,
        var_leapcnt,
        var_timecnt,
        var_typecnt,
        var_charcnt,
        var_data_fmt,
        var_data_size,
        var_data,
        var_transitions,
        var_lindexes,
        var_ttinfo_raw,
        var_tznames_raw,
        var_ttinfo,
        var_tznames,
        var_i,
        var_tzname_offset,
        var_nul,
        var_cls,
        var_transition_info,
        var_inf,
        var_utcoffset,
        var_dst,
        var_j,
        var_prev_inf,
        var_stdinf,
        var_tzname
    );


    // Release cached frame.
    if ( frame_847f7561769a46a15c834a7a693fe9a7 == cache_frame_847f7561769a46a15c834a7a693fe9a7 )
    {
        Py_DECREF( frame_847f7561769a46a15c834a7a693fe9a7 );
    }
    cache_frame_847f7561769a46a15c834a7a693fe9a7 = NULL;

    assertFrameObject( frame_847f7561769a46a15c834a7a693fe9a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_3_build_tzinfo );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_zone );
    par_zone = NULL;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( var_head_fmt );
    var_head_fmt = NULL;

    Py_XDECREF( var_head_size );
    var_head_size = NULL;

    Py_XDECREF( var_magic );
    var_magic = NULL;

    Py_XDECREF( var_format );
    var_format = NULL;

    Py_XDECREF( var_ttisgmtcnt );
    var_ttisgmtcnt = NULL;

    Py_XDECREF( var_ttisstdcnt );
    var_ttisstdcnt = NULL;

    Py_XDECREF( var_leapcnt );
    var_leapcnt = NULL;

    Py_XDECREF( var_timecnt );
    var_timecnt = NULL;

    Py_XDECREF( var_typecnt );
    var_typecnt = NULL;

    Py_XDECREF( var_charcnt );
    var_charcnt = NULL;

    Py_XDECREF( var_data_fmt );
    var_data_fmt = NULL;

    Py_XDECREF( var_data_size );
    var_data_size = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_transitions );
    var_transitions = NULL;

    Py_XDECREF( var_lindexes );
    var_lindexes = NULL;

    Py_XDECREF( var_ttinfo_raw );
    var_ttinfo_raw = NULL;

    Py_XDECREF( var_tznames_raw );
    var_tznames_raw = NULL;

    Py_XDECREF( var_ttinfo );
    var_ttinfo = NULL;

    Py_XDECREF( var_tznames );
    var_tznames = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tzname_offset );
    var_tzname_offset = NULL;

    Py_XDECREF( var_nul );
    var_nul = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_transition_info );
    var_transition_info = NULL;

    Py_XDECREF( var_inf );
    var_inf = NULL;

    Py_XDECREF( var_utcoffset );
    var_utcoffset = NULL;

    Py_XDECREF( var_dst );
    var_dst = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_prev_inf );
    var_prev_inf = NULL;

    Py_XDECREF( var_stdinf );
    var_stdinf = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_zone );
    par_zone = NULL;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( var_head_fmt );
    var_head_fmt = NULL;

    Py_XDECREF( var_head_size );
    var_head_size = NULL;

    Py_XDECREF( var_magic );
    var_magic = NULL;

    Py_XDECREF( var_format );
    var_format = NULL;

    Py_XDECREF( var_ttisgmtcnt );
    var_ttisgmtcnt = NULL;

    Py_XDECREF( var_ttisstdcnt );
    var_ttisstdcnt = NULL;

    Py_XDECREF( var_leapcnt );
    var_leapcnt = NULL;

    Py_XDECREF( var_timecnt );
    var_timecnt = NULL;

    Py_XDECREF( var_typecnt );
    var_typecnt = NULL;

    Py_XDECREF( var_charcnt );
    var_charcnt = NULL;

    Py_XDECREF( var_data_fmt );
    var_data_fmt = NULL;

    Py_XDECREF( var_data_size );
    var_data_size = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_transitions );
    var_transitions = NULL;

    Py_XDECREF( var_lindexes );
    var_lindexes = NULL;

    Py_XDECREF( var_ttinfo_raw );
    var_ttinfo_raw = NULL;

    Py_XDECREF( var_tznames_raw );
    var_tznames_raw = NULL;

    Py_XDECREF( var_ttinfo );
    var_ttinfo = NULL;

    Py_XDECREF( var_tznames );
    var_tznames = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tzname_offset );
    var_tzname_offset = NULL;

    Py_XDECREF( var_nul );
    var_nul = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    Py_XDECREF( var_transition_info );
    var_transition_info = NULL;

    Py_XDECREF( var_inf );
    var_inf = NULL;

    Py_XDECREF( var_utcoffset );
    var_utcoffset = NULL;

    Py_XDECREF( var_dst );
    var_dst = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_prev_inf );
    var_prev_inf = NULL;

    Py_XDECREF( var_stdinf );
    var_stdinf = NULL;

    Py_XDECREF( var_tzname );
    var_tzname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$tzfile$$$function_3_build_tzinfo );
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



static PyObject *MAKE_FUNCTION_pytz$tzfile$$$function_1__byte_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$tzfile$$$function_1__byte_string,
        const_str_plain__byte_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d8cba1d646f8f2ff0585edaac23a37c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz$tzfile,
        const_str_digest_adb3f84566075e68f9a9334af4d70244,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$tzfile$$$function_2__std_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$tzfile$$$function_2__std_string,
        const_str_plain__std_string,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eda437a23a6e29293936178e4dbaf192,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz$tzfile,
        const_str_digest_6fd9762c0093626789d5dafcc090ede1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$tzfile$$$function_3_build_tzinfo(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$tzfile$$$function_3_build_tzinfo,
        const_str_plain_build_tzinfo,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_847f7561769a46a15c834a7a693fe9a7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz$tzfile,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pytz$tzfile =
{
    PyModuleDef_HEAD_INIT,
    "pytz.tzfile",   /* m_name */
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

MOD_INIT_DECL( pytz$tzfile )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pytz$tzfile );
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
    puts("pytz.tzfile: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pytz.tzfile: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pytz.tzfile: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpytz$tzfile" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pytz$tzfile = Py_InitModule4(
        "pytz.tzfile",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pytz$tzfile = PyModule_Create( &mdef_pytz$tzfile );
#endif

    moduledict_pytz$tzfile = MODULE_DICT( module_pytz$tzfile );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pytz$tzfile,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pytz$tzfile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pytz$tzfile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pytz$tzfile );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8fba0ec9be0c4ed486d17847c03a428a, module_pytz$tzfile );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_4e0e6c6717274e4cc1227ebbc6385723;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_5553d0f72ee436dddba34f5b4d3fdfa8;
    UPDATE_STRING_DICT0( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_83df5b81b91c606dcd11b3b9aef44e16;
    UPDATE_STRING_DICT0( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_4e0e6c6717274e4cc1227ebbc6385723 = MAKE_MODULE_FRAME( codeobj_4e0e6c6717274e4cc1227ebbc6385723, module_pytz$tzfile );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4e0e6c6717274e4cc1227ebbc6385723 );
    assert( Py_REFCNT( frame_4e0e6c6717274e4cc1227ebbc6385723 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz$tzfile;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_datetime_tuple;
    tmp_level_name_1 = const_int_0;
    frame_4e0e6c6717274e4cc1227ebbc6385723->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_datetime );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_struct;
    tmp_globals_name_2 = (PyObject *)moduledict_pytz$tzfile;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_unpack_str_plain_calcsize_tuple;
    tmp_level_name_2 = const_int_0;
    frame_4e0e6c6717274e4cc1227ebbc6385723->m_frame.f_lineno = 7;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_unpack );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_unpack, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_calcsize );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_calcsize, tmp_assign_source_7 );
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

    tmp_name_name_3 = const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
    tmp_globals_name_3 = (PyObject *)moduledict_pytz$tzfile;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_be2523ab32168cc0680d1f6594340301_tuple;
    tmp_level_name_3 = const_int_0;
    frame_4e0e6c6717274e4cc1227ebbc6385723->m_frame.f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_StaticTzInfo );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_StaticTzInfo, tmp_assign_source_9 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DstTzInfo );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_DstTzInfo, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_memorized_ttinfo );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_memorized_ttinfo, tmp_assign_source_11 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_4 = const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
    tmp_globals_name_4 = (PyObject *)moduledict_pytz$tzfile;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_memorized_datetime_str_plain_memorized_timedelta_tuple;
    tmp_level_name_4 = const_int_0;
    frame_4e0e6c6717274e4cc1227ebbc6385723->m_frame.f_lineno = 10;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_memorized_datetime );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_memorized_datetime, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_memorized_timedelta );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_memorized_timedelta, tmp_assign_source_14 );
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_15 = MAKE_FUNCTION_pytz$tzfile$$$function_1__byte_string(  );
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__byte_string, tmp_assign_source_15 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__byte_string );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__byte_string );
    }

    CHECK_OBJECT( tmp_called_name_1 );
    frame_4e0e6c6717274e4cc1227ebbc6385723->m_frame.f_lineno = 17;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__NULL, tmp_assign_source_16 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e0e6c6717274e4cc1227ebbc6385723 );
#endif
    popFrameStack();

    assertFrameObject( frame_4e0e6c6717274e4cc1227ebbc6385723 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e0e6c6717274e4cc1227ebbc6385723 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e0e6c6717274e4cc1227ebbc6385723, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e0e6c6717274e4cc1227ebbc6385723->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e0e6c6717274e4cc1227ebbc6385723, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_17 = MAKE_FUNCTION_pytz$tzfile$$$function_2__std_string(  );
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain__std_string, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_pytz$tzfile$$$function_3_build_tzinfo(  );
    UPDATE_STRING_DICT1( moduledict_pytz$tzfile, (Nuitka_StringObject *)const_str_plain_build_tzinfo, tmp_assign_source_18 );

    return MOD_RETURN_VALUE( module_pytz$tzfile );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
