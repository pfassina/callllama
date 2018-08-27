/* Generated code for Python source for module 'requests.adapters'
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

/* The _module_requests$adapters is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$adapters;
PyDictObject *moduledict_requests$adapters;

/* The module constants used, if any. */
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_isdir;
extern PyObject *const_str_plain_skip_accept_encoding;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_str_plain_proxy_url;
static PyObject *const_tuple_str_plain_NewConnectionError_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_decode_content;
static PyObject *const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple;
static PyObject *const_str_plain_proxy_manager;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
static PyObject *const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple;
static PyObject *const_str_digest_e5209e5e03de97a661af697c02841e7a;
static PyObject *const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_build_response;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_str_plain__HTTPError;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_proxies;
extern PyObject *const_tuple_28660caee0ff66870715c0ba247cbcaa_tuple;
static PyObject *const_tuple_6cdb677ec4584549230d89c8e343b130_tuple;
static PyObject *const_str_digest_94f8254fa141c33ed65ea27f59ed9d62;
extern PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple;
static PyObject *const_tuple_str_plain_MaxRetryError_tuple;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_46268be1785799fb5b96bebc078469e2;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_HTTPAdapter;
extern PyObject *const_int_0;
static PyObject *const_str_digest_689f43089124f06b15e9987dc8e6f0cd;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_PoolManager;
static PyObject *const_str_plain_max_retries;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_str_plain_preload_content;
extern PyObject *const_str_plain_ResponseError;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_prepend_scheme_if_needed;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_basestring;
static PyObject *const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3;
static PyObject *const_str_digest_bfa093c614acefeadc8693bd26119f2c;
static PyObject *const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9;
static PyObject *const_tuple_ecfd2f33dfb0fd6de42d787f1e38203c_tuple;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_plain_SOCKSProxyManager;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_geturl;
static PyObject *const_str_digest_64ad7ce704a2035b2f3a90397c090ca7;
static PyObject *const_str_plain_cert_verify;
extern PyObject *const_str_plain_state;
static PyObject *const_tuple_str_plain_SSLError_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_d9e923e371e62d15476d82fc18912a89;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_plain_SOCKSProxyManager_tuple;
extern PyObject *const_tuple_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78_tuple;
static PyObject *const_str_plain_DEFAULT_POOLSIZE;
extern PyObject *const_str_plain_get_auth_from_url;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_http;
static PyObject *const_str_plain_pool_maxsize;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_DEFAULT_CA_BUNDLE_PATH;
static PyObject *const_str_plain_init_poolmanager;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8eda945652fc1bca806aa3da22ec6fa8;
static PyObject *const_tuple_bd356f6cf3258844d460b87e1636571d_tuple;
static PyObject *const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162;
static PyObject *const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141;
static PyObject *const_tuple_str_plain_ProtocolError_tuple;
static PyObject *const_str_plain_pool_block;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
static PyObject *const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_a4a7f9f0551eaf266da04b39b9d88dbd;
static PyObject *const_str_plain_get_connection;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple;
extern PyObject *const_str_plain_path_url;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_58d849cc27a8bb92406c0789468590b3;
extern PyObject *const_str_plain_parse_url;
static PyObject *const_str_plain__pool_block;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_socks_tuple;
extern PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
extern PyObject *const_str_plain_connection_from_url;
static PyObject *const_str_plain_DEFAULT_POOLBLOCK;
static PyObject *const_str_plain_using_socks_proxy;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_TimeoutSauce;
static PyObject *const_str_digest_cf164d66984f410735aac772ffcc2043;
extern PyObject *const_str_plain_structures;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_getresponse;
static PyObject *const_str_plain_proxy_manager_for;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_884b2b9d6177854a6ea9165514fe7694;
static PyObject *const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple;
extern PyObject *const_str_plain_NewConnectionError;
static PyObject *const_str_digest_c12a14eed09d0474fe142aca849d89c8;
extern PyObject *const_str_plain_config;
static PyObject *const_str_digest_ab462680d0487f574012e6a7b3ea2cfd;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_str_plain_putrequest;
extern PyObject *const_str_plain_maxsize;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_plain_endheaders;
extern PyObject *const_str_plain_from_httplib;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_list_b210aeadbd087eaaf628d5f4d13acd25_list;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_pool_kwargs;
static PyObject *const_str_digest_2bdec81ec502026c4a660b15852a5925;
extern PyObject *const_str_plain_req;
static PyObject *const_str_digest_4aa12e5df9aa03d5f7f3f8425eea855e;
static PyObject *const_dict_96e45a30326f2854cb930a7737e3b26d;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_digest_f31b5910f8f74c678e204b480ba48975;
static PyObject *const_str_digest_ef23ce9ead41f049e884d33af424fe1b;
static PyObject *const_str_digest_0ff7d30361e9965ac3039c5f7b1df028;
extern PyObject *const_slice_int_pos_2_none_none;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
static PyObject *const_str_plain_DEFAULT_RETRIES;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_MaxRetryError;
static PyObject *const_str_plain_pool_connections;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_Retry;
static PyObject *const_tuple_str_plain_ConnectTimeoutError_tuple;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain_num_pools;
static PyObject *const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_assert_same_host;
extern PyObject *const_str_plain_ReadTimeout;
extern PyObject *const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple;
extern PyObject *const_str_plain_putheader;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_block;
static PyObject *const_str_plain_DEFAULT_POOL_TIMEOUT;
extern PyObject *const_str_plain_CERT_REQUIRED;
static PyObject *const_tuple_str_plain_ReadTimeoutError_tuple;
extern PyObject *const_str_plain_InvalidProxyURL;
static PyObject *const_str_plain__ProxyError;
extern PyObject *const_tuple_str_plain_Retry_tuple;
static PyObject *const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple;
extern PyObject *const_str_plain_https;
static PyObject *const_str_plain__pool_connections;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_buffering;
static PyObject *const_str_digest_a3b4e21c527f3872bb2a3cad05caced3;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_075bd0c67293e615df9afdc934c155c9;
static PyObject *const_tuple_str_plain_ResponseError_tuple;
static PyObject *const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
extern PyObject *const_str_plain___setstate__;
extern PyObject *const_str_plain_CaseInsensitiveDict;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_urlopen;
static PyObject *const_str_digest_afe1e7d238142b45d91be75903c1f969;
extern PyObject *const_str_plain_socks;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_str_plain_proxy_scheme;
static PyObject *const_str_digest_fff293e3e7fde90d706cca79c91fa423;
static PyObject *const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f;
static PyObject *const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain__SSLError;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_BaseAdapter;
static PyObject *const_str_digest_3d43a254760496216c28528a54f67ae7;
static PyObject *const_str_plain_add_headers;
static PyObject *const_str_plain_manager;
extern PyObject *const_str_plain_extract_zipped_paths;
extern PyObject *const_str_plain___getstate__;
static PyObject *const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
extern PyObject *const_str_plain__get_conn;
static PyObject *const_str_plain_proxy_pool;
extern PyObject *const_str_plain_resp;
static PyObject *const_str_digest_a72d819fa9b462ca35152a67acf9f95b;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple;
extern PyObject *const_tuple_str_plain__basic_auth_str_tuple;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_19fdcf2df08a408493d23f0c1c422714;
extern PyObject *const_str_plain_proxy_from_url;
static PyObject *const_tuple_str_plain_ClosedPoolError_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
static PyObject *const_tuple_str_plain_urlparse_str_plain_basestring_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
extern PyObject *const_str_plain_ConnectTimeout;
static PyObject *const_tuple_false_none_true_none_none_tuple;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_proxy_kwargs;
static PyObject *const_str_digest_d166bac2cd9f995554d196b16ef3feee;
static PyObject *const_tuple_str_plain_ProxyError_tuple;
static PyObject *const_str_plain__pool_maxsize;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_host;
static PyObject *const_str_digest_583f837ef2184e324997463a2ea927a1;
extern PyObject *const_str_plain_proxy_headers;
extern PyObject *const_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78;
extern PyObject *const_str_plain___attrs__;
extern PyObject *const_str_plain_request_url;
extern PyObject *const_str_plain_ProxyError;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_str_plain_username;
static PyObject *const_str_digest_0e90a733b836dccf8b7d0124401998c8;
extern PyObject *const_str_plain_status_code;
static PyObject *const_tuple_819605963d0355a74029d7c6ed0c5931_tuple;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_Response;
extern PyObject *const_str_plain_cert_file;
extern PyObject *const_str_plain_cert;
static PyObject *const_tuple_str_plain_Response_tuple;
static PyObject *const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
extern PyObject *const_str_plain_strict;
static PyObject *const_tuple_str_plain_self_str_plain_proxy_tuple;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
static PyObject *const_str_digest_f0960f14478e5a2fef4fc81736af77be;
extern PyObject *const_str_plain_HTTPResponse;
extern PyObject *const_dict_f965c4886458f8f721a7913cea1cd007;
static PyObject *const_tuple_str_plain_https_tuple;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple;
static PyObject *const_str_plain_connections;
extern PyObject *const_str_plain_select_proxy;
static PyObject *const_str_digest_c2c00751ef6093a3f812bf922a66511f;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_plain_cert_loc;
extern PyObject *const_str_plain_urldefragauth;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_str_plain_is_proxied_http_request;
extern PyObject *const_str_plain_get_encoding_from_headers;
extern PyObject *const_str_plain_auth;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain__basic_auth_str;
static PyObject *const_str_digest_bb4ba86a57b66cae0a694169c648e9c1;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_plain_RetryError;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_isdir = UNSTREAM_STRING( &constant_bin[ 779643 ], 5, 1 );
    const_tuple_str_plain_NewConnectionError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NewConnectionError_tuple, 0, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 3, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 4, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_plain_proxy_manager = UNSTREAM_STRING( &constant_bin[ 779648 ], 13, 1 );
    const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 1, const_str_plain_req ); Py_INCREF( const_str_plain_req );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 2, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_digest_e5209e5e03de97a661af697c02841e7a = UNSTREAM_STRING( &constant_bin[ 779661 ], 29, 0 );
    const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd = UNSTREAM_STRING( &constant_bin[ 779690 ], 534, 0 );
    const_str_plain_build_response = UNSTREAM_STRING( &constant_bin[ 780224 ], 14, 1 );
    const_str_plain__HTTPError = UNSTREAM_STRING( &constant_bin[ 780238 ], 10, 1 );
    const_tuple_6cdb677ec4584549230d89c8e343b130_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_pool_connections = UNSTREAM_STRING( &constant_bin[ 780248 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 1, const_str_plain_pool_connections ); Py_INCREF( const_str_plain_pool_connections );
    const_str_plain_pool_maxsize = UNSTREAM_STRING( &constant_bin[ 780264 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 2, const_str_plain_pool_maxsize ); Py_INCREF( const_str_plain_pool_maxsize );
    const_str_plain_max_retries = UNSTREAM_STRING( &constant_bin[ 780276 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 3, const_str_plain_max_retries ); Py_INCREF( const_str_plain_max_retries );
    const_str_plain_pool_block = UNSTREAM_STRING( &constant_bin[ 780287 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 4, const_str_plain_pool_block ); Py_INCREF( const_str_plain_pool_block );
    PyTuple_SET_ITEM( const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 5, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_94f8254fa141c33ed65ea27f59ed9d62 = UNSTREAM_STRING( &constant_bin[ 780297 ], 23, 0 );
    const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple = PyTuple_New( 1 );
    const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 = UNSTREAM_STRING( &constant_bin[ 780320 ], 39, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple, 0, const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 ); Py_INCREF( const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 );
    const_tuple_str_plain_MaxRetryError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MaxRetryError_tuple, 0, const_str_plain_MaxRetryError ); Py_INCREF( const_str_plain_MaxRetryError );
    const_str_digest_46268be1785799fb5b96bebc078469e2 = UNSTREAM_STRING( &constant_bin[ 780359 ], 16, 0 );
    const_str_digest_689f43089124f06b15e9987dc8e6f0cd = UNSTREAM_STRING( &constant_bin[ 780375 ], 33, 0 );
    const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3 = UNSTREAM_STRING( &constant_bin[ 780408 ], 26, 0 );
    const_str_digest_bfa093c614acefeadc8693bd26119f2c = UNSTREAM_STRING( &constant_bin[ 780434 ], 463, 0 );
    const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9 = UNSTREAM_STRING( &constant_bin[ 780897 ], 26, 0 );
    const_tuple_ecfd2f33dfb0fd6de42d787f1e38203c_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 780923 ], 137 );
    const_str_digest_64ad7ce704a2035b2f3a90397c090ca7 = UNSTREAM_STRING( &constant_bin[ 781060 ], 438, 0 );
    const_str_plain_cert_verify = UNSTREAM_STRING( &constant_bin[ 780309 ], 11, 1 );
    const_tuple_str_plain_SSLError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLError_tuple, 0, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    const_str_digest_d9e923e371e62d15476d82fc18912a89 = UNSTREAM_STRING( &constant_bin[ 781498 ], 23, 0 );
    const_tuple_str_plain_SOCKSProxyManager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SOCKSProxyManager_tuple, 0, const_str_plain_SOCKSProxyManager ); Py_INCREF( const_str_plain_SOCKSProxyManager );
    const_str_plain_DEFAULT_POOLSIZE = UNSTREAM_STRING( &constant_bin[ 781521 ], 16, 1 );
    const_str_plain_init_poolmanager = UNSTREAM_STRING( &constant_bin[ 781537 ], 16, 1 );
    const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_8eda945652fc1bca806aa3da22ec6fa8 = UNSTREAM_STRING( &constant_bin[ 781553 ], 16, 0 );
    const_tuple_bd356f6cf3258844d460b87e1636571d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 2, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 5, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 6, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141, const_str_plain_skip_accept_encoding, Py_True );
    assert( PyDict_Size( const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 ) == 1 );
    const_tuple_str_plain_ProtocolError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ProtocolError_tuple, 0, const_str_plain_ProtocolError ); Py_INCREF( const_str_plain_ProtocolError );
    const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e = UNSTREAM_STRING( &constant_bin[ 781569 ], 835, 0 );
    const_str_digest_a4a7f9f0551eaf266da04b39b9d88dbd = UNSTREAM_STRING( &constant_bin[ 782404 ], 50, 0 );
    const_str_plain_get_connection = UNSTREAM_STRING( &constant_bin[ 780420 ], 14, 1 );
    const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple = PyTuple_New( 1 );
    const_str_digest_d166bac2cd9f995554d196b16ef3feee = UNSTREAM_STRING( &constant_bin[ 782454 ], 70, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple, 0, const_str_digest_d166bac2cd9f995554d196b16ef3feee ); Py_INCREF( const_str_digest_d166bac2cd9f995554d196b16ef3feee );
    const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 0, const_str_plain_DEFAULT_CA_BUNDLE_PATH ); Py_INCREF( const_str_plain_DEFAULT_CA_BUNDLE_PATH );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 1, const_str_plain_extract_zipped_paths ); Py_INCREF( const_str_plain_extract_zipped_paths );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 2, const_str_plain_get_encoding_from_headers ); Py_INCREF( const_str_plain_get_encoding_from_headers );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 3, const_str_plain_prepend_scheme_if_needed ); Py_INCREF( const_str_plain_prepend_scheme_if_needed );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 4, const_str_plain_get_auth_from_url ); Py_INCREF( const_str_plain_get_auth_from_url );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 5, const_str_plain_urldefragauth ); Py_INCREF( const_str_plain_urldefragauth );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 6, const_str_plain_select_proxy ); Py_INCREF( const_str_plain_select_proxy );
    const_str_digest_58d849cc27a8bb92406c0789468590b3 = UNSTREAM_STRING( &constant_bin[ 782524 ], 20, 0 );
    const_str_plain__pool_block = UNSTREAM_STRING( &constant_bin[ 782544 ], 11, 1 );
    const_tuple_str_plain_socks_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_socks_tuple, 0, const_str_plain_socks ); Py_INCREF( const_str_plain_socks );
    const_str_plain_DEFAULT_POOLBLOCK = UNSTREAM_STRING( &constant_bin[ 782555 ], 17, 1 );
    const_str_plain_using_socks_proxy = UNSTREAM_STRING( &constant_bin[ 782572 ], 17, 1 );
    const_str_plain_TimeoutSauce = UNSTREAM_STRING( &constant_bin[ 782589 ], 12, 1 );
    const_str_digest_cf164d66984f410735aac772ffcc2043 = UNSTREAM_STRING( &constant_bin[ 782601 ], 575, 0 );
    const_str_plain_proxy_manager_for = UNSTREAM_STRING( &constant_bin[ 779673 ], 17, 1 );
    const_str_digest_884b2b9d6177854a6ea9165514fe7694 = UNSTREAM_STRING( &constant_bin[ 783176 ], 43, 0 );
    const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 1, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 3, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 4, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_cert_loc = UNSTREAM_STRING( &constant_bin[ 783219 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 5, const_str_plain_cert_loc ); Py_INCREF( const_str_plain_cert_loc );
    const_str_digest_c12a14eed09d0474fe142aca849d89c8 = UNSTREAM_STRING( &constant_bin[ 783227 ], 58, 0 );
    const_str_digest_ab462680d0487f574012e6a7b3ea2cfd = UNSTREAM_STRING( &constant_bin[ 783285 ], 162, 0 );
    const_list_b210aeadbd087eaaf628d5f4d13acd25_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 0, const_str_plain_max_retries ); Py_INCREF( const_str_plain_max_retries );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 1, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    const_str_plain__pool_connections = UNSTREAM_STRING( &constant_bin[ 783447 ], 17, 1 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 2, const_str_plain__pool_connections ); Py_INCREF( const_str_plain__pool_connections );
    const_str_plain__pool_maxsize = UNSTREAM_STRING( &constant_bin[ 783464 ], 13, 1 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 3, const_str_plain__pool_maxsize ); Py_INCREF( const_str_plain__pool_maxsize );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 4, const_str_plain__pool_block ); Py_INCREF( const_str_plain__pool_block );
    const_str_digest_2bdec81ec502026c4a660b15852a5925 = UNSTREAM_STRING( &constant_bin[ 783477 ], 24, 0 );
    const_str_digest_4aa12e5df9aa03d5f7f3f8425eea855e = UNSTREAM_STRING( &constant_bin[ 783501 ], 70, 0 );
    const_dict_96e45a30326f2854cb930a7737e3b26d = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_96e45a30326f2854cb930a7737e3b26d, const_str_plain_read, Py_False );
    assert( PyDict_Size( const_dict_96e45a30326f2854cb930a7737e3b26d ) == 1 );
    const_str_digest_f31b5910f8f74c678e204b480ba48975 = UNSTREAM_STRING( &constant_bin[ 783571 ], 61, 0 );
    const_str_digest_ef23ce9ead41f049e884d33af424fe1b = UNSTREAM_STRING( &constant_bin[ 783632 ], 522, 0 );
    const_str_digest_0ff7d30361e9965ac3039c5f7b1df028 = UNSTREAM_STRING( &constant_bin[ 784154 ], 115, 0 );
    const_str_plain_DEFAULT_RETRIES = UNSTREAM_STRING( &constant_bin[ 784269 ], 15, 1 );
    const_tuple_str_plain_ConnectTimeoutError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    const_str_plain_proxy_kwargs = UNSTREAM_STRING( &constant_bin[ 780746 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 2, const_str_plain_proxy_kwargs ); Py_INCREF( const_str_plain_proxy_kwargs );
    const_str_plain_manager = UNSTREAM_STRING( &constant_bin[ 779654 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 3, const_str_plain_manager ); Py_INCREF( const_str_plain_manager );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 4, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 5, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    PyTuple_SET_ITEM( const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 6, const_str_plain_proxy_headers ); Py_INCREF( const_str_plain_proxy_headers );
    const_str_plain_DEFAULT_POOL_TIMEOUT = UNSTREAM_STRING( &constant_bin[ 784284 ], 20, 1 );
    const_tuple_str_plain_ReadTimeoutError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ReadTimeoutError_tuple, 0, const_str_plain_ReadTimeoutError ); Py_INCREF( const_str_plain_ReadTimeoutError );
    const_str_plain__ProxyError = UNSTREAM_STRING( &constant_bin[ 784304 ], 11, 1 );
    const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_connections = UNSTREAM_STRING( &constant_bin[ 779918 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 1, const_str_plain_connections ); Py_INCREF( const_str_plain_connections );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 2, const_str_plain_maxsize ); Py_INCREF( const_str_plain_maxsize );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 3, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 4, const_str_plain_pool_kwargs ); Py_INCREF( const_str_plain_pool_kwargs );
    const_str_digest_a3b4e21c527f3872bb2a3cad05caced3 = UNSTREAM_STRING( &constant_bin[ 784315 ], 396, 0 );
    const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc = UNSTREAM_STRING( &constant_bin[ 784711 ], 28, 0 );
    const_str_digest_075bd0c67293e615df9afdc934c155c9 = UNSTREAM_STRING( &constant_bin[ 783176 ], 24, 0 );
    const_tuple_str_plain_ResponseError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ResponseError_tuple, 0, const_str_plain_ResponseError ); Py_INCREF( const_str_plain_ResponseError );
    const_str_digest_a634c3a07d79eddfe1581301d16e55a1 = UNSTREAM_STRING( &constant_bin[ 784739 ], 26, 0 );
    const_str_digest_afe1e7d238142b45d91be75903c1f969 = UNSTREAM_STRING( &constant_bin[ 784765 ], 20, 0 );
    const_str_plain_proxy_scheme = UNSTREAM_STRING( &constant_bin[ 784785 ], 12, 1 );
    const_str_digest_fff293e3e7fde90d706cca79c91fa423 = UNSTREAM_STRING( &constant_bin[ 784797 ], 895, 0 );
    const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f = UNSTREAM_STRING( &constant_bin[ 785692 ], 17, 0 );
    const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 3, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 4, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_is_proxied_http_request = UNSTREAM_STRING( &constant_bin[ 785709 ], 23, 1 );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 5, const_str_plain_is_proxied_http_request ); Py_INCREF( const_str_plain_is_proxied_http_request );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 6, const_str_plain_using_socks_proxy ); Py_INCREF( const_str_plain_using_socks_proxy );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 7, const_str_plain_proxy_scheme ); Py_INCREF( const_str_plain_proxy_scheme );
    PyTuple_SET_ITEM( const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 8, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    const_str_plain__SSLError = UNSTREAM_STRING( &constant_bin[ 785732 ], 9, 1 );
    const_str_plain_BaseAdapter = UNSTREAM_STRING( &constant_bin[ 780359 ], 11, 1 );
    const_str_digest_3d43a254760496216c28528a54f67ae7 = UNSTREAM_STRING( &constant_bin[ 785741 ], 23, 0 );
    const_str_plain_add_headers = UNSTREAM_STRING( &constant_bin[ 785753 ], 11, 1 );
    const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple, 1, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_str_plain_proxy_pool = UNSTREAM_STRING( &constant_bin[ 785764 ], 10, 1 );
    const_str_digest_a72d819fa9b462ca35152a67acf9f95b = UNSTREAM_STRING( &constant_bin[ 785774 ], 26, 0 );
    const_str_digest_19fdcf2df08a408493d23f0c1c422714 = UNSTREAM_STRING( &constant_bin[ 785800 ], 1167, 0 );
    const_tuple_str_plain_ClosedPoolError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ClosedPoolError_tuple, 0, const_str_plain_ClosedPoolError ); Py_INCREF( const_str_plain_ClosedPoolError );
    const_tuple_str_plain_urlparse_str_plain_basestring_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_basestring_tuple, 0, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_basestring_tuple, 1, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    const_tuple_false_none_true_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_ProxyError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ProxyError_tuple, 0, const_str_plain_ProxyError ); Py_INCREF( const_str_plain_ProxyError );
    const_str_digest_583f837ef2184e324997463a2ea927a1 = UNSTREAM_STRING( &constant_bin[ 786967 ], 137, 0 );
    const_str_digest_0e90a733b836dccf8b7d0124401998c8 = UNSTREAM_STRING( &constant_bin[ 787104 ], 546, 0 );
    const_tuple_819605963d0355a74029d7c6ed0c5931_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 0, const_str_plain_ConnectionError ); Py_INCREF( const_str_plain_ConnectionError );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 1, const_str_plain_ConnectTimeout ); Py_INCREF( const_str_plain_ConnectTimeout );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 2, const_str_plain_ReadTimeout ); Py_INCREF( const_str_plain_ReadTimeout );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 3, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 4, const_str_plain_ProxyError ); Py_INCREF( const_str_plain_ProxyError );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 5, const_str_plain_RetryError ); Py_INCREF( const_str_plain_RetryError );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 6, const_str_plain_InvalidSchema ); Py_INCREF( const_str_plain_InvalidSchema );
    PyTuple_SET_ITEM( const_tuple_819605963d0355a74029d7c6ed0c5931_tuple, 7, const_str_plain_InvalidProxyURL ); Py_INCREF( const_str_plain_InvalidProxyURL );
    const_tuple_str_plain_Response_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Response_tuple, 0, const_str_plain_Response ); Py_INCREF( const_str_plain_Response );
    const_str_digest_f564af29e8441da03b9e6bf26a88cc81 = UNSTREAM_STRING( &constant_bin[ 779869 ], 17, 0 );
    const_tuple_str_plain_self_str_plain_proxy_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_proxy_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_proxy_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    const_str_digest_f0960f14478e5a2fef4fc81736af77be = UNSTREAM_STRING( &constant_bin[ 787650 ], 577, 0 );
    const_tuple_str_plain_https_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_https_tuple, 0, const_str_plain_https ); Py_INCREF( const_str_plain_https );
    const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 3, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 4, const_str_plain_proxy_url ); Py_INCREF( const_str_plain_proxy_url );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 5, const_str_plain_proxy_manager ); Py_INCREF( const_str_plain_proxy_manager );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 6, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 7, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    const_str_digest_c2c00751ef6093a3f812bf922a66511f = UNSTREAM_STRING( &constant_bin[ 788227 ], 17, 0 );
    const_str_digest_bb4ba86a57b66cae0a694169c648e9c1 = UNSTREAM_STRING( &constant_bin[ 788244 ], 25, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$adapters( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6382ec51f3ea7e274e55457c6086aafc;
static PyCodeObject *codeobj_adae3102f0655d285d0ec2e5155f50b4;
static PyCodeObject *codeobj_5c39c0354ed1a02a762d205c29963fd9;
static PyCodeObject *codeobj_58fb9c5e04966e9f6bf019f9ff6d399f;
static PyCodeObject *codeobj_a1e06a4f177d872305ce0cb989343007;
static PyCodeObject *codeobj_93b623bc71de058e2bddced70fdacc8e;
static PyCodeObject *codeobj_94d4cc1afe2f2cda7b96fae32b3fb44d;
static PyCodeObject *codeobj_7aaca126308272833d764573017ac5da;
static PyCodeObject *codeobj_591ea277782cf878b63bb3f5e87e32a6;
static PyCodeObject *codeobj_c99719601d088ec331a7751e50f57745;
static PyCodeObject *codeobj_6c1af3c5c68db1dcbe100a58d165f4f3;
static PyCodeObject *codeobj_a3c476221c31478515b18d91dc27b410;
static PyCodeObject *codeobj_20ea2f49d4cd2371e4422d4361ce640f;
static PyCodeObject *codeobj_17cb00de224a0c5cbdff7389b322c8e6;
static PyCodeObject *codeobj_fb9938114cd4af8bec148c00f6905075;
static PyCodeObject *codeobj_1c960e235db1c2fa796997afe9f6a4c8;
static PyCodeObject *codeobj_aa04b30fb5873b653448a270b92c4106;
static PyCodeObject *codeobj_481ede77501d643eb3dc1f77996cf17a;
static PyCodeObject *codeobj_9f4d87b9cb02dda4cea6412b4ce014b1;
static PyCodeObject *codeobj_1b146b9c458b374ce67cf9b08bbd70e7;
static PyCodeObject *codeobj_971424ce19c701ef7321bac735ac2fe9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f31b5910f8f74c678e204b480ba48975;
    codeobj_6382ec51f3ea7e274e55457c6086aafc = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 130, const_tuple_28660caee0ff66870715c0ba247cbcaa_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_adae3102f0655d285d0ec2e5155f50b4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a72d819fa9b462ca35152a67acf9f95b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5c39c0354ed1a02a762d205c29963fd9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BaseAdapter, 53, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_58fb9c5e04966e9f6bf019f9ff6d399f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPAdapter, 82, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a1e06a4f177d872305ce0cb989343007 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSProxyManager, 44, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_93b623bc71de058e2bddced70fdacc8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 129, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94d4cc1afe2f2cda7b96fae32b3fb44d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 56, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_7aaca126308272833d764573017ac5da = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 111, const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_591ea277782cf878b63bb3f5e87e32a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 133, const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c99719601d088ec331a7751e50f57745 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_headers, 357, const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 2, 0, CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6c1af3c5c68db1dcbe100a58d165f4f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_response, 254, const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a3c476221c31478515b18d91dc27b410 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cert_verify, 202, const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20ea2f49d4cd2371e4422d4361ce640f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 77, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17cb00de224a0c5cbdff7389b322c8e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 318, const_tuple_str_plain_self_str_plain_proxy_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fb9938114cd4af8bec148c00f6905075 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_connection, 291, const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c960e235db1c2fa796997afe9f6a4c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init_poolmanager, 145, const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_aa04b30fb5873b653448a270b92c4106 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_proxy_headers, 371, const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_481ede77501d643eb3dc1f77996cf17a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_proxy_manager_for, 165, const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_9f4d87b9cb02dda4cea6412b4ce014b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_url, 328, const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1b146b9c458b374ce67cf9b08bbd70e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 59, const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_971424ce19c701ef7321bac735ac2fe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 393, const_tuple_ecfd2f33dfb0fd6de42d787f1e38203c_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$adapters$$$function_6___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void requests$adapters$$$function_6___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_11_build_response(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_12_get_connection( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_13_close(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_14_request_url(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_15_add_headers(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_17_send( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_3_send( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_4_close(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_6___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_7___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for(  );


// The module function definitions.
static PyObject *impl_requests$adapters$$$function_1_SOCKSProxyManager( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_a1e06a4f177d872305ce0cb989343007 = NULL;

    struct Nuitka_FrameObject *frame_a1e06a4f177d872305ce0cb989343007;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a1e06a4f177d872305ce0cb989343007, codeobj_a1e06a4f177d872305ce0cb989343007, module_requests$adapters, sizeof(void *)+sizeof(void *) );
    frame_a1e06a4f177d872305ce0cb989343007 = cache_frame_a1e06a4f177d872305ce0cb989343007;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a1e06a4f177d872305ce0cb989343007 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a1e06a4f177d872305ce0cb989343007 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidSchema );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSchema );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidSchema" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_a1e06a4f177d872305ce0cb989343007->m_frame.f_lineno = 45;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 45;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1e06a4f177d872305ce0cb989343007 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1e06a4f177d872305ce0cb989343007 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a1e06a4f177d872305ce0cb989343007, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a1e06a4f177d872305ce0cb989343007->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a1e06a4f177d872305ce0cb989343007, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a1e06a4f177d872305ce0cb989343007,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_a1e06a4f177d872305ce0cb989343007 == cache_frame_a1e06a4f177d872305ce0cb989343007 )
    {
        Py_DECREF( frame_a1e06a4f177d872305ce0cb989343007 );
    }
    cache_frame_a1e06a4f177d872305ce0cb989343007 = NULL;

    assertFrameObject( frame_a1e06a4f177d872305ce0cb989343007 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_1_SOCKSProxyManager );
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
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_1_SOCKSProxyManager );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_94d4cc1afe2f2cda7b96fae32b3fb44d = NULL;

    struct Nuitka_FrameObject *frame_94d4cc1afe2f2cda7b96fae32b3fb44d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94d4cc1afe2f2cda7b96fae32b3fb44d, codeobj_94d4cc1afe2f2cda7b96fae32b3fb44d, module_requests$adapters, sizeof(void *)+sizeof(void *) );
    frame_94d4cc1afe2f2cda7b96fae32b3fb44d = cache_frame_94d4cc1afe2f2cda7b96fae32b3fb44d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94d4cc1afe2f2cda7b96fae32b3fb44d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94d4cc1afe2f2cda7b96fae32b3fb44d ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseAdapter );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseAdapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_94d4cc1afe2f2cda7b96fae32b3fb44d->m_frame.f_lineno = 57;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94d4cc1afe2f2cda7b96fae32b3fb44d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94d4cc1afe2f2cda7b96fae32b3fb44d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94d4cc1afe2f2cda7b96fae32b3fb44d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94d4cc1afe2f2cda7b96fae32b3fb44d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94d4cc1afe2f2cda7b96fae32b3fb44d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94d4cc1afe2f2cda7b96fae32b3fb44d,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_94d4cc1afe2f2cda7b96fae32b3fb44d == cache_frame_94d4cc1afe2f2cda7b96fae32b3fb44d )
    {
        Py_DECREF( frame_94d4cc1afe2f2cda7b96fae32b3fb44d );
    }
    cache_frame_94d4cc1afe2f2cda7b96fae32b3fb44d = NULL;

    assertFrameObject( frame_94d4cc1afe2f2cda7b96fae32b3fb44d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_2___init__ );
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
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_2___init__ );
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


static PyObject *impl_requests$adapters$$$function_3_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_stream = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *par_proxies = python_pars[ 6 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_1b146b9c458b374ce67cf9b08bbd70e7 = NULL;

    struct Nuitka_FrameObject *frame_1b146b9c458b374ce67cf9b08bbd70e7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b146b9c458b374ce67cf9b08bbd70e7, codeobj_1b146b9c458b374ce67cf9b08bbd70e7, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b146b9c458b374ce67cf9b08bbd70e7 = cache_frame_1b146b9c458b374ce67cf9b08bbd70e7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b146b9c458b374ce67cf9b08bbd70e7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b146b9c458b374ce67cf9b08bbd70e7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_raise_type_1 = PyExc_NotImplementedError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 75;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b146b9c458b374ce67cf9b08bbd70e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b146b9c458b374ce67cf9b08bbd70e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b146b9c458b374ce67cf9b08bbd70e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b146b9c458b374ce67cf9b08bbd70e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b146b9c458b374ce67cf9b08bbd70e7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b146b9c458b374ce67cf9b08bbd70e7,
        type_description_1,
        par_self,
        par_request,
        par_stream,
        par_timeout,
        par_verify,
        par_cert,
        par_proxies
    );


    // Release cached frame.
    if ( frame_1b146b9c458b374ce67cf9b08bbd70e7 == cache_frame_1b146b9c458b374ce67cf9b08bbd70e7 )
    {
        Py_DECREF( frame_1b146b9c458b374ce67cf9b08bbd70e7 );
    }
    cache_frame_1b146b9c458b374ce67cf9b08bbd70e7 = NULL;

    assertFrameObject( frame_1b146b9c458b374ce67cf9b08bbd70e7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_3_send );
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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_3_send );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_4_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_20ea2f49d4cd2371e4422d4361ce640f = NULL;

    struct Nuitka_FrameObject *frame_20ea2f49d4cd2371e4422d4361ce640f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20ea2f49d4cd2371e4422d4361ce640f, codeobj_20ea2f49d4cd2371e4422d4361ce640f, module_requests$adapters, sizeof(void *) );
    frame_20ea2f49d4cd2371e4422d4361ce640f = cache_frame_20ea2f49d4cd2371e4422d4361ce640f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20ea2f49d4cd2371e4422d4361ce640f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20ea2f49d4cd2371e4422d4361ce640f ) == 2 ); // Frame stack

    // Framed code:
    tmp_raise_type_1 = PyExc_NotImplementedError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 79;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20ea2f49d4cd2371e4422d4361ce640f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20ea2f49d4cd2371e4422d4361ce640f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20ea2f49d4cd2371e4422d4361ce640f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20ea2f49d4cd2371e4422d4361ce640f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20ea2f49d4cd2371e4422d4361ce640f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20ea2f49d4cd2371e4422d4361ce640f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_20ea2f49d4cd2371e4422d4361ce640f == cache_frame_20ea2f49d4cd2371e4422d4361ce640f )
    {
        Py_DECREF( frame_20ea2f49d4cd2371e4422d4361ce640f );
    }
    cache_frame_20ea2f49d4cd2371e4422d4361ce640f = NULL;

    assertFrameObject( frame_20ea2f49d4cd2371e4422d4361ce640f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_4_close );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_4_close );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool_connections = python_pars[ 1 ];
    PyObject *par_pool_maxsize = python_pars[ 2 ];
    PyObject *par_max_retries = python_pars[ 3 ];
    PyObject *par_pool_block = python_pars[ 4 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_object_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7aaca126308272833d764573017ac5da = NULL;

    struct Nuitka_FrameObject *frame_7aaca126308272833d764573017ac5da;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7aaca126308272833d764573017ac5da, codeobj_7aaca126308272833d764573017ac5da, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7aaca126308272833d764573017ac5da = cache_frame_7aaca126308272833d764573017ac5da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7aaca126308272833d764573017ac5da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7aaca126308272833d764573017ac5da ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_max_retries;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_RETRIES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "oooooN";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_int_0_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_96e45a30326f2854cb930a7737e3b26d );
    frame_7aaca126308272833d764573017ac5da->m_frame.f_lineno = 115;
    tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooN";
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

        exception_lineno = 115;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_max_retries, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Retry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_from_int );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_max_retries;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "max_retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    frame_7aaca126308272833d764573017ac5da->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooN";
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

        exception_lineno = 117;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_max_retries, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    tmp_assattr_name_3 = PyDict_New();
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

        exception_lineno = 118;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_config, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = PyDict_New();
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_proxy_manager, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPAdapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooooN";
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

        exception_lineno = 121;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    frame_7aaca126308272833d764573017ac5da->m_frame.f_lineno = 121;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_5 = par_pool_connections;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__pool_connections, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_pool_maxsize;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_maxsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__pool_maxsize, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_pool_block;

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_block" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__pool_block, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_init_poolmanager );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_pool_connections;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_pool_maxsize;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_maxsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_block;
    tmp_dict_value_1 = par_pool_block;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_block" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_7aaca126308272833d764573017ac5da->m_frame.f_lineno = 127;
    tmp_unused = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7aaca126308272833d764573017ac5da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7aaca126308272833d764573017ac5da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7aaca126308272833d764573017ac5da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7aaca126308272833d764573017ac5da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7aaca126308272833d764573017ac5da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7aaca126308272833d764573017ac5da,
        type_description_1,
        par_self,
        par_pool_connections,
        par_pool_maxsize,
        par_max_retries,
        par_pool_block,
        NULL
    );


    // Release cached frame.
    if ( frame_7aaca126308272833d764573017ac5da == cache_frame_7aaca126308272833d764573017ac5da )
    {
        Py_DECREF( frame_7aaca126308272833d764573017ac5da );
    }
    cache_frame_7aaca126308272833d764573017ac5da = NULL;

    assertFrameObject( frame_7aaca126308272833d764573017ac5da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_pool_connections );
    par_pool_connections = NULL;

    Py_XDECREF( par_pool_maxsize );
    par_pool_maxsize = NULL;

    Py_XDECREF( par_max_retries );
    par_max_retries = NULL;

    Py_XDECREF( par_pool_block );
    par_pool_block = NULL;

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

    Py_XDECREF( par_pool_connections );
    par_pool_connections = NULL;

    Py_XDECREF( par_pool_maxsize );
    par_pool_maxsize = NULL;

    Py_XDECREF( par_max_retries );
    par_max_retries = NULL;

    Py_XDECREF( par_pool_block );
    par_pool_block = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_5___init__ );
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


