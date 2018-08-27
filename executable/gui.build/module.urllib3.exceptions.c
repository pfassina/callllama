/* Generated code for Python source for module 'urllib3.exceptions'
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

/* The _module_urllib3$exceptions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$exceptions;
PyDictObject *moduledict_urllib3$exceptions;

/* The module constants used, if any. */
static PyObject *const_str_plain_httplib_IncompleteRead;
extern PyObject *const_str_plain_TimeoutError;
static PyObject *const_str_digest_e97d412e3d3cfc92797a4434364dfe97;
static PyObject *const_str_digest_caae7e70acce199048d0f76529b5d906;
static PyObject *const_str_digest_d23d849ab02a6235eb0652ac312b2323;
static PyObject *const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_02d7a9258b08750dd91ed5e916d12d0c;
extern PyObject *const_str_plain_SubjectAltNameWarning;
static PyObject *const_str_digest_ae47a0634b7ce883442a5d8a017f6a25;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_tuple_4e5661b66775469145a3b4097a93b81e_tuple;
extern PyObject *const_str_plain_LocationValueError;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
static PyObject *const_str_digest_c85fd95998d676bb8b296c5552d11916;
static PyObject *const_str_digest_d3e96f948eaa41c53caaae3833d57481;
static PyObject *const_str_digest_1ac943b4741094a8fa467ee81285da04;
static PyObject *const_str_digest_46b5bed5a2577b5849f26cefa58279d5;
static PyObject *const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
static PyObject *const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
static PyObject *const_str_digest_18a413fa4e7663b93b8950f08b00fb5d;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_type_AssertionError_type_ValueError_tuple;
extern PyObject *const_str_plain_BodyNotHttplibCompatible;
extern PyObject *const_str_plain_LocationParseError;
static PyObject *const_tuple_str_plain_IncompleteRead_tuple;
static PyObject *const_str_digest_0af1d92cbf25f8a036fda6803e038903;
static PyObject *const_str_digest_fe0af2f284849636ec878ed7e8cbfc38;
static PyObject *const_str_digest_d455563e1ef951148bac32f5cc949a27;
static PyObject *const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple;
static PyObject *const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
static PyObject *const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain_SecurityWarning;
extern PyObject *const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
static PyObject *const_str_digest_3cba0a880d63b7b310fd43504b18c057;
static PyObject *const_str_digest_0beacf6afb33b121e9545510332129fc;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_HostChangedError;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_e7d525c37e8e3bf1b29419172dc726f6;
static PyObject *const_str_digest_28db377b4c4aaf2881b08e822881aecb;
extern PyObject *const_str_plain_InsecureRequestWarning;
static PyObject *const_str_digest_d54edb257b1240e069427ea15807c309;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_1841b6b2ce0a167ae67629f6be182242;
extern PyObject *const_str_plain_SNIMissingWarning;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
extern PyObject *const_str_plain_HeaderParsingError;
static PyObject *const_str_digest_1b17e5345caa893d267645d5296f52b9;
extern PyObject *const_str_plain_ProxyError;
static PyObject *const_str_digest_3ecac7959fca6b094793e5853872d936;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_str_plain_EmptyPoolError;
static PyObject *const_str_digest_f23f32cee9faa00b4a74b12aefddc51b;
static PyObject *const_str_digest_85322d4279b2ac8026a5921e77f32165;
static PyObject *const_str_digest_f2b3a878770698eea89e367a42f8081d;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_e6bf3288f7cb1387598878e66172f8b9;
static PyObject *const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_HTTPWarning;
static PyObject *const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
extern PyObject *const_str_plain_SystemTimeWarning;
extern PyObject *const_str_plain_ResponseNotChunked;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_TimeoutStateError;
static PyObject *const_str_digest_c0a49ca9a098ec7e081a9e7110b03fed;
static PyObject *const_str_plain_PoolError;
static PyObject *const_str_digest_8e8ee501a73b92aaab075e946de662bf;
static PyObject *const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
static PyObject *const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_expected;
extern PyObject *const_str_plain_ProtocolError;
static PyObject *const_str_plain_RequestError;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_UnrewindableBodyError;
static PyObject *const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
static PyObject *const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
extern PyObject *const_int_0;
static PyObject *const_str_digest_401d5766bd48277296aa1afc93f98bc4;
static PyObject *const_str_digest_8c0402b3f822d653c84c590d6e596566;
static PyObject *const_str_digest_5ac3ff452137ae9d952f65688385427b;
static PyObject *const_str_digest_0b3cbe0215684a287553275c21c89d2f;
static PyObject *const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_HTTPError;
static PyObject *const_str_digest_2fd40a48b90d5dbc9586539edec8582e;
extern PyObject *const_str_plain_ResponseError;
static PyObject *const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple;
extern PyObject *const_str_plain_defects;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_ConnectionError;
static PyObject *const_str_plain_Unknown;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain_ClosedPoolError;
static PyObject *const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_ProxySchemeUnknown;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ConnectTimeoutError;
static PyObject *const_str_digest_6b2631bb00bf77812f4e433630f72b85;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_IncompleteRead;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_aab7052c60d4b32517d511fe61caaef2;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_52259094e9ef0d3b81149cff696bacc3;
extern PyObject *const_str_plain_unparsed_data;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_46584e2093371b92bd116a36f6fac20c;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_digest_7507dacd42331ff69ed33f16b17b92b8;
static PyObject *const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_DecodeError;
static PyObject *const_tuple_4b149253d95f445e87aa92420381c30c_tuple;
extern PyObject *const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
static PyObject *const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_GENERIC_ERROR;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_InsecurePlatformWarning;
static PyObject *const_str_digest_9cd94d6d1a0a35ff358ca3b08bb3536e;
static PyObject *const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_httplib_IncompleteRead = UNSTREAM_STRING( &constant_bin[ 894373 ], 22, 1 );
    const_str_digest_e97d412e3d3cfc92797a4434364dfe97 = UNSTREAM_STRING( &constant_bin[ 894395 ], 27, 0 );
    const_str_digest_caae7e70acce199048d0f76529b5d906 = UNSTREAM_STRING( &constant_bin[ 894422 ], 51, 0 );
    const_str_digest_d23d849ab02a6235eb0652ac312b2323 = UNSTREAM_STRING( &constant_bin[ 894473 ], 64, 0 );
    const_str_digest_4221c6866c41e5ab7b77b09bf6885351 = UNSTREAM_STRING( &constant_bin[ 894537 ], 68, 0 );
    const_str_digest_02d7a9258b08750dd91ed5e916d12d0c = UNSTREAM_STRING( &constant_bin[ 894605 ], 21, 0 );
    const_str_digest_ae47a0634b7ce883442a5d8a017f6a25 = UNSTREAM_STRING( &constant_bin[ 894626 ], 122, 0 );
    const_tuple_4e5661b66775469145a3b4097a93b81e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 3, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341 = UNSTREAM_STRING( &constant_bin[ 894748 ], 59, 0 );
    const_str_digest_c85fd95998d676bb8b296c5552d11916 = UNSTREAM_STRING( &constant_bin[ 894807 ], 33, 0 );
    const_str_digest_d3e96f948eaa41c53caaae3833d57481 = UNSTREAM_STRING( &constant_bin[ 894840 ], 66, 0 );
    const_str_digest_1ac943b4741094a8fa467ee81285da04 = UNSTREAM_STRING( &constant_bin[ 894906 ], 56, 0 );
    const_str_digest_46b5bed5a2577b5849f26cefa58279d5 = UNSTREAM_STRING( &constant_bin[ 894962 ], 27, 0 );
    const_str_digest_664d83eb41f8cfe3a1092e98f7d92027 = UNSTREAM_STRING( &constant_bin[ 894989 ], 35, 0 );
    const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72 = UNSTREAM_STRING( &constant_bin[ 895024 ], 24, 0 );
    const_str_digest_18a413fa4e7663b93b8950f08b00fb5d = UNSTREAM_STRING( &constant_bin[ 895048 ], 25, 0 );
    const_tuple_str_plain_IncompleteRead_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_IncompleteRead_tuple, 0, const_str_plain_IncompleteRead ); Py_INCREF( const_str_plain_IncompleteRead );
    const_str_digest_0af1d92cbf25f8a036fda6803e038903 = UNSTREAM_STRING( &constant_bin[ 895073 ], 57, 0 );
    const_str_digest_fe0af2f284849636ec878ed7e8cbfc38 = UNSTREAM_STRING( &constant_bin[ 895130 ], 23, 0 );
    const_str_digest_d455563e1ef951148bac32f5cc949a27 = UNSTREAM_STRING( &constant_bin[ 895153 ], 48, 0 );
    const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple, 1, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    PyTuple_SET_ITEM( const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_cb9b95f47cda8f2821509d84e8d824e3 = UNSTREAM_STRING( &constant_bin[ 895201 ], 19, 0 );
    const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2 = UNSTREAM_STRING( &constant_bin[ 895220 ], 192, 0 );
    const_str_digest_3cba0a880d63b7b310fd43504b18c057 = UNSTREAM_STRING( &constant_bin[ 895412 ], 63, 0 );
    const_str_digest_0beacf6afb33b121e9545510332129fc = UNSTREAM_STRING( &constant_bin[ 895475 ], 57, 0 );
    const_str_digest_e7d525c37e8e3bf1b29419172dc726f6 = UNSTREAM_STRING( &constant_bin[ 895532 ], 199, 0 );
    const_str_digest_28db377b4c4aaf2881b08e822881aecb = UNSTREAM_STRING( &constant_bin[ 895731 ], 40, 0 );
    const_str_digest_d54edb257b1240e069427ea15807c309 = UNSTREAM_STRING( &constant_bin[ 895771 ], 62, 0 );
    const_str_digest_1841b6b2ce0a167ae67629f6be182242 = UNSTREAM_STRING( &constant_bin[ 895833 ], 22, 0 );
    const_str_digest_906ad4a0fc873be8c0c812f03902dc29 = UNSTREAM_STRING( &constant_bin[ 895855 ], 70, 0 );
    const_str_digest_1b17e5345caa893d267645d5296f52b9 = UNSTREAM_STRING( &constant_bin[ 895925 ], 67, 0 );
    const_str_digest_3ecac7959fca6b094793e5853872d936 = UNSTREAM_STRING( &constant_bin[ 895992 ], 47, 0 );
    const_str_digest_f23f32cee9faa00b4a74b12aefddc51b = UNSTREAM_STRING( &constant_bin[ 896039 ], 20, 0 );
    const_str_digest_85322d4279b2ac8026a5921e77f32165 = UNSTREAM_STRING( &constant_bin[ 896059 ], 69, 0 );
    const_str_digest_f2b3a878770698eea89e367a42f8081d = UNSTREAM_STRING( &constant_bin[ 896128 ], 27, 0 );
    const_str_digest_e6bf3288f7cb1387598878e66172f8b9 = UNSTREAM_STRING( &constant_bin[ 896155 ], 27, 0 );
    const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10 = UNSTREAM_STRING( &constant_bin[ 896182 ], 49, 0 );
    const_str_digest_c0a49ca9a098ec7e081a9e7110b03fed = UNSTREAM_STRING( &constant_bin[ 896231 ], 62, 0 );
    const_str_plain_PoolError = UNSTREAM_STRING( &constant_bin[ 875116 ], 9, 1 );
    const_str_digest_8e8ee501a73b92aaab075e946de662bf = UNSTREAM_STRING( &constant_bin[ 896293 ], 48, 0 );
    const_str_digest_7cd1672c18c257a809407a1a63fa0e88 = UNSTREAM_STRING( &constant_bin[ 896341 ], 44, 0 );
    const_str_digest_b3cccf261f53b23aaf668796a6ebdda4 = UNSTREAM_STRING( &constant_bin[ 896385 ], 38, 0 );
    const_str_plain_RequestError = UNSTREAM_STRING( &constant_bin[ 894605 ], 12, 1 );
    const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde = UNSTREAM_STRING( &constant_bin[ 896423 ], 268, 0 );
    const_str_digest_5cd5167a778e9ea5a19e045e34276deb = UNSTREAM_STRING( &constant_bin[ 896691 ], 72, 0 );
    const_str_digest_401d5766bd48277296aa1afc93f98bc4 = UNSTREAM_STRING( &constant_bin[ 896763 ], 47, 0 );
    const_str_digest_8c0402b3f822d653c84c590d6e596566 = UNSTREAM_STRING( &constant_bin[ 896810 ], 57, 0 );
    const_str_digest_5ac3ff452137ae9d952f65688385427b = UNSTREAM_STRING( &constant_bin[ 896867 ], 67, 0 );
    const_str_digest_0b3cbe0215684a287553275c21c89d2f = UNSTREAM_STRING( &constant_bin[ 896934 ], 59, 0 );
    const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd = UNSTREAM_STRING( &constant_bin[ 896993 ], 48, 0 );
    const_str_digest_2fd40a48b90d5dbc9586539edec8582e = UNSTREAM_STRING( &constant_bin[ 897041 ], 18, 0 );
    const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple, 1, const_str_plain_partial ); Py_INCREF( const_str_plain_partial );
    PyTuple_SET_ITEM( const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple, 2, const_str_plain_expected ); Py_INCREF( const_str_plain_expected );
    PyTuple_SET_ITEM( const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple, 3, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_plain_Unknown = UNSTREAM_STRING( &constant_bin[ 27661 ], 7, 1 );
    const_str_digest_ffd5c59803af63cf2041e83ca8e66823 = UNSTREAM_STRING( &constant_bin[ 897059 ], 29, 0 );
    const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9 = UNSTREAM_STRING( &constant_bin[ 897088 ], 60, 0 );
    const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9 = UNSTREAM_STRING( &constant_bin[ 897148 ], 61, 0 );
    const_str_digest_6b2631bb00bf77812f4e433630f72b85 = UNSTREAM_STRING( &constant_bin[ 897209 ], 78, 0 );
    const_str_digest_aab7052c60d4b32517d511fe61caaef2 = UNSTREAM_STRING( &constant_bin[ 897287 ], 23, 0 );
    const_str_digest_52259094e9ef0d3b81149cff696bacc3 = UNSTREAM_STRING( &constant_bin[ 897310 ], 41, 0 );
    const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 1, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_46584e2093371b92bd116a36f6fac20c = UNSTREAM_STRING( &constant_bin[ 897351 ], 21, 0 );
    const_str_digest_7507dacd42331ff69ed33f16b17b92b8 = UNSTREAM_STRING( &constant_bin[ 897372 ], 47, 0 );
    const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 3, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_tuple_4b149253d95f445e87aa92420381c30c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b149253d95f445e87aa92420381c30c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4b149253d95f445e87aa92420381c30c_tuple, 1, const_str_plain_defects ); Py_INCREF( const_str_plain_defects );
    PyTuple_SET_ITEM( const_tuple_4b149253d95f445e87aa92420381c30c_tuple, 2, const_str_plain_unparsed_data ); Py_INCREF( const_str_plain_unparsed_data );
    PyTuple_SET_ITEM( const_tuple_4b149253d95f445e87aa92420381c30c_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_4b149253d95f445e87aa92420381c30c_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 1, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_digest_9cd94d6d1a0a35ff358ca3b08bb3536e = UNSTREAM_STRING( &constant_bin[ 897419 ], 23, 0 );
    const_str_digest_50f562faa7eed1b409bdd05c97fc14f2 = UNSTREAM_STRING( &constant_bin[ 897442 ], 99, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$exceptions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cc952fed92243b2437b2ac459873ba13;
static PyCodeObject *codeobj_712a9dabde300f28a3c2156409cabcca;
static PyCodeObject *codeobj_4318673106556d40710b76adeea7f65a;
static PyCodeObject *codeobj_60b3d30a126b78e0f83e530a3e43004b;
static PyCodeObject *codeobj_b769cbc5e466e9cf24a6178bc5ca9d23;
static PyCodeObject *codeobj_3915a90d06ac94139419123a583c0479;
static PyCodeObject *codeobj_17cf62f8028e739b3d6b9e79f1a7979c;
static PyCodeObject *codeobj_3a6376d3f6a8c33fd4efb1272fa89cbb;
static PyCodeObject *codeobj_d59cfd976817319ca1f2b46cc165e29b;
static PyCodeObject *codeobj_2b1c3aa6a94cc8dc6a2be824425d3b02;
static PyCodeObject *codeobj_94e2813510e4d2f7587cf5ded0312096;
static PyCodeObject *codeobj_20c421452bc572f6f33b55403c0bd6d5;
static PyCodeObject *codeobj_1df41be46f59f5904b858677cd4ecd97;
static PyCodeObject *codeobj_b010931e10a70dc9f9d49b6bd789e4a6;
static PyCodeObject *codeobj_8ffc3b83e4440cc13d943c9e2f35f2e0;
static PyCodeObject *codeobj_a273ea0794dd6fb52281924f4b1398f5;
static PyCodeObject *codeobj_288690e2f8112b5fec7df5a97da83d64;
static PyCodeObject *codeobj_48b926a8c4041f03a75821ddcf921c7d;
static PyCodeObject *codeobj_4237ee7a7ffff3da65dddb95c1988eac;
static PyCodeObject *codeobj_0f9fa1c24853874bb80e703230b044ef;
static PyCodeObject *codeobj_9877058e0b962e952c0eec3902e5d640;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c0a49ca9a098ec7e081a9e7110b03fed;
    codeobj_cc952fed92243b2437b2ac459873ba13 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_46b5bed5a2577b5849f26cefa58279d5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_712a9dabde300f28a3c2156409cabcca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HeaderParsingError, 237, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4318673106556d40710b76adeea7f65a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HostChangedError, 85, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_60b3d30a126b78e0f83e530a3e43004b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_IncompleteRead, 207, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b769cbc5e466e9cf24a6178bc5ca9d23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_LocationParseError, 140, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_3915a90d06ac94139419123a583c0479 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MaxRetryError, 66, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_17cf62f8028e739b3d6b9e79f1a7979c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PoolError, 18, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_3a6376d3f6a8c33fd4efb1272fa89cbb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ProxySchemeUnknown, 228, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d59cfd976817319ca1f2b46cc165e29b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RequestError, 29, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2b1c3aa6a94cc8dc6a2be824425d3b02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ResponseError, 150, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_94e2813510e4d2f7587cf5ded0312096 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 20, const_tuple_str_plain_self_str_plain_pool_str_plain_message_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20c421452bc572f6f33b55403c0bd6d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 31, const_tuple_4a8ec3b34fcf1282c262cfa0596ce9cb_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1df41be46f59f5904b858677cd4ecd97 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 76, const_tuple_4e5661b66775469145a3b4097a93b81e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b010931e10a70dc9f9d49b6bd789e4a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 88, const_tuple_764d719bb26347ee44cb7fb47a9b65c4_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8ffc3b83e4440cc13d943c9e2f35f2e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 143, const_tuple_str_plain_self_str_plain_location_str_plain_message_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a273ea0794dd6fb52281924f4b1398f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 215, const_tuple_e7c871cbcb87c15cd8c0c3ad836b474b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_288690e2f8112b5fec7df5a97da83d64 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 232, const_tuple_2761f6fa3641825c97bd56e494fb649c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_48b926a8c4041f03a75821ddcf921c7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 239, const_tuple_4b149253d95f445e87aa92420381c30c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_4237ee7a7ffff3da65dddb95c1988eac = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 24, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f9fa1c24853874bb80e703230b044ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 35, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9877058e0b962e952c0eec3902e5d640 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 218, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  );


// The module function definitions.
static PyObject *impl_urllib3$exceptions$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_message = python_pars[ 2 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_94e2813510e4d2f7587cf5ded0312096 = NULL;

    struct Nuitka_FrameObject *frame_94e2813510e4d2f7587cf5ded0312096;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94e2813510e4d2f7587cf5ded0312096, codeobj_94e2813510e4d2f7587cf5ded0312096, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94e2813510e4d2f7587cf5ded0312096 = cache_frame_94e2813510e4d2f7587cf5ded0312096;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94e2813510e4d2f7587cf5ded0312096 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94e2813510e4d2f7587cf5ded0312096 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_pool;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pool, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_b0cc034d9177fde48a3b44ac122139d9;
    tmp_tuple_element_1 = par_pool;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_message;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_94e2813510e4d2f7587cf5ded0312096->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94e2813510e4d2f7587cf5ded0312096 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94e2813510e4d2f7587cf5ded0312096 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94e2813510e4d2f7587cf5ded0312096, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94e2813510e4d2f7587cf5ded0312096->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94e2813510e4d2f7587cf5ded0312096, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94e2813510e4d2f7587cf5ded0312096,
        type_description_1,
        par_self,
        par_pool,
        par_message
    );


    // Release cached frame.
    if ( frame_94e2813510e4d2f7587cf5ded0312096 == cache_frame_94e2813510e4d2f7587cf5ded0312096 )
    {
        Py_DECREF( frame_94e2813510e4d2f7587cf5ded0312096 );
    }
    cache_frame_94e2813510e4d2f7587cf5ded0312096 = NULL;

    assertFrameObject( frame_94e2813510e4d2f7587cf5ded0312096 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

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

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_1___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_2___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_4237ee7a7ffff3da65dddb95c1988eac = NULL;

    struct Nuitka_FrameObject *frame_4237ee7a7ffff3da65dddb95c1988eac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4237ee7a7ffff3da65dddb95c1988eac, codeobj_4237ee7a7ffff3da65dddb95c1988eac, module_urllib3$exceptions, sizeof(void *) );
    frame_4237ee7a7ffff3da65dddb95c1988eac = cache_frame_4237ee7a7ffff3da65dddb95c1988eac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4237ee7a7ffff3da65dddb95c1988eac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4237ee7a7ffff3da65dddb95c1988eac ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4237ee7a7ffff3da65dddb95c1988eac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4237ee7a7ffff3da65dddb95c1988eac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4237ee7a7ffff3da65dddb95c1988eac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4237ee7a7ffff3da65dddb95c1988eac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4237ee7a7ffff3da65dddb95c1988eac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4237ee7a7ffff3da65dddb95c1988eac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4237ee7a7ffff3da65dddb95c1988eac,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4237ee7a7ffff3da65dddb95c1988eac == cache_frame_4237ee7a7ffff3da65dddb95c1988eac )
    {
        Py_DECREF( frame_4237ee7a7ffff3da65dddb95c1988eac );
    }
    cache_frame_4237ee7a7ffff3da65dddb95c1988eac = NULL;

    assertFrameObject( frame_4237ee7a7ffff3da65dddb95c1988eac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_2___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_2___reduce__ );
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


static PyObject *impl_urllib3$exceptions$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_message = python_pars[ 3 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_20c421452bc572f6f33b55403c0bd6d5 = NULL;

    struct Nuitka_FrameObject *frame_20c421452bc572f6f33b55403c0bd6d5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20c421452bc572f6f33b55403c0bd6d5, codeobj_20c421452bc572f6f33b55403c0bd6d5, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20c421452bc572f6f33b55403c0bd6d5 = cache_frame_20c421452bc572f6f33b55403c0bd6d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20c421452bc572f6f33b55403c0bd6d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20c421452bc572f6f33b55403c0bd6d5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_url;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_url, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_pool;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_message;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_20c421452bc572f6f33b55403c0bd6d5->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20c421452bc572f6f33b55403c0bd6d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20c421452bc572f6f33b55403c0bd6d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20c421452bc572f6f33b55403c0bd6d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20c421452bc572f6f33b55403c0bd6d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20c421452bc572f6f33b55403c0bd6d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20c421452bc572f6f33b55403c0bd6d5,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_message
    );


    // Release cached frame.
    if ( frame_20c421452bc572f6f33b55403c0bd6d5 == cache_frame_20c421452bc572f6f33b55403c0bd6d5 )
    {
        Py_DECREF( frame_20c421452bc572f6f33b55403c0bd6d5 );
    }
    cache_frame_20c421452bc572f6f33b55403c0bd6d5 = NULL;

    assertFrameObject( frame_20c421452bc572f6f33b55403c0bd6d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

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

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_3___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_4___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_0f9fa1c24853874bb80e703230b044ef = NULL;

    struct Nuitka_FrameObject *frame_0f9fa1c24853874bb80e703230b044ef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f9fa1c24853874bb80e703230b044ef, codeobj_0f9fa1c24853874bb80e703230b044ef, module_urllib3$exceptions, sizeof(void *) );
    frame_0f9fa1c24853874bb80e703230b044ef = cache_frame_0f9fa1c24853874bb80e703230b044ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f9fa1c24853874bb80e703230b044ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f9fa1c24853874bb80e703230b044ef ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_2 = Py_None;
    tmp_tuple_element_1 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 37;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f9fa1c24853874bb80e703230b044ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f9fa1c24853874bb80e703230b044ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f9fa1c24853874bb80e703230b044ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f9fa1c24853874bb80e703230b044ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f9fa1c24853874bb80e703230b044ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f9fa1c24853874bb80e703230b044ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f9fa1c24853874bb80e703230b044ef,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0f9fa1c24853874bb80e703230b044ef == cache_frame_0f9fa1c24853874bb80e703230b044ef )
    {
        Py_DECREF( frame_0f9fa1c24853874bb80e703230b044ef );
    }
    cache_frame_0f9fa1c24853874bb80e703230b044ef = NULL;

    assertFrameObject( frame_0f9fa1c24853874bb80e703230b044ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_4___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_4___reduce__ );
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


static PyObject *impl_urllib3$exceptions$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_reason = python_pars[ 3 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1df41be46f59f5904b858677cd4ecd97 = NULL;

    struct Nuitka_FrameObject *frame_1df41be46f59f5904b858677cd4ecd97;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1df41be46f59f5904b858677cd4ecd97, codeobj_1df41be46f59f5904b858677cd4ecd97, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1df41be46f59f5904b858677cd4ecd97 = cache_frame_1df41be46f59f5904b858677cd4ecd97;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1df41be46f59f5904b858677cd4ecd97 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1df41be46f59f5904b858677cd4ecd97 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_reason;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_reason, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_8e8ee501a73b92aaab075e946de662bf;
    tmp_tuple_element_1 = par_url;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_reason;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_pool;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_url;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_message;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_1df41be46f59f5904b858677cd4ecd97->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1df41be46f59f5904b858677cd4ecd97 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1df41be46f59f5904b858677cd4ecd97 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1df41be46f59f5904b858677cd4ecd97, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1df41be46f59f5904b858677cd4ecd97->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1df41be46f59f5904b858677cd4ecd97, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1df41be46f59f5904b858677cd4ecd97,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_reason,
        var_message
    );


    // Release cached frame.
    if ( frame_1df41be46f59f5904b858677cd4ecd97 == cache_frame_1df41be46f59f5904b858677cd4ecd97 )
    {
        Py_DECREF( frame_1df41be46f59f5904b858677cd4ecd97 );
    }
    cache_frame_1df41be46f59f5904b858677cd4ecd97 = NULL;

    assertFrameObject( frame_1df41be46f59f5904b858677cd4ecd97 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_5___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_retries = python_pars[ 3 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b010931e10a70dc9f9d49b6bd789e4a6 = NULL;

    struct Nuitka_FrameObject *frame_b010931e10a70dc9f9d49b6bd789e4a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b010931e10a70dc9f9d49b6bd789e4a6, codeobj_b010931e10a70dc9f9d49b6bd789e4a6, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b010931e10a70dc9f9d49b6bd789e4a6 = cache_frame_b010931e10a70dc9f9d49b6bd789e4a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b010931e10a70dc9f9d49b6bd789e4a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b010931e10a70dc9f9d49b6bd789e4a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_52259094e9ef0d3b81149cff696bacc3;
    tmp_right_name_1 = par_url;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_pool;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_url;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_message;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_b010931e10a70dc9f9d49b6bd789e4a6->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_retries;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_retries, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b010931e10a70dc9f9d49b6bd789e4a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b010931e10a70dc9f9d49b6bd789e4a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b010931e10a70dc9f9d49b6bd789e4a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b010931e10a70dc9f9d49b6bd789e4a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b010931e10a70dc9f9d49b6bd789e4a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b010931e10a70dc9f9d49b6bd789e4a6,
        type_description_1,
        par_self,
        par_pool,
        par_url,
        par_retries,
        var_message
    );


    // Release cached frame.
    if ( frame_b010931e10a70dc9f9d49b6bd789e4a6 == cache_frame_b010931e10a70dc9f9d49b6bd789e4a6 )
    {
        Py_DECREF( frame_b010931e10a70dc9f9d49b6bd789e4a6 );
    }
    cache_frame_b010931e10a70dc9f9d49b6bd789e4a6 = NULL;

    assertFrameObject( frame_b010931e10a70dc9f9d49b6bd789e4a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_6___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_location = python_pars[ 1 ];
    PyObject *var_message = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8ffc3b83e4440cc13d943c9e2f35f2e0 = NULL;

    struct Nuitka_FrameObject *frame_8ffc3b83e4440cc13d943c9e2f35f2e0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ffc3b83e4440cc13d943c9e2f35f2e0, codeobj_8ffc3b83e4440cc13d943c9e2f35f2e0, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ffc3b83e4440cc13d943c9e2f35f2e0 = cache_frame_8ffc3b83e4440cc13d943c9e2f35f2e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_cb9b95f47cda8f2821509d84e8d824e3;
    tmp_right_name_1 = par_location;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_message;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_8ffc3b83e4440cc13d943c9e2f35f2e0->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_location;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_location, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ffc3b83e4440cc13d943c9e2f35f2e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ffc3b83e4440cc13d943c9e2f35f2e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ffc3b83e4440cc13d943c9e2f35f2e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ffc3b83e4440cc13d943c9e2f35f2e0,
        type_description_1,
        par_self,
        par_location,
        var_message
    );


    // Release cached frame.
    if ( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 == cache_frame_8ffc3b83e4440cc13d943c9e2f35f2e0 )
    {
        Py_DECREF( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 );
    }
    cache_frame_8ffc3b83e4440cc13d943c9e2f35f2e0 = NULL;

    assertFrameObject( frame_8ffc3b83e4440cc13d943c9e2f35f2e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_location );
    par_location = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    Py_XDECREF( par_location );
    par_location = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_7___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_partial = python_pars[ 1 ];
    PyObject *par_expected = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a273ea0794dd6fb52281924f4b1398f5 = NULL;

    struct Nuitka_FrameObject *frame_a273ea0794dd6fb52281924f4b1398f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a273ea0794dd6fb52281924f4b1398f5, codeobj_a273ea0794dd6fb52281924f4b1398f5, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a273ea0794dd6fb52281924f4b1398f5 = cache_frame_a273ea0794dd6fb52281924f4b1398f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a273ea0794dd6fb52281924f4b1398f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a273ea0794dd6fb52281924f4b1398f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_IncompleteRead );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncompleteRead );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IncompleteRead" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_partial;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "partial" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_expected;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expected" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    frame_a273ea0794dd6fb52281924f4b1398f5->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a273ea0794dd6fb52281924f4b1398f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a273ea0794dd6fb52281924f4b1398f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a273ea0794dd6fb52281924f4b1398f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a273ea0794dd6fb52281924f4b1398f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a273ea0794dd6fb52281924f4b1398f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a273ea0794dd6fb52281924f4b1398f5,
        type_description_1,
        par_self,
        par_partial,
        par_expected,
        NULL
    );


    // Release cached frame.
    if ( frame_a273ea0794dd6fb52281924f4b1398f5 == cache_frame_a273ea0794dd6fb52281924f4b1398f5 )
    {
        Py_DECREF( frame_a273ea0794dd6fb52281924f4b1398f5 );
    }
    cache_frame_a273ea0794dd6fb52281924f4b1398f5 = NULL;

    assertFrameObject( frame_a273ea0794dd6fb52281924f4b1398f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_partial );
    par_partial = NULL;

    Py_XDECREF( par_expected );
    par_expected = NULL;

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

    Py_XDECREF( par_partial );
    par_partial = NULL;

    Py_XDECREF( par_expected );
    par_expected = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_8___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_9___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_9877058e0b962e952c0eec3902e5d640 = NULL;

    struct Nuitka_FrameObject *frame_9877058e0b962e952c0eec3902e5d640;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9877058e0b962e952c0eec3902e5d640, codeobj_9877058e0b962e952c0eec3902e5d640, module_urllib3$exceptions, sizeof(void *) );
    frame_9877058e0b962e952c0eec3902e5d640 = cache_frame_9877058e0b962e952c0eec3902e5d640;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9877058e0b962e952c0eec3902e5d640 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9877058e0b962e952c0eec3902e5d640 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_7507dacd42331ff69ed33f16b17b92b8;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_expected );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 220;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9877058e0b962e952c0eec3902e5d640 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9877058e0b962e952c0eec3902e5d640 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9877058e0b962e952c0eec3902e5d640 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9877058e0b962e952c0eec3902e5d640, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9877058e0b962e952c0eec3902e5d640->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9877058e0b962e952c0eec3902e5d640, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9877058e0b962e952c0eec3902e5d640,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9877058e0b962e952c0eec3902e5d640 == cache_frame_9877058e0b962e952c0eec3902e5d640 )
    {
        Py_DECREF( frame_9877058e0b962e952c0eec3902e5d640 );
    }
    cache_frame_9877058e0b962e952c0eec3902e5d640 = NULL;

    assertFrameObject( frame_9877058e0b962e952c0eec3902e5d640 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_9___repr__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_9___repr__ );
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


static PyObject *impl_urllib3$exceptions$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_scheme = python_pars[ 1 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_288690e2f8112b5fec7df5a97da83d64 = NULL;

    struct Nuitka_FrameObject *frame_288690e2f8112b5fec7df5a97da83d64;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_288690e2f8112b5fec7df5a97da83d64, codeobj_288690e2f8112b5fec7df5a97da83d64, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_288690e2f8112b5fec7df5a97da83d64 = cache_frame_288690e2f8112b5fec7df5a97da83d64;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_288690e2f8112b5fec7df5a97da83d64 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_288690e2f8112b5fec7df5a97da83d64 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_ffd5c59803af63cf2041e83ca8e66823;
    tmp_right_name_1 = par_scheme;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxySchemeUnknown" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }

    frame_288690e2f8112b5fec7df5a97da83d64->m_frame.f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_288690e2f8112b5fec7df5a97da83d64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_288690e2f8112b5fec7df5a97da83d64 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_288690e2f8112b5fec7df5a97da83d64, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_288690e2f8112b5fec7df5a97da83d64->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_288690e2f8112b5fec7df5a97da83d64, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_288690e2f8112b5fec7df5a97da83d64,
        type_description_1,
        par_self,
        par_scheme,
        var_message,
        NULL
    );


    // Release cached frame.
    if ( frame_288690e2f8112b5fec7df5a97da83d64 == cache_frame_288690e2f8112b5fec7df5a97da83d64 )
    {
        Py_DECREF( frame_288690e2f8112b5fec7df5a97da83d64 );
    }
    cache_frame_288690e2f8112b5fec7df5a97da83d64 = NULL;

    assertFrameObject( frame_288690e2f8112b5fec7df5a97da83d64 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    Py_XDECREF( par_scheme );
    par_scheme = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_10___init__ );
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


static PyObject *impl_urllib3$exceptions$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_defects = python_pars[ 1 ];
    PyObject *par_unparsed_data = python_pars[ 2 ];
    PyObject *var_message = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_object_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_48b926a8c4041f03a75821ddcf921c7d = NULL;

    struct Nuitka_FrameObject *frame_48b926a8c4041f03a75821ddcf921c7d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_48b926a8c4041f03a75821ddcf921c7d, codeobj_48b926a8c4041f03a75821ddcf921c7d, module_urllib3$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_48b926a8c4041f03a75821ddcf921c7d = cache_frame_48b926a8c4041f03a75821ddcf921c7d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_48b926a8c4041f03a75821ddcf921c7d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_48b926a8c4041f03a75821ddcf921c7d ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_46584e2093371b92bd116a36f6fac20c;
    tmp_or_left_value_1 = par_defects;

    CHECK_OBJECT( tmp_or_left_value_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooooN";
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
    tmp_or_right_value_1 = const_str_plain_Unknown;
    tmp_tuple_element_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_tuple_element_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_unparsed_data;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    assert( var_message == NULL );
    var_message = tmp_assign_source_1;

    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HeaderParsingError );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HeaderParsingError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_message;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    frame_48b926a8c4041f03a75821ddcf921c7d->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48b926a8c4041f03a75821ddcf921c7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48b926a8c4041f03a75821ddcf921c7d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48b926a8c4041f03a75821ddcf921c7d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48b926a8c4041f03a75821ddcf921c7d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48b926a8c4041f03a75821ddcf921c7d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48b926a8c4041f03a75821ddcf921c7d,
        type_description_1,
        par_self,
        par_defects,
        par_unparsed_data,
        var_message,
        NULL
    );


    // Release cached frame.
    if ( frame_48b926a8c4041f03a75821ddcf921c7d == cache_frame_48b926a8c4041f03a75821ddcf921c7d )
    {
        Py_DECREF( frame_48b926a8c4041f03a75821ddcf921c7d );
    }
    cache_frame_48b926a8c4041f03a75821ddcf921c7d = NULL;

    assertFrameObject( frame_48b926a8c4041f03a75821ddcf921c7d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_11___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_defects );
    par_defects = NULL;

    Py_XDECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

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

    Py_XDECREF( par_defects );
    par_defects = NULL;

    Py_XDECREF( par_unparsed_data );
    par_unparsed_data = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions$$$function_11___init__ );
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



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_f2b3a878770698eea89e367a42f8081d,
#endif
        codeobj_288690e2f8112b5fec7df5a97da83d64,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_e97d412e3d3cfc92797a4434364dfe97,
#endif
        codeobj_48b926a8c4041f03a75821ddcf921c7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_2fd40a48b90d5dbc9586539edec8582e,
#endif
        codeobj_94e2813510e4d2f7587cf5ded0312096,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_2___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        const_str_digest_f23f32cee9faa00b4a74b12aefddc51b,
#endif
        codeobj_4237ee7a7ffff3da65dddb95c1988eac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_02d7a9258b08750dd91ed5e916d12d0c,
#endif
        codeobj_20c421452bc572f6f33b55403c0bd6d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_4___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        const_str_digest_aab7052c60d4b32517d511fe61caaef2,
#endif
        codeobj_0f9fa1c24853874bb80e703230b044ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_1841b6b2ce0a167ae67629f6be182242,
#endif
        codeobj_1df41be46f59f5904b858677cd4ecd97,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_18a413fa4e7663b93b8950f08b00fb5d,
#endif
        codeobj_b010931e10a70dc9f9d49b6bd789e4a6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_e6bf3288f7cb1387598878e66172f8b9,
