/* Generated code for Python source for module 'urllib3.util.queue'
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

/* The _module_urllib3$util$queue is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$queue;
PyDictObject *moduledict_urllib3$util$queue;

/* The module constants used, if any. */
static PyObject *const_str_plain__get;
extern PyObject *const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_PY2;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_len;
static PyObject *const_str_digest_a0e4193569b3a287a6b445641d01886c;
static PyObject *const_tuple_str_plain_self_str_plain_len_tuple;
static PyObject *const_str_digest_d17591e1dfa46d27177904ca2c245c2e;
extern PyObject *const_str_plain__init;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_deque;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_item;
static PyObject *const_str_digest_41925a37c4520a8c63d64628a5c7516d;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_2826bcb6a4e2b2208ec69cd2c90bf3e5;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_collections;
static PyObject *const_str_digest_ccab63122f9fc8f38728648d9fd14739;
static PyObject *const_str_plain__put;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain__qsize;
static PyObject *const_tuple_str_plain_self_str_plain___tuple;
extern PyObject *const_str_plain_LifoQueue;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain__unused_module_Queue;
static PyObject *const_str_digest_afac7a20d37ef59b43ab4c25b64b7e15;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_queue_tuple;
static PyObject *const_str_digest_7ec9f0483835950617b6fb63dd47ee68;
extern PyObject *const_str_plain_queue;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_Queue;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__get = UNSTREAM_STRING( &constant_bin[ 25093 ], 4, 1 );
    const_str_digest_a0e4193569b3a287a6b445641d01886c = UNSTREAM_STRING( &constant_bin[ 926331 ], 14, 0 );
    const_tuple_str_plain_self_str_plain_len_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_len_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_len_tuple, 1, const_str_plain_len ); Py_INCREF( const_str_plain_len );
    const_str_digest_d17591e1dfa46d27177904ca2c245c2e = UNSTREAM_STRING( &constant_bin[ 926345 ], 14, 0 );
    const_str_digest_41925a37c4520a8c63d64628a5c7516d = UNSTREAM_STRING( &constant_bin[ 926359 ], 62, 0 );
    const_str_digest_2826bcb6a4e2b2208ec69cd2c90bf3e5 = UNSTREAM_STRING( &constant_bin[ 926421 ], 27, 0 );
    const_str_digest_ccab63122f9fc8f38728648d9fd14739 = UNSTREAM_STRING( &constant_bin[ 926448 ], 15, 0 );
    const_str_plain__put = UNSTREAM_STRING( &constant_bin[ 879018 ], 4, 1 );
    const_str_plain__qsize = UNSTREAM_STRING( &constant_bin[ 926463 ], 6, 1 );
    const_tuple_str_plain_self_str_plain___tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain___tuple, 1, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_plain__unused_module_Queue = UNSTREAM_STRING( &constant_bin[ 926469 ], 20, 1 );
    const_str_digest_afac7a20d37ef59b43ab4c25b64b7e15 = UNSTREAM_STRING( &constant_bin[ 926429 ], 18, 0 );
    const_str_digest_7ec9f0483835950617b6fb63dd47ee68 = UNSTREAM_STRING( &constant_bin[ 926489 ], 16, 0 );
    const_tuple_str_plain_self_str_plain_item_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_item_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_item_tuple, 1, const_str_plain_item ); Py_INCREF( const_str_plain_item );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$queue( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_79840b78b5ef6805ccb5b6aaa0cdd876;
static PyCodeObject *codeobj_759501de6a592469fc02307e34405305;
static PyCodeObject *codeobj_93ffb52b9b32660ff2556692d1e0281a;
static PyCodeObject *codeobj_425cff62b62261859717b56ff612f348;
static PyCodeObject *codeobj_05f02a4b4730bff166ab6b2e812562b9;
static PyCodeObject *codeobj_43d1221f58606b31f3269145793e65b9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_41925a37c4520a8c63d64628a5c7516d;
    codeobj_79840b78b5ef6805ccb5b6aaa0cdd876 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2826bcb6a4e2b2208ec69cd2c90bf3e5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_759501de6a592469fc02307e34405305 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LifoQueue, 10, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_93ffb52b9b32660ff2556692d1e0281a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get, 20, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_425cff62b62261859717b56ff612f348 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init, 11, const_tuple_str_plain_self_str_plain___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05f02a4b4730bff166ab6b2e812562b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__put, 17, const_tuple_str_plain_self_str_plain_item_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43d1221f58606b31f3269145793e65b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__qsize, 14, const_tuple_str_plain_self_str_plain_len_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_1__init(  );


static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_2__qsize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_3__put(  );


static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_4__get(  );


// The module function definitions.
static PyObject *impl_urllib3$util$queue$$$function_1__init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par__ = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_425cff62b62261859717b56ff612f348 = NULL;

    struct Nuitka_FrameObject *frame_425cff62b62261859717b56ff612f348;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_425cff62b62261859717b56ff612f348, codeobj_425cff62b62261859717b56ff612f348, module_urllib3$util$queue, sizeof(void *)+sizeof(void *) );
    frame_425cff62b62261859717b56ff612f348 = cache_frame_425cff62b62261859717b56ff612f348;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_425cff62b62261859717b56ff612f348 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_425cff62b62261859717b56ff612f348 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_collections );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collections );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "collections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_425cff62b62261859717b56ff612f348->m_frame.f_lineno = 12;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_deque );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "oo";
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

        exception_lineno = 12;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_queue, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_425cff62b62261859717b56ff612f348 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_425cff62b62261859717b56ff612f348 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_425cff62b62261859717b56ff612f348, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_425cff62b62261859717b56ff612f348->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_425cff62b62261859717b56ff612f348, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_425cff62b62261859717b56ff612f348,
        type_description_1,
        par_self,
        par__
    );


    // Release cached frame.
    if ( frame_425cff62b62261859717b56ff612f348 == cache_frame_425cff62b62261859717b56ff612f348 )
    {
        Py_DECREF( frame_425cff62b62261859717b56ff612f348 );
    }
    cache_frame_425cff62b62261859717b56ff612f348 = NULL;

    assertFrameObject( frame_425cff62b62261859717b56ff612f348 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_1__init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par__ );
    par__ = NULL;

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

    Py_XDECREF( par__ );
    par__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_1__init );
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


