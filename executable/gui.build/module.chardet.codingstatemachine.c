/* Generated code for Python source for module 'chardet.codingstatemachine'
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

/* The _module_chardet$codingstatemachine is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$codingstatemachine;
PyDictObject *moduledict_chardet$codingstatemachine;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain__model;
static PyObject *const_str_plain_sm;
static PyObject *const_str_plain__curr_char_len;
extern PyObject *const_str_plain_state_table;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_5e7b1ebaf569607b4fa4d499d56738e7;
static PyObject *const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple;
extern PyObject *const_str_plain_char_len_table;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_digest_8afb9ef7188501c9cab0e7961f3982e9;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_byte_class;
extern PyObject *const_str_plain_language;
extern PyObject *const_str_plain_class_table;
extern PyObject *const_str_plain_next_state;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_logger;
extern PyObject *const_int_0;
static PyObject *const_str_digest_5f4cea3e3ab342446422590906c2d3f6;
extern PyObject *const_str_plain_get_coding_state_machine;
static PyObject *const_str_plain__curr_byte_pos;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_reset;
static PyObject *const_tuple_str_plain_self_str_plain_sm_tuple;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_MachineState;
extern PyObject *const_str_plain_class_factor;
extern PyObject *const_str_plain_CodingStateMachine;
static PyObject *const_str_plain__curr_state;
extern PyObject *const_str_plain_START;
extern PyObject *const_str_plain_get_current_charlen;
static PyObject *const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b;
static PyObject *const_str_plain_curr_state;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c;
static PyObject *const_str_digest_6baf4084ccf81c9d192b4232913c88e0;
static PyObject *const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple;
static PyObject *const_str_digest_46c5bde6a442642957e02ad3ab22d6bf;
static PyObject *const_str_digest_4e324d24d8616283ecad6f6af25abd7f;
static PyObject *const_str_digest_9344e35141c1032039fc7d659e9b8abf;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_MachineState_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_1bbbf779d0048312dde8e52ffee1c724;
static PyObject *const_str_digest_646b81b59eed0ba57152f435ba5a8819;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_sm = UNSTREAM_STRING( &constant_bin[ 20397 ], 2, 1 );
    const_str_plain__curr_char_len = UNSTREAM_STRING( &constant_bin[ 93304 ], 14, 1 );
    const_str_digest_5e7b1ebaf569607b4fa4d499d56738e7 = UNSTREAM_STRING( &constant_bin[ 93318 ], 29, 0 );
    const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple = PyTuple_New( 1 );
    const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b = UNSTREAM_STRING( &constant_bin[ 93347 ], 26, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple, 0, const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b ); Py_INCREF( const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b );
    const_str_digest_8afb9ef7188501c9cab0e7961f3982e9 = UNSTREAM_STRING( &constant_bin[ 93373 ], 1174, 0 );
    const_str_plain_byte_class = UNSTREAM_STRING( &constant_bin[ 94547 ], 10, 1 );
    const_str_digest_5f4cea3e3ab342446422590906c2d3f6 = UNSTREAM_STRING( &constant_bin[ 94557 ], 43, 0 );
    const_str_plain__curr_byte_pos = UNSTREAM_STRING( &constant_bin[ 94600 ], 14, 1 );
    const_tuple_str_plain_self_str_plain_sm_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sm_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sm_tuple, 1, const_str_plain_sm ); Py_INCREF( const_str_plain_sm );
    const_str_plain__curr_state = UNSTREAM_STRING( &constant_bin[ 94614 ], 11, 1 );
    const_str_plain_curr_state = UNSTREAM_STRING( &constant_bin[ 94615 ], 10, 1 );
    const_str_digest_6baf4084ccf81c9d192b4232913c88e0 = UNSTREAM_STRING( &constant_bin[ 94625 ], 38, 0 );
    const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 2, const_str_plain_byte_class ); Py_INCREF( const_str_plain_byte_class );
    PyTuple_SET_ITEM( const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 3, const_str_plain_curr_state ); Py_INCREF( const_str_plain_curr_state );
    const_str_digest_46c5bde6a442642957e02ad3ab22d6bf = UNSTREAM_STRING( &constant_bin[ 94663 ], 70, 0 );
    const_str_digest_4e324d24d8616283ecad6f6af25abd7f = UNSTREAM_STRING( &constant_bin[ 94733 ], 27, 0 );
    const_str_digest_9344e35141c1032039fc7d659e9b8abf = UNSTREAM_STRING( &constant_bin[ 94760 ], 35, 0 );
    const_str_digest_1bbbf779d0048312dde8e52ffee1c724 = UNSTREAM_STRING( &constant_bin[ 94795 ], 24, 0 );
    const_str_digest_646b81b59eed0ba57152f435ba5a8819 = UNSTREAM_STRING( &constant_bin[ 94819 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$codingstatemachine( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_33bdbb9c8301ada91128ae42cf31995e;
static PyCodeObject *codeobj_07af89b815e69b6b1da3d7f7354c86fe;
static PyCodeObject *codeobj_8658af85b6f0973c6890383268854b2b;
static PyCodeObject *codeobj_729df5806988cd27e1b431d499775a82;
static PyCodeObject *codeobj_121f06c4a1246fa0e7bd1f1353a6bada;
static PyCodeObject *codeobj_bcffa1857f6e9a0c8de2dcb1f1837f0e;
static PyCodeObject *codeobj_df80eff63ecd275861fa62510ad3eda2;
static PyCodeObject *codeobj_64bececacccb1029420f65b43a87e882;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_46c5bde6a442642957e02ad3ab22d6bf;
    codeobj_33bdbb9c8301ada91128ae42cf31995e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9344e35141c1032039fc7d659e9b8abf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_07af89b815e69b6b1da3d7f7354c86fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CodingStateMachine, 33, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8658af85b6f0973c6890383268854b2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 55, const_tuple_str_plain_self_str_plain_sm_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_729df5806988cd27e1b431d499775a82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_coding_state_machine, 83, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_121f06c4a1246fa0e7bd1f1353a6bada = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_current_charlen, 80, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcffa1857f6e9a0c8de2dcb1f1837f0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_language, 86, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_df80eff63ecd275861fa62510ad3eda2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_next_state, 66, const_tuple_0b562627780115e5d9aadde0f7f7a2ca_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_64bececacccb1029420f65b43a87e882 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 63, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_3_next_state(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_4_get_current_charlen(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_5_get_coding_state_machine(  );


static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  );


// The module function definitions.
static PyObject *impl_chardet$codingstatemachine$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sm = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8658af85b6f0973c6890383268854b2b = NULL;

    struct Nuitka_FrameObject *frame_8658af85b6f0973c6890383268854b2b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8658af85b6f0973c6890383268854b2b, codeobj_8658af85b6f0973c6890383268854b2b, module_chardet$codingstatemachine, sizeof(void *)+sizeof(void *) );
    frame_8658af85b6f0973c6890383268854b2b = cache_frame_8658af85b6f0973c6890383268854b2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8658af85b6f0973c6890383268854b2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8658af85b6f0973c6890383268854b2b ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_sm;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__model, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__curr_byte_pos, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__curr_char_len, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__curr_state, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_8658af85b6f0973c6890383268854b2b->m_frame.f_lineno = 60;
    tmp_assattr_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_5c8bdb061ec2104fda96a94f85f3c65b_tuple, 0 ) );

    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_logger, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oo";
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

        exception_lineno = 61;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_8658af85b6f0973c6890383268854b2b->m_frame.f_lineno = 61;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8658af85b6f0973c6890383268854b2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8658af85b6f0973c6890383268854b2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8658af85b6f0973c6890383268854b2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8658af85b6f0973c6890383268854b2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8658af85b6f0973c6890383268854b2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8658af85b6f0973c6890383268854b2b,
        type_description_1,
        par_self,
        par_sm
    );


    // Release cached frame.
    if ( frame_8658af85b6f0973c6890383268854b2b == cache_frame_8658af85b6f0973c6890383268854b2b )
    {
        Py_DECREF( frame_8658af85b6f0973c6890383268854b2b );
    }
    cache_frame_8658af85b6f0973c6890383268854b2b = NULL;

    assertFrameObject( frame_8658af85b6f0973c6890383268854b2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_sm );
    par_sm = NULL;

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

    Py_XDECREF( par_sm );
    par_sm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_1___init__ );
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


static PyObject *impl_chardet$codingstatemachine$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_64bececacccb1029420f65b43a87e882 = NULL;

    struct Nuitka_FrameObject *frame_64bececacccb1029420f65b43a87e882;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64bececacccb1029420f65b43a87e882, codeobj_64bececacccb1029420f65b43a87e882, module_chardet$codingstatemachine, sizeof(void *) );
    frame_64bececacccb1029420f65b43a87e882 = cache_frame_64bececacccb1029420f65b43a87e882;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64bececacccb1029420f65b43a87e882 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64bececacccb1029420f65b43a87e882 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_START );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
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

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__curr_state, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64bececacccb1029420f65b43a87e882 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64bececacccb1029420f65b43a87e882 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64bececacccb1029420f65b43a87e882, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64bececacccb1029420f65b43a87e882->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64bececacccb1029420f65b43a87e882, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64bececacccb1029420f65b43a87e882,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_64bececacccb1029420f65b43a87e882 == cache_frame_64bececacccb1029420f65b43a87e882 )
    {
        Py_DECREF( frame_64bececacccb1029420f65b43a87e882 );
    }
    cache_frame_64bececacccb1029420f65b43a87e882 = NULL;

    assertFrameObject( frame_64bececacccb1029420f65b43a87e882 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_2_reset );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_2_reset );
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


static PyObject *impl_chardet$codingstatemachine$$$function_3_next_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *var_byte_class = NULL;
    PyObject *var_curr_state = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    static struct Nuitka_FrameObject *cache_frame_df80eff63ecd275861fa62510ad3eda2 = NULL;

    struct Nuitka_FrameObject *frame_df80eff63ecd275861fa62510ad3eda2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df80eff63ecd275861fa62510ad3eda2, codeobj_df80eff63ecd275861fa62510ad3eda2, module_chardet$codingstatemachine, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_df80eff63ecd275861fa62510ad3eda2 = cache_frame_df80eff63ecd275861fa62510ad3eda2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df80eff63ecd275861fa62510ad3eda2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df80eff63ecd275861fa62510ad3eda2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__model );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_class_table;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = par_c;

    if ( tmp_subscript_name_2 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_byte_class == NULL );
    var_byte_class = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__curr_state );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_MachineState );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachineState );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MachineState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_START );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 70;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooo";
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
    tmp_assattr_name_1 = const_int_0;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__curr_byte_pos, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__model );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_str_plain_char_len_table;
    tmp_subscribed_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = var_byte_class;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
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

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__curr_char_len, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__curr_state );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__model );
    if ( tmp_subscribed_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_5 = const_str_plain_class_factor;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscribed_name_5 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = var_byte_class;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_curr_state == NULL );
    var_curr_state = tmp_assign_source_2;

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__model );
    if ( tmp_subscribed_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_6 = const_str_plain_state_table;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_7 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = var_curr_state;

    if ( tmp_subscript_name_7 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "curr_state" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
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

        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__curr_state, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__curr_byte_pos );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_3;

    // Tried code:
    tmp_left_name_3 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_4;

    // Tried code:
    tmp_assattr_name_4 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__curr_byte_pos, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__curr_state );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df80eff63ecd275861fa62510ad3eda2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df80eff63ecd275861fa62510ad3eda2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df80eff63ecd275861fa62510ad3eda2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df80eff63ecd275861fa62510ad3eda2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df80eff63ecd275861fa62510ad3eda2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df80eff63ecd275861fa62510ad3eda2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df80eff63ecd275861fa62510ad3eda2,
        type_description_1,
        par_self,
        par_c,
        var_byte_class,
        var_curr_state
    );


    // Release cached frame.
    if ( frame_df80eff63ecd275861fa62510ad3eda2 == cache_frame_df80eff63ecd275861fa62510ad3eda2 )
    {
        Py_DECREF( frame_df80eff63ecd275861fa62510ad3eda2 );
    }
    cache_frame_df80eff63ecd275861fa62510ad3eda2 = NULL;

    assertFrameObject( frame_df80eff63ecd275861fa62510ad3eda2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_3_next_state );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_byte_class );
    var_byte_class = NULL;

    Py_XDECREF( var_curr_state );
    var_curr_state = NULL;

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

    Py_XDECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_byte_class );
    var_byte_class = NULL;

    Py_XDECREF( var_curr_state );
    var_curr_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_3_next_state );
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


static PyObject *impl_chardet$codingstatemachine$$$function_4_get_current_charlen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_121f06c4a1246fa0e7bd1f1353a6bada = NULL;

    struct Nuitka_FrameObject *frame_121f06c4a1246fa0e7bd1f1353a6bada;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_121f06c4a1246fa0e7bd1f1353a6bada, codeobj_121f06c4a1246fa0e7bd1f1353a6bada, module_chardet$codingstatemachine, sizeof(void *) );
    frame_121f06c4a1246fa0e7bd1f1353a6bada = cache_frame_121f06c4a1246fa0e7bd1f1353a6bada;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_121f06c4a1246fa0e7bd1f1353a6bada );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_121f06c4a1246fa0e7bd1f1353a6bada ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__curr_char_len );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_121f06c4a1246fa0e7bd1f1353a6bada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_121f06c4a1246fa0e7bd1f1353a6bada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_121f06c4a1246fa0e7bd1f1353a6bada );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_121f06c4a1246fa0e7bd1f1353a6bada, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_121f06c4a1246fa0e7bd1f1353a6bada->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_121f06c4a1246fa0e7bd1f1353a6bada, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_121f06c4a1246fa0e7bd1f1353a6bada,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_121f06c4a1246fa0e7bd1f1353a6bada == cache_frame_121f06c4a1246fa0e7bd1f1353a6bada )
    {
        Py_DECREF( frame_121f06c4a1246fa0e7bd1f1353a6bada );
    }
    cache_frame_121f06c4a1246fa0e7bd1f1353a6bada = NULL;

    assertFrameObject( frame_121f06c4a1246fa0e7bd1f1353a6bada );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_4_get_current_charlen );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_4_get_current_charlen );
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


static PyObject *impl_chardet$codingstatemachine$$$function_5_get_coding_state_machine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_729df5806988cd27e1b431d499775a82 = NULL;

    struct Nuitka_FrameObject *frame_729df5806988cd27e1b431d499775a82;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_729df5806988cd27e1b431d499775a82, codeobj_729df5806988cd27e1b431d499775a82, module_chardet$codingstatemachine, sizeof(void *) );
    frame_729df5806988cd27e1b431d499775a82 = cache_frame_729df5806988cd27e1b431d499775a82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_729df5806988cd27e1b431d499775a82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_729df5806988cd27e1b431d499775a82 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__model );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_name;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_729df5806988cd27e1b431d499775a82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_729df5806988cd27e1b431d499775a82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_729df5806988cd27e1b431d499775a82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_729df5806988cd27e1b431d499775a82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_729df5806988cd27e1b431d499775a82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_729df5806988cd27e1b431d499775a82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_729df5806988cd27e1b431d499775a82,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_729df5806988cd27e1b431d499775a82 == cache_frame_729df5806988cd27e1b431d499775a82 )
    {
        Py_DECREF( frame_729df5806988cd27e1b431d499775a82 );
    }
    cache_frame_729df5806988cd27e1b431d499775a82 = NULL;

    assertFrameObject( frame_729df5806988cd27e1b431d499775a82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_5_get_coding_state_machine );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_5_get_coding_state_machine );
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


static PyObject *impl_chardet$codingstatemachine$$$function_6_language( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_bcffa1857f6e9a0c8de2dcb1f1837f0e = NULL;

    struct Nuitka_FrameObject *frame_bcffa1857f6e9a0c8de2dcb1f1837f0e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcffa1857f6e9a0c8de2dcb1f1837f0e, codeobj_bcffa1857f6e9a0c8de2dcb1f1837f0e, module_chardet$codingstatemachine, sizeof(void *) );
    frame_bcffa1857f6e9a0c8de2dcb1f1837f0e = cache_frame_bcffa1857f6e9a0c8de2dcb1f1837f0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__model );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_language;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcffa1857f6e9a0c8de2dcb1f1837f0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcffa1857f6e9a0c8de2dcb1f1837f0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcffa1857f6e9a0c8de2dcb1f1837f0e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e == cache_frame_bcffa1857f6e9a0c8de2dcb1f1837f0e )
    {
        Py_DECREF( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e );
    }
    cache_frame_bcffa1857f6e9a0c8de2dcb1f1837f0e = NULL;

    assertFrameObject( frame_bcffa1857f6e9a0c8de2dcb1f1837f0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_6_language );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine$$$function_6_language );
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



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_646b81b59eed0ba57152f435ba5a8819,
#endif
        codeobj_8658af85b6f0973c6890383268854b2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_1bbbf779d0048312dde8e52ffee1c724,
#endif
        codeobj_64bececacccb1029420f65b43a87e882,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_3_next_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_3_next_state,
        const_str_plain_next_state,
#if PYTHON_VERSION >= 300
        const_str_digest_5e7b1ebaf569607b4fa4d499d56738e7,
#endif
        codeobj_df80eff63ecd275861fa62510ad3eda2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_4_get_current_charlen(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_4_get_current_charlen,
        const_str_plain_get_current_charlen,
#if PYTHON_VERSION >= 300
        const_str_digest_6baf4084ccf81c9d192b4232913c88e0,
#endif
        codeobj_121f06c4a1246fa0e7bd1f1353a6bada,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_5_get_coding_state_machine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_5_get_coding_state_machine,
        const_str_plain_get_coding_state_machine,
#if PYTHON_VERSION >= 300
        const_str_digest_5f4cea3e3ab342446422590906c2d3f6,
#endif
        codeobj_729df5806988cd27e1b431d499775a82,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$codingstatemachine$$$function_6_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        const_str_digest_4e324d24d8616283ecad6f6af25abd7f,
#endif
        codeobj_bcffa1857f6e9a0c8de2dcb1f1837f0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$codingstatemachine,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$codingstatemachine =
{
    PyModuleDef_HEAD_INIT,
    "chardet.codingstatemachine",   /* m_name */
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