static PyObject *impl_requests$adapters$$$function_6___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_93b623bc71de058e2bddced70fdacc8e = NULL;

    struct Nuitka_FrameObject *frame_93b623bc71de058e2bddced70fdacc8e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93b623bc71de058e2bddced70fdacc8e, codeobj_93b623bc71de058e2bddced70fdacc8e, module_requests$adapters, sizeof(void *) );
    frame_93b623bc71de058e2bddced70fdacc8e = cache_frame_93b623bc71de058e2bddced70fdacc8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93b623bc71de058e2bddced70fdacc8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93b623bc71de058e2bddced70fdacc8e ) == 2 ); // Frame stack

    // Framed code:
    if ( par_self == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( par_self );
    }

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___attrs__ );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_1;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        requests$adapters$$$function_6___getstate__$$$genexpr_1_genexpr_context,
        module_requests$adapters,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_884b2b9d6177854a6ea9165514fe7694,
#endif
        codeobj_6382ec51f3ea7e274e55457c6086aafc,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    outline_result_1:;
    tmp_dict_seq_1 = tmp_outline_return_value_1;
    tmp_return_value = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93b623bc71de058e2bddced70fdacc8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_93b623bc71de058e2bddced70fdacc8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93b623bc71de058e2bddced70fdacc8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93b623bc71de058e2bddced70fdacc8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93b623bc71de058e2bddced70fdacc8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93b623bc71de058e2bddced70fdacc8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93b623bc71de058e2bddced70fdacc8e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_93b623bc71de058e2bddced70fdacc8e == cache_frame_93b623bc71de058e2bddced70fdacc8e )
    {
        Py_DECREF( frame_93b623bc71de058e2bddced70fdacc8e );
    }
    cache_frame_93b623bc71de058e2bddced70fdacc8e = NULL;

    assertFrameObject( frame_93b623bc71de058e2bddced70fdacc8e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct requests$adapters$$$function_6___getstate__$$$genexpr_1_genexpr_locals {
    PyObject *var_attr
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *requests$adapters$$$function_6___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void requests$adapters$$$function_6___getstate__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_attr = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_6382ec51f3ea7e274e55457c6086aafc, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
    generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
    generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
    if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
    Py_XINCREF( generator->m_exc_state.exc_type );
    generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_value );
    generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_traceback );

