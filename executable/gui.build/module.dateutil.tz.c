/* Generated code for Python source for module 'dateutil.tz'
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

/* The _module_dateutil$tz is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil$tz;
PyDictObject *moduledict_dateutil$tz;

/* The module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_resolve_imaginary;
extern PyObject *const_str_plain_tzrange;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain_tzutc;
extern PyObject *const_str_digest_46acce0f8756bcf0f2cbb18bcacb9bef;
static PyObject *const_list_f3f15841d2ec477133d346fda4ce7574_list;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_b7fc2a88b94c6c8f27cc9da61cca081e;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_269a6170835a82a4c910f4f577a8e808;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_datetime_ambiguous;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_tz;
extern PyObject *const_str_plain_tzstr;
extern PyObject *const_str_plain_tzwin;
extern PyObject *const_str_plain_tzical;
extern PyObject *const_str_plain_enfold;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_tzlocal;
extern PyObject *const_str_plain_UTC;
extern PyObject *const_str_plain_datetime_exists;
static PyObject *const_list_str_digest_269a6170835a82a4c910f4f577a8e808_list;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_tzfile;
static PyObject *const_str_digest_6cc78db31a61f6feba4c8a97f40f529e;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain___doc___tuple;
extern PyObject *const_str_plain_tzoffset;
extern PyObject *const_str_plain_tzwinlocal;
static PyObject *const_str_digest_3cff3e1a731368137fcd719cdfac22aa;
extern PyObject *const_str_plain_DeprecatedTzFormatWarning;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_gettz;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_f3f15841d2ec477133d346fda4ce7574_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 0, const_str_plain_tzutc ); Py_INCREF( const_str_plain_tzutc );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 1, const_str_plain_tzoffset ); Py_INCREF( const_str_plain_tzoffset );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 2, const_str_plain_tzlocal ); Py_INCREF( const_str_plain_tzlocal );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 3, const_str_plain_tzfile ); Py_INCREF( const_str_plain_tzfile );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 4, const_str_plain_tzrange ); Py_INCREF( const_str_plain_tzrange );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 5, const_str_plain_tzstr ); Py_INCREF( const_str_plain_tzstr );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 6, const_str_plain_tzical ); Py_INCREF( const_str_plain_tzical );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 7, const_str_plain_tzwin ); Py_INCREF( const_str_plain_tzwin );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 8, const_str_plain_tzwinlocal ); Py_INCREF( const_str_plain_tzwinlocal );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 9, const_str_plain_gettz ); Py_INCREF( const_str_plain_gettz );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 10, const_str_plain_enfold ); Py_INCREF( const_str_plain_enfold );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 11, const_str_plain_datetime_ambiguous ); Py_INCREF( const_str_plain_datetime_ambiguous );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 12, const_str_plain_datetime_exists ); Py_INCREF( const_str_plain_datetime_exists );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 13, const_str_plain_resolve_imaginary ); Py_INCREF( const_str_plain_resolve_imaginary );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 14, const_str_plain_UTC ); Py_INCREF( const_str_plain_UTC );
    PyList_SET_ITEM( const_list_f3f15841d2ec477133d346fda4ce7574_list, 15, const_str_plain_DeprecatedTzFormatWarning ); Py_INCREF( const_str_plain_DeprecatedTzFormatWarning );
    const_str_digest_b7fc2a88b94c6c8f27cc9da61cca081e = UNSTREAM_STRING( &constant_bin[ 421508 ], 66, 0 );
    const_str_digest_269a6170835a82a4c910f4f577a8e808 = UNSTREAM_STRING( &constant_bin[ 421574 ], 52, 0 );
    const_list_str_digest_269a6170835a82a4c910f4f577a8e808_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_269a6170835a82a4c910f4f577a8e808_list, 0, const_str_digest_269a6170835a82a4c910f4f577a8e808 ); Py_INCREF( const_str_digest_269a6170835a82a4c910f4f577a8e808 );
    const_str_digest_6cc78db31a61f6feba4c8a97f40f529e = UNSTREAM_STRING( &constant_bin[ 421626 ], 64, 0 );
    const_str_digest_3cff3e1a731368137fcd719cdfac22aa = UNSTREAM_STRING( &constant_bin[ 421690 ], 20, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil$tz( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_88b7b10f685b898854c15f9ae6dec373;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6cc78db31a61f6feba4c8a97f40f529e;
    codeobj_88b7b10f685b898854c15f9ae6dec373 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3cff3e1a731368137fcd719cdfac22aa, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil$tz =
{
    PyModuleDef_HEAD_INIT,
    "dateutil.tz",   /* m_name */
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