static PyObject *impl_urllib3$util$queue$$$function_2__qsize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_len = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_43d1221f58606b31f3269145793e65b9 = NULL;

    struct Nuitka_FrameObject *frame_43d1221f58606b31f3269145793e65b9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43d1221f58606b31f3269145793e65b9, codeobj_43d1221f58606b31f3269145793e65b9, module_urllib3$util$queue, sizeof(void *)+sizeof(void *) );
    frame_43d1221f58606b31f3269145793e65b9 = cache_frame_43d1221f58606b31f3269145793e65b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43d1221f58606b31f3269145793e65b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43d1221f58606b31f3269145793e65b9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_len;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_queue );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_43d1221f58606b31f3269145793e65b9->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43d1221f58606b31f3269145793e65b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43d1221f58606b31f3269145793e65b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43d1221f58606b31f3269145793e65b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43d1221f58606b31f3269145793e65b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43d1221f58606b31f3269145793e65b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43d1221f58606b31f3269145793e65b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43d1221f58606b31f3269145793e65b9,
        type_description_1,
        par_self,
        par_len
    );


    // Release cached frame.
    if ( frame_43d1221f58606b31f3269145793e65b9 == cache_frame_43d1221f58606b31f3269145793e65b9 )
    {
        Py_DECREF( frame_43d1221f58606b31f3269145793e65b9 );
    }
    cache_frame_43d1221f58606b31f3269145793e65b9 = NULL;

    assertFrameObject( frame_43d1221f58606b31f3269145793e65b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_2__qsize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_len );
    par_len = NULL;

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

    Py_XDECREF( par_len );
    par_len = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_2__qsize );
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


