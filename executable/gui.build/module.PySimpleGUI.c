/* Generated code for Python source for module 'PySimpleGUI'
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

/* The _module_PySimpleGUI is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PySimpleGUI;
PyDictObject *moduledict_PySimpleGUI;

/* The module constants used, if any. */
static PyObject *const_str_digest_8fbbf1f5d2d8c93e6fb532de83ef837e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_091c736a257bb4b964b91e505cf58fd8;
static PyObject *const_str_digest_3b1fc21235eefe0f72a394d5cc11f618;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_0c8c4dea7bf28b61a53e0a4b7d7af837;
static PyObject *const_list_str_digest_3b1fc21235eefe0f72a394d5cc11f618_list;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_PySimpleGUI;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8fbbf1f5d2d8c93e6fb532de83ef837e = UNSTREAM_STRING( &constant_bin[ 0 ], 20, 0 );
    const_str_digest_3b1fc21235eefe0f72a394d5cc11f618 = UNSTREAM_STRING( &constant_bin[ 20 ], 52, 0 );
    const_str_digest_0c8c4dea7bf28b61a53e0a4b7d7af837 = UNSTREAM_STRING( &constant_bin[ 72 ], 64, 0 );
    const_list_str_digest_3b1fc21235eefe0f72a394d5cc11f618_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_3b1fc21235eefe0f72a394d5cc11f618_list, 0, const_str_digest_3b1fc21235eefe0f72a394d5cc11f618 ); Py_INCREF( const_str_digest_3b1fc21235eefe0f72a394d5cc11f618 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_PySimpleGUI( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f587dfd8d5e4abd1cd50122ad5cf8482;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0c8c4dea7bf28b61a53e0a4b7d7af837;
    codeobj_f587dfd8d5e4abd1cd50122ad5cf8482 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8fbbf1f5d2d8c93e6fb532de83ef837e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PySimpleGUI =
{
    PyModuleDef_HEAD_INIT,
    "PySimpleGUI",   /* m_name */
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

MOD_INIT_DECL( PySimpleGUI )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PySimpleGUI );
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
    puts("PySimpleGUI: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PySimpleGUI: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("PySimpleGUI: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initPySimpleGUI" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PySimpleGUI = Py_InitModule4(
        "PySimpleGUI",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_PySimpleGUI = PyModule_Create( &mdef_PySimpleGUI );
#endif

    moduledict_PySimpleGUI = MODULE_DICT( module_PySimpleGUI );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_PySimpleGUI,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_PySimpleGUI,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_PySimpleGUI,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_PySimpleGUI );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_PySimpleGUI, module_PySimpleGUI );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_f587dfd8d5e4abd1cd50122ad5cf8482;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0c8c4dea7bf28b61a53e0a4b7d7af837;
    UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_3b1fc21235eefe0f72a394d5cc11f618_list );
    UPDATE_STRING_DICT1( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_PySimpleGUI;
    UPDATE_STRING_DICT0( moduledict_PySimpleGUI, (Nuitka_StringObject *)const_str_plain_name, tmp_assign_source_5 );
    // Frame without reuse.
    frame_f587dfd8d5e4abd1cd50122ad5cf8482 = MAKE_MODULE_FRAME( codeobj_f587dfd8d5e4abd1cd50122ad5cf8482, module_PySimpleGUI );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f587dfd8d5e4abd1cd50122ad5cf8482 );
    assert( Py_REFCNT( frame_f587dfd8d5e4abd1cd50122ad5cf8482 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_091c736a257bb4b964b91e505cf58fd8;
    tmp_globals_name_1 = (PyObject *)moduledict_PySimpleGUI;
    tmp_locals_name_1 = (PyObject *)moduledict_PySimpleGUI;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    tmp_level_name_1 = const_int_0;
    frame_f587dfd8d5e4abd1cd50122ad5cf8482->m_frame.f_lineno = 2;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_PySimpleGUI, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f587dfd8d5e4abd1cd50122ad5cf8482 );
#endif
    popFrameStack();

    assertFrameObject( frame_f587dfd8d5e4abd1cd50122ad5cf8482 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f587dfd8d5e4abd1cd50122ad5cf8482 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f587dfd8d5e4abd1cd50122ad5cf8482, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f587dfd8d5e4abd1cd50122ad5cf8482->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f587dfd8d5e4abd1cd50122ad5cf8482, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_PySimpleGUI );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