#endif
        codeobj_8ffc3b83e4440cc13d943c9e2f35f2e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_9cd94d6d1a0a35ff358ca3b08bb3536e,
#endif
        codeobj_a273ea0794dd6fb52281924f4b1398f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$exceptions$$$function_9___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_fe0af2f284849636ec878ed7e8cbfc38,
#endif
        codeobj_9877058e0b962e952c0eec3902e5d640,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$exceptions,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$exceptions =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.exceptions",   /* m_name */
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

MOD_INIT_DECL( urllib3$exceptions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$exceptions );
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
    puts("urllib3.exceptions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.exceptions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.exceptions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$exceptions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$exceptions = Py_InitModule4(
        "urllib3.exceptions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$exceptions = PyModule_Create( &mdef_urllib3$exceptions );
#endif

    moduledict_urllib3$exceptions = MODULE_DICT( module_urllib3$exceptions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$exceptions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c8562bbff9d721153deb2fdd066393d0, module_urllib3$exceptions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *outline_23_var___class__ = NULL;
    PyObject *outline_24_var___class__ = NULL;
    PyObject *outline_25_var___class__ = NULL;
    PyObject *outline_26_var___class__ = NULL;
    PyObject *outline_27_var___class__ = NULL;
    PyObject *outline_28_var___class__ = NULL;
    PyObject *outline_29_var___class__ = NULL;
    PyObject *outline_30_var___class__ = NULL;
    PyObject *outline_31_var___class__ = NULL;
    PyObject *outline_32_var___class__ = NULL;
    PyObject *outline_33_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__bases_orig = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__bases_orig = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_25__bases = NULL;
    PyObject *tmp_class_creation_25__bases_orig = NULL;
    PyObject *tmp_class_creation_25__class_decl_dict = NULL;
    PyObject *tmp_class_creation_25__metaclass = NULL;
    PyObject *tmp_class_creation_25__prepared = NULL;
    PyObject *tmp_class_creation_26__bases = NULL;
    PyObject *tmp_class_creation_26__bases_orig = NULL;
    PyObject *tmp_class_creation_26__class_decl_dict = NULL;
    PyObject *tmp_class_creation_26__metaclass = NULL;
    PyObject *tmp_class_creation_26__prepared = NULL;
    PyObject *tmp_class_creation_27__bases = NULL;
    PyObject *tmp_class_creation_27__bases_orig = NULL;
    PyObject *tmp_class_creation_27__class_decl_dict = NULL;
    PyObject *tmp_class_creation_27__metaclass = NULL;
    PyObject *tmp_class_creation_27__prepared = NULL;
    PyObject *tmp_class_creation_28__bases = NULL;
    PyObject *tmp_class_creation_28__bases_orig = NULL;
    PyObject *tmp_class_creation_28__class_decl_dict = NULL;
    PyObject *tmp_class_creation_28__metaclass = NULL;
    PyObject *tmp_class_creation_28__prepared = NULL;
    PyObject *tmp_class_creation_29__bases = NULL;
    PyObject *tmp_class_creation_29__bases_orig = NULL;
    PyObject *tmp_class_creation_29__class_decl_dict = NULL;
    PyObject *tmp_class_creation_29__metaclass = NULL;
    PyObject *tmp_class_creation_29__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_30__bases = NULL;
    PyObject *tmp_class_creation_30__bases_orig = NULL;
    PyObject *tmp_class_creation_30__class_decl_dict = NULL;
    PyObject *tmp_class_creation_30__metaclass = NULL;
    PyObject *tmp_class_creation_30__prepared = NULL;
    PyObject *tmp_class_creation_31__bases = NULL;
    PyObject *tmp_class_creation_31__bases_orig = NULL;
    PyObject *tmp_class_creation_31__class_decl_dict = NULL;
    PyObject *tmp_class_creation_31__metaclass = NULL;
    PyObject *tmp_class_creation_31__prepared = NULL;
    PyObject *tmp_class_creation_32__bases = NULL;
    PyObject *tmp_class_creation_32__class_decl_dict = NULL;
    PyObject *tmp_class_creation_32__metaclass = NULL;
    PyObject *tmp_class_creation_32__prepared = NULL;
    PyObject *tmp_class_creation_33__bases = NULL;
    PyObject *tmp_class_creation_33__bases_orig = NULL;
    PyObject *tmp_class_creation_33__class_decl_dict = NULL;
    PyObject *tmp_class_creation_33__metaclass = NULL;
    PyObject *tmp_class_creation_33__prepared = NULL;
    PyObject *tmp_class_creation_34__bases = NULL;
    PyObject *tmp_class_creation_34__bases_orig = NULL;
    PyObject *tmp_class_creation_34__class_decl_dict = NULL;
    PyObject *tmp_class_creation_34__metaclass = NULL;
    PyObject *tmp_class_creation_34__prepared = NULL;
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
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    PyObject *exception_keeper_type_83;
    PyObject *exception_keeper_value_83;
    PyTracebackObject *exception_keeper_tb_83;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;
    PyObject *exception_keeper_type_84;
    PyObject *exception_keeper_value_84;
    PyTracebackObject *exception_keeper_tb_84;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_84;
    PyObject *exception_keeper_type_85;
    PyObject *exception_keeper_value_85;
    PyTracebackObject *exception_keeper_tb_85;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_85;
    PyObject *exception_keeper_type_86;
    PyObject *exception_keeper_value_86;
    PyTracebackObject *exception_keeper_tb_86;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_86;
    PyObject *exception_keeper_type_87;
    PyObject *exception_keeper_value_87;
    PyTracebackObject *exception_keeper_tb_87;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_87;
    PyObject *exception_keeper_type_88;
    PyObject *exception_keeper_value_88;
    PyTracebackObject *exception_keeper_tb_88;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_88;
    PyObject *exception_keeper_type_89;
    PyObject *exception_keeper_value_89;
    PyTracebackObject *exception_keeper_tb_89;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_89;
    PyObject *exception_keeper_type_90;
    PyObject *exception_keeper_value_90;
    PyTracebackObject *exception_keeper_tb_90;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_90;
    PyObject *exception_keeper_type_91;
    PyObject *exception_keeper_value_91;
    PyTracebackObject *exception_keeper_tb_91;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_91;
    PyObject *exception_keeper_type_92;
    PyObject *exception_keeper_value_92;
    PyTracebackObject *exception_keeper_tb_92;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_92;
    PyObject *exception_keeper_type_93;
    PyObject *exception_keeper_value_93;
    PyTracebackObject *exception_keeper_tb_93;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_93;
    PyObject *exception_keeper_type_94;
    PyObject *exception_keeper_value_94;
    PyTracebackObject *exception_keeper_tb_94;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_94;
    PyObject *exception_keeper_type_95;
    PyObject *exception_keeper_value_95;
    PyTracebackObject *exception_keeper_tb_95;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_95;
    PyObject *exception_keeper_type_96;
    PyObject *exception_keeper_value_96;
    PyTracebackObject *exception_keeper_tb_96;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_96;
    PyObject *exception_keeper_type_97;
    PyObject *exception_keeper_value_97;
    PyTracebackObject *exception_keeper_tb_97;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_97;
    PyObject *exception_keeper_type_98;
    PyObject *exception_keeper_value_98;
    PyTracebackObject *exception_keeper_tb_98;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_98;
    PyObject *exception_keeper_type_99;
    PyObject *exception_keeper_value_99;
    PyTracebackObject *exception_keeper_tb_99;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_99;
    PyObject *exception_keeper_type_100;
    PyObject *exception_keeper_value_100;
    PyTracebackObject *exception_keeper_tb_100;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_100;
    PyObject *exception_keeper_type_101;
    PyObject *exception_keeper_value_101;
    PyTracebackObject *exception_keeper_tb_101;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_101;
    PyObject *exception_keeper_type_102;
    PyObject *exception_keeper_value_102;
    PyTracebackObject *exception_keeper_tb_102;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_102;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
    PyObject *tmp_args_name_27;
    PyObject *tmp_args_name_28;
    PyObject *tmp_args_name_29;
    PyObject *tmp_args_name_30;
    PyObject *tmp_args_name_31;
    PyObject *tmp_args_name_32;
    PyObject *tmp_args_name_33;
    PyObject *tmp_args_name_34;
    PyObject *tmp_args_name_35;
    PyObject *tmp_args_name_36;
    PyObject *tmp_args_name_37;
    PyObject *tmp_args_name_38;
    PyObject *tmp_args_name_39;
    PyObject *tmp_args_name_40;
    PyObject *tmp_args_name_41;
    PyObject *tmp_args_name_42;
    PyObject *tmp_args_name_43;
    PyObject *tmp_args_name_44;
    PyObject *tmp_args_name_45;
    PyObject *tmp_args_name_46;
    PyObject *tmp_args_name_47;
    PyObject *tmp_args_name_48;
    PyObject *tmp_args_name_49;
    PyObject *tmp_args_name_50;
    PyObject *tmp_args_name_51;
    PyObject *tmp_args_name_52;
    PyObject *tmp_args_name_53;
    PyObject *tmp_args_name_54;
    PyObject *tmp_args_name_55;
    PyObject *tmp_args_name_56;
    PyObject *tmp_args_name_57;
    PyObject *tmp_args_name_58;
    PyObject *tmp_args_name_59;
    PyObject *tmp_args_name_60;
    PyObject *tmp_args_name_61;
    PyObject *tmp_args_name_62;
    PyObject *tmp_args_name_63;
    PyObject *tmp_args_name_64;
    PyObject *tmp_args_name_65;
    PyObject *tmp_args_name_66;
    PyObject *tmp_args_name_67;
    PyObject *tmp_args_name_68;
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
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
    PyObject *tmp_assign_source_186;
    PyObject *tmp_assign_source_187;
    PyObject *tmp_assign_source_188;
    PyObject *tmp_assign_source_189;
    PyObject *tmp_assign_source_190;
    PyObject *tmp_assign_source_191;
    PyObject *tmp_assign_source_192;
    PyObject *tmp_assign_source_193;
    PyObject *tmp_assign_source_194;
    PyObject *tmp_assign_source_195;
    PyObject *tmp_assign_source_196;
    PyObject *tmp_assign_source_197;
    PyObject *tmp_assign_source_198;
    PyObject *tmp_assign_source_199;
    PyObject *tmp_assign_source_200;
    PyObject *tmp_assign_source_201;
    PyObject *tmp_assign_source_202;
    PyObject *tmp_assign_source_203;
    PyObject *tmp_assign_source_204;
    PyObject *tmp_assign_source_205;
    PyObject *tmp_assign_source_206;
    PyObject *tmp_assign_source_207;
    PyObject *tmp_assign_source_208;
    PyObject *tmp_assign_source_209;
    PyObject *tmp_assign_source_210;
    PyObject *tmp_assign_source_211;
    PyObject *tmp_assign_source_212;
    PyObject *tmp_assign_source_213;
    PyObject *tmp_assign_source_214;
    PyObject *tmp_assign_source_215;
    PyObject *tmp_assign_source_216;
    PyObject *tmp_assign_source_217;
    PyObject *tmp_assign_source_218;
    PyObject *tmp_assign_source_219;
    PyObject *tmp_assign_source_220;
    PyObject *tmp_assign_source_221;
    PyObject *tmp_assign_source_222;
    PyObject *tmp_assign_source_223;
    PyObject *tmp_assign_source_224;
    PyObject *tmp_assign_source_225;
    PyObject *tmp_assign_source_226;
    PyObject *tmp_assign_source_227;
    PyObject *tmp_assign_source_228;
    PyObject *tmp_assign_source_229;
    PyObject *tmp_assign_source_230;
    PyObject *tmp_assign_source_231;
    PyObject *tmp_assign_source_232;
    PyObject *tmp_assign_source_233;
    PyObject *tmp_assign_source_234;
    PyObject *tmp_assign_source_235;
    PyObject *tmp_assign_source_236;
    PyObject *tmp_assign_source_237;
    PyObject *tmp_assign_source_238;
    PyObject *tmp_assign_source_239;
    PyObject *tmp_assign_source_240;
    PyObject *tmp_assign_source_241;
    PyObject *tmp_assign_source_242;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
    PyObject *tmp_bases_name_14;
    PyObject *tmp_bases_name_15;
    PyObject *tmp_bases_name_16;
    PyObject *tmp_bases_name_17;
    PyObject *tmp_bases_name_18;
    PyObject *tmp_bases_name_19;
    PyObject *tmp_bases_name_20;
    PyObject *tmp_bases_name_21;
    PyObject *tmp_bases_name_22;
    PyObject *tmp_bases_name_23;
    PyObject *tmp_bases_name_24;
    PyObject *tmp_bases_name_25;
    PyObject *tmp_bases_name_26;
    PyObject *tmp_bases_name_27;
    PyObject *tmp_bases_name_28;
    PyObject *tmp_bases_name_29;
    PyObject *tmp_bases_name_30;
    PyObject *tmp_bases_name_31;
    PyObject *tmp_bases_name_32;
    PyObject *tmp_bases_name_33;
    PyObject *tmp_bases_name_34;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    PyObject *tmp_called_name_58;
    PyObject *tmp_called_name_59;
    PyObject *tmp_called_name_60;
    PyObject *tmp_called_name_61;
    PyObject *tmp_called_name_62;
    PyObject *tmp_called_name_63;
    PyObject *tmp_called_name_64;
    PyObject *tmp_called_name_65;
    PyObject *tmp_called_name_66;
    PyObject *tmp_called_name_67;
    PyObject *tmp_called_name_68;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
    int tmp_cmp_NotEq_5;
    int tmp_cmp_NotEq_6;
    int tmp_cmp_NotEq_7;
    int tmp_cmp_NotEq_8;
    int tmp_cmp_NotEq_9;
    int tmp_cmp_NotEq_10;
    int tmp_cmp_NotEq_11;
    int tmp_cmp_NotEq_12;
    int tmp_cmp_NotEq_13;
    int tmp_cmp_NotEq_14;
    int tmp_cmp_NotEq_15;
    int tmp_cmp_NotEq_16;
    int tmp_cmp_NotEq_17;
    int tmp_cmp_NotEq_18;
    int tmp_cmp_NotEq_19;
    int tmp_cmp_NotEq_20;
    int tmp_cmp_NotEq_21;
    int tmp_cmp_NotEq_22;
    int tmp_cmp_NotEq_23;
    int tmp_cmp_NotEq_24;
    int tmp_cmp_NotEq_25;
    int tmp_cmp_NotEq_26;
    int tmp_cmp_NotEq_27;
    int tmp_cmp_NotEq_28;
    int tmp_cmp_NotEq_29;
    int tmp_cmp_NotEq_30;
    int tmp_cmp_NotEq_31;
    int tmp_cmp_NotEq_32;
    int tmp_cmp_NotEq_33;
    int tmp_cmp_NotEq_34;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
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
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    int tmp_cond_truth_27;
    int tmp_cond_truth_28;
    int tmp_cond_truth_29;
    int tmp_cond_truth_30;
    int tmp_cond_truth_31;
    int tmp_cond_truth_32;
    int tmp_cond_truth_33;
    int tmp_cond_truth_34;
    int tmp_cond_truth_35;
    int tmp_cond_truth_36;
    int tmp_cond_truth_37;
    int tmp_cond_truth_38;
    int tmp_cond_truth_39;
    int tmp_cond_truth_40;
    int tmp_cond_truth_41;
    int tmp_cond_truth_42;
    int tmp_cond_truth_43;
    int tmp_cond_truth_44;
    int tmp_cond_truth_45;
    int tmp_cond_truth_46;
    int tmp_cond_truth_47;
    int tmp_cond_truth_48;
    int tmp_cond_truth_49;
    int tmp_cond_truth_50;
    int tmp_cond_truth_51;
    int tmp_cond_truth_52;
    int tmp_cond_truth_53;
    int tmp_cond_truth_54;
    int tmp_cond_truth_55;
    int tmp_cond_truth_56;
    int tmp_cond_truth_57;
    int tmp_cond_truth_58;
    int tmp_cond_truth_59;
    int tmp_cond_truth_60;
    int tmp_cond_truth_61;
    int tmp_cond_truth_62;
    int tmp_cond_truth_63;
    int tmp_cond_truth_64;
    int tmp_cond_truth_65;
    int tmp_cond_truth_66;
    int tmp_cond_truth_67;
    int tmp_cond_truth_68;
    int tmp_cond_truth_69;
    int tmp_cond_truth_70;
    int tmp_cond_truth_71;
    int tmp_cond_truth_72;
    int tmp_cond_truth_73;
    int tmp_cond_truth_74;
    int tmp_cond_truth_75;
    int tmp_cond_truth_76;
    int tmp_cond_truth_77;
    int tmp_cond_truth_78;
    int tmp_cond_truth_79;
    int tmp_cond_truth_80;
    int tmp_cond_truth_81;
    int tmp_cond_truth_82;
    int tmp_cond_truth_83;
    int tmp_cond_truth_84;
    int tmp_cond_truth_85;
    int tmp_cond_truth_86;
    int tmp_cond_truth_87;
    int tmp_cond_truth_88;
    int tmp_cond_truth_89;
    int tmp_cond_truth_90;
    int tmp_cond_truth_91;
    int tmp_cond_truth_92;
    int tmp_cond_truth_93;
    int tmp_cond_truth_94;
    int tmp_cond_truth_95;
    int tmp_cond_truth_96;
    int tmp_cond_truth_97;
    int tmp_cond_truth_98;
    int tmp_cond_truth_99;
    int tmp_cond_truth_100;
    int tmp_cond_truth_101;
    int tmp_cond_truth_102;
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
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_cond_value_27;
    PyObject *tmp_cond_value_28;
    PyObject *tmp_cond_value_29;
    PyObject *tmp_cond_value_30;
    PyObject *tmp_cond_value_31;
    PyObject *tmp_cond_value_32;
    PyObject *tmp_cond_value_33;
    PyObject *tmp_cond_value_34;
    PyObject *tmp_cond_value_35;
    PyObject *tmp_cond_value_36;
    PyObject *tmp_cond_value_37;
    PyObject *tmp_cond_value_38;
    PyObject *tmp_cond_value_39;
    PyObject *tmp_cond_value_40;
    PyObject *tmp_cond_value_41;
    PyObject *tmp_cond_value_42;
    PyObject *tmp_cond_value_43;
    PyObject *tmp_cond_value_44;
    PyObject *tmp_cond_value_45;
    PyObject *tmp_cond_value_46;
    PyObject *tmp_cond_value_47;
    PyObject *tmp_cond_value_48;
    PyObject *tmp_cond_value_49;
    PyObject *tmp_cond_value_50;
    PyObject *tmp_cond_value_51;
    PyObject *tmp_cond_value_52;
    PyObject *tmp_cond_value_53;
    PyObject *tmp_cond_value_54;
    PyObject *tmp_cond_value_55;
    PyObject *tmp_cond_value_56;
    PyObject *tmp_cond_value_57;
    PyObject *tmp_cond_value_58;
    PyObject *tmp_cond_value_59;
    PyObject *tmp_cond_value_60;
    PyObject *tmp_cond_value_61;
    PyObject *tmp_cond_value_62;
    PyObject *tmp_cond_value_63;
    PyObject *tmp_cond_value_64;
    PyObject *tmp_cond_value_65;
    PyObject *tmp_cond_value_66;
    PyObject *tmp_cond_value_67;
    PyObject *tmp_cond_value_68;
    PyObject *tmp_cond_value_69;
    PyObject *tmp_cond_value_70;
    PyObject *tmp_cond_value_71;
    PyObject *tmp_cond_value_72;
    PyObject *tmp_cond_value_73;
    PyObject *tmp_cond_value_74;
    PyObject *tmp_cond_value_75;
    PyObject *tmp_cond_value_76;
    PyObject *tmp_cond_value_77;
    PyObject *tmp_cond_value_78;
    PyObject *tmp_cond_value_79;
    PyObject *tmp_cond_value_80;
    PyObject *tmp_cond_value_81;
    PyObject *tmp_cond_value_82;
    PyObject *tmp_cond_value_83;
    PyObject *tmp_cond_value_84;
    PyObject *tmp_cond_value_85;
    PyObject *tmp_cond_value_86;
    PyObject *tmp_cond_value_87;
    PyObject *tmp_cond_value_88;
    PyObject *tmp_cond_value_89;
    PyObject *tmp_cond_value_90;
    PyObject *tmp_cond_value_91;
    PyObject *tmp_cond_value_92;
    PyObject *tmp_cond_value_93;
    PyObject *tmp_cond_value_94;
    PyObject *tmp_cond_value_95;
    PyObject *tmp_cond_value_96;
    PyObject *tmp_cond_value_97;
    PyObject *tmp_cond_value_98;
    PyObject *tmp_cond_value_99;
    PyObject *tmp_cond_value_100;
    PyObject *tmp_cond_value_101;
    PyObject *tmp_cond_value_102;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
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
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dict_name_31;
    PyObject *tmp_dict_name_32;
    PyObject *tmp_dict_name_33;
    PyObject *tmp_dict_name_34;
    PyObject *tmp_dict_name_35;
    PyObject *tmp_dict_name_36;
    PyObject *tmp_dict_name_37;
    PyObject *tmp_dict_name_38;
    PyObject *tmp_dict_name_39;
    PyObject *tmp_dict_name_40;
    PyObject *tmp_dict_name_41;
    PyObject *tmp_dict_name_42;
    PyObject *tmp_dict_name_43;
    PyObject *tmp_dict_name_44;
    PyObject *tmp_dict_name_45;
    PyObject *tmp_dict_name_46;
    PyObject *tmp_dict_name_47;
    PyObject *tmp_dict_name_48;
    PyObject *tmp_dict_name_49;
    PyObject *tmp_dict_name_50;
    PyObject *tmp_dict_name_51;
    PyObject *tmp_dict_name_52;
    PyObject *tmp_dict_name_53;
    PyObject *tmp_dict_name_54;
    PyObject *tmp_dict_name_55;
    PyObject *tmp_dict_name_56;
    PyObject *tmp_dict_name_57;
    PyObject *tmp_dict_name_58;
    PyObject *tmp_dict_name_59;
    PyObject *tmp_dict_name_60;
    PyObject *tmp_dict_name_61;
    PyObject *tmp_dict_name_62;
    PyObject *tmp_dict_name_63;
    PyObject *tmp_dict_name_64;
    PyObject *tmp_dict_name_65;
    PyObject *tmp_dict_name_66;
    PyObject *tmp_dict_name_67;
    PyObject *tmp_dict_name_68;
    PyObject *tmp_dict_name_69;
    PyObject *tmp_dict_name_70;
    PyObject *tmp_dict_name_71;
    PyObject *tmp_dict_name_72;
    PyObject *tmp_dict_name_73;
    PyObject *tmp_dict_name_74;
    PyObject *tmp_dict_name_75;
    PyObject *tmp_dict_name_76;
    PyObject *tmp_dict_name_77;
    PyObject *tmp_dict_name_78;
    PyObject *tmp_dict_name_79;
    PyObject *tmp_dict_name_80;
    PyObject *tmp_dict_name_81;
    PyObject *tmp_dict_name_82;
    PyObject *tmp_dict_name_83;
    PyObject *tmp_dict_name_84;
    PyObject *tmp_dict_name_85;
    PyObject *tmp_dict_name_86;
    PyObject *tmp_dict_name_87;
    PyObject *tmp_dict_name_88;
    PyObject *tmp_dict_name_89;
    PyObject *tmp_dict_name_90;
    PyObject *tmp_dict_name_91;
    PyObject *tmp_dict_name_92;
    PyObject *tmp_dict_name_93;
    PyObject *tmp_dict_name_94;
    PyObject *tmp_dict_name_95;
    PyObject *tmp_dict_name_96;
    PyObject *tmp_dict_name_97;
    PyObject *tmp_dict_name_98;
    PyObject *tmp_dict_name_99;
    PyObject *tmp_dict_name_100;
    PyObject *tmp_dict_name_101;
    PyObject *tmp_dict_name_102;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_dircall_arg1_5;
    PyObject *tmp_dircall_arg1_6;
    PyObject *tmp_dircall_arg1_7;
    PyObject *tmp_dircall_arg1_8;
    PyObject *tmp_dircall_arg1_9;
    PyObject *tmp_dircall_arg1_10;
    PyObject *tmp_dircall_arg1_11;
    PyObject *tmp_dircall_arg1_12;
    PyObject *tmp_dircall_arg1_13;
    PyObject *tmp_dircall_arg1_14;
    PyObject *tmp_dircall_arg1_15;
    PyObject *tmp_dircall_arg1_16;
    PyObject *tmp_dircall_arg1_17;
    PyObject *tmp_dircall_arg1_18;
    PyObject *tmp_dircall_arg1_19;
    PyObject *tmp_dircall_arg1_20;
    PyObject *tmp_dircall_arg1_21;
    PyObject *tmp_dircall_arg1_22;
    PyObject *tmp_dircall_arg1_23;
    PyObject *tmp_dircall_arg1_24;
    PyObject *tmp_dircall_arg1_25;
    PyObject *tmp_dircall_arg1_26;
    PyObject *tmp_dircall_arg1_27;
    PyObject *tmp_dircall_arg1_28;
    PyObject *tmp_dircall_arg1_29;
    PyObject *tmp_dircall_arg1_30;
    PyObject *tmp_dircall_arg1_31;
    PyObject *tmp_dircall_arg1_32;
    PyObject *tmp_dircall_arg1_33;
    PyObject *tmp_dircall_arg1_34;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_attr_15;
    PyObject *tmp_hasattr_attr_16;
    PyObject *tmp_hasattr_attr_17;
    PyObject *tmp_hasattr_attr_18;
    PyObject *tmp_hasattr_attr_19;
    PyObject *tmp_hasattr_attr_20;
    PyObject *tmp_hasattr_attr_21;
    PyObject *tmp_hasattr_attr_22;
    PyObject *tmp_hasattr_attr_23;
    PyObject *tmp_hasattr_attr_24;
    PyObject *tmp_hasattr_attr_25;
    PyObject *tmp_hasattr_attr_26;
    PyObject *tmp_hasattr_attr_27;
    PyObject *tmp_hasattr_attr_28;
    PyObject *tmp_hasattr_attr_29;
    PyObject *tmp_hasattr_attr_30;
    PyObject *tmp_hasattr_attr_31;
    PyObject *tmp_hasattr_attr_32;
    PyObject *tmp_hasattr_attr_33;
    PyObject *tmp_hasattr_attr_34;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
    PyObject *tmp_hasattr_source_15;
    PyObject *tmp_hasattr_source_16;
    PyObject *tmp_hasattr_source_17;
    PyObject *tmp_hasattr_source_18;
    PyObject *tmp_hasattr_source_19;
    PyObject *tmp_hasattr_source_20;
    PyObject *tmp_hasattr_source_21;
    PyObject *tmp_hasattr_source_22;
    PyObject *tmp_hasattr_source_23;
    PyObject *tmp_hasattr_source_24;
    PyObject *tmp_hasattr_source_25;
    PyObject *tmp_hasattr_source_26;
    PyObject *tmp_hasattr_source_27;
    PyObject *tmp_hasattr_source_28;
    PyObject *tmp_hasattr_source_29;
    PyObject *tmp_hasattr_source_30;
    PyObject *tmp_hasattr_source_31;
    PyObject *tmp_hasattr_source_32;
    PyObject *tmp_hasattr_source_33;
    PyObject *tmp_hasattr_source_34;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
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
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_key_name_31;
    PyObject *tmp_key_name_32;
    PyObject *tmp_key_name_33;
    PyObject *tmp_key_name_34;
    PyObject *tmp_key_name_35;
    PyObject *tmp_key_name_36;
    PyObject *tmp_key_name_37;
    PyObject *tmp_key_name_38;
    PyObject *tmp_key_name_39;
    PyObject *tmp_key_name_40;
    PyObject *tmp_key_name_41;
    PyObject *tmp_key_name_42;
    PyObject *tmp_key_name_43;
    PyObject *tmp_key_name_44;
    PyObject *tmp_key_name_45;
    PyObject *tmp_key_name_46;
    PyObject *tmp_key_name_47;
    PyObject *tmp_key_name_48;
    PyObject *tmp_key_name_49;
    PyObject *tmp_key_name_50;
    PyObject *tmp_key_name_51;
    PyObject *tmp_key_name_52;
    PyObject *tmp_key_name_53;
    PyObject *tmp_key_name_54;
    PyObject *tmp_key_name_55;
    PyObject *tmp_key_name_56;
    PyObject *tmp_key_name_57;
    PyObject *tmp_key_name_58;
    PyObject *tmp_key_name_59;
    PyObject *tmp_key_name_60;
    PyObject *tmp_key_name_61;
    PyObject *tmp_key_name_62;
    PyObject *tmp_key_name_63;
    PyObject *tmp_key_name_64;
    PyObject *tmp_key_name_65;
    PyObject *tmp_key_name_66;
    PyObject *tmp_key_name_67;
    PyObject *tmp_key_name_68;
    PyObject *tmp_key_name_69;
    PyObject *tmp_key_name_70;
    PyObject *tmp_key_name_71;
    PyObject *tmp_key_name_72;
    PyObject *tmp_key_name_73;
    PyObject *tmp_key_name_74;
    PyObject *tmp_key_name_75;
    PyObject *tmp_key_name_76;
    PyObject *tmp_key_name_77;
    PyObject *tmp_key_name_78;
    PyObject *tmp_key_name_79;
    PyObject *tmp_key_name_80;
    PyObject *tmp_key_name_81;
    PyObject *tmp_key_name_82;
    PyObject *tmp_key_name_83;
    PyObject *tmp_key_name_84;
    PyObject *tmp_key_name_85;
    PyObject *tmp_key_name_86;
    PyObject *tmp_key_name_87;
    PyObject *tmp_key_name_88;
    PyObject *tmp_key_name_89;
    PyObject *tmp_key_name_90;
    PyObject *tmp_key_name_91;
    PyObject *tmp_key_name_92;
    PyObject *tmp_key_name_93;
    PyObject *tmp_key_name_94;
    PyObject *tmp_key_name_95;
    PyObject *tmp_key_name_96;
    PyObject *tmp_key_name_97;
    PyObject *tmp_key_name_98;
    PyObject *tmp_key_name_99;
    PyObject *tmp_key_name_100;
    PyObject *tmp_key_name_101;
    PyObject *tmp_key_name_102;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
    PyObject *tmp_kw_name_27;
    PyObject *tmp_kw_name_28;
    PyObject *tmp_kw_name_29;
    PyObject *tmp_kw_name_30;
    PyObject *tmp_kw_name_31;
    PyObject *tmp_kw_name_32;
    PyObject *tmp_kw_name_33;
    PyObject *tmp_kw_name_34;
    PyObject *tmp_kw_name_35;
    PyObject *tmp_kw_name_36;
    PyObject *tmp_kw_name_37;
    PyObject *tmp_kw_name_38;
    PyObject *tmp_kw_name_39;
    PyObject *tmp_kw_name_40;
    PyObject *tmp_kw_name_41;
    PyObject *tmp_kw_name_42;
    PyObject *tmp_kw_name_43;
    PyObject *tmp_kw_name_44;
    PyObject *tmp_kw_name_45;
    PyObject *tmp_kw_name_46;
    PyObject *tmp_kw_name_47;
    PyObject *tmp_kw_name_48;
    PyObject *tmp_kw_name_49;
    PyObject *tmp_kw_name_50;
    PyObject *tmp_kw_name_51;
    PyObject *tmp_kw_name_52;
    PyObject *tmp_kw_name_53;
    PyObject *tmp_kw_name_54;
    PyObject *tmp_kw_name_55;
    PyObject *tmp_kw_name_56;
    PyObject *tmp_kw_name_57;
    PyObject *tmp_kw_name_58;
    PyObject *tmp_kw_name_59;
    PyObject *tmp_kw_name_60;
    PyObject *tmp_kw_name_61;
    PyObject *tmp_kw_name_62;
    PyObject *tmp_kw_name_63;
    PyObject *tmp_kw_name_64;
    PyObject *tmp_kw_name_65;
    PyObject *tmp_kw_name_66;
    PyObject *tmp_kw_name_67;
    PyObject *tmp_kw_name_68;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
    PyObject *tmp_metaclass_name_14;
    PyObject *tmp_metaclass_name_15;
    PyObject *tmp_metaclass_name_16;
    PyObject *tmp_metaclass_name_17;
    PyObject *tmp_metaclass_name_18;
    PyObject *tmp_metaclass_name_19;
    PyObject *tmp_metaclass_name_20;
    PyObject *tmp_metaclass_name_21;
    PyObject *tmp_metaclass_name_22;
    PyObject *tmp_metaclass_name_23;
    PyObject *tmp_metaclass_name_24;
    PyObject *tmp_metaclass_name_25;
    PyObject *tmp_metaclass_name_26;
    PyObject *tmp_metaclass_name_27;
    PyObject *tmp_metaclass_name_28;
    PyObject *tmp_metaclass_name_29;
    PyObject *tmp_metaclass_name_30;
    PyObject *tmp_metaclass_name_31;
    PyObject *tmp_metaclass_name_32;
    PyObject *tmp_metaclass_name_33;
    PyObject *tmp_metaclass_name_34;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
    PyObject *tmp_outline_return_value_15;
    PyObject *tmp_outline_return_value_16;
    PyObject *tmp_outline_return_value_17;
    PyObject *tmp_outline_return_value_18;
    PyObject *tmp_outline_return_value_19;
    PyObject *tmp_outline_return_value_20;
    PyObject *tmp_outline_return_value_21;
    PyObject *tmp_outline_return_value_22;
    PyObject *tmp_outline_return_value_23;
    PyObject *tmp_outline_return_value_24;
    PyObject *tmp_outline_return_value_25;
    PyObject *tmp_outline_return_value_26;
    PyObject *tmp_outline_return_value_27;
    PyObject *tmp_outline_return_value_28;
    PyObject *tmp_outline_return_value_29;
    PyObject *tmp_outline_return_value_30;
    PyObject *tmp_outline_return_value_31;
    PyObject *tmp_outline_return_value_32;
    PyObject *tmp_outline_return_value_33;
    PyObject *tmp_outline_return_value_34;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscribed_name_24;
    PyObject *tmp_subscribed_name_25;
    PyObject *tmp_subscribed_name_26;
    PyObject *tmp_subscribed_name_27;
    PyObject *tmp_subscribed_name_28;
    PyObject *tmp_subscribed_name_29;
    PyObject *tmp_subscribed_name_30;
    PyObject *tmp_subscribed_name_31;
    PyObject *tmp_subscribed_name_32;
    PyObject *tmp_subscribed_name_33;
    PyObject *tmp_subscribed_name_34;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_subscript_name_24;
    PyObject *tmp_subscript_name_25;
    PyObject *tmp_subscript_name_26;
    PyObject *tmp_subscript_name_27;
    PyObject *tmp_subscript_name_28;
    PyObject *tmp_subscript_name_29;
    PyObject *tmp_subscript_name_30;
    PyObject *tmp_subscript_name_31;
    PyObject *tmp_subscript_name_32;
    PyObject *tmp_subscript_name_33;
    PyObject *tmp_subscript_name_34;
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
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_tuple_element_61;
    PyObject *tmp_tuple_element_62;
    PyObject *tmp_tuple_element_63;
    PyObject *tmp_tuple_element_64;
    PyObject *tmp_tuple_element_65;
    PyObject *tmp_tuple_element_66;
    PyObject *tmp_tuple_element_67;
    PyObject *tmp_tuple_element_68;
    PyObject *tmp_tuple_element_69;
    PyObject *tmp_tuple_element_70;
    PyObject *tmp_tuple_element_71;
    PyObject *tmp_tuple_element_72;
    PyObject *tmp_tuple_element_73;
    PyObject *tmp_tuple_element_74;
    PyObject *tmp_tuple_element_75;
    PyObject *tmp_tuple_element_76;
    PyObject *tmp_tuple_element_77;
    PyObject *tmp_tuple_element_78;
    PyObject *tmp_tuple_element_79;
    PyObject *tmp_tuple_element_80;
    PyObject *tmp_tuple_element_81;
    PyObject *tmp_tuple_element_82;
    PyObject *tmp_tuple_element_83;
    PyObject *tmp_tuple_element_84;
    PyObject *tmp_tuple_element_85;
    PyObject *tmp_tuple_element_86;
    PyObject *tmp_tuple_element_87;
    PyObject *tmp_tuple_element_88;
    PyObject *tmp_tuple_element_89;
    PyObject *tmp_tuple_element_90;
    PyObject *tmp_tuple_element_91;
    PyObject *tmp_tuple_element_92;
    PyObject *tmp_tuple_element_93;
    PyObject *tmp_tuple_element_94;
    PyObject *tmp_tuple_element_95;
    PyObject *tmp_tuple_element_96;
    PyObject *tmp_tuple_element_97;
    PyObject *tmp_tuple_element_98;
    PyObject *tmp_tuple_element_99;
    PyObject *tmp_tuple_element_100;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    PyObject *tmp_type_arg_14;
    PyObject *tmp_type_arg_15;
    PyObject *tmp_type_arg_16;
    PyObject *tmp_type_arg_17;
    PyObject *tmp_type_arg_18;
    PyObject *tmp_type_arg_19;
    PyObject *tmp_type_arg_20;
    PyObject *tmp_type_arg_21;
    PyObject *tmp_type_arg_22;
    PyObject *tmp_type_arg_23;
    PyObject *tmp_type_arg_24;
    PyObject *tmp_type_arg_25;
    PyObject *tmp_type_arg_26;
    PyObject *tmp_type_arg_27;
    PyObject *tmp_type_arg_28;
    PyObject *tmp_type_arg_29;
    PyObject *tmp_type_arg_30;
    PyObject *tmp_type_arg_31;
    PyObject *tmp_type_arg_32;
    PyObject *tmp_type_arg_33;
    PyObject *tmp_type_arg_34;
    static struct Nuitka_FrameObject *cache_frame_17cf62f8028e739b3d6b9e79f1a7979c_2 = NULL;

    struct Nuitka_FrameObject *frame_17cf62f8028e739b3d6b9e79f1a7979c_2;

    static struct Nuitka_FrameObject *cache_frame_d59cfd976817319ca1f2b46cc165e29b_3 = NULL;

    struct Nuitka_FrameObject *frame_d59cfd976817319ca1f2b46cc165e29b_3;

    static struct Nuitka_FrameObject *cache_frame_3915a90d06ac94139419123a583c0479_4 = NULL;

    struct Nuitka_FrameObject *frame_3915a90d06ac94139419123a583c0479_4;

    static struct Nuitka_FrameObject *cache_frame_4318673106556d40710b76adeea7f65a_5 = NULL;

    struct Nuitka_FrameObject *frame_4318673106556d40710b76adeea7f65a_5;

    static struct Nuitka_FrameObject *cache_frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 = NULL;

    struct Nuitka_FrameObject *frame_b769cbc5e466e9cf24a6178bc5ca9d23_6;

    static struct Nuitka_FrameObject *cache_frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 = NULL;

    struct Nuitka_FrameObject *frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7;

    static struct Nuitka_FrameObject *cache_frame_60b3d30a126b78e0f83e530a3e43004b_8 = NULL;

    struct Nuitka_FrameObject *frame_60b3d30a126b78e0f83e530a3e43004b_8;

    static struct Nuitka_FrameObject *cache_frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 = NULL;

    struct Nuitka_FrameObject *frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9;

    static struct Nuitka_FrameObject *cache_frame_712a9dabde300f28a3c2156409cabcca_10 = NULL;

    struct Nuitka_FrameObject *frame_712a9dabde300f28a3c2156409cabcca_10;

    struct Nuitka_FrameObject *frame_cc952fed92243b2437b2ac459873ba13;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    tmp_outline_return_value_15 = NULL;
    tmp_outline_return_value_16 = NULL;
    tmp_outline_return_value_17 = NULL;
    tmp_outline_return_value_18 = NULL;
    tmp_outline_return_value_19 = NULL;
    tmp_outline_return_value_20 = NULL;
    tmp_outline_return_value_21 = NULL;
    tmp_outline_return_value_22 = NULL;
    tmp_outline_return_value_23 = NULL;
    tmp_outline_return_value_24 = NULL;
    tmp_outline_return_value_25 = NULL;
    tmp_outline_return_value_26 = NULL;
    tmp_outline_return_value_27 = NULL;
    tmp_outline_return_value_28 = NULL;
    tmp_outline_return_value_29 = NULL;
    tmp_outline_return_value_30 = NULL;
    tmp_outline_return_value_31 = NULL;
    tmp_outline_return_value_32 = NULL;
    tmp_outline_return_value_33 = NULL;
    tmp_outline_return_value_34 = NULL;
    PyObject *locals_urllib3$exceptions_237 = NULL;
    PyObject *locals_urllib3$exceptions_199 = NULL;
    PyObject *locals_urllib3$exceptions_94 = NULL;
    PyObject *locals_urllib3$exceptions_186 = NULL;
    PyObject *locals_urllib3$exceptions_66 = NULL;
    PyObject *locals_urllib3$exceptions_8 = NULL;
    PyObject *locals_urllib3$exceptions_99 = NULL;
    PyObject *locals_urllib3$exceptions_135 = NULL;
    PyObject *locals_urllib3$exceptions_108 = NULL;
    PyObject *locals_urllib3$exceptions_150 = NULL;
    PyObject *locals_urllib3$exceptions_207 = NULL;
    PyObject *locals_urllib3$exceptions_156 = NULL;
    PyObject *locals_urllib3$exceptions_115 = NULL;
    PyObject *locals_urllib3$exceptions_176 = NULL;
    PyObject *locals_urllib3$exceptions_85 = NULL;
    PyObject *locals_urllib3$exceptions_29 = NULL;
    PyObject *locals_urllib3$exceptions_166 = NULL;
    PyObject *locals_urllib3$exceptions_194 = NULL;
    PyObject *locals_urllib3$exceptions_161 = NULL;
    PyObject *locals_urllib3$exceptions_55 = NULL;
    PyObject *locals_urllib3$exceptions_244 = NULL;
    PyObject *locals_urllib3$exceptions_223 = NULL;
    PyObject *locals_urllib3$exceptions_130 = NULL;
    PyObject *locals_urllib3$exceptions_140 = NULL;
    PyObject *locals_urllib3$exceptions_125 = NULL;
    PyObject *locals_urllib3$exceptions_120 = NULL;
    PyObject *locals_urllib3$exceptions_171 = NULL;
    PyObject *locals_urllib3$exceptions_228 = NULL;
    PyObject *locals_urllib3$exceptions_45 = NULL;
    PyObject *locals_urllib3$exceptions_181 = NULL;
    PyObject *locals_urllib3$exceptions_50 = NULL;
    PyObject *locals_urllib3$exceptions_13 = NULL;
    PyObject *locals_urllib3$exceptions_18 = NULL;
    PyObject *locals_urllib3$exceptions_40 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c0a49ca9a098ec7e081a9e7110b03fed;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_cc952fed92243b2437b2ac459873ba13 = MAKE_MODULE_FRAME( codeobj_cc952fed92243b2437b2ac459873ba13, module_urllib3$exceptions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_cc952fed92243b2437b2ac459873ba13 );
    assert( Py_REFCNT( frame_cc952fed92243b2437b2ac459873ba13 ) == 2 );

    // Framed code:
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_digest_0f2eb9f71c85852d8e24437103b38cdd;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$exceptions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_IncompleteRead_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_IncompleteRead,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_IncompleteRead );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead, tmp_assign_source_5 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_6 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

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


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

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


        exception_lineno = 8;

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


        exception_lineno = 8;

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


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

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


        exception_lineno = 8;

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


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

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


        exception_lineno = 8;

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


        exception_lineno = 8;

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


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    tmp_tuple_element_1 = const_str_plain_HTTPError;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 8;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

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
    locals_urllib3$exceptions_8 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_8, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_digest_664d83eb41f8cfe3a1092e98f7d92027;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_8, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_HTTPError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_8, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_3;
    }
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_type_Exception_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

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
    tmp_dictset_value = const_tuple_type_Exception_tuple;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_8, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain_HTTPError;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_urllib3$exceptions_8;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 8;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_11;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_urllib3$exceptions_8 );
    locals_urllib3$exceptions_8 = NULL;
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

    Py_DECREF( locals_urllib3$exceptions_8 );
    locals_urllib3$exceptions_8 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 8;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_10 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_10 );
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
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;

        goto try_except_handler_4;
    }

    tmp_assign_source_12 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_12;

    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_13 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_13;

    tmp_assign_source_14 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_14;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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
    tmp_assign_source_15 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_15;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    tmp_tuple_element_4 = const_str_plain_HTTPWarning;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 13;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_16 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_16;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_13 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_13, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_6;
    }
    tmp_dictset_value = const_str_digest_c85fd95998d676bb8b296c5552d11916;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_13, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_6;
    }
    tmp_dictset_value = const_str_plain_HTTPWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_13, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_6;
    }
    tmp_compare_left_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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
    tmp_dictset_value = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_13, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_6;
    }
    branch_no_4:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_5 = const_str_plain_HTTPWarning;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_urllib3$exceptions_13;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 13;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_18;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_urllib3$exceptions_13 );
    locals_urllib3$exceptions_13 = NULL;
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

    Py_DECREF( locals_urllib3$exceptions_13 );
    locals_urllib3$exceptions_13 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 13;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_17 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning, tmp_assign_source_17 );
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
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;

        goto try_except_handler_7;
    }

    tmp_assign_source_19 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_19, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_19;

    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_20 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_20;

    tmp_assign_source_21 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_21;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

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


        exception_lineno = 18;

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


        exception_lineno = 18;

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


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

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
    tmp_assign_source_22 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_22;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

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


        exception_lineno = 18;

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


        exception_lineno = 18;

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


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    tmp_tuple_element_7 = const_str_plain_PoolError;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 18;
    tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_7;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_23 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_23;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_18 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_18, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_digest_401d5766bd48277296aa1afc93f98bc4;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_18, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_plain_PoolError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_18, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_9;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_17cf62f8028e739b3d6b9e79f1a7979c_2, codeobj_17cf62f8028e739b3d6b9e79f1a7979c, module_urllib3$exceptions, sizeof(void *) );
    frame_17cf62f8028e739b3d6b9e79f1a7979c_2 = cache_frame_17cf62f8028e739b3d6b9e79f1a7979c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_18, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_2___reduce__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_18, const_str_plain___reduce__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17cf62f8028e739b3d6b9e79f1a7979c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17cf62f8028e739b3d6b9e79f1a7979c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17cf62f8028e739b3d6b9e79f1a7979c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17cf62f8028e739b3d6b9e79f1a7979c_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 == cache_frame_17cf62f8028e739b3d6b9e79f1a7979c_2 )
    {
        Py_DECREF( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 );
    }
    cache_frame_17cf62f8028e739b3d6b9e79f1a7979c_2 = NULL;

    assertFrameObject( frame_17cf62f8028e739b3d6b9e79f1a7979c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_9;
    skip_nested_handling_1:;
    tmp_compare_left_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

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
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_18, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_9;
    }
    branch_no_6:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_8 = const_str_plain_PoolError;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_urllib3$exceptions_18;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 18;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_9;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_25;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_urllib3$exceptions_18 );
    locals_urllib3$exceptions_18 = NULL;
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

    Py_DECREF( locals_urllib3$exceptions_18 );
    locals_urllib3$exceptions_18 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 18;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_24 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError, tmp_assign_source_24 );
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
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto try_except_handler_10;
    }

    tmp_assign_source_26 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_26;

    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_27 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_28;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

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


        exception_lineno = 29;

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


        exception_lineno = 29;

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


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

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
    tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_29;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

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


        exception_lineno = 29;

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


        exception_lineno = 29;

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


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    tmp_tuple_element_10 = const_str_plain_RequestError;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 29;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_10;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_30;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_29 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_29, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_digest_1ac943b4741094a8fa467ee81285da04;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_29, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain_RequestError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_29, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_12;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d59cfd976817319ca1f2b46cc165e29b_3, codeobj_d59cfd976817319ca1f2b46cc165e29b, module_urllib3$exceptions, sizeof(void *) );
    frame_d59cfd976817319ca1f2b46cc165e29b_3 = cache_frame_d59cfd976817319ca1f2b46cc165e29b_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d59cfd976817319ca1f2b46cc165e29b_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d59cfd976817319ca1f2b46cc165e29b_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_3___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_29, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_4___reduce__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_29, const_str_plain___reduce__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59cfd976817319ca1f2b46cc165e29b_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d59cfd976817319ca1f2b46cc165e29b_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d59cfd976817319ca1f2b46cc165e29b_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d59cfd976817319ca1f2b46cc165e29b_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d59cfd976817319ca1f2b46cc165e29b_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d59cfd976817319ca1f2b46cc165e29b_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d59cfd976817319ca1f2b46cc165e29b_3 == cache_frame_d59cfd976817319ca1f2b46cc165e29b_3 )
    {
        Py_DECREF( frame_d59cfd976817319ca1f2b46cc165e29b_3 );
    }
    cache_frame_d59cfd976817319ca1f2b46cc165e29b_3 = NULL;

    assertFrameObject( frame_d59cfd976817319ca1f2b46cc165e29b_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_12;
    skip_nested_handling_2:;
    tmp_compare_left_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

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
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_29, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_12;
    }
    branch_no_8:;
    tmp_called_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_11 = const_str_plain_RequestError;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_urllib3$exceptions_29;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 29;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_12;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_32;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_urllib3$exceptions_29 );
    locals_urllib3$exceptions_29 = NULL;
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

    Py_DECREF( locals_urllib3$exceptions_29 );
    locals_urllib3$exceptions_29 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
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
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 29;
    goto try_except_handler_10;
    outline_result_4:;
    tmp_assign_source_31 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError, tmp_assign_source_31 );
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

    // Tried code:
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;

        goto try_except_handler_13;
    }

    tmp_assign_source_33 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_5__bases_orig == NULL );
    tmp_class_creation_5__bases_orig = tmp_assign_source_33;

    tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_5 );
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_34 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_34;

    tmp_assign_source_35 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_35;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_cond_value_14 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_36 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_36;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    branch_no_9:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    tmp_tuple_element_13 = const_str_plain_SSLError;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 40;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_13;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_37 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_37;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_40 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_40, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    tmp_dictset_value = const_str_digest_0af1d92cbf25f8a036fda6803e038903;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_40, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    tmp_dictset_value = const_str_plain_SSLError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_40, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    tmp_compare_left_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_NotEq_5 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    if ( tmp_cmp_NotEq_5 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictset_value = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_40, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    branch_no_10:;
    tmp_called_name_10 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_tuple_element_14 = const_str_plain_SSLError;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_14 );
    tmp_tuple_element_14 = locals_urllib3$exceptions_40;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_14 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 40;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_15;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_urllib3$exceptions_40 );
    locals_urllib3$exceptions_40 = NULL;
    goto try_return_handler_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_40 );
    locals_urllib3$exceptions_40 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 40;
    goto try_except_handler_13;
    outline_result_5:;
    tmp_assign_source_38 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_38 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto try_except_handler_16;
    }

    tmp_assign_source_40 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_6__bases_orig == NULL );
    tmp_class_creation_6__bases_orig = tmp_assign_source_40;

    tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_6 );
    Py_INCREF( tmp_dircall_arg1_6 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
        tmp_assign_source_41 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_41;

    tmp_assign_source_42 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_42;

    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_cond_value_17 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_43 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_43;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    branch_no_11:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    tmp_tuple_element_16 = const_str_plain_ProxyError;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_16 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_16 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 45;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_16;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_44 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_44;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_45 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_45, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_18;
    }
    tmp_dictset_value = const_str_digest_7cd1672c18c257a809407a1a63fa0e88;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_45, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_18;
    }
    tmp_dictset_value = const_str_plain_ProxyError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_45, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_18;
    }
    tmp_compare_left_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_NotEq_6 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_18;
    }
    if ( tmp_cmp_NotEq_6 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictset_value = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_45, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_18;
    }
    branch_no_12:;
    tmp_called_name_12 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_17 = const_str_plain_ProxyError;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_urllib3$exceptions_45;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_17 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 45;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_18;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_46;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_urllib3$exceptions_45 );
    locals_urllib3$exceptions_45 = NULL;
    goto try_return_handler_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_45 );
    locals_urllib3$exceptions_45 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 45;
    goto try_except_handler_16;
    outline_result_6:;
    tmp_assign_source_45 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_45 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto try_except_handler_19;
    }

    tmp_assign_source_47 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_7__bases_orig == NULL );
    tmp_class_creation_7__bases_orig = tmp_assign_source_47;

    tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_7 );
    Py_INCREF( tmp_dircall_arg1_7 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
        tmp_assign_source_48 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_48;

    tmp_assign_source_49 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_49;

    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_cond_value_20 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_50 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_50;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    tmp_cond_value_21 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_21 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    branch_no_13:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    tmp_tuple_element_19 = const_str_plain_DecodeError;
    tmp_args_name_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_19 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 50;
    tmp_assign_source_51 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_19;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_51 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_51;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_50 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_50, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_21;
    }
    tmp_dictset_value = const_str_digest_0b3cbe0215684a287553275c21c89d2f;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_50, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_21;
    }
    tmp_dictset_value = const_str_plain_DecodeError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_50, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_21;
    }
    tmp_compare_left_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_NotEq_7 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_21;
    }
    if ( tmp_cmp_NotEq_7 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_dictset_value = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_50, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_21;
    }
    branch_no_14:;
    tmp_called_name_14 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_tuple_element_20 = const_str_plain_DecodeError;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_20 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_urllib3$exceptions_50;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_20 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 50;
    tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_21;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_53;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    Py_DECREF( locals_urllib3$exceptions_50 );
    locals_urllib3$exceptions_50 = NULL;
    goto try_return_handler_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_50 );
    locals_urllib3$exceptions_50 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_20;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 50;
    goto try_except_handler_19;
    outline_result_7:;
    tmp_assign_source_52 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DecodeError, tmp_assign_source_52 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto try_except_handler_22;
    }

    tmp_assign_source_54 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_8__bases_orig == NULL );
    tmp_class_creation_8__bases_orig = tmp_assign_source_54;

    tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_8 );
    Py_INCREF( tmp_dircall_arg1_8 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
        tmp_assign_source_55 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_55;

    tmp_assign_source_56 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_56;

    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    tmp_cond_value_22 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_cond_value_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_cond_value_23 );
    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_23 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_23:;
    condexpr_end_22:;
    tmp_bases_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_bases_name_8 );
    tmp_assign_source_57 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_57;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    tmp_cond_value_24 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    branch_no_15:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    tmp_tuple_element_22 = const_str_plain_ProtocolError;
    tmp_args_name_15 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_22 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_22 );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 55;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_22;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_58 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_58;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_55 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_55, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_24;
    }
    tmp_dictset_value = const_str_digest_d54edb257b1240e069427ea15807c309;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_55, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_24;
    }
    tmp_dictset_value = const_str_plain_ProtocolError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_55, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_24;
    }
    tmp_compare_left_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_compare_left_8 );
    tmp_compare_right_8 = tmp_class_creation_8__bases_orig;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_NotEq_8 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_24;
    }
    if ( tmp_cmp_NotEq_8 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_dictset_value = tmp_class_creation_8__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_55, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_24;
    }
    branch_no_16:;
    tmp_called_name_16 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_23 = const_str_plain_ProtocolError;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_23 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_23 );
    tmp_tuple_element_23 = locals_urllib3$exceptions_55;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_23 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 55;
    tmp_assign_source_60 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_24;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_60;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    Py_DECREF( locals_urllib3$exceptions_55 );
    locals_urllib3$exceptions_55 = NULL;
    goto try_return_handler_23;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_55 );
    locals_urllib3$exceptions_55 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 55;
    goto try_except_handler_22;
    outline_result_8:;
    tmp_assign_source_59 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_59 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    tmp_assign_source_61 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_assign_source_61 == NULL ))
    {
        tmp_assign_source_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_assign_source_61 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_61 );
    // Tried code:
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;

        goto try_except_handler_25;
    }

    tmp_assign_source_62 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_24 );
    assert( tmp_class_creation_9__bases_orig == NULL );
    tmp_class_creation_9__bases_orig = tmp_assign_source_62;

    tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_9 );
    Py_INCREF( tmp_dircall_arg1_9 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
        tmp_assign_source_63 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_63;

    tmp_assign_source_64 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_64;

    tmp_key_name_25 = const_str_plain_metaclass;
    tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    tmp_cond_value_25 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_25 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_cond_value_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_cond_value_26 );
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_26 == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_26:;
    condexpr_end_25:;
    tmp_bases_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_bases_name_9 );
    tmp_assign_source_65 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    Py_DECREF( tmp_metaclass_name_9 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_65;

    tmp_key_name_27 = const_str_plain_metaclass;
    tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    tmp_cond_value_27 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_27 = CHECK_IF_TRUE( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_27 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    branch_no_17:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_source_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    tmp_tuple_element_25 = const_str_plain_MaxRetryError;
    tmp_args_name_17 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_25 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_25 );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 66;
    tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_25;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_assign_source_66 = PyDict_New();
    condexpr_end_27:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_66;

    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_66 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_66, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_27;
    }
    tmp_dictset_value = const_str_digest_cd49640eb7d7e15c099dacc30d0f8bde;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_66, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_27;
    }
    tmp_dictset_value = const_str_plain_MaxRetryError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_66, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_27;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3915a90d06ac94139419123a583c0479_4, codeobj_3915a90d06ac94139419123a583c0479, module_urllib3$exceptions, sizeof(void *) );
    frame_3915a90d06ac94139419123a583c0479_4 = cache_frame_3915a90d06ac94139419123a583c0479_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3915a90d06ac94139419123a583c0479_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3915a90d06ac94139419123a583c0479_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_5___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_66, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3915a90d06ac94139419123a583c0479_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3915a90d06ac94139419123a583c0479_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3915a90d06ac94139419123a583c0479_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3915a90d06ac94139419123a583c0479_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3915a90d06ac94139419123a583c0479_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3915a90d06ac94139419123a583c0479_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_3915a90d06ac94139419123a583c0479_4 == cache_frame_3915a90d06ac94139419123a583c0479_4 )
    {
        Py_DECREF( frame_3915a90d06ac94139419123a583c0479_4 );
    }
    cache_frame_3915a90d06ac94139419123a583c0479_4 = NULL;

    assertFrameObject( frame_3915a90d06ac94139419123a583c0479_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_27;
    skip_nested_handling_3:;
    tmp_compare_left_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_compare_left_9 );
    tmp_compare_right_9 = tmp_class_creation_9__bases_orig;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_NotEq_9 = RICH_COMPARE_BOOL_NE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_NotEq_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_27;
    }
    if ( tmp_cmp_NotEq_9 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_dictset_value = tmp_class_creation_9__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_66, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_27;
    }
    branch_no_18:;
    tmp_called_name_18 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_tuple_element_26 = const_str_plain_MaxRetryError;
    tmp_args_name_18 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_26 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = locals_urllib3$exceptions_66;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_26 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 66;
    tmp_assign_source_68 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_27;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_68;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    Py_DECREF( locals_urllib3$exceptions_66 );
    locals_urllib3$exceptions_66 = NULL;
    goto try_return_handler_26;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_66 );
    locals_urllib3$exceptions_66 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 66;
    goto try_except_handler_25;
    outline_result_9:;
    tmp_assign_source_67 = tmp_outline_return_value_9;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_67 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;

        goto try_except_handler_28;
    }

    tmp_assign_source_69 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_69, 0, tmp_tuple_element_27 );
    assert( tmp_class_creation_10__bases_orig == NULL );
    tmp_class_creation_10__bases_orig = tmp_assign_source_69;

    tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_10 );
    Py_INCREF( tmp_dircall_arg1_10 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
        tmp_assign_source_70 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_70;

    tmp_assign_source_71 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_71;

    tmp_key_name_28 = const_str_plain_metaclass;
    tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    tmp_cond_value_28 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_28 = CHECK_IF_TRUE( tmp_cond_value_28 );
    if ( tmp_cond_truth_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_28 == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_cond_value_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_cond_value_29 );
    tmp_cond_truth_29 = CHECK_IF_TRUE( tmp_cond_value_29 );
    if ( tmp_cond_truth_29 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_29 == 1 )
    {
        goto condexpr_true_29;
    }
    else
    {
        goto condexpr_false_29;
    }
    condexpr_true_29:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    goto condexpr_end_29;
    condexpr_false_29:;
    tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_29:;
    condexpr_end_28:;
    tmp_bases_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_bases_name_10 );
    tmp_assign_source_72 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    Py_DECREF( tmp_metaclass_name_10 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_72;

    tmp_key_name_30 = const_str_plain_metaclass;
    tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_30 );
    tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    tmp_cond_value_30 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_30 = CHECK_IF_TRUE( tmp_cond_value_30 );
    if ( tmp_cond_truth_30 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_30 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    branch_no_19:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_30;
    }
    else
    {
        goto condexpr_false_30;
    }
    condexpr_true_30:;
    tmp_source_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    tmp_tuple_element_28 = const_str_plain_HostChangedError;
    tmp_args_name_19 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_28 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_28 );
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 85;
    tmp_assign_source_73 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_28;
    }
    goto condexpr_end_30;
    condexpr_false_30:;
    tmp_assign_source_73 = PyDict_New();
    condexpr_end_30:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_73;

    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_85 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_85, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_30;
    }
    tmp_dictset_value = const_str_digest_3cba0a880d63b7b310fd43504b18c057;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_85, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_30;
    }
    tmp_dictset_value = const_str_plain_HostChangedError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_85, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_30;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_4318673106556d40710b76adeea7f65a_5, codeobj_4318673106556d40710b76adeea7f65a, module_urllib3$exceptions, sizeof(void *) );
    frame_4318673106556d40710b76adeea7f65a_5 = cache_frame_4318673106556d40710b76adeea7f65a_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4318673106556d40710b76adeea7f65a_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4318673106556d40710b76adeea7f65a_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_2 = const_tuple_int_pos_3_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_6___init__( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_85, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4318673106556d40710b76adeea7f65a_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4318673106556d40710b76adeea7f65a_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4318673106556d40710b76adeea7f65a_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4318673106556d40710b76adeea7f65a_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4318673106556d40710b76adeea7f65a_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4318673106556d40710b76adeea7f65a_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_4318673106556d40710b76adeea7f65a_5 == cache_frame_4318673106556d40710b76adeea7f65a_5 )
    {
        Py_DECREF( frame_4318673106556d40710b76adeea7f65a_5 );
    }
    cache_frame_4318673106556d40710b76adeea7f65a_5 = NULL;

    assertFrameObject( frame_4318673106556d40710b76adeea7f65a_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_30;
    skip_nested_handling_4:;
    tmp_compare_left_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = tmp_class_creation_10__bases_orig;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_NotEq_10 = RICH_COMPARE_BOOL_NE( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_NotEq_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_30;
    }
    if ( tmp_cmp_NotEq_10 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_dictset_value = tmp_class_creation_10__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_85, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_30;
    }
    branch_no_20:;
    tmp_called_name_20 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_tuple_element_29 = const_str_plain_HostChangedError;
    tmp_args_name_20 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_29 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_29 );
    tmp_tuple_element_29 = locals_urllib3$exceptions_85;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_29 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 85;
    tmp_assign_source_75 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto try_except_handler_30;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_75;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_urllib3$exceptions_85 );
    locals_urllib3$exceptions_85 = NULL;
    goto try_return_handler_29;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_85 );
    locals_urllib3$exceptions_85 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_29;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_29:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 85;
    goto try_except_handler_28;
    outline_result_10:;
    tmp_assign_source_74 = tmp_outline_return_value_10;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HostChangedError, tmp_assign_source_74 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;

        goto try_except_handler_31;
    }

    tmp_assign_source_76 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_assign_source_76, 0, tmp_tuple_element_30 );
    assert( tmp_class_creation_11__bases_orig == NULL );
    tmp_class_creation_11__bases_orig = tmp_assign_source_76;

    tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_11 );
    Py_INCREF( tmp_dircall_arg1_11 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
        tmp_assign_source_77 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_77;

    tmp_assign_source_78 = PyDict_New();
    assert( tmp_class_creation_11__class_decl_dict == NULL );
    tmp_class_creation_11__class_decl_dict = tmp_assign_source_78;

    tmp_key_name_31 = const_str_plain_metaclass;
    tmp_dict_name_31 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_31 );
    tmp_res = PyDict_Contains( tmp_dict_name_31, tmp_key_name_31 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    tmp_cond_value_31 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_31 = CHECK_IF_TRUE( tmp_cond_value_31 );
    if ( tmp_cond_truth_31 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_31 == 1 )
    {
        goto condexpr_true_31;
    }
    else
    {
        goto condexpr_false_31;
    }
    condexpr_true_31:;
    tmp_dict_name_32 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_32 );
    tmp_key_name_32 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    goto condexpr_end_31;
    condexpr_false_31:;
    tmp_cond_value_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_cond_value_32 );
    tmp_cond_truth_32 = CHECK_IF_TRUE( tmp_cond_value_32 );
    if ( tmp_cond_truth_32 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_32 == 1 )
    {
        goto condexpr_true_32;
    }
    else
    {
        goto condexpr_false_32;
    }
    condexpr_true_32:;
    tmp_subscribed_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    goto condexpr_end_32;
    condexpr_false_32:;
    tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_32:;
    condexpr_end_31:;
    tmp_bases_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_bases_name_11 );
    tmp_assign_source_79 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    Py_DECREF( tmp_metaclass_name_11 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_79;

    tmp_key_name_33 = const_str_plain_metaclass;
    tmp_dict_name_33 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_33 );
    tmp_res = PyDict_Contains( tmp_dict_name_33, tmp_key_name_33 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    tmp_cond_value_33 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_33 = CHECK_IF_TRUE( tmp_cond_value_33 );
    if ( tmp_cond_truth_33 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_33 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    branch_no_21:;
    tmp_hasattr_source_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_11 );
    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_33;
    }
    else
    {
        goto condexpr_false_33;
    }
    condexpr_true_33:;
    tmp_source_name_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    tmp_tuple_element_31 = const_str_plain_TimeoutStateError;
    tmp_args_name_21 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_31 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_31 );
    tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_21 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 94;
    tmp_assign_source_80 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_name_21 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_31;
    }
    goto condexpr_end_33;
    condexpr_false_33:;
    tmp_assign_source_80 = PyDict_New();
    condexpr_end_33:;
    assert( tmp_class_creation_11__prepared == NULL );
    tmp_class_creation_11__prepared = tmp_assign_source_80;

    tmp_set_locals = tmp_class_creation_11__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_94 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_94, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_33;
    }
    tmp_dictset_value = const_str_digest_caae7e70acce199048d0f76529b5d906;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_94, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_33;
    }
    tmp_dictset_value = const_str_plain_TimeoutStateError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_94, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_33;
    }
    tmp_compare_left_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_compare_left_11 );
    tmp_compare_right_11 = tmp_class_creation_11__bases_orig;

    CHECK_OBJECT( tmp_compare_right_11 );
    tmp_cmp_NotEq_11 = RICH_COMPARE_BOOL_NE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_NotEq_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_33;
    }
    if ( tmp_cmp_NotEq_11 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_dictset_value = tmp_class_creation_11__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_94, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_33;
    }
    branch_no_22:;
    tmp_called_name_22 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_tuple_element_32 = const_str_plain_TimeoutStateError;
    tmp_args_name_22 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_32 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = locals_urllib3$exceptions_94;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_32 );
    tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_22 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 94;
    tmp_assign_source_82 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;

        goto try_except_handler_33;
    }
    assert( outline_10_var___class__ == NULL );
    outline_10_var___class__ = tmp_assign_source_82;

    tmp_outline_return_value_11 = outline_10_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_11 );
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_33;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_33:;
    Py_DECREF( locals_urllib3$exceptions_94 );
    locals_urllib3$exceptions_94 = NULL;
    goto try_return_handler_32;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_94 );
    locals_urllib3$exceptions_94 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
    Py_DECREF( outline_10_var___class__ );
    outline_10_var___class__ = NULL;

    goto outline_result_11;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 94;
    goto try_except_handler_31;
    outline_result_11:;
    tmp_assign_source_81 = tmp_outline_return_value_11;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutStateError, tmp_assign_source_81 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_decl_dict );
    Py_DECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__prepared );
    Py_DECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;

        goto try_except_handler_34;
    }

    tmp_assign_source_83 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_assign_source_83, 0, tmp_tuple_element_33 );
    assert( tmp_class_creation_12__bases_orig == NULL );
    tmp_class_creation_12__bases_orig = tmp_assign_source_83;

    tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_12 );
    Py_INCREF( tmp_dircall_arg1_12 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
        tmp_assign_source_84 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_84;

    tmp_assign_source_85 = PyDict_New();
    assert( tmp_class_creation_12__class_decl_dict == NULL );
    tmp_class_creation_12__class_decl_dict = tmp_assign_source_85;

    tmp_key_name_34 = const_str_plain_metaclass;
    tmp_dict_name_34 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_34 );
    tmp_res = PyDict_Contains( tmp_dict_name_34, tmp_key_name_34 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    tmp_cond_value_34 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_34 = CHECK_IF_TRUE( tmp_cond_value_34 );
    if ( tmp_cond_truth_34 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_34 == 1 )
    {
        goto condexpr_true_34;
    }
    else
    {
        goto condexpr_false_34;
    }
    condexpr_true_34:;
    tmp_dict_name_35 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_35 );
    tmp_key_name_35 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_35, tmp_key_name_35 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    goto condexpr_end_34;
    condexpr_false_34:;
    tmp_cond_value_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_cond_value_35 );
    tmp_cond_truth_35 = CHECK_IF_TRUE( tmp_cond_value_35 );
    if ( tmp_cond_truth_35 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_35 == 1 )
    {
        goto condexpr_true_35;
    }
    else
    {
        goto condexpr_false_35;
    }
    condexpr_true_35:;
    tmp_subscribed_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    goto condexpr_end_35;
    condexpr_false_35:;
    tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_35:;
    condexpr_end_34:;
    tmp_bases_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_bases_name_12 );
    tmp_assign_source_86 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    Py_DECREF( tmp_metaclass_name_12 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_86;

    tmp_key_name_36 = const_str_plain_metaclass;
    tmp_dict_name_36 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_36 );
    tmp_res = PyDict_Contains( tmp_dict_name_36, tmp_key_name_36 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    tmp_cond_value_36 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_36 = CHECK_IF_TRUE( tmp_cond_value_36 );
    if ( tmp_cond_truth_36 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_36 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    branch_no_23:;
    tmp_hasattr_source_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_12 );
    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_36;
    }
    else
    {
        goto condexpr_false_36;
    }
    condexpr_true_36:;
    tmp_source_name_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    tmp_tuple_element_34 = const_str_plain_TimeoutError;
    tmp_args_name_23 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_34 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_34 );
    tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_23 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 99;
    tmp_assign_source_87 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_23 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_34;
    }
    goto condexpr_end_36;
    condexpr_false_36:;
    tmp_assign_source_87 = PyDict_New();
    condexpr_end_36:;
    assert( tmp_class_creation_12__prepared == NULL );
    tmp_class_creation_12__prepared = tmp_assign_source_87;

    tmp_set_locals = tmp_class_creation_12__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_99 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_99, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_36;
    }
    tmp_dictset_value = const_str_digest_072e7ebfa3d3db507d9717d1cc53e1e2;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_99, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_36;
    }
    tmp_dictset_value = const_str_plain_TimeoutError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_99, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_36;
    }
    tmp_compare_left_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_compare_left_12 );
    tmp_compare_right_12 = tmp_class_creation_12__bases_orig;

    CHECK_OBJECT( tmp_compare_right_12 );
    tmp_cmp_NotEq_12 = RICH_COMPARE_BOOL_NE( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_NotEq_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_36;
    }
    if ( tmp_cmp_NotEq_12 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_dictset_value = tmp_class_creation_12__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_99, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_36;
    }
    branch_no_24:;
    tmp_called_name_24 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_tuple_element_35 = const_str_plain_TimeoutError;
    tmp_args_name_24 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_35 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_35 );
    tmp_tuple_element_35 = locals_urllib3$exceptions_99;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_35 );
    tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_24 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 99;
    tmp_assign_source_89 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;

        goto try_except_handler_36;
    }
    assert( outline_11_var___class__ == NULL );
    outline_11_var___class__ = tmp_assign_source_89;

    tmp_outline_return_value_12 = outline_11_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_12 );
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    Py_DECREF( locals_urllib3$exceptions_99 );
    locals_urllib3$exceptions_99 = NULL;
    goto try_return_handler_35;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_99 );
    locals_urllib3$exceptions_99 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_35;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_35:;
    CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
    Py_DECREF( outline_11_var___class__ );
    outline_11_var___class__ = NULL;

    goto outline_result_12;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 99;
    goto try_except_handler_34;
    outline_result_12:;
    tmp_assign_source_88 = tmp_outline_return_value_12;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError, tmp_assign_source_88 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_decl_dict );
    Py_DECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__prepared );
    Py_DECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
    }

    if ( tmp_tuple_element_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;

        goto try_except_handler_37;
    }

    tmp_assign_source_90 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_assign_source_90, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_RequestError );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestError );
    }

    if ( tmp_tuple_element_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_90 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RequestError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;

        goto try_except_handler_37;
    }

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_assign_source_90, 1, tmp_tuple_element_36 );
    assert( tmp_class_creation_13__bases_orig == NULL );
    tmp_class_creation_13__bases_orig = tmp_assign_source_90;

    tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_13 );
    Py_INCREF( tmp_dircall_arg1_13 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
        tmp_assign_source_91 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_91;

    tmp_assign_source_92 = PyDict_New();
    assert( tmp_class_creation_13__class_decl_dict == NULL );
    tmp_class_creation_13__class_decl_dict = tmp_assign_source_92;

    tmp_key_name_37 = const_str_plain_metaclass;
    tmp_dict_name_37 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_37 );
    tmp_res = PyDict_Contains( tmp_dict_name_37, tmp_key_name_37 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    tmp_cond_value_37 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_37 = CHECK_IF_TRUE( tmp_cond_value_37 );
    if ( tmp_cond_truth_37 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_37 == 1 )
    {
        goto condexpr_true_37;
    }
    else
    {
        goto condexpr_false_37;
    }
    condexpr_true_37:;
    tmp_dict_name_38 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_38 );
    tmp_key_name_38 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    goto condexpr_end_37;
    condexpr_false_37:;
    tmp_cond_value_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_cond_value_38 );
    tmp_cond_truth_38 = CHECK_IF_TRUE( tmp_cond_value_38 );
    if ( tmp_cond_truth_38 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_38 == 1 )
    {
        goto condexpr_true_38;
    }
    else
    {
        goto condexpr_false_38;
    }
    condexpr_true_38:;
    tmp_subscribed_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    goto condexpr_end_38;
    condexpr_false_38:;
    tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_38:;
    condexpr_end_37:;
    tmp_bases_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_bases_name_13 );
    tmp_assign_source_93 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    Py_DECREF( tmp_metaclass_name_13 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_93;

    tmp_key_name_39 = const_str_plain_metaclass;
    tmp_dict_name_39 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_39 );
    tmp_res = PyDict_Contains( tmp_dict_name_39, tmp_key_name_39 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    tmp_cond_value_39 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_39 = CHECK_IF_TRUE( tmp_cond_value_39 );
    if ( tmp_cond_truth_39 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_39 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    branch_no_25:;
    tmp_hasattr_source_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_13 );
    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_39;
    }
    else
    {
        goto condexpr_false_39;
    }
    condexpr_true_39:;
    tmp_source_name_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    tmp_tuple_element_37 = const_str_plain_ReadTimeoutError;
    tmp_args_name_25 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_37 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_37 );
    tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_25 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 108;
    tmp_assign_source_94 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_25 );
    Py_DECREF( tmp_args_name_25 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_37;
    }
    goto condexpr_end_39;
    condexpr_false_39:;
    tmp_assign_source_94 = PyDict_New();
    condexpr_end_39:;
    assert( tmp_class_creation_13__prepared == NULL );
    tmp_class_creation_13__prepared = tmp_assign_source_94;

    tmp_set_locals = tmp_class_creation_13__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_108 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_108, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_39;
    }
    tmp_dictset_value = const_str_digest_906ad4a0fc873be8c0c812f03902dc29;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_108, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_39;
    }
    tmp_dictset_value = const_str_plain_ReadTimeoutError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_108, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_39;
    }
    tmp_compare_left_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_compare_left_13 );
    tmp_compare_right_13 = tmp_class_creation_13__bases_orig;

    CHECK_OBJECT( tmp_compare_right_13 );
    tmp_cmp_NotEq_13 = RICH_COMPARE_BOOL_NE( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_NotEq_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_39;
    }
    if ( tmp_cmp_NotEq_13 == 1 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_dictset_value = tmp_class_creation_13__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_108, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_39;
    }
    branch_no_26:;
    tmp_called_name_26 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_tuple_element_38 = const_str_plain_ReadTimeoutError;
    tmp_args_name_26 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_38 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_38 );
    tmp_tuple_element_38 = locals_urllib3$exceptions_108;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_38 );
    tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_26 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 108;
    tmp_assign_source_96 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto try_except_handler_39;
    }
    assert( outline_12_var___class__ == NULL );
    outline_12_var___class__ = tmp_assign_source_96;

    tmp_outline_return_value_13 = outline_12_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_13 );
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_39;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    Py_DECREF( locals_urllib3$exceptions_108 );
    locals_urllib3$exceptions_108 = NULL;
    goto try_return_handler_38;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_108 );
    locals_urllib3$exceptions_108 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_38;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
    Py_DECREF( outline_12_var___class__ );
    outline_12_var___class__ = NULL;

    goto outline_result_13;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 108;
    goto try_except_handler_37;
    outline_result_13:;
    tmp_assign_source_95 = tmp_outline_return_value_13;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_95 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_decl_dict );
    Py_DECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__prepared );
    Py_DECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_TimeoutError );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutError );
    }

    if ( tmp_tuple_element_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;

        goto try_except_handler_40;
    }

    tmp_assign_source_97 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_assign_source_97, 0, tmp_tuple_element_39 );
    assert( tmp_class_creation_14__bases_orig == NULL );
    tmp_class_creation_14__bases_orig = tmp_assign_source_97;

    tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_14 );
    Py_INCREF( tmp_dircall_arg1_14 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
        tmp_assign_source_98 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_98;

    tmp_assign_source_99 = PyDict_New();
    assert( tmp_class_creation_14__class_decl_dict == NULL );
    tmp_class_creation_14__class_decl_dict = tmp_assign_source_99;

    tmp_key_name_40 = const_str_plain_metaclass;
    tmp_dict_name_40 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_40 );
    tmp_res = PyDict_Contains( tmp_dict_name_40, tmp_key_name_40 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    tmp_cond_value_40 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_40 = CHECK_IF_TRUE( tmp_cond_value_40 );
    if ( tmp_cond_truth_40 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_40 == 1 )
    {
        goto condexpr_true_40;
    }
    else
    {
        goto condexpr_false_40;
    }
    condexpr_true_40:;
    tmp_dict_name_41 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_41 );
    tmp_key_name_41 = const_str_plain_metaclass;
    tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_41, tmp_key_name_41 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    goto condexpr_end_40;
    condexpr_false_40:;
    tmp_cond_value_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_cond_value_41 );
    tmp_cond_truth_41 = CHECK_IF_TRUE( tmp_cond_value_41 );
    if ( tmp_cond_truth_41 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_41 == 1 )
    {
        goto condexpr_true_41;
    }
    else
    {
        goto condexpr_false_41;
    }
    condexpr_true_41:;
    tmp_subscribed_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_14 );
    tmp_subscript_name_14 = const_int_0;
    tmp_type_arg_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_type_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_14 );
    Py_DECREF( tmp_type_arg_14 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    goto condexpr_end_41;
    condexpr_false_41:;
    tmp_metaclass_name_14 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_14 );
    condexpr_end_41:;
    condexpr_end_40:;
    tmp_bases_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_bases_name_14 );
    tmp_assign_source_100 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
    Py_DECREF( tmp_metaclass_name_14 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_100;

    tmp_key_name_42 = const_str_plain_metaclass;
    tmp_dict_name_42 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_42 );
    tmp_res = PyDict_Contains( tmp_dict_name_42, tmp_key_name_42 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    tmp_cond_value_42 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_42 = CHECK_IF_TRUE( tmp_cond_value_42 );
    if ( tmp_cond_truth_42 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_42 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    branch_no_27:;
    tmp_hasattr_source_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_14 );
    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_42;
    }
    else
    {
        goto condexpr_false_42;
    }
    condexpr_true_42:;
    tmp_source_name_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    tmp_tuple_element_40 = const_str_plain_ConnectTimeoutError;
    tmp_args_name_27 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_40 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_40 );
    tmp_kw_name_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_27 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 115;
    tmp_assign_source_101 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_27, tmp_kw_name_27 );
    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_name_27 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_40;
    }
    goto condexpr_end_42;
    condexpr_false_42:;
    tmp_assign_source_101 = PyDict_New();
    condexpr_end_42:;
    assert( tmp_class_creation_14__prepared == NULL );
    tmp_class_creation_14__prepared = tmp_assign_source_101;

    tmp_set_locals = tmp_class_creation_14__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_115 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_115, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_42;
    }
    tmp_dictset_value = const_str_digest_d23d849ab02a6235eb0652ac312b2323;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_115, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_42;
    }
    tmp_dictset_value = const_str_plain_ConnectTimeoutError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_115, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_42;
    }
    tmp_compare_left_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_compare_left_14 );
    tmp_compare_right_14 = tmp_class_creation_14__bases_orig;

    CHECK_OBJECT( tmp_compare_right_14 );
    tmp_cmp_NotEq_14 = RICH_COMPARE_BOOL_NE( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_NotEq_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_42;
    }
    if ( tmp_cmp_NotEq_14 == 1 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_dictset_value = tmp_class_creation_14__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_115, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_42;
    }
    branch_no_28:;
    tmp_called_name_28 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_tuple_element_41 = const_str_plain_ConnectTimeoutError;
    tmp_args_name_28 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_41 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_41 );
    tmp_tuple_element_41 = locals_urllib3$exceptions_115;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_args_name_28, 2, tmp_tuple_element_41 );
    tmp_kw_name_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_28 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 115;
    tmp_assign_source_103 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_28, tmp_kw_name_28 );
    Py_DECREF( tmp_args_name_28 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_42;
    }
    assert( outline_13_var___class__ == NULL );
    outline_13_var___class__ = tmp_assign_source_103;

    tmp_outline_return_value_14 = outline_13_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_14 );
    Py_INCREF( tmp_outline_return_value_14 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    Py_DECREF( locals_urllib3$exceptions_115 );
    locals_urllib3$exceptions_115 = NULL;
    goto try_return_handler_41;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_115 );
    locals_urllib3$exceptions_115 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_41;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_41:;
    CHECK_OBJECT( (PyObject *)outline_13_var___class__ );
    Py_DECREF( outline_13_var___class__ );
    outline_13_var___class__ = NULL;

    goto outline_result_14;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto outline_exception_14;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_14:;
    exception_lineno = 115;
    goto try_except_handler_40;
    outline_result_14:;
    tmp_assign_source_102 = tmp_outline_return_value_14;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_102 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_decl_dict );
    Py_DECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__prepared );
    Py_DECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Tried code:
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_tuple_element_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;

        goto try_except_handler_43;
    }

    tmp_assign_source_104 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_assign_source_104, 0, tmp_tuple_element_42 );
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_42 == NULL )
    {
        Py_DECREF( tmp_assign_source_104 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;

        goto try_except_handler_43;
    }

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_assign_source_104, 1, tmp_tuple_element_42 );
    assert( tmp_class_creation_15__bases_orig == NULL );
    tmp_class_creation_15__bases_orig = tmp_assign_source_104;

    tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_15 );
    Py_INCREF( tmp_dircall_arg1_15 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
        tmp_assign_source_105 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    assert( tmp_class_creation_15__bases == NULL );
    tmp_class_creation_15__bases = tmp_assign_source_105;

    tmp_assign_source_106 = PyDict_New();
    assert( tmp_class_creation_15__class_decl_dict == NULL );
    tmp_class_creation_15__class_decl_dict = tmp_assign_source_106;

    tmp_key_name_43 = const_str_plain_metaclass;
    tmp_dict_name_43 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_43 );
    tmp_res = PyDict_Contains( tmp_dict_name_43, tmp_key_name_43 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    tmp_cond_value_43 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_43 = CHECK_IF_TRUE( tmp_cond_value_43 );
    if ( tmp_cond_truth_43 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_43 == 1 )
    {
        goto condexpr_true_43;
    }
    else
    {
        goto condexpr_false_43;
    }
    condexpr_true_43:;
    tmp_dict_name_44 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_44 );
    tmp_key_name_44 = const_str_plain_metaclass;
    tmp_metaclass_name_15 = DICT_GET_ITEM( tmp_dict_name_44, tmp_key_name_44 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    goto condexpr_end_43;
    condexpr_false_43:;
    tmp_cond_value_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_cond_value_44 );
    tmp_cond_truth_44 = CHECK_IF_TRUE( tmp_cond_value_44 );
    if ( tmp_cond_truth_44 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_44 == 1 )
    {
        goto condexpr_true_44;
    }
    else
    {
        goto condexpr_false_44;
    }
    condexpr_true_44:;
    tmp_subscribed_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_subscribed_name_15 );
    tmp_subscript_name_15 = const_int_0;
    tmp_type_arg_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_type_arg_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    tmp_metaclass_name_15 = BUILTIN_TYPE1( tmp_type_arg_15 );
    Py_DECREF( tmp_type_arg_15 );
    if ( tmp_metaclass_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    goto condexpr_end_44;
    condexpr_false_44:;
    tmp_metaclass_name_15 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_15 );
    condexpr_end_44:;
    condexpr_end_43:;
    tmp_bases_name_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_bases_name_15 );
    tmp_assign_source_107 = SELECT_METACLASS( tmp_metaclass_name_15, tmp_bases_name_15 );
    Py_DECREF( tmp_metaclass_name_15 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    assert( tmp_class_creation_15__metaclass == NULL );
    tmp_class_creation_15__metaclass = tmp_assign_source_107;

    tmp_key_name_45 = const_str_plain_metaclass;
    tmp_dict_name_45 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_45 );
    tmp_res = PyDict_Contains( tmp_dict_name_45, tmp_key_name_45 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    tmp_cond_value_45 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_45 = CHECK_IF_TRUE( tmp_cond_value_45 );
    if ( tmp_cond_truth_45 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    if ( tmp_cond_truth_45 == 1 )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    branch_no_29:;
    tmp_hasattr_source_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_15 );
    tmp_hasattr_attr_15 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_15, tmp_hasattr_attr_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_45;
    }
    else
    {
        goto condexpr_false_45;
    }
    condexpr_true_45:;
    tmp_source_name_15 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___prepare__ );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    tmp_tuple_element_43 = const_str_plain_NewConnectionError;
    tmp_args_name_29 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_43 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_args_name_29, 1, tmp_tuple_element_43 );
    tmp_kw_name_29 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_29 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 120;
    tmp_assign_source_108 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_29, tmp_kw_name_29 );
    Py_DECREF( tmp_called_name_29 );
    Py_DECREF( tmp_args_name_29 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_43;
    }
    goto condexpr_end_45;
    condexpr_false_45:;
    tmp_assign_source_108 = PyDict_New();
    condexpr_end_45:;
    assert( tmp_class_creation_15__prepared == NULL );
    tmp_class_creation_15__prepared = tmp_assign_source_108;

    tmp_set_locals = tmp_class_creation_15__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_120 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_120, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_45;
    }
    tmp_dictset_value = const_str_digest_5cd5167a778e9ea5a19e045e34276deb;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_120, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_45;
    }
    tmp_dictset_value = const_str_plain_NewConnectionError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_120, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_45;
    }
    tmp_compare_left_15 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_compare_left_15 );
    tmp_compare_right_15 = tmp_class_creation_15__bases_orig;

    CHECK_OBJECT( tmp_compare_right_15 );
    tmp_cmp_NotEq_15 = RICH_COMPARE_BOOL_NE( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_NotEq_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_45;
    }
    if ( tmp_cmp_NotEq_15 == 1 )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    tmp_dictset_value = tmp_class_creation_15__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_120, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_45;
    }
    branch_no_30:;
    tmp_called_name_30 = tmp_class_creation_15__metaclass;

    CHECK_OBJECT( tmp_called_name_30 );
    tmp_tuple_element_44 = const_str_plain_NewConnectionError;
    tmp_args_name_30 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = tmp_class_creation_15__bases;

    CHECK_OBJECT( tmp_tuple_element_44 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 1, tmp_tuple_element_44 );
    tmp_tuple_element_44 = locals_urllib3$exceptions_120;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_args_name_30, 2, tmp_tuple_element_44 );
    tmp_kw_name_30 = tmp_class_creation_15__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_30 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 120;
    tmp_assign_source_110 = CALL_FUNCTION( tmp_called_name_30, tmp_args_name_30, tmp_kw_name_30 );
    Py_DECREF( tmp_args_name_30 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_45;
    }
    assert( outline_14_var___class__ == NULL );
    outline_14_var___class__ = tmp_assign_source_110;

    tmp_outline_return_value_15 = outline_14_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_15 );
    Py_INCREF( tmp_outline_return_value_15 );
    goto try_return_handler_45;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_45:;
    Py_DECREF( locals_urllib3$exceptions_120 );
    locals_urllib3$exceptions_120 = NULL;
    goto try_return_handler_44;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_120 );
    locals_urllib3$exceptions_120 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_44;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_44:;
    CHECK_OBJECT( (PyObject *)outline_14_var___class__ );
    Py_DECREF( outline_14_var___class__ );
    outline_14_var___class__ = NULL;

    goto outline_result_15;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto outline_exception_15;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_15:;
    exception_lineno = 120;
    goto try_except_handler_43;
    outline_result_15:;
    tmp_assign_source_109 = tmp_outline_return_value_15;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_109 );
    goto try_end_15;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    Py_XDECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__bases );
    Py_DECREF( tmp_class_creation_15__bases );
    tmp_class_creation_15__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__class_decl_dict );
    Py_DECREF( tmp_class_creation_15__class_decl_dict );
    tmp_class_creation_15__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__metaclass );
    Py_DECREF( tmp_class_creation_15__metaclass );
    tmp_class_creation_15__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_15__prepared );
    Py_DECREF( tmp_class_creation_15__prepared );
    tmp_class_creation_15__prepared = NULL;

    // Tried code:
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_45 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;

        goto try_except_handler_46;
    }

    tmp_assign_source_111 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_assign_source_111, 0, tmp_tuple_element_45 );
    assert( tmp_class_creation_16__bases_orig == NULL );
    tmp_class_creation_16__bases_orig = tmp_assign_source_111;

    tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_16 );
    Py_INCREF( tmp_dircall_arg1_16 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
        tmp_assign_source_112 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    assert( tmp_class_creation_16__bases == NULL );
    tmp_class_creation_16__bases = tmp_assign_source_112;

    tmp_assign_source_113 = PyDict_New();
    assert( tmp_class_creation_16__class_decl_dict == NULL );
    tmp_class_creation_16__class_decl_dict = tmp_assign_source_113;

    tmp_key_name_46 = const_str_plain_metaclass;
    tmp_dict_name_46 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_46 );
    tmp_res = PyDict_Contains( tmp_dict_name_46, tmp_key_name_46 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    tmp_cond_value_46 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_46 = CHECK_IF_TRUE( tmp_cond_value_46 );
    if ( tmp_cond_truth_46 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    if ( tmp_cond_truth_46 == 1 )
    {
        goto condexpr_true_46;
    }
    else
    {
        goto condexpr_false_46;
    }
    condexpr_true_46:;
    tmp_dict_name_47 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_47 );
    tmp_key_name_47 = const_str_plain_metaclass;
    tmp_metaclass_name_16 = DICT_GET_ITEM( tmp_dict_name_47, tmp_key_name_47 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    goto condexpr_end_46;
    condexpr_false_46:;
    tmp_cond_value_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_cond_value_47 );
    tmp_cond_truth_47 = CHECK_IF_TRUE( tmp_cond_value_47 );
    if ( tmp_cond_truth_47 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    if ( tmp_cond_truth_47 == 1 )
    {
        goto condexpr_true_47;
    }
    else
    {
        goto condexpr_false_47;
    }
    condexpr_true_47:;
    tmp_subscribed_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_subscribed_name_16 );
    tmp_subscript_name_16 = const_int_0;
    tmp_type_arg_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_type_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    tmp_metaclass_name_16 = BUILTIN_TYPE1( tmp_type_arg_16 );
    Py_DECREF( tmp_type_arg_16 );
    if ( tmp_metaclass_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    goto condexpr_end_47;
    condexpr_false_47:;
    tmp_metaclass_name_16 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_16 );
    condexpr_end_47:;
    condexpr_end_46:;
    tmp_bases_name_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_bases_name_16 );
    tmp_assign_source_114 = SELECT_METACLASS( tmp_metaclass_name_16, tmp_bases_name_16 );
    Py_DECREF( tmp_metaclass_name_16 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    assert( tmp_class_creation_16__metaclass == NULL );
    tmp_class_creation_16__metaclass = tmp_assign_source_114;

    tmp_key_name_48 = const_str_plain_metaclass;
    tmp_dict_name_48 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_48 );
    tmp_res = PyDict_Contains( tmp_dict_name_48, tmp_key_name_48 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    tmp_cond_value_48 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_48 = CHECK_IF_TRUE( tmp_cond_value_48 );
    if ( tmp_cond_truth_48 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    if ( tmp_cond_truth_48 == 1 )
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    branch_no_31:;
    tmp_hasattr_source_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_16 );
    tmp_hasattr_attr_16 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_16, tmp_hasattr_attr_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_48;
    }
    else
    {
        goto condexpr_false_48;
    }
    condexpr_true_48:;
    tmp_source_name_16 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    tmp_tuple_element_46 = const_str_plain_EmptyPoolError;
    tmp_args_name_31 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_46 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_31, 1, tmp_tuple_element_46 );
    tmp_kw_name_31 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_31 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 125;
    tmp_assign_source_115 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_31, tmp_kw_name_31 );
    Py_DECREF( tmp_called_name_31 );
    Py_DECREF( tmp_args_name_31 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_46;
    }
    goto condexpr_end_48;
    condexpr_false_48:;
    tmp_assign_source_115 = PyDict_New();
    condexpr_end_48:;
    assert( tmp_class_creation_16__prepared == NULL );
    tmp_class_creation_16__prepared = tmp_assign_source_115;

    tmp_set_locals = tmp_class_creation_16__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_125 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_125, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_48;
    }
    tmp_dictset_value = const_str_digest_1b17e5345caa893d267645d5296f52b9;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_125, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_48;
    }
    tmp_dictset_value = const_str_plain_EmptyPoolError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_125, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_48;
    }
    tmp_compare_left_16 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_compare_left_16 );
    tmp_compare_right_16 = tmp_class_creation_16__bases_orig;

    CHECK_OBJECT( tmp_compare_right_16 );
    tmp_cmp_NotEq_16 = RICH_COMPARE_BOOL_NE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_NotEq_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_48;
    }
    if ( tmp_cmp_NotEq_16 == 1 )
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_dictset_value = tmp_class_creation_16__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_125, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_48;
    }
    branch_no_32:;
    tmp_called_name_32 = tmp_class_creation_16__metaclass;

    CHECK_OBJECT( tmp_called_name_32 );
    tmp_tuple_element_47 = const_str_plain_EmptyPoolError;
    tmp_args_name_32 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 0, tmp_tuple_element_47 );
    tmp_tuple_element_47 = tmp_class_creation_16__bases;

    CHECK_OBJECT( tmp_tuple_element_47 );
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 1, tmp_tuple_element_47 );
    tmp_tuple_element_47 = locals_urllib3$exceptions_125;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_args_name_32, 2, tmp_tuple_element_47 );
    tmp_kw_name_32 = tmp_class_creation_16__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_32 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 125;
    tmp_assign_source_117 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_32, tmp_kw_name_32 );
    Py_DECREF( tmp_args_name_32 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;

        goto try_except_handler_48;
    }
    assert( outline_15_var___class__ == NULL );
    outline_15_var___class__ = tmp_assign_source_117;

    tmp_outline_return_value_16 = outline_15_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_16 );
    Py_INCREF( tmp_outline_return_value_16 );
    goto try_return_handler_48;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_48:;
    Py_DECREF( locals_urllib3$exceptions_125 );
    locals_urllib3$exceptions_125 = NULL;
    goto try_return_handler_47;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_125 );
    locals_urllib3$exceptions_125 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto try_except_handler_47;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_47:;
    CHECK_OBJECT( (PyObject *)outline_15_var___class__ );
    Py_DECREF( outline_15_var___class__ );
    outline_15_var___class__ = NULL;

    goto outline_result_16;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto outline_exception_16;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_16:;
    exception_lineno = 125;
    goto try_except_handler_46;
    outline_result_16:;
    tmp_assign_source_116 = tmp_outline_return_value_16;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_EmptyPoolError, tmp_assign_source_116 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    Py_XDECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__bases );
    Py_DECREF( tmp_class_creation_16__bases );
    tmp_class_creation_16__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__class_decl_dict );
    Py_DECREF( tmp_class_creation_16__class_decl_dict );
    tmp_class_creation_16__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__metaclass );
    Py_DECREF( tmp_class_creation_16__metaclass );
    tmp_class_creation_16__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_16__prepared );
    Py_DECREF( tmp_class_creation_16__prepared );
    tmp_class_creation_16__prepared = NULL;

    // Tried code:
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_PoolError );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolError );
    }

    if ( tmp_tuple_element_48 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto try_except_handler_49;
    }

    tmp_assign_source_118 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_assign_source_118, 0, tmp_tuple_element_48 );
    assert( tmp_class_creation_17__bases_orig == NULL );
    tmp_class_creation_17__bases_orig = tmp_assign_source_118;

    tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_17 );
    Py_INCREF( tmp_dircall_arg1_17 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
        tmp_assign_source_119 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_17__bases == NULL );
    tmp_class_creation_17__bases = tmp_assign_source_119;

    tmp_assign_source_120 = PyDict_New();
    assert( tmp_class_creation_17__class_decl_dict == NULL );
    tmp_class_creation_17__class_decl_dict = tmp_assign_source_120;

    tmp_key_name_49 = const_str_plain_metaclass;
    tmp_dict_name_49 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_49 );
    tmp_res = PyDict_Contains( tmp_dict_name_49, tmp_key_name_49 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    tmp_cond_value_49 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_49 = CHECK_IF_TRUE( tmp_cond_value_49 );
    if ( tmp_cond_truth_49 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    if ( tmp_cond_truth_49 == 1 )
    {
        goto condexpr_true_49;
    }
    else
    {
        goto condexpr_false_49;
    }
    condexpr_true_49:;
    tmp_dict_name_50 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_50 );
    tmp_key_name_50 = const_str_plain_metaclass;
    tmp_metaclass_name_17 = DICT_GET_ITEM( tmp_dict_name_50, tmp_key_name_50 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    goto condexpr_end_49;
    condexpr_false_49:;
    tmp_cond_value_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_cond_value_50 );
    tmp_cond_truth_50 = CHECK_IF_TRUE( tmp_cond_value_50 );
    if ( tmp_cond_truth_50 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    if ( tmp_cond_truth_50 == 1 )
    {
        goto condexpr_true_50;
    }
    else
    {
        goto condexpr_false_50;
    }
    condexpr_true_50:;
    tmp_subscribed_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_subscribed_name_17 );
    tmp_subscript_name_17 = const_int_0;
    tmp_type_arg_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_type_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    tmp_metaclass_name_17 = BUILTIN_TYPE1( tmp_type_arg_17 );
    Py_DECREF( tmp_type_arg_17 );
    if ( tmp_metaclass_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    goto condexpr_end_50;
    condexpr_false_50:;
    tmp_metaclass_name_17 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_17 );
    condexpr_end_50:;
    condexpr_end_49:;
    tmp_bases_name_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_bases_name_17 );
    tmp_assign_source_121 = SELECT_METACLASS( tmp_metaclass_name_17, tmp_bases_name_17 );
    Py_DECREF( tmp_metaclass_name_17 );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    assert( tmp_class_creation_17__metaclass == NULL );
    tmp_class_creation_17__metaclass = tmp_assign_source_121;

    tmp_key_name_51 = const_str_plain_metaclass;
    tmp_dict_name_51 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_51 );
    tmp_res = PyDict_Contains( tmp_dict_name_51, tmp_key_name_51 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    tmp_cond_value_51 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_51 = CHECK_IF_TRUE( tmp_cond_value_51 );
    if ( tmp_cond_truth_51 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    if ( tmp_cond_truth_51 == 1 )
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    branch_no_33:;
    tmp_hasattr_source_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_17 );
    tmp_hasattr_attr_17 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_17, tmp_hasattr_attr_17 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_51;
    }
    else
    {
        goto condexpr_false_51;
    }
    condexpr_true_51:;
    tmp_source_name_17 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain___prepare__ );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    tmp_tuple_element_49 = const_str_plain_ClosedPoolError;
    tmp_args_name_33 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_49 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_args_name_33, 1, tmp_tuple_element_49 );
    tmp_kw_name_33 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_33 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 130;
    tmp_assign_source_122 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_33, tmp_kw_name_33 );
    Py_DECREF( tmp_called_name_33 );
    Py_DECREF( tmp_args_name_33 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_49;
    }
    goto condexpr_end_51;
    condexpr_false_51:;
    tmp_assign_source_122 = PyDict_New();
    condexpr_end_51:;
    assert( tmp_class_creation_17__prepared == NULL );
    tmp_class_creation_17__prepared = tmp_assign_source_122;

    tmp_set_locals = tmp_class_creation_17__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_130 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_130, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_51;
    }
    tmp_dictset_value = const_str_digest_5ac3ff452137ae9d952f65688385427b;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_130, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_51;
    }
    tmp_dictset_value = const_str_plain_ClosedPoolError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_130, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_51;
    }
    tmp_compare_left_17 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_compare_left_17 );
    tmp_compare_right_17 = tmp_class_creation_17__bases_orig;

    CHECK_OBJECT( tmp_compare_right_17 );
    tmp_cmp_NotEq_17 = RICH_COMPARE_BOOL_NE( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_cmp_NotEq_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_51;
    }
    if ( tmp_cmp_NotEq_17 == 1 )
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    tmp_dictset_value = tmp_class_creation_17__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_130, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_51;
    }
    branch_no_34:;
    tmp_called_name_34 = tmp_class_creation_17__metaclass;

    CHECK_OBJECT( tmp_called_name_34 );
    tmp_tuple_element_50 = const_str_plain_ClosedPoolError;
    tmp_args_name_34 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = tmp_class_creation_17__bases;

    CHECK_OBJECT( tmp_tuple_element_50 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 1, tmp_tuple_element_50 );
    tmp_tuple_element_50 = locals_urllib3$exceptions_130;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_args_name_34, 2, tmp_tuple_element_50 );
    tmp_kw_name_34 = tmp_class_creation_17__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_34 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 130;
    tmp_assign_source_124 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_34, tmp_kw_name_34 );
    Py_DECREF( tmp_args_name_34 );
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;

        goto try_except_handler_51;
    }
    assert( outline_16_var___class__ == NULL );
    outline_16_var___class__ = tmp_assign_source_124;

    tmp_outline_return_value_17 = outline_16_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_17 );
    Py_INCREF( tmp_outline_return_value_17 );
    goto try_return_handler_51;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_51:;
    Py_DECREF( locals_urllib3$exceptions_130 );
    locals_urllib3$exceptions_130 = NULL;
    goto try_return_handler_50;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_130 );
    locals_urllib3$exceptions_130 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto try_except_handler_50;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_50:;
    CHECK_OBJECT( (PyObject *)outline_16_var___class__ );
    Py_DECREF( outline_16_var___class__ );
    outline_16_var___class__ = NULL;

    goto outline_result_17;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto outline_exception_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_17:;
    exception_lineno = 130;
    goto try_except_handler_49;
    outline_result_17:;
    tmp_assign_source_123 = tmp_outline_return_value_17;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_123 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    Py_XDECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__bases );
    Py_DECREF( tmp_class_creation_17__bases );
    tmp_class_creation_17__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__class_decl_dict );
    Py_DECREF( tmp_class_creation_17__class_decl_dict );
    tmp_class_creation_17__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__metaclass );
    Py_DECREF( tmp_class_creation_17__metaclass );
    tmp_class_creation_17__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_17__prepared );
    Py_DECREF( tmp_class_creation_17__prepared );
    tmp_class_creation_17__prepared = NULL;

    // Tried code:
    tmp_tuple_element_51 = PyExc_ValueError;
    tmp_assign_source_125 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_125, 0, tmp_tuple_element_51 );
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_125 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;

        goto try_except_handler_52;
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_assign_source_125, 1, tmp_tuple_element_51 );
    assert( tmp_class_creation_18__bases_orig == NULL );
    tmp_class_creation_18__bases_orig = tmp_assign_source_125;

    tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_18 );
    Py_INCREF( tmp_dircall_arg1_18 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
        tmp_assign_source_126 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    assert( tmp_class_creation_18__bases == NULL );
    tmp_class_creation_18__bases = tmp_assign_source_126;

    tmp_assign_source_127 = PyDict_New();
    assert( tmp_class_creation_18__class_decl_dict == NULL );
    tmp_class_creation_18__class_decl_dict = tmp_assign_source_127;

    tmp_key_name_52 = const_str_plain_metaclass;
    tmp_dict_name_52 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_52 );
    tmp_res = PyDict_Contains( tmp_dict_name_52, tmp_key_name_52 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    tmp_cond_value_52 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_52 = CHECK_IF_TRUE( tmp_cond_value_52 );
    if ( tmp_cond_truth_52 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    if ( tmp_cond_truth_52 == 1 )
    {
        goto condexpr_true_52;
    }
    else
    {
        goto condexpr_false_52;
    }
    condexpr_true_52:;
    tmp_dict_name_53 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_53 );
    tmp_key_name_53 = const_str_plain_metaclass;
    tmp_metaclass_name_18 = DICT_GET_ITEM( tmp_dict_name_53, tmp_key_name_53 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    goto condexpr_end_52;
    condexpr_false_52:;
    tmp_cond_value_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_cond_value_53 );
    tmp_cond_truth_53 = CHECK_IF_TRUE( tmp_cond_value_53 );
    if ( tmp_cond_truth_53 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    if ( tmp_cond_truth_53 == 1 )
    {
        goto condexpr_true_53;
    }
    else
    {
        goto condexpr_false_53;
    }
    condexpr_true_53:;
    tmp_subscribed_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_subscribed_name_18 );
    tmp_subscript_name_18 = const_int_0;
    tmp_type_arg_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_type_arg_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    tmp_metaclass_name_18 = BUILTIN_TYPE1( tmp_type_arg_18 );
    Py_DECREF( tmp_type_arg_18 );
    if ( tmp_metaclass_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    goto condexpr_end_53;
    condexpr_false_53:;
    tmp_metaclass_name_18 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_18 );
    condexpr_end_53:;
    condexpr_end_52:;
    tmp_bases_name_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_bases_name_18 );
    tmp_assign_source_128 = SELECT_METACLASS( tmp_metaclass_name_18, tmp_bases_name_18 );
    Py_DECREF( tmp_metaclass_name_18 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    assert( tmp_class_creation_18__metaclass == NULL );
    tmp_class_creation_18__metaclass = tmp_assign_source_128;

    tmp_key_name_54 = const_str_plain_metaclass;
    tmp_dict_name_54 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_54 );
    tmp_res = PyDict_Contains( tmp_dict_name_54, tmp_key_name_54 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    tmp_cond_value_54 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_54 = CHECK_IF_TRUE( tmp_cond_value_54 );
    if ( tmp_cond_truth_54 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    if ( tmp_cond_truth_54 == 1 )
    {
        goto branch_yes_35;
    }
    else
    {
        goto branch_no_35;
    }
    branch_yes_35:;
    tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    branch_no_35:;
    tmp_hasattr_source_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_18 );
    tmp_hasattr_attr_18 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_18, tmp_hasattr_attr_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_54;
    }
    else
    {
        goto condexpr_false_54;
    }
    condexpr_true_54:;
    tmp_source_name_18 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain___prepare__ );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    tmp_tuple_element_52 = const_str_plain_LocationValueError;
    tmp_args_name_35 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_52 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_args_name_35, 1, tmp_tuple_element_52 );
    tmp_kw_name_35 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_35 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 135;
    tmp_assign_source_129 = CALL_FUNCTION( tmp_called_name_35, tmp_args_name_35, tmp_kw_name_35 );
    Py_DECREF( tmp_called_name_35 );
    Py_DECREF( tmp_args_name_35 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_52;
    }
    goto condexpr_end_54;
    condexpr_false_54:;
    tmp_assign_source_129 = PyDict_New();
    condexpr_end_54:;
    assert( tmp_class_creation_18__prepared == NULL );
    tmp_class_creation_18__prepared = tmp_assign_source_129;

    tmp_set_locals = tmp_class_creation_18__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_135 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_135, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_54;
    }
    tmp_dictset_value = const_str_digest_4bca1ec40d7badeae2d91e5b0042a9a9;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_135, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_54;
    }
    tmp_dictset_value = const_str_plain_LocationValueError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_135, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_54;
    }
    tmp_compare_left_18 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_compare_left_18 );
    tmp_compare_right_18 = tmp_class_creation_18__bases_orig;

    CHECK_OBJECT( tmp_compare_right_18 );
    tmp_cmp_NotEq_18 = RICH_COMPARE_BOOL_NE( tmp_compare_left_18, tmp_compare_right_18 );
    if ( tmp_cmp_NotEq_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_54;
    }
    if ( tmp_cmp_NotEq_18 == 1 )
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    tmp_dictset_value = tmp_class_creation_18__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_135, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_54;
    }
    branch_no_36:;
    tmp_called_name_36 = tmp_class_creation_18__metaclass;

    CHECK_OBJECT( tmp_called_name_36 );
    tmp_tuple_element_53 = const_str_plain_LocationValueError;
    tmp_args_name_36 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = tmp_class_creation_18__bases;

    CHECK_OBJECT( tmp_tuple_element_53 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 1, tmp_tuple_element_53 );
    tmp_tuple_element_53 = locals_urllib3$exceptions_135;
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_args_name_36, 2, tmp_tuple_element_53 );
    tmp_kw_name_36 = tmp_class_creation_18__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_36 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 135;
    tmp_assign_source_131 = CALL_FUNCTION( tmp_called_name_36, tmp_args_name_36, tmp_kw_name_36 );
    Py_DECREF( tmp_args_name_36 );
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;

        goto try_except_handler_54;
    }
    assert( outline_17_var___class__ == NULL );
    outline_17_var___class__ = tmp_assign_source_131;

    tmp_outline_return_value_18 = outline_17_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_18 );
    Py_INCREF( tmp_outline_return_value_18 );
    goto try_return_handler_54;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_54:;
    Py_DECREF( locals_urllib3$exceptions_135 );
    locals_urllib3$exceptions_135 = NULL;
    goto try_return_handler_53;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_135 );
    locals_urllib3$exceptions_135 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_53;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_53:;
    CHECK_OBJECT( (PyObject *)outline_17_var___class__ );
    Py_DECREF( outline_17_var___class__ );
    outline_17_var___class__ = NULL;

    goto outline_result_18;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto outline_exception_18;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_18:;
    exception_lineno = 135;
    goto try_except_handler_52;
    outline_result_18:;
    tmp_assign_source_130 = tmp_outline_return_value_18;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_130 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    Py_XDECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__bases );
    Py_DECREF( tmp_class_creation_18__bases );
    tmp_class_creation_18__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__class_decl_dict );
    Py_DECREF( tmp_class_creation_18__class_decl_dict );
    tmp_class_creation_18__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__metaclass );
    Py_DECREF( tmp_class_creation_18__metaclass );
    tmp_class_creation_18__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_18__prepared );
    Py_DECREF( tmp_class_creation_18__prepared );
    tmp_class_creation_18__prepared = NULL;

    // Tried code:
    tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationValueError );

    if (unlikely( tmp_tuple_element_54 == NULL ))
    {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError );
    }

    if ( tmp_tuple_element_54 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LocationValueError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;

        goto try_except_handler_55;
    }

    tmp_assign_source_132 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_assign_source_132, 0, tmp_tuple_element_54 );
    assert( tmp_class_creation_19__bases_orig == NULL );
    tmp_class_creation_19__bases_orig = tmp_assign_source_132;

    tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_19 );
    Py_INCREF( tmp_dircall_arg1_19 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
        tmp_assign_source_133 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    assert( tmp_class_creation_19__bases == NULL );
    tmp_class_creation_19__bases = tmp_assign_source_133;

    tmp_assign_source_134 = PyDict_New();
    assert( tmp_class_creation_19__class_decl_dict == NULL );
    tmp_class_creation_19__class_decl_dict = tmp_assign_source_134;

    tmp_key_name_55 = const_str_plain_metaclass;
    tmp_dict_name_55 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_55 );
    tmp_res = PyDict_Contains( tmp_dict_name_55, tmp_key_name_55 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    tmp_cond_value_55 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_55 = CHECK_IF_TRUE( tmp_cond_value_55 );
    if ( tmp_cond_truth_55 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    if ( tmp_cond_truth_55 == 1 )
    {
        goto condexpr_true_55;
    }
    else
    {
        goto condexpr_false_55;
    }
    condexpr_true_55:;
    tmp_dict_name_56 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_56 );
    tmp_key_name_56 = const_str_plain_metaclass;
    tmp_metaclass_name_19 = DICT_GET_ITEM( tmp_dict_name_56, tmp_key_name_56 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    goto condexpr_end_55;
    condexpr_false_55:;
    tmp_cond_value_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_cond_value_56 );
    tmp_cond_truth_56 = CHECK_IF_TRUE( tmp_cond_value_56 );
    if ( tmp_cond_truth_56 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    if ( tmp_cond_truth_56 == 1 )
    {
        goto condexpr_true_56;
    }
    else
    {
        goto condexpr_false_56;
    }
    condexpr_true_56:;
    tmp_subscribed_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_subscribed_name_19 );
    tmp_subscript_name_19 = const_int_0;
    tmp_type_arg_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_type_arg_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    tmp_metaclass_name_19 = BUILTIN_TYPE1( tmp_type_arg_19 );
    Py_DECREF( tmp_type_arg_19 );
    if ( tmp_metaclass_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    goto condexpr_end_56;
    condexpr_false_56:;
    tmp_metaclass_name_19 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_19 );
    condexpr_end_56:;
    condexpr_end_55:;
    tmp_bases_name_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_bases_name_19 );
    tmp_assign_source_135 = SELECT_METACLASS( tmp_metaclass_name_19, tmp_bases_name_19 );
    Py_DECREF( tmp_metaclass_name_19 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    assert( tmp_class_creation_19__metaclass == NULL );
    tmp_class_creation_19__metaclass = tmp_assign_source_135;

    tmp_key_name_57 = const_str_plain_metaclass;
    tmp_dict_name_57 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_57 );
    tmp_res = PyDict_Contains( tmp_dict_name_57, tmp_key_name_57 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    tmp_cond_value_57 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_57 = CHECK_IF_TRUE( tmp_cond_value_57 );
    if ( tmp_cond_truth_57 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    if ( tmp_cond_truth_57 == 1 )
    {
        goto branch_yes_37;
    }
    else
    {
        goto branch_no_37;
    }
    branch_yes_37:;
    tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    branch_no_37:;
    tmp_hasattr_source_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_19 );
    tmp_hasattr_attr_19 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_19, tmp_hasattr_attr_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_57;
    }
    else
    {
        goto condexpr_false_57;
    }
    condexpr_true_57:;
    tmp_source_name_19 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    tmp_tuple_element_55 = const_str_plain_LocationParseError;
    tmp_args_name_37 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_55 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_args_name_37, 1, tmp_tuple_element_55 );
    tmp_kw_name_37 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_37 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 140;
    tmp_assign_source_136 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_37, tmp_kw_name_37 );
    Py_DECREF( tmp_called_name_37 );
    Py_DECREF( tmp_args_name_37 );
    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_55;
    }
    goto condexpr_end_57;
    condexpr_false_57:;
    tmp_assign_source_136 = PyDict_New();
    condexpr_end_57:;
    assert( tmp_class_creation_19__prepared == NULL );
    tmp_class_creation_19__prepared = tmp_assign_source_136;

    tmp_set_locals = tmp_class_creation_19__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_140 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_140, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_57;
    }
    tmp_dictset_value = const_str_digest_4335cb1660cb67dcbaf1b1ae306aaca9;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_140, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_57;
    }
    tmp_dictset_value = const_str_plain_LocationParseError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_140, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_57;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_b769cbc5e466e9cf24a6178bc5ca9d23_6, codeobj_b769cbc5e466e9cf24a6178bc5ca9d23, module_urllib3$exceptions, sizeof(void *) );
    frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 = cache_frame_b769cbc5e466e9cf24a6178bc5ca9d23_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_7___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_140, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b769cbc5e466e9cf24a6178bc5ca9d23_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b769cbc5e466e9cf24a6178bc5ca9d23_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b769cbc5e466e9cf24a6178bc5ca9d23_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 == cache_frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 )
    {
        Py_DECREF( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 );
    }
    cache_frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 = NULL;

    assertFrameObject( frame_b769cbc5e466e9cf24a6178bc5ca9d23_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_57;
    skip_nested_handling_5:;
    tmp_compare_left_19 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_compare_left_19 );
    tmp_compare_right_19 = tmp_class_creation_19__bases_orig;

    CHECK_OBJECT( tmp_compare_right_19 );
    tmp_cmp_NotEq_19 = RICH_COMPARE_BOOL_NE( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_cmp_NotEq_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_57;
    }
    if ( tmp_cmp_NotEq_19 == 1 )
    {
        goto branch_yes_38;
    }
    else
    {
        goto branch_no_38;
    }
    branch_yes_38:;
    tmp_dictset_value = tmp_class_creation_19__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_140, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_57;
    }
    branch_no_38:;
    tmp_called_name_38 = tmp_class_creation_19__metaclass;

    CHECK_OBJECT( tmp_called_name_38 );
    tmp_tuple_element_56 = const_str_plain_LocationParseError;
    tmp_args_name_38 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = tmp_class_creation_19__bases;

    CHECK_OBJECT( tmp_tuple_element_56 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 1, tmp_tuple_element_56 );
    tmp_tuple_element_56 = locals_urllib3$exceptions_140;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_args_name_38, 2, tmp_tuple_element_56 );
    tmp_kw_name_38 = tmp_class_creation_19__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_38 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 140;
    tmp_assign_source_138 = CALL_FUNCTION( tmp_called_name_38, tmp_args_name_38, tmp_kw_name_38 );
    Py_DECREF( tmp_args_name_38 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;

        goto try_except_handler_57;
    }
    assert( outline_18_var___class__ == NULL );
    outline_18_var___class__ = tmp_assign_source_138;

    tmp_outline_return_value_19 = outline_18_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_19 );
    Py_INCREF( tmp_outline_return_value_19 );
    goto try_return_handler_57;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_57:;
    Py_DECREF( locals_urllib3$exceptions_140 );
    locals_urllib3$exceptions_140 = NULL;
    goto try_return_handler_56;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_140 );
    locals_urllib3$exceptions_140 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto try_except_handler_56;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_56:;
    CHECK_OBJECT( (PyObject *)outline_18_var___class__ );
    Py_DECREF( outline_18_var___class__ );
    outline_18_var___class__ = NULL;

    goto outline_result_19;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto outline_exception_19;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_19:;
    exception_lineno = 140;
    goto try_except_handler_55;
    outline_result_19:;
    tmp_assign_source_137 = tmp_outline_return_value_19;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_LocationParseError, tmp_assign_source_137 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    Py_XDECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__bases );
    Py_DECREF( tmp_class_creation_19__bases );
    tmp_class_creation_19__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__class_decl_dict );
    Py_DECREF( tmp_class_creation_19__class_decl_dict );
    tmp_class_creation_19__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__metaclass );
    Py_DECREF( tmp_class_creation_19__metaclass );
    tmp_class_creation_19__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_19__prepared );
    Py_DECREF( tmp_class_creation_19__prepared );
    tmp_class_creation_19__prepared = NULL;

    // Tried code:
    tmp_tuple_element_57 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_57 == NULL ))
    {
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_57 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;

        goto try_except_handler_58;
    }

    tmp_assign_source_139 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_assign_source_139, 0, tmp_tuple_element_57 );
    assert( tmp_class_creation_20__bases_orig == NULL );
    tmp_class_creation_20__bases_orig = tmp_assign_source_139;

    tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_20 );
    Py_INCREF( tmp_dircall_arg1_20 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
        tmp_assign_source_140 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    assert( tmp_class_creation_20__bases == NULL );
    tmp_class_creation_20__bases = tmp_assign_source_140;

    tmp_assign_source_141 = PyDict_New();
    assert( tmp_class_creation_20__class_decl_dict == NULL );
    tmp_class_creation_20__class_decl_dict = tmp_assign_source_141;

    tmp_key_name_58 = const_str_plain_metaclass;
    tmp_dict_name_58 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_58 );
    tmp_res = PyDict_Contains( tmp_dict_name_58, tmp_key_name_58 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    tmp_cond_value_58 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_58 = CHECK_IF_TRUE( tmp_cond_value_58 );
    if ( tmp_cond_truth_58 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    if ( tmp_cond_truth_58 == 1 )
    {
        goto condexpr_true_58;
    }
    else
    {
        goto condexpr_false_58;
    }
    condexpr_true_58:;
    tmp_dict_name_59 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_59 );
    tmp_key_name_59 = const_str_plain_metaclass;
    tmp_metaclass_name_20 = DICT_GET_ITEM( tmp_dict_name_59, tmp_key_name_59 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    goto condexpr_end_58;
    condexpr_false_58:;
    tmp_cond_value_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_cond_value_59 );
    tmp_cond_truth_59 = CHECK_IF_TRUE( tmp_cond_value_59 );
    if ( tmp_cond_truth_59 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    if ( tmp_cond_truth_59 == 1 )
    {
        goto condexpr_true_59;
    }
    else
    {
        goto condexpr_false_59;
    }
    condexpr_true_59:;
    tmp_subscribed_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_subscribed_name_20 );
    tmp_subscript_name_20 = const_int_0;
    tmp_type_arg_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_type_arg_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    tmp_metaclass_name_20 = BUILTIN_TYPE1( tmp_type_arg_20 );
    Py_DECREF( tmp_type_arg_20 );
    if ( tmp_metaclass_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    goto condexpr_end_59;
    condexpr_false_59:;
    tmp_metaclass_name_20 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_20 );
    condexpr_end_59:;
    condexpr_end_58:;
    tmp_bases_name_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_bases_name_20 );
    tmp_assign_source_142 = SELECT_METACLASS( tmp_metaclass_name_20, tmp_bases_name_20 );
    Py_DECREF( tmp_metaclass_name_20 );
    if ( tmp_assign_source_142 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    assert( tmp_class_creation_20__metaclass == NULL );
    tmp_class_creation_20__metaclass = tmp_assign_source_142;

    tmp_key_name_60 = const_str_plain_metaclass;
    tmp_dict_name_60 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_60 );
    tmp_res = PyDict_Contains( tmp_dict_name_60, tmp_key_name_60 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    tmp_cond_value_60 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_60 = CHECK_IF_TRUE( tmp_cond_value_60 );
    if ( tmp_cond_truth_60 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    if ( tmp_cond_truth_60 == 1 )
    {
        goto branch_yes_39;
    }
    else
    {
        goto branch_no_39;
    }
    branch_yes_39:;
    tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    branch_no_39:;
    tmp_hasattr_source_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_20 );
    tmp_hasattr_attr_20 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_20, tmp_hasattr_attr_20 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_60;
    }
    else
    {
        goto condexpr_false_60;
    }
    condexpr_true_60:;
    tmp_source_name_20 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain___prepare__ );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    tmp_tuple_element_58 = const_str_plain_ResponseError;
    tmp_args_name_39 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_58 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_args_name_39, 1, tmp_tuple_element_58 );
    tmp_kw_name_39 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_39 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 150;
    tmp_assign_source_143 = CALL_FUNCTION( tmp_called_name_39, tmp_args_name_39, tmp_kw_name_39 );
    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_name_39 );
    if ( tmp_assign_source_143 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_58;
    }
    goto condexpr_end_60;
    condexpr_false_60:;
    tmp_assign_source_143 = PyDict_New();
    condexpr_end_60:;
    assert( tmp_class_creation_20__prepared == NULL );
    tmp_class_creation_20__prepared = tmp_assign_source_143;

    tmp_set_locals = tmp_class_creation_20__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_150 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_150, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_60;
    }
    tmp_dictset_value = const_str_digest_4221c6866c41e5ab7b77b09bf6885351;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_150, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_60;
    }
    tmp_dictset_value = const_str_plain_ResponseError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_150, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_60;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7, codeobj_2b1c3aa6a94cc8dc6a2be824425d3b02, module_urllib3$exceptions, sizeof(void *) );
    frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 = cache_frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = const_str_digest_b69643d5b773f9f5a7202cff9d2e0c72;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_150, const_str_plain_GENERIC_ERROR, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_dictset_value = const_str_digest_b3cccf261f53b23aaf668796a6ebdda4;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_150, const_str_plain_SPECIFIC_ERROR, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 == cache_frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 )
    {
        Py_DECREF( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 );
    }
    cache_frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 = NULL;

    assertFrameObject( frame_2b1c3aa6a94cc8dc6a2be824425d3b02_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_60;
    skip_nested_handling_6:;
    tmp_compare_left_20 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_compare_left_20 );
    tmp_compare_right_20 = tmp_class_creation_20__bases_orig;

    CHECK_OBJECT( tmp_compare_right_20 );
    tmp_cmp_NotEq_20 = RICH_COMPARE_BOOL_NE( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_NotEq_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_60;
    }
    if ( tmp_cmp_NotEq_20 == 1 )
    {
        goto branch_yes_40;
    }
    else
    {
        goto branch_no_40;
    }
    branch_yes_40:;
    tmp_dictset_value = tmp_class_creation_20__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_150, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_60;
    }
    branch_no_40:;
    tmp_called_name_40 = tmp_class_creation_20__metaclass;

    CHECK_OBJECT( tmp_called_name_40 );
    tmp_tuple_element_59 = const_str_plain_ResponseError;
    tmp_args_name_40 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = tmp_class_creation_20__bases;

    CHECK_OBJECT( tmp_tuple_element_59 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 1, tmp_tuple_element_59 );
    tmp_tuple_element_59 = locals_urllib3$exceptions_150;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_40, 2, tmp_tuple_element_59 );
    tmp_kw_name_40 = tmp_class_creation_20__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_40 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 150;
    tmp_assign_source_145 = CALL_FUNCTION( tmp_called_name_40, tmp_args_name_40, tmp_kw_name_40 );
    Py_DECREF( tmp_args_name_40 );
    if ( tmp_assign_source_145 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto try_except_handler_60;
    }
    assert( outline_19_var___class__ == NULL );
    outline_19_var___class__ = tmp_assign_source_145;

    tmp_outline_return_value_20 = outline_19_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_20 );
    Py_INCREF( tmp_outline_return_value_20 );
    goto try_return_handler_60;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_60:;
    Py_DECREF( locals_urllib3$exceptions_150 );
    locals_urllib3$exceptions_150 = NULL;
    goto try_return_handler_59;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_150 );
    locals_urllib3$exceptions_150 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto try_except_handler_59;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_59:;
    CHECK_OBJECT( (PyObject *)outline_19_var___class__ );
    Py_DECREF( outline_19_var___class__ );
    outline_19_var___class__ = NULL;

    goto outline_result_20;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto outline_exception_20;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_20:;
    exception_lineno = 150;
    goto try_except_handler_58;
    outline_result_20:;
    tmp_assign_source_144 = tmp_outline_return_value_20;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_144 );
    goto try_end_20;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    Py_XDECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__bases );
    Py_DECREF( tmp_class_creation_20__bases );
    tmp_class_creation_20__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__class_decl_dict );
    Py_DECREF( tmp_class_creation_20__class_decl_dict );
    tmp_class_creation_20__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__metaclass );
    Py_DECREF( tmp_class_creation_20__metaclass );
    tmp_class_creation_20__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_20__prepared );
    Py_DECREF( tmp_class_creation_20__prepared );
    tmp_class_creation_20__prepared = NULL;

    // Tried code:
    tmp_tuple_element_60 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_60 == NULL ))
    {
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_60 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;

        goto try_except_handler_61;
    }

    tmp_assign_source_146 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_assign_source_146, 0, tmp_tuple_element_60 );
    assert( tmp_class_creation_21__bases_orig == NULL );
    tmp_class_creation_21__bases_orig = tmp_assign_source_146;

    tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_21 );
    Py_INCREF( tmp_dircall_arg1_21 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
        tmp_assign_source_147 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_21__bases == NULL );
    tmp_class_creation_21__bases = tmp_assign_source_147;

    tmp_assign_source_148 = PyDict_New();
    assert( tmp_class_creation_21__class_decl_dict == NULL );
    tmp_class_creation_21__class_decl_dict = tmp_assign_source_148;

    tmp_key_name_61 = const_str_plain_metaclass;
    tmp_dict_name_61 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_61 );
    tmp_res = PyDict_Contains( tmp_dict_name_61, tmp_key_name_61 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    tmp_cond_value_61 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_61 = CHECK_IF_TRUE( tmp_cond_value_61 );
    if ( tmp_cond_truth_61 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    if ( tmp_cond_truth_61 == 1 )
    {
        goto condexpr_true_61;
    }
    else
    {
        goto condexpr_false_61;
    }
    condexpr_true_61:;
    tmp_dict_name_62 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_62 );
    tmp_key_name_62 = const_str_plain_metaclass;
    tmp_metaclass_name_21 = DICT_GET_ITEM( tmp_dict_name_62, tmp_key_name_62 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    goto condexpr_end_61;
    condexpr_false_61:;
    tmp_cond_value_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_cond_value_62 );
    tmp_cond_truth_62 = CHECK_IF_TRUE( tmp_cond_value_62 );
    if ( tmp_cond_truth_62 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    if ( tmp_cond_truth_62 == 1 )
    {
        goto condexpr_true_62;
    }
    else
    {
        goto condexpr_false_62;
    }
    condexpr_true_62:;
    tmp_subscribed_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_subscribed_name_21 );
    tmp_subscript_name_21 = const_int_0;
    tmp_type_arg_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_type_arg_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    tmp_metaclass_name_21 = BUILTIN_TYPE1( tmp_type_arg_21 );
    Py_DECREF( tmp_type_arg_21 );
    if ( tmp_metaclass_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    goto condexpr_end_62;
    condexpr_false_62:;
    tmp_metaclass_name_21 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_21 );
    condexpr_end_62:;
    condexpr_end_61:;
    tmp_bases_name_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_bases_name_21 );
    tmp_assign_source_149 = SELECT_METACLASS( tmp_metaclass_name_21, tmp_bases_name_21 );
    Py_DECREF( tmp_metaclass_name_21 );
    if ( tmp_assign_source_149 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    assert( tmp_class_creation_21__metaclass == NULL );
    tmp_class_creation_21__metaclass = tmp_assign_source_149;

    tmp_key_name_63 = const_str_plain_metaclass;
    tmp_dict_name_63 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_63 );
    tmp_res = PyDict_Contains( tmp_dict_name_63, tmp_key_name_63 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    tmp_cond_value_63 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_63 = CHECK_IF_TRUE( tmp_cond_value_63 );
    if ( tmp_cond_truth_63 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    if ( tmp_cond_truth_63 == 1 )
    {
        goto branch_yes_41;
    }
    else
    {
        goto branch_no_41;
    }
    branch_yes_41:;
    tmp_dictdel_dict = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    branch_no_41:;
    tmp_hasattr_source_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_21 );
    tmp_hasattr_attr_21 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_21, tmp_hasattr_attr_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_63;
    }
    else
    {
        goto condexpr_false_63;
    }
    condexpr_true_63:;
    tmp_source_name_21 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___prepare__ );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    tmp_tuple_element_61 = const_str_plain_SecurityWarning;
    tmp_args_name_41 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_41, 0, tmp_tuple_element_61 );
    tmp_tuple_element_61 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_tuple_element_61 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_41, 1, tmp_tuple_element_61 );
    tmp_kw_name_41 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_41 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 156;
    tmp_assign_source_150 = CALL_FUNCTION( tmp_called_name_41, tmp_args_name_41, tmp_kw_name_41 );
    Py_DECREF( tmp_called_name_41 );
    Py_DECREF( tmp_args_name_41 );
    if ( tmp_assign_source_150 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_61;
    }
    goto condexpr_end_63;
    condexpr_false_63:;
    tmp_assign_source_150 = PyDict_New();
    condexpr_end_63:;
    assert( tmp_class_creation_21__prepared == NULL );
    tmp_class_creation_21__prepared = tmp_assign_source_150;

    tmp_set_locals = tmp_class_creation_21__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_156 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_156, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_63;
    }
    tmp_dictset_value = const_str_digest_22d8ad82a042b8c9b6ae653eb0bbaafd;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_156, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_63;
    }
    tmp_dictset_value = const_str_plain_SecurityWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_156, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_63;
    }
    tmp_compare_left_21 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_compare_left_21 );
    tmp_compare_right_21 = tmp_class_creation_21__bases_orig;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_NotEq_21 = RICH_COMPARE_BOOL_NE( tmp_compare_left_21, tmp_compare_right_21 );
    if ( tmp_cmp_NotEq_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_63;
    }
    if ( tmp_cmp_NotEq_21 == 1 )
    {
        goto branch_yes_42;
    }
    else
    {
        goto branch_no_42;
    }
    branch_yes_42:;
    tmp_dictset_value = tmp_class_creation_21__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_156, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_63;
    }
    branch_no_42:;
    tmp_called_name_42 = tmp_class_creation_21__metaclass;

    CHECK_OBJECT( tmp_called_name_42 );
    tmp_tuple_element_62 = const_str_plain_SecurityWarning;
    tmp_args_name_42 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 0, tmp_tuple_element_62 );
    tmp_tuple_element_62 = tmp_class_creation_21__bases;

    CHECK_OBJECT( tmp_tuple_element_62 );
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 1, tmp_tuple_element_62 );
    tmp_tuple_element_62 = locals_urllib3$exceptions_156;
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_args_name_42, 2, tmp_tuple_element_62 );
    tmp_kw_name_42 = tmp_class_creation_21__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_42 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 156;
    tmp_assign_source_152 = CALL_FUNCTION( tmp_called_name_42, tmp_args_name_42, tmp_kw_name_42 );
    Py_DECREF( tmp_args_name_42 );
    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto try_except_handler_63;
    }
    assert( outline_20_var___class__ == NULL );
    outline_20_var___class__ = tmp_assign_source_152;

    tmp_outline_return_value_21 = outline_20_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_21 );
    Py_INCREF( tmp_outline_return_value_21 );
    goto try_return_handler_63;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_63:;
    Py_DECREF( locals_urllib3$exceptions_156 );
    locals_urllib3$exceptions_156 = NULL;
    goto try_return_handler_62;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_156 );
    locals_urllib3$exceptions_156 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto try_except_handler_62;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_62:;
    CHECK_OBJECT( (PyObject *)outline_20_var___class__ );
    Py_DECREF( outline_20_var___class__ );
    outline_20_var___class__ = NULL;

    goto outline_result_21;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto outline_exception_21;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_21:;
    exception_lineno = 156;
    goto try_except_handler_61;
    outline_result_21:;
    tmp_assign_source_151 = tmp_outline_return_value_21;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning, tmp_assign_source_151 );
    goto try_end_21;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    Py_XDECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__bases );
    Py_DECREF( tmp_class_creation_21__bases );
    tmp_class_creation_21__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__class_decl_dict );
    Py_DECREF( tmp_class_creation_21__class_decl_dict );
    tmp_class_creation_21__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__metaclass );
    Py_DECREF( tmp_class_creation_21__metaclass );
    tmp_class_creation_21__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_21__prepared );
    Py_DECREF( tmp_class_creation_21__prepared );
    tmp_class_creation_21__prepared = NULL;

    // Tried code:
    tmp_tuple_element_63 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_63 == NULL ))
    {
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_63 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;

        goto try_except_handler_64;
    }

    tmp_assign_source_153 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_assign_source_153, 0, tmp_tuple_element_63 );
    assert( tmp_class_creation_22__bases_orig == NULL );
    tmp_class_creation_22__bases_orig = tmp_assign_source_153;

    tmp_dircall_arg1_22 = tmp_class_creation_22__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_22 );
    Py_INCREF( tmp_dircall_arg1_22 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
        tmp_assign_source_154 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    assert( tmp_class_creation_22__bases == NULL );
    tmp_class_creation_22__bases = tmp_assign_source_154;

    tmp_assign_source_155 = PyDict_New();
    assert( tmp_class_creation_22__class_decl_dict == NULL );
    tmp_class_creation_22__class_decl_dict = tmp_assign_source_155;

    tmp_key_name_64 = const_str_plain_metaclass;
    tmp_dict_name_64 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_64 );
    tmp_res = PyDict_Contains( tmp_dict_name_64, tmp_key_name_64 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    tmp_cond_value_64 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_64 = CHECK_IF_TRUE( tmp_cond_value_64 );
    if ( tmp_cond_truth_64 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    if ( tmp_cond_truth_64 == 1 )
    {
        goto condexpr_true_64;
    }
    else
    {
        goto condexpr_false_64;
    }
    condexpr_true_64:;
    tmp_dict_name_65 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_65 );
    tmp_key_name_65 = const_str_plain_metaclass;
    tmp_metaclass_name_22 = DICT_GET_ITEM( tmp_dict_name_65, tmp_key_name_65 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    goto condexpr_end_64;
    condexpr_false_64:;
    tmp_cond_value_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_cond_value_65 );
    tmp_cond_truth_65 = CHECK_IF_TRUE( tmp_cond_value_65 );
    if ( tmp_cond_truth_65 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    if ( tmp_cond_truth_65 == 1 )
    {
        goto condexpr_true_65;
    }
    else
    {
        goto condexpr_false_65;
    }
    condexpr_true_65:;
    tmp_subscribed_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_subscribed_name_22 );
    tmp_subscript_name_22 = const_int_0;
    tmp_type_arg_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_type_arg_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    tmp_metaclass_name_22 = BUILTIN_TYPE1( tmp_type_arg_22 );
    Py_DECREF( tmp_type_arg_22 );
    if ( tmp_metaclass_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    goto condexpr_end_65;
    condexpr_false_65:;
    tmp_metaclass_name_22 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_22 );
    condexpr_end_65:;
    condexpr_end_64:;
    tmp_bases_name_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_bases_name_22 );
    tmp_assign_source_156 = SELECT_METACLASS( tmp_metaclass_name_22, tmp_bases_name_22 );
    Py_DECREF( tmp_metaclass_name_22 );
    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    assert( tmp_class_creation_22__metaclass == NULL );
    tmp_class_creation_22__metaclass = tmp_assign_source_156;

    tmp_key_name_66 = const_str_plain_metaclass;
    tmp_dict_name_66 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_66 );
    tmp_res = PyDict_Contains( tmp_dict_name_66, tmp_key_name_66 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    tmp_cond_value_66 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_66 = CHECK_IF_TRUE( tmp_cond_value_66 );
    if ( tmp_cond_truth_66 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    if ( tmp_cond_truth_66 == 1 )
    {
        goto branch_yes_43;
    }
    else
    {
        goto branch_no_43;
    }
    branch_yes_43:;
    tmp_dictdel_dict = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    branch_no_43:;
    tmp_hasattr_source_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_22 );
    tmp_hasattr_attr_22 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_22, tmp_hasattr_attr_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_66;
    }
    else
    {
        goto condexpr_false_66;
    }
    condexpr_true_66:;
    tmp_source_name_22 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    tmp_tuple_element_64 = const_str_plain_SubjectAltNameWarning;
    tmp_args_name_43 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_args_name_43, 0, tmp_tuple_element_64 );
    tmp_tuple_element_64 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_tuple_element_64 );
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_args_name_43, 1, tmp_tuple_element_64 );
    tmp_kw_name_43 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_43 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 161;
    tmp_assign_source_157 = CALL_FUNCTION( tmp_called_name_43, tmp_args_name_43, tmp_kw_name_43 );
    Py_DECREF( tmp_called_name_43 );
    Py_DECREF( tmp_args_name_43 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_64;
    }
    goto condexpr_end_66;
    condexpr_false_66:;
    tmp_assign_source_157 = PyDict_New();
    condexpr_end_66:;
    assert( tmp_class_creation_22__prepared == NULL );
    tmp_class_creation_22__prepared = tmp_assign_source_157;

    tmp_set_locals = tmp_class_creation_22__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_161 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_161, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_66;
    }
    tmp_dictset_value = const_str_digest_d3e96f948eaa41c53caaae3833d57481;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_161, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_66;
    }
    tmp_dictset_value = const_str_plain_SubjectAltNameWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_161, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_66;
    }
    tmp_compare_left_22 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_compare_left_22 );
    tmp_compare_right_22 = tmp_class_creation_22__bases_orig;

    CHECK_OBJECT( tmp_compare_right_22 );
    tmp_cmp_NotEq_22 = RICH_COMPARE_BOOL_NE( tmp_compare_left_22, tmp_compare_right_22 );
    if ( tmp_cmp_NotEq_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_66;
    }
    if ( tmp_cmp_NotEq_22 == 1 )
    {
        goto branch_yes_44;
    }
    else
    {
        goto branch_no_44;
    }
    branch_yes_44:;
    tmp_dictset_value = tmp_class_creation_22__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_161, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_66;
    }
    branch_no_44:;
    tmp_called_name_44 = tmp_class_creation_22__metaclass;

    CHECK_OBJECT( tmp_called_name_44 );
    tmp_tuple_element_65 = const_str_plain_SubjectAltNameWarning;
    tmp_args_name_44 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 0, tmp_tuple_element_65 );
    tmp_tuple_element_65 = tmp_class_creation_22__bases;

    CHECK_OBJECT( tmp_tuple_element_65 );
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 1, tmp_tuple_element_65 );
    tmp_tuple_element_65 = locals_urllib3$exceptions_161;
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_args_name_44, 2, tmp_tuple_element_65 );
    tmp_kw_name_44 = tmp_class_creation_22__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_44 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 161;
    tmp_assign_source_159 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_44, tmp_kw_name_44 );
    Py_DECREF( tmp_args_name_44 );
    if ( tmp_assign_source_159 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;

        goto try_except_handler_66;
    }
    assert( outline_21_var___class__ == NULL );
    outline_21_var___class__ = tmp_assign_source_159;

    tmp_outline_return_value_22 = outline_21_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_22 );
    Py_INCREF( tmp_outline_return_value_22 );
    goto try_return_handler_66;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_66:;
    Py_DECREF( locals_urllib3$exceptions_161 );
    locals_urllib3$exceptions_161 = NULL;
    goto try_return_handler_65;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_161 );
    locals_urllib3$exceptions_161 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto try_except_handler_65;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_65:;
    CHECK_OBJECT( (PyObject *)outline_21_var___class__ );
    Py_DECREF( outline_21_var___class__ );
    outline_21_var___class__ = NULL;

    goto outline_result_22;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto outline_exception_22;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_22:;
    exception_lineno = 161;
    goto try_except_handler_64;
    outline_result_22:;
    tmp_assign_source_158 = tmp_outline_return_value_22;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_158 );
    goto try_end_22;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    Py_XDECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__bases );
    Py_DECREF( tmp_class_creation_22__bases );
    tmp_class_creation_22__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__class_decl_dict );
    Py_DECREF( tmp_class_creation_22__class_decl_dict );
    tmp_class_creation_22__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__metaclass );
    Py_DECREF( tmp_class_creation_22__metaclass );
    tmp_class_creation_22__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_22__prepared );
    Py_DECREF( tmp_class_creation_22__prepared );
    tmp_class_creation_22__prepared = NULL;

    // Tried code:
    tmp_tuple_element_66 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_66 == NULL ))
    {
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_66 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;

        goto try_except_handler_67;
    }

    tmp_assign_source_160 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_66 );
    PyTuple_SET_ITEM( tmp_assign_source_160, 0, tmp_tuple_element_66 );
    assert( tmp_class_creation_23__bases_orig == NULL );
    tmp_class_creation_23__bases_orig = tmp_assign_source_160;

    tmp_dircall_arg1_23 = tmp_class_creation_23__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_23 );
    Py_INCREF( tmp_dircall_arg1_23 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
        tmp_assign_source_161 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_161 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    assert( tmp_class_creation_23__bases == NULL );
    tmp_class_creation_23__bases = tmp_assign_source_161;

    tmp_assign_source_162 = PyDict_New();
    assert( tmp_class_creation_23__class_decl_dict == NULL );
    tmp_class_creation_23__class_decl_dict = tmp_assign_source_162;

    tmp_key_name_67 = const_str_plain_metaclass;
    tmp_dict_name_67 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_67 );
    tmp_res = PyDict_Contains( tmp_dict_name_67, tmp_key_name_67 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    tmp_cond_value_67 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_67 = CHECK_IF_TRUE( tmp_cond_value_67 );
    if ( tmp_cond_truth_67 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    if ( tmp_cond_truth_67 == 1 )
    {
        goto condexpr_true_67;
    }
    else
    {
        goto condexpr_false_67;
    }
    condexpr_true_67:;
    tmp_dict_name_68 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_68 );
    tmp_key_name_68 = const_str_plain_metaclass;
    tmp_metaclass_name_23 = DICT_GET_ITEM( tmp_dict_name_68, tmp_key_name_68 );
    if ( tmp_metaclass_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    goto condexpr_end_67;
    condexpr_false_67:;
    tmp_cond_value_68 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_cond_value_68 );
    tmp_cond_truth_68 = CHECK_IF_TRUE( tmp_cond_value_68 );
    if ( tmp_cond_truth_68 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    if ( tmp_cond_truth_68 == 1 )
    {
        goto condexpr_true_68;
    }
    else
    {
        goto condexpr_false_68;
    }
    condexpr_true_68:;
    tmp_subscribed_name_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_subscribed_name_23 );
    tmp_subscript_name_23 = const_int_0;
    tmp_type_arg_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    if ( tmp_type_arg_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    tmp_metaclass_name_23 = BUILTIN_TYPE1( tmp_type_arg_23 );
    Py_DECREF( tmp_type_arg_23 );
    if ( tmp_metaclass_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    goto condexpr_end_68;
    condexpr_false_68:;
    tmp_metaclass_name_23 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_23 );
    condexpr_end_68:;
    condexpr_end_67:;
    tmp_bases_name_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_bases_name_23 );
    tmp_assign_source_163 = SELECT_METACLASS( tmp_metaclass_name_23, tmp_bases_name_23 );
    Py_DECREF( tmp_metaclass_name_23 );
    if ( tmp_assign_source_163 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    assert( tmp_class_creation_23__metaclass == NULL );
    tmp_class_creation_23__metaclass = tmp_assign_source_163;

    tmp_key_name_69 = const_str_plain_metaclass;
    tmp_dict_name_69 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_69 );
    tmp_res = PyDict_Contains( tmp_dict_name_69, tmp_key_name_69 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    tmp_cond_value_69 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_69 = CHECK_IF_TRUE( tmp_cond_value_69 );
    if ( tmp_cond_truth_69 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    if ( tmp_cond_truth_69 == 1 )
    {
        goto branch_yes_45;
    }
    else
    {
        goto branch_no_45;
    }
    branch_yes_45:;
    tmp_dictdel_dict = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    branch_no_45:;
    tmp_hasattr_source_23 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_23 );
    tmp_hasattr_attr_23 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_23, tmp_hasattr_attr_23 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_69;
    }
    else
    {
        goto condexpr_false_69;
    }
    condexpr_true_69:;
    tmp_source_name_23 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___prepare__ );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    tmp_tuple_element_67 = const_str_plain_InsecureRequestWarning;
    tmp_args_name_45 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_args_name_45, 0, tmp_tuple_element_67 );
    tmp_tuple_element_67 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_tuple_element_67 );
    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_args_name_45, 1, tmp_tuple_element_67 );
    tmp_kw_name_45 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_45 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 166;
    tmp_assign_source_164 = CALL_FUNCTION( tmp_called_name_45, tmp_args_name_45, tmp_kw_name_45 );
    Py_DECREF( tmp_called_name_45 );
    Py_DECREF( tmp_args_name_45 );
    if ( tmp_assign_source_164 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_67;
    }
    goto condexpr_end_69;
    condexpr_false_69:;
    tmp_assign_source_164 = PyDict_New();
    condexpr_end_69:;
    assert( tmp_class_creation_23__prepared == NULL );
    tmp_class_creation_23__prepared = tmp_assign_source_164;

    tmp_set_locals = tmp_class_creation_23__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_166 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_166, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_69;
    }
    tmp_dictset_value = const_str_digest_3ecac7959fca6b094793e5853872d936;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_166, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_69;
    }
    tmp_dictset_value = const_str_plain_InsecureRequestWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_166, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_69;
    }
    tmp_compare_left_23 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_compare_left_23 );
    tmp_compare_right_23 = tmp_class_creation_23__bases_orig;

    CHECK_OBJECT( tmp_compare_right_23 );
    tmp_cmp_NotEq_23 = RICH_COMPARE_BOOL_NE( tmp_compare_left_23, tmp_compare_right_23 );
    if ( tmp_cmp_NotEq_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_69;
    }
    if ( tmp_cmp_NotEq_23 == 1 )
    {
        goto branch_yes_46;
    }
    else
    {
        goto branch_no_46;
    }
    branch_yes_46:;
    tmp_dictset_value = tmp_class_creation_23__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_166, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_69;
    }
    branch_no_46:;
    tmp_called_name_46 = tmp_class_creation_23__metaclass;

    CHECK_OBJECT( tmp_called_name_46 );
    tmp_tuple_element_68 = const_str_plain_InsecureRequestWarning;
    tmp_args_name_46 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_args_name_46, 0, tmp_tuple_element_68 );
    tmp_tuple_element_68 = tmp_class_creation_23__bases;

    CHECK_OBJECT( tmp_tuple_element_68 );
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_args_name_46, 1, tmp_tuple_element_68 );
    tmp_tuple_element_68 = locals_urllib3$exceptions_166;
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_args_name_46, 2, tmp_tuple_element_68 );
    tmp_kw_name_46 = tmp_class_creation_23__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_46 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 166;
    tmp_assign_source_166 = CALL_FUNCTION( tmp_called_name_46, tmp_args_name_46, tmp_kw_name_46 );
    Py_DECREF( tmp_args_name_46 );
    if ( tmp_assign_source_166 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto try_except_handler_69;
    }
    assert( outline_22_var___class__ == NULL );
    outline_22_var___class__ = tmp_assign_source_166;

    tmp_outline_return_value_23 = outline_22_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_23 );
    Py_INCREF( tmp_outline_return_value_23 );
    goto try_return_handler_69;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_69:;
    Py_DECREF( locals_urllib3$exceptions_166 );
    locals_urllib3$exceptions_166 = NULL;
    goto try_return_handler_68;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_166 );
    locals_urllib3$exceptions_166 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto try_except_handler_68;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_68:;
    CHECK_OBJECT( (PyObject *)outline_22_var___class__ );
    Py_DECREF( outline_22_var___class__ );
    outline_22_var___class__ = NULL;

    goto outline_result_23;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto outline_exception_23;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_23:;
    exception_lineno = 166;
    goto try_except_handler_67;
    outline_result_23:;
    tmp_assign_source_165 = tmp_outline_return_value_23;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecureRequestWarning, tmp_assign_source_165 );
    goto try_end_23;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    Py_XDECREF( tmp_class_creation_23__class_decl_dict );
    tmp_class_creation_23__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_23__prepared );
    tmp_class_creation_23__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__bases );
    Py_DECREF( tmp_class_creation_23__bases );
    tmp_class_creation_23__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__class_decl_dict );
    Py_DECREF( tmp_class_creation_23__class_decl_dict );
    tmp_class_creation_23__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__metaclass );
    Py_DECREF( tmp_class_creation_23__metaclass );
    tmp_class_creation_23__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_23__prepared );
    Py_DECREF( tmp_class_creation_23__prepared );
    tmp_class_creation_23__prepared = NULL;

    // Tried code:
    tmp_tuple_element_69 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_69 == NULL ))
    {
        tmp_tuple_element_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_69 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;

        goto try_except_handler_70;
    }

    tmp_assign_source_167 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_69 );
    PyTuple_SET_ITEM( tmp_assign_source_167, 0, tmp_tuple_element_69 );
    assert( tmp_class_creation_24__bases_orig == NULL );
    tmp_class_creation_24__bases_orig = tmp_assign_source_167;

    tmp_dircall_arg1_24 = tmp_class_creation_24__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_24 );
    Py_INCREF( tmp_dircall_arg1_24 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
        tmp_assign_source_168 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_168 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    assert( tmp_class_creation_24__bases == NULL );
    tmp_class_creation_24__bases = tmp_assign_source_168;

    tmp_assign_source_169 = PyDict_New();
    assert( tmp_class_creation_24__class_decl_dict == NULL );
    tmp_class_creation_24__class_decl_dict = tmp_assign_source_169;

    tmp_key_name_70 = const_str_plain_metaclass;
    tmp_dict_name_70 = tmp_class_creation_24__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_70 );
    tmp_res = PyDict_Contains( tmp_dict_name_70, tmp_key_name_70 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    tmp_cond_value_70 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_70 = CHECK_IF_TRUE( tmp_cond_value_70 );
    if ( tmp_cond_truth_70 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    if ( tmp_cond_truth_70 == 1 )
    {
        goto condexpr_true_70;
    }
    else
    {
        goto condexpr_false_70;
    }
    condexpr_true_70:;
    tmp_dict_name_71 = tmp_class_creation_24__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_71 );
    tmp_key_name_71 = const_str_plain_metaclass;
    tmp_metaclass_name_24 = DICT_GET_ITEM( tmp_dict_name_71, tmp_key_name_71 );
    if ( tmp_metaclass_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    goto condexpr_end_70;
    condexpr_false_70:;
    tmp_cond_value_71 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_cond_value_71 );
    tmp_cond_truth_71 = CHECK_IF_TRUE( tmp_cond_value_71 );
    if ( tmp_cond_truth_71 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    if ( tmp_cond_truth_71 == 1 )
    {
        goto condexpr_true_71;
    }
    else
    {
        goto condexpr_false_71;
    }
    condexpr_true_71:;
    tmp_subscribed_name_24 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_subscribed_name_24 );
    tmp_subscript_name_24 = const_int_0;
    tmp_type_arg_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
    if ( tmp_type_arg_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    tmp_metaclass_name_24 = BUILTIN_TYPE1( tmp_type_arg_24 );
    Py_DECREF( tmp_type_arg_24 );
    if ( tmp_metaclass_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    goto condexpr_end_71;
    condexpr_false_71:;
    tmp_metaclass_name_24 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_24 );
    condexpr_end_71:;
    condexpr_end_70:;
    tmp_bases_name_24 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_bases_name_24 );
    tmp_assign_source_170 = SELECT_METACLASS( tmp_metaclass_name_24, tmp_bases_name_24 );
    Py_DECREF( tmp_metaclass_name_24 );
    if ( tmp_assign_source_170 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    assert( tmp_class_creation_24__metaclass == NULL );
    tmp_class_creation_24__metaclass = tmp_assign_source_170;

    tmp_key_name_72 = const_str_plain_metaclass;
    tmp_dict_name_72 = tmp_class_creation_24__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_72 );
    tmp_res = PyDict_Contains( tmp_dict_name_72, tmp_key_name_72 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    tmp_cond_value_72 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_72 = CHECK_IF_TRUE( tmp_cond_value_72 );
    if ( tmp_cond_truth_72 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    if ( tmp_cond_truth_72 == 1 )
    {
        goto branch_yes_47;
    }
    else
    {
        goto branch_no_47;
    }
    branch_yes_47:;
    tmp_dictdel_dict = tmp_class_creation_24__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    branch_no_47:;
    tmp_hasattr_source_24 = tmp_class_creation_24__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_24 );
    tmp_hasattr_attr_24 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_24, tmp_hasattr_attr_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_72;
    }
    else
    {
        goto condexpr_false_72;
    }
    condexpr_true_72:;
    tmp_source_name_24 = tmp_class_creation_24__metaclass;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain___prepare__ );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    tmp_tuple_element_70 = const_str_plain_SystemTimeWarning;
    tmp_args_name_47 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_70 );
    PyTuple_SET_ITEM( tmp_args_name_47, 0, tmp_tuple_element_70 );
    tmp_tuple_element_70 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_tuple_element_70 );
    Py_INCREF( tmp_tuple_element_70 );
    PyTuple_SET_ITEM( tmp_args_name_47, 1, tmp_tuple_element_70 );
    tmp_kw_name_47 = tmp_class_creation_24__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_47 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 171;
    tmp_assign_source_171 = CALL_FUNCTION( tmp_called_name_47, tmp_args_name_47, tmp_kw_name_47 );
    Py_DECREF( tmp_called_name_47 );
    Py_DECREF( tmp_args_name_47 );
    if ( tmp_assign_source_171 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_70;
    }
    goto condexpr_end_72;
    condexpr_false_72:;
    tmp_assign_source_171 = PyDict_New();
    condexpr_end_72:;
    assert( tmp_class_creation_24__prepared == NULL );
    tmp_class_creation_24__prepared = tmp_assign_source_171;

    tmp_set_locals = tmp_class_creation_24__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_171 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_171, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_72;
    }
    tmp_dictset_value = const_str_digest_d455563e1ef951148bac32f5cc949a27;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_171, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_72;
    }
    tmp_dictset_value = const_str_plain_SystemTimeWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_171, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_72;
    }
    tmp_compare_left_24 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_compare_left_24 );
    tmp_compare_right_24 = tmp_class_creation_24__bases_orig;

    CHECK_OBJECT( tmp_compare_right_24 );
    tmp_cmp_NotEq_24 = RICH_COMPARE_BOOL_NE( tmp_compare_left_24, tmp_compare_right_24 );
    if ( tmp_cmp_NotEq_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_72;
    }
    if ( tmp_cmp_NotEq_24 == 1 )
    {
        goto branch_yes_48;
    }
    else
    {
        goto branch_no_48;
    }
    branch_yes_48:;
    tmp_dictset_value = tmp_class_creation_24__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_171, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_72;
    }
    branch_no_48:;
    tmp_called_name_48 = tmp_class_creation_24__metaclass;

    CHECK_OBJECT( tmp_called_name_48 );
    tmp_tuple_element_71 = const_str_plain_SystemTimeWarning;
    tmp_args_name_48 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_71 );
    PyTuple_SET_ITEM( tmp_args_name_48, 0, tmp_tuple_element_71 );
    tmp_tuple_element_71 = tmp_class_creation_24__bases;

    CHECK_OBJECT( tmp_tuple_element_71 );
    Py_INCREF( tmp_tuple_element_71 );
    PyTuple_SET_ITEM( tmp_args_name_48, 1, tmp_tuple_element_71 );
    tmp_tuple_element_71 = locals_urllib3$exceptions_171;
    Py_INCREF( tmp_tuple_element_71 );
    PyTuple_SET_ITEM( tmp_args_name_48, 2, tmp_tuple_element_71 );
    tmp_kw_name_48 = tmp_class_creation_24__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_48 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 171;
    tmp_assign_source_173 = CALL_FUNCTION( tmp_called_name_48, tmp_args_name_48, tmp_kw_name_48 );
    Py_DECREF( tmp_args_name_48 );
    if ( tmp_assign_source_173 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto try_except_handler_72;
    }
    assert( outline_23_var___class__ == NULL );
    outline_23_var___class__ = tmp_assign_source_173;

    tmp_outline_return_value_24 = outline_23_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_24 );
    Py_INCREF( tmp_outline_return_value_24 );
    goto try_return_handler_72;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_72:;
    Py_DECREF( locals_urllib3$exceptions_171 );
    locals_urllib3$exceptions_171 = NULL;
    goto try_return_handler_71;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_171 );
    locals_urllib3$exceptions_171 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_70;
    exception_value = exception_keeper_value_70;
    exception_tb = exception_keeper_tb_70;
    exception_lineno = exception_keeper_lineno_70;

    goto try_except_handler_71;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_71:;
    CHECK_OBJECT( (PyObject *)outline_23_var___class__ );
    Py_DECREF( outline_23_var___class__ );
    outline_23_var___class__ = NULL;

    goto outline_result_24;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_71;
    exception_value = exception_keeper_value_71;
    exception_tb = exception_keeper_tb_71;
    exception_lineno = exception_keeper_lineno_71;

    goto outline_exception_24;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_24:;
    exception_lineno = 171;
    goto try_except_handler_70;
    outline_result_24:;
    tmp_assign_source_172 = tmp_outline_return_value_24;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_172 );
    goto try_end_24;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_24__bases );
    tmp_class_creation_24__bases = NULL;

    Py_XDECREF( tmp_class_creation_24__class_decl_dict );
    tmp_class_creation_24__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_24__prepared );
    tmp_class_creation_24__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_72;
    exception_value = exception_keeper_value_72;
    exception_tb = exception_keeper_tb_72;
    exception_lineno = exception_keeper_lineno_72;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__bases );
    Py_DECREF( tmp_class_creation_24__bases );
    tmp_class_creation_24__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__class_decl_dict );
    Py_DECREF( tmp_class_creation_24__class_decl_dict );
    tmp_class_creation_24__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__metaclass );
    Py_DECREF( tmp_class_creation_24__metaclass );
    tmp_class_creation_24__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_24__prepared );
    Py_DECREF( tmp_class_creation_24__prepared );
    tmp_class_creation_24__prepared = NULL;

    // Tried code:
    tmp_tuple_element_72 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SecurityWarning );

    if (unlikely( tmp_tuple_element_72 == NULL ))
    {
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SecurityWarning );
    }

    if ( tmp_tuple_element_72 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SecurityWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;

        goto try_except_handler_73;
    }

    tmp_assign_source_174 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_72 );
    PyTuple_SET_ITEM( tmp_assign_source_174, 0, tmp_tuple_element_72 );
    assert( tmp_class_creation_25__bases_orig == NULL );
    tmp_class_creation_25__bases_orig = tmp_assign_source_174;

    tmp_dircall_arg1_25 = tmp_class_creation_25__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_25 );
    Py_INCREF( tmp_dircall_arg1_25 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_25};
        tmp_assign_source_175 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_175 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    assert( tmp_class_creation_25__bases == NULL );
    tmp_class_creation_25__bases = tmp_assign_source_175;

    tmp_assign_source_176 = PyDict_New();
    assert( tmp_class_creation_25__class_decl_dict == NULL );
    tmp_class_creation_25__class_decl_dict = tmp_assign_source_176;

    tmp_key_name_73 = const_str_plain_metaclass;
    tmp_dict_name_73 = tmp_class_creation_25__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_73 );
    tmp_res = PyDict_Contains( tmp_dict_name_73, tmp_key_name_73 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    tmp_cond_value_73 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_73 = CHECK_IF_TRUE( tmp_cond_value_73 );
    if ( tmp_cond_truth_73 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    if ( tmp_cond_truth_73 == 1 )
    {
        goto condexpr_true_73;
    }
    else
    {
        goto condexpr_false_73;
    }
    condexpr_true_73:;
    tmp_dict_name_74 = tmp_class_creation_25__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_74 );
    tmp_key_name_74 = const_str_plain_metaclass;
    tmp_metaclass_name_25 = DICT_GET_ITEM( tmp_dict_name_74, tmp_key_name_74 );
    if ( tmp_metaclass_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    goto condexpr_end_73;
    condexpr_false_73:;
    tmp_cond_value_74 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_cond_value_74 );
    tmp_cond_truth_74 = CHECK_IF_TRUE( tmp_cond_value_74 );
    if ( tmp_cond_truth_74 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    if ( tmp_cond_truth_74 == 1 )
    {
        goto condexpr_true_74;
    }
    else
    {
        goto condexpr_false_74;
    }
    condexpr_true_74:;
    tmp_subscribed_name_25 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_subscribed_name_25 );
    tmp_subscript_name_25 = const_int_0;
    tmp_type_arg_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
    if ( tmp_type_arg_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    tmp_metaclass_name_25 = BUILTIN_TYPE1( tmp_type_arg_25 );
    Py_DECREF( tmp_type_arg_25 );
    if ( tmp_metaclass_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    goto condexpr_end_74;
    condexpr_false_74:;
    tmp_metaclass_name_25 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_25 );
    condexpr_end_74:;
    condexpr_end_73:;
    tmp_bases_name_25 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_bases_name_25 );
    tmp_assign_source_177 = SELECT_METACLASS( tmp_metaclass_name_25, tmp_bases_name_25 );
    Py_DECREF( tmp_metaclass_name_25 );
    if ( tmp_assign_source_177 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    assert( tmp_class_creation_25__metaclass == NULL );
    tmp_class_creation_25__metaclass = tmp_assign_source_177;

    tmp_key_name_75 = const_str_plain_metaclass;
    tmp_dict_name_75 = tmp_class_creation_25__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_75 );
    tmp_res = PyDict_Contains( tmp_dict_name_75, tmp_key_name_75 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    tmp_cond_value_75 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_75 = CHECK_IF_TRUE( tmp_cond_value_75 );
    if ( tmp_cond_truth_75 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    if ( tmp_cond_truth_75 == 1 )
    {
        goto branch_yes_49;
    }
    else
    {
        goto branch_no_49;
    }
    branch_yes_49:;
    tmp_dictdel_dict = tmp_class_creation_25__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    branch_no_49:;
    tmp_hasattr_source_25 = tmp_class_creation_25__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_25 );
    tmp_hasattr_attr_25 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_25, tmp_hasattr_attr_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_75;
    }
    else
    {
        goto condexpr_false_75;
    }
    condexpr_true_75:;
    tmp_source_name_25 = tmp_class_creation_25__metaclass;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_called_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain___prepare__ );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    tmp_tuple_element_73 = const_str_plain_InsecurePlatformWarning;
    tmp_args_name_49 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_73 );
    PyTuple_SET_ITEM( tmp_args_name_49, 0, tmp_tuple_element_73 );
    tmp_tuple_element_73 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_tuple_element_73 );
    Py_INCREF( tmp_tuple_element_73 );
    PyTuple_SET_ITEM( tmp_args_name_49, 1, tmp_tuple_element_73 );
    tmp_kw_name_49 = tmp_class_creation_25__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_49 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 176;
    tmp_assign_source_178 = CALL_FUNCTION( tmp_called_name_49, tmp_args_name_49, tmp_kw_name_49 );
    Py_DECREF( tmp_called_name_49 );
    Py_DECREF( tmp_args_name_49 );
    if ( tmp_assign_source_178 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_73;
    }
    goto condexpr_end_75;
    condexpr_false_75:;
    tmp_assign_source_178 = PyDict_New();
    condexpr_end_75:;
    assert( tmp_class_creation_25__prepared == NULL );
    tmp_class_creation_25__prepared = tmp_assign_source_178;

    tmp_set_locals = tmp_class_creation_25__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_176 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_176, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_75;
    }
    tmp_dictset_value = const_str_digest_85322d4279b2ac8026a5921e77f32165;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_176, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_75;
    }
    tmp_dictset_value = const_str_plain_InsecurePlatformWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_176, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_75;
    }
    tmp_compare_left_25 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_compare_left_25 );
    tmp_compare_right_25 = tmp_class_creation_25__bases_orig;

    CHECK_OBJECT( tmp_compare_right_25 );
    tmp_cmp_NotEq_25 = RICH_COMPARE_BOOL_NE( tmp_compare_left_25, tmp_compare_right_25 );
    if ( tmp_cmp_NotEq_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_75;
    }
    if ( tmp_cmp_NotEq_25 == 1 )
    {
        goto branch_yes_50;
    }
    else
    {
        goto branch_no_50;
    }
    branch_yes_50:;
    tmp_dictset_value = tmp_class_creation_25__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_176, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_75;
    }
    branch_no_50:;
    tmp_called_name_50 = tmp_class_creation_25__metaclass;

    CHECK_OBJECT( tmp_called_name_50 );
    tmp_tuple_element_74 = const_str_plain_InsecurePlatformWarning;
    tmp_args_name_50 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_74 );
    PyTuple_SET_ITEM( tmp_args_name_50, 0, tmp_tuple_element_74 );
    tmp_tuple_element_74 = tmp_class_creation_25__bases;

    CHECK_OBJECT( tmp_tuple_element_74 );
    Py_INCREF( tmp_tuple_element_74 );
    PyTuple_SET_ITEM( tmp_args_name_50, 1, tmp_tuple_element_74 );
    tmp_tuple_element_74 = locals_urllib3$exceptions_176;
    Py_INCREF( tmp_tuple_element_74 );
    PyTuple_SET_ITEM( tmp_args_name_50, 2, tmp_tuple_element_74 );
    tmp_kw_name_50 = tmp_class_creation_25__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_50 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 176;
    tmp_assign_source_180 = CALL_FUNCTION( tmp_called_name_50, tmp_args_name_50, tmp_kw_name_50 );
    Py_DECREF( tmp_args_name_50 );
    if ( tmp_assign_source_180 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_75;
    }
    assert( outline_24_var___class__ == NULL );
    outline_24_var___class__ = tmp_assign_source_180;

    tmp_outline_return_value_25 = outline_24_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_25 );
    Py_INCREF( tmp_outline_return_value_25 );
    goto try_return_handler_75;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_75:;
    Py_DECREF( locals_urllib3$exceptions_176 );
    locals_urllib3$exceptions_176 = NULL;
    goto try_return_handler_74;
    // Exception handler code:
    try_except_handler_75:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_176 );
    locals_urllib3$exceptions_176 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto try_except_handler_74;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_74:;
    CHECK_OBJECT( (PyObject *)outline_24_var___class__ );
    Py_DECREF( outline_24_var___class__ );
    outline_24_var___class__ = NULL;

    goto outline_result_25;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_74;
    exception_value = exception_keeper_value_74;
    exception_tb = exception_keeper_tb_74;
    exception_lineno = exception_keeper_lineno_74;

    goto outline_exception_25;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_25:;
    exception_lineno = 176;
    goto try_except_handler_73;
    outline_result_25:;
    tmp_assign_source_179 = tmp_outline_return_value_25;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InsecurePlatformWarning, tmp_assign_source_179 );
    goto try_end_25;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_25__bases );
    tmp_class_creation_25__bases = NULL;

    Py_XDECREF( tmp_class_creation_25__class_decl_dict );
    tmp_class_creation_25__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_25__prepared );
    tmp_class_creation_25__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_75;
    exception_value = exception_keeper_value_75;
    exception_tb = exception_keeper_tb_75;
    exception_lineno = exception_keeper_lineno_75;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__bases );
    Py_DECREF( tmp_class_creation_25__bases );
    tmp_class_creation_25__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__class_decl_dict );
    Py_DECREF( tmp_class_creation_25__class_decl_dict );
    tmp_class_creation_25__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__metaclass );
    Py_DECREF( tmp_class_creation_25__metaclass );
    tmp_class_creation_25__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_25__prepared );
    Py_DECREF( tmp_class_creation_25__prepared );
    tmp_class_creation_25__prepared = NULL;

    // Tried code:
    tmp_tuple_element_75 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_75 == NULL ))
    {
        tmp_tuple_element_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_75 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;

        goto try_except_handler_76;
    }

    tmp_assign_source_181 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_75 );
    PyTuple_SET_ITEM( tmp_assign_source_181, 0, tmp_tuple_element_75 );
    assert( tmp_class_creation_26__bases_orig == NULL );
    tmp_class_creation_26__bases_orig = tmp_assign_source_181;

    tmp_dircall_arg1_26 = tmp_class_creation_26__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_26 );
    Py_INCREF( tmp_dircall_arg1_26 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_26};
        tmp_assign_source_182 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_182 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    assert( tmp_class_creation_26__bases == NULL );
    tmp_class_creation_26__bases = tmp_assign_source_182;

    tmp_assign_source_183 = PyDict_New();
    assert( tmp_class_creation_26__class_decl_dict == NULL );
    tmp_class_creation_26__class_decl_dict = tmp_assign_source_183;

    tmp_key_name_76 = const_str_plain_metaclass;
    tmp_dict_name_76 = tmp_class_creation_26__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_76 );
    tmp_res = PyDict_Contains( tmp_dict_name_76, tmp_key_name_76 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    tmp_cond_value_76 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_76 = CHECK_IF_TRUE( tmp_cond_value_76 );
    if ( tmp_cond_truth_76 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    if ( tmp_cond_truth_76 == 1 )
    {
        goto condexpr_true_76;
    }
    else
    {
        goto condexpr_false_76;
    }
    condexpr_true_76:;
    tmp_dict_name_77 = tmp_class_creation_26__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_77 );
    tmp_key_name_77 = const_str_plain_metaclass;
    tmp_metaclass_name_26 = DICT_GET_ITEM( tmp_dict_name_77, tmp_key_name_77 );
    if ( tmp_metaclass_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    goto condexpr_end_76;
    condexpr_false_76:;
    tmp_cond_value_77 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_cond_value_77 );
    tmp_cond_truth_77 = CHECK_IF_TRUE( tmp_cond_value_77 );
    if ( tmp_cond_truth_77 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    if ( tmp_cond_truth_77 == 1 )
    {
        goto condexpr_true_77;
    }
    else
    {
        goto condexpr_false_77;
    }
    condexpr_true_77:;
    tmp_subscribed_name_26 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_subscribed_name_26 );
    tmp_subscript_name_26 = const_int_0;
    tmp_type_arg_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
    if ( tmp_type_arg_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    tmp_metaclass_name_26 = BUILTIN_TYPE1( tmp_type_arg_26 );
    Py_DECREF( tmp_type_arg_26 );
    if ( tmp_metaclass_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    goto condexpr_end_77;
    condexpr_false_77:;
    tmp_metaclass_name_26 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_26 );
    condexpr_end_77:;
    condexpr_end_76:;
    tmp_bases_name_26 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_bases_name_26 );
    tmp_assign_source_184 = SELECT_METACLASS( tmp_metaclass_name_26, tmp_bases_name_26 );
    Py_DECREF( tmp_metaclass_name_26 );
    if ( tmp_assign_source_184 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    assert( tmp_class_creation_26__metaclass == NULL );
    tmp_class_creation_26__metaclass = tmp_assign_source_184;

    tmp_key_name_78 = const_str_plain_metaclass;
    tmp_dict_name_78 = tmp_class_creation_26__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_78 );
    tmp_res = PyDict_Contains( tmp_dict_name_78, tmp_key_name_78 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    tmp_cond_value_78 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_78 = CHECK_IF_TRUE( tmp_cond_value_78 );
    if ( tmp_cond_truth_78 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    if ( tmp_cond_truth_78 == 1 )
    {
        goto branch_yes_51;
    }
    else
    {
        goto branch_no_51;
    }
    branch_yes_51:;
    tmp_dictdel_dict = tmp_class_creation_26__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    branch_no_51:;
    tmp_hasattr_source_26 = tmp_class_creation_26__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_26 );
    tmp_hasattr_attr_26 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_26, tmp_hasattr_attr_26 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_78;
    }
    else
    {
        goto condexpr_false_78;
    }
    condexpr_true_78:;
    tmp_source_name_26 = tmp_class_creation_26__metaclass;

    CHECK_OBJECT( tmp_source_name_26 );
    tmp_called_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain___prepare__ );
    if ( tmp_called_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    tmp_tuple_element_76 = const_str_plain_SNIMissingWarning;
    tmp_args_name_51 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_76 );
    PyTuple_SET_ITEM( tmp_args_name_51, 0, tmp_tuple_element_76 );
    tmp_tuple_element_76 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_tuple_element_76 );
    Py_INCREF( tmp_tuple_element_76 );
    PyTuple_SET_ITEM( tmp_args_name_51, 1, tmp_tuple_element_76 );
    tmp_kw_name_51 = tmp_class_creation_26__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_51 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 181;
    tmp_assign_source_185 = CALL_FUNCTION( tmp_called_name_51, tmp_args_name_51, tmp_kw_name_51 );
    Py_DECREF( tmp_called_name_51 );
    Py_DECREF( tmp_args_name_51 );
    if ( tmp_assign_source_185 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_76;
    }
    goto condexpr_end_78;
    condexpr_false_78:;
    tmp_assign_source_185 = PyDict_New();
    condexpr_end_78:;
    assert( tmp_class_creation_26__prepared == NULL );
    tmp_class_creation_26__prepared = tmp_assign_source_185;

    tmp_set_locals = tmp_class_creation_26__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_181 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_181, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_78;
    }
    tmp_dictset_value = const_str_digest_0beacf6afb33b121e9545510332129fc;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_181, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_78;
    }
    tmp_dictset_value = const_str_plain_SNIMissingWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_181, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_78;
    }
    tmp_compare_left_26 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_compare_left_26 );
    tmp_compare_right_26 = tmp_class_creation_26__bases_orig;

    CHECK_OBJECT( tmp_compare_right_26 );
    tmp_cmp_NotEq_26 = RICH_COMPARE_BOOL_NE( tmp_compare_left_26, tmp_compare_right_26 );
    if ( tmp_cmp_NotEq_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_78;
    }
    if ( tmp_cmp_NotEq_26 == 1 )
    {
        goto branch_yes_52;
    }
    else
    {
        goto branch_no_52;
    }
    branch_yes_52:;
    tmp_dictset_value = tmp_class_creation_26__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_181, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_78;
    }
    branch_no_52:;
    tmp_called_name_52 = tmp_class_creation_26__metaclass;

    CHECK_OBJECT( tmp_called_name_52 );
    tmp_tuple_element_77 = const_str_plain_SNIMissingWarning;
    tmp_args_name_52 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_77 );
    PyTuple_SET_ITEM( tmp_args_name_52, 0, tmp_tuple_element_77 );
    tmp_tuple_element_77 = tmp_class_creation_26__bases;

    CHECK_OBJECT( tmp_tuple_element_77 );
    Py_INCREF( tmp_tuple_element_77 );
    PyTuple_SET_ITEM( tmp_args_name_52, 1, tmp_tuple_element_77 );
    tmp_tuple_element_77 = locals_urllib3$exceptions_181;
    Py_INCREF( tmp_tuple_element_77 );
    PyTuple_SET_ITEM( tmp_args_name_52, 2, tmp_tuple_element_77 );
    tmp_kw_name_52 = tmp_class_creation_26__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_52 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 181;
    tmp_assign_source_187 = CALL_FUNCTION( tmp_called_name_52, tmp_args_name_52, tmp_kw_name_52 );
    Py_DECREF( tmp_args_name_52 );
    if ( tmp_assign_source_187 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_78;
    }
    assert( outline_25_var___class__ == NULL );
    outline_25_var___class__ = tmp_assign_source_187;

    tmp_outline_return_value_26 = outline_25_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_26 );
    Py_INCREF( tmp_outline_return_value_26 );
    goto try_return_handler_78;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_78:;
    Py_DECREF( locals_urllib3$exceptions_181 );
    locals_urllib3$exceptions_181 = NULL;
    goto try_return_handler_77;
    // Exception handler code:
    try_except_handler_78:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_181 );
    locals_urllib3$exceptions_181 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_76;
    exception_value = exception_keeper_value_76;
    exception_tb = exception_keeper_tb_76;
    exception_lineno = exception_keeper_lineno_76;

    goto try_except_handler_77;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_77:;
    CHECK_OBJECT( (PyObject *)outline_25_var___class__ );
    Py_DECREF( outline_25_var___class__ );
    outline_25_var___class__ = NULL;

    goto outline_result_26;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_77 = exception_type;
    exception_keeper_value_77 = exception_value;
    exception_keeper_tb_77 = exception_tb;
    exception_keeper_lineno_77 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_77;
    exception_value = exception_keeper_value_77;
    exception_tb = exception_keeper_tb_77;
    exception_lineno = exception_keeper_lineno_77;

    goto outline_exception_26;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_26:;
    exception_lineno = 181;
    goto try_except_handler_76;
    outline_result_26:;
    tmp_assign_source_186 = tmp_outline_return_value_26;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_SNIMissingWarning, tmp_assign_source_186 );
    goto try_end_26;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_78 = exception_type;
    exception_keeper_value_78 = exception_value;
    exception_keeper_tb_78 = exception_tb;
    exception_keeper_lineno_78 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_26__bases );
    tmp_class_creation_26__bases = NULL;

    Py_XDECREF( tmp_class_creation_26__class_decl_dict );
    tmp_class_creation_26__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_26__prepared );
    tmp_class_creation_26__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_78;
    exception_value = exception_keeper_value_78;
    exception_tb = exception_keeper_tb_78;
    exception_lineno = exception_keeper_lineno_78;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__bases );
    Py_DECREF( tmp_class_creation_26__bases );
    tmp_class_creation_26__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__class_decl_dict );
    Py_DECREF( tmp_class_creation_26__class_decl_dict );
    tmp_class_creation_26__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__metaclass );
    Py_DECREF( tmp_class_creation_26__metaclass );
    tmp_class_creation_26__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_26__prepared );
    Py_DECREF( tmp_class_creation_26__prepared );
    tmp_class_creation_26__prepared = NULL;

    // Tried code:
    tmp_tuple_element_78 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPWarning );

    if (unlikely( tmp_tuple_element_78 == NULL ))
    {
        tmp_tuple_element_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPWarning );
    }

    if ( tmp_tuple_element_78 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;

        goto try_except_handler_79;
    }

    tmp_assign_source_188 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_78 );
    PyTuple_SET_ITEM( tmp_assign_source_188, 0, tmp_tuple_element_78 );
    assert( tmp_class_creation_27__bases_orig == NULL );
    tmp_class_creation_27__bases_orig = tmp_assign_source_188;

    tmp_dircall_arg1_27 = tmp_class_creation_27__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_27 );
    Py_INCREF( tmp_dircall_arg1_27 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_27};
        tmp_assign_source_189 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_189 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    assert( tmp_class_creation_27__bases == NULL );
    tmp_class_creation_27__bases = tmp_assign_source_189;

    tmp_assign_source_190 = PyDict_New();
    assert( tmp_class_creation_27__class_decl_dict == NULL );
    tmp_class_creation_27__class_decl_dict = tmp_assign_source_190;

    tmp_key_name_79 = const_str_plain_metaclass;
    tmp_dict_name_79 = tmp_class_creation_27__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_79 );
    tmp_res = PyDict_Contains( tmp_dict_name_79, tmp_key_name_79 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    tmp_cond_value_79 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_79 = CHECK_IF_TRUE( tmp_cond_value_79 );
    if ( tmp_cond_truth_79 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    if ( tmp_cond_truth_79 == 1 )
    {
        goto condexpr_true_79;
    }
    else
    {
        goto condexpr_false_79;
    }
    condexpr_true_79:;
    tmp_dict_name_80 = tmp_class_creation_27__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_80 );
    tmp_key_name_80 = const_str_plain_metaclass;
    tmp_metaclass_name_27 = DICT_GET_ITEM( tmp_dict_name_80, tmp_key_name_80 );
    if ( tmp_metaclass_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    goto condexpr_end_79;
    condexpr_false_79:;
    tmp_cond_value_80 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_cond_value_80 );
    tmp_cond_truth_80 = CHECK_IF_TRUE( tmp_cond_value_80 );
    if ( tmp_cond_truth_80 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    if ( tmp_cond_truth_80 == 1 )
    {
        goto condexpr_true_80;
    }
    else
    {
        goto condexpr_false_80;
    }
    condexpr_true_80:;
    tmp_subscribed_name_27 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_subscribed_name_27 );
    tmp_subscript_name_27 = const_int_0;
    tmp_type_arg_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
    if ( tmp_type_arg_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    tmp_metaclass_name_27 = BUILTIN_TYPE1( tmp_type_arg_27 );
    Py_DECREF( tmp_type_arg_27 );
    if ( tmp_metaclass_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    goto condexpr_end_80;
    condexpr_false_80:;
    tmp_metaclass_name_27 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_27 );
    condexpr_end_80:;
    condexpr_end_79:;
    tmp_bases_name_27 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_bases_name_27 );
    tmp_assign_source_191 = SELECT_METACLASS( tmp_metaclass_name_27, tmp_bases_name_27 );
    Py_DECREF( tmp_metaclass_name_27 );
    if ( tmp_assign_source_191 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    assert( tmp_class_creation_27__metaclass == NULL );
    tmp_class_creation_27__metaclass = tmp_assign_source_191;

    tmp_key_name_81 = const_str_plain_metaclass;
    tmp_dict_name_81 = tmp_class_creation_27__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_81 );
    tmp_res = PyDict_Contains( tmp_dict_name_81, tmp_key_name_81 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    tmp_cond_value_81 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_81 = CHECK_IF_TRUE( tmp_cond_value_81 );
    if ( tmp_cond_truth_81 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    if ( tmp_cond_truth_81 == 1 )
    {
        goto branch_yes_53;
    }
    else
    {
        goto branch_no_53;
    }
    branch_yes_53:;
    tmp_dictdel_dict = tmp_class_creation_27__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    branch_no_53:;
    tmp_hasattr_source_27 = tmp_class_creation_27__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_27 );
    tmp_hasattr_attr_27 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_27, tmp_hasattr_attr_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_81;
    }
    else
    {
        goto condexpr_false_81;
    }
    condexpr_true_81:;
    tmp_source_name_27 = tmp_class_creation_27__metaclass;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_called_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain___prepare__ );
    if ( tmp_called_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    tmp_tuple_element_79 = const_str_plain_DependencyWarning;
    tmp_args_name_53 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_79 );
    PyTuple_SET_ITEM( tmp_args_name_53, 0, tmp_tuple_element_79 );
    tmp_tuple_element_79 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_tuple_element_79 );
    Py_INCREF( tmp_tuple_element_79 );
    PyTuple_SET_ITEM( tmp_args_name_53, 1, tmp_tuple_element_79 );
    tmp_kw_name_53 = tmp_class_creation_27__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_53 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 186;
    tmp_assign_source_192 = CALL_FUNCTION( tmp_called_name_53, tmp_args_name_53, tmp_kw_name_53 );
    Py_DECREF( tmp_called_name_53 );
    Py_DECREF( tmp_args_name_53 );
    if ( tmp_assign_source_192 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_79;
    }
    goto condexpr_end_81;
    condexpr_false_81:;
    tmp_assign_source_192 = PyDict_New();
    condexpr_end_81:;
    assert( tmp_class_creation_27__prepared == NULL );
    tmp_class_creation_27__prepared = tmp_assign_source_192;

    tmp_set_locals = tmp_class_creation_27__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_186 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_186, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_81;
    }
    tmp_dictset_value = const_str_digest_50f562faa7eed1b409bdd05c97fc14f2;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_186, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_81;
    }
    tmp_dictset_value = const_str_plain_DependencyWarning;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_186, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_81;
    }
    tmp_compare_left_27 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_compare_left_27 );
    tmp_compare_right_27 = tmp_class_creation_27__bases_orig;

    CHECK_OBJECT( tmp_compare_right_27 );
    tmp_cmp_NotEq_27 = RICH_COMPARE_BOOL_NE( tmp_compare_left_27, tmp_compare_right_27 );
    if ( tmp_cmp_NotEq_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_81;
    }
    if ( tmp_cmp_NotEq_27 == 1 )
    {
        goto branch_yes_54;
    }
    else
    {
        goto branch_no_54;
    }
    branch_yes_54:;
    tmp_dictset_value = tmp_class_creation_27__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_186, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_81;
    }
    branch_no_54:;
    tmp_called_name_54 = tmp_class_creation_27__metaclass;

    CHECK_OBJECT( tmp_called_name_54 );
    tmp_tuple_element_80 = const_str_plain_DependencyWarning;
    tmp_args_name_54 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_80 );
    PyTuple_SET_ITEM( tmp_args_name_54, 0, tmp_tuple_element_80 );
    tmp_tuple_element_80 = tmp_class_creation_27__bases;

    CHECK_OBJECT( tmp_tuple_element_80 );
    Py_INCREF( tmp_tuple_element_80 );
    PyTuple_SET_ITEM( tmp_args_name_54, 1, tmp_tuple_element_80 );
    tmp_tuple_element_80 = locals_urllib3$exceptions_186;
    Py_INCREF( tmp_tuple_element_80 );
    PyTuple_SET_ITEM( tmp_args_name_54, 2, tmp_tuple_element_80 );
    tmp_kw_name_54 = tmp_class_creation_27__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_54 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 186;
    tmp_assign_source_194 = CALL_FUNCTION( tmp_called_name_54, tmp_args_name_54, tmp_kw_name_54 );
    Py_DECREF( tmp_args_name_54 );
    if ( tmp_assign_source_194 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_81;
    }
    assert( outline_26_var___class__ == NULL );
    outline_26_var___class__ = tmp_assign_source_194;

    tmp_outline_return_value_27 = outline_26_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_27 );
    Py_INCREF( tmp_outline_return_value_27 );
    goto try_return_handler_81;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_81:;
    Py_DECREF( locals_urllib3$exceptions_186 );
    locals_urllib3$exceptions_186 = NULL;
    goto try_return_handler_80;
    // Exception handler code:
    try_except_handler_81:;
    exception_keeper_type_79 = exception_type;
    exception_keeper_value_79 = exception_value;
    exception_keeper_tb_79 = exception_tb;
    exception_keeper_lineno_79 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_186 );
    locals_urllib3$exceptions_186 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_79;
    exception_value = exception_keeper_value_79;
    exception_tb = exception_keeper_tb_79;
    exception_lineno = exception_keeper_lineno_79;

    goto try_except_handler_80;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_80:;
    CHECK_OBJECT( (PyObject *)outline_26_var___class__ );
    Py_DECREF( outline_26_var___class__ );
    outline_26_var___class__ = NULL;

    goto outline_result_27;
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_80 = exception_type;
    exception_keeper_value_80 = exception_value;
    exception_keeper_tb_80 = exception_tb;
    exception_keeper_lineno_80 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_80;
    exception_value = exception_keeper_value_80;
    exception_tb = exception_keeper_tb_80;
    exception_lineno = exception_keeper_lineno_80;

    goto outline_exception_27;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_27:;
    exception_lineno = 186;
    goto try_except_handler_79;
    outline_result_27:;
    tmp_assign_source_193 = tmp_outline_return_value_27;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_193 );
    goto try_end_27;
    // Exception handler code:
    try_except_handler_79:;
    exception_keeper_type_81 = exception_type;
    exception_keeper_value_81 = exception_value;
    exception_keeper_tb_81 = exception_tb;
    exception_keeper_lineno_81 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_27__bases );
    tmp_class_creation_27__bases = NULL;

    Py_XDECREF( tmp_class_creation_27__class_decl_dict );
    tmp_class_creation_27__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_27__prepared );
    tmp_class_creation_27__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_81;
    exception_value = exception_keeper_value_81;
    exception_tb = exception_keeper_tb_81;
    exception_lineno = exception_keeper_lineno_81;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__bases );
    Py_DECREF( tmp_class_creation_27__bases );
    tmp_class_creation_27__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__class_decl_dict );
    Py_DECREF( tmp_class_creation_27__class_decl_dict );
    tmp_class_creation_27__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__metaclass );
    Py_DECREF( tmp_class_creation_27__metaclass );
    tmp_class_creation_27__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_27__prepared );
    Py_DECREF( tmp_class_creation_27__prepared );
    tmp_class_creation_27__prepared = NULL;

    // Tried code:
    tmp_tuple_element_81 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_81 == NULL ))
    {
        tmp_tuple_element_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_81 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;

        goto try_except_handler_82;
    }

    tmp_assign_source_195 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_81 );
    PyTuple_SET_ITEM( tmp_assign_source_195, 0, tmp_tuple_element_81 );
    tmp_tuple_element_81 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_81 );
    PyTuple_SET_ITEM( tmp_assign_source_195, 1, tmp_tuple_element_81 );
    assert( tmp_class_creation_28__bases_orig == NULL );
    tmp_class_creation_28__bases_orig = tmp_assign_source_195;

    tmp_dircall_arg1_28 = tmp_class_creation_28__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_28 );
    Py_INCREF( tmp_dircall_arg1_28 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_28};
        tmp_assign_source_196 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_196 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    assert( tmp_class_creation_28__bases == NULL );
    tmp_class_creation_28__bases = tmp_assign_source_196;

    tmp_assign_source_197 = PyDict_New();
    assert( tmp_class_creation_28__class_decl_dict == NULL );
    tmp_class_creation_28__class_decl_dict = tmp_assign_source_197;

    tmp_key_name_82 = const_str_plain_metaclass;
    tmp_dict_name_82 = tmp_class_creation_28__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_82 );
    tmp_res = PyDict_Contains( tmp_dict_name_82, tmp_key_name_82 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    tmp_cond_value_82 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_82 = CHECK_IF_TRUE( tmp_cond_value_82 );
    if ( tmp_cond_truth_82 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    if ( tmp_cond_truth_82 == 1 )
    {
        goto condexpr_true_82;
    }
    else
    {
        goto condexpr_false_82;
    }
    condexpr_true_82:;
    tmp_dict_name_83 = tmp_class_creation_28__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_83 );
    tmp_key_name_83 = const_str_plain_metaclass;
    tmp_metaclass_name_28 = DICT_GET_ITEM( tmp_dict_name_83, tmp_key_name_83 );
    if ( tmp_metaclass_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    goto condexpr_end_82;
    condexpr_false_82:;
    tmp_cond_value_83 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_cond_value_83 );
    tmp_cond_truth_83 = CHECK_IF_TRUE( tmp_cond_value_83 );
    if ( tmp_cond_truth_83 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    if ( tmp_cond_truth_83 == 1 )
    {
        goto condexpr_true_83;
    }
    else
    {
        goto condexpr_false_83;
    }
    condexpr_true_83:;
    tmp_subscribed_name_28 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_subscribed_name_28 );
    tmp_subscript_name_28 = const_int_0;
    tmp_type_arg_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
    if ( tmp_type_arg_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    tmp_metaclass_name_28 = BUILTIN_TYPE1( tmp_type_arg_28 );
    Py_DECREF( tmp_type_arg_28 );
    if ( tmp_metaclass_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    goto condexpr_end_83;
    condexpr_false_83:;
    tmp_metaclass_name_28 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_28 );
    condexpr_end_83:;
    condexpr_end_82:;
    tmp_bases_name_28 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_bases_name_28 );
    tmp_assign_source_198 = SELECT_METACLASS( tmp_metaclass_name_28, tmp_bases_name_28 );
    Py_DECREF( tmp_metaclass_name_28 );
    if ( tmp_assign_source_198 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    assert( tmp_class_creation_28__metaclass == NULL );
    tmp_class_creation_28__metaclass = tmp_assign_source_198;

    tmp_key_name_84 = const_str_plain_metaclass;
    tmp_dict_name_84 = tmp_class_creation_28__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_84 );
    tmp_res = PyDict_Contains( tmp_dict_name_84, tmp_key_name_84 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    tmp_cond_value_84 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_84 = CHECK_IF_TRUE( tmp_cond_value_84 );
    if ( tmp_cond_truth_84 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    if ( tmp_cond_truth_84 == 1 )
    {
        goto branch_yes_55;
    }
    else
    {
        goto branch_no_55;
    }
    branch_yes_55:;
    tmp_dictdel_dict = tmp_class_creation_28__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    branch_no_55:;
    tmp_hasattr_source_28 = tmp_class_creation_28__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_28 );
    tmp_hasattr_attr_28 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_28, tmp_hasattr_attr_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_84;
    }
    else
    {
        goto condexpr_false_84;
    }
    condexpr_true_84:;
    tmp_source_name_28 = tmp_class_creation_28__metaclass;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_called_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___prepare__ );
    if ( tmp_called_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    tmp_tuple_element_82 = const_str_plain_ResponseNotChunked;
    tmp_args_name_55 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_82 );
    PyTuple_SET_ITEM( tmp_args_name_55, 0, tmp_tuple_element_82 );
    tmp_tuple_element_82 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_tuple_element_82 );
    Py_INCREF( tmp_tuple_element_82 );
    PyTuple_SET_ITEM( tmp_args_name_55, 1, tmp_tuple_element_82 );
    tmp_kw_name_55 = tmp_class_creation_28__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_55 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 194;
    tmp_assign_source_199 = CALL_FUNCTION( tmp_called_name_55, tmp_args_name_55, tmp_kw_name_55 );
    Py_DECREF( tmp_called_name_55 );
    Py_DECREF( tmp_args_name_55 );
    if ( tmp_assign_source_199 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_82;
    }
    goto condexpr_end_84;
    condexpr_false_84:;
    tmp_assign_source_199 = PyDict_New();
    condexpr_end_84:;
    assert( tmp_class_creation_28__prepared == NULL );
    tmp_class_creation_28__prepared = tmp_assign_source_199;

    tmp_set_locals = tmp_class_creation_28__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_194 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_194, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_84;
    }
    tmp_dictset_value = const_str_digest_b54ef1348f0bbeb78bd78ac4903b9341;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_194, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_84;
    }
    tmp_dictset_value = const_str_plain_ResponseNotChunked;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_194, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_84;
    }
    tmp_compare_left_28 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_compare_left_28 );
    tmp_compare_right_28 = tmp_class_creation_28__bases_orig;

    CHECK_OBJECT( tmp_compare_right_28 );
    tmp_cmp_NotEq_28 = RICH_COMPARE_BOOL_NE( tmp_compare_left_28, tmp_compare_right_28 );
    if ( tmp_cmp_NotEq_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_84;
    }
    if ( tmp_cmp_NotEq_28 == 1 )
    {
        goto branch_yes_56;
    }
    else
    {
        goto branch_no_56;
    }
    branch_yes_56:;
    tmp_dictset_value = tmp_class_creation_28__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_194, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_84;
    }
    branch_no_56:;
    tmp_called_name_56 = tmp_class_creation_28__metaclass;

    CHECK_OBJECT( tmp_called_name_56 );
    tmp_tuple_element_83 = const_str_plain_ResponseNotChunked;
    tmp_args_name_56 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_83 );
    PyTuple_SET_ITEM( tmp_args_name_56, 0, tmp_tuple_element_83 );
    tmp_tuple_element_83 = tmp_class_creation_28__bases;

    CHECK_OBJECT( tmp_tuple_element_83 );
    Py_INCREF( tmp_tuple_element_83 );
    PyTuple_SET_ITEM( tmp_args_name_56, 1, tmp_tuple_element_83 );
    tmp_tuple_element_83 = locals_urllib3$exceptions_194;
    Py_INCREF( tmp_tuple_element_83 );
    PyTuple_SET_ITEM( tmp_args_name_56, 2, tmp_tuple_element_83 );
    tmp_kw_name_56 = tmp_class_creation_28__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_56 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 194;
    tmp_assign_source_201 = CALL_FUNCTION( tmp_called_name_56, tmp_args_name_56, tmp_kw_name_56 );
    Py_DECREF( tmp_args_name_56 );
    if ( tmp_assign_source_201 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto try_except_handler_84;
    }
    assert( outline_27_var___class__ == NULL );
    outline_27_var___class__ = tmp_assign_source_201;

    tmp_outline_return_value_28 = outline_27_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_28 );
    Py_INCREF( tmp_outline_return_value_28 );
    goto try_return_handler_84;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_84:;
    Py_DECREF( locals_urllib3$exceptions_194 );
    locals_urllib3$exceptions_194 = NULL;
    goto try_return_handler_83;
    // Exception handler code:
    try_except_handler_84:;
    exception_keeper_type_82 = exception_type;
    exception_keeper_value_82 = exception_value;
    exception_keeper_tb_82 = exception_tb;
    exception_keeper_lineno_82 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_194 );
    locals_urllib3$exceptions_194 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_82;
    exception_value = exception_keeper_value_82;
    exception_tb = exception_keeper_tb_82;
    exception_lineno = exception_keeper_lineno_82;

    goto try_except_handler_83;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_83:;
    CHECK_OBJECT( (PyObject *)outline_27_var___class__ );
    Py_DECREF( outline_27_var___class__ );
    outline_27_var___class__ = NULL;

    goto outline_result_28;
    // Exception handler code:
    try_except_handler_83:;
    exception_keeper_type_83 = exception_type;
    exception_keeper_value_83 = exception_value;
    exception_keeper_tb_83 = exception_tb;
    exception_keeper_lineno_83 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_83;
    exception_value = exception_keeper_value_83;
    exception_tb = exception_keeper_tb_83;
    exception_lineno = exception_keeper_lineno_83;

    goto outline_exception_28;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_28:;
    exception_lineno = 194;
    goto try_except_handler_82;
    outline_result_28:;
    tmp_assign_source_200 = tmp_outline_return_value_28;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked, tmp_assign_source_200 );
    goto try_end_28;
    // Exception handler code:
    try_except_handler_82:;
    exception_keeper_type_84 = exception_type;
    exception_keeper_value_84 = exception_value;
    exception_keeper_tb_84 = exception_tb;
    exception_keeper_lineno_84 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_28__bases );
    tmp_class_creation_28__bases = NULL;

    Py_XDECREF( tmp_class_creation_28__class_decl_dict );
    tmp_class_creation_28__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_28__prepared );
    tmp_class_creation_28__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_84;
    exception_value = exception_keeper_value_84;
    exception_tb = exception_keeper_tb_84;
    exception_lineno = exception_keeper_lineno_84;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__bases );
    Py_DECREF( tmp_class_creation_28__bases );
    tmp_class_creation_28__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__class_decl_dict );
    Py_DECREF( tmp_class_creation_28__class_decl_dict );
    tmp_class_creation_28__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__metaclass );
    Py_DECREF( tmp_class_creation_28__metaclass );
    tmp_class_creation_28__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_28__prepared );
    Py_DECREF( tmp_class_creation_28__prepared );
    tmp_class_creation_28__prepared = NULL;

    // Tried code:
    tmp_tuple_element_84 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_84 == NULL ))
    {
        tmp_tuple_element_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_84 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;

        goto try_except_handler_85;
    }

    tmp_assign_source_202 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_84 );
    PyTuple_SET_ITEM( tmp_assign_source_202, 0, tmp_tuple_element_84 );
    assert( tmp_class_creation_29__bases_orig == NULL );
    tmp_class_creation_29__bases_orig = tmp_assign_source_202;

    tmp_dircall_arg1_29 = tmp_class_creation_29__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_29 );
    Py_INCREF( tmp_dircall_arg1_29 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_29};
        tmp_assign_source_203 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_203 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    assert( tmp_class_creation_29__bases == NULL );
    tmp_class_creation_29__bases = tmp_assign_source_203;

    tmp_assign_source_204 = PyDict_New();
    assert( tmp_class_creation_29__class_decl_dict == NULL );
    tmp_class_creation_29__class_decl_dict = tmp_assign_source_204;

    tmp_key_name_85 = const_str_plain_metaclass;
    tmp_dict_name_85 = tmp_class_creation_29__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_85 );
    tmp_res = PyDict_Contains( tmp_dict_name_85, tmp_key_name_85 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    tmp_cond_value_85 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_85 = CHECK_IF_TRUE( tmp_cond_value_85 );
    if ( tmp_cond_truth_85 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    if ( tmp_cond_truth_85 == 1 )
    {
        goto condexpr_true_85;
    }
    else
    {
        goto condexpr_false_85;
    }
    condexpr_true_85:;
    tmp_dict_name_86 = tmp_class_creation_29__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_86 );
    tmp_key_name_86 = const_str_plain_metaclass;
    tmp_metaclass_name_29 = DICT_GET_ITEM( tmp_dict_name_86, tmp_key_name_86 );
    if ( tmp_metaclass_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    goto condexpr_end_85;
    condexpr_false_85:;
    tmp_cond_value_86 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_cond_value_86 );
    tmp_cond_truth_86 = CHECK_IF_TRUE( tmp_cond_value_86 );
    if ( tmp_cond_truth_86 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    if ( tmp_cond_truth_86 == 1 )
    {
        goto condexpr_true_86;
    }
    else
    {
        goto condexpr_false_86;
    }
    condexpr_true_86:;
    tmp_subscribed_name_29 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_subscribed_name_29 );
    tmp_subscript_name_29 = const_int_0;
    tmp_type_arg_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
    if ( tmp_type_arg_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    tmp_metaclass_name_29 = BUILTIN_TYPE1( tmp_type_arg_29 );
    Py_DECREF( tmp_type_arg_29 );
    if ( tmp_metaclass_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    goto condexpr_end_86;
    condexpr_false_86:;
    tmp_metaclass_name_29 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_29 );
    condexpr_end_86:;
    condexpr_end_85:;
    tmp_bases_name_29 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_bases_name_29 );
    tmp_assign_source_205 = SELECT_METACLASS( tmp_metaclass_name_29, tmp_bases_name_29 );
    Py_DECREF( tmp_metaclass_name_29 );
    if ( tmp_assign_source_205 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    assert( tmp_class_creation_29__metaclass == NULL );
    tmp_class_creation_29__metaclass = tmp_assign_source_205;

    tmp_key_name_87 = const_str_plain_metaclass;
    tmp_dict_name_87 = tmp_class_creation_29__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_87 );
    tmp_res = PyDict_Contains( tmp_dict_name_87, tmp_key_name_87 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    tmp_cond_value_87 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_87 = CHECK_IF_TRUE( tmp_cond_value_87 );
    if ( tmp_cond_truth_87 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    if ( tmp_cond_truth_87 == 1 )
    {
        goto branch_yes_57;
    }
    else
    {
        goto branch_no_57;
    }
    branch_yes_57:;
    tmp_dictdel_dict = tmp_class_creation_29__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    branch_no_57:;
    tmp_hasattr_source_29 = tmp_class_creation_29__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_29 );
    tmp_hasattr_attr_29 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_29, tmp_hasattr_attr_29 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_87;
    }
    else
    {
        goto condexpr_false_87;
    }
    condexpr_true_87:;
    tmp_source_name_29 = tmp_class_creation_29__metaclass;

    CHECK_OBJECT( tmp_source_name_29 );
    tmp_called_name_57 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain___prepare__ );
    if ( tmp_called_name_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    tmp_tuple_element_85 = const_str_plain_BodyNotHttplibCompatible;
    tmp_args_name_57 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_85 );
    PyTuple_SET_ITEM( tmp_args_name_57, 0, tmp_tuple_element_85 );
    tmp_tuple_element_85 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_tuple_element_85 );
    Py_INCREF( tmp_tuple_element_85 );
    PyTuple_SET_ITEM( tmp_args_name_57, 1, tmp_tuple_element_85 );
    tmp_kw_name_57 = tmp_class_creation_29__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_57 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 199;
    tmp_assign_source_206 = CALL_FUNCTION( tmp_called_name_57, tmp_args_name_57, tmp_kw_name_57 );
    Py_DECREF( tmp_called_name_57 );
    Py_DECREF( tmp_args_name_57 );
    if ( tmp_assign_source_206 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_85;
    }
    goto condexpr_end_87;
    condexpr_false_87:;
    tmp_assign_source_206 = PyDict_New();
    condexpr_end_87:;
    assert( tmp_class_creation_29__prepared == NULL );
    tmp_class_creation_29__prepared = tmp_assign_source_206;

    tmp_set_locals = tmp_class_creation_29__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_199 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_199, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_87;
    }
    tmp_dictset_value = const_str_digest_ae47a0634b7ce883442a5d8a017f6a25;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_199, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_87;
    }
    tmp_dictset_value = const_str_plain_BodyNotHttplibCompatible;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_199, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_87;
    }
    tmp_compare_left_29 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_compare_left_29 );
    tmp_compare_right_29 = tmp_class_creation_29__bases_orig;

    CHECK_OBJECT( tmp_compare_right_29 );
    tmp_cmp_NotEq_29 = RICH_COMPARE_BOOL_NE( tmp_compare_left_29, tmp_compare_right_29 );
    if ( tmp_cmp_NotEq_29 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_87;
    }
    if ( tmp_cmp_NotEq_29 == 1 )
    {
        goto branch_yes_58;
    }
    else
    {
        goto branch_no_58;
    }
    branch_yes_58:;
    tmp_dictset_value = tmp_class_creation_29__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_199, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_87;
    }
    branch_no_58:;
    tmp_called_name_58 = tmp_class_creation_29__metaclass;

    CHECK_OBJECT( tmp_called_name_58 );
    tmp_tuple_element_86 = const_str_plain_BodyNotHttplibCompatible;
    tmp_args_name_58 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_86 );
    PyTuple_SET_ITEM( tmp_args_name_58, 0, tmp_tuple_element_86 );
    tmp_tuple_element_86 = tmp_class_creation_29__bases;

    CHECK_OBJECT( tmp_tuple_element_86 );
    Py_INCREF( tmp_tuple_element_86 );
    PyTuple_SET_ITEM( tmp_args_name_58, 1, tmp_tuple_element_86 );
    tmp_tuple_element_86 = locals_urllib3$exceptions_199;
    Py_INCREF( tmp_tuple_element_86 );
    PyTuple_SET_ITEM( tmp_args_name_58, 2, tmp_tuple_element_86 );
    tmp_kw_name_58 = tmp_class_creation_29__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_58 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 199;
    tmp_assign_source_208 = CALL_FUNCTION( tmp_called_name_58, tmp_args_name_58, tmp_kw_name_58 );
    Py_DECREF( tmp_args_name_58 );
    if ( tmp_assign_source_208 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto try_except_handler_87;
    }
    assert( outline_28_var___class__ == NULL );
    outline_28_var___class__ = tmp_assign_source_208;

    tmp_outline_return_value_29 = outline_28_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_29 );
    Py_INCREF( tmp_outline_return_value_29 );
    goto try_return_handler_87;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_87:;
    Py_DECREF( locals_urllib3$exceptions_199 );
    locals_urllib3$exceptions_199 = NULL;
    goto try_return_handler_86;
    // Exception handler code:
    try_except_handler_87:;
    exception_keeper_type_85 = exception_type;
    exception_keeper_value_85 = exception_value;
    exception_keeper_tb_85 = exception_tb;
    exception_keeper_lineno_85 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_199 );
    locals_urllib3$exceptions_199 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_85;
    exception_value = exception_keeper_value_85;
    exception_tb = exception_keeper_tb_85;
    exception_lineno = exception_keeper_lineno_85;

    goto try_except_handler_86;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_86:;
    CHECK_OBJECT( (PyObject *)outline_28_var___class__ );
    Py_DECREF( outline_28_var___class__ );
    outline_28_var___class__ = NULL;

    goto outline_result_29;
    // Exception handler code:
    try_except_handler_86:;
    exception_keeper_type_86 = exception_type;
    exception_keeper_value_86 = exception_value;
    exception_keeper_tb_86 = exception_tb;
    exception_keeper_lineno_86 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_86;
    exception_value = exception_keeper_value_86;
    exception_tb = exception_keeper_tb_86;
    exception_lineno = exception_keeper_lineno_86;

    goto outline_exception_29;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_29:;
    exception_lineno = 199;
    goto try_except_handler_85;
    outline_result_29:;
    tmp_assign_source_207 = tmp_outline_return_value_29;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_BodyNotHttplibCompatible, tmp_assign_source_207 );
    goto try_end_29;
    // Exception handler code:
    try_except_handler_85:;
    exception_keeper_type_87 = exception_type;
    exception_keeper_value_87 = exception_value;
    exception_keeper_tb_87 = exception_tb;
    exception_keeper_lineno_87 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_29__bases );
    tmp_class_creation_29__bases = NULL;

    Py_XDECREF( tmp_class_creation_29__class_decl_dict );
    tmp_class_creation_29__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_29__prepared );
    tmp_class_creation_29__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_87;
    exception_value = exception_keeper_value_87;
    exception_tb = exception_keeper_tb_87;
    exception_lineno = exception_keeper_lineno_87;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__bases );
    Py_DECREF( tmp_class_creation_29__bases );
    tmp_class_creation_29__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__class_decl_dict );
    Py_DECREF( tmp_class_creation_29__class_decl_dict );
    tmp_class_creation_29__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__metaclass );
    Py_DECREF( tmp_class_creation_29__metaclass );
    tmp_class_creation_29__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_29__prepared );
    Py_DECREF( tmp_class_creation_29__prepared );
    tmp_class_creation_29__prepared = NULL;

    // Tried code:
    tmp_tuple_element_87 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_87 == NULL ))
    {
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_87 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;

        goto try_except_handler_88;
    }

    tmp_assign_source_209 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_87 );
    PyTuple_SET_ITEM( tmp_assign_source_209, 0, tmp_tuple_element_87 );
    tmp_tuple_element_87 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead );

    if (unlikely( tmp_tuple_element_87 == NULL ))
    {
        tmp_tuple_element_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_httplib_IncompleteRead );
    }

    if ( tmp_tuple_element_87 == NULL )
    {
        Py_DECREF( tmp_assign_source_209 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "httplib_IncompleteRead" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;

        goto try_except_handler_88;
    }

    Py_INCREF( tmp_tuple_element_87 );
    PyTuple_SET_ITEM( tmp_assign_source_209, 1, tmp_tuple_element_87 );
    assert( tmp_class_creation_30__bases_orig == NULL );
    tmp_class_creation_30__bases_orig = tmp_assign_source_209;

    tmp_dircall_arg1_30 = tmp_class_creation_30__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_30 );
    Py_INCREF( tmp_dircall_arg1_30 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_30};
        tmp_assign_source_210 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_210 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    assert( tmp_class_creation_30__bases == NULL );
    tmp_class_creation_30__bases = tmp_assign_source_210;

    tmp_assign_source_211 = PyDict_New();
    assert( tmp_class_creation_30__class_decl_dict == NULL );
    tmp_class_creation_30__class_decl_dict = tmp_assign_source_211;

    tmp_key_name_88 = const_str_plain_metaclass;
    tmp_dict_name_88 = tmp_class_creation_30__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_88 );
    tmp_res = PyDict_Contains( tmp_dict_name_88, tmp_key_name_88 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    tmp_cond_value_88 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_88 = CHECK_IF_TRUE( tmp_cond_value_88 );
    if ( tmp_cond_truth_88 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    if ( tmp_cond_truth_88 == 1 )
    {
        goto condexpr_true_88;
    }
    else
    {
        goto condexpr_false_88;
    }
    condexpr_true_88:;
    tmp_dict_name_89 = tmp_class_creation_30__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_89 );
    tmp_key_name_89 = const_str_plain_metaclass;
    tmp_metaclass_name_30 = DICT_GET_ITEM( tmp_dict_name_89, tmp_key_name_89 );
    if ( tmp_metaclass_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    goto condexpr_end_88;
    condexpr_false_88:;
    tmp_cond_value_89 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_cond_value_89 );
    tmp_cond_truth_89 = CHECK_IF_TRUE( tmp_cond_value_89 );
    if ( tmp_cond_truth_89 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    if ( tmp_cond_truth_89 == 1 )
    {
        goto condexpr_true_89;
    }
    else
    {
        goto condexpr_false_89;
    }
    condexpr_true_89:;
    tmp_subscribed_name_30 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_subscribed_name_30 );
    tmp_subscript_name_30 = const_int_0;
    tmp_type_arg_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_30, tmp_subscript_name_30 );
    if ( tmp_type_arg_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    tmp_metaclass_name_30 = BUILTIN_TYPE1( tmp_type_arg_30 );
    Py_DECREF( tmp_type_arg_30 );
    if ( tmp_metaclass_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    goto condexpr_end_89;
    condexpr_false_89:;
    tmp_metaclass_name_30 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_30 );
    condexpr_end_89:;
    condexpr_end_88:;
    tmp_bases_name_30 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_bases_name_30 );
    tmp_assign_source_212 = SELECT_METACLASS( tmp_metaclass_name_30, tmp_bases_name_30 );
    Py_DECREF( tmp_metaclass_name_30 );
    if ( tmp_assign_source_212 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    assert( tmp_class_creation_30__metaclass == NULL );
    tmp_class_creation_30__metaclass = tmp_assign_source_212;

    tmp_key_name_90 = const_str_plain_metaclass;
    tmp_dict_name_90 = tmp_class_creation_30__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_90 );
    tmp_res = PyDict_Contains( tmp_dict_name_90, tmp_key_name_90 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    tmp_cond_value_90 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_90 = CHECK_IF_TRUE( tmp_cond_value_90 );
    if ( tmp_cond_truth_90 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    if ( tmp_cond_truth_90 == 1 )
    {
        goto branch_yes_59;
    }
    else
    {
        goto branch_no_59;
    }
    branch_yes_59:;
    tmp_dictdel_dict = tmp_class_creation_30__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    branch_no_59:;
    tmp_hasattr_source_30 = tmp_class_creation_30__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_30 );
    tmp_hasattr_attr_30 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_30, tmp_hasattr_attr_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_90;
    }
    else
    {
        goto condexpr_false_90;
    }
    condexpr_true_90:;
    tmp_source_name_30 = tmp_class_creation_30__metaclass;

    CHECK_OBJECT( tmp_source_name_30 );
    tmp_called_name_59 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain___prepare__ );
    if ( tmp_called_name_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    tmp_tuple_element_88 = const_str_plain_IncompleteRead;
    tmp_args_name_59 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_88 );
    PyTuple_SET_ITEM( tmp_args_name_59, 0, tmp_tuple_element_88 );
    tmp_tuple_element_88 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_tuple_element_88 );
    Py_INCREF( tmp_tuple_element_88 );
    PyTuple_SET_ITEM( tmp_args_name_59, 1, tmp_tuple_element_88 );
    tmp_kw_name_59 = tmp_class_creation_30__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_59 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 207;
    tmp_assign_source_213 = CALL_FUNCTION( tmp_called_name_59, tmp_args_name_59, tmp_kw_name_59 );
    Py_DECREF( tmp_called_name_59 );
    Py_DECREF( tmp_args_name_59 );
    if ( tmp_assign_source_213 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_88;
    }
    goto condexpr_end_90;
    condexpr_false_90:;
    tmp_assign_source_213 = PyDict_New();
    condexpr_end_90:;
    assert( tmp_class_creation_30__prepared == NULL );
    tmp_class_creation_30__prepared = tmp_assign_source_213;

    tmp_set_locals = tmp_class_creation_30__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_207 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_207, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_90;
    }
    tmp_dictset_value = const_str_digest_e7d525c37e8e3bf1b29419172dc726f6;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_207, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_90;
    }
    tmp_dictset_value = const_str_plain_IncompleteRead;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_207, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_90;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_60b3d30a126b78e0f83e530a3e43004b_8, codeobj_60b3d30a126b78e0f83e530a3e43004b, module_urllib3$exceptions, sizeof(void *) );
    frame_60b3d30a126b78e0f83e530a3e43004b_8 = cache_frame_60b3d30a126b78e0f83e530a3e43004b_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60b3d30a126b78e0f83e530a3e43004b_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60b3d30a126b78e0f83e530a3e43004b_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_8___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_207, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_9___repr__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_207, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b3d30a126b78e0f83e530a3e43004b_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60b3d30a126b78e0f83e530a3e43004b_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60b3d30a126b78e0f83e530a3e43004b_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60b3d30a126b78e0f83e530a3e43004b_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60b3d30a126b78e0f83e530a3e43004b_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60b3d30a126b78e0f83e530a3e43004b_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_60b3d30a126b78e0f83e530a3e43004b_8 == cache_frame_60b3d30a126b78e0f83e530a3e43004b_8 )
    {
        Py_DECREF( frame_60b3d30a126b78e0f83e530a3e43004b_8 );
    }
    cache_frame_60b3d30a126b78e0f83e530a3e43004b_8 = NULL;

    assertFrameObject( frame_60b3d30a126b78e0f83e530a3e43004b_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_90;
    skip_nested_handling_7:;
    tmp_compare_left_30 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_compare_left_30 );
    tmp_compare_right_30 = tmp_class_creation_30__bases_orig;

    CHECK_OBJECT( tmp_compare_right_30 );
    tmp_cmp_NotEq_30 = RICH_COMPARE_BOOL_NE( tmp_compare_left_30, tmp_compare_right_30 );
    if ( tmp_cmp_NotEq_30 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_90;
    }
    if ( tmp_cmp_NotEq_30 == 1 )
    {
        goto branch_yes_60;
    }
    else
    {
        goto branch_no_60;
    }
    branch_yes_60:;
    tmp_dictset_value = tmp_class_creation_30__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_207, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_90;
    }
    branch_no_60:;
    tmp_called_name_60 = tmp_class_creation_30__metaclass;

    CHECK_OBJECT( tmp_called_name_60 );
    tmp_tuple_element_89 = const_str_plain_IncompleteRead;
    tmp_args_name_60 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_89 );
    PyTuple_SET_ITEM( tmp_args_name_60, 0, tmp_tuple_element_89 );
    tmp_tuple_element_89 = tmp_class_creation_30__bases;

    CHECK_OBJECT( tmp_tuple_element_89 );
    Py_INCREF( tmp_tuple_element_89 );
    PyTuple_SET_ITEM( tmp_args_name_60, 1, tmp_tuple_element_89 );
    tmp_tuple_element_89 = locals_urllib3$exceptions_207;
    Py_INCREF( tmp_tuple_element_89 );
    PyTuple_SET_ITEM( tmp_args_name_60, 2, tmp_tuple_element_89 );
    tmp_kw_name_60 = tmp_class_creation_30__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_60 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 207;
    tmp_assign_source_215 = CALL_FUNCTION( tmp_called_name_60, tmp_args_name_60, tmp_kw_name_60 );
    Py_DECREF( tmp_args_name_60 );
    if ( tmp_assign_source_215 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;

        goto try_except_handler_90;
    }
    assert( outline_29_var___class__ == NULL );
    outline_29_var___class__ = tmp_assign_source_215;

    tmp_outline_return_value_30 = outline_29_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_30 );
    Py_INCREF( tmp_outline_return_value_30 );
    goto try_return_handler_90;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_90:;
    Py_DECREF( locals_urllib3$exceptions_207 );
    locals_urllib3$exceptions_207 = NULL;
    goto try_return_handler_89;
    // Exception handler code:
    try_except_handler_90:;
    exception_keeper_type_88 = exception_type;
    exception_keeper_value_88 = exception_value;
    exception_keeper_tb_88 = exception_tb;
    exception_keeper_lineno_88 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_207 );
    locals_urllib3$exceptions_207 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_88;
    exception_value = exception_keeper_value_88;
    exception_tb = exception_keeper_tb_88;
    exception_lineno = exception_keeper_lineno_88;

    goto try_except_handler_89;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_89:;
    CHECK_OBJECT( (PyObject *)outline_29_var___class__ );
    Py_DECREF( outline_29_var___class__ );
    outline_29_var___class__ = NULL;

    goto outline_result_30;
    // Exception handler code:
    try_except_handler_89:;
    exception_keeper_type_89 = exception_type;
    exception_keeper_value_89 = exception_value;
    exception_keeper_tb_89 = exception_tb;
    exception_keeper_lineno_89 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_89;
    exception_value = exception_keeper_value_89;
    exception_tb = exception_keeper_tb_89;
    exception_lineno = exception_keeper_lineno_89;

    goto outline_exception_30;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_30:;
    exception_lineno = 207;
    goto try_except_handler_88;
    outline_result_30:;
    tmp_assign_source_214 = tmp_outline_return_value_30;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_IncompleteRead, tmp_assign_source_214 );
    goto try_end_30;
    // Exception handler code:
    try_except_handler_88:;
    exception_keeper_type_90 = exception_type;
    exception_keeper_value_90 = exception_value;
    exception_keeper_tb_90 = exception_tb;
    exception_keeper_lineno_90 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_30__bases );
    tmp_class_creation_30__bases = NULL;

    Py_XDECREF( tmp_class_creation_30__class_decl_dict );
    tmp_class_creation_30__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_30__metaclass );
    tmp_class_creation_30__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_30__prepared );
    tmp_class_creation_30__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_90;
    exception_value = exception_keeper_value_90;
    exception_tb = exception_keeper_tb_90;
    exception_lineno = exception_keeper_lineno_90;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__bases );
    Py_DECREF( tmp_class_creation_30__bases );
    tmp_class_creation_30__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__class_decl_dict );
    Py_DECREF( tmp_class_creation_30__class_decl_dict );
    tmp_class_creation_30__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__metaclass );
    Py_DECREF( tmp_class_creation_30__metaclass );
    tmp_class_creation_30__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_30__prepared );
    Py_DECREF( tmp_class_creation_30__prepared );
    tmp_class_creation_30__prepared = NULL;

    // Tried code:
    tmp_tuple_element_90 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_90 == NULL ))
    {
        tmp_tuple_element_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_90 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;

        goto try_except_handler_91;
    }

    tmp_assign_source_216 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_90 );
    PyTuple_SET_ITEM( tmp_assign_source_216, 0, tmp_tuple_element_90 );
    assert( tmp_class_creation_31__bases_orig == NULL );
    tmp_class_creation_31__bases_orig = tmp_assign_source_216;

    tmp_dircall_arg1_31 = tmp_class_creation_31__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_31 );
    Py_INCREF( tmp_dircall_arg1_31 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_31};
        tmp_assign_source_217 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_217 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    assert( tmp_class_creation_31__bases == NULL );
    tmp_class_creation_31__bases = tmp_assign_source_217;

    tmp_assign_source_218 = PyDict_New();
    assert( tmp_class_creation_31__class_decl_dict == NULL );
    tmp_class_creation_31__class_decl_dict = tmp_assign_source_218;

    tmp_key_name_91 = const_str_plain_metaclass;
    tmp_dict_name_91 = tmp_class_creation_31__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_91 );
    tmp_res = PyDict_Contains( tmp_dict_name_91, tmp_key_name_91 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    tmp_cond_value_91 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_91 = CHECK_IF_TRUE( tmp_cond_value_91 );
    if ( tmp_cond_truth_91 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    if ( tmp_cond_truth_91 == 1 )
    {
        goto condexpr_true_91;
    }
    else
    {
        goto condexpr_false_91;
    }
    condexpr_true_91:;
    tmp_dict_name_92 = tmp_class_creation_31__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_92 );
    tmp_key_name_92 = const_str_plain_metaclass;
    tmp_metaclass_name_31 = DICT_GET_ITEM( tmp_dict_name_92, tmp_key_name_92 );
    if ( tmp_metaclass_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    goto condexpr_end_91;
    condexpr_false_91:;
    tmp_cond_value_92 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_cond_value_92 );
    tmp_cond_truth_92 = CHECK_IF_TRUE( tmp_cond_value_92 );
    if ( tmp_cond_truth_92 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    if ( tmp_cond_truth_92 == 1 )
    {
        goto condexpr_true_92;
    }
    else
    {
        goto condexpr_false_92;
    }
    condexpr_true_92:;
    tmp_subscribed_name_31 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_subscribed_name_31 );
    tmp_subscript_name_31 = const_int_0;
    tmp_type_arg_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_31, tmp_subscript_name_31 );
    if ( tmp_type_arg_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    tmp_metaclass_name_31 = BUILTIN_TYPE1( tmp_type_arg_31 );
    Py_DECREF( tmp_type_arg_31 );
    if ( tmp_metaclass_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    goto condexpr_end_92;
    condexpr_false_92:;
    tmp_metaclass_name_31 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_31 );
    condexpr_end_92:;
    condexpr_end_91:;
    tmp_bases_name_31 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_bases_name_31 );
    tmp_assign_source_219 = SELECT_METACLASS( tmp_metaclass_name_31, tmp_bases_name_31 );
    Py_DECREF( tmp_metaclass_name_31 );
    if ( tmp_assign_source_219 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    assert( tmp_class_creation_31__metaclass == NULL );
    tmp_class_creation_31__metaclass = tmp_assign_source_219;

    tmp_key_name_93 = const_str_plain_metaclass;
    tmp_dict_name_93 = tmp_class_creation_31__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_93 );
    tmp_res = PyDict_Contains( tmp_dict_name_93, tmp_key_name_93 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    tmp_cond_value_93 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_93 = CHECK_IF_TRUE( tmp_cond_value_93 );
    if ( tmp_cond_truth_93 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    if ( tmp_cond_truth_93 == 1 )
    {
        goto branch_yes_61;
    }
    else
    {
        goto branch_no_61;
    }
    branch_yes_61:;
    tmp_dictdel_dict = tmp_class_creation_31__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    branch_no_61:;
    tmp_hasattr_source_31 = tmp_class_creation_31__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_31 );
    tmp_hasattr_attr_31 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_31, tmp_hasattr_attr_31 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_93;
    }
    else
    {
        goto condexpr_false_93;
    }
    condexpr_true_93:;
    tmp_source_name_31 = tmp_class_creation_31__metaclass;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_called_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain___prepare__ );
    if ( tmp_called_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    tmp_tuple_element_91 = const_str_plain_InvalidHeader;
    tmp_args_name_61 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_91 );
    PyTuple_SET_ITEM( tmp_args_name_61, 0, tmp_tuple_element_91 );
    tmp_tuple_element_91 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_tuple_element_91 );
    Py_INCREF( tmp_tuple_element_91 );
    PyTuple_SET_ITEM( tmp_args_name_61, 1, tmp_tuple_element_91 );
    tmp_kw_name_61 = tmp_class_creation_31__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_61 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 223;
    tmp_assign_source_220 = CALL_FUNCTION( tmp_called_name_61, tmp_args_name_61, tmp_kw_name_61 );
    Py_DECREF( tmp_called_name_61 );
    Py_DECREF( tmp_args_name_61 );
    if ( tmp_assign_source_220 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_91;
    }
    goto condexpr_end_93;
    condexpr_false_93:;
    tmp_assign_source_220 = PyDict_New();
    condexpr_end_93:;
    assert( tmp_class_creation_31__prepared == NULL );
    tmp_class_creation_31__prepared = tmp_assign_source_220;

    tmp_set_locals = tmp_class_creation_31__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_223 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_223, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_93;
    }
    tmp_dictset_value = const_str_digest_28db377b4c4aaf2881b08e822881aecb;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_223, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_93;
    }
    tmp_dictset_value = const_str_plain_InvalidHeader;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_223, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_93;
    }
    tmp_compare_left_31 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_compare_left_31 );
    tmp_compare_right_31 = tmp_class_creation_31__bases_orig;

    CHECK_OBJECT( tmp_compare_right_31 );
    tmp_cmp_NotEq_31 = RICH_COMPARE_BOOL_NE( tmp_compare_left_31, tmp_compare_right_31 );
    if ( tmp_cmp_NotEq_31 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_93;
    }
    if ( tmp_cmp_NotEq_31 == 1 )
    {
        goto branch_yes_62;
    }
    else
    {
        goto branch_no_62;
    }
    branch_yes_62:;
    tmp_dictset_value = tmp_class_creation_31__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_223, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_93;
    }
    branch_no_62:;
    tmp_called_name_62 = tmp_class_creation_31__metaclass;

    CHECK_OBJECT( tmp_called_name_62 );
    tmp_tuple_element_92 = const_str_plain_InvalidHeader;
    tmp_args_name_62 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_92 );
    PyTuple_SET_ITEM( tmp_args_name_62, 0, tmp_tuple_element_92 );
    tmp_tuple_element_92 = tmp_class_creation_31__bases;

    CHECK_OBJECT( tmp_tuple_element_92 );
    Py_INCREF( tmp_tuple_element_92 );
    PyTuple_SET_ITEM( tmp_args_name_62, 1, tmp_tuple_element_92 );
    tmp_tuple_element_92 = locals_urllib3$exceptions_223;
    Py_INCREF( tmp_tuple_element_92 );
    PyTuple_SET_ITEM( tmp_args_name_62, 2, tmp_tuple_element_92 );
    tmp_kw_name_62 = tmp_class_creation_31__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_62 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 223;
    tmp_assign_source_222 = CALL_FUNCTION( tmp_called_name_62, tmp_args_name_62, tmp_kw_name_62 );
    Py_DECREF( tmp_args_name_62 );
    if ( tmp_assign_source_222 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;

        goto try_except_handler_93;
    }
    assert( outline_30_var___class__ == NULL );
    outline_30_var___class__ = tmp_assign_source_222;

    tmp_outline_return_value_31 = outline_30_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_31 );
    Py_INCREF( tmp_outline_return_value_31 );
    goto try_return_handler_93;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_93:;
    Py_DECREF( locals_urllib3$exceptions_223 );
    locals_urllib3$exceptions_223 = NULL;
    goto try_return_handler_92;
    // Exception handler code:
    try_except_handler_93:;
    exception_keeper_type_91 = exception_type;
    exception_keeper_value_91 = exception_value;
    exception_keeper_tb_91 = exception_tb;
    exception_keeper_lineno_91 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_223 );
    locals_urllib3$exceptions_223 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_91;
    exception_value = exception_keeper_value_91;
    exception_tb = exception_keeper_tb_91;
    exception_lineno = exception_keeper_lineno_91;

    goto try_except_handler_92;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_92:;
    CHECK_OBJECT( (PyObject *)outline_30_var___class__ );
    Py_DECREF( outline_30_var___class__ );
    outline_30_var___class__ = NULL;

    goto outline_result_31;
    // Exception handler code:
    try_except_handler_92:;
    exception_keeper_type_92 = exception_type;
    exception_keeper_value_92 = exception_value;
    exception_keeper_tb_92 = exception_tb;
    exception_keeper_lineno_92 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_92;
    exception_value = exception_keeper_value_92;
    exception_tb = exception_keeper_tb_92;
    exception_lineno = exception_keeper_lineno_92;

    goto outline_exception_31;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_31:;
    exception_lineno = 223;
    goto try_except_handler_91;
    outline_result_31:;
    tmp_assign_source_221 = tmp_outline_return_value_31;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_221 );
    goto try_end_31;
    // Exception handler code:
    try_except_handler_91:;
    exception_keeper_type_93 = exception_type;
    exception_keeper_value_93 = exception_value;
    exception_keeper_tb_93 = exception_tb;
    exception_keeper_lineno_93 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_31__bases );
    tmp_class_creation_31__bases = NULL;

    Py_XDECREF( tmp_class_creation_31__class_decl_dict );
    tmp_class_creation_31__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_31__metaclass );
    tmp_class_creation_31__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_31__prepared );
    tmp_class_creation_31__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_93;
    exception_value = exception_keeper_value_93;
    exception_tb = exception_keeper_tb_93;
    exception_lineno = exception_keeper_lineno_93;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__bases );
    Py_DECREF( tmp_class_creation_31__bases );
    tmp_class_creation_31__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__class_decl_dict );
    Py_DECREF( tmp_class_creation_31__class_decl_dict );
    tmp_class_creation_31__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__metaclass );
    Py_DECREF( tmp_class_creation_31__metaclass );
    tmp_class_creation_31__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_31__prepared );
    Py_DECREF( tmp_class_creation_31__prepared );
    tmp_class_creation_31__prepared = NULL;

    // Tried code:
    tmp_dircall_arg1_32 = const_tuple_type_AssertionError_type_ValueError_tuple;
    Py_INCREF( tmp_dircall_arg1_32 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_32};
        tmp_assign_source_223 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_223 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    assert( tmp_class_creation_32__bases == NULL );
    tmp_class_creation_32__bases = tmp_assign_source_223;

    tmp_assign_source_224 = PyDict_New();
    assert( tmp_class_creation_32__class_decl_dict == NULL );
    tmp_class_creation_32__class_decl_dict = tmp_assign_source_224;

    tmp_key_name_94 = const_str_plain_metaclass;
    tmp_dict_name_94 = tmp_class_creation_32__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_94 );
    tmp_res = PyDict_Contains( tmp_dict_name_94, tmp_key_name_94 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    tmp_cond_value_94 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_94 = CHECK_IF_TRUE( tmp_cond_value_94 );
    if ( tmp_cond_truth_94 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    if ( tmp_cond_truth_94 == 1 )
    {
        goto condexpr_true_94;
    }
    else
    {
        goto condexpr_false_94;
    }
    condexpr_true_94:;
    tmp_dict_name_95 = tmp_class_creation_32__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_95 );
    tmp_key_name_95 = const_str_plain_metaclass;
    tmp_metaclass_name_32 = DICT_GET_ITEM( tmp_dict_name_95, tmp_key_name_95 );
    if ( tmp_metaclass_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    goto condexpr_end_94;
    condexpr_false_94:;
    tmp_cond_value_95 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_cond_value_95 );
    tmp_cond_truth_95 = CHECK_IF_TRUE( tmp_cond_value_95 );
    if ( tmp_cond_truth_95 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    if ( tmp_cond_truth_95 == 1 )
    {
        goto condexpr_true_95;
    }
    else
    {
        goto condexpr_false_95;
    }
    condexpr_true_95:;
    tmp_subscribed_name_32 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_subscribed_name_32 );
    tmp_subscript_name_32 = const_int_0;
    tmp_type_arg_32 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_32, tmp_subscript_name_32 );
    if ( tmp_type_arg_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    tmp_metaclass_name_32 = BUILTIN_TYPE1( tmp_type_arg_32 );
    Py_DECREF( tmp_type_arg_32 );
    if ( tmp_metaclass_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    goto condexpr_end_95;
    condexpr_false_95:;
    tmp_metaclass_name_32 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_32 );
    condexpr_end_95:;
    condexpr_end_94:;
    tmp_bases_name_32 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_bases_name_32 );
    tmp_assign_source_225 = SELECT_METACLASS( tmp_metaclass_name_32, tmp_bases_name_32 );
    Py_DECREF( tmp_metaclass_name_32 );
    if ( tmp_assign_source_225 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    assert( tmp_class_creation_32__metaclass == NULL );
    tmp_class_creation_32__metaclass = tmp_assign_source_225;

    tmp_key_name_96 = const_str_plain_metaclass;
    tmp_dict_name_96 = tmp_class_creation_32__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_96 );
    tmp_res = PyDict_Contains( tmp_dict_name_96, tmp_key_name_96 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    tmp_cond_value_96 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_96 = CHECK_IF_TRUE( tmp_cond_value_96 );
    if ( tmp_cond_truth_96 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    if ( tmp_cond_truth_96 == 1 )
    {
        goto branch_yes_63;
    }
    else
    {
        goto branch_no_63;
    }
    branch_yes_63:;
    tmp_dictdel_dict = tmp_class_creation_32__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    branch_no_63:;
    tmp_hasattr_source_32 = tmp_class_creation_32__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_32 );
    tmp_hasattr_attr_32 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_32, tmp_hasattr_attr_32 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_96;
    }
    else
    {
        goto condexpr_false_96;
    }
    condexpr_true_96:;
    tmp_source_name_32 = tmp_class_creation_32__metaclass;

    CHECK_OBJECT( tmp_source_name_32 );
    tmp_called_name_63 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___prepare__ );
    if ( tmp_called_name_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    tmp_tuple_element_93 = const_str_plain_ProxySchemeUnknown;
    tmp_args_name_63 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_93 );
    PyTuple_SET_ITEM( tmp_args_name_63, 0, tmp_tuple_element_93 );
    tmp_tuple_element_93 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_tuple_element_93 );
    Py_INCREF( tmp_tuple_element_93 );
    PyTuple_SET_ITEM( tmp_args_name_63, 1, tmp_tuple_element_93 );
    tmp_kw_name_63 = tmp_class_creation_32__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_63 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 228;
    tmp_assign_source_226 = CALL_FUNCTION( tmp_called_name_63, tmp_args_name_63, tmp_kw_name_63 );
    Py_DECREF( tmp_called_name_63 );
    Py_DECREF( tmp_args_name_63 );
    if ( tmp_assign_source_226 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_94;
    }
    goto condexpr_end_96;
    condexpr_false_96:;
    tmp_assign_source_226 = PyDict_New();
    condexpr_end_96:;
    assert( tmp_class_creation_32__prepared == NULL );
    tmp_class_creation_32__prepared = tmp_assign_source_226;

    tmp_set_locals = tmp_class_creation_32__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_228 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_228, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_96;
    }
    tmp_dictset_value = const_str_digest_1c6dffdd7a7bcf43af16d1526d19ef10;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_228, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_96;
    }
    tmp_dictset_value = const_str_plain_ProxySchemeUnknown;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_228, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_96;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9, codeobj_3a6376d3f6a8c33fd4efb1272fa89cbb, module_urllib3$exceptions, sizeof(void *) );
    frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 = cache_frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_10___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_228, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 == cache_frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 )
    {
        Py_DECREF( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 );
    }
    cache_frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 = NULL;

    assertFrameObject( frame_3a6376d3f6a8c33fd4efb1272fa89cbb_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_96;
    skip_nested_handling_8:;
    tmp_compare_left_32 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_compare_left_32 );
    tmp_compare_right_32 = const_tuple_type_AssertionError_type_ValueError_tuple;
    tmp_cmp_NotEq_32 = RICH_COMPARE_BOOL_NE( tmp_compare_left_32, tmp_compare_right_32 );
    if ( tmp_cmp_NotEq_32 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_96;
    }
    if ( tmp_cmp_NotEq_32 == 1 )
    {
        goto branch_yes_64;
    }
    else
    {
        goto branch_no_64;
    }
    branch_yes_64:;
    tmp_dictset_value = const_tuple_type_AssertionError_type_ValueError_tuple;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_228, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_96;
    }
    branch_no_64:;
    tmp_called_name_64 = tmp_class_creation_32__metaclass;

    CHECK_OBJECT( tmp_called_name_64 );
    tmp_tuple_element_94 = const_str_plain_ProxySchemeUnknown;
    tmp_args_name_64 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_94 );
    PyTuple_SET_ITEM( tmp_args_name_64, 0, tmp_tuple_element_94 );
    tmp_tuple_element_94 = tmp_class_creation_32__bases;

    CHECK_OBJECT( tmp_tuple_element_94 );
    Py_INCREF( tmp_tuple_element_94 );
    PyTuple_SET_ITEM( tmp_args_name_64, 1, tmp_tuple_element_94 );
    tmp_tuple_element_94 = locals_urllib3$exceptions_228;
    Py_INCREF( tmp_tuple_element_94 );
    PyTuple_SET_ITEM( tmp_args_name_64, 2, tmp_tuple_element_94 );
    tmp_kw_name_64 = tmp_class_creation_32__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_64 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 228;
    tmp_assign_source_228 = CALL_FUNCTION( tmp_called_name_64, tmp_args_name_64, tmp_kw_name_64 );
    Py_DECREF( tmp_args_name_64 );
    if ( tmp_assign_source_228 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto try_except_handler_96;
    }
    assert( outline_31_var___class__ == NULL );
    outline_31_var___class__ = tmp_assign_source_228;

    tmp_outline_return_value_32 = outline_31_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_32 );
    Py_INCREF( tmp_outline_return_value_32 );
    goto try_return_handler_96;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_96:;
    Py_DECREF( locals_urllib3$exceptions_228 );
    locals_urllib3$exceptions_228 = NULL;
    goto try_return_handler_95;
    // Exception handler code:
    try_except_handler_96:;
    exception_keeper_type_94 = exception_type;
    exception_keeper_value_94 = exception_value;
    exception_keeper_tb_94 = exception_tb;
    exception_keeper_lineno_94 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_228 );
    locals_urllib3$exceptions_228 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_94;
    exception_value = exception_keeper_value_94;
    exception_tb = exception_keeper_tb_94;
    exception_lineno = exception_keeper_lineno_94;

    goto try_except_handler_95;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_95:;
    CHECK_OBJECT( (PyObject *)outline_31_var___class__ );
    Py_DECREF( outline_31_var___class__ );
    outline_31_var___class__ = NULL;

    goto outline_result_32;
    // Exception handler code:
    try_except_handler_95:;
    exception_keeper_type_95 = exception_type;
    exception_keeper_value_95 = exception_value;
    exception_keeper_tb_95 = exception_tb;
    exception_keeper_lineno_95 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_95;
    exception_value = exception_keeper_value_95;
    exception_tb = exception_keeper_tb_95;
    exception_lineno = exception_keeper_lineno_95;

    goto outline_exception_32;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_32:;
    exception_lineno = 228;
    goto try_except_handler_94;
    outline_result_32:;
    tmp_assign_source_227 = tmp_outline_return_value_32;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_ProxySchemeUnknown, tmp_assign_source_227 );
    goto try_end_32;
    // Exception handler code:
    try_except_handler_94:;
    exception_keeper_type_96 = exception_type;
    exception_keeper_value_96 = exception_value;
    exception_keeper_tb_96 = exception_tb;
    exception_keeper_lineno_96 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_32__bases );
    tmp_class_creation_32__bases = NULL;

    Py_XDECREF( tmp_class_creation_32__class_decl_dict );
    tmp_class_creation_32__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_32__metaclass );
    tmp_class_creation_32__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_32__prepared );
    tmp_class_creation_32__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_96;
    exception_value = exception_keeper_value_96;
    exception_tb = exception_keeper_tb_96;
    exception_lineno = exception_keeper_lineno_96;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__bases );
    Py_DECREF( tmp_class_creation_32__bases );
    tmp_class_creation_32__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__class_decl_dict );
    Py_DECREF( tmp_class_creation_32__class_decl_dict );
    tmp_class_creation_32__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__metaclass );
    Py_DECREF( tmp_class_creation_32__metaclass );
    tmp_class_creation_32__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_32__prepared );
    Py_DECREF( tmp_class_creation_32__prepared );
    tmp_class_creation_32__prepared = NULL;

    // Tried code:
    tmp_tuple_element_95 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_95 == NULL ))
    {
        tmp_tuple_element_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_95 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;

        goto try_except_handler_97;
    }

    tmp_assign_source_229 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_95 );
    PyTuple_SET_ITEM( tmp_assign_source_229, 0, tmp_tuple_element_95 );
    assert( tmp_class_creation_33__bases_orig == NULL );
    tmp_class_creation_33__bases_orig = tmp_assign_source_229;

    tmp_dircall_arg1_33 = tmp_class_creation_33__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_33 );
    Py_INCREF( tmp_dircall_arg1_33 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_33};
        tmp_assign_source_230 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_230 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    assert( tmp_class_creation_33__bases == NULL );
    tmp_class_creation_33__bases = tmp_assign_source_230;

    tmp_assign_source_231 = PyDict_New();
    assert( tmp_class_creation_33__class_decl_dict == NULL );
    tmp_class_creation_33__class_decl_dict = tmp_assign_source_231;

    tmp_key_name_97 = const_str_plain_metaclass;
    tmp_dict_name_97 = tmp_class_creation_33__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_97 );
    tmp_res = PyDict_Contains( tmp_dict_name_97, tmp_key_name_97 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    tmp_cond_value_97 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_97 = CHECK_IF_TRUE( tmp_cond_value_97 );
    if ( tmp_cond_truth_97 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    if ( tmp_cond_truth_97 == 1 )
    {
        goto condexpr_true_97;
    }
    else
    {
        goto condexpr_false_97;
    }
    condexpr_true_97:;
    tmp_dict_name_98 = tmp_class_creation_33__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_98 );
    tmp_key_name_98 = const_str_plain_metaclass;
    tmp_metaclass_name_33 = DICT_GET_ITEM( tmp_dict_name_98, tmp_key_name_98 );
    if ( tmp_metaclass_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    goto condexpr_end_97;
    condexpr_false_97:;
    tmp_cond_value_98 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_cond_value_98 );
    tmp_cond_truth_98 = CHECK_IF_TRUE( tmp_cond_value_98 );
    if ( tmp_cond_truth_98 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    if ( tmp_cond_truth_98 == 1 )
    {
        goto condexpr_true_98;
    }
    else
    {
        goto condexpr_false_98;
    }
    condexpr_true_98:;
    tmp_subscribed_name_33 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_subscribed_name_33 );
    tmp_subscript_name_33 = const_int_0;
    tmp_type_arg_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_33, tmp_subscript_name_33 );
    if ( tmp_type_arg_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    tmp_metaclass_name_33 = BUILTIN_TYPE1( tmp_type_arg_33 );
    Py_DECREF( tmp_type_arg_33 );
    if ( tmp_metaclass_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    goto condexpr_end_98;
    condexpr_false_98:;
    tmp_metaclass_name_33 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_33 );
    condexpr_end_98:;
    condexpr_end_97:;
    tmp_bases_name_33 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_bases_name_33 );
    tmp_assign_source_232 = SELECT_METACLASS( tmp_metaclass_name_33, tmp_bases_name_33 );
    Py_DECREF( tmp_metaclass_name_33 );
    if ( tmp_assign_source_232 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    assert( tmp_class_creation_33__metaclass == NULL );
    tmp_class_creation_33__metaclass = tmp_assign_source_232;

    tmp_key_name_99 = const_str_plain_metaclass;
    tmp_dict_name_99 = tmp_class_creation_33__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_99 );
    tmp_res = PyDict_Contains( tmp_dict_name_99, tmp_key_name_99 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    tmp_cond_value_99 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_99 = CHECK_IF_TRUE( tmp_cond_value_99 );
    if ( tmp_cond_truth_99 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    if ( tmp_cond_truth_99 == 1 )
    {
        goto branch_yes_65;
    }
    else
    {
        goto branch_no_65;
    }
    branch_yes_65:;
    tmp_dictdel_dict = tmp_class_creation_33__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    branch_no_65:;
    tmp_hasattr_source_33 = tmp_class_creation_33__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_33 );
    tmp_hasattr_attr_33 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_33, tmp_hasattr_attr_33 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_99;
    }
    else
    {
        goto condexpr_false_99;
    }
    condexpr_true_99:;
    tmp_source_name_33 = tmp_class_creation_33__metaclass;

    CHECK_OBJECT( tmp_source_name_33 );
    tmp_called_name_65 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain___prepare__ );
    if ( tmp_called_name_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    tmp_tuple_element_96 = const_str_plain_HeaderParsingError;
    tmp_args_name_65 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_96 );
    PyTuple_SET_ITEM( tmp_args_name_65, 0, tmp_tuple_element_96 );
    tmp_tuple_element_96 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_tuple_element_96 );
    Py_INCREF( tmp_tuple_element_96 );
    PyTuple_SET_ITEM( tmp_args_name_65, 1, tmp_tuple_element_96 );
    tmp_kw_name_65 = tmp_class_creation_33__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_65 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 237;
    tmp_assign_source_233 = CALL_FUNCTION( tmp_called_name_65, tmp_args_name_65, tmp_kw_name_65 );
    Py_DECREF( tmp_called_name_65 );
    Py_DECREF( tmp_args_name_65 );
    if ( tmp_assign_source_233 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_97;
    }
    goto condexpr_end_99;
    condexpr_false_99:;
    tmp_assign_source_233 = PyDict_New();
    condexpr_end_99:;
    assert( tmp_class_creation_33__prepared == NULL );
    tmp_class_creation_33__prepared = tmp_assign_source_233;

    tmp_set_locals = tmp_class_creation_33__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_237 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_237, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_99;
    }
    tmp_dictset_value = const_str_digest_6b2631bb00bf77812f4e433630f72b85;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_237, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_99;
    }
    tmp_dictset_value = const_str_plain_HeaderParsingError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_237, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_99;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_712a9dabde300f28a3c2156409cabcca_10, codeobj_712a9dabde300f28a3c2156409cabcca, module_urllib3$exceptions, sizeof(void *) );
    frame_712a9dabde300f28a3c2156409cabcca_10 = cache_frame_712a9dabde300f28a3c2156409cabcca_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_712a9dabde300f28a3c2156409cabcca_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_712a9dabde300f28a3c2156409cabcca_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$exceptions$$$function_11___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_237, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_712a9dabde300f28a3c2156409cabcca_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_712a9dabde300f28a3c2156409cabcca_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_712a9dabde300f28a3c2156409cabcca_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_712a9dabde300f28a3c2156409cabcca_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_712a9dabde300f28a3c2156409cabcca_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_712a9dabde300f28a3c2156409cabcca_10,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_712a9dabde300f28a3c2156409cabcca_10 == cache_frame_712a9dabde300f28a3c2156409cabcca_10 )
    {
        Py_DECREF( frame_712a9dabde300f28a3c2156409cabcca_10 );
    }
    cache_frame_712a9dabde300f28a3c2156409cabcca_10 = NULL;

    assertFrameObject( frame_712a9dabde300f28a3c2156409cabcca_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_99;
    skip_nested_handling_9:;
    tmp_compare_left_33 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_compare_left_33 );
    tmp_compare_right_33 = tmp_class_creation_33__bases_orig;

    CHECK_OBJECT( tmp_compare_right_33 );
    tmp_cmp_NotEq_33 = RICH_COMPARE_BOOL_NE( tmp_compare_left_33, tmp_compare_right_33 );
    if ( tmp_cmp_NotEq_33 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_99;
    }
    if ( tmp_cmp_NotEq_33 == 1 )
    {
        goto branch_yes_66;
    }
    else
    {
        goto branch_no_66;
    }
    branch_yes_66:;
    tmp_dictset_value = tmp_class_creation_33__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_237, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_99;
    }
    branch_no_66:;
    tmp_called_name_66 = tmp_class_creation_33__metaclass;

    CHECK_OBJECT( tmp_called_name_66 );
    tmp_tuple_element_97 = const_str_plain_HeaderParsingError;
    tmp_args_name_66 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_97 );
    PyTuple_SET_ITEM( tmp_args_name_66, 0, tmp_tuple_element_97 );
    tmp_tuple_element_97 = tmp_class_creation_33__bases;

    CHECK_OBJECT( tmp_tuple_element_97 );
    Py_INCREF( tmp_tuple_element_97 );
    PyTuple_SET_ITEM( tmp_args_name_66, 1, tmp_tuple_element_97 );
    tmp_tuple_element_97 = locals_urllib3$exceptions_237;
    Py_INCREF( tmp_tuple_element_97 );
    PyTuple_SET_ITEM( tmp_args_name_66, 2, tmp_tuple_element_97 );
    tmp_kw_name_66 = tmp_class_creation_33__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_66 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 237;
    tmp_assign_source_235 = CALL_FUNCTION( tmp_called_name_66, tmp_args_name_66, tmp_kw_name_66 );
    Py_DECREF( tmp_args_name_66 );
    if ( tmp_assign_source_235 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;

        goto try_except_handler_99;
    }
    assert( outline_32_var___class__ == NULL );
    outline_32_var___class__ = tmp_assign_source_235;

    tmp_outline_return_value_33 = outline_32_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_33 );
    Py_INCREF( tmp_outline_return_value_33 );
    goto try_return_handler_99;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_99:;
    Py_DECREF( locals_urllib3$exceptions_237 );
    locals_urllib3$exceptions_237 = NULL;
    goto try_return_handler_98;
    // Exception handler code:
    try_except_handler_99:;
    exception_keeper_type_97 = exception_type;
    exception_keeper_value_97 = exception_value;
    exception_keeper_tb_97 = exception_tb;
    exception_keeper_lineno_97 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_237 );
    locals_urllib3$exceptions_237 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_97;
    exception_value = exception_keeper_value_97;
    exception_tb = exception_keeper_tb_97;
    exception_lineno = exception_keeper_lineno_97;

    goto try_except_handler_98;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_98:;
    CHECK_OBJECT( (PyObject *)outline_32_var___class__ );
    Py_DECREF( outline_32_var___class__ );
    outline_32_var___class__ = NULL;

    goto outline_result_33;
    // Exception handler code:
    try_except_handler_98:;
    exception_keeper_type_98 = exception_type;
    exception_keeper_value_98 = exception_value;
    exception_keeper_tb_98 = exception_tb;
    exception_keeper_lineno_98 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_98;
    exception_value = exception_keeper_value_98;
    exception_tb = exception_keeper_tb_98;
    exception_lineno = exception_keeper_lineno_98;

    goto outline_exception_33;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_33:;
    exception_lineno = 237;
    goto try_except_handler_97;
    outline_result_33:;
    tmp_assign_source_234 = tmp_outline_return_value_33;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HeaderParsingError, tmp_assign_source_234 );
    goto try_end_33;
    // Exception handler code:
    try_except_handler_97:;
    exception_keeper_type_99 = exception_type;
    exception_keeper_value_99 = exception_value;
    exception_keeper_tb_99 = exception_tb;
    exception_keeper_lineno_99 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_33__bases );
    tmp_class_creation_33__bases = NULL;

    Py_XDECREF( tmp_class_creation_33__class_decl_dict );
    tmp_class_creation_33__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_33__metaclass );
    tmp_class_creation_33__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_33__prepared );
    tmp_class_creation_33__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_99;
    exception_value = exception_keeper_value_99;
    exception_tb = exception_keeper_tb_99;
    exception_lineno = exception_keeper_lineno_99;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__bases );
    Py_DECREF( tmp_class_creation_33__bases );
    tmp_class_creation_33__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__class_decl_dict );
    Py_DECREF( tmp_class_creation_33__class_decl_dict );
    tmp_class_creation_33__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__metaclass );
    Py_DECREF( tmp_class_creation_33__metaclass );
    tmp_class_creation_33__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_33__prepared );
    Py_DECREF( tmp_class_creation_33__prepared );
    tmp_class_creation_33__prepared = NULL;

    // Tried code:
    tmp_tuple_element_98 = GET_STRING_DICT_VALUE( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_HTTPError );

    if (unlikely( tmp_tuple_element_98 == NULL ))
    {
        tmp_tuple_element_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPError );
    }

    if ( tmp_tuple_element_98 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;

        goto try_except_handler_100;
    }

    tmp_assign_source_236 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_98 );
    PyTuple_SET_ITEM( tmp_assign_source_236, 0, tmp_tuple_element_98 );
    assert( tmp_class_creation_34__bases_orig == NULL );
    tmp_class_creation_34__bases_orig = tmp_assign_source_236;

    tmp_dircall_arg1_34 = tmp_class_creation_34__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_34 );
    Py_INCREF( tmp_dircall_arg1_34 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_34};
        tmp_assign_source_237 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_237 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    assert( tmp_class_creation_34__bases == NULL );
    tmp_class_creation_34__bases = tmp_assign_source_237;

    tmp_assign_source_238 = PyDict_New();
    assert( tmp_class_creation_34__class_decl_dict == NULL );
    tmp_class_creation_34__class_decl_dict = tmp_assign_source_238;

    tmp_key_name_100 = const_str_plain_metaclass;
    tmp_dict_name_100 = tmp_class_creation_34__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_100 );
    tmp_res = PyDict_Contains( tmp_dict_name_100, tmp_key_name_100 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    tmp_cond_value_100 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_100 = CHECK_IF_TRUE( tmp_cond_value_100 );
    if ( tmp_cond_truth_100 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    if ( tmp_cond_truth_100 == 1 )
    {
        goto condexpr_true_100;
    }
    else
    {
        goto condexpr_false_100;
    }
    condexpr_true_100:;
    tmp_dict_name_101 = tmp_class_creation_34__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_101 );
    tmp_key_name_101 = const_str_plain_metaclass;
    tmp_metaclass_name_34 = DICT_GET_ITEM( tmp_dict_name_101, tmp_key_name_101 );
    if ( tmp_metaclass_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    goto condexpr_end_100;
    condexpr_false_100:;
    tmp_cond_value_101 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_cond_value_101 );
    tmp_cond_truth_101 = CHECK_IF_TRUE( tmp_cond_value_101 );
    if ( tmp_cond_truth_101 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    if ( tmp_cond_truth_101 == 1 )
    {
        goto condexpr_true_101;
    }
    else
    {
        goto condexpr_false_101;
    }
    condexpr_true_101:;
    tmp_subscribed_name_34 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_subscribed_name_34 );
    tmp_subscript_name_34 = const_int_0;
    tmp_type_arg_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_34, tmp_subscript_name_34 );
    if ( tmp_type_arg_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    tmp_metaclass_name_34 = BUILTIN_TYPE1( tmp_type_arg_34 );
    Py_DECREF( tmp_type_arg_34 );
    if ( tmp_metaclass_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    goto condexpr_end_101;
    condexpr_false_101:;
    tmp_metaclass_name_34 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_34 );
    condexpr_end_101:;
    condexpr_end_100:;
    tmp_bases_name_34 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_bases_name_34 );
    tmp_assign_source_239 = SELECT_METACLASS( tmp_metaclass_name_34, tmp_bases_name_34 );
    Py_DECREF( tmp_metaclass_name_34 );
    if ( tmp_assign_source_239 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    assert( tmp_class_creation_34__metaclass == NULL );
    tmp_class_creation_34__metaclass = tmp_assign_source_239;

    tmp_key_name_102 = const_str_plain_metaclass;
    tmp_dict_name_102 = tmp_class_creation_34__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_102 );
    tmp_res = PyDict_Contains( tmp_dict_name_102, tmp_key_name_102 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    tmp_cond_value_102 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_102 = CHECK_IF_TRUE( tmp_cond_value_102 );
    if ( tmp_cond_truth_102 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    if ( tmp_cond_truth_102 == 1 )
    {
        goto branch_yes_67;
    }
    else
    {
        goto branch_no_67;
    }
    branch_yes_67:;
    tmp_dictdel_dict = tmp_class_creation_34__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    branch_no_67:;
    tmp_hasattr_source_34 = tmp_class_creation_34__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_34 );
    tmp_hasattr_attr_34 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_34, tmp_hasattr_attr_34 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_102;
    }
    else
    {
        goto condexpr_false_102;
    }
    condexpr_true_102:;
    tmp_source_name_34 = tmp_class_creation_34__metaclass;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_called_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain___prepare__ );
    if ( tmp_called_name_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    tmp_tuple_element_99 = const_str_plain_UnrewindableBodyError;
    tmp_args_name_67 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_99 );
    PyTuple_SET_ITEM( tmp_args_name_67, 0, tmp_tuple_element_99 );
    tmp_tuple_element_99 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_tuple_element_99 );
    Py_INCREF( tmp_tuple_element_99 );
    PyTuple_SET_ITEM( tmp_args_name_67, 1, tmp_tuple_element_99 );
    tmp_kw_name_67 = tmp_class_creation_34__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_67 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 244;
    tmp_assign_source_240 = CALL_FUNCTION( tmp_called_name_67, tmp_args_name_67, tmp_kw_name_67 );
    Py_DECREF( tmp_called_name_67 );
    Py_DECREF( tmp_args_name_67 );
    if ( tmp_assign_source_240 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_100;
    }
    goto condexpr_end_102;
    condexpr_false_102:;
    tmp_assign_source_240 = PyDict_New();
    condexpr_end_102:;
    assert( tmp_class_creation_34__prepared == NULL );
    tmp_class_creation_34__prepared = tmp_assign_source_240;

    tmp_set_locals = tmp_class_creation_34__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$exceptions_244 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_244, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_102;
    }
    tmp_dictset_value = const_str_digest_8c0402b3f822d653c84c590d6e596566;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_244, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_102;
    }
    tmp_dictset_value = const_str_plain_UnrewindableBodyError;
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_244, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_102;
    }
    tmp_compare_left_34 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_compare_left_34 );
    tmp_compare_right_34 = tmp_class_creation_34__bases_orig;

    CHECK_OBJECT( tmp_compare_right_34 );
    tmp_cmp_NotEq_34 = RICH_COMPARE_BOOL_NE( tmp_compare_left_34, tmp_compare_right_34 );
    if ( tmp_cmp_NotEq_34 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_102;
    }
    if ( tmp_cmp_NotEq_34 == 1 )
    {
        goto branch_yes_68;
    }
    else
    {
        goto branch_no_68;
    }
    branch_yes_68:;
    tmp_dictset_value = tmp_class_creation_34__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_urllib3$exceptions_244, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_102;
    }
    branch_no_68:;
    tmp_called_name_68 = tmp_class_creation_34__metaclass;

    CHECK_OBJECT( tmp_called_name_68 );
    tmp_tuple_element_100 = const_str_plain_UnrewindableBodyError;
    tmp_args_name_68 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_100 );
    PyTuple_SET_ITEM( tmp_args_name_68, 0, tmp_tuple_element_100 );
    tmp_tuple_element_100 = tmp_class_creation_34__bases;

    CHECK_OBJECT( tmp_tuple_element_100 );
    Py_INCREF( tmp_tuple_element_100 );
    PyTuple_SET_ITEM( tmp_args_name_68, 1, tmp_tuple_element_100 );
    tmp_tuple_element_100 = locals_urllib3$exceptions_244;
    Py_INCREF( tmp_tuple_element_100 );
    PyTuple_SET_ITEM( tmp_args_name_68, 2, tmp_tuple_element_100 );
    tmp_kw_name_68 = tmp_class_creation_34__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_68 );
    frame_cc952fed92243b2437b2ac459873ba13->m_frame.f_lineno = 244;
    tmp_assign_source_242 = CALL_FUNCTION( tmp_called_name_68, tmp_args_name_68, tmp_kw_name_68 );
    Py_DECREF( tmp_args_name_68 );
    if ( tmp_assign_source_242 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;

        goto try_except_handler_102;
    }
    assert( outline_33_var___class__ == NULL );
    outline_33_var___class__ = tmp_assign_source_242;

    tmp_outline_return_value_34 = outline_33_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_34 );
    Py_INCREF( tmp_outline_return_value_34 );
    goto try_return_handler_102;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_102:;
    Py_DECREF( locals_urllib3$exceptions_244 );
    locals_urllib3$exceptions_244 = NULL;
    goto try_return_handler_101;
    // Exception handler code:
    try_except_handler_102:;
    exception_keeper_type_100 = exception_type;
    exception_keeper_value_100 = exception_value;
    exception_keeper_tb_100 = exception_tb;
    exception_keeper_lineno_100 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$exceptions_244 );
    locals_urllib3$exceptions_244 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_100;
    exception_value = exception_keeper_value_100;
    exception_tb = exception_keeper_tb_100;
    exception_lineno = exception_keeper_lineno_100;

    goto try_except_handler_101;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_101:;
    CHECK_OBJECT( (PyObject *)outline_33_var___class__ );
    Py_DECREF( outline_33_var___class__ );
    outline_33_var___class__ = NULL;

    goto outline_result_34;
    // Exception handler code:
    try_except_handler_101:;
    exception_keeper_type_101 = exception_type;
    exception_keeper_value_101 = exception_value;
    exception_keeper_tb_101 = exception_tb;
    exception_keeper_lineno_101 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_101;
    exception_value = exception_keeper_value_101;
    exception_tb = exception_keeper_tb_101;
    exception_lineno = exception_keeper_lineno_101;

    goto outline_exception_34;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$exceptions );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_34:;
    exception_lineno = 244;
    goto try_except_handler_100;
    outline_result_34:;
    tmp_assign_source_241 = tmp_outline_return_value_34;
    UPDATE_STRING_DICT1( moduledict_urllib3$exceptions, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_241 );
    goto try_end_34;
    // Exception handler code:
    try_except_handler_100:;
    exception_keeper_type_102 = exception_type;
    exception_keeper_value_102 = exception_value;
    exception_keeper_tb_102 = exception_tb;
    exception_keeper_lineno_102 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_34__bases );
    tmp_class_creation_34__bases = NULL;

    Py_XDECREF( tmp_class_creation_34__class_decl_dict );
    tmp_class_creation_34__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_34__metaclass );
    tmp_class_creation_34__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_34__prepared );
    tmp_class_creation_34__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_102;
    exception_value = exception_keeper_value_102;
    exception_tb = exception_keeper_tb_102;
    exception_lineno = exception_keeper_lineno_102;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc952fed92243b2437b2ac459873ba13 );
#endif
    popFrameStack();

    assertFrameObject( frame_cc952fed92243b2437b2ac459873ba13 );

    goto frame_no_exception_10;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc952fed92243b2437b2ac459873ba13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc952fed92243b2437b2ac459873ba13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc952fed92243b2437b2ac459873ba13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc952fed92243b2437b2ac459873ba13, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__bases );
    Py_DECREF( tmp_class_creation_34__bases );
    tmp_class_creation_34__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__class_decl_dict );
    Py_DECREF( tmp_class_creation_34__class_decl_dict );
    tmp_class_creation_34__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__metaclass );
    Py_DECREF( tmp_class_creation_34__metaclass );
    tmp_class_creation_34__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_34__prepared );
    Py_DECREF( tmp_class_creation_34__prepared );
    tmp_class_creation_34__prepared = NULL;


    return MOD_RETURN_VALUE( module_urllib3$exceptions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