#endif

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[0] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
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


        type_description_1 = "Noc";
        exception_lineno = 130;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
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

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 130;
        type_description_1 = "Noc";
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_attr;
        var_attr = tmp_assign_source_2;
        Py_INCREF( var_attr );
        Py_XDECREF( old );
    }

    tmp_tuple_element_1 = var_attr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_expression_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    if ( generator->m_closure[1] == NULL )
    {
        tmp_getattr_target_1 = NULL;
    }
    else
    {
        tmp_getattr_target_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_getattr_target_1 == NULL )
    {
        Py_DECREF( tmp_expression_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_getattr_attr_1 = var_attr;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_getattr_default_1 = Py_None;
    tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_expression_name_1 );

        exception_lineno = 130;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_attr,
            generator->m_closure[1]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
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

    Py_XDECREF( var_attr );
    var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_requests$adapters$$$function_7___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *var_attr = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_591ea277782cf878b63bb3f5e87e32a6 = NULL;

    struct Nuitka_FrameObject *frame_591ea277782cf878b63bb3f5e87e32a6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_591ea277782cf878b63bb3f5e87e32a6, codeobj_591ea277782cf878b63bb3f5e87e32a6, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_591ea277782cf878b63bb3f5e87e32a6 = cache_frame_591ea277782cf878b63bb3f5e87e32a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_591ea277782cf878b63bb3f5e87e32a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_591ea277782cf878b63bb3f5e87e32a6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = PyDict_New();
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_proxy_manager, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = PyDict_New();
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

        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_config, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_state;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "state" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_591ea277782cf878b63bb3f5e87e32a6->m_frame.f_lineno = 139;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 139;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
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

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 139;
        type_description_1 = "oooo";
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_3 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

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


        type_description_1 = "oooo";
        exception_lineno = 139;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

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


        type_description_1 = "oooo";
        exception_lineno = 139;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooo";
                exception_lineno = 139;
                goto try_except_handler_5;
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

        type_description_1 = "oooo";
        exception_lineno = 139;
        goto try_except_handler_5;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_attr;
        var_attr = tmp_assign_source_6;
        Py_INCREF( var_attr );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_7;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_setattr_target_1 = par_self;

    if ( tmp_setattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_setattr_attr_1 = var_attr;

    if ( tmp_setattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "attr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_setattr_value_1 = var_value;

    if ( tmp_setattr_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_init_poolmanager );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pool_connections );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pool_maxsize );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_block;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pool_block );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 143;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_591ea277782cf878b63bb3f5e87e32a6->m_frame.f_lineno = 142;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_591ea277782cf878b63bb3f5e87e32a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_591ea277782cf878b63bb3f5e87e32a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_591ea277782cf878b63bb3f5e87e32a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_591ea277782cf878b63bb3f5e87e32a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_591ea277782cf878b63bb3f5e87e32a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_591ea277782cf878b63bb3f5e87e32a6,
        type_description_1,
        par_self,
        par_state,
        var_attr,
        var_value
    );


    // Release cached frame.
    if ( frame_591ea277782cf878b63bb3f5e87e32a6 == cache_frame_591ea277782cf878b63bb3f5e87e32a6 )
    {
        Py_DECREF( frame_591ea277782cf878b63bb3f5e87e32a6 );
    }
    cache_frame_591ea277782cf878b63bb3f5e87e32a6 = NULL;

    assertFrameObject( frame_591ea277782cf878b63bb3f5e87e32a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_7___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_7___setstate__ );
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


