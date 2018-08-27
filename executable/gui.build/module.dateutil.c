/* Generated code for Python source for module 'dateutil'
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

/* The _module_dateutil is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil;
PyDictObject *moduledict_dateutil;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_version_tuple;
static PyObject *const_str_digest_db6dd094e081de2c0b3ab718e5b5d724;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_unknown;
extern PyObject *const_str_plain_zoneinfo;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__version;
static PyObject *const_str_digest_c00f2344c27aa00a24350d8815015841;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_tz;
static PyObject *const_str_digest_72b119a83dc5f6ef580ea7d2d34161d6;
extern PyObject *const_str_plain_easter;
extern PyObject *const_str_plain_relativedelta;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_dateutil;
extern PyObject *const_str_plain_version;
static PyObject *const_list_08eaa8b549f7d9a54cd56ad02c637732_list;
extern PyObject *const_str_plain_rrule;
extern PyObject *const_str_plain_utils;
static PyObject *const_list_str_digest_c00f2344c27aa00a24350d8815015841_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_parser;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_version_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_version_tuple, 0, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    const_str_digest_db6dd094e081de2c0b3ab718e5b5d724 = UNSTREAM_STRING( &constant_bin[ 375953 ], 17, 0 );
    const_str_plain__version = UNSTREAM_STRING( &constant_bin[ 375970 ], 8, 1 );
    const_str_digest_c00f2344c27aa00a24350d8815015841 = UNSTREAM_STRING( &constant_bin[ 375978 ], 49, 0 );
    const_str_digest_72b119a83dc5f6ef580ea7d2d34161d6 = UNSTREAM_STRING( &constant_bin[ 376027 ], 61, 0 );
    const_list_08eaa8b549f7d9a54cd56ad02c637732_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 0, const_str_plain_easter ); Py_INCREF( const_str_plain_easter );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 1, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 2, const_str_plain_relativedelta ); Py_INCREF( const_str_plain_relativedelta );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 3, const_str_plain_rrule ); Py_INCREF( const_str_plain_rrule );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 4, const_str_plain_tz ); Py_INCREF( const_str_plain_tz );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 5, const_str_plain_utils ); Py_INCREF( const_str_plain_utils );
    PyList_SET_ITEM( const_list_08eaa8b549f7d9a54cd56ad02c637732_list, 6, const_str_plain_zoneinfo ); Py_INCREF( const_str_plain_zoneinfo );
    const_list_str_digest_c00f2344c27aa00a24350d8815015841_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_c00f2344c27aa00a24350d8815015841_list, 0, const_str_digest_c00f2344c27aa00a24350d8815015841 ); Py_INCREF( const_str_digest_c00f2344c27aa00a24350d8815015841 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0290766c51da46023767030a8cc243e2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_72b119a83dc5f6ef580ea7d2d34161d6;
    codeobj_0290766c51da46023767030a8cc243e2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_db6dd094e081de2c0b3ab718e5b5d724, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil =
{
    PyModuleDef_HEAD_INIT,
    "dateutil",   /* m_name */
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

MOD_INIT_DECL( dateutil )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil );
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
    puts("dateutil: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil = Py_InitModule4(
        "dateutil",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil = PyModule_Create( &mdef_dateutil );
#endif

    moduledict_dateutil = MODULE_DICT( module_dateutil );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_dateutil, module_dateutil );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_0290766c51da46023767030a8cc243e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_72b119a83dc5f6ef580ea7d2d34161d6;
    UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_c00f2344c27aa00a24350d8815015841_list );
    UPDATE_STRING_DICT1( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_0290766c51da46023767030a8cc243e2 = MAKE_MODULE_FRAME( codeobj_0290766c51da46023767030a8cc243e2, module_dateutil );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0290766c51da46023767030a8cc243e2 );
    assert( Py_REFCNT( frame_0290766c51da46023767030a8cc243e2 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_name_name_1 = const_str_plain__version;
    tmp_globals_name_1 = (PyObject *)moduledict_dateutil;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_version_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_0290766c51da46023767030a8cc243e2->m_frame.f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_version,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_5 );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0290766c51da46023767030a8cc243e2, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0290766c51da46023767030a8cc243e2, exception_keeper_lineno_1 );
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


        exception_lineno = 4;

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
    tmp_assign_source_6 = const_str_plain_unknown;
    UPDATE_STRING_DICT0( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 2;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0290766c51da46023767030a8cc243e2->m_frame) frame_0290766c51da46023767030a8cc243e2->m_frame.f_lineno = exception_tb->tb_lineno;

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
    NUITKA_CANNOT_GET_HERE( dateutil );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0290766c51da46023767030a8cc243e2 );
#endif
    popFrameStack();

    assertFrameObject( frame_0290766c51da46023767030a8cc243e2 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0290766c51da46023767030a8cc243e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0290766c51da46023767030a8cc243e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0290766c51da46023767030a8cc243e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0290766c51da46023767030a8cc243e2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_7 = LIST_COPY( const_list_08eaa8b549f7d9a54cd56ad02c637732_list );
    UPDATE_STRING_DICT1( moduledict_dateutil, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_dateutil );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
