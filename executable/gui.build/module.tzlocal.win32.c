/* Generated code for Python source for module 'tzlocal.win32'
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

/* The _module_tzlocal$win32 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tzlocal$win32;
PyDictObject *moduledict_tzlocal$win32;

/* The module constants used, if any. */
extern PyObject *const_str_digest_ca322ae6fe2a4dce3f5f1d499994bce6;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_Std;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_EnumValue;
static PyObject *const_str_digest_223fabbba70dcfe01e9c778b018f5cec;
extern PyObject *const_str_plain_winreg;
extern PyObject *const_str_plain_tzkeyname;
static PyObject *const_str_digest_4aff5faf38164329b3135ed6af27974f;
static PyObject *const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_pytz;
extern PyObject *const_str_plain_UnknownTimeZoneError;
extern PyObject *const_str_plain_HKEY_LOCAL_MACHINE;
extern PyObject *const_str_digest_7d433b4573a610a2153eb332e1c79e64;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_cae2b3a17d2b27239fa755e6ea5cde8b;
extern PyObject *const_str_digest_c30010d6fe5bab0dc6f25d3c7a0f7abb;
static PyObject *const_str_plain_keyvalues;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_EnumKey;
static PyObject *const_str_plain_get_localzone_name;
extern PyObject *const_str_plain_tzkey;
static PyObject *const_str_plain_localtz;
extern PyObject *const_str_plain_timezone;
static PyObject *const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple;
extern PyObject *const_str_plain_TZLOCALKEYNAME;
extern PyObject *const_str_plain_get_localzone;
extern PyObject *const_str_plain_Close;
extern PyObject *const_str_plain_tzwin;
static PyObject *const_str_plain_TimeZoneKeyName;
static PyObject *const_str_digest_2af26721d4cc07029f8cc61308abc156;
extern PyObject *const_str_plain_reload_localzone;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_digest_8e43cab2c542309d2e94c1a826914f69;
extern PyObject *const_str_plain_TZKEYNAME;
extern PyObject *const_str_plain__winreg;
extern PyObject *const_str_plain_sub;
extern PyObject *const_str_chr_0;
static PyObject *const_tuple_str_plain_win_tz_tuple;
extern PyObject *const_str_plain_win_tz;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__cache_tz;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_4c24b1859e8d37c8184b05c398585ded;
extern PyObject *const_str_plain_valuestodict;
extern PyObject *const_str_plain_StandardName;
extern PyObject *const_str_plain_OpenKey;
extern PyObject *const_str_digest_f09daa68ba38af15b792af68da5707bc;
extern PyObject *const_str_plain_ConnectRegistry;
static PyObject *const_str_plain_subkey;
static PyObject *const_tuple_str_chr_0_int_pos_1_tuple;
extern PyObject *const_str_plain_handle;
static PyObject *const_str_digest_e307df6705a9a995d37567a0579a96ee;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_QueryInfoKey;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_6c77989bfa4d680463c8d6c5504d00bb;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_223fabbba70dcfe01e9c778b018f5cec = UNSTREAM_STRING( &constant_bin[ 838980 ], 57, 0 );
    const_str_digest_4aff5faf38164329b3135ed6af27974f = UNSTREAM_STRING( &constant_bin[ 839037 ], 22, 0 );
    const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple, 0, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple, 1, const_str_plain_dict ); Py_INCREF( const_str_plain_dict );
    PyTuple_SET_ITEM( const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple, 2, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_cae2b3a17d2b27239fa755e6ea5cde8b = UNSTREAM_STRING( &constant_bin[ 433833 ], 14, 0 );
    const_str_plain_keyvalues = UNSTREAM_STRING( &constant_bin[ 839059 ], 9, 1 );
    const_str_plain_get_localzone_name = UNSTREAM_STRING( &constant_bin[ 839068 ], 18, 1 );
    const_str_plain_localtz = UNSTREAM_STRING( &constant_bin[ 839086 ], 7, 1 );
    const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 0, const_str_plain_handle ); Py_INCREF( const_str_plain_handle );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 1, const_str_plain_TZLOCALKEYNAME ); Py_INCREF( const_str_plain_TZLOCALKEYNAME );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 2, const_str_plain_localtz ); Py_INCREF( const_str_plain_localtz );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 3, const_str_plain_keyvalues ); Py_INCREF( const_str_plain_keyvalues );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 4, const_str_plain_tzkeyname ); Py_INCREF( const_str_plain_tzkeyname );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 5, const_str_plain_tzwin ); Py_INCREF( const_str_plain_tzwin );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 6, const_str_plain_TZKEYNAME ); Py_INCREF( const_str_plain_TZKEYNAME );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 7, const_str_plain_tzkey ); Py_INCREF( const_str_plain_tzkey );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 8, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_subkey = UNSTREAM_STRING( &constant_bin[ 839093 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 9, const_str_plain_subkey ); Py_INCREF( const_str_plain_subkey );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 10, const_str_plain_sub ); Py_INCREF( const_str_plain_sub );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 11, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 12, const_str_plain_timezone ); Py_INCREF( const_str_plain_timezone );
    const_str_plain_TimeZoneKeyName = UNSTREAM_STRING( &constant_bin[ 839099 ], 15, 1 );
    const_str_digest_2af26721d4cc07029f8cc61308abc156 = UNSTREAM_STRING( &constant_bin[ 839114 ], 43, 0 );
    const_tuple_str_plain_win_tz_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win_tz_tuple, 0, const_str_plain_win_tz ); Py_INCREF( const_str_plain_win_tz );
    const_str_digest_4c24b1859e8d37c8184b05c398585ded = UNSTREAM_STRING( &constant_bin[ 839157 ], 22, 0 );
    const_tuple_str_chr_0_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_0_int_pos_1_tuple, 0, const_str_chr_0 ); Py_INCREF( const_str_chr_0 );
    PyTuple_SET_ITEM( const_tuple_str_chr_0_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_e307df6705a9a995d37567a0579a96ee = UNSTREAM_STRING( &constant_bin[ 839179 ], 86, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tzlocal$win32( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d0ed10ee3473f2e65eba3e8936d3a07c;
static PyCodeObject *codeobj_0c1fe65ec20699e2166764dfec98344e;
static PyCodeObject *codeobj_921ac16258651d1780c94b99178e70ae;
static PyCodeObject *codeobj_afa04185be2c3d54e2898539b7953edf;
static PyCodeObject *codeobj_a8c32f18174c2180e1763a56da8c9edc;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_223fabbba70dcfe01e9c778b018f5cec;
    codeobj_d0ed10ee3473f2e65eba3e8936d3a07c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4c24b1859e8d37c8184b05c398585ded, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0c1fe65ec20699e2166764dfec98344e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_localzone, 84, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_921ac16258651d1780c94b99178e70ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_localzone_name, 20, const_tuple_5fc710a63c9a9e24767145302f33bb90_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_afa04185be2c3d54e2898539b7953edf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reload_localzone, 91, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8c32f18174c2180e1763a56da8c9edc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_valuestodict, 11, const_tuple_8096c9c8aaffeead37de18f57ac86032_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_1_valuestodict(  );


static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_2_get_localzone_name(  );


static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_3_get_localzone(  );


static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_4_reload_localzone(  );


// The module function definitions.
static PyObject *impl_tzlocal$win32$$$function_1_valuestodict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[ 0 ];
    PyObject *var_dict = NULL;
    PyObject *var_size = NULL;
    PyObject *var_i = NULL;
    PyObject *var_data = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_value_name_1;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_a8c32f18174c2180e1763a56da8c9edc = NULL;

    struct Nuitka_FrameObject *frame_a8c32f18174c2180e1763a56da8c9edc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_dict == NULL );
    var_dict = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8c32f18174c2180e1763a56da8c9edc, codeobj_a8c32f18174c2180e1763a56da8c9edc, module_tzlocal$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a8c32f18174c2180e1763a56da8c9edc = cache_frame_a8c32f18174c2180e1763a56da8c9edc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8c32f18174c2180e1763a56da8c9edc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8c32f18174c2180e1763a56da8c9edc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_QueryInfoKey );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_a8c32f18174c2180e1763a56da8c9edc->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_size == NULL );
    var_size = tmp_assign_source_2;

    tmp_xrange_low_1 = var_size;

    CHECK_OBJECT( tmp_xrange_low_1 );
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooo";
        exception_lineno = 15;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
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

        exception_lineno = 15;
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
    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_5;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EnumValue );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = par_key;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_i;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_a8c32f18174c2180e1763a56da8c9edc->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_data;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_ass_subscribed_1 = var_dict;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_3 = var_data;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_3 = const_int_0;
    tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 17;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
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

    tmp_return_value = var_dict;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8c32f18174c2180e1763a56da8c9edc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8c32f18174c2180e1763a56da8c9edc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8c32f18174c2180e1763a56da8c9edc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8c32f18174c2180e1763a56da8c9edc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8c32f18174c2180e1763a56da8c9edc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8c32f18174c2180e1763a56da8c9edc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8c32f18174c2180e1763a56da8c9edc,
        type_description_1,
        par_key,
        var_dict,
        var_size,
        var_i,
        var_data
    );


    // Release cached frame.
    if ( frame_a8c32f18174c2180e1763a56da8c9edc == cache_frame_a8c32f18174c2180e1763a56da8c9edc )
    {
        Py_DECREF( frame_a8c32f18174c2180e1763a56da8c9edc );
    }
    cache_frame_a8c32f18174c2180e1763a56da8c9edc = NULL;

    assertFrameObject( frame_a8c32f18174c2180e1763a56da8c9edc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_1_valuestodict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_dict );
    var_dict = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_dict );
    var_dict = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_1_valuestodict );
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