static PyObject *impl_requests$adapters$$$function_8_init_poolmanager( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_connections = python_pars[ 1 ];
    PyObject *par_maxsize = python_pars[ 2 ];
    PyObject *par_block = python_pars[ 3 ];
    PyObject *par_pool_kwargs = python_pars[ 4 ];
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_1c960e235db1c2fa796997afe9f6a4c8 = NULL;

    struct Nuitka_FrameObject *frame_1c960e235db1c2fa796997afe9f6a4c8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c960e235db1c2fa796997afe9f6a4c8, codeobj_1c960e235db1c2fa796997afe9f6a4c8, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1c960e235db1c2fa796997afe9f6a4c8 = cache_frame_1c960e235db1c2fa796997afe9f6a4c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c960e235db1c2fa796997afe9f6a4c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c960e235db1c2fa796997afe9f6a4c8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_connections;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__pool_connections, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_maxsize;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "maxsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pool_maxsize, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_block;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "block" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pool_block, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_PoolManager );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PoolManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_num_pools;
    tmp_dict_value_1 = par_connections;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_maxsize;
    tmp_dict_value_2 = par_maxsize;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "maxsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_block;
    tmp_dict_value_3 = par_block;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "block" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_strict;
    tmp_dict_value_4 = Py_True;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = par_pool_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assattr_name_4 = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_poolmanager, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c960e235db1c2fa796997afe9f6a4c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c960e235db1c2fa796997afe9f6a4c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c960e235db1c2fa796997afe9f6a4c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c960e235db1c2fa796997afe9f6a4c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c960e235db1c2fa796997afe9f6a4c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c960e235db1c2fa796997afe9f6a4c8,
        type_description_1,
        par_self,
        par_connections,
        par_maxsize,
        par_block,
        par_pool_kwargs
    );


    // Release cached frame.
    if ( frame_1c960e235db1c2fa796997afe9f6a4c8 == cache_frame_1c960e235db1c2fa796997afe9f6a4c8 )
    {
        Py_DECREF( frame_1c960e235db1c2fa796997afe9f6a4c8 );
    }
    cache_frame_1c960e235db1c2fa796997afe9f6a4c8 = NULL;

    assertFrameObject( frame_1c960e235db1c2fa796997afe9f6a4c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_8_init_poolmanager );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_connections );
    par_connections = NULL;

    Py_XDECREF( par_maxsize );
    par_maxsize = NULL;

    Py_XDECREF( par_block );
    par_block = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

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

    Py_XDECREF( par_connections );
    par_connections = NULL;

    Py_XDECREF( par_maxsize );
    par_maxsize = NULL;

    Py_XDECREF( par_block );
    par_block = NULL;

    Py_XDECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_8_init_poolmanager );
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


static PyObject *impl_requests$adapters$$$function_9_proxy_manager_for( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy = python_pars[ 1 ];
    PyObject *par_proxy_kwargs = python_pars[ 2 ];
    PyObject *var_manager = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *var_proxy_headers = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_dircall_arg4_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_481ede77501d643eb3dc1f77996cf17a = NULL;

    struct Nuitka_FrameObject *frame_481ede77501d643eb3dc1f77996cf17a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_481ede77501d643eb3dc1f77996cf17a, codeobj_481ede77501d643eb3dc1f77996cf17a, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_481ede77501d643eb3dc1f77996cf17a = cache_frame_481ede77501d643eb3dc1f77996cf17a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_481ede77501d643eb3dc1f77996cf17a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_481ede77501d643eb3dc1f77996cf17a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_proxy;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_proxy_manager );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooooooo";
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

        exception_lineno = 178;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_proxy_manager );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_proxy;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_manager == NULL );
    var_manager = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_proxy;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_481ede77501d643eb3dc1f77996cf17a->m_frame.f_lineno = 179;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_481ede77501d643eb3dc1f77996cf17a->m_frame.f_lineno = 179;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_socks_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 179;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_auth_from_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_proxy;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    frame_481ede77501d643eb3dc1f77996cf17a->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "ooooooo";
        exception_lineno = 180;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 180;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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

                type_description_1 = "ooooooo";
                exception_lineno = 180;
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

        type_description_1 = "ooooooo";
        exception_lineno = 180;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_username == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_username = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_password == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_password = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOCKSProxyManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_tuple_element_1 = par_proxy;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_username;
    tmp_dict_value_1 = var_username;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_password;
    tmp_dict_value_2 = var_password;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_num_pools;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pool_connections );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 185;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_maxsize;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pool_maxsize );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 186;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_block;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__pool_block );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );

        exception_lineno = 187;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_proxy_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_7 = impl___internal__$$$function_10_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_7;

    tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_8 );
    assert( var_manager == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_manager = tmp_assign_source_8;

    tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_proxy_manager );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_ass_subscript_1 = par_proxy;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_proxy_headers );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_proxy;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_481ede77501d643eb3dc1f77996cf17a->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy_headers == NULL );
    var_proxy_headers = tmp_assign_source_9;

    // Tried code:
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_proxy_from_url );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_proxy_from_url );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "proxy_from_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_tuple_element_2 = par_proxy;

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_dict_key_6 = const_str_plain_proxy_headers;
    tmp_dict_value_6 = var_proxy_headers;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_num_pools;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__pool_connections );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );

        exception_lineno = 195;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_maxsize;
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__pool_maxsize );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );

        exception_lineno = 196;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_block;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__pool_block );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );

        exception_lineno = 197;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_2 = par_proxy_kwargs;

    if ( tmp_dircall_arg4_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        Py_DECREF( tmp_dircall_arg3_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy_kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg4_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
        tmp_assign_source_10 = impl___internal__$$$function_10_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    assert( tmp_assign_unpack_2__assign_source == NULL );
    tmp_assign_unpack_2__assign_source = tmp_assign_source_10;

    tmp_assign_source_11 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_manager == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_manager = tmp_assign_source_11;

    tmp_ass_subvalue_2 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_ass_subvalue_2 );
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_proxy_manager );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_ass_subscript_2 = par_proxy;

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    branch_end_2:;
    branch_end_1:;
    tmp_return_value = var_manager;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "manager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_481ede77501d643eb3dc1f77996cf17a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_481ede77501d643eb3dc1f77996cf17a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_481ede77501d643eb3dc1f77996cf17a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_481ede77501d643eb3dc1f77996cf17a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_481ede77501d643eb3dc1f77996cf17a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_481ede77501d643eb3dc1f77996cf17a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_481ede77501d643eb3dc1f77996cf17a,
        type_description_1,
        par_self,
        par_proxy,
        par_proxy_kwargs,
        var_manager,
        var_username,
        var_password,
        var_proxy_headers
    );


    // Release cached frame.
    if ( frame_481ede77501d643eb3dc1f77996cf17a == cache_frame_481ede77501d643eb3dc1f77996cf17a )
    {
        Py_DECREF( frame_481ede77501d643eb3dc1f77996cf17a );
    }
    cache_frame_481ede77501d643eb3dc1f77996cf17a = NULL;

    assertFrameObject( frame_481ede77501d643eb3dc1f77996cf17a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_9_proxy_manager_for );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( par_proxy_kwargs );
    par_proxy_kwargs = NULL;

    Py_XDECREF( var_manager );
    var_manager = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    Py_XDECREF( var_proxy_headers );
    var_proxy_headers = NULL;

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

    Py_XDECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( par_proxy_kwargs );
    par_proxy_kwargs = NULL;

    Py_XDECREF( var_manager );
    var_manager = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    Py_XDECREF( var_proxy_headers );
    var_proxy_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_9_proxy_manager_for );
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


static PyObject *impl_requests$adapters$$$function_10_cert_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_conn = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_verify = python_pars[ 3 ];
    PyObject *par_cert = python_pars[ 4 ];
    PyObject *var_cert_loc = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_operand_name_4;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_a3c476221c31478515b18d91dc27b410 = NULL;

    struct Nuitka_FrameObject *frame_a3c476221c31478515b18d91dc27b410;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a3c476221c31478515b18d91dc27b410, codeobj_a3c476221c31478515b18d91dc27b410, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a3c476221c31478515b18d91dc27b410 = cache_frame_a3c476221c31478515b18d91dc27b410;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a3c476221c31478515b18d91dc27b410 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a3c476221c31478515b18d91dc27b410 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_url;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 214;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 214;
    tmp_and_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_https_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_and_right_value_1 = par_verify;

    if ( tmp_and_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 214;
        type_description_1 = "oooooo";
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
    tmp_assign_source_1 = Py_None;
    assert( var_cert_loc == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_cert_loc = tmp_assign_source_1;

    tmp_compare_left_1 = par_verify;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_True;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = par_verify;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = var_cert_loc;
        var_cert_loc = tmp_assign_source_2;
        Py_INCREF( var_cert_loc );
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_cond_value_2 = var_cert_loc;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_zipped_paths" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_CA_BUNDLE_PATH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_cert_loc;
        var_cert_loc = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_operand_name_1 = var_cert_loc;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exists );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_cert_loc;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 225;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = const_str_digest_4aa12e5df9aa03d5f7f3f8425eea855e;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( !(tmp_called_name_3 == NULL) );
    tmp_args_element_name_3 = var_cert_loc;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 226;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assattr_name_1 = const_str_plain_CERT_REQUIRED;
    tmp_assattr_target_1 = par_conn;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cert_reqs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_cert_loc;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_assattr_name_2 = var_cert_loc;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_conn;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ca_certs, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_assattr_name_3 = var_cert_loc;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_conn;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ca_cert_dir, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    goto branch_end_1;
    branch_no_1:;
    tmp_assattr_name_4 = const_str_plain_CERT_NONE;
    tmp_assattr_target_4 = par_conn;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_cert_reqs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_conn;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_ca_certs, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_conn;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_ca_cert_dir, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    tmp_cond_value_5 = par_cert;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_isinstance_inst_1 = par_cert;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_subscribed_name_1 = par_cert;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_assattr_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_conn;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_cert_file, tmp_assattr_name_7 );
    Py_DECREF( tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_cert;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_assattr_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_conn;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_key_file, tmp_assattr_name_8 );
    Py_DECREF( tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_assattr_name_9 = par_cert;

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_conn;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_cert_file, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = Py_None;
    tmp_assattr_target_10 = par_conn;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_key_file, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_7:;
    tmp_source_name_6 = par_conn;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cert_file );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_exists );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_conn;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cert_file );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_2 );
    tmp_cond_value_6 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_6 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 247;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_10 = const_str_digest_c12a14eed09d0474fe142aca849d89c8;
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
    assert( !(tmp_called_name_6 == NULL) );
    tmp_source_name_11 = par_conn;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_cert_file );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 249;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 248;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_source_name_12 = par_conn;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_key_file );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_exists );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_conn;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_key_file );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 250;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_operand_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_4 );
    Py_DECREF( tmp_operand_name_4 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_3 );
    tmp_cond_value_7 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_7 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        exception_lineno = 250;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_16 = const_str_digest_a4a7f9f0551eaf266da04b39b9d88dbd;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_format );
    assert( !(tmp_called_name_8 == NULL) );
    tmp_source_name_17 = par_conn;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_key_file );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 252;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a3c476221c31478515b18d91dc27b410->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( !(tmp_raise_type_3 == NULL) );
    exception_type = tmp_raise_type_3;
    exception_lineno = 251;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_9:;
    branch_no_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3c476221c31478515b18d91dc27b410 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3c476221c31478515b18d91dc27b410 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3c476221c31478515b18d91dc27b410, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3c476221c31478515b18d91dc27b410->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3c476221c31478515b18d91dc27b410, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a3c476221c31478515b18d91dc27b410,
        type_description_1,
        par_self,
        par_conn,
        par_url,
        par_verify,
        par_cert,
        var_cert_loc
    );


    // Release cached frame.
    if ( frame_a3c476221c31478515b18d91dc27b410 == cache_frame_a3c476221c31478515b18d91dc27b410 )
    {
        Py_DECREF( frame_a3c476221c31478515b18d91dc27b410 );
    }
    cache_frame_a3c476221c31478515b18d91dc27b410 = NULL;

    assertFrameObject( frame_a3c476221c31478515b18d91dc27b410 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_10_cert_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_conn );
    par_conn = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_cert_loc );
    var_cert_loc = NULL;

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

    Py_XDECREF( par_conn );
    par_conn = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_cert_loc );
    var_cert_loc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_10_cert_verify );
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


static PyObject *impl_requests$adapters$$$function_11_build_response( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_req = python_pars[ 1 ];
    PyObject *par_resp = python_pars[ 2 ];
    PyObject *var_response = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6c1af3c5c68db1dcbe100a58d165f4f3 = NULL;

    struct Nuitka_FrameObject *frame_6c1af3c5c68db1dcbe100a58d165f4f3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c1af3c5c68db1dcbe100a58d165f4f3, codeobj_6c1af3c5c68db1dcbe100a58d165f4f3, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6c1af3c5c68db1dcbe100a58d165f4f3 = cache_frame_6c1af3c5c68db1dcbe100a58d165f4f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c1af3c5c68db1dcbe100a58d165f4f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c1af3c5c68db1dcbe100a58d165f4f3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Response );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Response );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_6c1af3c5c68db1dcbe100a58d165f4f3->m_frame.f_lineno = 264;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_response == NULL );
    var_response = tmp_assign_source_1;

    tmp_getattr_target_1 = par_resp;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_status;
    tmp_getattr_default_1 = Py_None;
    tmp_assattr_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_response;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_status_code, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CaseInsensitiveDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_target_2 = par_resp;

    if ( tmp_getattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_2 = const_str_plain_headers;
    tmp_getattr_default_2 = PyDict_New();
    tmp_args_element_name_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_default_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_6c1af3c5c68db1dcbe100a58d165f4f3->m_frame.f_lineno = 270;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = var_response;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_headers, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_encoding_from_headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = var_response;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_6c1af3c5c68db1dcbe100a58d165f4f3->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = var_response;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_encoding, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_resp;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = var_response;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_raw, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_response;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_raw );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reason );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = var_response;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_reason, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_req;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_url );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooo";
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
    tmp_source_name_5 = par_req;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_url );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_6c1af3c5c68db1dcbe100a58d165f4f3->m_frame.f_lineno = 278;
    tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = var_response;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_url, tmp_assattr_name_6 );
    Py_DECREF( tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_6 = par_req;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_url );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = var_response;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_url, tmp_assattr_name_7 );
    Py_DECREF( tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "extract_cookies_to_jar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = var_response;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cookies );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_req;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_resp;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_6c1af3c5c68db1dcbe100a58d165f4f3->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_8 = par_req;

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "req" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = var_response;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_request, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = par_self;

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = var_response;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_connection, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = var_response;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c1af3c5c68db1dcbe100a58d165f4f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c1af3c5c68db1dcbe100a58d165f4f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c1af3c5c68db1dcbe100a58d165f4f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c1af3c5c68db1dcbe100a58d165f4f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c1af3c5c68db1dcbe100a58d165f4f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c1af3c5c68db1dcbe100a58d165f4f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c1af3c5c68db1dcbe100a58d165f4f3,
        type_description_1,
        par_self,
        par_req,
        par_resp,
        var_response
    );


    // Release cached frame.
    if ( frame_6c1af3c5c68db1dcbe100a58d165f4f3 == cache_frame_6c1af3c5c68db1dcbe100a58d165f4f3 )
    {
        Py_DECREF( frame_6c1af3c5c68db1dcbe100a58d165f4f3 );
    }
    cache_frame_6c1af3c5c68db1dcbe100a58d165f4f3 = NULL;

    assertFrameObject( frame_6c1af3c5c68db1dcbe100a58d165f4f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_11_build_response );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_req );
    par_req = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

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

    Py_XDECREF( par_req );
    par_req = NULL;

    Py_XDECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_11_build_response );
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


