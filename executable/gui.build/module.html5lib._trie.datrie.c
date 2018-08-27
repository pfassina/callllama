/* Generated code for Python source for module 'html5lib._trie.datrie'
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

/* The _module_html5lib$_trie$datrie is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_html5lib$_trie$datrie;
PyDictObject *moduledict_html5lib$_trie$datrie;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_fd26c04af1acb3b0cd78043b2593ffc8;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_has_keys_with_prefix;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_plain___contains__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_ab8d0ea13d52c67a316bda945c09b7a5;
static PyObject *const_tuple_6fde09dd3820d414d37953d5babf4541_tuple;
static PyObject *const_str_digest_dbce9d6a61993ebf7f7fbc968de79c71;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_7746eb05730aadf73907e7f4e9cf8ec4;
extern PyObject *const_str_plain_chars;
extern PyObject *const_str_digest_6f88c871026b8eb6886d09b9aec08ea2;
extern PyObject *const_str_plain_key;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_prefix;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain__base;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_digest_6b433739bc211790c1f500e9925557e8;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_digest_bfc5535c368c654cecb828762ef39dd8;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_Trie;
extern PyObject *const_tuple_str_plain_Trie_tuple;
extern PyObject *const_str_digest_5439b2431ccfdb405e8922060b74a8bc;
extern PyObject *const_tuple_str_plain_text_type_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_d01a0935c804902ddadea22ba70dfecd;
static PyObject *const_str_digest_27dcf03c85ffac1944eb57e2fff0fd79;
extern PyObject *const_str_plain_longest_prefix_item;
extern PyObject *const_str_plain_ABCTrie;
extern PyObject *const_str_digest_85a92b83ed8fb1cf505e929eb211fd14;
extern PyObject *const_tuple_str_plain_self_str_plain_prefix_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_DATrie;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_str_plain_longest_prefix;
extern PyObject *const_str_plain__data;
extern PyObject *const_str_digest_a02a8fbd1a207fefb9949084bd1069f8;
extern PyObject *const_str_plain_datrie;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_d1f24012f0aabc86f8269032f7c40d2f;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_fd26c04af1acb3b0cd78043b2593ffc8 = UNSTREAM_STRING( &constant_bin[ 473767 ], 21, 0 );
    const_tuple_6fde09dd3820d414d37953d5babf4541_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 2, const_str_plain_chars ); Py_INCREF( const_str_plain_chars );
    PyTuple_SET_ITEM( const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 4, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyTuple_SET_ITEM( const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_dbce9d6a61993ebf7f7fbc968de79c71 = UNSTREAM_STRING( &constant_bin[ 473788 ], 65, 0 );
    const_str_digest_27dcf03c85ffac1944eb57e2fff0fd79 = UNSTREAM_STRING( &constant_bin[ 473853 ], 30, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_html5lib$_trie$datrie( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d61ac9a53af6bd616b85e87ba1e0c23f;
static PyCodeObject *codeobj_8fa48ac280f9881874661bb6d671a3a5;
static PyCodeObject *codeobj_c7020844fdc250e168c7ec2d833e9042;
static PyCodeObject *codeobj_049e5a253dbcfffac1cc492ec9707141;
static PyCodeObject *codeobj_ff5fb60bb45dbcc5ab8b1530339fe4d1;
static PyCodeObject *codeobj_b04a6e4c0528206922038158e49c8038;
static PyCodeObject *codeobj_13597b2f537ab80cd69769f2bec137a2;
static PyCodeObject *codeobj_e618b90c4939a09f28a9c163e84eeec4;
static PyCodeObject *codeobj_61ede203c79d13db4650982e51d1ca17;
static PyCodeObject *codeobj_13bdcc62b721e41e72adfd6bb3bfa136;
static PyCodeObject *codeobj_3a429db89bc5ed12d1bac009e8e19010;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_dbce9d6a61993ebf7f7fbc968de79c71;
    codeobj_d61ac9a53af6bd616b85e87ba1e0c23f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_27dcf03c85ffac1944eb57e2fff0fd79, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_8fa48ac280f9881874661bb6d671a3a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Trie, 9, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_c7020844fdc250e168c7ec2d833e9042 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___contains__, 22, const_tuple_str_plain_self_str_plain_key_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_049e5a253dbcfffac1cc492ec9707141 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 31, const_tuple_str_plain_self_str_plain_key_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_ff5fb60bb45dbcc5ab8b1530339fe4d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 10, const_tuple_6fde09dd3820d414d37953d5babf4541_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_b04a6e4c0528206922038158e49c8038 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 28, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_13597b2f537ab80cd69769f2bec137a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 25, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_e618b90c4939a09f28a9c163e84eeec4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_keys_with_prefix, 37, const_tuple_str_plain_self_str_plain_prefix_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_61ede203c79d13db4650982e51d1ca17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_keys, 34, const_tuple_str_plain_self_str_plain_prefix_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_13bdcc62b721e41e72adfd6bb3bfa136 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_longest_prefix, 40, const_tuple_str_plain_self_str_plain_prefix_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_3a429db89bc5ed12d1bac009e8e19010 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_longest_prefix_item, 43, const_tuple_str_plain_self_str_plain_prefix_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_2___contains__(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_3___len__(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_4___iter__(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_5___getitem__(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_6_keys( PyObject *defaults );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_7_has_keys_with_prefix(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_8_longest_prefix(  );


static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_9_longest_prefix_item(  );


// The module function definitions.
static PyObject *impl_html5lib$_trie$datrie$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_chars = NULL;
    PyObject *var_key = NULL;
    PyObject *var_char = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    static struct Nuitka_FrameObject *cache_frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 = NULL;

    struct Nuitka_FrameObject *frame_ff5fb60bb45dbcc5ab8b1530339fe4d1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PySet_New( NULL );
    assert( var_chars == NULL );
    var_chars = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff5fb60bb45dbcc5ab8b1530339fe4d1, codeobj_ff5fb60bb45dbcc5ab8b1530339fe4d1, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 = cache_frame_ff5fb60bb45dbcc5ab8b1530339fe4d1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_data;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame.f_lineno = 12;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooo";
        exception_lineno = 12;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
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

        exception_lineno = 12;
        type_description_1 = "oooooo";
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
    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_4;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_1 = var_key;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_text_type );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "text_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_d1f24012f0aabc86f8269032f7c40d2f;
    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 14;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_no_2:;
    tmp_iter_arg_2 = var_key;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 15;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_2;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 15;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    goto loop_end_2;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    branch_end_3:;
    // End of try:
    try_end_2:;
    tmp_assign_source_7 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_7;
        Py_INCREF( var_char );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_chars;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = var_char;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "oooooo";
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

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_DATrie );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DATrie );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DATrie" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = const_str_empty;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    assert( !(tmp_called_name_3 == NULL) );
    tmp_args_element_name_3 = var_chars;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chars" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooooo";
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

        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__data, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = par_data;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame.f_lineno = 19;
    tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_3:;
    // Tried code:
    tmp_value_name_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_value_name_3 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_value_name_3 );
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


        type_description_1 = "oooooo";
        exception_lineno = 19;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_3 = exception_keeper_type_5;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );

        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    goto loop_end_3;
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    branch_end_4:;
    // End of try:
    try_end_5:;
    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_10 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 19;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_12 == NULL )
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


        type_description_1 = "oooooo";
        exception_lineno = 19;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooooo";
                exception_lineno = 19;
                goto try_except_handler_9;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooo";
        exception_lineno = 19;
        goto try_except_handler_9;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_13;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_14;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_ass_subvalue_1 = var_value;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }

    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__data );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    tmp_ass_subscript_1 = var_key;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff5fb60bb45dbcc5ab8b1530339fe4d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff5fb60bb45dbcc5ab8b1530339fe4d1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff5fb60bb45dbcc5ab8b1530339fe4d1,
        type_description_1,
        par_self,
        par_data,
        var_chars,
        var_key,
        var_char,
        var_value
    );


    // Release cached frame.
    if ( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 == cache_frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 )
    {
        Py_DECREF( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 );
    }
    cache_frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 = NULL;

    assertFrameObject( frame_ff5fb60bb45dbcc5ab8b1530339fe4d1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_chars );
    var_chars = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_1___init__ );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_2___contains__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c7020844fdc250e168c7ec2d833e9042 = NULL;

    struct Nuitka_FrameObject *frame_c7020844fdc250e168c7ec2d833e9042;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7020844fdc250e168c7ec2d833e9042, codeobj_c7020844fdc250e168c7ec2d833e9042, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *) );
    frame_c7020844fdc250e168c7ec2d833e9042 = cache_frame_c7020844fdc250e168c7ec2d833e9042;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7020844fdc250e168c7ec2d833e9042 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7020844fdc250e168c7ec2d833e9042 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_key;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__data );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7020844fdc250e168c7ec2d833e9042 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7020844fdc250e168c7ec2d833e9042 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7020844fdc250e168c7ec2d833e9042 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7020844fdc250e168c7ec2d833e9042, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7020844fdc250e168c7ec2d833e9042->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7020844fdc250e168c7ec2d833e9042, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7020844fdc250e168c7ec2d833e9042,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_c7020844fdc250e168c7ec2d833e9042 == cache_frame_c7020844fdc250e168c7ec2d833e9042 )
    {
        Py_DECREF( frame_c7020844fdc250e168c7ec2d833e9042 );
    }
    cache_frame_c7020844fdc250e168c7ec2d833e9042 = NULL;

    assertFrameObject( frame_c7020844fdc250e168c7ec2d833e9042 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_2___contains__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_2___contains__ );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_3___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_13597b2f537ab80cd69769f2bec137a2 = NULL;

    struct Nuitka_FrameObject *frame_13597b2f537ab80cd69769f2bec137a2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13597b2f537ab80cd69769f2bec137a2, codeobj_13597b2f537ab80cd69769f2bec137a2, module_html5lib$_trie$datrie, sizeof(void *) );
    frame_13597b2f537ab80cd69769f2bec137a2 = cache_frame_13597b2f537ab80cd69769f2bec137a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13597b2f537ab80cd69769f2bec137a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13597b2f537ab80cd69769f2bec137a2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__data );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13597b2f537ab80cd69769f2bec137a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13597b2f537ab80cd69769f2bec137a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13597b2f537ab80cd69769f2bec137a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13597b2f537ab80cd69769f2bec137a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13597b2f537ab80cd69769f2bec137a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13597b2f537ab80cd69769f2bec137a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13597b2f537ab80cd69769f2bec137a2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_13597b2f537ab80cd69769f2bec137a2 == cache_frame_13597b2f537ab80cd69769f2bec137a2 )
    {
        Py_DECREF( frame_13597b2f537ab80cd69769f2bec137a2 );
    }
    cache_frame_13597b2f537ab80cd69769f2bec137a2 = NULL;

    assertFrameObject( frame_13597b2f537ab80cd69769f2bec137a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_3___len__ );
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
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_3___len__ );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_4___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_b04a6e4c0528206922038158e49c8038 = NULL;

    struct Nuitka_FrameObject *frame_b04a6e4c0528206922038158e49c8038;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b04a6e4c0528206922038158e49c8038, codeobj_b04a6e4c0528206922038158e49c8038, module_html5lib$_trie$datrie, sizeof(void *) );
    frame_b04a6e4c0528206922038158e49c8038 = cache_frame_b04a6e4c0528206922038158e49c8038;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b04a6e4c0528206922038158e49c8038 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b04a6e4c0528206922038158e49c8038 ) == 2 ); // Frame stack

    // Framed code:
    frame_b04a6e4c0528206922038158e49c8038->m_frame.f_lineno = 29;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( PyExc_NotImplementedError );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 29;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b04a6e4c0528206922038158e49c8038 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b04a6e4c0528206922038158e49c8038 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b04a6e4c0528206922038158e49c8038, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b04a6e4c0528206922038158e49c8038->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b04a6e4c0528206922038158e49c8038, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b04a6e4c0528206922038158e49c8038,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b04a6e4c0528206922038158e49c8038 == cache_frame_b04a6e4c0528206922038158e49c8038 )
    {
        Py_DECREF( frame_b04a6e4c0528206922038158e49c8038 );
    }
    cache_frame_b04a6e4c0528206922038158e49c8038 = NULL;

    assertFrameObject( frame_b04a6e4c0528206922038158e49c8038 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_4___iter__ );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_4___iter__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_html5lib$_trie$datrie$$$function_5___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_049e5a253dbcfffac1cc492ec9707141 = NULL;

    struct Nuitka_FrameObject *frame_049e5a253dbcfffac1cc492ec9707141;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_049e5a253dbcfffac1cc492ec9707141, codeobj_049e5a253dbcfffac1cc492ec9707141, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *) );
    frame_049e5a253dbcfffac1cc492ec9707141 = cache_frame_049e5a253dbcfffac1cc492ec9707141;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_049e5a253dbcfffac1cc492ec9707141 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_049e5a253dbcfffac1cc492ec9707141 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__data );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_key;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_049e5a253dbcfffac1cc492ec9707141 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_049e5a253dbcfffac1cc492ec9707141 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_049e5a253dbcfffac1cc492ec9707141 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_049e5a253dbcfffac1cc492ec9707141, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_049e5a253dbcfffac1cc492ec9707141->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_049e5a253dbcfffac1cc492ec9707141, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_049e5a253dbcfffac1cc492ec9707141,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame.
    if ( frame_049e5a253dbcfffac1cc492ec9707141 == cache_frame_049e5a253dbcfffac1cc492ec9707141 )
    {
        Py_DECREF( frame_049e5a253dbcfffac1cc492ec9707141 );
    }
    cache_frame_049e5a253dbcfffac1cc492ec9707141 = NULL;

    assertFrameObject( frame_049e5a253dbcfffac1cc492ec9707141 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_5___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_5___getitem__ );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_6_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_61ede203c79d13db4650982e51d1ca17 = NULL;

    struct Nuitka_FrameObject *frame_61ede203c79d13db4650982e51d1ca17;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61ede203c79d13db4650982e51d1ca17, codeobj_61ede203c79d13db4650982e51d1ca17, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *) );
    frame_61ede203c79d13db4650982e51d1ca17 = cache_frame_61ede203c79d13db4650982e51d1ca17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61ede203c79d13db4650982e51d1ca17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61ede203c79d13db4650982e51d1ca17 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__data );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_prefix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_61ede203c79d13db4650982e51d1ca17->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61ede203c79d13db4650982e51d1ca17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61ede203c79d13db4650982e51d1ca17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61ede203c79d13db4650982e51d1ca17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61ede203c79d13db4650982e51d1ca17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61ede203c79d13db4650982e51d1ca17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61ede203c79d13db4650982e51d1ca17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61ede203c79d13db4650982e51d1ca17,
        type_description_1,
        par_self,
        par_prefix
    );


    // Release cached frame.
    if ( frame_61ede203c79d13db4650982e51d1ca17 == cache_frame_61ede203c79d13db4650982e51d1ca17 )
    {
        Py_DECREF( frame_61ede203c79d13db4650982e51d1ca17 );
    }
    cache_frame_61ede203c79d13db4650982e51d1ca17 = NULL;

    assertFrameObject( frame_61ede203c79d13db4650982e51d1ca17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_6_keys );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

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

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_6_keys );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_7_has_keys_with_prefix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_e618b90c4939a09f28a9c163e84eeec4 = NULL;

    struct Nuitka_FrameObject *frame_e618b90c4939a09f28a9c163e84eeec4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e618b90c4939a09f28a9c163e84eeec4, codeobj_e618b90c4939a09f28a9c163e84eeec4, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *) );
    frame_e618b90c4939a09f28a9c163e84eeec4 = cache_frame_e618b90c4939a09f28a9c163e84eeec4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e618b90c4939a09f28a9c163e84eeec4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e618b90c4939a09f28a9c163e84eeec4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__data );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_has_keys_with_prefix );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_prefix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_e618b90c4939a09f28a9c163e84eeec4->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e618b90c4939a09f28a9c163e84eeec4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e618b90c4939a09f28a9c163e84eeec4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e618b90c4939a09f28a9c163e84eeec4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e618b90c4939a09f28a9c163e84eeec4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e618b90c4939a09f28a9c163e84eeec4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e618b90c4939a09f28a9c163e84eeec4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e618b90c4939a09f28a9c163e84eeec4,
        type_description_1,
        par_self,
        par_prefix
    );


    // Release cached frame.
    if ( frame_e618b90c4939a09f28a9c163e84eeec4 == cache_frame_e618b90c4939a09f28a9c163e84eeec4 )
    {
        Py_DECREF( frame_e618b90c4939a09f28a9c163e84eeec4 );
    }
    cache_frame_e618b90c4939a09f28a9c163e84eeec4 = NULL;

    assertFrameObject( frame_e618b90c4939a09f28a9c163e84eeec4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_7_has_keys_with_prefix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

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

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_7_has_keys_with_prefix );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_8_longest_prefix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_13bdcc62b721e41e72adfd6bb3bfa136 = NULL;

    struct Nuitka_FrameObject *frame_13bdcc62b721e41e72adfd6bb3bfa136;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13bdcc62b721e41e72adfd6bb3bfa136, codeobj_13bdcc62b721e41e72adfd6bb3bfa136, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *) );
    frame_13bdcc62b721e41e72adfd6bb3bfa136 = cache_frame_13bdcc62b721e41e72adfd6bb3bfa136;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13bdcc62b721e41e72adfd6bb3bfa136 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13bdcc62b721e41e72adfd6bb3bfa136 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__data );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_longest_prefix );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_prefix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_13bdcc62b721e41e72adfd6bb3bfa136->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13bdcc62b721e41e72adfd6bb3bfa136 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13bdcc62b721e41e72adfd6bb3bfa136 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13bdcc62b721e41e72adfd6bb3bfa136 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13bdcc62b721e41e72adfd6bb3bfa136, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13bdcc62b721e41e72adfd6bb3bfa136->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13bdcc62b721e41e72adfd6bb3bfa136, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13bdcc62b721e41e72adfd6bb3bfa136,
        type_description_1,
        par_self,
        par_prefix
    );


    // Release cached frame.
    if ( frame_13bdcc62b721e41e72adfd6bb3bfa136 == cache_frame_13bdcc62b721e41e72adfd6bb3bfa136 )
    {
        Py_DECREF( frame_13bdcc62b721e41e72adfd6bb3bfa136 );
    }
    cache_frame_13bdcc62b721e41e72adfd6bb3bfa136 = NULL;

    assertFrameObject( frame_13bdcc62b721e41e72adfd6bb3bfa136 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_8_longest_prefix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

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

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_8_longest_prefix );
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


static PyObject *impl_html5lib$_trie$datrie$$$function_9_longest_prefix_item( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_3a429db89bc5ed12d1bac009e8e19010 = NULL;

    struct Nuitka_FrameObject *frame_3a429db89bc5ed12d1bac009e8e19010;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a429db89bc5ed12d1bac009e8e19010, codeobj_3a429db89bc5ed12d1bac009e8e19010, module_html5lib$_trie$datrie, sizeof(void *)+sizeof(void *) );
    frame_3a429db89bc5ed12d1bac009e8e19010 = cache_frame_3a429db89bc5ed12d1bac009e8e19010;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a429db89bc5ed12d1bac009e8e19010 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a429db89bc5ed12d1bac009e8e19010 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__data );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_longest_prefix_item );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_prefix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_3a429db89bc5ed12d1bac009e8e19010->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a429db89bc5ed12d1bac009e8e19010 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a429db89bc5ed12d1bac009e8e19010 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a429db89bc5ed12d1bac009e8e19010 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a429db89bc5ed12d1bac009e8e19010, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a429db89bc5ed12d1bac009e8e19010->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a429db89bc5ed12d1bac009e8e19010, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a429db89bc5ed12d1bac009e8e19010,
        type_description_1,
        par_self,
        par_prefix
    );


    // Release cached frame.
    if ( frame_3a429db89bc5ed12d1bac009e8e19010 == cache_frame_3a429db89bc5ed12d1bac009e8e19010 )
    {
        Py_DECREF( frame_3a429db89bc5ed12d1bac009e8e19010 );
    }
    cache_frame_3a429db89bc5ed12d1bac009e8e19010 = NULL;

    assertFrameObject( frame_3a429db89bc5ed12d1bac009e8e19010 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_9_longest_prefix_item );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

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

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie$$$function_9_longest_prefix_item );
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



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_85a92b83ed8fb1cf505e929eb211fd14,
#endif
        codeobj_ff5fb60bb45dbcc5ab8b1530339fe4d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_2___contains__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_2___contains__,
        const_str_plain___contains__,
#if PYTHON_VERSION >= 300
        const_str_digest_7746eb05730aadf73907e7f4e9cf8ec4,
#endif
        codeobj_c7020844fdc250e168c7ec2d833e9042,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_3___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_3___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 300
        const_str_digest_ab8d0ea13d52c67a316bda945c09b7a5,
#endif
        codeobj_13597b2f537ab80cd69769f2bec137a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_4___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_4___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        const_str_digest_6f88c871026b8eb6886d09b9aec08ea2,
#endif
        codeobj_b04a6e4c0528206922038158e49c8038,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_5___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_5___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_6b433739bc211790c1f500e9925557e8,
#endif
        codeobj_049e5a253dbcfffac1cc492ec9707141,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_6_keys( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_6_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_d01a0935c804902ddadea22ba70dfecd,
#endif
        codeobj_61ede203c79d13db4650982e51d1ca17,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_7_has_keys_with_prefix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_7_has_keys_with_prefix,
        const_str_plain_has_keys_with_prefix,
#if PYTHON_VERSION >= 300
        const_str_digest_5439b2431ccfdb405e8922060b74a8bc,
#endif
        codeobj_e618b90c4939a09f28a9c163e84eeec4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_8_longest_prefix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_8_longest_prefix,
        const_str_plain_longest_prefix,
#if PYTHON_VERSION >= 300
        const_str_digest_bfc5535c368c654cecb828762ef39dd8,
#endif
        codeobj_13bdcc62b721e41e72adfd6bb3bfa136,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_html5lib$_trie$datrie$$$function_9_longest_prefix_item(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_html5lib$_trie$datrie$$$function_9_longest_prefix_item,
        const_str_plain_longest_prefix_item,
#if PYTHON_VERSION >= 300
        const_str_digest_a02a8fbd1a207fefb9949084bd1069f8,
#endif
        codeobj_3a429db89bc5ed12d1bac009e8e19010,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_html5lib$_trie$datrie,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_html5lib$_trie$datrie =
{
    PyModuleDef_HEAD_INIT,
    "html5lib._trie.datrie",   /* m_name */
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