MOD_INIT_DECL( chardet$codingstatemachine )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$codingstatemachine );
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
    puts("chardet.codingstatemachine: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.codingstatemachine: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.codingstatemachine: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$codingstatemachine" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$codingstatemachine = Py_InitModule4(
        "chardet.codingstatemachine",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$codingstatemachine = PyModule_Create( &mdef_chardet$codingstatemachine );
#endif

    moduledict_chardet$codingstatemachine = MODULE_DICT( module_chardet$codingstatemachine );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$codingstatemachine,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$codingstatemachine,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$codingstatemachine,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$codingstatemachine );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b, module_chardet$codingstatemachine );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
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
    static struct Nuitka_FrameObject *cache_frame_07af89b815e69b6b1da3d7f7354c86fe_2 = NULL;

    struct Nuitka_FrameObject *frame_07af89b815e69b6b1da3d7f7354c86fe_2;

    struct Nuitka_FrameObject *frame_33bdbb9c8301ada91128ae42cf31995e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_chardet$codingstatemachine_33 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_46c5bde6a442642957e02ad3ab22d6bf;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_33bdbb9c8301ada91128ae42cf31995e = MAKE_MODULE_FRAME( codeobj_33bdbb9c8301ada91128ae42cf31995e, module_chardet$codingstatemachine );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_33bdbb9c8301ada91128ae42cf31995e );
    assert( Py_REFCNT( frame_33bdbb9c8301ada91128ae42cf31995e ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$codingstatemachine;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_33bdbb9c8301ada91128ae42cf31995e->m_frame.f_lineno = 28;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_enums;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$codingstatemachine;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_MachineState_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_33bdbb9c8301ada91128ae42cf31995e->m_frame.f_lineno = 30;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_MachineState,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_MachineState );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_MachineState, tmp_assign_source_5 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_6 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_6;

    tmp_assign_source_7 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_7;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

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
    tmp_assign_source_8 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_8;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

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


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    tmp_tuple_element_1 = const_str_plain_CodingStateMachine;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_33bdbb9c8301ada91128ae42cf31995e->m_frame.f_lineno = 33;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_9 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_9;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$codingstatemachine_33 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5c8bdb061ec2104fda96a94f85f3c65b;
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_digest_8afb9ef7188501c9cab0e7961f3982e9;
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_CodingStateMachine;
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_07af89b815e69b6b1da3d7f7354c86fe_2, codeobj_07af89b815e69b6b1da3d7f7354c86fe, module_chardet$codingstatemachine, sizeof(void *) );
    frame_07af89b815e69b6b1da3d7f7354c86fe_2 = cache_frame_07af89b815e69b6b1da3d7f7354c86fe_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_07af89b815e69b6b1da3d7f7354c86fe_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_07af89b815e69b6b1da3d7f7354c86fe_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$codingstatemachine$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$codingstatemachine$$$function_2_reset(  );
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain_reset, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$codingstatemachine$$$function_3_next_state(  );
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain_next_state, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$codingstatemachine$$$function_4_get_current_charlen(  );
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain_get_current_charlen, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$codingstatemachine$$$function_5_get_coding_state_machine(  );
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain_get_coding_state_machine, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_chardet$codingstatemachine_33, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
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
    tmp_called_name_2 = PyObject_GetItem( locals_chardet$codingstatemachine_33, const_str_plain_property );

    if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  );
    frame_07af89b815e69b6b1da3d7f7354c86fe_2->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_chardet$codingstatemachine$$$function_6_language(  );
    frame_07af89b815e69b6b1da3d7f7354c86fe_2->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_4:;
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain_language, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07af89b815e69b6b1da3d7f7354c86fe_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07af89b815e69b6b1da3d7f7354c86fe_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_07af89b815e69b6b1da3d7f7354c86fe_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_07af89b815e69b6b1da3d7f7354c86fe_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_07af89b815e69b6b1da3d7f7354c86fe_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_07af89b815e69b6b1da3d7f7354c86fe_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_07af89b815e69b6b1da3d7f7354c86fe_2 == cache_frame_07af89b815e69b6b1da3d7f7354c86fe_2 )
    {
        Py_DECREF( frame_07af89b815e69b6b1da3d7f7354c86fe_2 );
    }
    cache_frame_07af89b815e69b6b1da3d7f7354c86fe_2 = NULL;

    assertFrameObject( frame_07af89b815e69b6b1da3d7f7354c86fe_2 );

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


        exception_lineno = 33;

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
    tmp_res = PyObject_SetItem( locals_chardet$codingstatemachine_33, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_2 = const_str_plain_CodingStateMachine;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_chardet$codingstatemachine_33;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_33bdbb9c8301ada91128ae42cf31995e->m_frame.f_lineno = 33;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_11;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_chardet$codingstatemachine_33 );
    locals_chardet$codingstatemachine_33 = NULL;
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

    Py_DECREF( locals_chardet$codingstatemachine_33 );
    locals_chardet$codingstatemachine_33 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine );
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
    NUITKA_CANNOT_GET_HERE( chardet$codingstatemachine );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 33;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_10 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_chardet$codingstatemachine, (Nuitka_StringObject *)const_str_plain_CodingStateMachine, tmp_assign_source_10 );
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
    RESTORE_FRAME_EXCEPTION( frame_33bdbb9c8301ada91128ae42cf31995e );
#endif
    popFrameStack();

    assertFrameObject( frame_33bdbb9c8301ada91128ae42cf31995e );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_33bdbb9c8301ada91128ae42cf31995e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33bdbb9c8301ada91128ae42cf31995e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33bdbb9c8301ada91128ae42cf31995e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33bdbb9c8301ada91128ae42cf31995e, exception_lineno );
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


    return MOD_RETURN_VALUE( module_chardet$codingstatemachine );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