static PyObject *impl_requests$adapters$$$function_12_get_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_proxy = NULL;
    PyObject *var_proxy_url = NULL;
    PyObject *var_proxy_manager = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_parsed = NULL;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_fb9938114cd4af8bec148c00f6905075 = NULL;

    struct Nuitka_FrameObject *frame_fb9938114cd4af8bec148c00f6905075;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fb9938114cd4af8bec148c00f6905075, codeobj_fb9938114cd4af8bec148c00f6905075, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fb9938114cd4af8bec148c00f6905075 = cache_frame_fb9938114cd4af8bec148c00f6905075;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fb9938114cd4af8bec148c00f6905075 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fb9938114cd4af8bec148c00f6905075 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_proxy );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 300;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_url;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_proxies;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 300;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy == NULL );
    var_proxy = tmp_assign_source_1;

    tmp_cond_value_1 = var_proxy;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "prepend_scheme_if_needed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_proxy;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = const_str_plain_http;
    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_proxy;
        var_proxy = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_parse_url );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parse_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_proxy;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy_url == NULL );
    var_proxy_url = tmp_assign_source_3;

    tmp_source_name_1 = var_proxy_url;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 305;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidProxyURL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 306;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 306;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 306;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_proxy_manager_for );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_proxy;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy_manager == NULL );
    var_proxy_manager = tmp_assign_source_4;

    tmp_source_name_3 = var_proxy_manager;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_connection_from_url );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_url;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_5;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_url;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_parsed == NULL );
    var_parsed = tmp_assign_source_6;

    tmp_called_instance_1 = var_parsed;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 313;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_geturl );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_url;
        par_url = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_poolmanager );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_connection_from_url );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_url;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_fb9938114cd4af8bec148c00f6905075->m_frame.f_lineno = 314;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_8;

    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb9938114cd4af8bec148c00f6905075 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fb9938114cd4af8bec148c00f6905075 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fb9938114cd4af8bec148c00f6905075, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fb9938114cd4af8bec148c00f6905075->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fb9938114cd4af8bec148c00f6905075, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fb9938114cd4af8bec148c00f6905075,
        type_description_1,
        par_self,
        par_url,
        par_proxies,
        var_proxy,
        var_proxy_url,
        var_proxy_manager,
        var_conn,
        var_parsed
    );


    // Release cached frame.
    if ( frame_fb9938114cd4af8bec148c00f6905075 == cache_frame_fb9938114cd4af8bec148c00f6905075 )
    {
        Py_DECREF( frame_fb9938114cd4af8bec148c00f6905075 );
    }
    cache_frame_fb9938114cd4af8bec148c00f6905075 = NULL;

    assertFrameObject( frame_fb9938114cd4af8bec148c00f6905075 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_conn;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_12_get_connection );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_proxy_url );
    var_proxy_url = NULL;

    Py_XDECREF( var_proxy_manager );
    var_proxy_manager = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

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

    Py_XDECREF( par_url );
    par_url = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_proxy_url );
    var_proxy_url = NULL;

    Py_XDECREF( var_proxy_manager );
    var_proxy_manager = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_12_get_connection );
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


static PyObject *impl_requests$adapters$$$function_13_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_proxy = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_17cb00de224a0c5cbdff7389b322c8e6 = NULL;

    struct Nuitka_FrameObject *frame_17cb00de224a0c5cbdff7389b322c8e6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17cb00de224a0c5cbdff7389b322c8e6, codeobj_17cb00de224a0c5cbdff7389b322c8e6, module_requests$adapters, sizeof(void *)+sizeof(void *) );
    frame_17cb00de224a0c5cbdff7389b322c8e6 = cache_frame_17cb00de224a0c5cbdff7389b322c8e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17cb00de224a0c5cbdff7389b322c8e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17cb00de224a0c5cbdff7389b322c8e6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_poolmanager );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_17cb00de224a0c5cbdff7389b322c8e6->m_frame.f_lineno = 324;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_clear );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_proxy_manager );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_17cb00de224a0c5cbdff7389b322c8e6->m_frame.f_lineno = 325;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_values );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oo";
        exception_lineno = 325;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
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

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 325;
        type_description_1 = "oo";
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_proxy;
        var_proxy = tmp_assign_source_3;
        Py_INCREF( var_proxy );
        Py_XDECREF( old );
    }

    tmp_called_instance_3 = var_proxy;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_17cb00de224a0c5cbdff7389b322c8e6->m_frame.f_lineno = 326;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_clear );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17cb00de224a0c5cbdff7389b322c8e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17cb00de224a0c5cbdff7389b322c8e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17cb00de224a0c5cbdff7389b322c8e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17cb00de224a0c5cbdff7389b322c8e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17cb00de224a0c5cbdff7389b322c8e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17cb00de224a0c5cbdff7389b322c8e6,
        type_description_1,
        par_self,
        var_proxy
    );


    // Release cached frame.
    if ( frame_17cb00de224a0c5cbdff7389b322c8e6 == cache_frame_17cb00de224a0c5cbdff7389b322c8e6 )
    {
        Py_DECREF( frame_17cb00de224a0c5cbdff7389b322c8e6 );
    }
    cache_frame_17cb00de224a0c5cbdff7389b322c8e6 = NULL;

    assertFrameObject( frame_17cb00de224a0c5cbdff7389b322c8e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_13_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

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

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_13_close );
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


static PyObject *impl_requests$adapters$$$function_14_request_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_proxy = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_is_proxied_http_request = NULL;
    PyObject *var_using_socks_proxy = NULL;
    PyObject *var_proxy_scheme = NULL;
    PyObject *var_url = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static struct Nuitka_FrameObject *cache_frame_9f4d87b9cb02dda4cea6412b4ce014b1 = NULL;

    struct Nuitka_FrameObject *frame_9f4d87b9cb02dda4cea6412b4ce014b1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f4d87b9cb02dda4cea6412b4ce014b1, codeobj_9f4d87b9cb02dda4cea6412b4ce014b1, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9f4d87b9cb02dda4cea6412b4ce014b1 = cache_frame_9f4d87b9cb02dda4cea6412b4ce014b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f4d87b9cb02dda4cea6412b4ce014b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f4d87b9cb02dda4cea6412b4ce014b1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_proxy );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select_proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_request;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_url );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_proxies;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame.f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy == NULL );
    var_proxy = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 343;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_request;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 343;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame.f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_scheme );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scheme == NULL );
    var_scheme = tmp_assign_source_2;

    tmp_and_left_value_1 = var_proxy;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_1 = var_scheme;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_str_plain_https;
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_assign_source_3 = tmp_and_left_value_1;
    and_end_1:;
    assert( var_is_proxied_http_request == NULL );
    var_is_proxied_http_request = tmp_assign_source_3;

    tmp_assign_source_4 = Py_False;
    assert( var_using_socks_proxy == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_using_socks_proxy = tmp_assign_source_4;

    tmp_cond_value_1 = var_proxy;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urlparse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_proxy;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame.f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_scheme );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame.f_lineno = 348;
    tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_proxy_scheme == NULL );
    var_proxy_scheme = tmp_assign_source_5;

    tmp_called_instance_2 = var_proxy_scheme;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame.f_lineno = 349;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_socks_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_using_socks_proxy;
        var_using_socks_proxy = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_5 = par_request;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 351;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path_url );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_7;

    tmp_and_left_value_2 = var_is_proxied_http_request;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_proxied_http_request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_operand_name_1 = var_using_socks_proxy;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "using_socks_proxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urldefragauth );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urldefragauth );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "urldefragauth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_request;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_url );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame.f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_url;
        var_url = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_return_value = var_url;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f4d87b9cb02dda4cea6412b4ce014b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f4d87b9cb02dda4cea6412b4ce014b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f4d87b9cb02dda4cea6412b4ce014b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f4d87b9cb02dda4cea6412b4ce014b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f4d87b9cb02dda4cea6412b4ce014b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f4d87b9cb02dda4cea6412b4ce014b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f4d87b9cb02dda4cea6412b4ce014b1,
        type_description_1,
        par_self,
        par_request,
        par_proxies,
        var_proxy,
        var_scheme,
        var_is_proxied_http_request,
        var_using_socks_proxy,
        var_proxy_scheme,
        var_url
    );


    // Release cached frame.
    if ( frame_9f4d87b9cb02dda4cea6412b4ce014b1 == cache_frame_9f4d87b9cb02dda4cea6412b4ce014b1 )
    {
        Py_DECREF( frame_9f4d87b9cb02dda4cea6412b4ce014b1 );
    }
    cache_frame_9f4d87b9cb02dda4cea6412b4ce014b1 = NULL;

    assertFrameObject( frame_9f4d87b9cb02dda4cea6412b4ce014b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_14_request_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_is_proxied_http_request );
    var_is_proxied_http_request = NULL;

    Py_XDECREF( var_using_socks_proxy );
    var_using_socks_proxy = NULL;

    Py_XDECREF( var_proxy_scheme );
    var_proxy_scheme = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_is_proxied_http_request );
    var_is_proxied_http_request = NULL;

    Py_XDECREF( var_using_socks_proxy );
    var_using_socks_proxy = NULL;

    Py_XDECREF( var_proxy_scheme );
    var_proxy_scheme = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_14_request_url );
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


static PyObject *impl_requests$adapters$$$function_15_add_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_15_add_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_15_add_headers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_requests$adapters$$$function_16_proxy_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy = python_pars[ 1 ];
    PyObject *var_headers = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_aa04b30fb5873b653448a270b92c4106 = NULL;

    struct Nuitka_FrameObject *frame_aa04b30fb5873b653448a270b92c4106;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa04b30fb5873b653448a270b92c4106, codeobj_aa04b30fb5873b653448a270b92c4106, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa04b30fb5873b653448a270b92c4106 = cache_frame_aa04b30fb5873b653448a270b92c4106;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa04b30fb5873b653448a270b92c4106 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa04b30fb5873b653448a270b92c4106 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_auth_from_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_proxy;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_aa04b30fb5873b653448a270b92c4106->m_frame.f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 385;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "ooooo";
        exception_lineno = 385;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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

                type_description_1 = "ooooo";
                exception_lineno = 385;
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

        type_description_1 = "ooooo";
        exception_lineno = 385;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_username == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_username = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_password == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_password = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_cond_value_1 = var_username;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_basic_auth_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_username;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_password;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_aa04b30fb5873b653448a270b92c4106->m_frame.f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_headers;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_return_value = var_headers;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa04b30fb5873b653448a270b92c4106 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa04b30fb5873b653448a270b92c4106 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa04b30fb5873b653448a270b92c4106 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa04b30fb5873b653448a270b92c4106, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa04b30fb5873b653448a270b92c4106->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa04b30fb5873b653448a270b92c4106, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa04b30fb5873b653448a270b92c4106,
        type_description_1,
        par_self,
        par_proxy,
        var_headers,
        var_username,
        var_password
    );


    // Release cached frame.
    if ( frame_aa04b30fb5873b653448a270b92c4106 == cache_frame_aa04b30fb5873b653448a270b92c4106 )
    {
        Py_DECREF( frame_aa04b30fb5873b653448a270b92c4106 );
    }
    cache_frame_aa04b30fb5873b653448a270b92c4106 = NULL;

    assertFrameObject( frame_aa04b30fb5873b653448a270b92c4106 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_16_proxy_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

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

    Py_XDECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_username );
    var_username = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_16_proxy_headers );
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


