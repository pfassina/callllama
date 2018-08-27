/* Generated code for Python source for module 'tzlocal'
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

/* The _module_tzlocal is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tzlocal;
PyDictObject *moduledict_tzlocal;

/* The module constants used, if any. */
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_c30010d6fe5bab0dc6f25d3c7a0f7abb;
extern PyObject *const_int_0;
static PyObject *const_list_str_digest_cb487ad38476fdba9fc05f075351a786_list;
extern PyObject *const_str_plain_get_localzone;
static PyObject *const_tuple_str_plain_get_localzone_str_plain_reload_localzone_tuple;
extern PyObject *const_str_digest_d6ba28a0ef7f7a9cb2775a2c19e165be;
extern PyObject *const_str_plain_reload_localzone;
extern PyObject *const_str_plain_tzlocal;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_66f5623ac7db1a0c3981d6c828a79da5;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_be7f2be1426af112caf105988faa14a3;
static PyObject *const_str_digest_cb487ad38476fdba9fc05f075351a786;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_cb487ad38476fdba9fc05f075351a786_list = PyList_New( 1 );
    const_str_digest_cb487ad38476fdba9fc05f075351a786 = UNSTREAM_STRING( &constant_bin[ 837929 ], 48, 0 );
    PyList_SET_ITEM( const_list_str_digest_cb487ad38476fdba9fc05f075351a786_list, 0, const_str_digest_cb487ad38476fdba9fc05f075351a786 ); Py_INCREF( const_str_digest_cb487ad38476fdba9fc05f075351a786 );
    const_tuple_str_plain_get_localzone_str_plain_reload_localzone_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_localzone_str_plain_reload_localzone_tuple, 0, const_str_plain_get_localzone ); Py_INCREF( const_str_plain_get_localzone );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_localzone_str_plain_reload_localzone_tuple, 1, const_str_plain_reload_localzone ); Py_INCREF( const_str_plain_reload_localzone );
    const_str_digest_66f5623ac7db1a0c3981d6c828a79da5 = UNSTREAM_STRING( &constant_bin[ 837977 ], 16, 0 );
    const_str_digest_be7f2be1426af112caf105988faa14a3 = UNSTREAM_STRING( &constant_bin[ 837993 ], 60, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tzlocal( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_733ea8ee915c311ca934885bb8d6dedf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_be7f2be1426af112caf105988faa14a3;
    codeobj_733ea8ee915c311ca934885bb8d6dedf = MAKE_CODEOBJ( module_filename_obj, const_str_digest_66f5623ac7db1a0c3981d6c828a79da5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tzlocal =
{
    PyModuleDef_HEAD_INIT,
    "tzlocal",   /* m_name */
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

MOD_INIT_DECL( tzlocal )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tzlocal );
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
    puts("tzlocal: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tzlocal: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tzlocal: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittzlocal" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tzlocal = Py_InitModule4(
        "tzlocal",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_tzlocal = PyModule_Create( &mdef_tzlocal );
#endif

    moduledict_tzlocal = MODULE_DICT( module_tzlocal );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_tzlocal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_tzlocal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_tzlocal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_tzlocal );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_tzlocal, module_tzlocal );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_733ea8ee915c311ca934885bb8d6dedf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_be7f2be1426af112caf105988faa14a3;
    UPDATE_STRING_DICT0( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_cb487ad38476fdba9fc05f075351a786_list );
    UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_tzlocal;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_5 == NULL) );
    UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_733ea8ee915c311ca934885bb8d6dedf = MAKE_MODULE_FRAME( codeobj_733ea8ee915c311ca934885bb8d6dedf, module_tzlocal );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_733ea8ee915c311ca934885bb8d6dedf );
    assert( Py_REFCNT( frame_733ea8ee915c311ca934885bb8d6dedf ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_win32;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

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
    tmp_name_name_2 = const_str_digest_c30010d6fe5bab0dc6f25d3c7a0f7abb;
    tmp_globals_name_2 = (PyObject *)moduledict_tzlocal;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_get_localzone_str_plain_reload_localzone_tuple;
    tmp_level_name_2 = const_int_0;
    frame_733ea8ee915c311ca934885bb8d6dedf->m_frame.f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_get_localzone );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain_get_localzone, tmp_assign_source_7 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_reload_localzone );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain_reload_localzone, tmp_assign_source_8 );
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

    goto branch_end_1;
    branch_no_1:;
    tmp_name_name_3 = const_str_digest_d6ba28a0ef7f7a9cb2775a2c19e165be;
    tmp_globals_name_3 = (PyObject *)moduledict_tzlocal;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_get_localzone_str_plain_reload_localzone_tuple;
    tmp_level_name_3 = const_int_0;
    frame_733ea8ee915c311ca934885bb8d6dedf->m_frame.f_lineno = 5;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_get_localzone );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain_get_localzone, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_reload_localzone );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tzlocal, (Nuitka_StringObject *)const_str_plain_reload_localzone, tmp_assign_source_11 );
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

    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_733ea8ee915c311ca934885bb8d6dedf );
#endif
    popFrameStack();

    assertFrameObject( frame_733ea8ee915c311ca934885bb8d6dedf );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_733ea8ee915c311ca934885bb8d6dedf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_733ea8ee915c311ca934885bb8d6dedf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_733ea8ee915c311ca934885bb8d6dedf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_733ea8ee915c311ca934885bb8d6dedf, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_tzlocal );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