static PyObject *impl_tzlocal$win32$$$function_2_get_localzone_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_handle = NULL;
    PyObject *var_TZLOCALKEYNAME = NULL;
    PyObject *var_localtz = NULL;
    PyObject *var_keyvalues = NULL;
    PyObject *var_tzkeyname = NULL;
    PyObject *var_tzwin = NULL;
    PyObject *var_TZKEYNAME = NULL;
    PyObject *var_tzkey = NULL;
    PyObject *var_i = NULL;
    PyObject *var_subkey = NULL;
    PyObject *var_sub = NULL;
    PyObject *var_data = NULL;
    PyObject *var_timezone = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_921ac16258651d1780c94b99178e70ae = NULL;

    struct Nuitka_FrameObject *frame_921ac16258651d1780c94b99178e70ae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_921ac16258651d1780c94b99178e70ae, codeobj_921ac16258651d1780c94b99178e70ae, module_tzlocal$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_921ac16258651d1780c94b99178e70ae = cache_frame_921ac16258651d1780c94b99178e70ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_921ac16258651d1780c94b99178e70ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_921ac16258651d1780c94b99178e70ae ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ConnectRegistry );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = Py_None;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_HKEY_LOCAL_MACHINE );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 26;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_handle == NULL );
    var_handle = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_8e43cab2c542309d2e94c1a826914f69;
    assert( var_TZLOCALKEYNAME == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_TZLOCALKEYNAME = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_OpenKey );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_handle;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handle" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_TZLOCALKEYNAME;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "TZLOCALKEYNAME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_localtz == NULL );
    var_localtz = tmp_assign_source_3;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_valuestodict );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_valuestodict );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "valuestodict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_localtz;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_keyvalues == NULL );
    var_keyvalues = tmp_assign_source_4;

    tmp_called_instance_1 = var_localtz;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "localtz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 31;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = const_str_plain_TimeZoneKeyName;
    tmp_compare_right_1 = var_keyvalues;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyvalues" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_subscribed_name_2 = var_keyvalues;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyvalues" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_TimeZoneKeyName;
    tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 39;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_0_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tzkeyname == NULL );
    var_tzkeyname = tmp_assign_source_5;

    goto branch_end_1;
    branch_no_1:;
    tmp_subscribed_name_3 = var_keyvalues;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyvalues" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_str_plain_StandardName;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tzwin == NULL );
    var_tzwin = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_digest_7d433b4573a610a2153eb332e1c79e64;
    assert( var_TZKEYNAME == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_TZKEYNAME = tmp_assign_source_7;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_OpenKey );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_handle;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handle" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_TZKEYNAME;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "TZKEYNAME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tzkey == NULL );
    var_tzkey = tmp_assign_source_8;

    tmp_assign_source_9 = Py_None;
    assert( var_tzkeyname == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_tzkeyname = tmp_assign_source_9;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_QueryInfoKey );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_tzkey;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_subscribed_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_int_0;
    tmp_xrange_low_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_11 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 52;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_11;
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

    tmp_compare_left_2 = exception_keeper_type_1;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_assign_source_12 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_12;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_EnumKey );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_tzkey;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_10 = var_i;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_subkey;
        var_subkey = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_winreg );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "winreg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_OpenKey );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_11 = var_tzkey;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_12 = var_subkey;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "subkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_sub;
        var_sub = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_valuestodict );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_valuestodict );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "valuestodict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_13 = var_sub;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_called_instance_3 = var_sub;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sub" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 56;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_Close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_subscribed_name_5 = var_data;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_subscript_name_5 = const_str_plain_Std;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_compare_right_3 = var_tzwin;

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzwin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_16 = var_subkey;

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "subkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }

    {
        PyObject *old = var_tzkeyname;
        var_tzkeyname = tmp_assign_source_16;
        Py_INCREF( var_tzkeyname );
        Py_XDECREF( old );
    }

    goto loop_end_1;
    branch_no_3:;
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_921ac16258651d1780c94b99178e70ae, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_921ac16258651d1780c94b99178e70ae, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = PyExc_KeyError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 57;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_921ac16258651d1780c94b99178e70ae->m_frame) frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
    branch_no_4:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_2_get_localzone_name );
    return NULL;
    // End of try:
    try_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_instance_4 = var_tzkey;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 66;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_Close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_5 = var_handle;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handle" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 67;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_Close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    tmp_compare_left_5 = var_tzkeyname;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkeyname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_1 = const_str_digest_2af26721d4cc07029f8cc61308abc156;
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_LookupError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 70;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_win_tz );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win_tz );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win_tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = var_tzkeyname;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkeyname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_timezone == NULL );
    var_timezone = tmp_assign_source_17;

    tmp_compare_left_6 = var_timezone;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_None;
    tmp_is_2 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_win_tz );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win_tz );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "win_tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_get );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = var_tzkeyname;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkeyname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_str_digest_cae2b3a17d2b27239fa755e6ea5cde8b;
    tmp_args_element_name_15 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 76;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_timezone;
        var_timezone = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    branch_no_6:;
    tmp_compare_left_7 = var_timezone;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_is_3 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_3 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_pytz );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pytz );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_UnknownTimeZoneError );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_digest_4aff5faf38164329b3135ed6af27974f;
    tmp_right_name_2 = var_tzkeyname;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzkeyname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_921ac16258651d1780c94b99178e70ae->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 80;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_return_value = var_timezone;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timezone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_921ac16258651d1780c94b99178e70ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_921ac16258651d1780c94b99178e70ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_921ac16258651d1780c94b99178e70ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_921ac16258651d1780c94b99178e70ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_921ac16258651d1780c94b99178e70ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_921ac16258651d1780c94b99178e70ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_921ac16258651d1780c94b99178e70ae,
        type_description_1,
        var_handle,
        var_TZLOCALKEYNAME,
        var_localtz,
        var_keyvalues,
        var_tzkeyname,
        var_tzwin,
        var_TZKEYNAME,
        var_tzkey,
        var_i,
        var_subkey,
        var_sub,
        var_data,
        var_timezone
    );


    // Release cached frame.
    if ( frame_921ac16258651d1780c94b99178e70ae == cache_frame_921ac16258651d1780c94b99178e70ae )
    {
        Py_DECREF( frame_921ac16258651d1780c94b99178e70ae );
    }
    cache_frame_921ac16258651d1780c94b99178e70ae = NULL;

    assertFrameObject( frame_921ac16258651d1780c94b99178e70ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_2_get_localzone_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_handle );
    var_handle = NULL;

    Py_XDECREF( var_TZLOCALKEYNAME );
    var_TZLOCALKEYNAME = NULL;

    Py_XDECREF( var_localtz );
    var_localtz = NULL;

    Py_XDECREF( var_keyvalues );
    var_keyvalues = NULL;

    Py_XDECREF( var_tzkeyname );
    var_tzkeyname = NULL;

    Py_XDECREF( var_tzwin );
    var_tzwin = NULL;

    Py_XDECREF( var_TZKEYNAME );
    var_TZKEYNAME = NULL;

    Py_XDECREF( var_tzkey );
    var_tzkey = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_subkey );
    var_subkey = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_timezone );
    var_timezone = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_handle );
    var_handle = NULL;

    Py_XDECREF( var_TZLOCALKEYNAME );
    var_TZLOCALKEYNAME = NULL;

    Py_XDECREF( var_localtz );
    var_localtz = NULL;

    Py_XDECREF( var_keyvalues );
    var_keyvalues = NULL;

    Py_XDECREF( var_tzkeyname );
    var_tzkeyname = NULL;

    Py_XDECREF( var_tzwin );
    var_tzwin = NULL;

    Py_XDECREF( var_TZKEYNAME );
    var_TZKEYNAME = NULL;

    Py_XDECREF( var_tzkey );
    var_tzkey = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_subkey );
    var_subkey = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_timezone );
    var_timezone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_2_get_localzone_name );
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


