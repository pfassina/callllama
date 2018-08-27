/* Generated code for Python source for module 'urllib3.request'
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

/* The _module_urllib3$request is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$request;
PyDictObject *moduledict_urllib3$request;

/* The module constants used, if any. */
extern PyObject *const_str_plain_set;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_8ad6e50e02629e8b4c0007e17f833566;
extern PyObject *const_str_plain_request;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple;
static PyObject *const_str_digest_5316afcabf660110d5223c7f1932919c;
static PyObject *const_str_plain_multipart_boundary;
extern PyObject *const_str_plain_boundary;
extern PyObject *const_str_plain_filepost;
extern PyObject *const_str_plain_urlencode;
static PyObject *const_str_digest_0597c9bfd7bacd5702e520c55a306385;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain_encode_multipart;
extern PyObject *const_str_chr_63;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_urlencode_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_set_1556cfccbcca5d62a1fe606cad5db634;
extern PyObject *const_str_plain_content_type;
extern PyObject *const_str_digest_1edef47b55b65d108e2405bd6241f07f;
extern PyObject *const_str_plain_request_url;
static PyObject *const_str_digest_4661d24aaa9eb1cc60cb4bc53d79ac83;
static PyObject *const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_222b7096876e0f27e78980578536ebfb;
extern PyObject *const_tuple_str_plain_encode_multipart_formdata_tuple;
static PyObject *const_str_digest_803c204d6b852d61542b6d5b2804eb65;
static PyObject *const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple;
extern PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_urlopen;
static PyObject *const_str_plain__encode_url_methods;
extern PyObject *const_str_plain_extra_kw;
static PyObject *const_tuple_75b174c31704c607c9d508ab21bcd950_tuple;
static PyObject *const_str_plain_request_encode_url;
extern PyObject *const_str_plain_DELETE;
static PyObject *const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c;
static PyObject *const_str_digest_35cc39b1092ab915c2c3184bae89c472;
static PyObject *const_str_plain_urlopen_kw;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_none_none_true_none_tuple;
static PyObject *const_str_plain_request_encode_body;
extern PyObject *const_str_plain_OPTIONS;
static PyObject *const_str_digest_557c39c48f7e1a4e7e48e7734a7b79cb;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_RequestMethods;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18;
static PyObject *const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a;
extern PyObject *const_str_plain_fields;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_url;
static PyObject *const_str_digest_52abd370a20e218a1a36645e76fcda7d;
extern PyObject *const_str_plain_method;
static PyObject *const_list_str_plain_RequestMethods_list;
extern PyObject *const_str_plain_encode_multipart_formdata;
extern PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
static PyObject *const_list_f47d6b3962044a9356160b0e24db900f_list;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_7d13004a6b21c498177feb48163642d9;
extern PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8ad6e50e02629e8b4c0007e17f833566 = UNSTREAM_STRING( &constant_bin[ 914022 ], 15, 0 );
    const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 3, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    const_str_plain_encode_multipart = UNSTREAM_STRING( &constant_bin[ 914037 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 5, const_str_plain_encode_multipart ); Py_INCREF( const_str_plain_encode_multipart );
    const_str_plain_multipart_boundary = UNSTREAM_STRING( &constant_bin[ 914053 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 6, const_str_plain_multipart_boundary ); Py_INCREF( const_str_plain_multipart_boundary );
    const_str_plain_urlopen_kw = UNSTREAM_STRING( &constant_bin[ 914071 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 7, const_str_plain_urlopen_kw ); Py_INCREF( const_str_plain_urlopen_kw );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 8, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 9, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 10, const_str_plain_content_type ); Py_INCREF( const_str_plain_content_type );
    const_str_digest_5316afcabf660110d5223c7f1932919c = UNSTREAM_STRING( &constant_bin[ 914081 ], 980, 0 );
    const_str_digest_0597c9bfd7bacd5702e520c55a306385 = UNSTREAM_STRING( &constant_bin[ 915061 ], 70, 0 );
    const_tuple_str_plain_urlencode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlencode_tuple, 0, const_str_plain_urlencode ); Py_INCREF( const_str_plain_urlencode );
    const_set_1556cfccbcca5d62a1fe606cad5db634 = PySet_New( NULL );
    PySet_Add( const_set_1556cfccbcca5d62a1fe606cad5db634, const_str_plain_GET );
    PySet_Add( const_set_1556cfccbcca5d62a1fe606cad5db634, const_str_plain_DELETE );
    PySet_Add( const_set_1556cfccbcca5d62a1fe606cad5db634, const_str_plain_HEAD );
    PySet_Add( const_set_1556cfccbcca5d62a1fe606cad5db634, const_str_plain_OPTIONS );
    assert( PySet_Size( const_set_1556cfccbcca5d62a1fe606cad5db634 ) == 4 );
    const_str_digest_4661d24aaa9eb1cc60cb4bc53d79ac83 = UNSTREAM_STRING( &constant_bin[ 915131 ], 481, 0 );
    const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d = UNSTREAM_STRING( &constant_bin[ 915612 ], 33, 0 );
    const_str_digest_222b7096876e0f27e78980578536ebfb = UNSTREAM_STRING( &constant_bin[ 915645 ], 77, 0 );
    const_str_digest_803c204d6b852d61542b6d5b2804eb65 = UNSTREAM_STRING( &constant_bin[ 915722 ], 166, 0 );
    const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 3, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 5, const_str_plain_encode_multipart ); Py_INCREF( const_str_plain_encode_multipart );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 6, const_str_plain_multipart_boundary ); Py_INCREF( const_str_plain_multipart_boundary );
    PyTuple_SET_ITEM( const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 7, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_plain__encode_url_methods = UNSTREAM_STRING( &constant_bin[ 915888 ], 19, 1 );
    const_tuple_75b174c31704c607c9d508ab21bcd950_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 3, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 5, const_str_plain_urlopen_kw ); Py_INCREF( const_str_plain_urlopen_kw );
    PyTuple_SET_ITEM( const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 6, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    const_str_plain_request_encode_url = UNSTREAM_STRING( &constant_bin[ 914435 ], 18, 1 );
    const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9 = UNSTREAM_STRING( &constant_bin[ 915907 ], 34, 0 );
    const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c = UNSTREAM_STRING( &constant_bin[ 915941 ], 22, 0 );
    const_str_digest_35cc39b1092ab915c2c3184bae89c472 = UNSTREAM_STRING( &constant_bin[ 915963 ], 24, 0 );
    const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 3, const_str_plain_fields ); Py_INCREF( const_str_plain_fields );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 5, const_str_plain_urlopen_kw ); Py_INCREF( const_str_plain_urlopen_kw );
    const_tuple_none_none_true_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_true_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain_request_encode_body = UNSTREAM_STRING( &constant_bin[ 914561 ], 19, 1 );
    const_str_digest_557c39c48f7e1a4e7e48e7734a7b79cb = UNSTREAM_STRING( &constant_bin[ 915987 ], 59, 0 );
    const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18 = UNSTREAM_STRING( &constant_bin[ 916046 ], 23, 0 );
    const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a, const_str_plain_headers, const_dict_empty );
    assert( PyDict_Size( const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a ) == 1 );
    const_str_digest_52abd370a20e218a1a36645e76fcda7d = UNSTREAM_STRING( &constant_bin[ 916069 ], 1727, 0 );
    const_list_str_plain_RequestMethods_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_RequestMethods_list, 0, const_str_plain_RequestMethods ); Py_INCREF( const_str_plain_RequestMethods );
    const_list_f47d6b3962044a9356160b0e24db900f_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_f47d6b3962044a9356160b0e24db900f_list, 0, const_str_plain_DELETE ); Py_INCREF( const_str_plain_DELETE );
    PyList_SET_ITEM( const_list_f47d6b3962044a9356160b0e24db900f_list, 1, const_str_plain_GET ); Py_INCREF( const_str_plain_GET );
    PyList_SET_ITEM( const_list_f47d6b3962044a9356160b0e24db900f_list, 2, const_str_plain_HEAD ); Py_INCREF( const_str_plain_HEAD );
    PyList_SET_ITEM( const_list_f47d6b3962044a9356160b0e24db900f_list, 3, const_str_plain_OPTIONS ); Py_INCREF( const_str_plain_OPTIONS );
    const_str_digest_7d13004a6b21c498177feb48163642d9 = UNSTREAM_STRING( &constant_bin[ 915612 ], 22, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$request( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_13da8a4a72c5c26fd8b5652906ec85c3;
static PyCodeObject *codeobj_0936ede95873cc8667137ac4e46cfccb;
static PyCodeObject *codeobj_ddffc80263859f790eaa22b4092ce0ca;
static PyCodeObject *codeobj_3b4a21a6116c4785497668ceaf427f82;
static PyCodeObject *codeobj_4b84370ce2ff29d8e0a1c344b7ef832a;
static PyCodeObject *codeobj_92fb46cca2a74d3f7bcea0005af965f4;
static PyCodeObject *codeobj_023cfc81a82c66865e202cb5c0106ec9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_557c39c48f7e1a4e7e48e7734a7b79cb;
    codeobj_13da8a4a72c5c26fd8b5652906ec85c3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_35cc39b1092ab915c2c3184bae89c472, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0936ede95873cc8667137ac4e46cfccb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RequestMethods, 10, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ddffc80263859f790eaa22b4092ce0ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 41, const_tuple_str_plain_self_str_plain_headers_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b4a21a6116c4785497668ceaf427f82 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request, 50, const_tuple_e0585f9d9519ebdc7e54d7027cb35492_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_4b84370ce2ff29d8e0a1c344b7ef832a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_encode_body, 91, const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_92fb46cca2a74d3f7bcea0005af965f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_encode_url, 74, const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_023cfc81a82c66865e202cb5c0106ec9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_urlopen, 44, const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$request$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$request$$$function_2_urlopen( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$request$$$function_3_request( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$request$$$function_4_request_encode_url( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$request$$$function_5_request_encode_body( PyObject *defaults );


// The module function definitions.
static PyObject *impl_urllib3$request$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_headers = python_pars[ 1 ];
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
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ddffc80263859f790eaa22b4092ce0ca = NULL;

    struct Nuitka_FrameObject *frame_ddffc80263859f790eaa22b4092ce0ca;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ddffc80263859f790eaa22b4092ce0ca, codeobj_ddffc80263859f790eaa22b4092ce0ca, module_urllib3$request, sizeof(void *)+sizeof(void *) );
    frame_ddffc80263859f790eaa22b4092ce0ca = cache_frame_ddffc80263859f790eaa22b4092ce0ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ddffc80263859f790eaa22b4092ce0ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ddffc80263859f790eaa22b4092ce0ca ) == 2 ); // Frame stack

    // Framed code:
    tmp_or_left_value_1 = par_headers;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = PyDict_New();
    tmp_assattr_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assattr_name_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_headers, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddffc80263859f790eaa22b4092ce0ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ddffc80263859f790eaa22b4092ce0ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ddffc80263859f790eaa22b4092ce0ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ddffc80263859f790eaa22b4092ce0ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ddffc80263859f790eaa22b4092ce0ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ddffc80263859f790eaa22b4092ce0ca,
        type_description_1,
        par_self,
        par_headers
    );


    // Release cached frame.
    if ( frame_ddffc80263859f790eaa22b4092ce0ca == cache_frame_ddffc80263859f790eaa22b4092ce0ca )
    {
        Py_DECREF( frame_ddffc80263859f790eaa22b4092ce0ca );
    }
    cache_frame_ddffc80263859f790eaa22b4092ce0ca = NULL;

    assertFrameObject( frame_ddffc80263859f790eaa22b4092ce0ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

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

    Py_XDECREF( par_headers );
    par_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_1___init__ );
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


static PyObject *impl_urllib3$request$$$function_2_urlopen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_body = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *par_encode_multipart = python_pars[ 5 ];
    PyObject *par_multipart_boundary = python_pars[ 6 ];
    PyObject *par_kw = python_pars[ 7 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_023cfc81a82c66865e202cb5c0106ec9 = NULL;

    struct Nuitka_FrameObject *frame_023cfc81a82c66865e202cb5c0106ec9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_023cfc81a82c66865e202cb5c0106ec9, codeobj_023cfc81a82c66865e202cb5c0106ec9, module_urllib3$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_023cfc81a82c66865e202cb5c0106ec9 = cache_frame_023cfc81a82c66865e202cb5c0106ec9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_023cfc81a82c66865e202cb5c0106ec9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_023cfc81a82c66865e202cb5c0106ec9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_222b7096876e0f27e78980578536ebfb;
    frame_023cfc81a82c66865e202cb5c0106ec9->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 47;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_023cfc81a82c66865e202cb5c0106ec9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_023cfc81a82c66865e202cb5c0106ec9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_023cfc81a82c66865e202cb5c0106ec9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_023cfc81a82c66865e202cb5c0106ec9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_023cfc81a82c66865e202cb5c0106ec9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_023cfc81a82c66865e202cb5c0106ec9,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_body,
        par_headers,
        par_encode_multipart,
        par_multipart_boundary,
        par_kw
    );


    // Release cached frame.
    if ( frame_023cfc81a82c66865e202cb5c0106ec9 == cache_frame_023cfc81a82c66865e202cb5c0106ec9 )
    {
        Py_DECREF( frame_023cfc81a82c66865e202cb5c0106ec9 );
    }
    cache_frame_023cfc81a82c66865e202cb5c0106ec9 = NULL;

    assertFrameObject( frame_023cfc81a82c66865e202cb5c0106ec9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_2_urlopen );
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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_encode_multipart );
    par_encode_multipart = NULL;

    Py_XDECREF( par_multipart_boundary );
    par_multipart_boundary = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_2_urlopen );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_urllib3$request$$$function_3_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_fields = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *par_urlopen_kw = python_pars[ 5 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_dircall_arg4_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_3b4a21a6116c4785497668ceaf427f82 = NULL;

    struct Nuitka_FrameObject *frame_3b4a21a6116c4785497668ceaf427f82;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b4a21a6116c4785497668ceaf427f82, codeobj_3b4a21a6116c4785497668ceaf427f82, module_urllib3$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b4a21a6116c4785497668ceaf427f82 = cache_frame_3b4a21a6116c4785497668ceaf427f82;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b4a21a6116c4785497668ceaf427f82 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b4a21a6116c4785497668ceaf427f82 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_method;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3b4a21a6116c4785497668ceaf427f82->m_frame.f_lineno = 61;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_method;
        par_method = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = par_url;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = par_urlopen_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "urlopen_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_request_url;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_method;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__encode_url_methods );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_request_encode_url );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_method;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_fields;
    tmp_dict_value_1 = par_fields;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_headers;
    tmp_dict_value_2 = par_headers;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_urlopen_kw;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "urlopen_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_10_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_request_encode_body );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = par_method;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_url;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_dict_key_3 = const_str_plain_fields;
    tmp_dict_value_3 = par_fields;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_headers;
    tmp_dict_value_4 = par_headers;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_2 = par_urlopen_kw;

    if ( tmp_dircall_arg4_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "urlopen_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg4_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
        tmp_return_value = impl___internal__$$$function_10_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4a21a6116c4785497668ceaf427f82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4a21a6116c4785497668ceaf427f82 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4a21a6116c4785497668ceaf427f82 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b4a21a6116c4785497668ceaf427f82, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b4a21a6116c4785497668ceaf427f82->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b4a21a6116c4785497668ceaf427f82, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b4a21a6116c4785497668ceaf427f82,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_fields,
        par_headers,
        par_urlopen_kw
    );


    // Release cached frame.
    if ( frame_3b4a21a6116c4785497668ceaf427f82 == cache_frame_3b4a21a6116c4785497668ceaf427f82 )
    {
        Py_DECREF( frame_3b4a21a6116c4785497668ceaf427f82 );
    }
    cache_frame_3b4a21a6116c4785497668ceaf427f82 = NULL;

    assertFrameObject( frame_3b4a21a6116c4785497668ceaf427f82 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_3_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_3_request );
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


static PyObject *impl_urllib3$request$$$function_4_request_encode_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_fields = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *par_urlopen_kw = python_pars[ 5 ];
    PyObject *var_extra_kw = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_92fb46cca2a74d3f7bcea0005af965f4 = NULL;

    struct Nuitka_FrameObject *frame_92fb46cca2a74d3f7bcea0005af965f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92fb46cca2a74d3f7bcea0005af965f4, codeobj_92fb46cca2a74d3f7bcea0005af965f4, module_urllib3$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_92fb46cca2a74d3f7bcea0005af965f4 = cache_frame_92fb46cca2a74d3f7bcea0005af965f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92fb46cca2a74d3f7bcea0005af965f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92fb46cca2a74d3f7bcea0005af965f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_headers;

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
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_headers;
        par_headers = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_dict_key_1 = const_str_plain_headers;
    tmp_dict_value_1 = par_headers;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_2;

    tmp_source_name_2 = var_extra_kw;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_urlopen_kw;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "urlopen_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_92fb46cca2a74d3f7bcea0005af965f4->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_fields;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = par_url;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_chr_63;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlencode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlencode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_fields;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_92fb46cca2a74d3f7bcea0005af965f4->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_3 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    par_url = tmp_assign_source_3;

    branch_no_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_method;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_extra_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92fb46cca2a74d3f7bcea0005af965f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_92fb46cca2a74d3f7bcea0005af965f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92fb46cca2a74d3f7bcea0005af965f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92fb46cca2a74d3f7bcea0005af965f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92fb46cca2a74d3f7bcea0005af965f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92fb46cca2a74d3f7bcea0005af965f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92fb46cca2a74d3f7bcea0005af965f4,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_fields,
        par_headers,
        par_urlopen_kw,
        var_extra_kw
    );


    // Release cached frame.
    if ( frame_92fb46cca2a74d3f7bcea0005af965f4 == cache_frame_92fb46cca2a74d3f7bcea0005af965f4 )
    {
        Py_DECREF( frame_92fb46cca2a74d3f7bcea0005af965f4 );
    }
    cache_frame_92fb46cca2a74d3f7bcea0005af965f4 = NULL;

    assertFrameObject( frame_92fb46cca2a74d3f7bcea0005af965f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_4_request_encode_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

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

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_4_request_encode_url );
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