MOD_INIT_DECL( html5lib$_trie$datrie )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_html5lib$_trie$datrie );
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
    puts("html5lib._trie.datrie: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib._trie.datrie: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("html5lib._trie.datrie: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inithtml5lib$_trie$datrie" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_html5lib$_trie$datrie = Py_InitModule4(
        "html5lib._trie.datrie",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_html5lib$_trie$datrie = PyModule_Create( &mdef_html5lib$_trie$datrie );
#endif

    moduledict_html5lib$_trie$datrie = MODULE_DICT( module_html5lib$_trie$datrie );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_html5lib$_trie$datrie,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib$_trie$datrie,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_html5lib$_trie$datrie,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_html5lib$_trie$datrie );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_fd26c04af1acb3b0cd78043b2593ffc8, module_html5lib$_trie$datrie );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
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
    static struct Nuitka_FrameObject *cache_frame_8fa48ac280f9881874661bb6d671a3a5_2 = NULL;

    struct Nuitka_FrameObject *frame_8fa48ac280f9881874661bb6d671a3a5_2;

    struct Nuitka_FrameObject *frame_d61ac9a53af6bd616b85e87ba1e0c23f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_html5lib$_trie$datrie_9 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dbce9d6a61993ebf7f7fbc968de79c71;
    UPDATE_STRING_DICT0( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_d61ac9a53af6bd616b85e87ba1e0c23f = MAKE_MODULE_FRAME( codeobj_d61ac9a53af6bd616b85e87ba1e0c23f, module_html5lib$_trie$datrie );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d61ac9a53af6bd616b85e87ba1e0c23f );
    assert( Py_REFCNT( frame_d61ac9a53af6bd616b85e87ba1e0c23f ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unicode_literals );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_datrie;
    tmp_globals_name_1 = (PyObject *)moduledict_html5lib$_trie$datrie;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Trie_tuple;
    tmp_level_name_1 = const_int_0;
    frame_d61ac9a53af6bd616b85e87ba1e0c23f->m_frame.f_lineno = 3;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Trie );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_DATrie, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_html5lib$_trie$datrie;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_text_type_tuple;
    tmp_level_name_2 = const_int_0;
    frame_d61ac9a53af6bd616b85e87ba1e0c23f->m_frame.f_lineno = 4;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_text_type );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain__base;
    tmp_globals_name_3 = (PyObject *)moduledict_html5lib$_trie$datrie;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_Trie_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_d61ac9a53af6bd616b85e87ba1e0c23f->m_frame.f_lineno = 6;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_Trie,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Trie );
    }

    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_ABCTrie, tmp_assign_source_10 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_ABCTrie );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCTrie );
    }

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_assign_source_11 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_11;

    // Tried code:
    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_12 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_12;

    tmp_assign_source_13 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

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


        exception_lineno = 9;

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


        exception_lineno = 9;

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


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

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
    tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

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


        exception_lineno = 9;

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


        exception_lineno = 9;

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


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    tmp_tuple_element_2 = const_str_plain_Trie;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_d61ac9a53af6bd616b85e87ba1e0c23f->m_frame.f_lineno = 9;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_15;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_html5lib$_trie$datrie_9 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_fd26c04af1acb3b0cd78043b2593ffc8;
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_Trie;
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_8fa48ac280f9881874661bb6d671a3a5_2, codeobj_8fa48ac280f9881874661bb6d671a3a5, module_html5lib$_trie$datrie, sizeof(void *) );
    frame_8fa48ac280f9881874661bb6d671a3a5_2 = cache_frame_8fa48ac280f9881874661bb6d671a3a5_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8fa48ac280f9881874661bb6d671a3a5_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8fa48ac280f9881874661bb6d671a3a5_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_2___contains__(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___contains__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_3___len__(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___len__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_4___iter__(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___iter__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_5___getitem__(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___getitem__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_6_keys( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain_keys, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_7_has_keys_with_prefix(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain_has_keys_with_prefix, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_8_longest_prefix(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain_longest_prefix, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_html5lib$_trie$datrie$$$function_9_longest_prefix_item(  );
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain_longest_prefix_item, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa48ac280f9881874661bb6d671a3a5_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa48ac280f9881874661bb6d671a3a5_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fa48ac280f9881874661bb6d671a3a5_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fa48ac280f9881874661bb6d671a3a5_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fa48ac280f9881874661bb6d671a3a5_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fa48ac280f9881874661bb6d671a3a5_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_8fa48ac280f9881874661bb6d671a3a5_2 == cache_frame_8fa48ac280f9881874661bb6d671a3a5_2 )
    {
        Py_DECREF( frame_8fa48ac280f9881874661bb6d671a3a5_2 );
    }
    cache_frame_8fa48ac280f9881874661bb6d671a3a5_2 = NULL;

    assertFrameObject( frame_8fa48ac280f9881874661bb6d671a3a5_2 );

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


        exception_lineno = 9;

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
    tmp_res = PyObject_SetItem( locals_html5lib$_trie$datrie_9, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_3 = const_str_plain_Trie;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_html5lib$_trie$datrie_9;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_d61ac9a53af6bd616b85e87ba1e0c23f->m_frame.f_lineno = 9;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_17;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_html5lib$_trie$datrie_9 );
    locals_html5lib$_trie$datrie_9 = NULL;
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

    Py_DECREF( locals_html5lib$_trie$datrie_9 );
    locals_html5lib$_trie$datrie_9 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie );
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
    NUITKA_CANNOT_GET_HERE( html5lib$_trie$datrie );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 9;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_16 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_html5lib$_trie$datrie, (Nuitka_StringObject *)const_str_plain_Trie, tmp_assign_source_16 );
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
    RESTORE_FRAME_EXCEPTION( frame_d61ac9a53af6bd616b85e87ba1e0c23f );
#endif
    popFrameStack();

    assertFrameObject( frame_d61ac9a53af6bd616b85e87ba1e0c23f );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d61ac9a53af6bd616b85e87ba1e0c23f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d61ac9a53af6bd616b85e87ba1e0c23f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d61ac9a53af6bd616b85e87ba1e0c23f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d61ac9a53af6bd616b85e87ba1e0c23f, exception_lineno );
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


    return MOD_RETURN_VALUE( module_html5lib$_trie$datrie );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