static PyObject *impl_tzlocal$win32$$$function_3_get_localzone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_0c1fe65ec20699e2166764dfec98344e = NULL;

    struct Nuitka_FrameObject *frame_0c1fe65ec20699e2166764dfec98344e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_0c1fe65ec20699e2166764dfec98344e, codeobj_0c1fe65ec20699e2166764dfec98344e, module_tzlocal$win32, 0 );
    frame_0c1fe65ec20699e2166764dfec98344e = cache_frame_0c1fe65ec20699e2166764dfec98344e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c1fe65ec20699e2166764dfec98344e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c1fe65ec20699e2166764dfec98344e ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain__cache_tz );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cache_tz );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cache_tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_pytz );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pytz );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_get_localzone_name );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_localzone_name );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_localzone_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }

    frame_0c1fe65ec20699e2166764dfec98344e->m_frame.f_lineno = 88;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }
    frame_0c1fe65ec20699e2166764dfec98344e->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain__cache_tz, tmp_assign_source_1 );
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain__cache_tz );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cache_tz );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cache_tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c1fe65ec20699e2166764dfec98344e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c1fe65ec20699e2166764dfec98344e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c1fe65ec20699e2166764dfec98344e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c1fe65ec20699e2166764dfec98344e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c1fe65ec20699e2166764dfec98344e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c1fe65ec20699e2166764dfec98344e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c1fe65ec20699e2166764dfec98344e,
        type_description_1
    );


    // Release cached frame.
    if ( frame_0c1fe65ec20699e2166764dfec98344e == cache_frame_0c1fe65ec20699e2166764dfec98344e )
    {
        Py_DECREF( frame_0c1fe65ec20699e2166764dfec98344e );
    }
    cache_frame_0c1fe65ec20699e2166764dfec98344e = NULL;

    assertFrameObject( frame_0c1fe65ec20699e2166764dfec98344e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_3_get_localzone );
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