static PyObject *impl_requests$adapters$$$function_17_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_stream = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *par_proxies = python_pars[ 6 ];
    PyObject *var_conn = NULL;
    PyObject *var_url = NULL;
    PyObject *var_chunked = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_read = NULL;
    PyObject *var_e = NULL;
    PyObject *var_err = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_low_conn = NULL;
    PyObject *var_header = NULL;
    PyObject *var_value = NULL;
    PyObject *var_i = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    int tmp_exc_match_exception_match_5;
    int tmp_exc_match_exception_match_6;
    int tmp_exc_match_exception_match_7;
    int tmp_exc_match_exception_match_8;
    int tmp_exc_match_exception_match_9;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hex_arg_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_cls_7;
    PyObject *tmp_isinstance_cls_8;
    PyObject *tmp_isinstance_cls_9;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    PyObject *tmp_isinstance_inst_7;
    PyObject *tmp_isinstance_inst_8;
    PyObject *tmp_isinstance_inst_9;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
    PyObject *tmp_raise_type_9;
    PyObject *tmp_raise_type_10;
    PyObject *tmp_raise_type_11;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_971424ce19c701ef7321bac735ac2fe9 = NULL;

    struct Nuitka_FrameObject *frame_971424ce19c701ef7321bac735ac2fe9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_971424ce19c701ef7321bac735ac2fe9, codeobj_971424ce19c701ef7321bac735ac2fe9, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_971424ce19c701ef7321bac735ac2fe9 = cache_frame_971424ce19c701ef7321bac735ac2fe9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_971424ce19c701ef7321bac735ac2fe9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_971424ce19c701ef7321bac735ac2fe9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_connection );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_request;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 410;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_proxies;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 410;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_conn == NULL );
    var_conn = tmp_assign_source_1;

    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cert_verify );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_conn;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = par_request;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_url );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_verify;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_cert;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 412;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 413;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_request_url );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_request;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 413;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_proxies;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 413;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_url == NULL );
    var_url = tmp_assign_source_2;

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add_headers );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_request;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_stream;
    tmp_dict_value_1 = par_stream;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_timeout;
    tmp_dict_value_2 = par_timeout;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_verify;
    tmp_dict_value_3 = par_verify;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_cert;
    tmp_dict_value_4 = par_cert;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_proxies;
    tmp_dict_value_5 = par_proxies;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "proxies" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 414;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_request;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_body );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_compexpr_left_2 = const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
    tmp_source_name_8 = par_request;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_headers );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_operand_name_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_assign_source_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_chunked == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_chunked = tmp_assign_source_3;

    tmp_isinstance_inst_1 = par_timeout;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 418;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oooooooooooooooooooo";
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
    // Tried code:
    // Tried code:
    tmp_iter_arg_1 = par_timeout;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 420;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_assign_source_4 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 420;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 420;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;

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

                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 420;
                goto try_except_handler_4;
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

        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 420;
        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_connect == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_connect = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_8 );
    assert( var_read == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_read = tmp_assign_source_8;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutSauce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 421;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_6 = const_str_plain_connect;
    tmp_dict_value_6 = var_connect;

    if ( tmp_dict_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 421;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_read;
    tmp_dict_value_7 = var_read;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 421;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 421;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_timeout;
        par_timeout = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_10 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_e = tmp_assign_source_10;

    // Tried code:
    tmp_source_name_9 = const_str_digest_0ff7d30361e9965ac3039c5f7b1df028;
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_format );
    assert( !(tmp_called_name_6 == NULL) );
    tmp_args_element_name_9 = par_timeout;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 426;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 424;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
    }
    assert( var_err == NULL );
    var_err = tmp_assign_source_11;

    tmp_make_exception_arg_1 = var_err;

    CHECK_OBJECT( tmp_make_exception_arg_1 );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 427;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 427;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 419;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_971424ce19c701ef7321bac735ac2fe9->m_frame) frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_timeout;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 428;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutSauce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 428;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TimeoutSauce" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_connect;
    tmp_dict_value_8 = par_timeout;

    if ( tmp_dict_value_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_read;
    tmp_dict_value_9 = par_timeout;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 431;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 431;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_timeout;
        par_timeout = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    branch_no_3:;
    branch_end_1:;
    // Tried code:
    tmp_cond_value_1 = var_chunked;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunked" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_10 = var_conn;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_urlopen );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_dict_key_10 = const_str_plain_method;
    tmp_source_name_11 = par_request;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 436;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_method );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 436;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_kw_name_4 = _PyDict_NewPresized( 10 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_url;
    tmp_dict_value_11 = var_url;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_body;
    tmp_source_name_12 = par_request;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 438;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_body );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 438;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_13 = const_str_plain_headers;
    tmp_source_name_13 = par_request;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_headers );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 439;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_14 = const_str_plain_redirect;
    tmp_dict_value_14 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_15 = const_str_plain_assert_same_host;
    tmp_dict_value_15 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_16 = const_str_plain_preload_content;
    tmp_dict_value_16 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_17 = const_str_plain_decode_content;
    tmp_dict_value_17 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_18 = const_str_plain_retries;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 444;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_dict_value_18 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_max_retries );
    if ( tmp_dict_value_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );

        exception_lineno = 444;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_19 = const_str_plain_timeout;
    tmp_dict_value_19 = par_timeout;

    if ( tmp_dict_value_19 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 445;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 435;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    assert( var_resp == NULL );
    var_resp = tmp_assign_source_13;

    goto branch_end_4;
    branch_no_4:;
    tmp_hasattr_source_1 = var_conn;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 450;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_hasattr_attr_1 = const_str_plain_proxy_pool;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_15 = var_conn;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 451;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_proxy_pool );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_conn;
        var_conn = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    branch_no_5:;
    tmp_source_name_16 = var_conn;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 453;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__get_conn );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_dict_key_20 = const_str_plain_timeout;
    tmp_dict_value_20 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT );

    if (unlikely( tmp_dict_value_20 == NULL ))
    {
        tmp_dict_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT );
    }

    if ( tmp_dict_value_20 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_POOL_TIMEOUT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 453;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_kw_name_5 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 453;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 453;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    assert( var_low_conn == NULL );
    var_low_conn = tmp_assign_source_15;

    // Tried code:
    tmp_source_name_17 = var_low_conn;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_putrequest );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_source_name_18 = par_request;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 456;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_method );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 456;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_url;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 457;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_6 = PyDict_Copy( const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 456;
    tmp_unused = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_19 = par_request;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_headers );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 460;
    tmp_iter_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_16;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_17 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 460;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_6;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_6 );
        Py_XDECREF( exception_keeper_value_6 );
        Py_XDECREF( exception_keeper_tb_6 );

        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    Py_DECREF( exception_keeper_type_6 );
    Py_XDECREF( exception_keeper_value_6 );
    Py_XDECREF( exception_keeper_tb_6 );
    goto loop_end_1;
    goto branch_end_6;
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_9;
    branch_end_6:;
    // End of try:
    try_end_4:;
    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_18 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 460;
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_20 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 460;
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 460;
                goto try_except_handler_12;
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

        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 460;
        goto try_except_handler_12;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_11;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_header;
        var_header = tmp_assign_source_21;
        Py_INCREF( var_header );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_22;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_source_name_20 = var_low_conn;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_putheader );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }
    tmp_args_element_name_10 = var_header;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "header" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_args_element_name_11 = var_value;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 461;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_instance_2 = var_low_conn;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 463;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 463;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_endheaders );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_21 = par_request;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 465;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_iter_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_body );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_23;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_24 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_24 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 465;
        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_3 = exception_keeper_type_10;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_10 );
        Py_XDECREF( exception_keeper_value_10 );
        Py_XDECREF( exception_keeper_tb_10 );

        exception_lineno = 465;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    Py_DECREF( exception_keeper_type_10 );
    Py_XDECREF( exception_keeper_value_10 );
    Py_XDECREF( exception_keeper_tb_10 );
    goto loop_end_2;
    goto branch_end_7;
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_13;
    branch_end_7:;
    // End of try:
    try_end_8:;
    tmp_assign_source_25 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_25 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_25;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_22 = var_low_conn;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_send );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_len_arg_1 = var_i;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }

    tmp_hex_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_hex_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_subscribed_name_1 = BUILTIN_HEX( tmp_hex_arg_1 );
    Py_DECREF( tmp_hex_arg_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_subscript_name_1 = const_slice_int_pos_2_none_none;
    tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 466;
    tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 466;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = var_low_conn;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 467;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 467;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = var_low_conn;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 468;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_send );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_args_element_name_13 = var_i;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 468;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 468;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_5 = var_low_conn;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 469;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 469;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 469;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_called_instance_6 = var_low_conn;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 470;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 470;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_source_name_24 = var_low_conn;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 476;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_15;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_getresponse );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_15;
    }
    tmp_kw_name_7 = PyDict_Copy( const_dict_f965c4886458f8f721a7913cea1cd007 );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 476;
    tmp_assign_source_26 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_14, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_15;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_26;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_12 == NULL )
    {
        exception_keeper_tb_12 = MAKE_TRACEBACK( frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_12 );
    }
    else if ( exception_keeper_lineno_12 != 0 )
    {
        exception_keeper_tb_12 = ADD_TRACEBACK( exception_keeper_tb_12, frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_12 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    PyException_SetTraceback( exception_keeper_value_12, (PyObject *)exception_keeper_tb_12 );
    PUBLISH_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = PyExc_TypeError;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 477;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_16;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_instance_7 = var_low_conn;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 479;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_16;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 479;
    tmp_assign_source_27 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_getresponse );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_16;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_27;

    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 473;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_971424ce19c701ef7321bac735ac2fe9->m_frame) frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_16;
    branch_end_8:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_10;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // End of try:
    try_end_10:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPResponse );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPResponse );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPResponse" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_from_httplib );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_tuple_element_3 = var_r;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 482;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_dict_key_21 = const_str_plain_pool;
    tmp_dict_value_21 = var_conn;

    if ( tmp_dict_value_21 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_kw_name_8 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_22 = const_str_plain_connection;
    tmp_dict_value_22 = var_low_conn;

    if ( tmp_dict_value_22 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 484;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_23 = const_str_plain_preload_content;
    tmp_dict_value_23 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_24 = const_str_plain_decode_content;
    tmp_dict_value_24 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 481;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_3, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_8;
    }
    assert( var_resp == NULL );
    var_resp = tmp_assign_source_28;

    goto try_end_12;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_14 == NULL )
    {
        exception_keeper_tb_14 = MAKE_TRACEBACK( frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_14 );
    }
    else if ( exception_keeper_lineno_14 != 0 )
    {
        exception_keeper_tb_14 = ADD_TRACEBACK( exception_keeper_tb_14, frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_14 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    PyException_SetTraceback( exception_keeper_value_14, (PyObject *)exception_keeper_tb_14 );
    PUBLISH_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    // Tried code:
    tmp_called_instance_8 = var_low_conn;

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "low_conn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 491;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_17;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 491;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 491;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 492;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_971424ce19c701ef7321bac735ac2fe9->m_frame) frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_7;
    // End of try:
    // End of try:
    try_end_12:;
    branch_end_4:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_4 );
    exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_4 );
    exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_4 );

    if ( exception_keeper_tb_16 == NULL )
    {
        exception_keeper_tb_16 = MAKE_TRACEBACK( frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_16 );
    }
    else if ( exception_keeper_lineno_16 != 0 )
    {
        exception_keeper_tb_16 = ADD_TRACEBACK( exception_keeper_tb_16, frame_971424ce19c701ef7321bac735ac2fe9, exception_keeper_lineno_16 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16 );
    PyException_SetTraceback( exception_keeper_value_16, (PyObject *)exception_keeper_tb_16 );
    PUBLISH_EXCEPTION( &exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16 );
    // Tried code:
    tmp_compare_left_5 = EXC_TYPE(PyThreadState_GET());
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_tuple_element_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    tmp_compare_right_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_5, 0, tmp_tuple_element_4 );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_compare_right_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_error );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_5 );

        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }
    PyTuple_SET_ITEM( tmp_compare_right_5, 1, tmp_tuple_element_4 );
    tmp_exc_match_exception_match_5 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 494;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_29 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_err;
        var_err = tmp_assign_source_29;
        Py_INCREF( var_err );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 495;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_19;
    }

    tmp_tuple_element_5 = var_err;

    CHECK_OBJECT( tmp_tuple_element_5 );
    tmp_args_name_4 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_dict_key_25 = const_str_plain_request;
    tmp_dict_value_25 = par_request;

    if ( tmp_dict_value_25 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 495;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_19;
    }

    tmp_kw_name_9 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 495;
    tmp_raise_type_2 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_4, tmp_kw_name_9 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_9 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 495;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_19;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 495;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_err );
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_6 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
    }

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MaxRetryError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 497;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    tmp_exc_match_exception_match_6 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 497;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_30 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_30;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_27 = var_e;

    CHECK_OBJECT( tmp_source_name_27 );
    tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_reason );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 498;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 498;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_28 = var_e;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 500;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_reason );
    if ( tmp_isinstance_inst_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 500;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

    if (unlikely( tmp_isinstance_cls_4 == NULL ))
    {
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
    }

    if ( tmp_isinstance_cls_4 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NewConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 500;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_inst_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 500;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeout );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeout );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 501;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_tuple_element_6 = var_e;

    if ( tmp_tuple_element_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 501;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_args_name_5 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_dict_key_26 = const_str_plain_request;
    tmp_dict_value_26 = par_request;

    if ( tmp_dict_value_26 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 501;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_kw_name_10 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 501;
    tmp_raise_type_3 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_5, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_10 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 501;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 501;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_20;
    branch_no_12:;
    branch_no_11:;
    tmp_source_name_29 = var_e;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 503;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_isinstance_inst_5 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_reason );
    if ( tmp_isinstance_inst_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ResponseError );

    if (unlikely( tmp_isinstance_cls_5 == NULL ))
    {
        tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
    }

    if ( tmp_isinstance_cls_5 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 503;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    Py_DECREF( tmp_isinstance_inst_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_RetryError );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RetryError );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RetryError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 504;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_tuple_element_7 = var_e;

    if ( tmp_tuple_element_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 504;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_args_name_6 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_7 );
    tmp_dict_key_27 = const_str_plain_request;
    tmp_dict_value_27 = par_request;

    if ( tmp_dict_value_27 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 504;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_kw_name_11 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 504;
    tmp_raise_type_4 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_6, tmp_kw_name_11 );
    Py_DECREF( tmp_args_name_6 );
    Py_DECREF( tmp_kw_name_11 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 504;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    exception_type = tmp_raise_type_4;
    exception_lineno = 504;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_20;
    branch_no_13:;
    tmp_source_name_30 = var_e;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 506;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_isinstance_inst_6 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_reason );
    if ( tmp_isinstance_inst_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 506;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    tmp_isinstance_cls_6 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError );

    if (unlikely( tmp_isinstance_cls_6 == NULL ))
    {
        tmp_isinstance_cls_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ProxyError );
    }

    if ( tmp_isinstance_cls_6 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ProxyError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 506;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    Py_DECREF( tmp_isinstance_inst_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 506;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_tuple_element_8 = var_e;

    if ( tmp_tuple_element_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_args_name_7 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_8 );
    tmp_dict_key_28 = const_str_plain_request;
    tmp_dict_value_28 = par_request;

    if ( tmp_dict_value_28 == NULL )
    {
        Py_DECREF( tmp_args_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_kw_name_12 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 507;
    tmp_raise_type_5 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_7, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_7 );
    Py_DECREF( tmp_kw_name_12 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 507;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    exception_type = tmp_raise_type_5;
    exception_lineno = 507;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_20;
    branch_no_14:;
    tmp_source_name_31 = var_e;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 509;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_isinstance_inst_7 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_reason );
    if ( tmp_isinstance_inst_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    tmp_isinstance_cls_7 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError );

    if (unlikely( tmp_isinstance_cls_7 == NULL ))
    {
        tmp_isinstance_cls_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError );
    }

    if ( tmp_isinstance_cls_7 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 509;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_7, tmp_isinstance_cls_7 );
    Py_DECREF( tmp_isinstance_inst_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_tuple_element_9 = var_e;

    if ( tmp_tuple_element_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_args_name_8 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_9 );
    tmp_dict_key_29 = const_str_plain_request;
    tmp_dict_value_29 = par_request;

    if ( tmp_dict_value_29 == NULL )
    {
        Py_DECREF( tmp_args_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_kw_name_13 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 511;
    tmp_raise_type_6 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_8, tmp_kw_name_13 );
    Py_DECREF( tmp_args_name_8 );
    Py_DECREF( tmp_kw_name_13 );
    if ( tmp_raise_type_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    exception_type = tmp_raise_type_6;
    exception_lineno = 511;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_20;
    branch_no_15:;
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_called_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 513;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_tuple_element_10 = var_e;

    if ( tmp_tuple_element_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 513;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_args_name_9 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_10 );
    tmp_dict_key_30 = const_str_plain_request;
    tmp_dict_value_30 = par_request;

    if ( tmp_dict_value_30 == NULL )
    {
        Py_DECREF( tmp_args_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 513;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_kw_name_14 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_14, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 513;
    tmp_raise_type_7 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_9, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_9 );
    Py_DECREF( tmp_kw_name_14 );
    if ( tmp_raise_type_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    exception_type = tmp_raise_type_7;
    exception_lineno = 513;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_18;
    // End of try:
    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_7 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ClosedPoolError );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClosedPoolError );
    }

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClosedPoolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 515;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    tmp_exc_match_exception_match_7 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_7 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_31;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 516;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_21;
    }

    tmp_tuple_element_11 = var_e;

    CHECK_OBJECT( tmp_tuple_element_11 );
    tmp_args_name_10 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_11 );
    tmp_dict_key_31 = const_str_plain_request;
    tmp_dict_value_31 = par_request;

    if ( tmp_dict_value_31 == NULL )
    {
        Py_DECREF( tmp_args_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 516;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_21;
    }

    tmp_kw_name_15 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_15, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 516;
    tmp_raise_type_8 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_10, tmp_kw_name_15 );
    Py_DECREF( tmp_args_name_10 );
    Py_DECREF( tmp_kw_name_15 );
    if ( tmp_raise_type_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_21;
    }
    exception_type = tmp_raise_type_8;
    exception_lineno = 516;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_18;
    // End of try:
    goto branch_end_16;
    branch_no_16:;
    tmp_compare_left_8 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError );

    if (unlikely( tmp_compare_right_8 == NULL ))
    {
        tmp_compare_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ProxyError );
    }

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ProxyError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 518;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    tmp_exc_match_exception_match_8 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_8 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_32 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_32;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProxyError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 519;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_args_element_name_14 = var_e;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 519;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    if ( tmp_raise_type_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_22;
    }
    exception_type = tmp_raise_type_9;
    exception_lineno = 519;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_18;
    // End of try:
    goto branch_end_17;
    branch_no_17:;
    tmp_compare_left_9 = EXC_TYPE(PyThreadState_GET());
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError );
    }

    if ( tmp_tuple_element_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 521;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    tmp_compare_right_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__HTTPError );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPError );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_compare_right_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_HTTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 521;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 1, tmp_tuple_element_12 );
    tmp_exc_match_exception_match_9 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_9 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_33 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_33;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_isinstance_inst_8 = var_e;

    CHECK_OBJECT( tmp_isinstance_inst_8 );
    tmp_isinstance_cls_8 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError );

    if (unlikely( tmp_isinstance_cls_8 == NULL ))
    {
        tmp_isinstance_cls_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError );
    }

    if ( tmp_isinstance_cls_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 522;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_8, tmp_isinstance_cls_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }

    tmp_tuple_element_13 = var_e;

    CHECK_OBJECT( tmp_tuple_element_13 );
    tmp_args_name_11 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_13 );
    tmp_dict_key_32 = const_str_plain_request;
    tmp_dict_value_32 = par_request;

    if ( tmp_dict_value_32 == NULL )
    {
        Py_DECREF( tmp_args_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }

    tmp_kw_name_16 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_16, tmp_dict_key_32, tmp_dict_value_32 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 524;
    tmp_raise_type_10 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_11, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_11 );
    Py_DECREF( tmp_kw_name_16 );
    if ( tmp_raise_type_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }
    exception_type = tmp_raise_type_10;
    exception_lineno = 524;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_23;
    goto branch_end_19;
    branch_no_19:;
    tmp_isinstance_inst_9 = var_e;

    CHECK_OBJECT( tmp_isinstance_inst_9 );
    tmp_isinstance_cls_9 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

    if (unlikely( tmp_isinstance_cls_9 == NULL ))
    {
        tmp_isinstance_cls_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
    }

    if ( tmp_isinstance_cls_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 525;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_9, tmp_isinstance_cls_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeout );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeout );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 526;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }

    tmp_tuple_element_14 = var_e;

    CHECK_OBJECT( tmp_tuple_element_14 );
    tmp_args_name_12 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_14 );
    tmp_dict_key_33 = const_str_plain_request;
    tmp_dict_value_33 = par_request;

    if ( tmp_dict_value_33 == NULL )
    {
        Py_DECREF( tmp_args_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 526;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }

    tmp_kw_name_17 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_17, tmp_dict_key_33, tmp_dict_value_33 );
    assert( !(tmp_res != 0) );
    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 526;
    tmp_raise_type_11 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_12, tmp_kw_name_17 );
    Py_DECREF( tmp_args_name_12 );
    Py_DECREF( tmp_kw_name_17 );
    if ( tmp_raise_type_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_23;
    }
    exception_type = tmp_raise_type_11;
    exception_lineno = 526;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_23;
    goto branch_end_20;
    branch_no_20:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 528;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_971424ce19c701ef7321bac735ac2fe9->m_frame) frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_23;
    branch_end_20:;
    branch_end_19:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_18;
    // End of try:
    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 433;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_971424ce19c701ef7321bac735ac2fe9->m_frame) frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_18;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    branch_end_10:;
    branch_end_9:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_13:;
    tmp_source_name_32 = par_self;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 530;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_build_response );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = par_request;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 530;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = var_resp;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 530;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_971424ce19c701ef7321bac735ac2fe9->m_frame.f_lineno = 530;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_971424ce19c701ef7321bac735ac2fe9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_971424ce19c701ef7321bac735ac2fe9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_971424ce19c701ef7321bac735ac2fe9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_971424ce19c701ef7321bac735ac2fe9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_971424ce19c701ef7321bac735ac2fe9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_971424ce19c701ef7321bac735ac2fe9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_971424ce19c701ef7321bac735ac2fe9,
        type_description_1,
        par_self,
        par_request,
        par_stream,
        par_timeout,
        par_verify,
        par_cert,
        par_proxies,
        var_conn,
        var_url,
        var_chunked,
        var_connect,
        var_read,
        var_e,
        var_err,
        var_resp,
        var_low_conn,
        var_header,
        var_value,
        var_i,
        var_r
    );


    // Release cached frame.
    if ( frame_971424ce19c701ef7321bac735ac2fe9 == cache_frame_971424ce19c701ef7321bac735ac2fe9 )
    {
        Py_DECREF( frame_971424ce19c701ef7321bac735ac2fe9 );
    }
    cache_frame_971424ce19c701ef7321bac735ac2fe9 = NULL;

    assertFrameObject( frame_971424ce19c701ef7321bac735ac2fe9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_chunked );
    var_chunked = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_low_conn );
    var_low_conn = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request );
    par_request = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( par_verify );
    par_verify = NULL;

    Py_XDECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    Py_XDECREF( var_chunked );
    var_chunked = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_low_conn );
    var_low_conn = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
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



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_10_cert_verify,
        const_str_plain_cert_verify,