static PyObject *impl_urllib3$util$queue$$$function_3__put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_item = python_pars[ 1 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_05f02a4b4730bff166ab6b2e812562b9 = NULL;

    struct Nuitka_FrameObject *frame_05f02a4b4730bff166ab6b2e812562b9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05f02a4b4730bff166ab6b2e812562b9, codeobj_05f02a4b4730bff166ab6b2e812562b9, module_urllib3$util$queue, sizeof(void *)+sizeof(void *) );
    frame_05f02a4b4730bff166ab6b2e812562b9 = cache_frame_05f02a4b4730bff166ab6b2e812562b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05f02a4b4730bff166ab6b2e812562b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05f02a4b4730bff166ab6b2e812562b9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_queue );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_item;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_05f02a4b4730bff166ab6b2e812562b9->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05f02a4b4730bff166ab6b2e812562b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05f02a4b4730bff166ab6b2e812562b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05f02a4b4730bff166ab6b2e812562b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05f02a4b4730bff166ab6b2e812562b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05f02a4b4730bff166ab6b2e812562b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05f02a4b4730bff166ab6b2e812562b9,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame.
    if ( frame_05f02a4b4730bff166ab6b2e812562b9 == cache_frame_05f02a4b4730bff166ab6b2e812562b9 )
    {
        Py_DECREF( frame_05f02a4b4730bff166ab6b2e812562b9 );
    }
    cache_frame_05f02a4b4730bff166ab6b2e812562b9 = NULL;

    assertFrameObject( frame_05f02a4b4730bff166ab6b2e812562b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_3__put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_item );
    par_item = NULL;

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

    Py_XDECREF( par_item );
    par_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_3__put );
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


static PyObject *impl_urllib3$util$queue$$$function_4__get( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_93ffb52b9b32660ff2556692d1e0281a = NULL;

    struct Nuitka_FrameObject *frame_93ffb52b9b32660ff2556692d1e0281a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93ffb52b9b32660ff2556692d1e0281a, codeobj_93ffb52b9b32660ff2556692d1e0281a, module_urllib3$util$queue, sizeof(void *) );
    frame_93ffb52b9b32660ff2556692d1e0281a = cache_frame_93ffb52b9b32660ff2556692d1e0281a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93ffb52b9b32660ff2556692d1e0281a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93ffb52b9b32660ff2556692d1e0281a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_queue );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_93ffb52b9b32660ff2556692d1e0281a->m_frame.f_lineno = 21;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_pop );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93ffb52b9b32660ff2556692d1e0281a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_93ffb52b9b32660ff2556692d1e0281a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93ffb52b9b32660ff2556692d1e0281a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93ffb52b9b32660ff2556692d1e0281a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93ffb52b9b32660ff2556692d1e0281a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93ffb52b9b32660ff2556692d1e0281a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93ffb52b9b32660ff2556692d1e0281a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_93ffb52b9b32660ff2556692d1e0281a == cache_frame_93ffb52b9b32660ff2556692d1e0281a )
    {
        Py_DECREF( frame_93ffb52b9b32660ff2556692d1e0281a );
    }
    cache_frame_93ffb52b9b32660ff2556692d1e0281a = NULL;

    assertFrameObject( frame_93ffb52b9b32660ff2556692d1e0281a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_4__get );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue$$$function_4__get );
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