static PyObject *impl_tzlocal$win32$$$function_4_reload_localzone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_afa04185be2c3d54e2898539b7953edf = NULL;

    struct Nuitka_FrameObject *frame_afa04185be2c3d54e2898539b7953edf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_afa04185be2c3d54e2898539b7953edf, codeobj_afa04185be2c3d54e2898539b7953edf, module_tzlocal$win32, 0 );
    frame_afa04185be2c3d54e2898539b7953edf = cache_frame_afa04185be2c3d54e2898539b7953edf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_afa04185be2c3d54e2898539b7953edf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_afa04185be2c3d54e2898539b7953edf ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_pytz );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pytz );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_get_localzone_name );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_localzone_name );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_localzone_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;

        goto frame_exception_exit_1;
    }

    frame_afa04185be2c3d54e2898539b7953edf->m_frame.f_lineno = 94;
    tmp_args_element_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 94;

        goto frame_exception_exit_1;
    }
    frame_afa04185be2c3d54e2898539b7953edf->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain__cache_tz, tmp_assign_source_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afa04185be2c3d54e2898539b7953edf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_afa04185be2c3d54e2898539b7953edf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_afa04185be2c3d54e2898539b7953edf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_afa04185be2c3d54e2898539b7953edf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_afa04185be2c3d54e2898539b7953edf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_afa04185be2c3d54e2898539b7953edf,
        type_description_1
    );


    // Release cached frame.
    if ( frame_afa04185be2c3d54e2898539b7953edf == cache_frame_afa04185be2c3d54e2898539b7953edf )
    {
        Py_DECREF( frame_afa04185be2c3d54e2898539b7953edf );
    }
    cache_frame_afa04185be2c3d54e2898539b7953edf = NULL;

    assertFrameObject( frame_afa04185be2c3d54e2898539b7953edf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain__cache_tz );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cache_tz );
    }

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tzlocal$win32$$$function_4_reload_localzone );
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