MOD_INIT_DECL( dateutil$tz )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil$tz );
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
    puts("dateutil.tz: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.tz: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.tz: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil$tz" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil$tz = Py_InitModule4(
        "dateutil.tz",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil$tz = PyModule_Create( &mdef_dateutil$tz );
#endif

    moduledict_dateutil$tz = MODULE_DICT( module_dateutil$tz );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil$tz,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$tz,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$tz,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil$tz );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_46acce0f8756bcf0f2cbb18bcacb9bef, module_dateutil$tz );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
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
    PyObject *tmp_star_imported_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_88b7b10f685b898854c15f9ae6dec373;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_dateutil$tz_16 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6cc78db31a61f6feba4c8a97f40f529e;
    UPDATE_STRING_DICT0( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_269a6170835a82a4c910f4f577a8e808_list );
    UPDATE_STRING_DICT1( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_88b7b10f685b898854c15f9ae6dec373 = MAKE_MODULE_FRAME( codeobj_88b7b10f685b898854c15f9ae6dec373, module_dateutil$tz );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_88b7b10f685b898854c15f9ae6dec373 );
    assert( Py_REFCNT( frame_88b7b10f685b898854c15f9ae6dec373 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_tz;
    tmp_globals_name_1 = (PyObject *)moduledict_dateutil$tz;
    tmp_locals_name_1 = (PyObject *)moduledict_dateutil$tz;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_88b7b10f685b898854c15f9ae6dec373->m_frame.f_lineno = 2;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_dateutil$tz, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_name_name_2 = const_str_plain_tz;
    tmp_globals_name_2 = (PyObject *)moduledict_dateutil$tz;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain___doc___tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_88b7b10f685b898854c15f9ae6dec373->m_frame.f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain___doc__,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___doc__ );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_5 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain_tzutc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tzutc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tzutc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    frame_88b7b10f685b898854c15f9ae6dec373->m_frame.f_lineno = 8;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain_UTC, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_f3f15841d2ec477133d346fda4ce7574_list );
    UPDATE_STRING_DICT1( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    // Tried code:
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;

        goto try_except_handler_1;
    }

    tmp_assign_source_8 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
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


        exception_lineno = 16;

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


        exception_lineno = 16;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

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


        exception_lineno = 16;

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


        exception_lineno = 16;

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


        exception_lineno = 16;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

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


        exception_lineno = 16;

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


        exception_lineno = 16;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

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


        exception_lineno = 16;

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


        exception_lineno = 16;

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
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_1;
    }
    tmp_tuple_element_2 = const_str_plain_DeprecatedTzFormatWarning;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_88b7b10f685b898854c15f9ae6dec373->m_frame.f_lineno = 16;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

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
    locals_dateutil$tz_16 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_46acce0f8756bcf0f2cbb18bcacb9bef;
    tmp_res = PyObject_SetItem( locals_dateutil$tz_16, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_digest_b7fc2a88b94c6c8f27cc9da61cca081e;
    tmp_res = PyObject_SetItem( locals_dateutil$tz_16, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_DeprecatedTzFormatWarning;
    tmp_res = PyObject_SetItem( locals_dateutil$tz_16, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

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
    tmp_dictset_value = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_dateutil$tz_16, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_tuple_element_3 = const_str_plain_DeprecatedTzFormatWarning;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_dateutil$tz_16;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_88b7b10f685b898854c15f9ae6dec373->m_frame.f_lineno = 16;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_14;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_dateutil$tz_16 );
    locals_dateutil$tz_16 = NULL;
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

    Py_DECREF( locals_dateutil$tz_16 );
    locals_dateutil$tz_16 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$tz );
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
    NUITKA_CANNOT_GET_HERE( dateutil$tz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 16;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_dateutil$tz, (Nuitka_StringObject *)const_str_plain_DeprecatedTzFormatWarning, tmp_assign_source_13 );
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
    RESTORE_FRAME_EXCEPTION( frame_88b7b10f685b898854c15f9ae6dec373 );
#endif
    popFrameStack();

    assertFrameObject( frame_88b7b10f685b898854c15f9ae6dec373 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88b7b10f685b898854c15f9ae6dec373 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88b7b10f685b898854c15f9ae6dec373, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88b7b10f685b898854c15f9ae6dec373->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88b7b10f685b898854c15f9ae6dec373, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
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


    return MOD_RETURN_VALUE( module_dateutil$tz );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