static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_1__init(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$queue$$$function_1__init,
        const_str_plain__init,
#if PYTHON_VERSION >= 300
        const_str_digest_ccab63122f9fc8f38728648d9fd14739,
#endif
        codeobj_425cff62b62261859717b56ff612f348,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$queue,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_2__qsize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$queue$$$function_2__qsize,
        const_str_plain__qsize,
#if PYTHON_VERSION >= 300
        const_str_digest_7ec9f0483835950617b6fb63dd47ee68,
#endif
        codeobj_43d1221f58606b31f3269145793e65b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$queue,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_3__put(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$queue$$$function_3__put,
        const_str_plain__put,
#if PYTHON_VERSION >= 300
        const_str_digest_d17591e1dfa46d27177904ca2c245c2e,
#endif
        codeobj_05f02a4b4730bff166ab6b2e812562b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$queue,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$queue$$$function_4__get(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$queue$$$function_4__get,
        const_str_plain__get,
#if PYTHON_VERSION >= 300
        const_str_digest_a0e4193569b3a287a6b445641d01886c,
#endif
        codeobj_93ffb52b9b32660ff2556692d1e0281a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$queue,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$queue =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.util.queue",   /* m_name */
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

MOD_INIT_DECL( urllib3$util$queue )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$util$queue );
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
    puts("urllib3.util.queue: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.queue: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.util.queue: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$util$queue" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$queue = Py_InitModule4(
        "urllib3.util.queue",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$util$queue = PyModule_Create( &mdef_urllib3$util$queue );
#endif

    moduledict_urllib3$util$queue = MODULE_DICT( module_urllib3$util$queue );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$util$queue,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$queue,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$queue,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$util$queue );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_afac7a20d37ef59b43ab4c25b64b7e15, module_urllib3$util$queue );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
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
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_759501de6a592469fc02307e34405305_2 = NULL;

    struct Nuitka_FrameObject *frame_759501de6a592469fc02307e34405305_2;

    struct Nuitka_FrameObject *frame_79840b78b5ef6805ccb5b6aaa0cdd876;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_urllib3$util$queue_10 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_41925a37c4520a8c63d64628a5c7516d;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_79840b78b5ef6805ccb5b6aaa0cdd876 = MAKE_MODULE_FRAME( codeobj_79840b78b5ef6805ccb5b6aaa0cdd876, module_urllib3$util$queue );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_79840b78b5ef6805ccb5b6aaa0cdd876 );
    assert( Py_REFCNT( frame_79840b78b5ef6805ccb5b6aaa0cdd876 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_collections;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$queue;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame.f_lineno = 1;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_packages;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$queue;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_six_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_six,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_six );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$queue;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_queue_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_queue,
            const_int_pos_2
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_queue );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_queue, tmp_assign_source_6 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 5;

        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 5;

        goto frame_exception_exit_1;
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
    tmp_name_name_4 = const_str_plain_Queue;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$queue;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain__unused_module_Queue, tmp_assign_source_7 );
    branch_no_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_queue );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_queue );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "queue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;

        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Queue );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_assign_source_8 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_8;

    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_9 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_9;

    tmp_assign_source_10 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_2 == 1 )
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


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_3 == 1 )
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


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

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
    tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

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
    tmp_source_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_tuple_element_2 = const_str_plain_LifoQueue;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame.f_lineno = 10;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_12 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_12;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$util$queue_10 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_afac7a20d37ef59b43ab4c25b64b7e15;
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_LifoQueue;
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_759501de6a592469fc02307e34405305_2, codeobj_759501de6a592469fc02307e34405305, module_urllib3$util$queue, sizeof(void *) );
    frame_759501de6a592469fc02307e34405305_2 = cache_frame_759501de6a592469fc02307e34405305_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_759501de6a592469fc02307e34405305_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_759501de6a592469fc02307e34405305_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$queue$$$function_1__init(  );
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain__init, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_tuple_element_3 = PyObject_GetItem( locals_urllib3$util$queue_10, const_str_plain_len );

    if ( tmp_tuple_element_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_3 = LOOKUP_BUILTIN( const_str_plain_len );
        assert( tmp_tuple_element_3 != NULL );
        }
    }

    tmp_defaults_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$queue$$$function_2__qsize( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain__qsize, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$queue$$$function_3__put(  );
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain__put, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$util$queue$$$function_4__get(  );
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain__get, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_759501de6a592469fc02307e34405305_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_759501de6a592469fc02307e34405305_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_759501de6a592469fc02307e34405305_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_759501de6a592469fc02307e34405305_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_759501de6a592469fc02307e34405305_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_759501de6a592469fc02307e34405305_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_759501de6a592469fc02307e34405305_2 == cache_frame_759501de6a592469fc02307e34405305_2 )
    {
        Py_DECREF( frame_759501de6a592469fc02307e34405305_2 );
    }
    cache_frame_759501de6a592469fc02307e34405305_2 = NULL;

    assertFrameObject( frame_759501de6a592469fc02307e34405305_2 );

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
    tmp_compare_right_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictset_value = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$util$queue_10, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    branch_no_3:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_4 = const_str_plain_LifoQueue;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_urllib3$util$queue_10;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame.f_lineno = 10;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_14;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_urllib3$util$queue_10 );
    locals_urllib3$util$queue_10 = NULL;
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

    Py_DECREF( locals_urllib3$util$queue_10 );
    locals_urllib3$util$queue_10 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue );
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
    NUITKA_CANNOT_GET_HERE( urllib3$util$queue );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 10;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$util$queue, (Nuitka_StringObject *)const_str_plain_LifoQueue, tmp_assign_source_13 );
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
    RESTORE_FRAME_EXCEPTION( frame_79840b78b5ef6805ccb5b6aaa0cdd876 );
#endif
    popFrameStack();

    assertFrameObject( frame_79840b78b5ef6805ccb5b6aaa0cdd876 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79840b78b5ef6805ccb5b6aaa0cdd876 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79840b78b5ef6805ccb5b6aaa0cdd876, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79840b78b5ef6805ccb5b6aaa0cdd876->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79840b78b5ef6805ccb5b6aaa0cdd876, exception_lineno );
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


    return MOD_RETURN_VALUE( module_urllib3$util$queue );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