static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_1_valuestodict(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tzlocal$win32$$$function_1_valuestodict,
        const_str_plain_valuestodict,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8c32f18174c2180e1763a56da8c9edc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_tzlocal$win32,
        const_str_digest_f09daa68ba38af15b792af68da5707bc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_2_get_localzone_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tzlocal$win32$$$function_2_get_localzone_name,
        const_str_plain_get_localzone_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_921ac16258651d1780c94b99178e70ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_tzlocal$win32,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_3_get_localzone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tzlocal$win32$$$function_3_get_localzone,
        const_str_plain_get_localzone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c1fe65ec20699e2166764dfec98344e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_tzlocal$win32,
        const_str_digest_e307df6705a9a995d37567a0579a96ee,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tzlocal$win32$$$function_4_reload_localzone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tzlocal$win32$$$function_4_reload_localzone,
        const_str_plain_reload_localzone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_afa04185be2c3d54e2898539b7953edf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_tzlocal$win32,
        const_str_digest_6c77989bfa4d680463c8d6c5504d00bb,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tzlocal$win32 =
{
    PyModuleDef_HEAD_INIT,
    "tzlocal.win32",   /* m_name */
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

MOD_INIT_DECL( tzlocal$win32 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tzlocal$win32 );
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
    puts("tzlocal.win32: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tzlocal.win32: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tzlocal.win32: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittzlocal$win32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tzlocal$win32 = Py_InitModule4(
        "tzlocal.win32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_tzlocal$win32 = PyModule_Create( &mdef_tzlocal$win32 );
#endif

    moduledict_tzlocal$win32 = MODULE_DICT( module_tzlocal$win32 );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_tzlocal$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_tzlocal$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_tzlocal$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_tzlocal$win32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c30010d6fe5bab0dc6f25d3c7a0f7abb, module_tzlocal$win32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
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
    bool tmp_result;
    struct Nuitka_FrameObject *frame_d0ed10ee3473f2e65eba3e8936d3a07c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_223fabbba70dcfe01e9c778b018f5cec;
    UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_d0ed10ee3473f2e65eba3e8936d3a07c = MAKE_MODULE_FRAME( codeobj_d0ed10ee3473f2e65eba3e8936d3a07c, module_tzlocal$win32 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d0ed10ee3473f2e65eba3e8936d3a07c );
    assert( Py_REFCNT( frame_d0ed10ee3473f2e65eba3e8936d3a07c ) == 2 );

    // Framed code:
    // Tried code:
    tmp_name_name_1 = const_str_plain__winreg;
    tmp_globals_name_1 = (PyObject *)moduledict_tzlocal$win32;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg, tmp_assign_source_4 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d0ed10ee3473f2e65eba3e8936d3a07c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d0ed10ee3473f2e65eba3e8936d3a07c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

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
    tmp_name_name_2 = const_str_plain_winreg;
    tmp_globals_name_2 = (PyObject *)moduledict_tzlocal$win32;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame.f_lineno = 4;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( !(tmp_assign_source_5 == NULL) );
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_winreg, tmp_assign_source_5 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 1;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame) frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tzlocal$win32 );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_name_name_3 = const_str_digest_ca322ae6fe2a4dce3f5f1d499994bce6;
    tmp_globals_name_3 = (PyObject *)moduledict_tzlocal$win32;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_win_tz_tuple;
    tmp_level_name_3 = const_int_0;
    frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_win_tz );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_win_tz, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_pytz;
    tmp_globals_name_4 = (PyObject *)moduledict_tzlocal$win32;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_pytz, tmp_assign_source_7 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0ed10ee3473f2e65eba3e8936d3a07c );
#endif
    popFrameStack();

    assertFrameObject( frame_d0ed10ee3473f2e65eba3e8936d3a07c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0ed10ee3473f2e65eba3e8936d3a07c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0ed10ee3473f2e65eba3e8936d3a07c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0ed10ee3473f2e65eba3e8936d3a07c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0ed10ee3473f2e65eba3e8936d3a07c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_8 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain__cache_tz, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_tzlocal$win32$$$function_1_valuestodict(  );
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_valuestodict, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_tzlocal$win32$$$function_2_get_localzone_name(  );
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_get_localzone_name, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_tzlocal$win32$$$function_3_get_localzone(  );
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_get_localzone, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_tzlocal$win32$$$function_4_reload_localzone(  );
    UPDATE_STRING_DICT1( moduledict_tzlocal$win32, (Nuitka_StringObject *)const_str_plain_reload_localzone, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_tzlocal$win32 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
