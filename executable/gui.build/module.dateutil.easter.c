/* Generated code for Python source for module 'dateutil.easter'
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

/* The _module_dateutil$easter is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil$easter;
PyDictObject *moduledict_dateutil$easter;

/* The module constants used, if any. */
static PyObject *const_str_digest_2dea529bdd36f778c5cdf4700eb540b1;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_46b94b975b5aaafd6b53cca349c9eda9;
extern PyObject *const_str_plain_y;
static PyObject *const_int_pos_26;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_h;
static PyObject *const_str_digest_a36c5cb8113656aac7292f8c17ede9b6;
extern PyObject *const_int_pos_11;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_g;
extern PyObject *const_int_pos_15;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_21;
static PyObject *const_int_pos_19;
extern PyObject *const_str_plain_e;
extern PyObject *const_int_pos_31;
extern PyObject *const_int_pos_8;
static PyObject *const_list_57b9b2dcb344a5f8a634ec04093e810c_list;
static PyObject *const_str_plain_EASTER_JULIAN;
extern PyObject *const_int_pos_40;
extern PyObject *const_str_plain_easter;
static PyObject *const_int_pos_1600;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_28;
extern PyObject *const_str_plain_method;
extern PyObject *const_int_pos_25;
static PyObject *const_int_pos_27;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
static PyObject *const_str_digest_04e208ccb6ca8bd0334a34c544b4144d;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_year;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_datetime;
static PyObject *const_int_pos_29;
extern PyObject *const_str_plain_date;
static PyObject *const_tuple_84082aa87e6821323c60eecb6faf235f_tuple;
extern PyObject *const_str_plain_m;
static PyObject *const_str_plain_EASTER_ORTHODOX;
extern PyObject *const_str_plain_d;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_13;
extern PyObject *const_int_pos_100;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_30;
static PyObject *const_str_digest_95358cf928b04609330bd9b001aabe8c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_079f8c55bb678dd686a39cc07236a8f4;
static PyObject *const_str_plain_EASTER_WESTERN;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_2dea529bdd36f778c5cdf4700eb540b1 = UNSTREAM_STRING( &constant_bin[ 376378 ], 24, 0 );
    const_str_digest_46b94b975b5aaafd6b53cca349c9eda9 = UNSTREAM_STRING( &constant_bin[ 376402 ], 120, 0 );
    const_int_pos_26 = PyLong_FromUnsignedLong( 26ul );
    const_str_digest_a36c5cb8113656aac7292f8c17ede9b6 = UNSTREAM_STRING( &constant_bin[ 376522 ], 14, 0 );
    const_int_pos_19 = PyLong_FromUnsignedLong( 19ul );
    const_list_57b9b2dcb344a5f8a634ec04093e810c_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_57b9b2dcb344a5f8a634ec04093e810c_list, 0, const_str_plain_easter ); Py_INCREF( const_str_plain_easter );
    const_str_plain_EASTER_JULIAN = UNSTREAM_STRING( &constant_bin[ 376536 ], 13, 1 );
    PyList_SET_ITEM( const_list_57b9b2dcb344a5f8a634ec04093e810c_list, 1, const_str_plain_EASTER_JULIAN ); Py_INCREF( const_str_plain_EASTER_JULIAN );
    const_str_plain_EASTER_ORTHODOX = UNSTREAM_STRING( &constant_bin[ 376549 ], 15, 1 );
    PyList_SET_ITEM( const_list_57b9b2dcb344a5f8a634ec04093e810c_list, 2, const_str_plain_EASTER_ORTHODOX ); Py_INCREF( const_str_plain_EASTER_ORTHODOX );
    const_str_plain_EASTER_WESTERN = UNSTREAM_STRING( &constant_bin[ 376564 ], 14, 1 );
    PyList_SET_ITEM( const_list_57b9b2dcb344a5f8a634ec04093e810c_list, 3, const_str_plain_EASTER_WESTERN ); Py_INCREF( const_str_plain_EASTER_WESTERN );
    const_int_pos_1600 = PyLong_FromUnsignedLong( 1600ul );
    const_int_pos_27 = PyLong_FromUnsignedLong( 27ul );
    const_str_digest_04e208ccb6ca8bd0334a34c544b4144d = UNSTREAM_STRING( &constant_bin[ 376578 ], 59, 0 );
    const_int_pos_29 = PyLong_FromUnsignedLong( 29ul );
    const_tuple_84082aa87e6821323c60eecb6faf235f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 0, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 3, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 6, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 7, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 8, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 9, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 10, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 11, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_digest_95358cf928b04609330bd9b001aabe8c = UNSTREAM_STRING( &constant_bin[ 376637 ], 1036, 0 );
    const_str_digest_079f8c55bb678dd686a39cc07236a8f4 = UNSTREAM_STRING( &constant_bin[ 376386 ], 15, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil$easter( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a3ace8ab9bf70044b6e15ef8557b9053;
static PyCodeObject *codeobj_4625ffbbf1183fbd50e835533028a196;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_04e208ccb6ca8bd0334a34c544b4144d;
    codeobj_a3ace8ab9bf70044b6e15ef8557b9053 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2dea529bdd36f778c5cdf4700eb540b1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4625ffbbf1183fbd50e835533028a196 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_easter, 16, const_tuple_84082aa87e6821323c60eecb6faf235f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_dateutil$easter$$$function_1_easter( PyObject *defaults );


// The module function definitions.
static PyObject *impl_dateutil$easter$$$function_1_easter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_year = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *var_y = NULL;
    PyObject *var_g = NULL;
    PyObject *var_e = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_c = NULL;
    PyObject *var_h = NULL;
    PyObject *var_p = NULL;
    PyObject *var_d = NULL;
    PyObject *var_m = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
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
    PyObject *tmp_left_name_24;
    PyObject *tmp_left_name_25;
    PyObject *tmp_left_name_26;
    PyObject *tmp_left_name_27;
    PyObject *tmp_left_name_28;
    PyObject *tmp_left_name_29;
    PyObject *tmp_left_name_30;
    PyObject *tmp_left_name_31;
    PyObject *tmp_left_name_32;
    PyObject *tmp_left_name_33;
    PyObject *tmp_left_name_34;
    PyObject *tmp_left_name_35;
    PyObject *tmp_left_name_36;
    PyObject *tmp_left_name_37;
    PyObject *tmp_left_name_38;
    PyObject *tmp_left_name_39;
    PyObject *tmp_left_name_40;
    PyObject *tmp_left_name_41;
    PyObject *tmp_left_name_42;
    PyObject *tmp_left_name_43;
    PyObject *tmp_left_name_44;
    PyObject *tmp_left_name_45;
    PyObject *tmp_left_name_46;
    PyObject *tmp_left_name_47;
    PyObject *tmp_left_name_48;
    PyObject *tmp_left_name_49;
    PyObject *tmp_left_name_50;
    PyObject *tmp_left_name_51;
    PyObject *tmp_left_name_52;
    PyObject *tmp_left_name_53;
    PyObject *tmp_left_name_54;
    PyObject *tmp_left_name_55;
    PyObject *tmp_left_name_56;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_right_name_24;
    PyObject *tmp_right_name_25;
    PyObject *tmp_right_name_26;
    PyObject *tmp_right_name_27;
    PyObject *tmp_right_name_28;
    PyObject *tmp_right_name_29;
    PyObject *tmp_right_name_30;
    PyObject *tmp_right_name_31;
    PyObject *tmp_right_name_32;
    PyObject *tmp_right_name_33;
    PyObject *tmp_right_name_34;
    PyObject *tmp_right_name_35;
    PyObject *tmp_right_name_36;
    PyObject *tmp_right_name_37;
    PyObject *tmp_right_name_38;
    PyObject *tmp_right_name_39;
    PyObject *tmp_right_name_40;
    PyObject *tmp_right_name_41;
    PyObject *tmp_right_name_42;
    PyObject *tmp_right_name_43;
    PyObject *tmp_right_name_44;
    PyObject *tmp_right_name_45;
    PyObject *tmp_right_name_46;
    PyObject *tmp_right_name_47;
    PyObject *tmp_right_name_48;
    PyObject *tmp_right_name_49;
    PyObject *tmp_right_name_50;
    PyObject *tmp_right_name_51;
    PyObject *tmp_right_name_52;
    PyObject *tmp_right_name_53;
    PyObject *tmp_right_name_54;
    PyObject *tmp_right_name_55;
    PyObject *tmp_right_name_56;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_4625ffbbf1183fbd50e835533028a196 = NULL;

    struct Nuitka_FrameObject *frame_4625ffbbf1183fbd50e835533028a196;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4625ffbbf1183fbd50e835533028a196, codeobj_4625ffbbf1183fbd50e835533028a196, module_dateutil$easter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4625ffbbf1183fbd50e835533028a196 = cache_frame_4625ffbbf1183fbd50e835533028a196;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4625ffbbf1183fbd50e835533028a196 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4625ffbbf1183fbd50e835533028a196 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = par_method;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    // Tried code:
    tmp_compexpr_left_1 = const_int_pos_1;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_2:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_pos_3;
    tmp_outline_return_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$easter$$$function_1_easter );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$easter$$$function_1_easter );
    return NULL;
    outline_result_1:;
    tmp_cond_value_1 = tmp_outline_return_value_1;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 52;
        type_description_1 = "oooooooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_a36c5cb8113656aac7292f8c17ede9b6;
    frame_4625ffbbf1183fbd50e835533028a196->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 53;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_3 = par_year;

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_y = tmp_assign_source_3;

    tmp_left_name_1 = var_y;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_19;
    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_g == NULL );
    var_g = tmp_assign_source_4;

    tmp_assign_source_5 = const_int_0;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_e = tmp_assign_source_5;

    tmp_compare_left_1 = par_method;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_4 = const_int_pos_19;
    tmp_right_name_2 = var_g;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_15;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_30;
    tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_6;

    tmp_left_name_7 = var_y;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_8 = var_y;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_4;
    tmp_right_name_5 = BINARY_OPERATION_FLOORDIV( tmp_left_name_8, tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = var_i;

    if ( tmp_right_name_7 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = const_int_pos_7;
    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_j == NULL );
    var_j = tmp_assign_source_7;

    tmp_compare_left_2 = par_method;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_8 = const_int_pos_10;
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_8;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_y;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_pos_1600;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_11 = var_e;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_12 = var_y;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_int_pos_100;
    tmp_right_name_9 = BINARY_OPERATION_FLOORDIV( tmp_left_name_12, tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = const_int_pos_16;
    tmp_left_name_9 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_15 = var_y;

    if ( tmp_left_name_15 == NULL )
    {
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = const_int_pos_100;
    tmp_left_name_14 = BINARY_OPERATION_FLOORDIV( tmp_left_name_15, tmp_right_name_13 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_9 );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = const_int_pos_16;
    tmp_left_name_13 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_left_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_9 );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = const_int_pos_4;
    tmp_right_name_12 = BINARY_OPERATION_FLOORDIV( tmp_left_name_13, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_13 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_9 );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_9 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_no_5:;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_left_name_16 = var_y;

    if ( tmp_left_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_16 = const_int_pos_100;
    tmp_assign_source_10 = BINARY_OPERATION_FLOORDIV( tmp_left_name_16, tmp_right_name_16 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_c == NULL );
    var_c = tmp_assign_source_10;

    tmp_left_name_21 = var_c;

    CHECK_OBJECT( tmp_left_name_21 );
    tmp_left_name_22 = var_c;

    CHECK_OBJECT( tmp_left_name_22 );
    tmp_right_name_18 = const_int_pos_4;
    tmp_right_name_17 = BINARY_OPERATION_FLOORDIV( tmp_left_name_22, tmp_right_name_18 );
    if ( tmp_right_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_20 = BINARY_OPERATION_SUB( tmp_left_name_21, tmp_right_name_17 );
    Py_DECREF( tmp_right_name_17 );
    if ( tmp_left_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_25 = const_int_pos_8;
    tmp_right_name_20 = var_c;

    if ( tmp_right_name_20 == NULL )
    {
        Py_DECREF( tmp_left_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_24 = BINARY_OPERATION_MUL( tmp_left_name_25, tmp_right_name_20 );
    if ( tmp_left_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_20 );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_21 = const_int_pos_13;
    tmp_left_name_23 = BINARY_OPERATION_ADD( tmp_left_name_24, tmp_right_name_21 );
    Py_DECREF( tmp_left_name_24 );
    if ( tmp_left_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_20 );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_22 = const_int_pos_25;
    tmp_right_name_19 = BINARY_OPERATION_FLOORDIV( tmp_left_name_23, tmp_right_name_22 );
    Py_DECREF( tmp_left_name_23 );
    if ( tmp_right_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_20 );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_19 = BINARY_OPERATION_SUB( tmp_left_name_20, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_20 );
    Py_DECREF( tmp_right_name_19 );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_26 = const_int_pos_19;
    tmp_right_name_24 = var_g;

    if ( tmp_right_name_24 == NULL )
    {
        Py_DECREF( tmp_left_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_23 = BINARY_OPERATION_MUL( tmp_left_name_26, tmp_right_name_24 );
    if ( tmp_right_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_19 );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_18 = BINARY_OPERATION_ADD( tmp_left_name_19, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_19 );
    Py_DECREF( tmp_right_name_23 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_25 = const_int_pos_15;
    tmp_left_name_17 = BINARY_OPERATION_ADD( tmp_left_name_18, tmp_right_name_25 );
    Py_DECREF( tmp_left_name_18 );
    if ( tmp_left_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_26 = const_int_pos_30;
    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_17, tmp_right_name_26 );
    Py_DECREF( tmp_left_name_17 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_h == NULL );
    var_h = tmp_assign_source_11;

    tmp_left_name_27 = var_h;

    CHECK_OBJECT( tmp_left_name_27 );
    tmp_left_name_29 = var_h;

    CHECK_OBJECT( tmp_left_name_29 );
    tmp_right_name_28 = const_int_pos_28;
    tmp_left_name_28 = BINARY_OPERATION_FLOORDIV( tmp_left_name_29, tmp_right_name_28 );
    if ( tmp_left_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_30 = const_int_pos_1;
    tmp_left_name_33 = var_h;

    if ( tmp_left_name_33 == NULL )
    {
        Py_DECREF( tmp_left_name_28 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_31 = const_int_pos_28;
    tmp_left_name_32 = BINARY_OPERATION_FLOORDIV( tmp_left_name_33, tmp_right_name_31 );
    if ( tmp_left_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_34 = const_int_pos_29;
    tmp_left_name_35 = var_h;

    if ( tmp_left_name_35 == NULL )
    {
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_left_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "h" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_34 = const_int_pos_1;
    tmp_right_name_33 = BINARY_OPERATION_ADD( tmp_left_name_35, tmp_right_name_34 );
    if ( tmp_right_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_left_name_32 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_32 = BINARY_OPERATION_FLOORDIV( tmp_left_name_34, tmp_right_name_33 );
    Py_DECREF( tmp_right_name_33 );
    if ( tmp_right_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_left_name_32 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_31 = BINARY_OPERATION_MUL( tmp_left_name_32, tmp_right_name_32 );
    Py_DECREF( tmp_left_name_32 );
    Py_DECREF( tmp_right_name_32 );
    if ( tmp_left_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_37 = const_int_pos_21;
    tmp_right_name_36 = var_g;

    if ( tmp_right_name_36 == NULL )
    {
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_left_name_31 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_36 = BINARY_OPERATION_SUB( tmp_left_name_37, tmp_right_name_36 );
    if ( tmp_left_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_left_name_31 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_37 = const_int_pos_11;
    tmp_right_name_35 = BINARY_OPERATION_FLOORDIV( tmp_left_name_36, tmp_right_name_37 );
    Py_DECREF( tmp_left_name_36 );
    if ( tmp_right_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );
        Py_DECREF( tmp_left_name_31 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_30 = BINARY_OPERATION_MUL( tmp_left_name_31, tmp_right_name_35 );
    Py_DECREF( tmp_left_name_31 );
    Py_DECREF( tmp_right_name_35 );
    if ( tmp_right_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_29 = BINARY_OPERATION_SUB( tmp_left_name_30, tmp_right_name_30 );
    Py_DECREF( tmp_right_name_30 );
    if ( tmp_right_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_28 );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_27 = BINARY_OPERATION_MUL( tmp_left_name_28, tmp_right_name_29 );
    Py_DECREF( tmp_left_name_28 );
    Py_DECREF( tmp_right_name_29 );
    if ( tmp_right_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = BINARY_OPERATION_SUB( tmp_left_name_27, tmp_right_name_27 );
    Py_DECREF( tmp_right_name_27 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_i == NULL );
    var_i = tmp_assign_source_12;

    tmp_left_name_43 = var_y;

    if ( tmp_left_name_43 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_44 = var_y;

    if ( tmp_left_name_44 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_39 = const_int_pos_4;
    tmp_right_name_38 = BINARY_OPERATION_FLOORDIV( tmp_left_name_44, tmp_right_name_39 );
    if ( tmp_right_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_42 = BINARY_OPERATION_ADD( tmp_left_name_43, tmp_right_name_38 );
    Py_DECREF( tmp_right_name_38 );
    if ( tmp_left_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_40 = var_i;

    if ( tmp_right_name_40 == NULL )
    {
        Py_DECREF( tmp_left_name_42 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_41 = BINARY_OPERATION_ADD( tmp_left_name_42, tmp_right_name_40 );
    Py_DECREF( tmp_left_name_42 );
    if ( tmp_left_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_41 = const_int_pos_2;
    tmp_left_name_40 = BINARY_OPERATION_ADD( tmp_left_name_41, tmp_right_name_41 );
    Py_DECREF( tmp_left_name_41 );
    if ( tmp_left_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_42 = var_c;

    if ( tmp_right_name_42 == NULL )
    {
        Py_DECREF( tmp_left_name_40 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_39 = BINARY_OPERATION_SUB( tmp_left_name_40, tmp_right_name_42 );
    Py_DECREF( tmp_left_name_40 );
    if ( tmp_left_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_45 = var_c;

    if ( tmp_left_name_45 == NULL )
    {
        Py_DECREF( tmp_left_name_39 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_44 = const_int_pos_4;
    tmp_right_name_43 = BINARY_OPERATION_FLOORDIV( tmp_left_name_45, tmp_right_name_44 );
    if ( tmp_right_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_39 );

        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_38 = BINARY_OPERATION_ADD( tmp_left_name_39, tmp_right_name_43 );
    Py_DECREF( tmp_left_name_39 );
    Py_DECREF( tmp_right_name_43 );
    if ( tmp_left_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_45 = const_int_pos_7;
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_38, tmp_right_name_45 );
    Py_DECREF( tmp_left_name_38 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_j == NULL );
    var_j = tmp_assign_source_13;

    branch_end_3:;
    tmp_left_name_47 = var_i;

    if ( tmp_left_name_47 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_46 = var_j;

    if ( tmp_right_name_46 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_46 = BINARY_OPERATION_SUB( tmp_left_name_47, tmp_right_name_46 );
    if ( tmp_left_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_47 = var_e;

    if ( tmp_right_name_47 == NULL )
    {
        Py_DECREF( tmp_left_name_46 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_left_name_46, tmp_right_name_47 );
    Py_DECREF( tmp_left_name_46 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p == NULL );
    var_p = tmp_assign_source_14;

    tmp_left_name_48 = const_int_pos_1;
    tmp_left_name_51 = var_p;

    CHECK_OBJECT( tmp_left_name_51 );
    tmp_right_name_49 = const_int_pos_27;
    tmp_left_name_50 = BINARY_OPERATION_ADD( tmp_left_name_51, tmp_right_name_49 );
    if ( tmp_left_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_53 = var_p;

    if ( tmp_left_name_53 == NULL )
    {
        Py_DECREF( tmp_left_name_50 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_51 = const_int_pos_6;
    tmp_left_name_52 = BINARY_OPERATION_ADD( tmp_left_name_53, tmp_right_name_51 );
    if ( tmp_left_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_50 );

        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_52 = const_int_pos_40;
    tmp_right_name_50 = BINARY_OPERATION_FLOORDIV( tmp_left_name_52, tmp_right_name_52 );
    Py_DECREF( tmp_left_name_52 );
    if ( tmp_right_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_50 );

        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_49 = BINARY_OPERATION_ADD( tmp_left_name_50, tmp_right_name_50 );
    Py_DECREF( tmp_left_name_50 );
    Py_DECREF( tmp_right_name_50 );
    if ( tmp_left_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_53 = const_int_pos_31;
    tmp_right_name_48 = BINARY_OPERATION_REMAINDER( tmp_left_name_49, tmp_right_name_53 );
    Py_DECREF( tmp_left_name_49 );
    if ( tmp_right_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = BINARY_OPERATION_ADD( tmp_left_name_48, tmp_right_name_48 );
    Py_DECREF( tmp_right_name_48 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_15;

    tmp_left_name_54 = const_int_pos_3;
    tmp_left_name_56 = var_p;

    if ( tmp_left_name_56 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_55 = const_int_pos_26;
    tmp_left_name_55 = BINARY_OPERATION_ADD( tmp_left_name_56, tmp_right_name_55 );
    if ( tmp_left_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_56 = const_int_pos_30;
    tmp_right_name_54 = BINARY_OPERATION_FLOORDIV( tmp_left_name_55, tmp_right_name_56 );
    Py_DECREF( tmp_left_name_55 );
    if ( tmp_right_name_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_left_name_54, tmp_right_name_54 );
    Py_DECREF( tmp_right_name_54 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_16;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_date );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_1 = var_y;

    if ( tmp_int_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_2 = var_m;

    if ( tmp_int_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_3 = var_d;

    if ( tmp_int_arg_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_4625ffbbf1183fbd50e835533028a196->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4625ffbbf1183fbd50e835533028a196 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4625ffbbf1183fbd50e835533028a196 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4625ffbbf1183fbd50e835533028a196 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4625ffbbf1183fbd50e835533028a196, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4625ffbbf1183fbd50e835533028a196->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4625ffbbf1183fbd50e835533028a196, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4625ffbbf1183fbd50e835533028a196,
        type_description_1,
        par_year,
        par_method,
        var_y,
        var_g,
        var_e,
        var_i,
        var_j,
        var_c,
        var_h,
        var_p,
        var_d,
        var_m
    );


    // Release cached frame.
    if ( frame_4625ffbbf1183fbd50e835533028a196 == cache_frame_4625ffbbf1183fbd50e835533028a196 )
    {
        Py_DECREF( frame_4625ffbbf1183fbd50e835533028a196 );
    }
    cache_frame_4625ffbbf1183fbd50e835533028a196 = NULL;

    assertFrameObject( frame_4625ffbbf1183fbd50e835533028a196 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$easter$$$function_1_easter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_year );
    par_year = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_year );
    par_year = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$easter$$$function_1_easter );
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



static PyObject *MAKE_FUNCTION_dateutil$easter$$$function_1_easter( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$easter$$$function_1_easter,
        const_str_plain_easter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4625ffbbf1183fbd50e835533028a196,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$easter,
        const_str_digest_95358cf928b04609330bd9b001aabe8c,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil$easter =
{
    PyModuleDef_HEAD_INIT,
    "dateutil.easter",   /* m_name */
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

MOD_INIT_DECL( dateutil$easter )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil$easter );
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
    puts("dateutil.easter: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.easter: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.easter: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil$easter" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil$easter = Py_InitModule4(
        "dateutil.easter",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil$easter = PyModule_Create( &mdef_dateutil$easter );
#endif

    moduledict_dateutil$easter = MODULE_DICT( module_dateutil$easter );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil$easter,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$easter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$easter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil$easter );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_079f8c55bb678dd686a39cc07236a8f4, module_dateutil$easter );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_a3ace8ab9bf70044b6e15ef8557b9053;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_46b94b975b5aaafd6b53cca349c9eda9;
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_04e208ccb6ca8bd0334a34c544b4144d;
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_a3ace8ab9bf70044b6e15ef8557b9053 = MAKE_MODULE_FRAME( codeobj_a3ace8ab9bf70044b6e15ef8557b9053, module_dateutil$easter );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a3ace8ab9bf70044b6e15ef8557b9053 );
    assert( Py_REFCNT( frame_a3ace8ab9bf70044b6e15ef8557b9053 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_dateutil$easter;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_a3ace8ab9bf70044b6e15ef8557b9053->m_frame.f_lineno = 7;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3ace8ab9bf70044b6e15ef8557b9053 );
#endif
    popFrameStack();

    assertFrameObject( frame_a3ace8ab9bf70044b6e15ef8557b9053 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3ace8ab9bf70044b6e15ef8557b9053 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3ace8ab9bf70044b6e15ef8557b9053, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3ace8ab9bf70044b6e15ef8557b9053->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3ace8ab9bf70044b6e15ef8557b9053, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = LIST_COPY( const_list_57b9b2dcb344a5f8a634ec04093e810c_list );
    UPDATE_STRING_DICT1( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_EASTER_JULIAN, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_EASTER_ORTHODOX, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_EASTER_WESTERN, tmp_assign_source_8 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_EASTER_WESTERN );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EASTER_WESTERN );
    }

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_defaults_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_9 = MAKE_FUNCTION_dateutil$easter$$$function_1_easter( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_dateutil$easter, (Nuitka_StringObject *)const_str_plain_easter, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_dateutil$easter );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
