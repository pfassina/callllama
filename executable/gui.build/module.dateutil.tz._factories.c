/* Generated code for Python source for module 'dateutil.tz._factories'
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

/* The _module_dateutil$tz$_factories is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil$tz$_factories;
PyDictObject *moduledict_dateutil$tz$_factories;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_str_plain_timedelta_tuple;
extern PyObject *const_str_plain_posix_offset;
extern PyObject *const_str_plain__TzSingleton;
static PyObject *const_str_digest_bff2a4647ac2c28e43e470a68300226f;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain__TzOffsetFactory;
extern PyObject *const_tuple_type_type_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple;
static PyObject *const_str_plain__TzSingleton__instance;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_56e3a11a1d38a7fdd4686bbd4281a43b;
static PyObject *const_str_digest_f1e38922065daa66004f1978bd9ac6a0;
extern PyObject *const_int_0;
static PyObject *const_str_plain__TzStrFactory__instances;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_0334e8465ded628143cc1713185bf5f2_tuple;
extern PyObject *const_str_plain__TzStrFactory;
static PyObject *const_tuple_642c6e046837b34bd42add7d36af734f_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_b93c8a5aa9d35f94176cf32f5cf87609;
static PyObject *const_str_plain__TzOffsetFactory__instances;
extern PyObject *const_str_plain_total_seconds;
static PyObject *const_str_plain_instance;
static PyObject *const_str_digest_68245d5f15bf47485ff146574af354be;
static PyObject *const_str_digest_73d9fcca104b54751f7c9bd72932999f;
extern PyObject *const_str_plain___call__;
static PyObject *const_str_digest_bb721ce05d55bffe2059468c32a66282;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_44921cbadfa08b1ab59d06df623d9903;
static PyObject *const_tuple_str_plain_cls_str_plain___class___tuple;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_5b8a45fd77dcecf7df2a583065f13a12;
static PyObject *const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef;
static PyObject *const_str_plain__TzFactory;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_dbac7fbe2c9b01703d44ec75e23d1a0c;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_bff2a4647ac2c28e43e470a68300226f = UNSTREAM_STRING( &constant_bin[ 427006 ], 22, 0 );
    const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple, 2, const_str_plain_posix_offset ); Py_INCREF( const_str_plain_posix_offset );
    PyTuple_SET_ITEM( const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_instance = UNSTREAM_STRING( &constant_bin[ 22175 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple, 4, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    const_str_plain__TzSingleton__instance = UNSTREAM_STRING( &constant_bin[ 427028 ], 22, 1 );
    const_str_digest_56e3a11a1d38a7fdd4686bbd4281a43b = UNSTREAM_STRING( &constant_bin[ 427050 ], 21, 0 );
    const_str_digest_f1e38922065daa66004f1978bd9ac6a0 = UNSTREAM_STRING( &constant_bin[ 427071 ], 51, 0 );
    const_str_plain__TzStrFactory__instances = UNSTREAM_STRING( &constant_bin[ 427122 ], 24, 1 );
    const_tuple_0334e8465ded628143cc1713185bf5f2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0334e8465ded628143cc1713185bf5f2_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_0334e8465ded628143cc1713185bf5f2_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_0334e8465ded628143cc1713185bf5f2_tuple, 2, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_0334e8465ded628143cc1713185bf5f2_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_0334e8465ded628143cc1713185bf5f2_tuple, 4, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    const_tuple_642c6e046837b34bd42add7d36af734f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_642c6e046837b34bd42add7d36af734f_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_642c6e046837b34bd42add7d36af734f_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_642c6e046837b34bd42add7d36af734f_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_642c6e046837b34bd42add7d36af734f_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_b93c8a5aa9d35f94176cf32f5cf87609 = UNSTREAM_STRING( &constant_bin[ 427146 ], 21, 0 );
    const_str_plain__TzOffsetFactory__instances = UNSTREAM_STRING( &constant_bin[ 427167 ], 27, 1 );
    const_str_digest_68245d5f15bf47485ff146574af354be = UNSTREAM_STRING( &constant_bin[ 427194 ], 25, 0 );
    const_str_digest_73d9fcca104b54751f7c9bd72932999f = UNSTREAM_STRING( &constant_bin[ 427219 ], 66, 0 );
    const_str_digest_bb721ce05d55bffe2059468c32a66282 = UNSTREAM_STRING( &constant_bin[ 427285 ], 31, 0 );
    const_str_digest_44921cbadfa08b1ab59d06df623d9903 = UNSTREAM_STRING( &constant_bin[ 427316 ], 25, 0 );
    const_tuple_str_plain_cls_str_plain___class___tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain___class___tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain___class___tuple, 1, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_5b8a45fd77dcecf7df2a583065f13a12 = UNSTREAM_STRING( &constant_bin[ 427341 ], 22, 0 );
    const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef = UNSTREAM_STRING( &constant_bin[ 427293 ], 22, 0 );
    const_str_plain__TzFactory = UNSTREAM_STRING( &constant_bin[ 427363 ], 10, 1 );
    const_str_digest_dbac7fbe2c9b01703d44ec75e23d1a0c = UNSTREAM_STRING( &constant_bin[ 427373 ], 19, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil$tz$_factories( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_aa7eb735ca3050074d811e48e56bc20f;
static PyCodeObject *codeobj_4d4bcf750cb9bc7189dfb9474d194079;
static PyCodeObject *codeobj_55f90361d19fd83c8566be70fb1b90c4;
static PyCodeObject *codeobj_9ced5de9200c224021dc4791ba08f879;
static PyCodeObject *codeobj_123c1a28b72b667cbfc321a2853704d5;
static PyCodeObject *codeobj_5521034314fc567838b31fdc56b193c7;
static PyCodeObject *codeobj_92f52bcf4eb4f55bf07f62b915bb1f11;
static PyCodeObject *codeobj_096303c216db48442c47eb4ae882215e;
static PyCodeObject *codeobj_3e17e370fd1d762dd9d420d14f03536a;
static PyCodeObject *codeobj_7a003d4a9b94d174d256598a48b82237;
static PyCodeObject *codeobj_d8efad4717e1045698f5c6f1cf9ee488;
static PyCodeObject *codeobj_d98646ebde5cced7438136b4c37bc2b7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_73d9fcca104b54751f7c9bd72932999f;
    codeobj_aa7eb735ca3050074d811e48e56bc20f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bb721ce05d55bffe2059468c32a66282, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4d4bcf750cb9bc7189dfb9474d194079 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__TzFactory, 14, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_55f90361d19fd83c8566be70fb1b90c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__TzOffsetFactory, 20, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9ced5de9200c224021dc4791ba08f879 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__TzSingleton, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_123c1a28b72b667cbfc321a2853704d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__TzStrFactory, 37, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5521034314fc567838b31fdc56b193c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 9, const_tuple_str_plain_cls_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_92f52bcf4eb4f55bf07f62b915bb1f11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 24, const_tuple_0334e8465ded628143cc1713185bf5f2_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_096303c216db48442c47eb4ae882215e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 41, const_tuple_3691d2aa7f45688934c331dbb43470f1_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3e17e370fd1d762dd9d420d14f03536a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 5, const_tuple_642c6e046837b34bd42add7d36af734f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_7a003d4a9b94d174d256598a48b82237 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 21, const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d8efad4717e1045698f5c6f1cf9ee488 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 38, const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d98646ebde5cced7438136b4c37bc2b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_instance, 15, const_tuple_str_plain_cls_str_plain_args_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_11_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_2___call__(  );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_3_instance(  );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_5___call__(  );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_7___call__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_dateutil$tz$_factories$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3e17e370fd1d762dd9d420d14f03536a = NULL;

    struct Nuitka_FrameObject *frame_3e17e370fd1d762dd9d420d14f03536a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3e17e370fd1d762dd9d420d14f03536a, codeobj_3e17e370fd1d762dd9d420d14f03536a, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3e17e370fd1d762dd9d420d14f03536a = cache_frame_3e17e370fd1d762dd9d420d14f03536a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3e17e370fd1d762dd9d420d14f03536a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3e17e370fd1d762dd9d420d14f03536a ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_cls;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__TzSingleton__instance, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzSingleton );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TzSingleton );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_TzSingleton" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_cls;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_7_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e17e370fd1d762dd9d420d14f03536a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e17e370fd1d762dd9d420d14f03536a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3e17e370fd1d762dd9d420d14f03536a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3e17e370fd1d762dd9d420d14f03536a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3e17e370fd1d762dd9d420d14f03536a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3e17e370fd1d762dd9d420d14f03536a,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if ( frame_3e17e370fd1d762dd9d420d14f03536a == cache_frame_3e17e370fd1d762dd9d420d14f03536a )
    {
        Py_DECREF( frame_3e17e370fd1d762dd9d420d14f03536a );
    }
    cache_frame_3e17e370fd1d762dd9d420d14f03536a = NULL;

    assertFrameObject( frame_3e17e370fd1d762dd9d420d14f03536a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_1___init__ );
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


static PyObject *impl_dateutil$tz$_factories$$$function_2___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_5521034314fc567838b31fdc56b193c7 = NULL;

    struct Nuitka_FrameObject *frame_5521034314fc567838b31fdc56b193c7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5521034314fc567838b31fdc56b193c7, codeobj_5521034314fc567838b31fdc56b193c7, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *) );
    frame_5521034314fc567838b31fdc56b193c7 = cache_frame_5521034314fc567838b31fdc56b193c7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5521034314fc567838b31fdc56b193c7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5521034314fc567838b31fdc56b193c7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__TzSingleton__instance );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzSingleton );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TzSingleton );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_TzSingleton" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_cls;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_5521034314fc567838b31fdc56b193c7->m_frame.f_lineno = 11;
    tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___call__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_cls;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__TzSingleton__instance, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_2 = par_cls;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__TzSingleton__instance );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5521034314fc567838b31fdc56b193c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5521034314fc567838b31fdc56b193c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5521034314fc567838b31fdc56b193c7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5521034314fc567838b31fdc56b193c7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5521034314fc567838b31fdc56b193c7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5521034314fc567838b31fdc56b193c7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5521034314fc567838b31fdc56b193c7,
        type_description_1,
        par_cls,
        NULL
    );


    // Release cached frame.
    if ( frame_5521034314fc567838b31fdc56b193c7 == cache_frame_5521034314fc567838b31fdc56b193c7 )
    {
        Py_DECREF( frame_5521034314fc567838b31fdc56b193c7 );
    }
    cache_frame_5521034314fc567838b31fdc56b193c7 = NULL;

    assertFrameObject( frame_5521034314fc567838b31fdc56b193c7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_2___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_2___call__ );
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


static PyObject *impl_dateutil$tz$_factories$$$function_3_instance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_d98646ebde5cced7438136b4c37bc2b7 = NULL;

    struct Nuitka_FrameObject *frame_d98646ebde5cced7438136b4c37bc2b7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d98646ebde5cced7438136b4c37bc2b7, codeobj_d98646ebde5cced7438136b4c37bc2b7, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d98646ebde5cced7438136b4c37bc2b7 = cache_frame_d98646ebde5cced7438136b4c37bc2b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d98646ebde5cced7438136b4c37bc2b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d98646ebde5cced7438136b4c37bc2b7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = (PyObject *)&PyType_Type;
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___call__ );
    assert( !(tmp_dircall_arg1_1 == NULL) );
    tmp_tuple_element_1 = par_cls;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    tmp_dircall_arg4_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_11_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d98646ebde5cced7438136b4c37bc2b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d98646ebde5cced7438136b4c37bc2b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d98646ebde5cced7438136b4c37bc2b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d98646ebde5cced7438136b4c37bc2b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d98646ebde5cced7438136b4c37bc2b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d98646ebde5cced7438136b4c37bc2b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d98646ebde5cced7438136b4c37bc2b7,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_d98646ebde5cced7438136b4c37bc2b7 == cache_frame_d98646ebde5cced7438136b4c37bc2b7 )
    {
        Py_DECREF( frame_d98646ebde5cced7438136b4c37bc2b7 );
    }
    cache_frame_d98646ebde5cced7438136b4c37bc2b7 = NULL;

    assertFrameObject( frame_d98646ebde5cced7438136b4c37bc2b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_3_instance );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_3_instance );
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


static PyObject *impl_dateutil$tz$_factories$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_7a003d4a9b94d174d256598a48b82237 = NULL;

    struct Nuitka_FrameObject *frame_7a003d4a9b94d174d256598a48b82237;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a003d4a9b94d174d256598a48b82237, codeobj_7a003d4a9b94d174d256598a48b82237, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7a003d4a9b94d174d256598a48b82237 = cache_frame_7a003d4a9b94d174d256598a48b82237;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a003d4a9b94d174d256598a48b82237 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a003d4a9b94d174d256598a48b82237 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_cls;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__TzOffsetFactory__instances, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a003d4a9b94d174d256598a48b82237 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a003d4a9b94d174d256598a48b82237 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a003d4a9b94d174d256598a48b82237, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a003d4a9b94d174d256598a48b82237->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a003d4a9b94d174d256598a48b82237, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a003d4a9b94d174d256598a48b82237,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_7a003d4a9b94d174d256598a48b82237 == cache_frame_7a003d4a9b94d174d256598a48b82237 )
    {
        Py_DECREF( frame_7a003d4a9b94d174d256598a48b82237 );
    }
    cache_frame_7a003d4a9b94d174d256598a48b82237 = NULL;

    assertFrameObject( frame_7a003d4a9b94d174d256598a48b82237 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_4___init__ );
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


static PyObject *impl_dateutil$tz$_factories$$$function_5___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_offset = python_pars[ 2 ];
    PyObject *var_key = NULL;
    PyObject *var_instance = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_92f52bcf4eb4f55bf07f62b915bb1f11 = NULL;

    struct Nuitka_FrameObject *frame_92f52bcf4eb4f55bf07f62b915bb1f11;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92f52bcf4eb4f55bf07f62b915bb1f11, codeobj_92f52bcf4eb4f55bf07f62b915bb1f11, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_92f52bcf4eb4f55bf07f62b915bb1f11 = cache_frame_92f52bcf4eb4f55bf07f62b915bb1f11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92f52bcf4eb4f55bf07f62b915bb1f11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92f52bcf4eb4f55bf07f62b915bb1f11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_offset;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_tuple_element_1 = par_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_assign_source_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    tmp_called_instance_1 = par_offset;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_92f52bcf4eb4f55bf07f62b915bb1f11->m_frame.f_lineno = 26;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_total_seconds );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        exception_lineno = 26;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
    assert( var_key == NULL );
    var_key = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_tuple_element_2 = par_name;

    CHECK_OBJECT( tmp_tuple_element_2 );
    tmp_assign_source_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_offset;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 1, tmp_tuple_element_2 );
    assert( var_key == NULL );
    var_key = tmp_assign_source_2;

    branch_end_1:;
    tmp_source_name_2 = par_cls;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__TzOffsetFactory__instances );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = Py_None;
    frame_92f52bcf4eb4f55bf07f62b915bb1f11->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_instance == NULL );
    var_instance = tmp_assign_source_3;

    tmp_compare_left_1 = var_instance;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_cls;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__TzOffsetFactory__instances );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setdefault );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_key;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_cls;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_instance );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_name;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_offset;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_92f52bcf4eb4f55bf07f62b915bb1f11->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 33;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_92f52bcf4eb4f55bf07f62b915bb1f11->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_instance;
        var_instance = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_return_value = var_instance;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "instance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92f52bcf4eb4f55bf07f62b915bb1f11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_92f52bcf4eb4f55bf07f62b915bb1f11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92f52bcf4eb4f55bf07f62b915bb1f11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92f52bcf4eb4f55bf07f62b915bb1f11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92f52bcf4eb4f55bf07f62b915bb1f11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92f52bcf4eb4f55bf07f62b915bb1f11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92f52bcf4eb4f55bf07f62b915bb1f11,
        type_description_1,
        par_cls,
        par_name,
        par_offset,
        var_key,
        var_instance
    );


    // Release cached frame.
    if ( frame_92f52bcf4eb4f55bf07f62b915bb1f11 == cache_frame_92f52bcf4eb4f55bf07f62b915bb1f11 )
    {
        Py_DECREF( frame_92f52bcf4eb4f55bf07f62b915bb1f11 );
    }
    cache_frame_92f52bcf4eb4f55bf07f62b915bb1f11 = NULL;

    assertFrameObject( frame_92f52bcf4eb4f55bf07f62b915bb1f11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_5___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_instance );
    var_instance = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_instance );
    var_instance = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_5___call__ );
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


static PyObject *impl_dateutil$tz$_factories$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_d8efad4717e1045698f5c6f1cf9ee488 = NULL;

    struct Nuitka_FrameObject *frame_d8efad4717e1045698f5c6f1cf9ee488;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8efad4717e1045698f5c6f1cf9ee488, codeobj_d8efad4717e1045698f5c6f1cf9ee488, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8efad4717e1045698f5c6f1cf9ee488 = cache_frame_d8efad4717e1045698f5c6f1cf9ee488;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8efad4717e1045698f5c6f1cf9ee488 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8efad4717e1045698f5c6f1cf9ee488 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_cls;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__TzStrFactory__instances, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8efad4717e1045698f5c6f1cf9ee488 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8efad4717e1045698f5c6f1cf9ee488 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8efad4717e1045698f5c6f1cf9ee488, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8efad4717e1045698f5c6f1cf9ee488->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8efad4717e1045698f5c6f1cf9ee488, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8efad4717e1045698f5c6f1cf9ee488,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_d8efad4717e1045698f5c6f1cf9ee488 == cache_frame_d8efad4717e1045698f5c6f1cf9ee488 )
    {
        Py_DECREF( frame_d8efad4717e1045698f5c6f1cf9ee488 );
    }
    cache_frame_d8efad4717e1045698f5c6f1cf9ee488 = NULL;

    assertFrameObject( frame_d8efad4717e1045698f5c6f1cf9ee488 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_6___init__ );
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


static PyObject *impl_dateutil$tz$_factories$$$function_7___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_posix_offset = python_pars[ 2 ];
    PyObject *var_key = NULL;
    PyObject *var_instance = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_096303c216db48442c47eb4ae882215e = NULL;

    struct Nuitka_FrameObject *frame_096303c216db48442c47eb4ae882215e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_tuple_element_1 = par_s;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_assign_source_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_posix_offset;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
    assert( var_key == NULL );
    var_key = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_096303c216db48442c47eb4ae882215e, codeobj_096303c216db48442c47eb4ae882215e, module_dateutil$tz$_factories, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_096303c216db48442c47eb4ae882215e = cache_frame_096303c216db48442c47eb4ae882215e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_096303c216db48442c47eb4ae882215e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_096303c216db48442c47eb4ae882215e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__TzStrFactory__instances );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_key;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = Py_None;
    frame_096303c216db48442c47eb4ae882215e->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_instance == NULL );
    var_instance = tmp_assign_source_2;

    tmp_compare_left_1 = var_instance;

    CHECK_OBJECT( tmp_compare_left_1 );
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
    tmp_source_name_4 = par_cls;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__TzStrFactory__instances );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setdefault );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_key;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_cls;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_instance );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_s;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_posix_offset;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "posix_offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_096303c216db48442c47eb4ae882215e->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 47;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_096303c216db48442c47eb4ae882215e->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_instance;
        var_instance = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_return_value = var_instance;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "instance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_096303c216db48442c47eb4ae882215e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_096303c216db48442c47eb4ae882215e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_096303c216db48442c47eb4ae882215e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_096303c216db48442c47eb4ae882215e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_096303c216db48442c47eb4ae882215e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_096303c216db48442c47eb4ae882215e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_096303c216db48442c47eb4ae882215e,
        type_description_1,
        par_cls,
        par_s,
        par_posix_offset,
        var_key,
        var_instance
    );


    // Release cached frame.
    if ( frame_096303c216db48442c47eb4ae882215e == cache_frame_096303c216db48442c47eb4ae882215e )
    {
        Py_DECREF( frame_096303c216db48442c47eb4ae882215e );
    }
    cache_frame_096303c216db48442c47eb4ae882215e = NULL;

    assertFrameObject( frame_096303c216db48442c47eb4ae882215e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_7___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_posix_offset );
    par_posix_offset = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_instance );
    var_instance = NULL;

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

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_posix_offset );
    par_posix_offset = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_instance );
    var_instance = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories$$$function_7___call__ );
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



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_56e3a11a1d38a7fdd4686bbd4281a43b,
#endif
        codeobj_3e17e370fd1d762dd9d420d14f03536a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_2___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_2___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_b93c8a5aa9d35f94176cf32f5cf87609,
#endif
        codeobj_5521034314fc567838b31fdc56b193c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_3_instance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_3_instance,
        const_str_plain_instance,
#if PYTHON_VERSION >= 300
        const_str_digest_dbac7fbe2c9b01703d44ec75e23d1a0c,
#endif
        codeobj_d98646ebde5cced7438136b4c37bc2b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        const_str_digest_f1e38922065daa66004f1978bd9ac6a0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_44921cbadfa08b1ab59d06df623d9903,
#endif
        codeobj_7a003d4a9b94d174d256598a48b82237,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_5___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_5___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_68245d5f15bf47485ff146574af354be,
#endif
        codeobj_92f52bcf4eb4f55bf07f62b915bb1f11,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_5b8a45fd77dcecf7df2a583065f13a12,
#endif
        codeobj_d8efad4717e1045698f5c6f1cf9ee488,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$tz$_factories$$$function_7___call__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$tz$_factories$$$function_7___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_bff2a4647ac2c28e43e470a68300226f,
#endif
        codeobj_096303c216db48442c47eb4ae882215e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$tz$_factories,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil$tz$_factories =
{
    PyModuleDef_HEAD_INIT,
    "dateutil.tz._factories",   /* m_name */
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