#if PYTHON_VERSION >= 300
        const_str_digest_94f8254fa141c33ed65ea27f59ed9d62,
#endif
        codeobj_a3c476221c31478515b18d91dc27b410,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_f0960f14478e5a2fef4fc81736af77be,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_11_build_response(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_11_build_response,
        const_str_plain_build_response,
#if PYTHON_VERSION >= 300
        const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9,
#endif
        codeobj_6c1af3c5c68db1dcbe100a58d165f4f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_64ad7ce704a2035b2f3a90397c090ca7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_12_get_connection( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_12_get_connection,
        const_str_plain_get_connection,
#if PYTHON_VERSION >= 300
        const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3,
#endif
        codeobj_fb9938114cd4af8bec148c00f6905075,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_a3b4e21c527f3872bb2a3cad05caced3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_13_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_13_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f,
#endif
        codeobj_17cb00de224a0c5cbdff7389b322c8e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_ab462680d0487f574012e6a7b3ea2cfd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_14_request_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_14_request_url,
        const_str_plain_request_url,
#if PYTHON_VERSION >= 300
        const_str_digest_d9e923e371e62d15476d82fc18912a89,
#endif
        codeobj_9f4d87b9cb02dda4cea6412b4ce014b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_cf164d66984f410735aac772ffcc2043,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_15_add_headers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_15_add_headers,
        const_str_plain_add_headers,
#if PYTHON_VERSION >= 300
        const_str_digest_3d43a254760496216c28528a54f67ae7,
#endif
        codeobj_c99719601d088ec331a7751e50f57745,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_0e90a733b836dccf8b7d0124401998c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_16_proxy_headers,
        const_str_plain_proxy_headers,
#if PYTHON_VERSION >= 300
        const_str_digest_bb4ba86a57b66cae0a694169c648e9c1,
#endif
        codeobj_aa04b30fb5873b653448a270b92c4106,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_ef23ce9ead41f049e884d33af424fe1b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_17_send( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_17_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        const_str_digest_8eda945652fc1bca806aa3da22ec6fa8,
#endif
        codeobj_971424ce19c701ef7321bac735ac2fe9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_fff293e3e7fde90d706cca79c91fa423,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_1_SOCKSProxyManager,
        const_str_plain_SOCKSProxyManager,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a1e06a4f177d872305ce0cb989343007,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_58d849cc27a8bb92406c0789468590b3,
#endif
        codeobj_94d4cc1afe2f2cda7b96fae32b3fb44d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_3_send( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_3_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        const_str_digest_46268be1785799fb5b96bebc078469e2,
#endif
        codeobj_1b146b9c458b374ce67cf9b08bbd70e7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_4_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_c2c00751ef6093a3f812bf922a66511f,
#endif
        codeobj_20ea2f49d4cd2371e4422d4361ce640f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_689f43089124f06b15e9987dc8e6f0cd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_afe1e7d238142b45d91be75903c1f969,
#endif
        codeobj_7aaca126308272833d764573017ac5da,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_6___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_6___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_075bd0c67293e615df9afdc934c155c9,
#endif
        codeobj_93b623bc71de058e2bddced70fdacc8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_7___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_7___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_2bdec81ec502026c4a660b15852a5925,
#endif
        codeobj_591ea277782cf878b63bb3f5e87e32a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_8_init_poolmanager,
        const_str_plain_init_poolmanager,
#if PYTHON_VERSION >= 300
        const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc,
#endif
        codeobj_1c960e235db1c2fa796997afe9f6a4c8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_9_proxy_manager_for,
        const_str_plain_proxy_manager_for,
#if PYTHON_VERSION >= 300
        const_str_digest_e5209e5e03de97a661af697c02841e7a,
#endif
        codeobj_481ede77501d643eb3dc1f77996cf17a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_bfa093c614acefeadc8693bd26119f2c,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$adapters =
{
    PyModuleDef_HEAD_INIT,
    "requests.adapters",   /* m_name */
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

MOD_INIT_DECL( requests$adapters )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$adapters );
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
    puts("requests.adapters: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.adapters: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.adapters: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$adapters" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$adapters = Py_InitModule4(
        "requests.adapters",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$adapters = PyModule_Create( &mdef_requests$adapters );
#endif

    moduledict_requests$adapters = MODULE_DICT( module_requests$adapters );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$adapters );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f564af29e8441da03b9e6bf26a88cc81, module_requests$adapters );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_fromlist_name_19;
    PyObject *tmp_fromlist_name_20;
    PyObject *tmp_fromlist_name_21;
    PyObject *tmp_fromlist_name_22;
    PyObject *tmp_fromlist_name_23;
    PyObject *tmp_fromlist_name_24;
    PyObject *tmp_fromlist_name_25;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_globals_name_19;
    PyObject *tmp_globals_name_20;
    PyObject *tmp_globals_name_21;
    PyObject *tmp_globals_name_22;
    PyObject *tmp_globals_name_23;
    PyObject *tmp_globals_name_24;
    PyObject *tmp_globals_name_25;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_import_name_from_36;
    PyObject *tmp_import_name_from_37;
    PyObject *tmp_import_name_from_38;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
    PyObject *tmp_level_name_19;
    PyObject *tmp_level_name_20;
    PyObject *tmp_level_name_21;
    PyObject *tmp_level_name_22;
    PyObject *tmp_level_name_23;
    PyObject *tmp_level_name_24;
    PyObject *tmp_level_name_25;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_locals_name_19;
    PyObject *tmp_locals_name_20;
    PyObject *tmp_locals_name_21;
    PyObject *tmp_locals_name_22;
    PyObject *tmp_locals_name_23;
    PyObject *tmp_locals_name_24;
    PyObject *tmp_locals_name_25;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    PyObject *tmp_name_name_19;
    PyObject *tmp_name_name_20;
    PyObject *tmp_name_name_21;
    PyObject *tmp_name_name_22;
    PyObject *tmp_name_name_23;
    PyObject *tmp_name_name_24;
    PyObject *tmp_name_name_25;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    static struct Nuitka_FrameObject *cache_frame_5c39c0354ed1a02a762d205c29963fd9_2 = NULL;

    struct Nuitka_FrameObject *frame_5c39c0354ed1a02a762d205c29963fd9_2;

    static struct Nuitka_FrameObject *cache_frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 = NULL;

    struct Nuitka_FrameObject *frame_58fb9c5e04966e9f6bf019f9ff6d399f_3;

    struct Nuitka_FrameObject *frame_adae3102f0655d285d0ec2e5155f50b4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_requests$adapters_82 = NULL;
    PyObject *locals_requests$adapters_53 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_583f837ef2184e324997463a2ea927a1;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f31b5910f8f74c678e204b480ba48975;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_adae3102f0655d285d0ec2e5155f50b4 = MAKE_MODULE_FRAME( codeobj_adae3102f0655d285d0ec2e5155f50b4, module_requests$adapters );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_adae3102f0655d285d0ec2e5155f50b4 );
    assert( Py_REFCNT( frame_adae3102f0655d285d0ec2e5155f50b4 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_e399ba4554180f37de594a6743234f17;
    tmp_globals_name_1 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 11;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_socket;
    tmp_globals_name_2 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 12;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
    tmp_globals_name_3 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
    tmp_level_name_3 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 14;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PoolManager );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_7 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_proxy_from_url );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_8 );
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

    tmp_name_name_4 = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
    tmp_globals_name_4 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_HTTPResponse_tuple;
    tmp_level_name_4 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 15;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HTTPResponse );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_9 );
    tmp_name_name_5 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    tmp_globals_name_5 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_parse_url_tuple;
    tmp_level_name_5 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 16;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_parse_url );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_10 );
    tmp_name_name_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
    tmp_globals_name_6 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Timeout_tuple;
    tmp_level_name_6 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 17;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Timeout );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce, tmp_assign_source_11 );
    tmp_name_name_7 = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
    tmp_globals_name_7 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Retry_tuple;
    tmp_level_name_7 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 18;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Retry );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_12 );
    tmp_name_name_8 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_8 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_ClosedPoolError_tuple;
    tmp_level_name_8 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 19;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ClosedPoolError );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_13 );
    tmp_name_name_9 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_9 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_ConnectTimeoutError_tuple;
    tmp_level_name_9 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 20;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ConnectTimeoutError );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_14 );
    tmp_name_name_10 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_10 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_HTTPError_tuple;
    tmp_level_name_10 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 21;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_HTTPError );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__HTTPError, tmp_assign_source_15 );
    tmp_name_name_11 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_11 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_MaxRetryError_tuple;
    tmp_level_name_11 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 22;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_MaxRetryError );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_16 );
    tmp_name_name_12 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_12 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_NewConnectionError_tuple;
    tmp_level_name_12 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 23;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_NewConnectionError );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_17 );
    tmp_name_name_13 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_13 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_ProxyError_tuple;
    tmp_level_name_13 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 24;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_ProxyError );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError, tmp_assign_source_18 );
    tmp_name_name_14 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_14 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_ProtocolError_tuple;
    tmp_level_name_14 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 25;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_ProtocolError );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_19 );
    tmp_name_name_15 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_15 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_ReadTimeoutError_tuple;
    tmp_level_name_15 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 26;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ReadTimeoutError );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_20 );
    tmp_name_name_16 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_16 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_str_plain_SSLError_tuple;
    tmp_level_name_16 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 27;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_SSLError );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError, tmp_assign_source_21 );
    tmp_name_name_17 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
    tmp_globals_name_17 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_str_plain_ResponseError_tuple;
    tmp_level_name_17 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 28;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ResponseError );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_22 );
    tmp_name_name_18 = const_str_plain_models;
    tmp_globals_name_18 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_Response_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 30;
    tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_17 ) )
    {
       tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_17,
            (PyObject *)MODULE_DICT(tmp_import_name_from_17),
            const_str_plain_Response,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_Response );
    }

    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Response, tmp_assign_source_23 );
    tmp_name_name_19 = const_str_plain_compat;
    tmp_globals_name_19 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_19 = Py_None;
    tmp_fromlist_name_19 = const_tuple_str_plain_urlparse_str_plain_basestring_tuple;
    tmp_level_name_19 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 31;
    tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_24;

    // Tried code:
    tmp_import_name_from_18 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    if ( PyModule_Check( tmp_import_name_from_18 ) )
    {
       tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_18,
            (PyObject *)MODULE_DICT(tmp_import_name_from_18),
            const_str_plain_urlparse,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_urlparse );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_25 );
    tmp_import_name_from_19 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    if ( PyModule_Check( tmp_import_name_from_19 ) )
    {
       tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_19,
            (PyObject *)MODULE_DICT(tmp_import_name_from_19),
            const_str_plain_basestring,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_basestring );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_26 );
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

    tmp_name_name_20 = const_str_plain_utils;
    tmp_globals_name_20 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_20 = Py_None;
    tmp_fromlist_name_20 = const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple;
    tmp_level_name_20 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 32;
    tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_27;

    // Tried code:
    tmp_import_name_from_20 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    if ( PyModule_Check( tmp_import_name_from_20 ) )
    {
       tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_20,
            (PyObject *)MODULE_DICT(tmp_import_name_from_20),
            const_str_plain_DEFAULT_CA_BUNDLE_PATH,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_DEFAULT_CA_BUNDLE_PATH );
    }

    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH, tmp_assign_source_28 );
    tmp_import_name_from_21 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    if ( PyModule_Check( tmp_import_name_from_21 ) )
    {
       tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_21,
            (PyObject *)MODULE_DICT(tmp_import_name_from_21),
            const_str_plain_extract_zipped_paths,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_extract_zipped_paths );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths, tmp_assign_source_29 );
    tmp_import_name_from_22 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    if ( PyModule_Check( tmp_import_name_from_22 ) )
    {
       tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_22,
            (PyObject *)MODULE_DICT(tmp_import_name_from_22),
            const_str_plain_get_encoding_from_headers,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_get_encoding_from_headers );
    }

    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers, tmp_assign_source_30 );
    tmp_import_name_from_23 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    if ( PyModule_Check( tmp_import_name_from_23 ) )
    {
       tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_23,
            (PyObject *)MODULE_DICT(tmp_import_name_from_23),
            const_str_plain_prepend_scheme_if_needed,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_prepend_scheme_if_needed );
    }

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed, tmp_assign_source_31 );
    tmp_import_name_from_24 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    if ( PyModule_Check( tmp_import_name_from_24 ) )
    {
       tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_24,
            (PyObject *)MODULE_DICT(tmp_import_name_from_24),
            const_str_plain_get_auth_from_url,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_get_auth_from_url );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url, tmp_assign_source_32 );
    tmp_import_name_from_25 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    if ( PyModule_Check( tmp_import_name_from_25 ) )
    {
       tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_25,
            (PyObject *)MODULE_DICT(tmp_import_name_from_25),
            const_str_plain_urldefragauth,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_urldefragauth );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urldefragauth, tmp_assign_source_33 );
    tmp_import_name_from_26 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    if ( PyModule_Check( tmp_import_name_from_26 ) )
    {
       tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_26,
            (PyObject *)MODULE_DICT(tmp_import_name_from_26),
            const_str_plain_select_proxy,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_select_proxy );
    }

    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy, tmp_assign_source_34 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_21 = const_str_plain_structures;
    tmp_globals_name_21 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_21 = Py_None;
    tmp_fromlist_name_21 = const_tuple_str_plain_CaseInsensitiveDict_tuple;
    tmp_level_name_21 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 35;
    tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_27 ) )
    {
       tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_27,
            (PyObject *)MODULE_DICT(tmp_import_name_from_27),
            const_str_plain_CaseInsensitiveDict,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_CaseInsensitiveDict );
    }

    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict, tmp_assign_source_35 );
    tmp_name_name_22 = const_str_plain_cookies;
    tmp_globals_name_22 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_22 = Py_None;
    tmp_fromlist_name_22 = const_tuple_str_plain_extract_cookies_to_jar_tuple;
    tmp_level_name_22 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 36;
    tmp_import_name_from_28 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22 );
    if ( tmp_import_name_from_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_28 ) )
    {
       tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_28,
            (PyObject *)MODULE_DICT(tmp_import_name_from_28),
            const_str_plain_extract_cookies_to_jar,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_extract_cookies_to_jar );
    }

    Py_DECREF( tmp_import_name_from_28 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_36 );
    tmp_name_name_23 = const_str_plain_exceptions;
    tmp_globals_name_23 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_23 = Py_None;
    tmp_fromlist_name_23 = const_tuple_819605963d0355a74029d7c6ed0c5931_tuple;
    tmp_level_name_23 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 37;
    tmp_assign_source_37 = IMPORT_MODULE5( tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_23 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_37;

    // Tried code:
    tmp_import_name_from_29 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    if ( PyModule_Check( tmp_import_name_from_29 ) )
    {
       tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_29,
            (PyObject *)MODULE_DICT(tmp_import_name_from_29),
            const_str_plain_ConnectionError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_ConnectionError );
    }

    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_38 );
    tmp_import_name_from_30 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    if ( PyModule_Check( tmp_import_name_from_30 ) )
    {
       tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_30,
            (PyObject *)MODULE_DICT(tmp_import_name_from_30),
            const_str_plain_ConnectTimeout,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_ConnectTimeout );
    }

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_39 );
    tmp_import_name_from_31 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    if ( PyModule_Check( tmp_import_name_from_31 ) )
    {
       tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_31,
            (PyObject *)MODULE_DICT(tmp_import_name_from_31),
            const_str_plain_ReadTimeout,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_ReadTimeout );
    }

    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_40 );
    tmp_import_name_from_32 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    if ( PyModule_Check( tmp_import_name_from_32 ) )
    {
       tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_32,
            (PyObject *)MODULE_DICT(tmp_import_name_from_32),
            const_str_plain_SSLError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_SSLError );
    }

    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_41 );
    tmp_import_name_from_33 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_33 );
    if ( PyModule_Check( tmp_import_name_from_33 ) )
    {
       tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_33,
            (PyObject *)MODULE_DICT(tmp_import_name_from_33),
            const_str_plain_ProxyError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_ProxyError );
    }

    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_42 );
    tmp_import_name_from_34 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_34 );
    if ( PyModule_Check( tmp_import_name_from_34 ) )
    {
       tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_34,
            (PyObject *)MODULE_DICT(tmp_import_name_from_34),
            const_str_plain_RetryError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_RetryError );
    }

    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_43 );
    tmp_import_name_from_35 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_35 );
    if ( PyModule_Check( tmp_import_name_from_35 ) )
    {
       tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_35,
            (PyObject *)MODULE_DICT(tmp_import_name_from_35),
            const_str_plain_InvalidSchema,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_InvalidSchema );
    }

    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_44 );
    tmp_import_name_from_36 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_36 );
    if ( PyModule_Check( tmp_import_name_from_36 ) )
    {
       tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_36,
            (PyObject *)MODULE_DICT(tmp_import_name_from_36),
            const_str_plain_InvalidProxyURL,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_InvalidProxyURL );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_45 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_24 = const_str_plain_auth;
    tmp_globals_name_24 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_24 = Py_None;
    tmp_fromlist_name_24 = const_tuple_str_plain__basic_auth_str_tuple;
    tmp_level_name_24 = const_int_pos_1;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 39;
    tmp_import_name_from_37 = IMPORT_MODULE5( tmp_name_name_24, tmp_globals_name_24, tmp_locals_name_24, tmp_fromlist_name_24, tmp_level_name_24 );
    if ( tmp_import_name_from_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_37 ) )
    {
       tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_37,
            (PyObject *)MODULE_DICT(tmp_import_name_from_37),
            const_str_plain__basic_auth_str,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain__basic_auth_str );
    }

    Py_DECREF( tmp_import_name_from_37 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_46 );
    // Tried code:
    tmp_name_name_25 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
    tmp_globals_name_25 = (PyObject *)moduledict_requests$adapters;
    tmp_locals_name_25 = Py_None;
    tmp_fromlist_name_25 = const_tuple_str_plain_SOCKSProxyManager_tuple;
    tmp_level_name_25 = const_int_0;
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 42;
    tmp_import_name_from_38 = IMPORT_MODULE5( tmp_name_name_25, tmp_globals_name_25, tmp_locals_name_25, tmp_fromlist_name_25, tmp_level_name_25 );
    if ( tmp_import_name_from_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_SOCKSProxyManager );
    Py_DECREF( tmp_import_name_from_38 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_47 );
    goto try_end_5;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_adae3102f0655d285d0ec2e5155f50b4, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_adae3102f0655d285d0ec2e5155f50b4, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_6;
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
    tmp_assign_source_48 = MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager(  );
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_48 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 41;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_adae3102f0655d285d0ec2e5155f50b4->m_frame) frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    tmp_assign_source_49 = Py_False;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK, tmp_assign_source_49 );
    tmp_assign_source_50 = const_int_pos_10;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE, tmp_assign_source_50 );
    tmp_assign_source_51 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES, tmp_assign_source_51 );
    tmp_assign_source_52 = Py_None;
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT, tmp_assign_source_52 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_53 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_53;

    tmp_assign_source_54 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_54;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
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


        exception_lineno = 53;

        goto try_except_handler_7;
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


        exception_lineno = 53;

        goto try_except_handler_7;
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


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_55;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_3 == 1 )
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


        exception_lineno = 53;

        goto try_except_handler_7;
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


        exception_lineno = 53;

        goto try_except_handler_7;
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


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    tmp_tuple_element_1 = const_str_plain_BaseAdapter;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 53;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_7;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_56 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_56;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$adapters_53 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_plain_BaseAdapter;
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_9;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_5c39c0354ed1a02a762d205c29963fd9_2, codeobj_5c39c0354ed1a02a762d205c29963fd9, module_requests$adapters, sizeof(void *) );
    frame_5c39c0354ed1a02a762d205c29963fd9_2 = cache_frame_5c39c0354ed1a02a762d205c29963fd9_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c39c0354ed1a02a762d205c29963fd9_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c39c0354ed1a02a762d205c29963fd9_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_2___init__(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_1 = const_tuple_false_none_true_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_3_send( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain_send, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_4_close(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain_close, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c39c0354ed1a02a762d205c29963fd9_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c39c0354ed1a02a762d205c29963fd9_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c39c0354ed1a02a762d205c29963fd9_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c39c0354ed1a02a762d205c29963fd9_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c39c0354ed1a02a762d205c29963fd9_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c39c0354ed1a02a762d205c29963fd9_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_5c39c0354ed1a02a762d205c29963fd9_2 == cache_frame_5c39c0354ed1a02a762d205c29963fd9_2 )
    {
        Py_DECREF( frame_5c39c0354ed1a02a762d205c29963fd9_2 );
    }
    cache_frame_5c39c0354ed1a02a762d205c29963fd9_2 = NULL;

    assertFrameObject( frame_5c39c0354ed1a02a762d205c29963fd9_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_9;
    skip_nested_handling_1:;
    tmp_compare_left_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_9;
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
    tmp_dictset_value = const_tuple_type_object_tuple;
    tmp_res = PyObject_SetItem( locals_requests$adapters_53, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_9;
    }
    branch_no_3:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain_BaseAdapter;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_requests$adapters_53;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 53;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto try_except_handler_9;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_58;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_requests$adapters_53 );
    locals_requests$adapters_53 = NULL;
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

    Py_DECREF( locals_requests$adapters_53 );
    locals_requests$adapters_53 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 53;
    goto try_except_handler_7;
    outline_result_1:;
    tmp_assign_source_57 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter, tmp_assign_source_57 );
    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseAdapter );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseAdapter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;

        goto try_except_handler_10;
    }

    tmp_assign_source_59 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_59, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_59;

    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_60 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_60;

    tmp_assign_source_61 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_61;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
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


        exception_lineno = 82;

        goto try_except_handler_10;
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


        exception_lineno = 82;

        goto try_except_handler_10;
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


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_62 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_62;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    branch_no_4:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
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


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    tmp_tuple_element_4 = const_str_plain_HTTPAdapter;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 82;
    tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_10;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_63 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_63;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_requests$adapters_82 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_digest_19fdcf2df08a408493d23f0c1c422714;
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain_HTTPAdapter;
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_12;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_58fb9c5e04966e9f6bf019f9ff6d399f_3, codeobj_58fb9c5e04966e9f6bf019f9ff6d399f, module_requests$adapters, sizeof(void *) );
    frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 = cache_frame_58fb9c5e04966e9f6bf019f9ff6d399f_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = LIST_COPY( const_list_b210aeadbd087eaaf628d5f4d13acd25_list );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___attrs__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_tuple_element_5 = PyObject_GetItem( locals_requests$adapters_82, const_str_plain_DEFAULT_POOLSIZE );

    if ( tmp_tuple_element_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );

        if (unlikely( tmp_tuple_element_5 == NULL ))
        {
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );
        }

        if ( tmp_tuple_element_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_POOLSIZE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_defaults_2 = PyTuple_New( 4 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = PyObject_GetItem( locals_requests$adapters_82, const_str_plain_DEFAULT_POOLSIZE );

    if ( tmp_tuple_element_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );

        if (unlikely( tmp_tuple_element_5 == NULL ))
        {
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );
        }

        if ( tmp_tuple_element_5 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_POOLSIZE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = PyObject_GetItem( locals_requests$adapters_82, const_str_plain_DEFAULT_RETRIES );

    if ( tmp_tuple_element_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );

        if (unlikely( tmp_tuple_element_5 == NULL ))
        {
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );
        }

        if ( tmp_tuple_element_5 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_RETRIES" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_5 );
    tmp_tuple_element_5 = PyObject_GetItem( locals_requests$adapters_82, const_str_plain_DEFAULT_POOLBLOCK );

    if ( tmp_tuple_element_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );

        if (unlikely( tmp_tuple_element_5 == NULL ))
        {
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );
        }

        if ( tmp_tuple_element_5 == NULL )
        {
            Py_DECREF( tmp_defaults_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_POOLBLOCK" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_5 );
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_5___init__( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_6___getstate__(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___getstate__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_7___setstate__(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___setstate__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_tuple_element_6 = PyObject_GetItem( locals_requests$adapters_82, const_str_plain_DEFAULT_POOLBLOCK );

    if ( tmp_tuple_element_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );

        if (unlikely( tmp_tuple_element_6 == NULL ))
        {
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );
        }

        if ( tmp_tuple_element_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_POOLBLOCK" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_defaults_3 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_6 );
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_init_poolmanager, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_proxy_manager_for, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_cert_verify, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_11_build_response(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_build_response, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_12_get_connection( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_get_connection, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_13_close(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_close, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_14_request_url(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_request_url, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_15_add_headers(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_add_headers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers(  );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_proxy_headers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_defaults_5 = const_tuple_false_none_true_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_17_send( tmp_defaults_5 );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain_send, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58fb9c5e04966e9f6bf019f9ff6d399f_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58fb9c5e04966e9f6bf019f9ff6d399f_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58fb9c5e04966e9f6bf019f9ff6d399f_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 == cache_frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 )
    {
        Py_DECREF( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 );
    }
    cache_frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 = NULL;

    assertFrameObject( frame_58fb9c5e04966e9f6bf019f9ff6d399f_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_12;
    skip_nested_handling_2:;
    tmp_compare_left_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_12;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictset_value = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_requests$adapters_82, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_12;
    }
    branch_no_5:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_7 = const_str_plain_HTTPAdapter;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_requests$adapters_82;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_7 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_adae3102f0655d285d0ec2e5155f50b4->m_frame.f_lineno = 82;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto try_except_handler_12;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_65;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_requests$adapters_82 );
    locals_requests$adapters_82 = NULL;
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

    Py_DECREF( locals_requests$adapters_82 );
    locals_requests$adapters_82 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
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

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 82;
    goto try_except_handler_10;
    outline_result_2:;
    tmp_assign_source_64 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPAdapter, tmp_assign_source_64 );
    goto try_end_8;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adae3102f0655d285d0ec2e5155f50b4 );
#endif
    popFrameStack();

    assertFrameObject( frame_adae3102f0655d285d0ec2e5155f50b4 );

    goto frame_no_exception_3;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adae3102f0655d285d0ec2e5155f50b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adae3102f0655d285d0ec2e5155f50b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adae3102f0655d285d0ec2e5155f50b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adae3102f0655d285d0ec2e5155f50b4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
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


    return MOD_RETURN_VALUE( module_requests$adapters );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
