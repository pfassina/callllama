/* Generated code for Python source for module 'certifi'
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

/* The _module_certifi is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_certifi;
PyDictObject *moduledict_certifi;

/* The module constants used, if any. */
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_e04ad88af98ea9050a0c4068dc3e030b_list;
static PyObject *const_tuple_str_plain_where_str_plain_old_where_tuple;
static PyObject *const_str_digest_e25a61496a89bcf8001610cfa22dd162;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_core;
static PyObject *const_str_digest_e3372279ac622bcc524449ecfa1e730a;
static PyObject *const_str_digest_e04ad88af98ea9050a0c4068dc3e030b;
extern PyObject *const_str_plain_certifi;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_5e67b9b4757ba8ed97d2c41596872ff0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_old_where;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_e04ad88af98ea9050a0c4068dc3e030b_list = PyList_New( 1 );
    const_str_digest_e04ad88af98ea9050a0c4068dc3e030b = UNSTREAM_STRING( &constant_bin[ 62359 ], 48, 0 );
    PyList_SET_ITEM( const_list_str_digest_e04ad88af98ea9050a0c4068dc3e030b_list, 0, const_str_digest_e04ad88af98ea9050a0c4068dc3e030b ); Py_INCREF( const_str_digest_e04ad88af98ea9050a0c4068dc3e030b );
    const_tuple_str_plain_where_str_plain_old_where_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_where_str_plain_old_where_tuple, 0, const_str_plain_where ); Py_INCREF( const_str_plain_where );
    PyTuple_SET_ITEM( const_tuple_str_plain_where_str_plain_old_where_tuple, 1, const_str_plain_old_where ); Py_INCREF( const_str_plain_old_where );
    const_str_digest_e25a61496a89bcf8001610cfa22dd162 = UNSTREAM_STRING( &constant_bin[ 62407 ], 60, 0 );
    const_str_digest_e3372279ac622bcc524449ecfa1e730a = UNSTREAM_STRING( &constant_bin[ 62467 ], 16, 0 );
    const_str_digest_5e67b9b4757ba8ed97d2c41596872ff0 = UNSTREAM_STRING( &constant_bin[ 62483 ], 10, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_certifi( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_65a6d03b1a88d5874d8c08b772b8e5d4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e25a61496a89bcf8001610cfa22dd162;
    codeobj_65a6d03b1a88d5874d8c08b772b8e5d4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e3372279ac622bcc524449ecfa1e730a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_certifi =
{
    PyModuleDef_HEAD_INIT,
    "certifi",   /* m_name */
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

MOD_INIT_DECL( certifi )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_certifi );
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
    puts("certifi: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("certifi: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("certifi: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcertifi" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_certifi = Py_InitModule4(
        "certifi",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_certifi = PyModule_Create( &mdef_certifi );
#endif

    moduledict_certifi = MODULE_DICT( module_certifi );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_certifi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_certifi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_certifi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_certifi );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_certifi, module_certifi );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_65a6d03b1a88d5874d8c08b772b8e5d4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e25a61496a89bcf8001610cfa22dd162;
    UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e04ad88af98ea9050a0c4068dc3e030b_list );
    UPDATE_STRING_DICT1( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_65a6d03b1a88d5874d8c08b772b8e5d4 = MAKE_MODULE_FRAME( codeobj_65a6d03b1a88d5874d8c08b772b8e5d4, module_certifi );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_65a6d03b1a88d5874d8c08b772b8e5d4 );
    assert( Py_REFCNT( frame_65a6d03b1a88d5874d8c08b772b8e5d4 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_core;
    tmp_globals_name_1 = (PyObject *)moduledict_certifi;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_where_str_plain_old_where_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_65a6d03b1a88d5874d8c08b772b8e5d4->m_frame.f_lineno = 1;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_where,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_where );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_certifi, (Nuitka_StringObject *)const_str_plain_where, tmp_assign_source_6 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_old_where,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_old_where );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_certifi, (Nuitka_StringObject *)const_str_plain_old_where, tmp_assign_source_7 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_65a6d03b1a88d5874d8c08b772b8e5d4 );
#endif
    popFrameStack();

    assertFrameObject( frame_65a6d03b1a88d5874d8c08b772b8e5d4 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_65a6d03b1a88d5874d8c08b772b8e5d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_65a6d03b1a88d5874d8c08b772b8e5d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_65a6d03b1a88d5874d8c08b772b8e5d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_65a6d03b1a88d5874d8c08b772b8e5d4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_8 = const_str_digest_5e67b9b4757ba8ed97d2c41596872ff0;
    UPDATE_STRING_DICT0( moduledict_certifi, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_certifi );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