MOD_INIT_DECL( dateutil$tz$_factories )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil$tz$_factories );
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
    puts("dateutil.tz._factories: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.tz._factories: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.tz._factories: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil$tz$_factories" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil$tz$_factories = Py_InitModule4(
        "dateutil.tz._factories",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil$tz$_factories = PyModule_Create( &mdef_dateutil$tz$_factories );
#endif

    moduledict_dateutil$tz$_factories = MODULE_DICT( module_dateutil$tz$_factories );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil$tz$_factories,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$tz$_factories,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$tz$_factories,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil$tz$_factories );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef, module_dateutil$tz$_factories );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    static struct Nuitka_FrameObject *cache_frame_9ced5de9200c224021dc4791ba08f879_2 = NULL;

    struct Nuitka_FrameObject *frame_9ced5de9200c224021dc4791ba08f879_2;

    static struct Nuitka_FrameObject *cache_frame_4d4bcf750cb9bc7189dfb9474d194079_3 = NULL;

    struct Nuitka_FrameObject *frame_4d4bcf750cb9bc7189dfb9474d194079_3;

    static struct Nuitka_FrameObject *cache_frame_55f90361d19fd83c8566be70fb1b90c4_4 = NULL;

    struct Nuitka_FrameObject *frame_55f90361d19fd83c8566be70fb1b90c4_4;

    static struct Nuitka_FrameObject *cache_frame_123c1a28b72b667cbfc321a2853704d5_5 = NULL;

    struct Nuitka_FrameObject *frame_123c1a28b72b667cbfc321a2853704d5_5;

    struct Nuitka_FrameObject *frame_aa7eb735ca3050074d811e48e56bc20f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    PyObject *locals_dateutil$tz$_factories_37 = NULL;
    PyObject *locals_dateutil$tz$_factories_14 = NULL;
    PyObject *locals_dateutil$tz$_factories_20 = NULL;
    PyObject *locals_dateutil$tz$_factories_4 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_73d9fcca104b54751f7c9bd72932999f;
    UPDATE_STRING_DICT0( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_aa7eb735ca3050074d811e48e56bc20f = MAKE_MODULE_FRAME( codeobj_aa7eb735ca3050074d811e48e56bc20f, module_dateutil$tz$_factories );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_aa7eb735ca3050074d811e48e56bc20f );
    assert( Py_REFCNT( frame_aa7eb735ca3050074d811e48e56bc20f ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_dateutil$tz$_factories;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_timedelta_tuple;
    tmp_level_name_1 = const_int_0;
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_timedelta );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_4 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_type_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_5 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_5;

    tmp_assign_source_6 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

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


        exception_lineno = 4;

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


        exception_lineno = 4;

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


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

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
    tmp_assign_source_7 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_7;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

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


        exception_lineno = 4;

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


        exception_lineno = 4;

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


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_tuple_element_1 = const_str_plain__TzSingleton;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 4;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_8 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_8;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_dateutil$tz$_factories_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_4, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain__TzSingleton;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_4, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_9ced5de9200c224021dc4791ba08f879_2, codeobj_9ced5de9200c224021dc4791ba08f879, module_dateutil$tz$_factories, sizeof(void *) );
    frame_9ced5de9200c224021dc4791ba08f879_2 = cache_frame_9ced5de9200c224021dc4791ba08f879_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ced5de9200c224021dc4791ba08f879_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ced5de9200c224021dc4791ba08f879_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_4, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_2___call__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_4, const_str_plain___call__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ced5de9200c224021dc4791ba08f879_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ced5de9200c224021dc4791ba08f879_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ced5de9200c224021dc4791ba08f879_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ced5de9200c224021dc4791ba08f879_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ced5de9200c224021dc4791ba08f879_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ced5de9200c224021dc4791ba08f879_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_9ced5de9200c224021dc4791ba08f879_2 == cache_frame_9ced5de9200c224021dc4791ba08f879_2 )
    {
        Py_DECREF( frame_9ced5de9200c224021dc4791ba08f879_2 );
    }
    cache_frame_9ced5de9200c224021dc4791ba08f879_2 = NULL;

    assertFrameObject( frame_9ced5de9200c224021dc4791ba08f879_2 );

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
    tmp_compare_right_1 = const_tuple_type_type_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

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
    tmp_dictset_value = const_tuple_type_type_tuple;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_4, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain__TzSingleton;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dateutil$tz$_factories_4;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 4;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_10;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_dateutil$tz$_factories_4 );
    locals_dateutil$tz$_factories_4 = NULL;
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

    Py_DECREF( locals_dateutil$tz$_factories_4 );
    locals_dateutil$tz$_factories_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
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
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 4;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_9 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzSingleton, tmp_assign_source_9 );
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

    // Tried code:
    tmp_dircall_arg1_2 = const_tuple_type_type_tuple;
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_11 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_12;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
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
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
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
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_13;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    branch_no_3:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    tmp_tuple_element_3 = const_str_plain__TzFactory;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 14;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_14 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_14;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_dateutil$tz$_factories_14 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_14, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_6;
    }
    tmp_dictset_value = const_str_plain__TzFactory;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_14, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_6;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_4d4bcf750cb9bc7189dfb9474d194079_3, codeobj_4d4bcf750cb9bc7189dfb9474d194079, module_dateutil$tz$_factories, sizeof(void *) );
    frame_4d4bcf750cb9bc7189dfb9474d194079_3 = cache_frame_4d4bcf750cb9bc7189dfb9474d194079_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d4bcf750cb9bc7189dfb9474d194079_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d4bcf750cb9bc7189dfb9474d194079_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_3_instance(  );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_14, const_str_plain_instance, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d4bcf750cb9bc7189dfb9474d194079_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d4bcf750cb9bc7189dfb9474d194079_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d4bcf750cb9bc7189dfb9474d194079_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d4bcf750cb9bc7189dfb9474d194079_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d4bcf750cb9bc7189dfb9474d194079_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d4bcf750cb9bc7189dfb9474d194079_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_4d4bcf750cb9bc7189dfb9474d194079_3 == cache_frame_4d4bcf750cb9bc7189dfb9474d194079_3 )
    {
        Py_DECREF( frame_4d4bcf750cb9bc7189dfb9474d194079_3 );
    }
    cache_frame_4d4bcf750cb9bc7189dfb9474d194079_3 = NULL;

    assertFrameObject( frame_4d4bcf750cb9bc7189dfb9474d194079_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_6;
    skip_nested_handling_2:;
    tmp_compare_left_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_tuple_type_type_tuple;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_6;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictset_value = const_tuple_type_type_tuple;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_14, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_6;
    }
    branch_no_4:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_4 = const_str_plain__TzFactory;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_dateutil$tz$_factories_14;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 14;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_16;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_dateutil$tz$_factories_14 );
    locals_dateutil$tz$_factories_14 = NULL;
    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_dateutil$tz$_factories_14 );
    locals_dateutil$tz$_factories_14 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 14;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_15 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzFactory, tmp_assign_source_15 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzFactory );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TzFactory );
    }

    if ( tmp_tuple_element_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_TzFactory" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto try_except_handler_7;
    }

    tmp_assign_source_17 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_17;

    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_18 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_18;

    tmp_assign_source_19 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_19;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_20;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    branch_no_5:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    tmp_tuple_element_6 = const_str_plain__TzOffsetFactory;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 20;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_21 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_21;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_dateutil$tz$_factories_20 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_20, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_plain__TzOffsetFactory;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_20, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_9;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_55f90361d19fd83c8566be70fb1b90c4_4, codeobj_55f90361d19fd83c8566be70fb1b90c4, module_dateutil$tz$_factories, sizeof(void *) );
    frame_55f90361d19fd83c8566be70fb1b90c4_4 = cache_frame_55f90361d19fd83c8566be70fb1b90c4_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_55f90361d19fd83c8566be70fb1b90c4_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_55f90361d19fd83c8566be70fb1b90c4_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_4___init__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_20, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_5___call__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_20, const_str_plain___call__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55f90361d19fd83c8566be70fb1b90c4_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_55f90361d19fd83c8566be70fb1b90c4_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55f90361d19fd83c8566be70fb1b90c4_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55f90361d19fd83c8566be70fb1b90c4_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55f90361d19fd83c8566be70fb1b90c4_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_55f90361d19fd83c8566be70fb1b90c4_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_55f90361d19fd83c8566be70fb1b90c4_4 == cache_frame_55f90361d19fd83c8566be70fb1b90c4_4 )
    {
        Py_DECREF( frame_55f90361d19fd83c8566be70fb1b90c4_4 );
    }
    cache_frame_55f90361d19fd83c8566be70fb1b90c4_4 = NULL;

    assertFrameObject( frame_55f90361d19fd83c8566be70fb1b90c4_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_9;
    skip_nested_handling_3:;
    tmp_compare_left_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_9;
    }
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictset_value = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_20, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_9;
    }
    branch_no_6:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_7 = const_str_plain__TzOffsetFactory;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_dateutil$tz$_factories_20;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_7 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 20;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_9;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_23;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_dateutil$tz$_factories_20 );
    locals_dateutil$tz$_factories_20 = NULL;
    goto try_return_handler_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_dateutil$tz$_factories_20 );
    locals_dateutil$tz$_factories_20 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 20;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_22 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzOffsetFactory, tmp_assign_source_22 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzFactory );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__TzFactory );
    }

    if ( tmp_tuple_element_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_TzFactory" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;

        goto try_except_handler_10;
    }

    tmp_assign_source_24 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_8 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_24;

    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_25 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_25;

    tmp_assign_source_26 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_26;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_cond_value_11 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_27;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    branch_no_7:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    tmp_tuple_element_9 = const_str_plain__TzStrFactory;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_9 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_9 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 37;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_10;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_28 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_28;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_dateutil$tz$_factories_37 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_63d62f9ec2f1bf16d32b388969c9b5ef;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_37, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain__TzStrFactory;
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_37, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_12;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_123c1a28b72b667cbfc321a2853704d5_5, codeobj_123c1a28b72b667cbfc321a2853704d5, module_dateutil$tz$_factories, sizeof(void *) );
    frame_123c1a28b72b667cbfc321a2853704d5_5 = cache_frame_123c1a28b72b667cbfc321a2853704d5_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_123c1a28b72b667cbfc321a2853704d5_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_123c1a28b72b667cbfc321a2853704d5_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_6___init__(  );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_37, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_dateutil$tz$_factories$$$function_7___call__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_37, const_str_plain___call__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123c1a28b72b667cbfc321a2853704d5_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123c1a28b72b667cbfc321a2853704d5_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_123c1a28b72b667cbfc321a2853704d5_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_123c1a28b72b667cbfc321a2853704d5_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_123c1a28b72b667cbfc321a2853704d5_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_123c1a28b72b667cbfc321a2853704d5_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_123c1a28b72b667cbfc321a2853704d5_5 == cache_frame_123c1a28b72b667cbfc321a2853704d5_5 )
    {
        Py_DECREF( frame_123c1a28b72b667cbfc321a2853704d5_5 );
    }
    cache_frame_123c1a28b72b667cbfc321a2853704d5_5 = NULL;

    assertFrameObject( frame_123c1a28b72b667cbfc321a2853704d5_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_12;
    skip_nested_handling_4:;
    tmp_compare_left_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_12;
    }
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictset_value = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_dateutil$tz$_factories_37, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_12;
    }
    branch_no_8:;
    tmp_called_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_10 = const_str_plain__TzStrFactory;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = locals_dateutil$tz$_factories_37;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_10 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_aa7eb735ca3050074d811e48e56bc20f->m_frame.f_lineno = 37;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_12;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_30;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_dateutil$tz$_factories_37 );
    locals_dateutil$tz$_factories_37 = NULL;
    goto try_return_handler_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_dateutil$tz$_factories_37 );
    locals_dateutil$tz$_factories_37 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$tz$_factories );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 37;
    goto try_except_handler_10;
    outline_result_4:;
    tmp_assign_source_29 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_dateutil$tz$_factories, (Nuitka_StringObject *)const_str_plain__TzStrFactory, tmp_assign_source_29 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa7eb735ca3050074d811e48e56bc20f );
#endif
    popFrameStack();

    assertFrameObject( frame_aa7eb735ca3050074d811e48e56bc20f );

    goto frame_no_exception_5;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa7eb735ca3050074d811e48e56bc20f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa7eb735ca3050074d811e48e56bc20f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa7eb735ca3050074d811e48e56bc20f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa7eb735ca3050074d811e48e56bc20f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;


    return MOD_RETURN_VALUE( module_dateutil$tz$_factories );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