static PyObject *impl_urllib3$request$$$function_5_request_encode_body( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_fields = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *par_encode_multipart = python_pars[ 5 ];
    PyObject *par_multipart_boundary = python_pars[ 6 ];
    PyObject *par_urlopen_kw = python_pars[ 7 ];
    PyObject *var_extra_kw = NULL;
    PyObject *var_body = NULL;
    PyObject *var_content_type = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4b84370ce2ff29d8e0a1c344b7ef832a = NULL;

    struct Nuitka_FrameObject *frame_4b84370ce2ff29d8e0a1c344b7ef832a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b84370ce2ff29d8e0a1c344b7ef832a, codeobj_4b84370ce2ff29d8e0a1c344b7ef832a, module_urllib3$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b84370ce2ff29d8e0a1c344b7ef832a = cache_frame_4b84370ce2ff29d8e0a1c344b7ef832a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b84370ce2ff29d8e0a1c344b7ef832a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b84370ce2ff29d8e0a1c344b7ef832a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_headers;

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
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_headers;
        par_headers = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = DEEP_COPY( const_dict_1bcbbc3c0665ad6489dc2a2c06e21a9a );
    assert( var_extra_kw == NULL );
    var_extra_kw = tmp_assign_source_2;

    tmp_cond_value_1 = par_fields;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_2 = const_str_plain_body;
    tmp_compare_right_2 = par_urlopen_kw;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "urlopen_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_0597c9bfd7bacd5702e520c55a306385;
    frame_4b84370ce2ff29d8e0a1c344b7ef832a->m_frame.f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 136;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_cond_value_2 = par_encode_multipart;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encode_multipart" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encode_multipart_formdata" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = par_fields;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_boundary;
    tmp_dict_value_1 = par_multipart_boundary;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "multipart_boundary" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_4b84370ce2ff29d8e0a1c344b7ef832a->m_frame.f_lineno = 140;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "ooooooooooo";
        exception_lineno = 140;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "ooooooooooo";
        exception_lineno = 140;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

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

                type_description_1 = "ooooooooooo";
                exception_lineno = 140;
                goto try_except_handler_3;
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

        type_description_1 = "ooooooooooo";
        exception_lineno = 140;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_body == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_body = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_content_type == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_content_type = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_4;
    branch_no_4:;
    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlencode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlencode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = par_fields;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fields" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }

    frame_4b84370ce2ff29d8e0a1c344b7ef832a->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }
    tmp_iter_arg_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_8 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


        type_description_1 = "ooooooooooo";
        exception_lineno = 142;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "ooooooooooo";
        exception_lineno = 142;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_body;
        var_body = tmp_assign_source_11;
        Py_INCREF( var_body );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_content_type;
        var_content_type = tmp_assign_source_12;
        Py_INCREF( var_content_type );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_4:;
    tmp_ass_subvalue_1 = var_body;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_extra_kw;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_body;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
    tmp_dict_value_2 = var_content_type;

    if ( tmp_dict_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_2 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_ass_subvalue_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_ass_subscribed_2 = var_extra_kw;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_headers;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_subscribed_name_1 = var_extra_kw;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_headers;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_headers;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_4b84370ce2ff29d8e0a1c344b7ef832a->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_extra_kw;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_update );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_urlopen_kw;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "urlopen_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_4b84370ce2ff29d8e0a1c344b7ef832a->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_urlopen );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_3 = par_method;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_url;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
    tmp_dircall_arg3_1 = var_extra_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extra_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b84370ce2ff29d8e0a1c344b7ef832a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b84370ce2ff29d8e0a1c344b7ef832a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b84370ce2ff29d8e0a1c344b7ef832a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b84370ce2ff29d8e0a1c344b7ef832a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b84370ce2ff29d8e0a1c344b7ef832a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b84370ce2ff29d8e0a1c344b7ef832a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b84370ce2ff29d8e0a1c344b7ef832a,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_fields,
        par_headers,
        par_encode_multipart,
        par_multipart_boundary,
        par_urlopen_kw,
        var_extra_kw,
        var_body,
        var_content_type
    );


    // Release cached frame.
    if ( frame_4b84370ce2ff29d8e0a1c344b7ef832a == cache_frame_4b84370ce2ff29d8e0a1c344b7ef832a )
    {
        Py_DECREF( frame_4b84370ce2ff29d8e0a1c344b7ef832a );
    }
    cache_frame_4b84370ce2ff29d8e0a1c344b7ef832a = NULL;

    assertFrameObject( frame_4b84370ce2ff29d8e0a1c344b7ef832a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_5_request_encode_body );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_encode_multipart );
    par_encode_multipart = NULL;

    Py_XDECREF( par_multipart_boundary );
    par_multipart_boundary = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    Py_XDECREF( var_content_type );
    var_content_type = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_fields );
    par_fields = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_encode_multipart );
    par_encode_multipart = NULL;

    Py_XDECREF( par_multipart_boundary );
    par_multipart_boundary = NULL;

    Py_XDECREF( par_urlopen_kw );
    par_urlopen_kw = NULL;

    Py_XDECREF( var_extra_kw );
    var_extra_kw = NULL;

    Py_XDECREF( var_body );
    var_body = NULL;

    Py_XDECREF( var_content_type );
    var_content_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$request$$$function_5_request_encode_body );
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



static PyObject *MAKE_FUNCTION_urllib3$request$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$request$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18,
#endif
        codeobj_ddffc80263859f790eaa22b4092ce0ca,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$request,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$request$$$function_2_urlopen( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$request$$$function_2_urlopen,
        const_str_plain_urlopen,
#if PYTHON_VERSION >= 300
        const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c,
#endif
        codeobj_023cfc81a82c66865e202cb5c0106ec9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$request,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$request$$$function_3_request( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$request$$$function_3_request,
        const_str_plain_request,
#if PYTHON_VERSION >= 300
        const_str_digest_7d13004a6b21c498177feb48163642d9,
#endif
        codeobj_3b4a21a6116c4785497668ceaf427f82,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$request,
        const_str_digest_4661d24aaa9eb1cc60cb4bc53d79ac83,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$request$$$function_4_request_encode_url( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$request$$$function_4_request_encode_url,
        const_str_plain_request_encode_url,
#if PYTHON_VERSION >= 300
        const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d,
#endif
        codeobj_92fb46cca2a74d3f7bcea0005af965f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$request,
        const_str_digest_803c204d6b852d61542b6d5b2804eb65,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$request$$$function_5_request_encode_body( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$request$$$function_5_request_encode_body,
        const_str_plain_request_encode_body,
#if PYTHON_VERSION >= 300
        const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9,
#endif
        codeobj_4b84370ce2ff29d8e0a1c344b7ef832a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$request,
        const_str_digest_52abd370a20e218a1a36645e76fcda7d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$request =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.request",   /* m_name */
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

MOD_INIT_DECL( urllib3$request )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$request );
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
    puts("urllib3.request: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.request: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.request: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$request" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$request = Py_InitModule4(
        "urllib3.request",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$request = PyModule_Create( &mdef_urllib3$request );
#endif

    moduledict_urllib3$request = MODULE_DICT( module_urllib3$request );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$request,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$request );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8ad6e50e02629e8b4c0007e17f833566, module_urllib3$request );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
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
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
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
    static struct Nuitka_FrameObject *cache_frame_0936ede95873cc8667137ac4e46cfccb_2 = NULL;

    struct Nuitka_FrameObject *frame_0936ede95873cc8667137ac4e46cfccb_2;

    struct Nuitka_FrameObject *frame_13da8a4a72c5c26fd8b5652906ec85c3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_urllib3$request_10 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_557c39c48f7e1a4e7e48e7734a7b79cb;
    UPDATE_STRING_DICT0( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_13da8a4a72c5c26fd8b5652906ec85c3 = MAKE_MODULE_FRAME( codeobj_13da8a4a72c5c26fd8b5652906ec85c3, module_urllib3$request );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_13da8a4a72c5c26fd8b5652906ec85c3 );
    assert( Py_REFCNT( frame_13da8a4a72c5c26fd8b5652906ec85c3 ) == 2 );

    // Framed code:
    frame_13da8a4a72c5c26fd8b5652906ec85c3->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_filepost;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$request;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_encode_multipart_formdata_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_13da8a4a72c5c26fd8b5652906ec85c3->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_encode_multipart_formdata,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encode_multipart_formdata );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_encode_multipart_formdata, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_digest_1edef47b55b65d108e2405bd6241f07f;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$request;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_urlencode_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_13da8a4a72c5c26fd8b5652906ec85c3->m_frame.f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_urlencode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_urlencode );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_RequestMethods_list );
    UPDATE_STRING_DICT1( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_8 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_8;

    tmp_assign_source_9 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;

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
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

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


        exception_lineno = 10;

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


        exception_lineno = 10;

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
    tmp_assign_source_10 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_10;

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
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
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


        exception_lineno = 10;

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
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_tuple_element_1 = const_str_plain_RequestMethods;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_13da8a4a72c5c26fd8b5652906ec85c3->m_frame.f_lineno = 10;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_11 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_11;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$request_10 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_8ad6e50e02629e8b4c0007e17f833566;
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_digest_5316afcabf660110d5223c7f1932919c;
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_RequestMethods;
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_0936ede95873cc8667137ac4e46cfccb_2, codeobj_0936ede95873cc8667137ac4e46cfccb, module_urllib3$request, sizeof(void *) );
    frame_0936ede95873cc8667137ac4e46cfccb_2 = cache_frame_0936ede95873cc8667137ac4e46cfccb_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0936ede95873cc8667137ac4e46cfccb_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0936ede95873cc8667137ac4e46cfccb_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_urllib3$request_10, const_str_plain_set );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
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
    tmp_called_name_2 = PyObject_GetItem( locals_urllib3$request_10, const_str_plain_set );

    if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_call_arg_element_1 = LIST_COPY( const_list_f47d6b3962044a9356160b0e24db900f_list );
    frame_0936ede95873cc8667137ac4e46cfccb_2->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_dictset_value = PySet_New( const_set_1556cfccbcca5d62a1fe606cad5db634 );
    condexpr_end_4:;
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain__encode_url_methods, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$request$$$function_1___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_2 = const_tuple_none_none_true_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$request$$$function_2_urlopen( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain_urlopen, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_3 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$request$$$function_3_request( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_4 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$request$$$function_4_request_encode_url( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain_request_encode_url, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_5 = const_tuple_none_none_true_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$request$$$function_5_request_encode_body( tmp_defaults_5 );
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain_request_encode_body, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0936ede95873cc8667137ac4e46cfccb_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0936ede95873cc8667137ac4e46cfccb_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0936ede95873cc8667137ac4e46cfccb_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0936ede95873cc8667137ac4e46cfccb_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0936ede95873cc8667137ac4e46cfccb_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0936ede95873cc8667137ac4e46cfccb_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_0936ede95873cc8667137ac4e46cfccb_2 == cache_frame_0936ede95873cc8667137ac4e46cfccb_2 )
    {
        Py_DECREF( frame_0936ede95873cc8667137ac4e46cfccb_2 );
    }
    cache_frame_0936ede95873cc8667137ac4e46cfccb_2 = NULL;

    assertFrameObject( frame_0936ede95873cc8667137ac4e46cfccb_2 );

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


        exception_lineno = 10;

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
    tmp_res = PyObject_SetItem( locals_urllib3$request_10, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_tuple_element_2 = const_str_plain_RequestMethods;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_urllib3$request_10;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_13da8a4a72c5c26fd8b5652906ec85c3->m_frame.f_lineno = 10;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_13;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_urllib3$request_10 );
    locals_urllib3$request_10 = NULL;
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

    Py_DECREF( locals_urllib3$request_10 );
    locals_urllib3$request_10 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$request );
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
    NUITKA_CANNOT_GET_HERE( urllib3$request );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 10;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$request, (Nuitka_StringObject *)const_str_plain_RequestMethods, tmp_assign_source_12 );
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
    RESTORE_FRAME_EXCEPTION( frame_13da8a4a72c5c26fd8b5652906ec85c3 );
#endif
    popFrameStack();

    assertFrameObject( frame_13da8a4a72c5c26fd8b5652906ec85c3 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13da8a4a72c5c26fd8b5652906ec85c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13da8a4a72c5c26fd8b5652906ec85c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13da8a4a72c5c26fd8b5652906ec85c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13da8a4a72c5c26fd8b5652906ec85c3, exception_lineno );
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


    return MOD_RETURN_VALUE( module_urllib3$request );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
