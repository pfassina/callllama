/* Generated code for Python source for module 'urllib3.response'
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

/* The _module_urllib3$response is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$response;
PyDictObject *moduledict_urllib3$response;

/* The module constants used, if any. */
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_3cd0a7aaf12d4cbd86fc72d422b326f4;
extern PyObject *const_str_plain_redirect_location;
extern PyObject *const_str_plain_decode_content;
extern PyObject *const_str_digest_c1505752b742bcc86d58c19fdc1683b9;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_05a4d60a37e27e282d01db144681b237;
static PyObject *const_str_digest_db4856f755729d4e70f8bd5ec95c6022;
static PyObject *const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_a4b32799dc86145fd28c19bf16dfae94;
static PyObject *const_str_plain_length_remaining;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_contextlib;
extern PyObject *const_str_plain_timeout;
static PyObject *const_str_plain__body;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_closed;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple;
static PyObject *const_str_plain_clean_exit;
static PyObject *const_str_digest_8a73745eea869768cd9140b80d6ca0f2;
static PyObject *const_str_plain_decompress;
static PyObject *const_str_digest_cda89e76498b26a9b99e78acdb5ae71a;
extern PyObject *const_str_plain_ResponseNotChunked;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_zlib;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_cb873235ac08e193dd8508bec45d5244;
extern PyObject *const_str_plain_HTTPHeaderDict;
extern PyObject *const_str_plain_contextmanager;
static PyObject *const_str_plain_unused_data;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_2e2286628c2b62845dcf2a36aaa7e003;
static PyObject *const_tuple_int_pos_204_int_pos_304_tuple;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_6fceb2e9778412869b1de7adcdb00cc8;
extern PyObject *const_str_plain_buf;
extern PyObject *const_int_0;
static PyObject *const_str_digest_65095c3b5746599c303dcd768114424e;
extern PyObject *const_str_plain__original_response;
static PyObject *const_str_plain_returned_chunk;
static PyObject *const_str_plain__handle_chunk;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_ea4b62466195fef8b8ddcd0c7826eaa9;
static PyObject *const_tuple_9fa9568895804a7753861ccda2e19199_tuple;
extern PyObject *const_str_plain_location;
extern PyObject *const_str_plain_preload_content;
extern PyObject *const_int_pos_200;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_1f64a2a37be979fe0ed3e7082c84bdaa;
static PyObject *const_str_plain_response_kw;
extern PyObject *const_str_plain___cached__;
static PyObject *const_int_pos_301;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_basestring;
static PyObject *const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_geturl;
extern PyObject *const_int_pos_303;
static PyObject *const_tuple_str_plain_self_str_plain_line_tuple;
static PyObject *const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_getheaders;
static PyObject *const_str_digest_78d65665335b4950719b749c8c89ab2e;
static PyObject *const_tuple_none_none_false_tuple;
extern PyObject *const_str_plain__pool;
static PyObject *const_tuple_str_plain_error_tuple;
extern PyObject *const_str_plain_property;
extern PyObject *const_tuple_str_plain_http_client_tuple;
static PyObject *const_str_plain_decompressed;
static PyObject *const_str_digest_c8ff5d424f314362910cdc3925efebad;
static PyObject *const_str_plain_SWALLOW_DATA;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__first_try;
static PyObject *const_str_plain__flush_decoder;
static PyObject *const_str_plain_chunk_left;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *const_str_digest_2648b5bd42dd7c576e30b42f1dfac980;
extern PyObject *const_str_plain_strip;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_decompressed_tuple;
static PyObject *const_tuple_str_plain_timeout_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_10dc4f6350eb95940f03ae6deabaf45f;
static PyObject *const_tuple_str_plain_location_tuple;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_lower;
static PyObject *const_dict_90fe9e732780015bb58f5feb577b3482;
static PyObject *const_str_digest_b08fa2794dd0e587ae66283a5c657e3e;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain__fp;
static PyObject *const_str_digest_4e55d239932ed40bbefd05b906f761e7;
static PyObject *const_str_plain_REDIRECT_STATUSES;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_a27eb7f5f7e2992428b2eebafb617831;
static PyObject *const_tuple_str_digest_58d55cc0c39ccfcef76de1f9740cddf4_tuple;
extern PyObject *const_str_plain_e;
static PyObject *const_str_digest_1caf96096db3a96651d717471b2ac767;
static PyObject *const_str_digest_8ca2ca2ee47de1fab1e2c556650bed47;
extern PyObject *const_str_plain_pool;
static PyObject *const_int_pos_307;
static PyObject *const_str_plain_OTHER_MEMBERS;
extern PyObject *const_str_plain_retries;
static PyObject *const_tuple_int_pos_65536_none_tuple;
static PyObject *const_tuple_bytes_chr_59_int_pos_1_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_decompressobj;
static PyObject *const_str_digest_d255455dca89984a7a880379cd01bd4d;
static PyObject *const_str_plain_read_chunked;
extern PyObject *const_int_pos_304;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_ReadTimeoutError;
static PyObject *const_str_digest_a0ca0f184ab75a015f69c992cdb800dc;
static PyObject *const_str_digest_c612070bdb21597f6b5d1919b6538c69;
static PyObject *const_str_plain__fp_bytes_read;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_from_httplib;
static PyObject *const_str_plain__update_chunk_length;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain_gzip;
static PyObject *const_str_digest_67fc44cf811e69ed10c4b2dfd2549d69;
static PyObject *const_str_plain_cache_content;
static PyObject *const_str_digest_3979e03e0d636e27d8391b0821ebf600;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain__decoder;
static PyObject *const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple;
extern PyObject *const_str_plain_chunked;
static PyObject *const_bytes_chr_59;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain__put_conn;
static PyObject *const_str_plain__init_decoder;
static PyObject *const_str_plain_previous_state;
static PyObject *const_str_digest_db51a9f73f100ec22d319265c4417c10;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_digest_f27d3abdf015e152802dfedf1003be0a;
extern PyObject *const_str_plain_deflate;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_30397cc2c1e81aae39ec08695d56db59;
static PyObject *const_str_plain_enforce_content_length;
static PyObject *const_str_digest_29d37c1d46a20191bf94046329f93ba2;
static PyObject *const_str_digest_9ce8bb5871d1a4a4875d7d719702c4d8;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_enc_tuple;
static PyObject *const_str_plain_readinto;
extern PyObject *const_str_plain_version;
static PyObject *const_tuple_96d72610c38544a632969d334c5f37f3_tuple;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_0e168b7bd3791a80963c46d1774ad183;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_http_client;
static PyObject *const_str_digest_4252ceb9f3d27c7725ea35f39664c406;
static PyObject *const_str_plain_temp;
static PyObject *const_tuple_str_plain_val_tuple;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_plain_readline;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
static PyObject *const_tuple_str_plain_self_str_plain_content_encoding_tuple;
extern PyObject *const_str_plain_BodyNotHttplibCompatible;
extern PyObject *const_str_plain_classmethod;
static PyObject *const_str_plain_content_encoding;
extern PyObject *const_str_plain_flush;
static PyObject *const_str_plain_amt;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_tr_enc;
static PyObject *const_str_plain__request_url;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___getattr__;
static PyObject *const_tuple_str_digest_a0ca0f184ab75a015f69c992cdb800dc_tuple;
static PyObject *const_str_digest_d186d35140b6e607ac0c8b2c63fdeb29;
static PyObject *const_str_digest_03ab59cc4b02965b81f2960ba3242a80;
static PyObject *const_str_digest_fbf9dc1a6ef4e117091b904d08084ea2;
static PyObject *const_str_digest_228bd71510125698bfd3916924a48c8a;
extern PyObject *const_str_plain_getheader;
extern PyObject *const_str_plain_tell;
static PyObject *const_tuple_str_plain_contextmanager_tuple;
static PyObject *const_str_plain_CONTENT_DECODERS;
static PyObject *const_tuple_str_plain_HTTPException_str_plain_BaseSSLError_tuple;
extern PyObject *const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_dc6e1bc5c5d41f5446ae6509fcb24069;
extern PyObject *const_str_plain_stream;
static PyObject *const_tuple_str_digest_80cf594c6b193676cb3f905f65b5d391_str_empty_tuple;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_31d64d3b8ec974c2917fdf1564a2fb00;
static PyObject *const_str_digest_5b822072613297976c8a6e8c4235d2b7;
static PyObject *const_tuple_str_digest_6fceb2e9778412869b1de7adcdb00cc8_tuple;
static PyObject *const_str_digest_563a5c1e73e73d543e7c4f1e0d7b34c2;
extern PyObject *const_str_plain_request_method;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
static PyObject *const_str_plain__obj;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple;
static PyObject *const_str_plain_GzipDecoderState;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_decoded;
extern PyObject *const_str_plain_chunk;
static PyObject *const_str_plain_IOBase;
static PyObject *const_str_digest_0e97f13bdd35179a3f7d47396e0b1e10;
extern PyObject *const_str_plain_isclosed;
static PyObject *const_tuple_421629008192601d4f350b75577ee96e_tuple;
extern PyObject *const_str_plain_SocketTimeout;
static PyObject *const_str_digest_4314cfcdf7e269d83c4b3bffa1766fb2;
static PyObject *const_str_digest_7dc2f4ce825c1d3f2d7ba96801786100;
extern PyObject *const_str_plain_is_fp_closed;
static PyObject *const_str_digest_5141c13fc1586905d04453154b9d176e;
extern PyObject *const_str_plain__state;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain__connection;
extern PyObject *const_str_plain_DecodeError;
extern PyObject *const_str_plain_resp;
extern PyObject *const_str_plain_logging;
static PyObject *const_tuple_str_digest_db51a9f73f100ec22d319265c4417c10_tuple;
extern PyObject *const_tuple_bytes_empty_tuple;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain__error_catcher;
static PyObject *const_tuple_730760646a8d9700be00732810f68de5_tuple;
extern PyObject *const_str_digest_80cf594c6b193676cb3f905f65b5d391;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_binary_type;
static PyObject *const_str_digest_b5c9f811929a87965e12501a2faee8ba;
extern PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
extern PyObject *const_str_plain_is_response_to_head;
static PyObject *const_int_pos_308;
extern PyObject *const_str_plain_items;
static PyObject *const_tuple_str_plain_string_types_str_plain_binary_type_str_plain_PY3_tuple;
static PyObject *const_str_digest_1b8dece73d968b5d28e63e5e9c8d807d;
static PyObject *const_str_digest_a62b7cff9fd4ca2a8eaad598860048c0;
extern PyObject *const_str_plain_get_redirect_location;
static PyObject *const_int_pos_204;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_plain_enc;
static PyObject *const_str_digest_08df6de959dae9d1c247c2ab041993af;
extern PyObject *const_tuple_str_plain_self_str_plain_buf_tuple;
static PyObject *const_tuple_str_plain_mode_tuple;
static PyObject *const_str_digest_7b5ed3a84f13afcdc926db62ca8eb81a;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_fp;
static PyObject *const_str_digest_41400538e345345240c20cdf5e2aa1d8;
extern PyObject *const_str_plain_release_conn;
static PyObject *const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple;
static PyObject *const_str_plain_FIRST_MEMBER;
static PyObject *const_tuple_int_0_none_tuple;
static PyObject *const_str_digest_b5074ac92dc72b508f7b239b36f07471;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_HTTPException;
static PyObject *const_str_digest_d0590bcd4a83d66ed17deb5c9e144342;
static PyObject *const_str_plain_MAX_WBITS;
static PyObject *const_str_digest_db6e0943ac580bf4379ef7b63d32405e;
static PyObject *const_str_digest_3375b08dee8bfdec0bb39402913b81e2;
extern PyObject *const_str_plain_request_url;
static PyObject *const_tuple_str_digest_a62b7cff9fd4ca2a8eaad598860048c0_str_empty_tuple;
extern PyObject *const_str_plain_line;
static PyObject *const_str_digest_eda91d08436b3150bb02a95e4966d1a0;
static PyObject *const_str_plain_readable;
static PyObject *const_str_plain__safe_read;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_b1f5bc498322609af46e729204a25f6d;
static PyObject *const_str_plain_DeflateDecoder;
extern PyObject *const_str_plain_strict;
static PyObject *const_tuple_str_plain_self_str_plain_b_str_plain_temp_tuple;
extern PyObject *const_str_plain_HTTPResponse;
static PyObject *const_str_plain_flush_decoder;
extern PyObject *const_str_plain_ResponseCls;
static PyObject *const_str_plain__init_length;
static PyObject *const_tuple_str_plain_is_fp_closed_str_plain_is_response_to_head_tuple;
static PyObject *const_str_digest_92153a55ef2b1eb7542a2c7a044d6cbb;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_int_pos_302;
extern PyObject *const_str_plain_encodings;
extern PyObject *const_bytes_empty;
static PyObject *const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple;
extern PyObject *const_str_plain_HEAD;
static PyObject *const_str_digest_18d49cb45ca224d6652f6f1e7b400776;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_d4b2db23198f04d1f231f704f98ddea3;
extern PyObject *const_str_plain__collections;
static PyObject *const_str_digest_e955e200ce7076f63dbfb9e11568aad1;
static PyObject *const_tuple_str_plain_self_str_plain_clean_exit_str_plain_e_tuple;
static PyObject *const_str_plain_original_response;
extern PyObject *const_str_plain_IncompleteRead;
static PyObject *const_str_plain__get_decoder;
static PyObject *const_str_digest_5c256aa147815cb63972929236f4cfd3;
extern PyObject *const_str_plain_BaseSSLError;
extern PyObject *const_str_plain_history;
static PyObject *const_str_plain_GzipDecoder;
static PyObject *const_str_digest_cd1b25485799fd6d9f2633cd175ed03c;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_supports_chunked_reads;
extern PyObject *const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
extern PyObject *const_str_plain_httplib;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_lengths;
static PyObject *const_str_plain__decode;
static PyObject *const_tuple_str_digest_8a73745eea869768cd9140b80d6ca0f2_tuple;
extern PyObject *const_int_pos_65536;
extern PyObject *const_str_plain__data;
static PyObject *const_list_str_plain_gzip_str_plain_deflate_list;
static PyObject *const_str_digest_f7b5c3ce3f21d2c936332c7ea87d4366;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_3cd0a7aaf12d4cbd86fc72d422b326f4 = UNSTREAM_STRING( &constant_bin[ 917796 ], 19, 0 );
    const_str_digest_05a4d60a37e27e282d01db144681b237 = UNSTREAM_STRING( &constant_bin[ 917815 ], 60, 0 );
    const_str_digest_db4856f755729d4e70f8bd5ec95c6022 = UNSTREAM_STRING( &constant_bin[ 917875 ], 21, 0 );
    const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 0, const_str_plain_ResponseCls ); Py_INCREF( const_str_plain_ResponseCls );
    PyTuple_SET_ITEM( const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_response_kw = UNSTREAM_STRING( &constant_bin[ 881704 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 2, const_str_plain_response_kw ); Py_INCREF( const_str_plain_response_kw );
    PyTuple_SET_ITEM( const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 4, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 5, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    const_str_digest_a4b32799dc86145fd28c19bf16dfae94 = UNSTREAM_STRING( &constant_bin[ 917896 ], 18, 0 );
    const_str_plain_length_remaining = UNSTREAM_STRING( &constant_bin[ 917914 ], 16, 1 );
    const_str_plain__body = UNSTREAM_STRING( &constant_bin[ 807202 ], 5, 1 );
    const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple, 2, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_previous_state = UNSTREAM_STRING( &constant_bin[ 917930 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple, 3, const_str_plain_previous_state ); Py_INCREF( const_str_plain_previous_state );
    const_str_plain_clean_exit = UNSTREAM_STRING( &constant_bin[ 881747 ], 10, 1 );
    const_str_digest_8a73745eea869768cd9140b80d6ca0f2 = UNSTREAM_STRING( &constant_bin[ 917944 ], 210, 0 );
    const_str_plain_decompress = UNSTREAM_STRING( &constant_bin[ 918154 ], 10, 1 );
    const_str_digest_cda89e76498b26a9b99e78acdb5ae71a = UNSTREAM_STRING( &constant_bin[ 918164 ], 79, 0 );
    const_str_plain_zlib = UNSTREAM_STRING( &constant_bin[ 918243 ], 4, 1 );
    const_str_digest_cb873235ac08e193dd8508bec45d5244 = UNSTREAM_STRING( &constant_bin[ 918247 ], 25, 0 );
    const_str_plain_unused_data = UNSTREAM_STRING( &constant_bin[ 918272 ], 11, 1 );
    const_str_digest_2e2286628c2b62845dcf2a36aaa7e003 = UNSTREAM_STRING( &constant_bin[ 918283 ], 219, 0 );
    const_tuple_int_pos_204_int_pos_304_tuple = PyTuple_New( 2 );
    const_int_pos_204 = PyLong_FromUnsignedLong( 204ul );
    PyTuple_SET_ITEM( const_tuple_int_pos_204_int_pos_304_tuple, 0, const_int_pos_204 ); Py_INCREF( const_int_pos_204 );
    PyTuple_SET_ITEM( const_tuple_int_pos_204_int_pos_304_tuple, 1, const_int_pos_304 ); Py_INCREF( const_int_pos_304 );
    const_str_digest_6fceb2e9778412869b1de7adcdb00cc8 = UNSTREAM_STRING( &constant_bin[ 918502 ], 72, 0 );
    const_str_digest_65095c3b5746599c303dcd768114424e = UNSTREAM_STRING( &constant_bin[ 918574 ], 33, 0 );
    const_str_plain_returned_chunk = UNSTREAM_STRING( &constant_bin[ 918607 ], 14, 1 );
    const_str_plain__handle_chunk = UNSTREAM_STRING( &constant_bin[ 918621 ], 13, 1 );
    const_str_digest_ea4b62466195fef8b8ddcd0c7826eaa9 = UNSTREAM_STRING( &constant_bin[ 918634 ], 25, 0 );
    const_tuple_9fa9568895804a7753861ccda2e19199_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9fa9568895804a7753861ccda2e19199_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_amt = UNSTREAM_STRING( &constant_bin[ 436234 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_9fa9568895804a7753861ccda2e19199_tuple, 1, const_str_plain_amt ); Py_INCREF( const_str_plain_amt );
    PyTuple_SET_ITEM( const_tuple_9fa9568895804a7753861ccda2e19199_tuple, 2, const_str_plain_decode_content ); Py_INCREF( const_str_plain_decode_content );
    PyTuple_SET_ITEM( const_tuple_9fa9568895804a7753861ccda2e19199_tuple, 3, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_9fa9568895804a7753861ccda2e19199_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_1f64a2a37be979fe0ed3e7082c84bdaa = UNSTREAM_STRING( &constant_bin[ 918659 ], 20, 0 );
    const_int_pos_301 = PyLong_FromUnsignedLong( 301ul );
    const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 0, const_str_plain_BodyNotHttplibCompatible ); Py_INCREF( const_str_plain_BodyNotHttplibCompatible );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 1, const_str_plain_ProtocolError ); Py_INCREF( const_str_plain_ProtocolError );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 2, const_str_plain_DecodeError ); Py_INCREF( const_str_plain_DecodeError );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 3, const_str_plain_ReadTimeoutError ); Py_INCREF( const_str_plain_ReadTimeoutError );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 4, const_str_plain_ResponseNotChunked ); Py_INCREF( const_str_plain_ResponseNotChunked );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 5, const_str_plain_IncompleteRead ); Py_INCREF( const_str_plain_IncompleteRead );
    PyTuple_SET_ITEM( const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple, 6, const_str_plain_InvalidHeader ); Py_INCREF( const_str_plain_InvalidHeader );
    const_tuple_str_plain_self_str_plain_line_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_line_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_line_tuple, 1, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list, 0, const_int_pos_301 ); Py_INCREF( const_int_pos_301 );
    const_int_pos_302 = PyLong_FromUnsignedLong( 302ul );
    PyList_SET_ITEM( const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list, 1, const_int_pos_302 ); Py_INCREF( const_int_pos_302 );
    PyList_SET_ITEM( const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list, 2, const_int_pos_303 ); Py_INCREF( const_int_pos_303 );
    const_int_pos_307 = PyLong_FromUnsignedLong( 307ul );
    PyList_SET_ITEM( const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list, 3, const_int_pos_307 ); Py_INCREF( const_int_pos_307 );
    const_int_pos_308 = PyLong_FromUnsignedLong( 308ul );
    PyList_SET_ITEM( const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list, 4, const_int_pos_308 ); Py_INCREF( const_int_pos_308 );
    const_str_digest_78d65665335b4950719b749c8c89ab2e = UNSTREAM_STRING( &constant_bin[ 918679 ], 26, 0 );
    const_tuple_none_none_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_error_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_error_tuple, 0, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_plain_decompressed = UNSTREAM_STRING( &constant_bin[ 918705 ], 12, 1 );
    const_str_digest_c8ff5d424f314362910cdc3925efebad = UNSTREAM_STRING( &constant_bin[ 918717 ], 23, 0 );
    const_str_plain_SWALLOW_DATA = UNSTREAM_STRING( &constant_bin[ 918740 ], 12, 1 );
    const_str_plain__first_try = UNSTREAM_STRING( &constant_bin[ 918752 ], 10, 1 );
    const_str_plain__flush_decoder = UNSTREAM_STRING( &constant_bin[ 918762 ], 14, 1 );
    const_str_plain_chunk_left = UNSTREAM_STRING( &constant_bin[ 918776 ], 10, 1 );
    const_str_digest_2648b5bd42dd7c576e30b42f1dfac980 = UNSTREAM_STRING( &constant_bin[ 918786 ], 25, 0 );
    const_tuple_str_plain_self_str_plain_data_str_plain_decompressed_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_decompressed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_decompressed_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_decompressed_tuple, 2, const_str_plain_decompressed ); Py_INCREF( const_str_plain_decompressed );
    const_tuple_str_plain_timeout_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_tuple, 0, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_str_digest_10dc4f6350eb95940f03ae6deabaf45f = UNSTREAM_STRING( &constant_bin[ 918811 ], 17, 0 );
    const_tuple_str_plain_location_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_location_tuple, 0, const_str_plain_location ); Py_INCREF( const_str_plain_location );
    const_dict_90fe9e732780015bb58f5feb577b3482 = _PyDict_NewPresized( 1 );
    const_str_plain_cache_content = UNSTREAM_STRING( &constant_bin[ 918828 ], 13, 1 );
    PyDict_SetItem( const_dict_90fe9e732780015bb58f5feb577b3482, const_str_plain_cache_content, Py_True );
    assert( PyDict_Size( const_dict_90fe9e732780015bb58f5feb577b3482 ) == 1 );
    const_str_digest_b08fa2794dd0e587ae66283a5c657e3e = UNSTREAM_STRING( &constant_bin[ 918841 ], 196, 0 );
    const_str_plain__fp = UNSTREAM_STRING( &constant_bin[ 919037 ], 3, 1 );
    const_str_digest_4e55d239932ed40bbefd05b906f761e7 = UNSTREAM_STRING( &constant_bin[ 919040 ], 231, 0 );
    const_str_plain_REDIRECT_STATUSES = UNSTREAM_STRING( &constant_bin[ 919271 ], 17, 1 );
    const_str_digest_a27eb7f5f7e2992428b2eebafb617831 = UNSTREAM_STRING( &constant_bin[ 919288 ], 268, 0 );
    const_tuple_str_digest_58d55cc0c39ccfcef76de1f9740cddf4_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_58d55cc0c39ccfcef76de1f9740cddf4_tuple, 0, const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4 ); Py_INCREF( const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4 );
    const_str_digest_1caf96096db3a96651d717471b2ac767 = UNSTREAM_STRING( &constant_bin[ 919556 ], 107, 0 );
    const_str_digest_8ca2ca2ee47de1fab1e2c556650bed47 = UNSTREAM_STRING( &constant_bin[ 919663 ], 25, 0 );
    const_str_plain_OTHER_MEMBERS = UNSTREAM_STRING( &constant_bin[ 919688 ], 13, 1 );
    const_tuple_int_pos_65536_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_65536_none_tuple, 0, const_int_pos_65536 ); Py_INCREF( const_int_pos_65536 );
    PyTuple_SET_ITEM( const_tuple_int_pos_65536_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_bytes_chr_59_int_pos_1_tuple = PyTuple_New( 2 );
    const_bytes_chr_59 = UNSTREAM_BYTES( &constant_bin[ 37159 ], 1 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_59_int_pos_1_tuple, 0, const_bytes_chr_59 ); Py_INCREF( const_bytes_chr_59 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_59_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_decompressobj = UNSTREAM_STRING( &constant_bin[ 919701 ], 13, 1 );
    const_str_digest_d255455dca89984a7a880379cd01bd4d = UNSTREAM_STRING( &constant_bin[ 919714 ], 21, 0 );
    const_str_plain_read_chunked = UNSTREAM_STRING( &constant_bin[ 894728 ], 12, 1 );
    const_str_digest_a0ca0f184ab75a015f69c992cdb800dc = UNSTREAM_STRING( &constant_bin[ 919735 ], 103, 0 );
    const_str_digest_c612070bdb21597f6b5d1919b6538c69 = UNSTREAM_STRING( &constant_bin[ 919838 ], 264, 0 );
    const_str_plain__fp_bytes_read = UNSTREAM_STRING( &constant_bin[ 920102 ], 14, 1 );
    const_str_plain__update_chunk_length = UNSTREAM_STRING( &constant_bin[ 918587 ], 20, 1 );
    const_str_digest_67fc44cf811e69ed10c4b2dfd2549d69 = UNSTREAM_STRING( &constant_bin[ 890164 ], 24, 0 );
    const_str_digest_3979e03e0d636e27d8391b0821ebf600 = UNSTREAM_STRING( &constant_bin[ 920116 ], 61, 0 );
    const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 1, const_str_plain_amt ); Py_INCREF( const_str_plain_amt );
    PyTuple_SET_ITEM( const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 2, const_str_plain_decode_content ); Py_INCREF( const_str_plain_decode_content );
    PyTuple_SET_ITEM( const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 3, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    PyTuple_SET_ITEM( const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 4, const_str_plain_decoded ); Py_INCREF( const_str_plain_decoded );
    PyTuple_SET_ITEM( const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 5, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    const_str_plain__init_decoder = UNSTREAM_STRING( &constant_bin[ 920177 ], 13, 1 );
    const_str_digest_db51a9f73f100ec22d319265c4417c10 = UNSTREAM_STRING( &constant_bin[ 828501 ], 14, 0 );
    const_str_digest_f27d3abdf015e152802dfedf1003be0a = UNSTREAM_STRING( &constant_bin[ 920190 ], 21, 0 );
    const_str_digest_30397cc2c1e81aae39ec08695d56db59 = UNSTREAM_STRING( &constant_bin[ 920211 ], 848, 0 );
    const_str_plain_enforce_content_length = UNSTREAM_STRING( &constant_bin[ 921059 ], 22, 1 );
    const_str_digest_29d37c1d46a20191bf94046329f93ba2 = UNSTREAM_STRING( &constant_bin[ 921081 ], 78, 0 );
    const_str_digest_9ce8bb5871d1a4a4875d7d719702c4d8 = UNSTREAM_STRING( &constant_bin[ 885985 ], 25, 0 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_enc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_enc_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    const_str_plain_enc = UNSTREAM_STRING( &constant_bin[ 19550 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_enc_tuple, 1, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    const_str_plain_readinto = UNSTREAM_STRING( &constant_bin[ 917888 ], 8, 1 );
    const_tuple_96d72610c38544a632969d334c5f37f3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_96d72610c38544a632969d334c5f37f3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_96d72610c38544a632969d334c5f37f3_tuple, 1, const_str_plain_request_method ); Py_INCREF( const_str_plain_request_method );
    PyTuple_SET_ITEM( const_tuple_96d72610c38544a632969d334c5f37f3_tuple, 2, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_plain_lengths = UNSTREAM_STRING( &constant_bin[ 921159 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_96d72610c38544a632969d334c5f37f3_tuple, 3, const_str_plain_lengths ); Py_INCREF( const_str_plain_lengths );
    PyTuple_SET_ITEM( const_tuple_96d72610c38544a632969d334c5f37f3_tuple, 4, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_str_digest_0e168b7bd3791a80963c46d1774ad183 = UNSTREAM_STRING( &constant_bin[ 921166 ], 26, 0 );
    const_str_digest_4252ceb9f3d27c7725ea35f39664c406 = UNSTREAM_STRING( &constant_bin[ 921192 ], 27, 0 );
    const_str_plain_temp = UNSTREAM_STRING( &constant_bin[ 387231 ], 4, 1 );
    const_tuple_str_plain_val_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_tuple, 0, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain_readline = UNSTREAM_STRING( &constant_bin[ 921219 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_content_encoding_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_content_encoding_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_content_encoding = UNSTREAM_STRING( &constant_bin[ 921227 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_content_encoding_tuple, 1, const_str_plain_content_encoding ); Py_INCREF( const_str_plain_content_encoding );
    const_str_plain_tr_enc = UNSTREAM_STRING( &constant_bin[ 921243 ], 6, 1 );
    const_str_plain__request_url = UNSTREAM_STRING( &constant_bin[ 921249 ], 12, 1 );
    const_tuple_str_digest_a0ca0f184ab75a015f69c992cdb800dc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a0ca0f184ab75a015f69c992cdb800dc_tuple, 0, const_str_digest_a0ca0f184ab75a015f69c992cdb800dc ); Py_INCREF( const_str_digest_a0ca0f184ab75a015f69c992cdb800dc );
    const_str_digest_d186d35140b6e607ac0c8b2c63fdeb29 = UNSTREAM_STRING( &constant_bin[ 921261 ], 21, 0 );
    const_str_digest_03ab59cc4b02965b81f2960ba3242a80 = UNSTREAM_STRING( &constant_bin[ 921282 ], 17, 0 );
    const_str_digest_fbf9dc1a6ef4e117091b904d08084ea2 = UNSTREAM_STRING( &constant_bin[ 921299 ], 34, 0 );
    const_str_digest_228bd71510125698bfd3916924a48c8a = UNSTREAM_STRING( &constant_bin[ 921333 ], 19, 0 );
    const_tuple_str_plain_contextmanager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_contextmanager_tuple, 0, const_str_plain_contextmanager ); Py_INCREF( const_str_plain_contextmanager );
    const_str_plain_CONTENT_DECODERS = UNSTREAM_STRING( &constant_bin[ 921352 ], 16, 1 );
    const_tuple_str_plain_HTTPException_str_plain_BaseSSLError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPException_str_plain_BaseSSLError_tuple, 0, const_str_plain_HTTPException ); Py_INCREF( const_str_plain_HTTPException );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPException_str_plain_BaseSSLError_tuple, 1, const_str_plain_BaseSSLError ); Py_INCREF( const_str_plain_BaseSSLError );
    const_str_digest_dc6e1bc5c5d41f5446ae6509fcb24069 = UNSTREAM_STRING( &constant_bin[ 921368 ], 21, 0 );
    const_tuple_str_digest_80cf594c6b193676cb3f905f65b5d391_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_80cf594c6b193676cb3f905f65b5d391_str_empty_tuple, 0, const_str_digest_80cf594c6b193676cb3f905f65b5d391 ); Py_INCREF( const_str_digest_80cf594c6b193676cb3f905f65b5d391 );
    PyTuple_SET_ITEM( const_tuple_str_digest_80cf594c6b193676cb3f905f65b5d391_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_31d64d3b8ec974c2917fdf1564a2fb00 = UNSTREAM_STRING( &constant_bin[ 921389 ], 17, 0 );
    const_str_digest_5b822072613297976c8a6e8c4235d2b7 = UNSTREAM_STRING( &constant_bin[ 921406 ], 69, 0 );
    const_tuple_str_digest_6fceb2e9778412869b1de7adcdb00cc8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6fceb2e9778412869b1de7adcdb00cc8_tuple, 0, const_str_digest_6fceb2e9778412869b1de7adcdb00cc8 ); Py_INCREF( const_str_digest_6fceb2e9778412869b1de7adcdb00cc8 );
    const_str_digest_563a5c1e73e73d543e7c4f1e0d7b34c2 = UNSTREAM_STRING( &constant_bin[ 921475 ], 19, 0 );
    const_str_plain__obj = UNSTREAM_STRING( &constant_bin[ 49989 ], 4, 1 );
    const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 2, const_str_plain_decode_content ); Py_INCREF( const_str_plain_decode_content );
    const_str_plain_flush_decoder = UNSTREAM_STRING( &constant_bin[ 918763 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 3, const_str_plain_flush_decoder ); Py_INCREF( const_str_plain_flush_decoder );
    PyTuple_SET_ITEM( const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 5, const_str_plain_content_encoding ); Py_INCREF( const_str_plain_content_encoding );
    const_str_plain_GzipDecoderState = UNSTREAM_STRING( &constant_bin[ 921494 ], 16, 1 );
    const_str_plain_IOBase = UNSTREAM_STRING( &constant_bin[ 921510 ], 6, 1 );
    const_str_digest_0e97f13bdd35179a3f7d47396e0b1e10 = UNSTREAM_STRING( &constant_bin[ 921516 ], 607, 0 );
    const_tuple_421629008192601d4f350b75577ee96e_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 0, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 5, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 6, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 7, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 10, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 11, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 12, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 13, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 14, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_421629008192601d4f350b75577ee96e_tuple, 15, Py_None ); Py_INCREF( Py_None );
    const_str_digest_4314cfcdf7e269d83c4b3bffa1766fb2 = UNSTREAM_STRING( &constant_bin[ 922123 ], 23, 0 );
    const_str_digest_7dc2f4ce825c1d3f2d7ba96801786100 = UNSTREAM_STRING( &constant_bin[ 922146 ], 77, 0 );
    const_str_digest_5141c13fc1586905d04453154b9d176e = UNSTREAM_STRING( &constant_bin[ 886020 ], 15, 0 );
    const_str_plain__connection = UNSTREAM_STRING( &constant_bin[ 780252 ], 11, 1 );
    const_tuple_str_digest_db51a9f73f100ec22d319265c4417c10_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_db51a9f73f100ec22d319265c4417c10_tuple, 0, const_str_digest_db51a9f73f100ec22d319265c4417c10 ); Py_INCREF( const_str_digest_db51a9f73f100ec22d319265c4417c10 );
    const_str_plain__error_catcher = UNSTREAM_STRING( &constant_bin[ 922223 ], 14, 1 );
    const_tuple_730760646a8d9700be00732810f68de5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_730760646a8d9700be00732810f68de5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_730760646a8d9700be00732810f68de5_tuple, 1, const_str_plain_amt ); Py_INCREF( const_str_plain_amt );
    PyTuple_SET_ITEM( const_tuple_730760646a8d9700be00732810f68de5_tuple, 2, const_str_plain_returned_chunk ); Py_INCREF( const_str_plain_returned_chunk );
    PyTuple_SET_ITEM( const_tuple_730760646a8d9700be00732810f68de5_tuple, 3, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    PyTuple_SET_ITEM( const_tuple_730760646a8d9700be00732810f68de5_tuple, 4, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_b5c9f811929a87965e12501a2faee8ba = UNSTREAM_STRING( &constant_bin[ 922237 ], 35, 0 );
    const_tuple_str_plain_string_types_str_plain_binary_type_str_plain_PY3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_types_str_plain_binary_type_str_plain_PY3_tuple, 0, const_str_plain_string_types ); Py_INCREF( const_str_plain_string_types );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_types_str_plain_binary_type_str_plain_PY3_tuple, 1, const_str_plain_binary_type ); Py_INCREF( const_str_plain_binary_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_string_types_str_plain_binary_type_str_plain_PY3_tuple, 2, const_str_plain_PY3 ); Py_INCREF( const_str_plain_PY3 );
    const_str_digest_1b8dece73d968b5d28e63e5e9c8d807d = UNSTREAM_STRING( &constant_bin[ 922272 ], 40, 0 );
    const_str_digest_a62b7cff9fd4ca2a8eaad598860048c0 = UNSTREAM_STRING( &constant_bin[ 827131 ], 16, 0 );
    const_str_digest_08df6de959dae9d1c247c2ab041993af = UNSTREAM_STRING( &constant_bin[ 922312 ], 22, 0 );
    const_tuple_str_plain_mode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_mode_tuple, 0, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_digest_7b5ed3a84f13afcdc926db62ca8eb81a = UNSTREAM_STRING( &constant_bin[ 922334 ], 23, 0 );
    const_str_digest_41400538e345345240c20cdf5e2aa1d8 = UNSTREAM_STRING( &constant_bin[ 922357 ], 454, 0 );
    const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 1, const_str_plain_amt ); Py_INCREF( const_str_plain_amt );
    PyTuple_SET_ITEM( const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 2, const_str_plain_decode_content ); Py_INCREF( const_str_plain_decode_content );
    PyTuple_SET_ITEM( const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 3, const_str_plain_cache_content ); Py_INCREF( const_str_plain_cache_content );
    PyTuple_SET_ITEM( const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 4, const_str_plain_flush_decoder ); Py_INCREF( const_str_plain_flush_decoder );
    PyTuple_SET_ITEM( const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 5, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_FIRST_MEMBER = UNSTREAM_STRING( &constant_bin[ 922811 ], 12, 1 );
    const_tuple_int_0_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_none_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_b5074ac92dc72b508f7b239b36f07471 = UNSTREAM_STRING( &constant_bin[ 917875 ], 17, 0 );
    const_str_digest_d0590bcd4a83d66ed17deb5c9e144342 = UNSTREAM_STRING( &constant_bin[ 922823 ], 23, 0 );
    const_str_plain_MAX_WBITS = UNSTREAM_STRING( &constant_bin[ 922846 ], 9, 1 );
    const_str_digest_db6e0943ac580bf4379ef7b63d32405e = UNSTREAM_STRING( &constant_bin[ 922855 ], 19, 0 );
    const_str_digest_3375b08dee8bfdec0bb39402913b81e2 = UNSTREAM_STRING( &constant_bin[ 922874 ], 25, 0 );
    const_tuple_str_digest_a62b7cff9fd4ca2a8eaad598860048c0_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a62b7cff9fd4ca2a8eaad598860048c0_str_empty_tuple, 0, const_str_digest_a62b7cff9fd4ca2a8eaad598860048c0 ); Py_INCREF( const_str_digest_a62b7cff9fd4ca2a8eaad598860048c0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a62b7cff9fd4ca2a8eaad598860048c0_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_eda91d08436b3150bb02a95e4966d1a0 = UNSTREAM_STRING( &constant_bin[ 922899 ], 26, 0 );
    const_str_plain_readable = UNSTREAM_STRING( &constant_bin[ 40272 ], 8, 1 );
    const_str_plain__safe_read = UNSTREAM_STRING( &constant_bin[ 922925 ], 10, 1 );
    const_str_digest_b1f5bc498322609af46e729204a25f6d = UNSTREAM_STRING( &constant_bin[ 922935 ], 22, 0 );
    const_str_plain_DeflateDecoder = UNSTREAM_STRING( &constant_bin[ 918247 ], 14, 1 );
    const_tuple_str_plain_self_str_plain_b_str_plain_temp_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_b_str_plain_temp_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_b_str_plain_temp_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_b_str_plain_temp_tuple, 2, const_str_plain_temp ); Py_INCREF( const_str_plain_temp );
    const_str_plain__init_length = UNSTREAM_STRING( &constant_bin[ 919676 ], 12, 1 );
    const_tuple_str_plain_is_fp_closed_str_plain_is_response_to_head_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_fp_closed_str_plain_is_response_to_head_tuple, 0, const_str_plain_is_fp_closed ); Py_INCREF( const_str_plain_is_fp_closed );
    PyTuple_SET_ITEM( const_tuple_str_plain_is_fp_closed_str_plain_is_response_to_head_tuple, 1, const_str_plain_is_response_to_head ); Py_INCREF( const_str_plain_is_response_to_head );
    const_str_digest_92153a55ef2b1eb7542a2c7a044d6cbb = UNSTREAM_STRING( &constant_bin[ 922957 ], 1210, 0 );
    const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 1, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 2, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 3, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 4, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 5, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 6, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 7, const_str_plain_preload_content ); Py_INCREF( const_str_plain_preload_content );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 8, const_str_plain_decode_content ); Py_INCREF( const_str_plain_decode_content );
    const_str_plain_original_response = UNSTREAM_STRING( &constant_bin[ 919525 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 9, const_str_plain_original_response ); Py_INCREF( const_str_plain_original_response );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 10, const_str_plain_pool ); Py_INCREF( const_str_plain_pool );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 11, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 12, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 13, const_str_plain_retries ); Py_INCREF( const_str_plain_retries );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 14, const_str_plain_enforce_content_length ); Py_INCREF( const_str_plain_enforce_content_length );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 15, const_str_plain_request_method ); Py_INCREF( const_str_plain_request_method );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 16, const_str_plain_request_url ); Py_INCREF( const_str_plain_request_url );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 17, const_str_plain_tr_enc ); Py_INCREF( const_str_plain_tr_enc );
    PyTuple_SET_ITEM( const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 18, const_str_plain_encodings ); Py_INCREF( const_str_plain_encodings );
    const_str_digest_18d49cb45ca224d6652f6f1e7b400776 = UNSTREAM_STRING( &constant_bin[ 924167 ], 56, 0 );
    const_str_digest_d4b2db23198f04d1f231f704f98ddea3 = UNSTREAM_STRING( &constant_bin[ 924223 ], 20, 0 );
    const_str_digest_e955e200ce7076f63dbfb9e11568aad1 = UNSTREAM_STRING( &constant_bin[ 924243 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_clean_exit_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_clean_exit_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_clean_exit_str_plain_e_tuple, 1, const_str_plain_clean_exit ); Py_INCREF( const_str_plain_clean_exit );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_clean_exit_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain__get_decoder = UNSTREAM_STRING( &constant_bin[ 924261 ], 12, 1 );
    const_str_digest_5c256aa147815cb63972929236f4cfd3 = UNSTREAM_STRING( &constant_bin[ 924273 ], 45, 0 );
    const_str_plain_GzipDecoder = UNSTREAM_STRING( &constant_bin[ 918717 ], 11, 1 );
    const_str_digest_cd1b25485799fd6d9f2633cd175ed03c = UNSTREAM_STRING( &constant_bin[ 924318 ], 250, 0 );
    const_str_plain_supports_chunked_reads = UNSTREAM_STRING( &constant_bin[ 922250 ], 22, 1 );
    const_str_plain__decode = UNSTREAM_STRING( &constant_bin[ 606005 ], 7, 1 );
    const_tuple_str_digest_8a73745eea869768cd9140b80d6ca0f2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8a73745eea869768cd9140b80d6ca0f2_tuple, 0, const_str_digest_8a73745eea869768cd9140b80d6ca0f2 ); Py_INCREF( const_str_digest_8a73745eea869768cd9140b80d6ca0f2 );
    const_list_str_plain_gzip_str_plain_deflate_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_gzip_str_plain_deflate_list, 0, const_str_plain_gzip ); Py_INCREF( const_str_plain_gzip );
    PyList_SET_ITEM( const_list_str_plain_gzip_str_plain_deflate_list, 1, const_str_plain_deflate ); Py_INCREF( const_str_plain_deflate );
    const_str_digest_f7b5c3ce3f21d2c936332c7ea87d4366 = UNSTREAM_STRING( &constant_bin[ 924568 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$response( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e829801848b103e8d9b04720aa0a54fd;
static PyCodeObject *codeobj_2bb76c3bc46721e366121eb6602fc625;
static PyCodeObject *codeobj_3cc0929157c2ce1f0b73230571ba9161;
static PyCodeObject *codeobj_1cc5274a42b685795d60d9c7d94b511c;
static PyCodeObject *codeobj_5ac2ccd15db63083ae804c0241347632;
static PyCodeObject *codeobj_1d716c458f3d3d96fef2cca7a8eab0eb;
static PyCodeObject *codeobj_a2720a7a6c6abf1dfb54523d907f7f2a;
static PyCodeObject *codeobj_398569e4847cd39e3cf4db6d8da7cb5d;
static PyCodeObject *codeobj_21c07964ec22382f408bee3afffb454c;
static PyCodeObject *codeobj_72aa4a09884669ef5058cb36b2896f68;
static PyCodeObject *codeobj_316c8411ec49021997368615f4ed4e39;
static PyCodeObject *codeobj_0257ac8393961814a6822c694f4ce398;
static PyCodeObject *codeobj_d0c59b08485898e1b6ee26ece751ace5;
static PyCodeObject *codeobj_531044ea0c6c8da9bdf9abe8e7574c65;
static PyCodeObject *codeobj_14944cba7a05bf27856b8e3a5f83fd43;
static PyCodeObject *codeobj_f808455292578e779c33f6e44d2e66fd;
static PyCodeObject *codeobj_9145f9f6e4741fb933fd036a507bcc27;
static PyCodeObject *codeobj_7232cb6405aa0f895f858aeeb7741416;
static PyCodeObject *codeobj_51acd91497d3882d64e84ec677c0df77;
static PyCodeObject *codeobj_bc285974decaddb4da8105cf830485ff;
static PyCodeObject *codeobj_e943864b477d4cba3a0a68472244098e;
static PyCodeObject *codeobj_d8d5e7f424c7c6e7b84977b3493bd950;
static PyCodeObject *codeobj_1e4e0afbc7cb4d36c676ce98ca196f22;
static PyCodeObject *codeobj_4a7ca2092236dc49b0e7a78921b474db;
static PyCodeObject *codeobj_228630d7252b121a3ba0fbfe47e8a72a;
static PyCodeObject *codeobj_ba644069844b05e04d22aa29862d834a;
static PyCodeObject *codeobj_3ec4fef573eb37eea8a88e35bedb32e9;
static PyCodeObject *codeobj_a7c05ca0d4b1c2706e210147c4a7e68e;
static PyCodeObject *codeobj_a7bec840cd65c11d4ce1c90f1c7258b5;
static PyCodeObject *codeobj_5be94d50bf517c06df58916422775079;
static PyCodeObject *codeobj_4d77abbad7fa5892ecf5d44d76e33431;
static PyCodeObject *codeobj_c443e075b926834d81f1a3f2a831fd85;
static PyCodeObject *codeobj_9bc3823c65271362e7b75619d487a836;
static PyCodeObject *codeobj_c5f693ea085fe48c35fb96101e2914c1;
static PyCodeObject *codeobj_a8dbac8a0e6ba7d4fbf9273fb72639e9;
static PyCodeObject *codeobj_b4f4b0b77dace4020608b02283c75e87;
static PyCodeObject *codeobj_10587c6b21cb100fbf58c666f5dcef88;
static PyCodeObject *codeobj_8de9d9dbea2dfc7e92bf3ac09a6a93f9;
static PyCodeObject *codeobj_292441059e8fdfdb040b928e84be406a;
static PyCodeObject *codeobj_815772360b8e978dac52adb1a9678609;
static PyCodeObject *codeobj_ef5a5d3cce32dce868a24a38e48a0e04;
static PyCodeObject *codeobj_5a2c6ac8428d11018e77aa5c9002afa1;
static PyCodeObject *codeobj_4406219381127b6fa2ea658038e5f8c1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_05a4d60a37e27e282d01db144681b237;
    codeobj_e829801848b103e8d9b04720aa0a54fd = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 176, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_enc_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2bb76c3bc46721e366121eb6602fc625 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 255, const_tuple_str_plain_val_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3cc0929157c2ce1f0b73230571ba9161 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ea4b62466195fef8b8ddcd0c7826eaa9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1cc5274a42b685795d60d9c7d94b511c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DeflateDecoder, 22, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5ac2ccd15db63083ae804c0241347632 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GzipDecoder, 62, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_1d716c458f3d3d96fef2cca7a8eab0eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GzipDecoderState, 55, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a2720a7a6c6abf1dfb54523d907f7f2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPResponse, 100, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_398569e4847cd39e3cf4db6d8da7cb5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 29, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_21c07964ec22382f408bee3afffb454c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 68, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72aa4a09884669ef5058cb36b2896f68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 24, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_316c8411ec49021997368615f4ed4e39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 64, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0257ac8393961814a6822c694f4ce398 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 136, const_tuple_ff0a4700669a192a9ef3386cb532fa84_tuple, 17, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0c59b08485898e1b6ee26ece751ace5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decode, 289, const_tuple_819bbf26dbee5dc5b5e5f2e8f7f6b910_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_531044ea0c6c8da9bdf9abe8e7574c65 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__error_catcher, 318, const_tuple_str_plain_self_str_plain_clean_exit_str_plain_e_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_14944cba7a05bf27856b8e3a5f83fd43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__flush_decoder, 307, const_tuple_str_plain_self_str_plain_buf_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f808455292578e779c33f6e44d2e66fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_decoder, 93, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9145f9f6e4741fb933fd036a507bcc27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__handle_chunk, 578, const_tuple_730760646a8d9700be00732810f68de5_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7232cb6405aa0f895f858aeeb7741416 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init_decoder, 279, const_tuple_str_plain_self_str_plain_content_encoding_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_51acd91497d3882d64e84ec677c0df77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init_length, 231, const_tuple_96d72610c38544a632969d334c5f37f3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bc285974decaddb4da8105cf830485ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain__update_chunk_length, 564, const_tuple_str_plain_self_str_plain_line_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e943864b477d4cba3a0a68472244098e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 511, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8d5e7f424c7c6e7b84977b3493bd950 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_closed, 518, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1e4e0afbc7cb4d36c676ce98ca196f22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connection, 216, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a7ca2092236dc49b0e7a78921b474db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_data, 207, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_228630d7252b121a3ba0fbfe47e8a72a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decompress, 32, const_tuple_str_plain_self_str_plain_data_str_plain_decompressed_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba644069844b05e04d22aa29862d834a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decompress, 71, const_tuple_de891123a5a6b8a84f0faa55206cb878_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3ec4fef573eb37eea8a88e35bedb32e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fileno, 529, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a7c05ca0d4b1c2706e210147c4a7e68e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 538, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a7bec840cd65c11d4ce1c90f1c7258b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_httplib, 470, const_tuple_f65e67a4f2338543820e6e1659c4c896_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_5be94d50bf517c06df58916422775079 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_redirect_location, 187, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d77abbad7fa5892ecf5d44d76e33431 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getheader, 503, const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c443e075b926834d81f1a3f2a831fd85 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getheaders, 500, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9bc3823c65271362e7b75619d487a836 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_geturl, 667, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5f693ea085fe48c35fb96101e2914c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_info, 507, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8dbac8a0e6ba7d4fbf9273fb72639e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isclosed, 220, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4f4b0b77dace4020608b02283c75e87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 375, const_tuple_5cf26fa52a2a82ccc4031c810811e769_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10587c6b21cb100fbf58c666f5dcef88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_chunked, 600, const_tuple_f63ce757e8499d2ff2b9a836a90b9395_tuple, 3, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8de9d9dbea2dfc7e92bf3ac09a6a93f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readable, 542, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_292441059e8fdfdb040b928e84be406a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readinto, 546, const_tuple_str_plain_self_str_plain_b_str_plain_temp_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_815772360b8e978dac52adb1a9678609 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_release_conn, 200, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef5a5d3cce32dce868a24a38e48a0e04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stream, 444, const_tuple_9fa9568895804a7753861ccda2e19199_tuple, 3, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a2c6ac8428d11018e77aa5c9002afa1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_supports_chunked_reads, 555, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4406219381127b6fa2ea658038e5f8c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tell, 223, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_8___init__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void urllib3$response$$$function_8___init__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_21_stream$$$genobj_1_stream_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void urllib3$response$$$function_21_stream$$$genobj_1_stream_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_10_release_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_11_data(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_12_connection(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_13_isclosed(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_14_tell(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_15__init_length(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_16__init_decoder(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_17__decode(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_18__flush_decoder(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_19__error_catcher(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_20_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_21_stream( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_22_from_httplib(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_23_getheaders(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_24_getheader( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_25_info(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_26_close(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_27_closed(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_28_fileno(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_29_flush(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_2___getattr__(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_30_readable(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_31_readinto(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_32_supports_chunked_reads(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_33__update_chunk_length(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_34__handle_chunk(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_35_read_chunked( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_36_geturl(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_3_decompress(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_4___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_5___getattr__(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_6_decompress(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_7__get_decoder(  );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_8___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$response$$$function_9_get_redirect_location(  );


// The module function definitions.
static PyObject *impl_urllib3$response$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_72aa4a09884669ef5058cb36b2896f68 = NULL;

    struct Nuitka_FrameObject *frame_72aa4a09884669ef5058cb36b2896f68;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72aa4a09884669ef5058cb36b2896f68, codeobj_72aa4a09884669ef5058cb36b2896f68, module_urllib3$response, sizeof(void *) );
    frame_72aa4a09884669ef5058cb36b2896f68 = cache_frame_72aa4a09884669ef5058cb36b2896f68;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72aa4a09884669ef5058cb36b2896f68 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72aa4a09884669ef5058cb36b2896f68 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__first_try, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_binary_type );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binary_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_72aa4a09884669ef5058cb36b2896f68->m_frame.f_lineno = 26;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
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

        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__data, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_72aa4a09884669ef5058cb36b2896f68->m_frame.f_lineno = 27;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_decompressobj );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "o";
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

        exception_lineno = 27;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__obj, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72aa4a09884669ef5058cb36b2896f68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72aa4a09884669ef5058cb36b2896f68 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72aa4a09884669ef5058cb36b2896f68, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72aa4a09884669ef5058cb36b2896f68->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72aa4a09884669ef5058cb36b2896f68, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72aa4a09884669ef5058cb36b2896f68,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_72aa4a09884669ef5058cb36b2896f68 == cache_frame_72aa4a09884669ef5058cb36b2896f68 )
    {
        Py_DECREF( frame_72aa4a09884669ef5058cb36b2896f68 );
    }
    cache_frame_72aa4a09884669ef5058cb36b2896f68 = NULL;

    assertFrameObject( frame_72aa4a09884669ef5058cb36b2896f68 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_1___init__ );
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


static PyObject *impl_urllib3$response$$$function_2___getattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_398569e4847cd39e3cf4db6d8da7cb5d = NULL;

    struct Nuitka_FrameObject *frame_398569e4847cd39e3cf4db6d8da7cb5d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_398569e4847cd39e3cf4db6d8da7cb5d, codeobj_398569e4847cd39e3cf4db6d8da7cb5d, module_urllib3$response, sizeof(void *)+sizeof(void *) );
    frame_398569e4847cd39e3cf4db6d8da7cb5d = cache_frame_398569e4847cd39e3cf4db6d8da7cb5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_398569e4847cd39e3cf4db6d8da7cb5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_398569e4847cd39e3cf4db6d8da7cb5d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__obj );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = par_name;

    if ( tmp_getattr_attr_1 == NULL )
    {
        Py_DECREF( tmp_getattr_target_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_398569e4847cd39e3cf4db6d8da7cb5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_398569e4847cd39e3cf4db6d8da7cb5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_398569e4847cd39e3cf4db6d8da7cb5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_398569e4847cd39e3cf4db6d8da7cb5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_398569e4847cd39e3cf4db6d8da7cb5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_398569e4847cd39e3cf4db6d8da7cb5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_398569e4847cd39e3cf4db6d8da7cb5d,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_398569e4847cd39e3cf4db6d8da7cb5d == cache_frame_398569e4847cd39e3cf4db6d8da7cb5d )
    {
        Py_DECREF( frame_398569e4847cd39e3cf4db6d8da7cb5d );
    }
    cache_frame_398569e4847cd39e3cf4db6d8da7cb5d = NULL;

    assertFrameObject( frame_398569e4847cd39e3cf4db6d8da7cb5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_2___getattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_2___getattr__ );
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


static PyObject *impl_urllib3$response$$$function_3_decompress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_decompressed = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    static struct Nuitka_FrameObject *cache_frame_228630d7252b121a3ba0fbfe47e8a72a = NULL;

    struct Nuitka_FrameObject *frame_228630d7252b121a3ba0fbfe47e8a72a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_228630d7252b121a3ba0fbfe47e8a72a, codeobj_228630d7252b121a3ba0fbfe47e8a72a, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_228630d7252b121a3ba0fbfe47e8a72a = cache_frame_228630d7252b121a3ba0fbfe47e8a72a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_228630d7252b121a3ba0fbfe47e8a72a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_228630d7252b121a3ba0fbfe47e8a72a ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_data;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = par_data;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__first_try );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 36;
        type_description_1 = "ooo";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__obj );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decompress );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__data );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_1;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = par_data;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_2;

    // Tried code:
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
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

    // Tried code:
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__obj );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_decompress );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = par_data;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    assert( var_decompressed == NULL );
    var_decompressed = tmp_assign_source_3;

    tmp_cond_value_3 = var_decompressed;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__first_try, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__data, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    branch_no_3:;
    tmp_return_value = var_decompressed;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decompressed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_3_decompress );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_228630d7252b121a3ba0fbfe47e8a72a, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_228630d7252b121a3ba0fbfe47e8a72a, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_error );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_4 = Py_False;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__first_try, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_decompressobj );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_MAX_WBITS );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
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

        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__obj, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    // Tried code:
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooo";
        goto try_except_handler_6;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_decompress );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooo";
        goto try_except_handler_6;
    }
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "ooo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__data );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 50;
        type_description_1 = "ooo";
        goto try_except_handler_6;
    }
    frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "ooo";
        goto try_except_handler_6;
    }
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_3_decompress );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__data, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_228630d7252b121a3ba0fbfe47e8a72a, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_228630d7252b121a3ba0fbfe47e8a72a, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "ooo";
        goto try_except_handler_7;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__data, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooo";
        goto try_except_handler_7;
    }
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 49;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame) frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_3_decompress );
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_5;
    // End of try:
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 40;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame) frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_end_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_3_decompress );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_228630d7252b121a3ba0fbfe47e8a72a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_228630d7252b121a3ba0fbfe47e8a72a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_228630d7252b121a3ba0fbfe47e8a72a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_228630d7252b121a3ba0fbfe47e8a72a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_228630d7252b121a3ba0fbfe47e8a72a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_228630d7252b121a3ba0fbfe47e8a72a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_228630d7252b121a3ba0fbfe47e8a72a,
        type_description_1,
        par_self,
        par_data,
        var_decompressed
    );


    // Release cached frame.
    if ( frame_228630d7252b121a3ba0fbfe47e8a72a == cache_frame_228630d7252b121a3ba0fbfe47e8a72a )
    {
        Py_DECREF( frame_228630d7252b121a3ba0fbfe47e8a72a );
    }
    cache_frame_228630d7252b121a3ba0fbfe47e8a72a = NULL;

    assertFrameObject( frame_228630d7252b121a3ba0fbfe47e8a72a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_3_decompress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_decompressed );
    var_decompressed = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_decompressed );
    var_decompressed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_3_decompress );
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


static PyObject *impl_urllib3$response$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_316c8411ec49021997368615f4ed4e39 = NULL;

    struct Nuitka_FrameObject *frame_316c8411ec49021997368615f4ed4e39;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_316c8411ec49021997368615f4ed4e39, codeobj_316c8411ec49021997368615f4ed4e39, module_urllib3$response, sizeof(void *) );
    frame_316c8411ec49021997368615f4ed4e39 = cache_frame_316c8411ec49021997368615f4ed4e39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_316c8411ec49021997368615f4ed4e39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_316c8411ec49021997368615f4ed4e39 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decompressobj );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_int_pos_16;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MAX_WBITS );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_316c8411ec49021997368615f4ed4e39->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
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

        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__obj, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipDecoderState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_FIRST_MEMBER );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
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

        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__state, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_316c8411ec49021997368615f4ed4e39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_316c8411ec49021997368615f4ed4e39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_316c8411ec49021997368615f4ed4e39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_316c8411ec49021997368615f4ed4e39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_316c8411ec49021997368615f4ed4e39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_316c8411ec49021997368615f4ed4e39,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_316c8411ec49021997368615f4ed4e39 == cache_frame_316c8411ec49021997368615f4ed4e39 )
    {
        Py_DECREF( frame_316c8411ec49021997368615f4ed4e39 );
    }
    cache_frame_316c8411ec49021997368615f4ed4e39 = NULL;

    assertFrameObject( frame_316c8411ec49021997368615f4ed4e39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_4___init__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_4___init__ );
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


static PyObject *impl_urllib3$response$$$function_5___getattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_21c07964ec22382f408bee3afffb454c = NULL;

    struct Nuitka_FrameObject *frame_21c07964ec22382f408bee3afffb454c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21c07964ec22382f408bee3afffb454c, codeobj_21c07964ec22382f408bee3afffb454c, module_urllib3$response, sizeof(void *)+sizeof(void *) );
    frame_21c07964ec22382f408bee3afffb454c = cache_frame_21c07964ec22382f408bee3afffb454c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21c07964ec22382f408bee3afffb454c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21c07964ec22382f408bee3afffb454c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__obj );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = par_name;

    if ( tmp_getattr_attr_1 == NULL )
    {
        Py_DECREF( tmp_getattr_target_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c07964ec22382f408bee3afffb454c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c07964ec22382f408bee3afffb454c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c07964ec22382f408bee3afffb454c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21c07964ec22382f408bee3afffb454c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21c07964ec22382f408bee3afffb454c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21c07964ec22382f408bee3afffb454c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21c07964ec22382f408bee3afffb454c,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_21c07964ec22382f408bee3afffb454c == cache_frame_21c07964ec22382f408bee3afffb454c )
    {
        Py_DECREF( frame_21c07964ec22382f408bee3afffb454c );
    }
    cache_frame_21c07964ec22382f408bee3afffb454c = NULL;

    assertFrameObject( frame_21c07964ec22382f408bee3afffb454c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_5___getattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_5___getattr__ );
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


static PyObject *impl_urllib3$response$$$function_6_decompress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *var_previous_state = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    static struct Nuitka_FrameObject *cache_frame_ba644069844b05e04d22aa29862d834a = NULL;

    struct Nuitka_FrameObject *frame_ba644069844b05e04d22aa29862d834a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ba644069844b05e04d22aa29862d834a, codeobj_ba644069844b05e04d22aa29862d834a, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ba644069844b05e04d22aa29862d834a = cache_frame_ba644069844b05e04d22aa29862d834a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba644069844b05e04d22aa29862d834a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba644069844b05e04d22aa29862d834a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_binary_type );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binary_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_ba644069844b05e04d22aa29862d834a->m_frame.f_lineno = 72;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__state );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipDecoderState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SWALLOW_DATA );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 73;
        type_description_1 = "oooo";
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_operand_name_1 = par_data;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_or_right_value_1 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 73;
        type_description_1 = "oooo";
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
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    loop_start_1:;
    // Tried code:
    tmp_left_name_1 = var_ret;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
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

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__obj );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_decompress );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_ba644069844b05e04d22aa29862d834a->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_2 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    var_ret = tmp_assign_source_2;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ba644069844b05e04d22aa29862d834a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ba644069844b05e04d22aa29862d834a, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_error );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
        goto try_except_handler_3;
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
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__state );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_previous_state;
        var_previous_state = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipDecoderState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SWALLOW_DATA );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooo";
        goto try_except_handler_3;
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

        exception_lineno = 81;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__state, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_compare_left_2 = var_previous_state;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "previous_state" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipDecoderState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_OTHER_MEMBERS );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 85;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ba644069844b05e04d22aa29862d834a->m_frame) frame_ba644069844b05e04d22aa29862d834a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 76;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ba644069844b05e04d22aa29862d834a->m_frame) frame_ba644069844b05e04d22aa29862d834a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_6_decompress );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__obj );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_unused_data );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_data;
        par_data = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = par_data;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipDecoderState );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipDecoderState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_OTHER_MEMBERS );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
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

        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__state, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_decompressobj );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_int_pos_16;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_MAX_WBITS );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_ba644069844b05e04d22aa29862d834a->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
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

        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__obj, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba644069844b05e04d22aa29862d834a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba644069844b05e04d22aa29862d834a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba644069844b05e04d22aa29862d834a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba644069844b05e04d22aa29862d834a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba644069844b05e04d22aa29862d834a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba644069844b05e04d22aa29862d834a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba644069844b05e04d22aa29862d834a,
        type_description_1,
        par_self,
        par_data,
        var_ret,
        var_previous_state
    );


    // Release cached frame.
    if ( frame_ba644069844b05e04d22aa29862d834a == cache_frame_ba644069844b05e04d22aa29862d834a )
    {
        Py_DECREF( frame_ba644069844b05e04d22aa29862d834a );
    }
    cache_frame_ba644069844b05e04d22aa29862d834a = NULL;

    assertFrameObject( frame_ba644069844b05e04d22aa29862d834a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_6_decompress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_previous_state );
    var_previous_state = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_previous_state );
    var_previous_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_6_decompress );
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


static PyObject *impl_urllib3$response$$$function_7__get_decoder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f808455292578e779c33f6e44d2e66fd = NULL;

    struct Nuitka_FrameObject *frame_f808455292578e779c33f6e44d2e66fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f808455292578e779c33f6e44d2e66fd, codeobj_f808455292578e779c33f6e44d2e66fd, module_urllib3$response, sizeof(void *) );
    frame_f808455292578e779c33f6e44d2e66fd = cache_frame_f808455292578e779c33f6e44d2e66fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f808455292578e779c33f6e44d2e66fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f808455292578e779c33f6e44d2e66fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_mode;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_str_plain_gzip;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "o";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoder );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GzipDecoder );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GzipDecoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_f808455292578e779c33f6e44d2e66fd->m_frame.f_lineno = 95;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_DeflateDecoder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeflateDecoder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeflateDecoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_f808455292578e779c33f6e44d2e66fd->m_frame.f_lineno = 97;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f808455292578e779c33f6e44d2e66fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f808455292578e779c33f6e44d2e66fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f808455292578e779c33f6e44d2e66fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f808455292578e779c33f6e44d2e66fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f808455292578e779c33f6e44d2e66fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f808455292578e779c33f6e44d2e66fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f808455292578e779c33f6e44d2e66fd,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_f808455292578e779c33f6e44d2e66fd == cache_frame_f808455292578e779c33f6e44d2e66fd )
    {
        Py_DECREF( frame_f808455292578e779c33f6e44d2e66fd );
    }
    cache_frame_f808455292578e779c33f6e44d2e66fd = NULL;

    assertFrameObject( frame_f808455292578e779c33f6e44d2e66fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_7__get_decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_7__get_decoder );
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


static PyObject *impl_urllib3$response$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_body = python_pars[ 1 ];
    PyObject *par_headers = python_pars[ 2 ];
    PyObject *par_status = python_pars[ 3 ];
    PyObject *par_version = python_pars[ 4 ];
    PyObject *par_reason = python_pars[ 5 ];
    PyObject *par_strict = python_pars[ 6 ];
    PyObject *par_preload_content = python_pars[ 7 ];
    PyObject *par_decode_content = python_pars[ 8 ];
    PyObject *par_original_response = python_pars[ 9 ];
    PyObject *par_pool = python_pars[ 10 ];
    PyObject *par_connection = python_pars[ 11 ];
    PyObject *par_msg = python_pars[ 12 ];
    PyObject *par_retries = python_pars[ 13 ];
    PyObject *par_enforce_content_length = python_pars[ 14 ];
    PyObject *par_request_method = python_pars[ 15 ];
    PyObject *par_request_url = python_pars[ 16 ];
    PyObject *var_tr_enc = NULL;
    PyObject *var_encodings = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
    PyObject *tmp_assattr_name_22;
    PyObject *tmp_assattr_name_23;
    PyObject *tmp_assattr_name_24;
    PyObject *tmp_assattr_name_25;
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
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
    PyObject *tmp_assattr_target_22;
    PyObject *tmp_assattr_target_23;
    PyObject *tmp_assattr_target_24;
    PyObject *tmp_assattr_target_25;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_0257ac8393961814a6822c694f4ce398 = NULL;

    struct Nuitka_FrameObject *frame_0257ac8393961814a6822c694f4ce398;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0257ac8393961814a6822c694f4ce398, codeobj_0257ac8393961814a6822c694f4ce398, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0257ac8393961814a6822c694f4ce398 = cache_frame_0257ac8393961814a6822c694f4ce398;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0257ac8393961814a6822c694f4ce398 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0257ac8393961814a6822c694f4ce398 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_headers;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooooooooooo";
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
    tmp_assattr_name_1 = par_headers;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_headers, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_headers;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_0257ac8393961814a6822c694f4ce398->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooooo";
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

        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_headers, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    tmp_assattr_name_3 = par_status;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooooooooooooooooooo";
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

        exception_lineno = 146;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_status, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_version;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_version, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_reason;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "reason" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ooooooooooooooooooo";
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

        exception_lineno = 148;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_reason, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_strict;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "strict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        type_description_1 = "ooooooooooooooooooo";
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

        exception_lineno = 149;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_strict, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_decode_content;

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooooo";
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

        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_decode_content, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = par_retries;

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "retries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_retries, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = par_enforce_content_length;

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "enforce_content_length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_enforce_content_length, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = Py_None;
    tmp_assattr_target_10 = par_self;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__decoder, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_11 = Py_None;
    tmp_assattr_target_11 = par_self;

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__body, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = Py_None;
    tmp_assattr_target_12 = par_self;

    if ( tmp_assattr_target_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__fp, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_13 = par_original_response;

    if ( tmp_assattr_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "original_response" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = par_self;

    if ( tmp_assattr_target_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__original_response, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_14 = const_int_0;
    tmp_assattr_target_14 = par_self;

    if ( tmp_assattr_target_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain__fp_bytes_read, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_15 = par_msg;

    if ( tmp_assattr_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_15 = par_self;

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_msg, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_16 = par_request_url;

    if ( tmp_assattr_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_url" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_16 = par_self;

    if ( tmp_assattr_target_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain__request_url, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = par_body;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
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
    tmp_isinstance_inst_2 = par_body;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_binary_type );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_type );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binary_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_1 );
    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
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


        exception_lineno = 162;
        type_description_1 = "ooooooooooooooooooo";
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
    tmp_assattr_name_17 = par_body;

    if ( tmp_assattr_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_17 = par_self;

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain__body, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_assattr_name_18 = par_pool;

    if ( tmp_assattr_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pool" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_18 = par_self;

    if ( tmp_assattr_target_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain__pool, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_19 = par_connection;

    if ( tmp_assattr_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "connection" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_19 = par_self;

    if ( tmp_assattr_target_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain__connection, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_source_1 = par_body;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_read;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_20 = par_body;

    if ( tmp_assattr_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_20 = par_self;

    if ( tmp_assattr_target_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain__fp, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_assattr_name_21 = Py_False;
    tmp_assattr_target_21 = par_self;

    if ( tmp_assattr_target_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_chunked, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_22 = Py_None;
    tmp_assattr_target_22 = par_self;

    if ( tmp_assattr_target_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_chunk_left, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooooooooooooooo";
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

        exception_lineno = 174;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0257ac8393961814a6822c694f4ce398->m_frame.f_lineno = 174;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_digest_80cf594c6b193676cb3f905f65b5d391_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0257ac8393961814a6822c694f4ce398->m_frame.f_lineno = 174;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tr_enc == NULL );
    var_tr_enc = tmp_assign_source_1;

    tmp_called_instance_3 = var_tr_enc;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_0257ac8393961814a6822c694f4ce398->m_frame.f_lineno = 176;
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_3;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        urllib3$response$$$function_8___init__$$$genexpr_1_genexpr_context,
        module_urllib3$response,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_1b8dece73d968b5d28e63e5e9c8d807d,
#endif
        codeobj_e829801848b103e8d9b04720aa0a54fd,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_8___init__ );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_8___init__ );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_encodings == NULL );
    var_encodings = tmp_assign_source_2;

    tmp_compare_left_1 = const_str_plain_chunked;
    tmp_compare_right_1 = var_encodings;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_23 = Py_True;
    tmp_assattr_target_23 = par_self;

    if ( tmp_assattr_target_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_chunked, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__init_length );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_request_method;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0257ac8393961814a6822c694f4ce398->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assattr_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_24 = par_self;

    if ( tmp_assattr_target_24 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_length_remaining, tmp_assattr_name_24 );
    Py_DECREF( tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = par_preload_content;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "preload_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooooooooo";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__body );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooooooooo";
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


        exception_lineno = 184;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_decode_content;
    tmp_dict_value_1 = par_decode_content;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_0257ac8393961814a6822c694f4ce398->m_frame.f_lineno = 185;
    tmp_assattr_name_25 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_25 = par_self;

    if ( tmp_assattr_target_25 == NULL )
    {
        Py_DECREF( tmp_assattr_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain__body, tmp_assattr_name_25 );
    Py_DECREF( tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0257ac8393961814a6822c694f4ce398 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0257ac8393961814a6822c694f4ce398 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0257ac8393961814a6822c694f4ce398, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0257ac8393961814a6822c694f4ce398->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0257ac8393961814a6822c694f4ce398, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0257ac8393961814a6822c694f4ce398,
        type_description_1,
        par_self,
        par_body,
        par_headers,
        par_status,
        par_version,
        par_reason,
        par_strict,
        par_preload_content,
        par_decode_content,
        par_original_response,
        par_pool,
        par_connection,
        par_msg,
        par_retries,
        par_enforce_content_length,
        par_request_method,
        par_request_url,
        var_tr_enc,
        var_encodings
    );


    // Release cached frame.
    if ( frame_0257ac8393961814a6822c694f4ce398 == cache_frame_0257ac8393961814a6822c694f4ce398 )
    {
        Py_DECREF( frame_0257ac8393961814a6822c694f4ce398 );
    }
    cache_frame_0257ac8393961814a6822c694f4ce398 = NULL;

    assertFrameObject( frame_0257ac8393961814a6822c694f4ce398 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_preload_content );
    par_preload_content = NULL;

    Py_XDECREF( par_decode_content );
    par_decode_content = NULL;

    Py_XDECREF( par_original_response );
    par_original_response = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( par_enforce_content_length );
    par_enforce_content_length = NULL;

    Py_XDECREF( par_request_method );
    par_request_method = NULL;

    Py_XDECREF( par_request_url );
    par_request_url = NULL;

    Py_XDECREF( var_tr_enc );
    var_tr_enc = NULL;

    Py_XDECREF( var_encodings );
    var_encodings = NULL;

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

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( par_status );
    par_status = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_reason );
    par_reason = NULL;

    Py_XDECREF( par_strict );
    par_strict = NULL;

    Py_XDECREF( par_preload_content );
    par_preload_content = NULL;

    Py_XDECREF( par_decode_content );
    par_decode_content = NULL;

    Py_XDECREF( par_original_response );
    par_original_response = NULL;

    Py_XDECREF( par_pool );
    par_pool = NULL;

    Py_XDECREF( par_connection );
    par_connection = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_retries );
    par_retries = NULL;

    Py_XDECREF( par_enforce_content_length );
    par_enforce_content_length = NULL;

    Py_XDECREF( par_request_method );
    par_request_method = NULL;

    Py_XDECREF( par_request_url );
    par_request_url = NULL;

    Py_XDECREF( var_tr_enc );
    var_tr_enc = NULL;

    Py_XDECREF( var_encodings );
    var_encodings = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_8___init__ );
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
struct urllib3$response$$$function_8___init__$$$genexpr_1_genexpr_locals {
    PyObject *var_enc
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_8___init__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void urllib3$response$$$function_8___init__$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_enc = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_e829801848b103e8d9b04720aa0a54fd, module_urllib3$response, sizeof(void *)+sizeof(void *) );
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


        type_description_1 = "No";
        exception_lineno = 176;
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

        exception_lineno = 176;
        type_description_1 = "No";
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
        PyObject *old = var_enc;
        var_enc = tmp_assign_source_2;
        Py_INCREF( var_enc );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_enc;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 176;
    tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_strip );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "No";
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
            var_enc
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

    Py_XDECREF( var_enc );
    var_enc = NULL;

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

    Py_XDECREF( var_enc );
    var_enc = NULL;


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


static PyObject *impl_urllib3$response$$$function_9_get_redirect_location( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_5be94d50bf517c06df58916422775079 = NULL;

    struct Nuitka_FrameObject *frame_5be94d50bf517c06df58916422775079;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5be94d50bf517c06df58916422775079, codeobj_5be94d50bf517c06df58916422775079, module_urllib3$response, sizeof(void *) );
    frame_5be94d50bf517c06df58916422775079 = cache_frame_5be94d50bf517c06df58916422775079;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5be94d50bf517c06df58916422775079 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5be94d50bf517c06df58916422775079 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_REDIRECT_STATUSES );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 195;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    Py_DECREF( tmp_compare_left_1 );
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_headers );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_5be94d50bf517c06df58916422775079->m_frame.f_lineno = 196;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_location_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5be94d50bf517c06df58916422775079 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5be94d50bf517c06df58916422775079 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5be94d50bf517c06df58916422775079 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5be94d50bf517c06df58916422775079, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5be94d50bf517c06df58916422775079->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5be94d50bf517c06df58916422775079, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5be94d50bf517c06df58916422775079,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5be94d50bf517c06df58916422775079 == cache_frame_5be94d50bf517c06df58916422775079 )
    {
        Py_DECREF( frame_5be94d50bf517c06df58916422775079 );
    }
    cache_frame_5be94d50bf517c06df58916422775079 = NULL;

    assertFrameObject( frame_5be94d50bf517c06df58916422775079 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_9_get_redirect_location );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_9_get_redirect_location );
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


static PyObject *impl_urllib3$response$$$function_10_release_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_815772360b8e978dac52adb1a9678609 = NULL;

    struct Nuitka_FrameObject *frame_815772360b8e978dac52adb1a9678609;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_815772360b8e978dac52adb1a9678609, codeobj_815772360b8e978dac52adb1a9678609, module_urllib3$response, sizeof(void *) );
    frame_815772360b8e978dac52adb1a9678609 = cache_frame_815772360b8e978dac52adb1a9678609;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_815772360b8e978dac52adb1a9678609 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_815772360b8e978dac52adb1a9678609 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pool );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "o";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__connection );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "o";
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pool );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__put_conn );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__connection );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_815772360b8e978dac52adb1a9678609->m_frame.f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__connection, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_815772360b8e978dac52adb1a9678609 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_815772360b8e978dac52adb1a9678609 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_815772360b8e978dac52adb1a9678609 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_815772360b8e978dac52adb1a9678609, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_815772360b8e978dac52adb1a9678609->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_815772360b8e978dac52adb1a9678609, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_815772360b8e978dac52adb1a9678609,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_815772360b8e978dac52adb1a9678609 == cache_frame_815772360b8e978dac52adb1a9678609 )
    {
        Py_DECREF( frame_815772360b8e978dac52adb1a9678609 );
    }
    cache_frame_815772360b8e978dac52adb1a9678609 = NULL;

    assertFrameObject( frame_815772360b8e978dac52adb1a9678609 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_10_release_conn );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_10_release_conn );
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


static PyObject *impl_urllib3$response$$$function_11_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_4a7ca2092236dc49b0e7a78921b474db = NULL;

    struct Nuitka_FrameObject *frame_4a7ca2092236dc49b0e7a78921b474db;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a7ca2092236dc49b0e7a78921b474db, codeobj_4a7ca2092236dc49b0e7a78921b474db, module_urllib3$response, sizeof(void *) );
    frame_4a7ca2092236dc49b0e7a78921b474db = cache_frame_4a7ca2092236dc49b0e7a78921b474db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a7ca2092236dc49b0e7a78921b474db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a7ca2092236dc49b0e7a78921b474db ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__body );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 210;
        type_description_1 = "o";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__body );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
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

        exception_lineno = 213;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 213;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_90fe9e732780015bb58f5feb577b3482 );
    frame_4a7ca2092236dc49b0e7a78921b474db->m_frame.f_lineno = 214;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a7ca2092236dc49b0e7a78921b474db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a7ca2092236dc49b0e7a78921b474db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a7ca2092236dc49b0e7a78921b474db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a7ca2092236dc49b0e7a78921b474db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a7ca2092236dc49b0e7a78921b474db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a7ca2092236dc49b0e7a78921b474db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a7ca2092236dc49b0e7a78921b474db,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4a7ca2092236dc49b0e7a78921b474db == cache_frame_4a7ca2092236dc49b0e7a78921b474db )
    {
        Py_DECREF( frame_4a7ca2092236dc49b0e7a78921b474db );
    }
    cache_frame_4a7ca2092236dc49b0e7a78921b474db = NULL;

    assertFrameObject( frame_4a7ca2092236dc49b0e7a78921b474db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_11_data );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_11_data );
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


static PyObject *impl_urllib3$response$$$function_12_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_1e4e0afbc7cb4d36c676ce98ca196f22 = NULL;

    struct Nuitka_FrameObject *frame_1e4e0afbc7cb4d36c676ce98ca196f22;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1e4e0afbc7cb4d36c676ce98ca196f22, codeobj_1e4e0afbc7cb4d36c676ce98ca196f22, module_urllib3$response, sizeof(void *) );
    frame_1e4e0afbc7cb4d36c676ce98ca196f22 = cache_frame_1e4e0afbc7cb4d36c676ce98ca196f22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1e4e0afbc7cb4d36c676ce98ca196f22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1e4e0afbc7cb4d36c676ce98ca196f22 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__connection );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4e0afbc7cb4d36c676ce98ca196f22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4e0afbc7cb4d36c676ce98ca196f22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4e0afbc7cb4d36c676ce98ca196f22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e4e0afbc7cb4d36c676ce98ca196f22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e4e0afbc7cb4d36c676ce98ca196f22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e4e0afbc7cb4d36c676ce98ca196f22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e4e0afbc7cb4d36c676ce98ca196f22,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1e4e0afbc7cb4d36c676ce98ca196f22 == cache_frame_1e4e0afbc7cb4d36c676ce98ca196f22 )
    {
        Py_DECREF( frame_1e4e0afbc7cb4d36c676ce98ca196f22 );
    }
    cache_frame_1e4e0afbc7cb4d36c676ce98ca196f22 = NULL;

    assertFrameObject( frame_1e4e0afbc7cb4d36c676ce98ca196f22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_12_connection );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_12_connection );
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


static PyObject *impl_urllib3$response$$$function_13_isclosed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 = NULL;

    struct Nuitka_FrameObject *frame_a8dbac8a0e6ba7d4fbf9273fb72639e9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8dbac8a0e6ba7d4fbf9273fb72639e9, codeobj_a8dbac8a0e6ba7d4fbf9273fb72639e9, module_urllib3$response, sizeof(void *) );
    frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 = cache_frame_a8dbac8a0e6ba7d4fbf9273fb72639e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_is_fp_closed );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_fp_closed );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_fp_closed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_a8dbac8a0e6ba7d4fbf9273fb72639e9->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8dbac8a0e6ba7d4fbf9273fb72639e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8dbac8a0e6ba7d4fbf9273fb72639e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8dbac8a0e6ba7d4fbf9273fb72639e9,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 == cache_frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 )
    {
        Py_DECREF( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 );
    }
    cache_frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 = NULL;

    assertFrameObject( frame_a8dbac8a0e6ba7d4fbf9273fb72639e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_13_isclosed );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_13_isclosed );
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


static PyObject *impl_urllib3$response$$$function_14_tell( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_4406219381127b6fa2ea658038e5f8c1 = NULL;

    struct Nuitka_FrameObject *frame_4406219381127b6fa2ea658038e5f8c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4406219381127b6fa2ea658038e5f8c1, codeobj_4406219381127b6fa2ea658038e5f8c1, module_urllib3$response, sizeof(void *) );
    frame_4406219381127b6fa2ea658038e5f8c1 = cache_frame_4406219381127b6fa2ea658038e5f8c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4406219381127b6fa2ea658038e5f8c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4406219381127b6fa2ea658038e5f8c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp_bytes_read );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4406219381127b6fa2ea658038e5f8c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4406219381127b6fa2ea658038e5f8c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4406219381127b6fa2ea658038e5f8c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4406219381127b6fa2ea658038e5f8c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4406219381127b6fa2ea658038e5f8c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4406219381127b6fa2ea658038e5f8c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4406219381127b6fa2ea658038e5f8c1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4406219381127b6fa2ea658038e5f8c1 == cache_frame_4406219381127b6fa2ea658038e5f8c1 )
    {
        Py_DECREF( frame_4406219381127b6fa2ea658038e5f8c1 );
    }
    cache_frame_4406219381127b6fa2ea658038e5f8c1 = NULL;

    assertFrameObject( frame_4406219381127b6fa2ea658038e5f8c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_14_tell );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_14_tell );
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


static PyObject *impl_urllib3$response$$$function_15__init_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request_method = python_pars[ 1 ];
    PyObject *var_length = NULL;
    PyObject *var_lengths = NULL;
    PyObject *var_status = NULL;
    PyObject *outline_0_var_val = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_2bb76c3bc46721e366121eb6602fc625_2 = NULL;

    struct Nuitka_FrameObject *frame_2bb76c3bc46721e366121eb6602fc625_2;

    static struct Nuitka_FrameObject *cache_frame_51acd91497d3882d64e84ec677c0df77 = NULL;

    struct Nuitka_FrameObject *frame_51acd91497d3882d64e84ec677c0df77;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_51acd91497d3882d64e84ec677c0df77, codeobj_51acd91497d3882d64e84ec677c0df77, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_51acd91497d3882d64e84ec677c0df77 = cache_frame_51acd91497d3882d64e84ec677c0df77;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_51acd91497d3882d64e84ec677c0df77 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_51acd91497d3882d64e84ec677c0df77 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = 235;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_digest_db51a9f73f100ec22d319265c4417c10_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_length == NULL );
    var_length = tmp_assign_source_1;

    tmp_compare_left_1 = var_length;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
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

        exception_lineno = 238;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_chunked );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 238;
        type_description_1 = "ooooo";
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
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = 242;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_warning, &PyTuple_GET_ITEM( const_tuple_str_digest_8a73745eea869768cd9140b80d6ca0f2_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    // Tried code:
    tmp_called_instance_3 = var_length;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = 255;
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_4;

    tmp_assign_source_5 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_5;

    MAKE_OR_REUSE_FRAME( cache_frame_2bb76c3bc46721e366121eb6602fc625_2, codeobj_2bb76c3bc46721e366121eb6602fc625, module_urllib3$response, sizeof(void *) );
    frame_2bb76c3bc46721e366121eb6602fc625_2 = cache_frame_2bb76c3bc46721e366121eb6602fc625_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2bb76c3bc46721e366121eb6602fc625_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2bb76c3bc46721e366121eb6602fc625_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_listcomp_1__$0;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_2 = "o";
        exception_lineno = 255;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_1;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 255;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_5;
    branch_end_3:;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = outline_0_var_val;
        outline_0_var_val = tmp_assign_source_7;
        Py_INCREF( outline_0_var_val );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_int_arg_1 = outline_0_var_val;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bb76c3bc46721e366121eb6602fc625_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bb76c3bc46721e366121eb6602fc625_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bb76c3bc46721e366121eb6602fc625_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2bb76c3bc46721e366121eb6602fc625_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2bb76c3bc46721e366121eb6602fc625_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2bb76c3bc46721e366121eb6602fc625_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2bb76c3bc46721e366121eb6602fc625_2,
        type_description_2,
        outline_0_var_val
    );


    // Release cached frame.
    if ( frame_2bb76c3bc46721e366121eb6602fc625_2 == cache_frame_2bb76c3bc46721e366121eb6602fc625_2 )
    {
        Py_DECREF( frame_2bb76c3bc46721e366121eb6602fc625_2 );
    }
    cache_frame_2bb76c3bc46721e366121eb6602fc625_2 = NULL;

    assertFrameObject( frame_2bb76c3bc46721e366121eb6602fc625_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF( outline_0_var_val );
    outline_0_var_val = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_val );
    outline_0_var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    outline_exception_1:;
    exception_lineno = 255;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_set_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_3 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    assert( var_lengths == NULL );
    var_lengths = tmp_assign_source_3;

    tmp_len_arg_1 = var_lengths;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_InvalidHeader );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidHeader );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "InvalidHeader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_left_name_1 = const_str_digest_18d49cb45ca224d6652f6f1e7b400776;
    tmp_right_name_1 = var_length;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = 257;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 257;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_no_4:;
    tmp_called_instance_4 = var_lengths;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lengths" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = 259;
    tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_pop );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_length;
        var_length = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_assign_source_9 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_9;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_51acd91497d3882d64e84ec677c0df77, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_51acd91497d3882d64e84ec677c0df77, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = PyExc_ValueError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooo";
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_10 = Py_None;
    {
        PyObject *old = var_length;
        var_length = tmp_assign_source_10;
        Py_INCREF( var_length );
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 249;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_51acd91497d3882d64e84ec677c0df77->m_frame) frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_7;
    branch_end_5:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_compare_left_5 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_True;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compare_left_6 = var_length;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_11 = Py_None;
    {
        PyObject *old = var_length;
        var_length = tmp_assign_source_11;
        Py_INCREF( var_length );
        Py_XDECREF( old );
    }

    branch_no_7:;
    branch_no_6:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_1:;
    // Tried code:
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "ooooo";
        goto try_except_handler_8;
    }

    tmp_int_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_status );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_12 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "ooooo";
        goto try_except_handler_8;
    }
    assert( var_status == NULL );
    var_status = tmp_assign_source_12;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_51acd91497d3882d64e84ec677c0df77, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_51acd91497d3882d64e84ec677c0df77, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    tmp_compare_left_7 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_7 = PyExc_ValueError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "ooooo";
        goto try_except_handler_9;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_13 = const_int_0;
    assert( var_status == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_status = tmp_assign_source_13;

    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 268;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_51acd91497d3882d64e84ec677c0df77->m_frame) frame_51acd91497d3882d64e84ec677c0df77->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_9;
    branch_end_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    // End of try:
    try_end_5:;
    tmp_compexpr_left_1 = var_status;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_tuple_int_pos_204_int_pos_304_tuple;
    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
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
    // Tried code:
    tmp_assign_source_14 = var_status;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto try_except_handler_10;
    }

    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_14;

    tmp_compexpr_left_2 = const_int_pos_100;
    tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_2 );
    tmp_assign_source_15 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto try_except_handler_10;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_15;

    tmp_cond_value_3 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_10;
    }
    else
    {
        goto branch_yes_10;
    }
    branch_yes_10:;
    tmp_outline_return_value_2 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_10;
    branch_no_10:;
    tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = const_int_pos_200;
    tmp_outline_return_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto try_except_handler_10;
    }
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    outline_result_2:;
    tmp_or_left_value_2 = tmp_outline_return_value_2;
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_compexpr_left_4 = par_request_method;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "request_method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = const_str_plain_HEAD;
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_16 = const_int_0;
    {
        PyObject *old = var_length;
        var_length = tmp_assign_source_16;
        Py_INCREF( var_length );
        Py_XDECREF( old );
    }

    branch_no_9:;
    tmp_return_value = var_length;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51acd91497d3882d64e84ec677c0df77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_51acd91497d3882d64e84ec677c0df77 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51acd91497d3882d64e84ec677c0df77 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51acd91497d3882d64e84ec677c0df77, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51acd91497d3882d64e84ec677c0df77->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51acd91497d3882d64e84ec677c0df77, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51acd91497d3882d64e84ec677c0df77,
        type_description_1,
        par_self,
        par_request_method,
        var_length,
        var_lengths,
        var_status
    );


    // Release cached frame.
    if ( frame_51acd91497d3882d64e84ec677c0df77 == cache_frame_51acd91497d3882d64e84ec677c0df77 )
    {
        Py_DECREF( frame_51acd91497d3882d64e84ec677c0df77 );
    }
    cache_frame_51acd91497d3882d64e84ec677c0df77 = NULL;

    assertFrameObject( frame_51acd91497d3882d64e84ec677c0df77 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request_method );
    par_request_method = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_lengths );
    var_lengths = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_request_method );
    par_request_method = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_lengths );
    var_lengths = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_15__init_length );
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


static PyObject *impl_urllib3$response$$$function_16__init_decoder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_content_encoding = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_7232cb6405aa0f895f858aeeb7741416 = NULL;

    struct Nuitka_FrameObject *frame_7232cb6405aa0f895f858aeeb7741416;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7232cb6405aa0f895f858aeeb7741416, codeobj_7232cb6405aa0f895f858aeeb7741416, module_urllib3$response, sizeof(void *)+sizeof(void *) );
    frame_7232cb6405aa0f895f858aeeb7741416 = cache_frame_7232cb6405aa0f895f858aeeb7741416;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7232cb6405aa0f895f858aeeb7741416 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7232cb6405aa0f895f858aeeb7741416 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_7232cb6405aa0f895f858aeeb7741416->m_frame.f_lineno = 285;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_digest_a62b7cff9fd4ca2a8eaad598860048c0_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_7232cb6405aa0f895f858aeeb7741416->m_frame.f_lineno = 285;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_content_encoding == NULL );
    var_content_encoding = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__decoder );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = var_content_encoding;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content_encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CONTENT_DECODERS );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain__get_decoder );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_decoder );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_decoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_content_encoding;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "content_encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_7232cb6405aa0f895f858aeeb7741416->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oo";
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

        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__decoder, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7232cb6405aa0f895f858aeeb7741416 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7232cb6405aa0f895f858aeeb7741416 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7232cb6405aa0f895f858aeeb7741416, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7232cb6405aa0f895f858aeeb7741416->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7232cb6405aa0f895f858aeeb7741416, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7232cb6405aa0f895f858aeeb7741416,
        type_description_1,
        par_self,
        var_content_encoding
    );


    // Release cached frame.
    if ( frame_7232cb6405aa0f895f858aeeb7741416 == cache_frame_7232cb6405aa0f895f858aeeb7741416 )
    {
        Py_DECREF( frame_7232cb6405aa0f895f858aeeb7741416 );
    }
    cache_frame_7232cb6405aa0f895f858aeeb7741416 = NULL;

    assertFrameObject( frame_7232cb6405aa0f895f858aeeb7741416 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_16__init_decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_content_encoding );
    var_content_encoding = NULL;

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

    Py_XDECREF( var_content_encoding );
    var_content_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_16__init_decoder );
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


static PyObject *impl_urllib3$response$$$function_17__decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_decode_content = python_pars[ 2 ];
    PyObject *par_flush_decoder = python_pars[ 3 ];
    PyObject *var_e = NULL;
    PyObject *var_content_encoding = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_d0c59b08485898e1b6ee26ece751ace5 = NULL;

    struct Nuitka_FrameObject *frame_d0c59b08485898e1b6ee26ece751ace5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0c59b08485898e1b6ee26ece751ace5, codeobj_d0c59b08485898e1b6ee26ece751ace5, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0c59b08485898e1b6ee26ece751ace5 = cache_frame_d0c59b08485898e1b6ee26ece751ace5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0c59b08485898e1b6ee26ece751ace5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0c59b08485898e1b6ee26ece751ace5 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_and_left_value_1 = par_decode_content;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__decoder );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 294;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__decoder );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decompress );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_d0c59b08485898e1b6ee26ece751ace5->m_frame.f_lineno = 295;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_data;
        par_data = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d0c59b08485898e1b6ee26ece751ace5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d0c59b08485898e1b6ee26ece751ace5, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_tuple_element_1 = PyExc_IOError;
    tmp_compare_right_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zlib );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_right_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zlib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 296;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_error );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 296;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
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
    tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_e = tmp_assign_source_2;

    // Tried code:
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_headers );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    frame_d0c59b08485898e1b6ee26ece751ace5->m_frame.f_lineno = 297;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_digest_a62b7cff9fd4ca2a8eaad598860048c0_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    frame_d0c59b08485898e1b6ee26ece751ace5->m_frame.f_lineno = 297;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    assert( var_content_encoding == NULL );
    var_content_encoding = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_DecodeError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DecodeError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DecodeError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_left_name_1 = const_str_digest_5b822072613297976c8a6e8c4235d2b7;
    tmp_right_name_1 = var_content_encoding;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_3 = var_e;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 300;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    frame_d0c59b08485898e1b6ee26ece751ace5->m_frame.f_lineno = 298;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 298;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto try_except_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_17__decode );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 293;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d0c59b08485898e1b6ee26ece751ace5->m_frame) frame_d0c59b08485898e1b6ee26ece751ace5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_17__decode );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    tmp_and_left_value_2 = par_flush_decoder;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flush_decoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
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
    tmp_and_right_value_2 = par_decode_content;

    if ( tmp_and_right_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "oooooo";
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


        exception_lineno = 302;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_2 = par_data;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = par_self;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_d0c59b08485898e1b6ee26ece751ace5->m_frame.f_lineno = 303;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__flush_decoder );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_4 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    par_data = tmp_assign_source_4;

    branch_no_3:;
    tmp_return_value = par_data;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0c59b08485898e1b6ee26ece751ace5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0c59b08485898e1b6ee26ece751ace5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0c59b08485898e1b6ee26ece751ace5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0c59b08485898e1b6ee26ece751ace5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0c59b08485898e1b6ee26ece751ace5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0c59b08485898e1b6ee26ece751ace5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0c59b08485898e1b6ee26ece751ace5,
        type_description_1,
        par_self,
        par_data,
        par_decode_content,
        par_flush_decoder,
        var_e,
        var_content_encoding
    );


    // Release cached frame.
    if ( frame_d0c59b08485898e1b6ee26ece751ace5 == cache_frame_d0c59b08485898e1b6ee26ece751ace5 )
    {
        Py_DECREF( frame_d0c59b08485898e1b6ee26ece751ace5 );
    }
    cache_frame_d0c59b08485898e1b6ee26ece751ace5 = NULL;

    assertFrameObject( frame_d0c59b08485898e1b6ee26ece751ace5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_17__decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_decode_content );
    par_decode_content = NULL;

    Py_XDECREF( par_flush_decoder );
    par_flush_decoder = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_decode_content );
    par_decode_content = NULL;

    Py_XDECREF( par_flush_decoder );
    par_flush_decoder = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_content_encoding );
    var_content_encoding = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_17__decode );
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


static PyObject *impl_urllib3$response$$$function_18__flush_decoder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_buf = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_14944cba7a05bf27856b8e3a5f83fd43 = NULL;

    struct Nuitka_FrameObject *frame_14944cba7a05bf27856b8e3a5f83fd43;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14944cba7a05bf27856b8e3a5f83fd43, codeobj_14944cba7a05bf27856b8e3a5f83fd43, module_urllib3$response, sizeof(void *)+sizeof(void *) );
    frame_14944cba7a05bf27856b8e3a5f83fd43 = cache_frame_14944cba7a05bf27856b8e3a5f83fd43;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14944cba7a05bf27856b8e3a5f83fd43 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14944cba7a05bf27856b8e3a5f83fd43 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__decoder );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 312;
        type_description_1 = "oo";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__decoder );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_14944cba7a05bf27856b8e3a5f83fd43->m_frame.f_lineno = 313;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decompress, &PyTuple_GET_ITEM( const_tuple_bytes_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_buf == NULL );
    var_buf = tmp_assign_source_1;

    tmp_left_name_1 = var_buf;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__decoder );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_14944cba7a05bf27856b8e3a5f83fd43->m_frame.f_lineno = 314;
    tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_flush );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14944cba7a05bf27856b8e3a5f83fd43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14944cba7a05bf27856b8e3a5f83fd43 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14944cba7a05bf27856b8e3a5f83fd43 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14944cba7a05bf27856b8e3a5f83fd43, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14944cba7a05bf27856b8e3a5f83fd43->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14944cba7a05bf27856b8e3a5f83fd43, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14944cba7a05bf27856b8e3a5f83fd43,
        type_description_1,
        par_self,
        var_buf
    );


    // Release cached frame.
    if ( frame_14944cba7a05bf27856b8e3a5f83fd43 == cache_frame_14944cba7a05bf27856b8e3a5f83fd43 )
    {
        Py_DECREF( frame_14944cba7a05bf27856b8e3a5f83fd43 );
    }
    cache_frame_14944cba7a05bf27856b8e3a5f83fd43 = NULL;

    assertFrameObject( frame_14944cba7a05bf27856b8e3a5f83fd43 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = const_bytes_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_18__flush_decoder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_buf );
    var_buf = NULL;

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

    Py_XDECREF( var_buf );
    var_buf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_18__flush_decoder );
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


static PyObject *impl_urllib3$response$$$function_19__error_catcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher_context,
        module_urllib3$response,
        const_str_plain__error_catcher,
#if PYTHON_VERSION >= 350
        const_str_digest_f7b5c3ce3f21d2c936332c7ea87d4366,
#endif
        codeobj_531044ea0c6c8da9bdf9abe8e7574c65,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    assert( Py_SIZE( tmp_return_value ) >= 1 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_19__error_catcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_19__error_catcher );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher_locals {
    PyObject *var_clean_exit
    PyObject *var_e
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unicode_arg_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_clean_exit = NULL;
    PyObject *var_e = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unicode_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    tmp_assign_source_1 = Py_False;
    assert( var_clean_exit == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_clean_exit = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_531044ea0c6c8da9bdf9abe8e7574c65, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    // Tried code:
    tmp_expression_name_1 = Py_None;
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "coo";
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketTimeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }

    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "coo";
        goto try_except_handler_4;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pool );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = Py_None;
    tmp_args_element_name_3 = const_str_digest_5141c13fc1586905d04453154b9d176e;
    generator->m_frame->m_frame.f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 336;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "coo";
    goto try_except_handler_4;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_BaseSSLError );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseSSLError );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseSSLError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }

    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_e = tmp_assign_source_2;

    // Tried code:
    tmp_compare_left_3 = const_str_digest_67fc44cf811e69ed10c4b2dfd2549d69;
    tmp_unicode_arg_1 = var_e;

    CHECK_OBJECT( tmp_unicode_arg_1 );
    tmp_compare_right_3 = PyObject_Unicode( tmp_unicode_arg_1 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "coo";
        goto try_except_handler_5;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 343;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "coo";
    goto try_except_handler_5;
    branch_no_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadTimeoutError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "coo";
        goto try_except_handler_5;
    }

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_2 = NULL;
    }
    else
    {
        tmp_source_name_2 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "coo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pool );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "coo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_5 = Py_None;
    tmp_args_element_name_6 = const_str_digest_5141c13fc1586905d04453154b9d176e;
    generator->m_frame->m_frame.f_lineno = 345;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "coo";
        goto try_except_handler_5;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 345;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "coo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher );
    return;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPException );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPException );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }

    tmp_compare_right_4 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_SocketError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SocketError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_4, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "coo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_3;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ProtocolError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ProtocolError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "coo";
        goto try_except_handler_6;
    }

    tmp_left_name_1 = const_str_digest_dc6e1bc5c5d41f5446ae6509fcb24069;
    tmp_right_name_1 = var_e;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "coo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_8 = var_e;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "coo";
        goto try_except_handler_6;
    }

    generator->m_frame->m_frame.f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "coo";
        goto try_except_handler_6;
    }
    exception_type = tmp_raise_type_3;
    exception_lineno = 349;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "coo";
    goto try_except_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher );
    return;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 330;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "coo";
    goto try_except_handler_4;
    branch_end_4:;
    branch_end_2:;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher );
    return;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, generator->m_frame, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_cond_value_1 = var_clean_exit;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "clean_exit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__original_response );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 361;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_4 = NULL;
    }
    else
    {
        tmp_source_name_4 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 362;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__original_response );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    generator->m_frame->m_frame.f_lineno = 362;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__connection );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 367;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_6 = NULL;
    }
    else
    {
        tmp_source_name_6 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__connection );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    generator->m_frame->m_frame.f_lineno = 368;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 368;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    branch_no_5:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_7 = NULL;
    }
    else
    {
        tmp_source_name_7 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__original_response );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
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
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__original_response );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    generator->m_frame->m_frame.f_lineno = 372;
    tmp_and_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_isclosed );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_instance_4 = NULL;
    }
    else
    {
        tmp_called_instance_4 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }

    generator->m_frame->m_frame.f_lineno = 373;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_release_conn );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "coo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 329;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "coo";
    goto try_except_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_19__error_catcher$$$genobj_1__error_catcher );
    return;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    Py_XDECREF( var_clean_exit );
    var_clean_exit = NULL;

    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_9 = NULL;
    }
    else
    {
        tmp_source_name_9 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__original_response );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 372;
        type_description_1 = "coo";
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
    if ( generator->m_closure[0] == NULL )
    {
        tmp_source_name_10 = NULL;
    }
    else
    {
        tmp_source_name_10 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__original_response );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 372;
    tmp_and_right_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_isclosed );
    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_5 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 372;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_instance_6 = NULL;
    }
    else
    {
        tmp_called_instance_6 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 373;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_release_conn );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;

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
            generator->m_closure[0],
            var_clean_exit,
            var_e
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
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_clean_exit );
    var_clean_exit = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( var_clean_exit );
    var_clean_exit = NULL;


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


static PyObject *impl_urllib3$response$$$function_20_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_amt = python_pars[ 1 ];
    PyObject *par_decode_content = python_pars[ 2 ];
    PyObject *par_cache_content = python_pars[ 3 ];
    PyObject *var_flush_decoder = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    bool tmp_isnot_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b4f4b0b77dace4020608b02283c75e87 = NULL;

    struct Nuitka_FrameObject *frame_b4f4b0b77dace4020608b02283c75e87;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4f4b0b77dace4020608b02283c75e87, codeobj_b4f4b0b77dace4020608b02283c75e87, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4f4b0b77dace4020608b02283c75e87 = cache_frame_b4f4b0b77dace4020608b02283c75e87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4f4b0b77dace4020608b02283c75e87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4f4b0b77dace4020608b02283c75e87 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 396;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__init_decoder );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = par_decode_content;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

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

        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode_content );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_decode_content;
        par_decode_content = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fp );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_assign_source_2 = Py_False;
    assert( var_flush_decoder == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_flush_decoder = tmp_assign_source_2;

    tmp_assign_source_3 = Py_None;
    assert( var_data == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_data = tmp_assign_source_3;

    // Tried code:
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 406;
    tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__error_catcher );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_4;

    tmp_source_name_3 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 406;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_5;

    tmp_source_name_4 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_6 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_6;

    tmp_assign_source_7 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_7 );
    tmp_with_1__indicator = tmp_assign_source_7;

    // Tried code:
    // Tried code:
    tmp_compare_left_3 = par_amt;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__fp );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 409;
    tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_read );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = Py_True;
    {
        PyObject *old = var_flush_decoder;
        var_flush_decoder = tmp_assign_source_9;
        Py_INCREF( var_flush_decoder );
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_10 = Py_False;
    {
        PyObject *old = par_cache_content;
        par_cache_content = tmp_assign_source_10;
        Py_INCREF( par_cache_content );
        Py_XDECREF( old );
    }

    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 413;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__fp );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_read );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = par_amt;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 413;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = par_amt;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
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
    tmp_operand_name_1 = var_data;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
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

        exception_lineno = 414;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__fp );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 422;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_12 = Py_True;
    {
        PyObject *old = var_flush_decoder;
        var_flush_decoder = tmp_assign_source_12;
        Py_INCREF( var_flush_decoder );
        Py_XDECREF( old );
    }

    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_and_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_enforce_content_length );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
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
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_length_remaining );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_compexpr_right_2 = const_tuple_int_0_none_tuple;
    tmp_and_right_value_2 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    Py_INCREF( tmp_and_right_value_2 );
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
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 424;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_IncompleteRead );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IncompleteRead );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "IncompleteRead" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__fp_bytes_read );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_length_remaining );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 430;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 430;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto try_except_handler_4;
    branch_no_5:;
    branch_no_4:;
    branch_end_3:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b4f4b0b77dace4020608b02283c75e87, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b4f4b0b77dace4020608b02283c75e87, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_13 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_13;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
    tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
    tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 406;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 406;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b4f4b0b77dace4020608b02283c75e87->m_frame) frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_5;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 406;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b4f4b0b77dace4020608b02283c75e87->m_frame) frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_5;
    branch_end_6:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_20_read );
    return NULL;
    // End of try:
    try_end_1:;
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

    tmp_compare_left_5 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_True;
    tmp_is_4 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_4 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 406;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    tmp_compare_left_6 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_True;
    tmp_is_5 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_5 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_name_6 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_6 );
    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 406;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_cond_value_4 = var_data;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 432;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__fp_bytes_read );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_14;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_len_arg_1 = var_data;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_15 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_15;

    // Tried code:
    tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__fp_bytes_read, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 433;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_length_remaining );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_length_remaining );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_2__start == NULL );
    tmp_inplace_assign_attr_2__start = tmp_assign_source_16;

    // Tried code:
    tmp_left_name_2 = tmp_inplace_assign_attr_2__start;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_len_arg_2 = var_data;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_17 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto try_except_handler_8;
    }
    assert( tmp_inplace_assign_attr_2__end == NULL );
    tmp_inplace_assign_attr_2__end = tmp_assign_source_17;

    // Tried code:
    tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto try_except_handler_9;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_length_remaining, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "oooooo";
        goto try_except_handler_9;
    }
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    branch_no_11:;
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__decode );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_data;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_decode_content;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_flush_decoder;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flush_decoder" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_b4f4b0b77dace4020608b02283c75e87->m_frame.f_lineno = 437;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_cond_value_5 = par_cache_content;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cache_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 439;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assattr_name_3 = var_data;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 440;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__body, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    branch_no_10:;
    tmp_return_value = var_data;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f4b0b77dace4020608b02283c75e87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f4b0b77dace4020608b02283c75e87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f4b0b77dace4020608b02283c75e87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4f4b0b77dace4020608b02283c75e87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4f4b0b77dace4020608b02283c75e87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4f4b0b77dace4020608b02283c75e87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4f4b0b77dace4020608b02283c75e87,
        type_description_1,
        par_self,
        par_amt,
        par_decode_content,
        par_cache_content,
        var_flush_decoder,
        var_data
    );


    // Release cached frame.
    if ( frame_b4f4b0b77dace4020608b02283c75e87 == cache_frame_b4f4b0b77dace4020608b02283c75e87 )
    {
        Py_DECREF( frame_b4f4b0b77dace4020608b02283c75e87 );
    }
    cache_frame_b4f4b0b77dace4020608b02283c75e87 = NULL;

    assertFrameObject( frame_b4f4b0b77dace4020608b02283c75e87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_20_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_amt );
    par_amt = NULL;

    Py_XDECREF( par_decode_content );
    par_decode_content = NULL;

    Py_XDECREF( par_cache_content );
    par_cache_content = NULL;

    Py_XDECREF( var_flush_decoder );
    var_flush_decoder = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_amt );
    par_amt = NULL;

    Py_XDECREF( par_decode_content );
    par_decode_content = NULL;

    Py_XDECREF( par_cache_content );
    par_cache_content = NULL;

    Py_XDECREF( var_flush_decoder );
    var_flush_decoder = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_20_read );
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


static PyObject *impl_urllib3$response$$$function_21_stream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_amt = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_decode_content = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        urllib3$response$$$function_21_stream$$$genobj_1_stream_context,
        module_urllib3$response,
        const_str_plain_stream,
#if PYTHON_VERSION >= 350
        const_str_digest_3cd0a7aaf12d4cbd86fc72d422b326f4,
#endif
        codeobj_ef5a5d3cce32dce868a24a38e48a0e04,
        3
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_amt;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_decode_content;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    assert( Py_SIZE( tmp_return_value ) >= 3 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_21_stream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_amt );
    Py_DECREF( par_amt );
    par_amt = NULL;

    CHECK_OBJECT( (PyObject *)par_decode_content );
    Py_DECREF( par_decode_content );
    par_decode_content = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_amt );
    Py_DECREF( par_amt );
    par_amt = NULL;

    CHECK_OBJECT( (PyObject *)par_decode_content );
    Py_DECREF( par_decode_content );
    par_decode_content = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_21_stream );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct urllib3$response$$$function_21_stream$$$genobj_1_stream_locals {
    PyObject *var_line
    PyObject *var_data
    PyObject *tmp_for_loop_1__for_iterator
    PyObject *tmp_for_loop_1__iter_value
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_21_stream$$$genobj_1_stream_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void urllib3$response$$$function_21_stream$$$genobj_1_stream_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_line = NULL;
    PyObject *var_data = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_ef5a5d3cce32dce868a24a38e48a0e04, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 460;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_chunked );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 460;
        type_description_1 = "cccoo";
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
    if ( generator->m_closure[2] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 460;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 460;
    tmp_and_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_supports_chunked_reads );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 460;
        type_description_1 = "cccoo";
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
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_2 = NULL;
    }
    else
    {
        tmp_source_name_2 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_read_chunked );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[0] == NULL )
    {
        tmp_tuple_element_1 = NULL;
    }
    else
    {
        tmp_tuple_element_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_decode_content;
    if ( generator->m_closure[1] == NULL )
    {
        tmp_dict_value_1 = NULL;
    }
    else
    {
        tmp_dict_value_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 461;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "cccoo";
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


        type_description_1 = "cccoo";
        exception_lineno = 461;
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

        exception_lineno = 461;
        type_description_1 = "cccoo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_3;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_expression_name_1 = var_line;

    CHECK_OBJECT( tmp_expression_name_1 );
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 462;
        type_description_1 = "cccoo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "cccoo";
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto branch_end_1;
    branch_no_1:;
    loop_start_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_is_fp_closed );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_fp_closed );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_fp_closed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 464;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_3 = NULL;
    }
    else
    {
        tmp_source_name_3 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 464;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 464;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 464;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_2;
    branch_no_3:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_4 = NULL;
    }
    else
    {
        tmp_source_name_4 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 465;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_amt;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_dict_value_2 = NULL;
    }
    else
    {
        tmp_dict_value_2 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 465;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_decode_content;
    if ( generator->m_closure[1] == NULL )
    {
        tmp_dict_value_3 = NULL;
    }
    else
    {
        tmp_dict_value_3 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 465;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 465;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = var_data;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "cccoo";
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
    tmp_expression_name_2 = var_data;

    CHECK_OBJECT( tmp_expression_name_2 );
    Py_INCREF( tmp_expression_name_2 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 468;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    branch_end_1:;

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
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1],
            var_line,
            var_data
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

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;


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


static PyObject *impl_urllib3$response$$$function_22_from_httplib( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ResponseCls = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    PyObject *par_response_kw = python_pars[ 2 ];
    PyObject *var_headers = NULL;
    PyObject *var_strict = NULL;
    PyObject *var_resp = NULL;
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
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_a7bec840cd65c11d4ce1c90f1c7258b5 = NULL;

    struct Nuitka_FrameObject *frame_a7bec840cd65c11d4ce1c90f1c7258b5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7bec840cd65c11d4ce1c90f1c7258b5, codeobj_a7bec840cd65c11d4ce1c90f1c7258b5, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a7bec840cd65c11d4ce1c90f1c7258b5 = cache_frame_a7bec840cd65c11d4ce1c90f1c7258b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7bec840cd65c11d4ce1c90f1c7258b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7bec840cd65c11d4ce1c90f1c7258b5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_r;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_msg );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_headers == NULL );
    var_headers = tmp_assign_source_1;

    tmp_isinstance_inst_1 = var_headers;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_PY3 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY3" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 482;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        type_description_1 = "oooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = var_headers;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_a7bec840cd65c11d4ce1c90f1c7258b5->m_frame.f_lineno = 483;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_a7bec840cd65c11d4ce1c90f1c7258b5->m_frame.f_lineno = 483;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_headers;
        var_headers = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HTTPHeaderDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 485;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_from_httplib );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 485;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_headers;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 485;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_a7bec840cd65c11d4ce1c90f1c7258b5->m_frame.f_lineno = 485;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 485;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_headers;
        var_headers = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_end_2:;
    branch_no_1:;
    tmp_getattr_target_1 = par_r;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 488;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_attr_1 = const_str_plain_strict;
    tmp_getattr_default_1 = const_int_0;
    tmp_assign_source_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_strict == NULL );
    var_strict = tmp_assign_source_4;

    tmp_dircall_arg1_1 = par_ResponseCls;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ResponseCls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 489;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_body;
    tmp_dict_value_1 = par_r;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 489;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 7 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_headers;
    tmp_dict_value_2 = var_headers;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "headers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 490;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_status;
    tmp_source_name_3 = par_r;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 491;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_status );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 491;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_version;
    tmp_source_name_4 = par_r;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 492;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_version );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 492;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_reason;
    tmp_source_name_5 = par_r;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 493;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reason );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 493;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_strict;
    tmp_dict_value_6 = var_strict;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "strict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 494;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_original_response;
    tmp_dict_value_7 = par_r;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 495;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = par_response_kw;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "response_kw" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 496;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_5 = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 489;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_resp == NULL );
    var_resp = tmp_assign_source_5;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7bec840cd65c11d4ce1c90f1c7258b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7bec840cd65c11d4ce1c90f1c7258b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7bec840cd65c11d4ce1c90f1c7258b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7bec840cd65c11d4ce1c90f1c7258b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7bec840cd65c11d4ce1c90f1c7258b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7bec840cd65c11d4ce1c90f1c7258b5,
        type_description_1,
        par_ResponseCls,
        par_r,
        par_response_kw,
        var_headers,
        var_strict,
        var_resp
    );


    // Release cached frame.
    if ( frame_a7bec840cd65c11d4ce1c90f1c7258b5 == cache_frame_a7bec840cd65c11d4ce1c90f1c7258b5 )
    {
        Py_DECREF( frame_a7bec840cd65c11d4ce1c90f1c7258b5 );
    }
    cache_frame_a7bec840cd65c11d4ce1c90f1c7258b5 = NULL;

    assertFrameObject( frame_a7bec840cd65c11d4ce1c90f1c7258b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_resp;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_22_from_httplib );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_ResponseCls );
    par_ResponseCls = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_response_kw );
    par_response_kw = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_strict );
    var_strict = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

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

    Py_XDECREF( par_ResponseCls );
    par_ResponseCls = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_response_kw );
    par_response_kw = NULL;

    Py_XDECREF( var_headers );
    var_headers = NULL;

    Py_XDECREF( var_strict );
    var_strict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_22_from_httplib );
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


static PyObject *impl_urllib3$response$$$function_23_getheaders( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_c443e075b926834d81f1a3f2a831fd85 = NULL;

    struct Nuitka_FrameObject *frame_c443e075b926834d81f1a3f2a831fd85;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c443e075b926834d81f1a3f2a831fd85, codeobj_c443e075b926834d81f1a3f2a831fd85, module_urllib3$response, sizeof(void *) );
    frame_c443e075b926834d81f1a3f2a831fd85 = cache_frame_c443e075b926834d81f1a3f2a831fd85;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c443e075b926834d81f1a3f2a831fd85 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c443e075b926834d81f1a3f2a831fd85 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 501;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c443e075b926834d81f1a3f2a831fd85 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c443e075b926834d81f1a3f2a831fd85 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c443e075b926834d81f1a3f2a831fd85 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c443e075b926834d81f1a3f2a831fd85, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c443e075b926834d81f1a3f2a831fd85->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c443e075b926834d81f1a3f2a831fd85, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c443e075b926834d81f1a3f2a831fd85,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c443e075b926834d81f1a3f2a831fd85 == cache_frame_c443e075b926834d81f1a3f2a831fd85 )
    {
        Py_DECREF( frame_c443e075b926834d81f1a3f2a831fd85 );
    }
    cache_frame_c443e075b926834d81f1a3f2a831fd85 = NULL;

    assertFrameObject( frame_c443e075b926834d81f1a3f2a831fd85 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_23_getheaders );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_23_getheaders );
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


static PyObject *impl_urllib3$response$$$function_24_getheader( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_default = python_pars[ 2 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_4d77abbad7fa5892ecf5d44d76e33431 = NULL;

    struct Nuitka_FrameObject *frame_4d77abbad7fa5892ecf5d44d76e33431;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d77abbad7fa5892ecf5d44d76e33431, codeobj_4d77abbad7fa5892ecf5d44d76e33431, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d77abbad7fa5892ecf5d44d76e33431 = cache_frame_4d77abbad7fa5892ecf5d44d76e33431;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d77abbad7fa5892ecf5d44d76e33431 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d77abbad7fa5892ecf5d44d76e33431 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_headers );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 504;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 504;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_name;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 504;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_default;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 504;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4d77abbad7fa5892ecf5d44d76e33431->m_frame.f_lineno = 504;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 504;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d77abbad7fa5892ecf5d44d76e33431 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d77abbad7fa5892ecf5d44d76e33431 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d77abbad7fa5892ecf5d44d76e33431 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d77abbad7fa5892ecf5d44d76e33431, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d77abbad7fa5892ecf5d44d76e33431->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d77abbad7fa5892ecf5d44d76e33431, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d77abbad7fa5892ecf5d44d76e33431,
        type_description_1,
        par_self,
        par_name,
        par_default
    );


    // Release cached frame.
    if ( frame_4d77abbad7fa5892ecf5d44d76e33431 == cache_frame_4d77abbad7fa5892ecf5d44d76e33431 )
    {
        Py_DECREF( frame_4d77abbad7fa5892ecf5d44d76e33431 );
    }
    cache_frame_4d77abbad7fa5892ecf5d44d76e33431 = NULL;

    assertFrameObject( frame_4d77abbad7fa5892ecf5d44d76e33431 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_24_getheader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_default );
    par_default = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_24_getheader );
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


static PyObject *impl_urllib3$response$$$function_25_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_c5f693ea085fe48c35fb96101e2914c1 = NULL;

    struct Nuitka_FrameObject *frame_c5f693ea085fe48c35fb96101e2914c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5f693ea085fe48c35fb96101e2914c1, codeobj_c5f693ea085fe48c35fb96101e2914c1, module_urllib3$response, sizeof(void *) );
    frame_c5f693ea085fe48c35fb96101e2914c1 = cache_frame_c5f693ea085fe48c35fb96101e2914c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5f693ea085fe48c35fb96101e2914c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5f693ea085fe48c35fb96101e2914c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5f693ea085fe48c35fb96101e2914c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5f693ea085fe48c35fb96101e2914c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5f693ea085fe48c35fb96101e2914c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5f693ea085fe48c35fb96101e2914c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5f693ea085fe48c35fb96101e2914c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5f693ea085fe48c35fb96101e2914c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5f693ea085fe48c35fb96101e2914c1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c5f693ea085fe48c35fb96101e2914c1 == cache_frame_c5f693ea085fe48c35fb96101e2914c1 )
    {
        Py_DECREF( frame_c5f693ea085fe48c35fb96101e2914c1 );
    }
    cache_frame_c5f693ea085fe48c35fb96101e2914c1 = NULL;

    assertFrameObject( frame_c5f693ea085fe48c35fb96101e2914c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_25_info );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_25_info );
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


static PyObject *impl_urllib3$response$$$function_26_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e943864b477d4cba3a0a68472244098e = NULL;

    struct Nuitka_FrameObject *frame_e943864b477d4cba3a0a68472244098e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e943864b477d4cba3a0a68472244098e, codeobj_e943864b477d4cba3a0a68472244098e, module_urllib3$response, sizeof(void *) );
    frame_e943864b477d4cba3a0a68472244098e = cache_frame_e943864b477d4cba3a0a68472244098e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e943864b477d4cba3a0a68472244098e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e943864b477d4cba3a0a68472244098e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 512;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 512;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
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

        exception_lineno = 513;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fp );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e943864b477d4cba3a0a68472244098e->m_frame.f_lineno = 513;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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

        exception_lineno = 515;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__connection );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 515;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 516;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__connection );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_e943864b477d4cba3a0a68472244098e->m_frame.f_lineno = 516;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 516;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e943864b477d4cba3a0a68472244098e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e943864b477d4cba3a0a68472244098e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e943864b477d4cba3a0a68472244098e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e943864b477d4cba3a0a68472244098e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e943864b477d4cba3a0a68472244098e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e943864b477d4cba3a0a68472244098e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e943864b477d4cba3a0a68472244098e == cache_frame_e943864b477d4cba3a0a68472244098e )
    {
        Py_DECREF( frame_e943864b477d4cba3a0a68472244098e );
    }
    cache_frame_e943864b477d4cba3a0a68472244098e = NULL;

    assertFrameObject( frame_e943864b477d4cba3a0a68472244098e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_26_close );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_26_close );
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


static PyObject *impl_urllib3$response$$$function_27_closed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    bool tmp_is_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static struct Nuitka_FrameObject *cache_frame_d8d5e7f424c7c6e7b84977b3493bd950 = NULL;

    struct Nuitka_FrameObject *frame_d8d5e7f424c7c6e7b84977b3493bd950;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8d5e7f424c7c6e7b84977b3493bd950, codeobj_d8d5e7f424c7c6e7b84977b3493bd950, module_urllib3$response, sizeof(void *) );
    frame_d8d5e7f424c7c6e7b84977b3493bd950 = cache_frame_d8d5e7f424c7c6e7b84977b3493bd950;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8d5e7f424c7c6e7b84977b3493bd950 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8d5e7f424c7c6e7b84977b3493bd950 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        type_description_1 = "o";
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 522;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fp );
    if ( tmp_hasattr_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_isclosed;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_source_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 523;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 523;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_d8d5e7f424c7c6e7b84977b3493bd950->m_frame.f_lineno = 523;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isclosed );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 523;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 524;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__fp );
    if ( tmp_hasattr_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_2 = const_str_plain_closed;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    Py_DECREF( tmp_hasattr_source_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 525;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__fp );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_closed );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8d5e7f424c7c6e7b84977b3493bd950 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8d5e7f424c7c6e7b84977b3493bd950 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8d5e7f424c7c6e7b84977b3493bd950 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8d5e7f424c7c6e7b84977b3493bd950, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8d5e7f424c7c6e7b84977b3493bd950->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8d5e7f424c7c6e7b84977b3493bd950, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8d5e7f424c7c6e7b84977b3493bd950,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d8d5e7f424c7c6e7b84977b3493bd950 == cache_frame_d8d5e7f424c7c6e7b84977b3493bd950 )
    {
        Py_DECREF( frame_d8d5e7f424c7c6e7b84977b3493bd950 );
    }
    cache_frame_d8d5e7f424c7c6e7b84977b3493bd950 = NULL;

    assertFrameObject( frame_d8d5e7f424c7c6e7b84977b3493bd950 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_27_closed );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_27_closed );
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


static PyObject *impl_urllib3$response$$$function_28_fileno( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_3ec4fef573eb37eea8a88e35bedb32e9 = NULL;

    struct Nuitka_FrameObject *frame_3ec4fef573eb37eea8a88e35bedb32e9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3ec4fef573eb37eea8a88e35bedb32e9, codeobj_3ec4fef573eb37eea8a88e35bedb32e9, module_urllib3$response, sizeof(void *) );
    frame_3ec4fef573eb37eea8a88e35bedb32e9 = cache_frame_3ec4fef573eb37eea8a88e35bedb32e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3ec4fef573eb37eea8a88e35bedb32e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3ec4fef573eb37eea8a88e35bedb32e9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        type_description_1 = "o";
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
    tmp_make_exception_arg_1 = const_str_digest_5c256aa147815cb63972929236f4cfd3;
    frame_3ec4fef573eb37eea8a88e35bedb32e9->m_frame.f_lineno = 531;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 531;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 532;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fp );
    if ( tmp_hasattr_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_fileno;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_source_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 533;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_3ec4fef573eb37eea8a88e35bedb32e9->m_frame.f_lineno = 533;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fileno );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_2 = const_str_digest_cda89e76498b26a9b99e78acdb5ae71a;
    frame_3ec4fef573eb37eea8a88e35bedb32e9->m_frame.f_lineno = 535;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
    }

    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 535;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ec4fef573eb37eea8a88e35bedb32e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ec4fef573eb37eea8a88e35bedb32e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3ec4fef573eb37eea8a88e35bedb32e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3ec4fef573eb37eea8a88e35bedb32e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3ec4fef573eb37eea8a88e35bedb32e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3ec4fef573eb37eea8a88e35bedb32e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3ec4fef573eb37eea8a88e35bedb32e9,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3ec4fef573eb37eea8a88e35bedb32e9 == cache_frame_3ec4fef573eb37eea8a88e35bedb32e9 )
    {
        Py_DECREF( frame_3ec4fef573eb37eea8a88e35bedb32e9 );
    }
    cache_frame_3ec4fef573eb37eea8a88e35bedb32e9 = NULL;

    assertFrameObject( frame_3ec4fef573eb37eea8a88e35bedb32e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_28_fileno );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_28_fileno );
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


static PyObject *impl_urllib3$response$$$function_29_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_a7c05ca0d4b1c2706e210147c4a7e68e = NULL;

    struct Nuitka_FrameObject *frame_a7c05ca0d4b1c2706e210147c4a7e68e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7c05ca0d4b1c2706e210147c4a7e68e, codeobj_a7c05ca0d4b1c2706e210147c4a7e68e, module_urllib3$response, sizeof(void *) );
    frame_a7c05ca0d4b1c2706e210147c4a7e68e = cache_frame_a7c05ca0d4b1c2706e210147c4a7e68e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7c05ca0d4b1c2706e210147c4a7e68e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7c05ca0d4b1c2706e210147c4a7e68e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 539;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fp );
    if ( tmp_hasattr_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_flush;
    tmp_and_right_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_value_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 539;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
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


        exception_lineno = 539;
        type_description_1 = "o";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 540;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_a7c05ca0d4b1c2706e210147c4a7e68e->m_frame.f_lineno = 540;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7c05ca0d4b1c2706e210147c4a7e68e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7c05ca0d4b1c2706e210147c4a7e68e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7c05ca0d4b1c2706e210147c4a7e68e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7c05ca0d4b1c2706e210147c4a7e68e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7c05ca0d4b1c2706e210147c4a7e68e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7c05ca0d4b1c2706e210147c4a7e68e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7c05ca0d4b1c2706e210147c4a7e68e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a7c05ca0d4b1c2706e210147c4a7e68e == cache_frame_a7c05ca0d4b1c2706e210147c4a7e68e )
    {
        Py_DECREF( frame_a7c05ca0d4b1c2706e210147c4a7e68e );
    }
    cache_frame_a7c05ca0d4b1c2706e210147c4a7e68e = NULL;

    assertFrameObject( frame_a7c05ca0d4b1c2706e210147c4a7e68e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_29_flush );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_29_flush );
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


static PyObject *impl_urllib3$response$$$function_30_readable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_30_readable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_30_readable );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_urllib3$response$$$function_31_readinto( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_temp = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    static struct Nuitka_FrameObject *cache_frame_292441059e8fdfdb040b928e84be406a = NULL;

    struct Nuitka_FrameObject *frame_292441059e8fdfdb040b928e84be406a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_292441059e8fdfdb040b928e84be406a, codeobj_292441059e8fdfdb040b928e84be406a, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_292441059e8fdfdb040b928e84be406a = cache_frame_292441059e8fdfdb040b928e84be406a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_292441059e8fdfdb040b928e84be406a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_292441059e8fdfdb040b928e84be406a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = par_b;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 548;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 548;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_292441059e8fdfdb040b928e84be406a->m_frame.f_lineno = 548;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_temp == NULL );
    var_temp = tmp_assign_source_1;

    tmp_len_arg_2 = var_temp;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        type_description_1 = "ooo";
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
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_ass_subvalue_1 = var_temp;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = par_b;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "b" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = Py_None;
    tmp_len_arg_3 = var_temp;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 552;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_1 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( !(tmp_ass_subscript_1 == NULL) );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_4 = var_temp;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 553;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 553;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_292441059e8fdfdb040b928e84be406a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_292441059e8fdfdb040b928e84be406a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_292441059e8fdfdb040b928e84be406a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_292441059e8fdfdb040b928e84be406a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_292441059e8fdfdb040b928e84be406a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_292441059e8fdfdb040b928e84be406a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_292441059e8fdfdb040b928e84be406a,
        type_description_1,
        par_self,
        par_b,
        var_temp
    );


    // Release cached frame.
    if ( frame_292441059e8fdfdb040b928e84be406a == cache_frame_292441059e8fdfdb040b928e84be406a )
    {
        Py_DECREF( frame_292441059e8fdfdb040b928e84be406a );
    }
    cache_frame_292441059e8fdfdb040b928e84be406a = NULL;

    assertFrameObject( frame_292441059e8fdfdb040b928e84be406a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_31_readinto );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

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

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_31_readinto );
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


static PyObject *impl_urllib3$response$$$function_32_supports_chunked_reads( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_5a2c6ac8428d11018e77aa5c9002afa1 = NULL;

    struct Nuitka_FrameObject *frame_5a2c6ac8428d11018e77aa5c9002afa1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a2c6ac8428d11018e77aa5c9002afa1, codeobj_5a2c6ac8428d11018e77aa5c9002afa1, module_urllib3$response, sizeof(void *) );
    frame_5a2c6ac8428d11018e77aa5c9002afa1 = cache_frame_5a2c6ac8428d11018e77aa5c9002afa1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a2c6ac8428d11018e77aa5c9002afa1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a2c6ac8428d11018e77aa5c9002afa1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_hasattr_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fp );
    if ( tmp_hasattr_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_fp;
    tmp_return_value = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_value_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a2c6ac8428d11018e77aa5c9002afa1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a2c6ac8428d11018e77aa5c9002afa1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a2c6ac8428d11018e77aa5c9002afa1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a2c6ac8428d11018e77aa5c9002afa1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a2c6ac8428d11018e77aa5c9002afa1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a2c6ac8428d11018e77aa5c9002afa1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a2c6ac8428d11018e77aa5c9002afa1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5a2c6ac8428d11018e77aa5c9002afa1 == cache_frame_5a2c6ac8428d11018e77aa5c9002afa1 )
    {
        Py_DECREF( frame_5a2c6ac8428d11018e77aa5c9002afa1 );
    }
    cache_frame_5a2c6ac8428d11018e77aa5c9002afa1 = NULL;

    assertFrameObject( frame_5a2c6ac8428d11018e77aa5c9002afa1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_32_supports_chunked_reads );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_32_supports_chunked_reads );
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


static PyObject *impl_urllib3$response$$$function_33__update_chunk_length( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_line = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_base_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_isnot_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_bc285974decaddb4da8105cf830485ff = NULL;

    struct Nuitka_FrameObject *frame_bc285974decaddb4da8105cf830485ff;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc285974decaddb4da8105cf830485ff, codeobj_bc285974decaddb4da8105cf830485ff, module_urllib3$response, sizeof(void *)+sizeof(void *) );
    frame_bc285974decaddb4da8105cf830485ff = cache_frame_bc285974decaddb4da8105cf830485ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc285974decaddb4da8105cf830485ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc285974decaddb4da8105cf830485ff ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_chunk_left );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 569;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__fp );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fp );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_bc285974decaddb4da8105cf830485ff->m_frame.f_lineno = 569;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readline );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_line == NULL );
    var_line = tmp_assign_source_1;

    tmp_called_instance_2 = var_line;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_bc285974decaddb4da8105cf830485ff->m_frame.f_lineno = 570;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_bytes_chr_59_int_pos_1_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 570;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 570;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_value_name_1 = var_line;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_base_name_1 = const_int_pos_16;
    tmp_assattr_name_1 = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        type_description_1 = "oo";
        goto try_except_handler_2;
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

        exception_lineno = 572;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_chunk_left, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_bc285974decaddb4da8105cf830485ff, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_bc285974decaddb4da8105cf830485ff, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 573;
        type_description_1 = "oo";
        goto try_except_handler_3;
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
    tmp_called_instance_3 = par_self;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 575;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    frame_bc285974decaddb4da8105cf830485ff->m_frame.f_lineno = 575;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_httplib );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_httplib );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "httplib" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 576;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_IncompleteRead );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_line;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 576;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    frame_bc285974decaddb4da8105cf830485ff->m_frame.f_lineno = 576;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 576;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto try_except_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 571;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bc285974decaddb4da8105cf830485ff->m_frame) frame_bc285974decaddb4da8105cf830485ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_33__update_chunk_length );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc285974decaddb4da8105cf830485ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc285974decaddb4da8105cf830485ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc285974decaddb4da8105cf830485ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc285974decaddb4da8105cf830485ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc285974decaddb4da8105cf830485ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc285974decaddb4da8105cf830485ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc285974decaddb4da8105cf830485ff,
        type_description_1,
        par_self,
        var_line
    );


    // Release cached frame.
    if ( frame_bc285974decaddb4da8105cf830485ff == cache_frame_bc285974decaddb4da8105cf830485ff )
    {
        Py_DECREF( frame_bc285974decaddb4da8105cf830485ff );
    }
    cache_frame_bc285974decaddb4da8105cf830485ff = NULL;

    assertFrameObject( frame_bc285974decaddb4da8105cf830485ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_33__update_chunk_length );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

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

    Py_XDECREF( var_line );
    var_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_33__update_chunk_length );
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


static PyObject *impl_urllib3$response$$$function_34__handle_chunk( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_amt = python_pars[ 1 ];
    PyObject *var_returned_chunk = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_value = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9145f9f6e4741fb933fd036a507bcc27 = NULL;

    struct Nuitka_FrameObject *frame_9145f9f6e4741fb933fd036a507bcc27;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9145f9f6e4741fb933fd036a507bcc27, codeobj_9145f9f6e4741fb933fd036a507bcc27, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9145f9f6e4741fb933fd036a507bcc27 = cache_frame_9145f9f6e4741fb933fd036a507bcc27;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9145f9f6e4741fb933fd036a507bcc27 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9145f9f6e4741fb933fd036a507bcc27 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_amt;

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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 581;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fp );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__safe_read );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 581;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_chunk_left );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 581;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 581;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_chunk == NULL );
    var_chunk = tmp_assign_source_1;

    tmp_assign_source_2 = var_chunk;

    CHECK_OBJECT( tmp_assign_source_2 );
    assert( var_returned_chunk == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_returned_chunk = tmp_assign_source_2;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 583;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__fp );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 583;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__safe_read, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 584;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_chunk_left, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_amt;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 585;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
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

        exception_lineno = 585;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_chunk_left );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 586;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__fp );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__safe_read );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_amt;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 586;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 586;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_value == NULL );
    var_value = tmp_assign_source_3;

    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 587;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_chunk_left );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_amt;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 587;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        type_description_1 = "ooooo";
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

        exception_lineno = 587;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_chunk_left, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = var_value;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 588;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    assert( var_returned_chunk == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_returned_chunk = tmp_assign_source_4;

    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = par_amt;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 589;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 589;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_chunk_left );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__fp );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__safe_read );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_amt;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 590;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 591;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__fp );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 591;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__safe_read, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 592;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_chunk_left, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = var_value;

    if ( tmp_assign_source_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 593;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    assert( var_returned_chunk == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_returned_chunk = tmp_assign_source_6;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 595;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__fp );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__safe_read );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 595;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_chunk_left );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 595;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 595;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_returned_chunk == NULL );
    var_returned_chunk = tmp_assign_source_7;

    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 596;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__fp );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_9145f9f6e4741fb933fd036a507bcc27->m_frame.f_lineno = 596;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__safe_read, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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

        exception_lineno = 597;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_chunk_left, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_return_value = var_returned_chunk;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "returned_chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 598;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9145f9f6e4741fb933fd036a507bcc27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9145f9f6e4741fb933fd036a507bcc27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9145f9f6e4741fb933fd036a507bcc27 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9145f9f6e4741fb933fd036a507bcc27, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9145f9f6e4741fb933fd036a507bcc27->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9145f9f6e4741fb933fd036a507bcc27, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9145f9f6e4741fb933fd036a507bcc27,
        type_description_1,
        par_self,
        par_amt,
        var_returned_chunk,
        var_chunk,
        var_value
    );


    // Release cached frame.
    if ( frame_9145f9f6e4741fb933fd036a507bcc27 == cache_frame_9145f9f6e4741fb933fd036a507bcc27 )
    {
        Py_DECREF( frame_9145f9f6e4741fb933fd036a507bcc27 );
    }
    cache_frame_9145f9f6e4741fb933fd036a507bcc27 = NULL;

    assertFrameObject( frame_9145f9f6e4741fb933fd036a507bcc27 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_34__handle_chunk );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_amt );
    par_amt = NULL;

    Py_XDECREF( var_returned_chunk );
    var_returned_chunk = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( par_amt );
    par_amt = NULL;

    Py_XDECREF( var_returned_chunk );
    var_returned_chunk = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_34__handle_chunk );
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


static PyObject *impl_urllib3$response$$$function_35_read_chunked( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_amt = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_decode_content = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked_context,
        module_urllib3$response,
        const_str_plain_read_chunked,
#if PYTHON_VERSION >= 350
        const_str_digest_3375b08dee8bfdec0bb39402913b81e2,
#endif
        codeobj_10587c6b21cb100fbf58c666f5dcef88,
        3
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_amt;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_decode_content;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = par_self;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    assert( Py_SIZE( tmp_return_value ) >= 3 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_35_read_chunked );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_amt );
    Py_DECREF( par_amt );
    par_amt = NULL;

    CHECK_OBJECT( (PyObject *)par_decode_content );
    Py_DECREF( par_decode_content );
    par_decode_content = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_amt );
    Py_DECREF( par_amt );
    par_amt = NULL;

    CHECK_OBJECT( (PyObject *)par_decode_content );
    Py_DECREF( par_decode_content );
    par_decode_content = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_35_read_chunked );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked_locals {
    PyObject *var_chunk
    PyObject *var_decoded
    PyObject *var_line
    PyObject *tmp_with_1__enter
    PyObject *tmp_with_1__exit
    PyObject *tmp_with_1__indicator
    PyObject *tmp_with_1__source
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
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
    PyObject *tmp_tuple_element_1;
    char const *type_description_1
    tmp_return_value
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_chunk = NULL;
    PyObject *var_decoded = NULL;
    PyObject *var_line = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
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
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_10587c6b21cb100fbf58c666f5dcef88, module_urllib3$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[2] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 614;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 614;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__init_decoder );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 616;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_chunked );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 616;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 616;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResponseNotChunked" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 617;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 617;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_6fceb2e9778412869b1de7adcdb00cc8_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 617;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 617;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "cccooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_called_instance_2 = NULL;
    }
    else
    {
        tmp_called_instance_2 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 620;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 620;
    tmp_cond_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_supports_chunked_reads );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 620;
        type_description_1 = "cccooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_BodyNotHttplibCompatible );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BodyNotHttplibCompatible );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BodyNotHttplibCompatible" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 621;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 621;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_a0ca0f184ab75a015f69c992cdb800dc_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 621;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "cccooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code:
    if ( generator->m_closure[2] == NULL )
    {
        tmp_called_instance_3 = NULL;
    }
    else
    {
        tmp_called_instance_3 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 625;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__error_catcher );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_3 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    generator->m_frame->m_frame.f_lineno = 625;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_2;

    tmp_source_name_3 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    // Tried code:
    // Tried code:
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_4 = NULL;
    }
    else
    {
        tmp_source_name_4 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__original_response );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_is_response_to_head );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_response_to_head );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_response_to_head" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_5 = NULL;
    }
    else
    {
        tmp_source_name_5 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__original_response );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    generator->m_frame->m_frame.f_lineno = 627;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 627;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_6 = NULL;
    }
    else
    {
        tmp_source_name_6 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 628;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__original_response );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    generator->m_frame->m_frame.f_lineno = 628;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    branch_no_3:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_8 = NULL;
    }
    else
    {
        tmp_source_name_8 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 633;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__fp );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_fp );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    branch_no_4:;
    loop_start_1:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_called_instance_5 = NULL;
    }
    else
    {
        tmp_called_instance_5 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 637;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    generator->m_frame->m_frame.f_lineno = 637;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain__update_chunk_length );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 637;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_9 = NULL;
    }
    else
    {
        tmp_source_name_9 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 638;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_chunk_left );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_end_1;
    branch_no_5:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_10 = NULL;
    }
    else
    {
        tmp_source_name_10 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 640;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__handle_chunk );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( generator->m_closure[0] == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "amt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 640;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    generator->m_frame->m_frame.f_lineno = 640;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_11 = NULL;
    }
    else
    {
        tmp_source_name_11 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 641;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__decode );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 641;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_tuple_element_1 = var_chunk;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 641;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_decode_content;
    if ( generator->m_closure[1] == NULL )
    {
        tmp_dict_value_1 = NULL;
    }
    else
    {
        tmp_dict_value_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 641;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_flush_decoder;
    tmp_dict_value_2 = Py_False;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 641;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 641;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_decoded;
        var_decoded = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_cond_value_4 = var_decoded;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_expression_name_1 = var_decoded;

    CHECK_OBJECT( tmp_expression_name_1 );
    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 644;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    if ( generator->m_closure[1] == NULL )
    {
        tmp_cond_value_5 = NULL;
    }
    else
    {
        tmp_cond_value_5 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "decode_content" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 646;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 646;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_called_instance_6 = NULL;
    }
    else
    {
        tmp_called_instance_6 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 650;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    generator->m_frame->m_frame.f_lineno = 650;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain__flush_decoder );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_decoded;
        var_decoded = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_cond_value_6 = var_decoded;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_expression_name_2 = var_decoded;

    CHECK_OBJECT( tmp_expression_name_2 );
    Py_INCREF( tmp_expression_name_2 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    branch_no_8:;
    branch_no_7:;
    loop_start_2:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_13 = NULL;
    }
    else
    {
        tmp_source_name_13 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 656;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__fp );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_called_instance_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_fp );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_instance_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    generator->m_frame->m_frame.f_lineno = 656;
    tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_readline );
    Py_DECREF( tmp_called_instance_7 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_cond_value_7 = var_line;

    CHECK_OBJECT( tmp_cond_value_7 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    goto loop_end_2;
    branch_no_9:;
    tmp_compare_left_3 = var_line;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 660;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_compare_right_3 = const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    goto loop_end_2;
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 655;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_14 = NULL;
    }
    else
    {
        tmp_source_name_14 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 664;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_cond_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__original_response );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 664;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 664;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    if ( generator->m_closure[2] == NULL )
    {
        tmp_source_name_15 = NULL;
    }
    else
    {
        tmp_source_name_15 = PyCell_GET( generator->m_closure[2] );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 665;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__original_response );
    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 665;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    generator->m_frame->m_frame.f_lineno = 665;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_close );
    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 665;
        type_description_1 = "cccooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_9 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_9;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_7 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_3 = EXC_TYPE(PyThreadState_GET());
    tmp_args_element_name_4 = EXC_VALUE(PyThreadState_GET());
    tmp_args_element_name_5 = EXC_TRACEBACK(PyThreadState_GET());
    generator->m_frame->m_frame.f_lineno = 625;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_5;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_no_13;
    }
    else
    {
        goto branch_yes_13;
    }
    branch_yes_13:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 625;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cccooo";
    goto try_except_handler_5;
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 625;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cccooo";
    goto try_except_handler_5;
    branch_end_12:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_35_read_chunked$$$genobj_1_read_chunked );
    return;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    tmp_called_name_8 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_8 );
    generator->m_frame->m_frame.f_lineno = 625;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_return_handler_2;
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

    tmp_compare_left_5 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_True;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_9 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_9 );
    generator->m_frame->m_frame.f_lineno = 625;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_14:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    tmp_compare_left_6 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_True;
    tmp_is_3 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_3 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_10 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_10 );
    generator->m_frame->m_frame.f_lineno = 625;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "cccooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__indicator );
    Py_DECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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

    frame_return_exit_1:;

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
    goto function_return_exit;

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
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1],
            var_chunk,
            var_decoded,
            var_line
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

    goto try_end_5;
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

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_decoded );
    var_decoded = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_decoded );
    var_decoded = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;


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
    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return;

    function_return_exit:
#if PYTHON_VERSION >= 300
    generator->m_returned = tmp_return_value;
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_urllib3$response$$$function_36_geturl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_9bc3823c65271362e7b75619d487a836 = NULL;

    struct Nuitka_FrameObject *frame_9bc3823c65271362e7b75619d487a836;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bc3823c65271362e7b75619d487a836, codeobj_9bc3823c65271362e7b75619d487a836, module_urllib3$response, sizeof(void *) );
    frame_9bc3823c65271362e7b75619d487a836 = cache_frame_9bc3823c65271362e7b75619d487a836;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bc3823c65271362e7b75619d487a836 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bc3823c65271362e7b75619d487a836 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_retries );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 673;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_retries );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_history );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 673;
        type_description_1 = "o";
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
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_retries );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_history );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_neg_1;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_redirect_location );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 676;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__request_url );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bc3823c65271362e7b75619d487a836 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bc3823c65271362e7b75619d487a836 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bc3823c65271362e7b75619d487a836 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bc3823c65271362e7b75619d487a836, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bc3823c65271362e7b75619d487a836->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bc3823c65271362e7b75619d487a836, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bc3823c65271362e7b75619d487a836,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9bc3823c65271362e7b75619d487a836 == cache_frame_9bc3823c65271362e7b75619d487a836 )
    {
        Py_DECREF( frame_9bc3823c65271362e7b75619d487a836 );
    }
    cache_frame_9bc3823c65271362e7b75619d487a836 = NULL;

    assertFrameObject( frame_9bc3823c65271362e7b75619d487a836 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_36_geturl );
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
    NUITKA_CANNOT_GET_HERE( urllib3$response$$$function_36_geturl );
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



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_10_release_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_10_release_conn,
        const_str_plain_release_conn,
#if PYTHON_VERSION >= 300
        const_str_digest_2648b5bd42dd7c576e30b42f1dfac980,
#endif
        codeobj_815772360b8e978dac52adb1a9678609,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_11_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_11_data,
        const_str_plain_data,
#if PYTHON_VERSION >= 300
        const_str_digest_03ab59cc4b02965b81f2960ba3242a80,
#endif
        codeobj_4a7ca2092236dc49b0e7a78921b474db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_12_connection(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_12_connection,
        const_str_plain_connection,
#if PYTHON_VERSION >= 300
        const_str_digest_7b5ed3a84f13afcdc926db62ca8eb81a,
#endif
        codeobj_1e4e0afbc7cb4d36c676ce98ca196f22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_13_isclosed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_13_isclosed,
        const_str_plain_isclosed,
#if PYTHON_VERSION >= 300
        const_str_digest_f27d3abdf015e152802dfedf1003be0a,
#endif
        codeobj_a8dbac8a0e6ba7d4fbf9273fb72639e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_14_tell(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_14_tell,
        const_str_plain_tell,
#if PYTHON_VERSION >= 300
        const_str_digest_10dc4f6350eb95940f03ae6deabaf45f,
#endif
        codeobj_4406219381127b6fa2ea658038e5f8c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_2e2286628c2b62845dcf2a36aaa7e003,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_15__init_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_15__init_length,
        const_str_plain__init_length,
#if PYTHON_VERSION >= 300
        const_str_digest_8ca2ca2ee47de1fab1e2c556650bed47,
#endif
        codeobj_51acd91497d3882d64e84ec677c0df77,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_7dc2f4ce825c1d3f2d7ba96801786100,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_16__init_decoder(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_16__init_decoder,
        const_str_plain__init_decoder,
#if PYTHON_VERSION >= 300
        const_str_digest_0e168b7bd3791a80963c46d1774ad183,
#endif
        codeobj_7232cb6405aa0f895f858aeeb7741416,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_3979e03e0d636e27d8391b0821ebf600,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_17__decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_17__decode,
        const_str_plain__decode,
#if PYTHON_VERSION >= 300
        const_str_digest_1f64a2a37be979fe0ed3e7082c84bdaa,
#endif
        codeobj_d0c59b08485898e1b6ee26ece751ace5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_29d37c1d46a20191bf94046329f93ba2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_18__flush_decoder(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_18__flush_decoder,
        const_str_plain__flush_decoder,
#if PYTHON_VERSION >= 300
        const_str_digest_4252ceb9f3d27c7725ea35f39664c406,
#endif
        codeobj_14944cba7a05bf27856b8e3a5f83fd43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_1caf96096db3a96651d717471b2ac767,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_19__error_catcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_19__error_catcher,
        const_str_plain__error_catcher,
#if PYTHON_VERSION >= 300
        const_str_digest_f7b5c3ce3f21d2c936332c7ea87d4366,
#endif
        codeobj_531044ea0c6c8da9bdf9abe8e7574c65,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_4e55d239932ed40bbefd05b906f761e7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_4314cfcdf7e269d83c4b3bffa1766fb2,
#endif
        codeobj_72aa4a09884669ef5058cb36b2896f68,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_20_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_20_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        const_str_digest_b5074ac92dc72b508f7b239b36f07471,
#endif
        codeobj_b4f4b0b77dace4020608b02283c75e87,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_30397cc2c1e81aae39ec08695d56db59,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_21_stream( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_21_stream,
        const_str_plain_stream,
#if PYTHON_VERSION >= 300
        const_str_digest_3cd0a7aaf12d4cbd86fc72d422b326f4,
#endif
        codeobj_ef5a5d3cce32dce868a24a38e48a0e04,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_0e97f13bdd35179a3f7d47396e0b1e10,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_22_from_httplib(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_22_from_httplib,
        const_str_plain_from_httplib,
#if PYTHON_VERSION >= 300
        const_str_digest_9ce8bb5871d1a4a4875d7d719702c4d8,
#endif
        codeobj_a7bec840cd65c11d4ce1c90f1c7258b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_a27eb7f5f7e2992428b2eebafb617831,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_23_getheaders(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_23_getheaders,
        const_str_plain_getheaders,
#if PYTHON_VERSION >= 300
        const_str_digest_d0590bcd4a83d66ed17deb5c9e144342,
#endif
        codeobj_c443e075b926834d81f1a3f2a831fd85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_24_getheader( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_24_getheader,
        const_str_plain_getheader,
#if PYTHON_VERSION >= 300
        const_str_digest_08df6de959dae9d1c247c2ab041993af,
#endif
        codeobj_4d77abbad7fa5892ecf5d44d76e33431,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_25_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_25_info,
        const_str_plain_info,
#if PYTHON_VERSION >= 300
        const_str_digest_31d64d3b8ec974c2917fdf1564a2fb00,
#endif
        codeobj_c5f693ea085fe48c35fb96101e2914c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_26_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_26_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_a4b32799dc86145fd28c19bf16dfae94,
#endif
        codeobj_e943864b477d4cba3a0a68472244098e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_27_closed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_27_closed,
        const_str_plain_closed,
#if PYTHON_VERSION >= 300
        const_str_digest_228bd71510125698bfd3916924a48c8a,
#endif
        codeobj_d8d5e7f424c7c6e7b84977b3493bd950,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_28_fileno(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_28_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 300
        const_str_digest_563a5c1e73e73d543e7c4f1e0d7b34c2,
#endif
        codeobj_3ec4fef573eb37eea8a88e35bedb32e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_29_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_29_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 300
        const_str_digest_e955e200ce7076f63dbfb9e11568aad1,
#endif
        codeobj_a7c05ca0d4b1c2706e210147c4a7e68e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_2___getattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_2___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 300
        const_str_digest_eda91d08436b3150bb02a95e4966d1a0,
#endif
        codeobj_398569e4847cd39e3cf4db6d8da7cb5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_30_readable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_30_readable,
        const_str_plain_readable,
#if PYTHON_VERSION >= 300
        const_str_digest_d186d35140b6e607ac0c8b2c63fdeb29,
#endif
        codeobj_8de9d9dbea2dfc7e92bf3ac09a6a93f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_31_readinto(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_31_readinto,
        const_str_plain_readinto,
#if PYTHON_VERSION >= 300
        const_str_digest_db4856f755729d4e70f8bd5ec95c6022,
#endif
        codeobj_292441059e8fdfdb040b928e84be406a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_32_supports_chunked_reads(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_32_supports_chunked_reads,
        const_str_plain_supports_chunked_reads,
#if PYTHON_VERSION >= 300
        const_str_digest_b5c9f811929a87965e12501a2faee8ba,
#endif
        codeobj_5a2c6ac8428d11018e77aa5c9002afa1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_cd1b25485799fd6d9f2633cd175ed03c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_33__update_chunk_length(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_33__update_chunk_length,
        const_str_plain__update_chunk_length,
#if PYTHON_VERSION >= 300
        const_str_digest_65095c3b5746599c303dcd768114424e,
#endif
        codeobj_bc285974decaddb4da8105cf830485ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_34__handle_chunk(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_34__handle_chunk,
        const_str_plain__handle_chunk,
#if PYTHON_VERSION >= 300
        const_str_digest_78d65665335b4950719b749c8c89ab2e,
#endif
        codeobj_9145f9f6e4741fb933fd036a507bcc27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_35_read_chunked( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_35_read_chunked,
        const_str_plain_read_chunked,
#if PYTHON_VERSION >= 300
        const_str_digest_3375b08dee8bfdec0bb39402913b81e2,
#endif
        codeobj_10587c6b21cb100fbf58c666f5dcef88,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_41400538e345345240c20cdf5e2aa1d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_36_geturl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_36_geturl,
        const_str_plain_geturl,
#if PYTHON_VERSION >= 300
        const_str_digest_db6e0943ac580bf4379ef7b63d32405e,
#endif
        codeobj_9bc3823c65271362e7b75619d487a836,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_b08fa2794dd0e587ae66283a5c657e3e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_3_decompress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_3_decompress,
        const_str_plain_decompress,
#if PYTHON_VERSION >= 300
        const_str_digest_cb873235ac08e193dd8508bec45d5244,
#endif
        codeobj_228630d7252b121a3ba0fbfe47e8a72a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_4___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_d4b2db23198f04d1f231f704f98ddea3,
#endif
        codeobj_316c8411ec49021997368615f4ed4e39,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_5___getattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_5___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 300
        const_str_digest_c8ff5d424f314362910cdc3925efebad,
#endif
        codeobj_21c07964ec22382f408bee3afffb454c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_6_decompress(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_6_decompress,
        const_str_plain_decompress,
#if PYTHON_VERSION >= 300
        const_str_digest_b1f5bc498322609af46e729204a25f6d,
#endif
        codeobj_ba644069844b05e04d22aa29862d834a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_7__get_decoder(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_7__get_decoder,
        const_str_plain__get_decoder,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f808455292578e779c33f6e44d2e66fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_8___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_d255455dca89984a7a880379cd01bd4d,
#endif
        codeobj_0257ac8393961814a6822c694f4ce398,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$response$$$function_9_get_redirect_location(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$response$$$function_9_get_redirect_location,
        const_str_plain_get_redirect_location,
#if PYTHON_VERSION >= 300
        const_str_digest_fbf9dc1a6ef4e117091b904d08084ea2,
#endif
        codeobj_5be94d50bf517c06df58916422775079,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$response,
        const_str_digest_c612070bdb21597f6b5d1919b6538c69,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$response =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.response",   /* m_name */
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

MOD_INIT_DECL( urllib3$response )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$response );
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
    puts("urllib3.response: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.response: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.response: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$response" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$response = Py_InitModule4(
        "urllib3.response",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$response = PyModule_Create( &mdef_urllib3$response );
#endif

    moduledict_urllib3$response = MODULE_DICT( module_urllib3$response );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$response,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$response );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4, module_urllib3$response );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_called_instance_1;
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
    PyObject *tmp_classmethod_arg_1;
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
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
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
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
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
    PyObject *tmp_source_name_5;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    static struct Nuitka_FrameObject *cache_frame_1cc5274a42b685795d60d9c7d94b511c_2 = NULL;

    struct Nuitka_FrameObject *frame_1cc5274a42b685795d60d9c7d94b511c_2;

    static struct Nuitka_FrameObject *cache_frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 = NULL;

    struct Nuitka_FrameObject *frame_1d716c458f3d3d96fef2cca7a8eab0eb_3;

    static struct Nuitka_FrameObject *cache_frame_5ac2ccd15db63083ae804c0241347632_4 = NULL;

    struct Nuitka_FrameObject *frame_5ac2ccd15db63083ae804c0241347632_4;

    static struct Nuitka_FrameObject *cache_frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 = NULL;

    struct Nuitka_FrameObject *frame_a2720a7a6c6abf1dfb54523d907f7f2a_5;

    struct Nuitka_FrameObject *frame_3cc0929157c2ce1f0b73230571ba9161;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    PyObject *locals_urllib3$response_100 = NULL;
    PyObject *locals_urllib3$response_22 = NULL;
    PyObject *locals_urllib3$response_62 = NULL;
    PyObject *locals_urllib3$response_55 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_05a4d60a37e27e282d01db144681b237;
    UPDATE_STRING_DICT0( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_3cc0929157c2ce1f0b73230571ba9161 = MAKE_MODULE_FRAME( codeobj_3cc0929157c2ce1f0b73230571ba9161, module_urllib3$response );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3cc0929157c2ce1f0b73230571ba9161 );
    assert( Py_REFCNT( frame_3cc0929157c2ce1f0b73230571ba9161 ) == 2 );

    // Framed code:
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_contextlib;
    tmp_globals_name_1 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_contextmanager_tuple;
    tmp_level_name_1 = const_int_0;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_contextmanager );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_contextmanager, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_plain_zlib;
    tmp_globals_name_2 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( !(tmp_assign_source_6 == NULL) );
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_zlib, tmp_assign_source_6 );
    tmp_name_name_3 = const_str_plain_io;
    tmp_globals_name_3 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_7 );
    tmp_name_name_4 = const_str_plain_logging;
    tmp_globals_name_4 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 5;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_8 );
    tmp_name_name_5 = const_str_plain_socket;
    tmp_globals_name_5 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_timeout_tuple;
    tmp_level_name_5 = const_int_0;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 6;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_timeout );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_9 );
    tmp_name_name_6 = const_str_plain_socket;
    tmp_globals_name_6 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_error_tuple;
    tmp_level_name_6 = const_int_0;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_error );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_10 );
    tmp_name_name_7 = const_str_plain__collections;
    tmp_globals_name_7 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_HTTPHeaderDict_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 9;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_HTTPHeaderDict,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPHeaderDict );
    }

    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict, tmp_assign_source_11 );
    tmp_name_name_8 = const_str_plain_exceptions;
    tmp_globals_name_8 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_7fc3c04bce7fb222b0b5eec7780dd9c6_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 10;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_BodyNotHttplibCompatible,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_BodyNotHttplibCompatible );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_BodyNotHttplibCompatible, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_ProtocolError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ProtocolError );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_DecodeError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DecodeError );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_DecodeError, tmp_assign_source_15 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_ReadTimeoutError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ReadTimeoutError );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_16 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_ResponseNotChunked,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_ResponseNotChunked );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_ResponseNotChunked, tmp_assign_source_17 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_IncompleteRead,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_IncompleteRead );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_IncompleteRead, tmp_assign_source_18 );
    tmp_import_name_from_12 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_InvalidHeader,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_InvalidHeader );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_19 );
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

    tmp_name_name_9 = const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
    tmp_globals_name_9 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_string_types_str_plain_binary_type_str_plain_PY3_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 14;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    if ( PyModule_Check( tmp_import_name_from_13 ) )
    {
       tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_13,
            (PyObject *)MODULE_DICT(tmp_import_name_from_13),
            const_str_plain_string_types,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_string_types );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_21 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    if ( PyModule_Check( tmp_import_name_from_14 ) )
    {
       tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_14,
            (PyObject *)MODULE_DICT(tmp_import_name_from_14),
            const_str_plain_binary_type,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_binary_type );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_22 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    if ( PyModule_Check( tmp_import_name_from_15 ) )
    {
       tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_15,
            (PyObject *)MODULE_DICT(tmp_import_name_from_15),
            const_str_plain_PY3,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_PY3 );
    }

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_23 );
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

    tmp_name_name_10 = const_str_digest_2833c2e99385c7d1c67d0068a26ec387;
    tmp_globals_name_10 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_http_client_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 15;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_16 ) )
    {
       tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_16,
            (PyObject *)MODULE_DICT(tmp_import_name_from_16),
            const_str_plain_http_client,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_http_client );
    }

    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_httplib, tmp_assign_source_24 );
    tmp_name_name_11 = const_str_plain_connection;
    tmp_globals_name_11 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_HTTPException_str_plain_BaseSSLError_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 16;
    tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_25;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    if ( PyModule_Check( tmp_import_name_from_17 ) )
    {
       tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_17,
            (PyObject *)MODULE_DICT(tmp_import_name_from_17),
            const_str_plain_HTTPException,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_HTTPException );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPException, tmp_assign_source_26 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    if ( PyModule_Check( tmp_import_name_from_18 ) )
    {
       tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_18,
            (PyObject *)MODULE_DICT(tmp_import_name_from_18),
            const_str_plain_BaseSSLError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_BaseSSLError );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_27 );
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

    tmp_name_name_12 = const_str_digest_c1505752b742bcc86d58c19fdc1683b9;
    tmp_globals_name_12 = (PyObject *)moduledict_urllib3$response;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_is_fp_closed_str_plain_is_response_to_head_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 17;
    tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_28;

    // Tried code:
    tmp_import_name_from_19 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    if ( PyModule_Check( tmp_import_name_from_19 ) )
    {
       tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_19,
            (PyObject *)MODULE_DICT(tmp_import_name_from_19),
            const_str_plain_is_fp_closed,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_is_fp_closed );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_is_fp_closed, tmp_assign_source_29 );
    tmp_import_name_from_20 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    if ( PyModule_Check( tmp_import_name_from_20 ) )
    {
       tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_20,
            (PyObject *)MODULE_DICT(tmp_import_name_from_20),
            const_str_plain_is_response_to_head,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_is_response_to_head );
    }

    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_is_response_to_head, tmp_assign_source_30 );
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

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_logging );

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

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 19;
    tmp_assign_source_31 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_58d55cc0c39ccfcef76de1f9740cddf4_tuple, 0 ) );

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_31 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_32 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_32;

    tmp_assign_source_33 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_33;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
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


        exception_lineno = 22;

        goto try_except_handler_5;
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


        exception_lineno = 22;

        goto try_except_handler_5;
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


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_34 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_34;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
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


        exception_lineno = 22;

        goto try_except_handler_5;
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


        exception_lineno = 22;

        goto try_except_handler_5;
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


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    tmp_tuple_element_1 = const_str_plain_DeflateDecoder;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 22;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_35 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_35;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$response_22 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
    tmp_res = PyObject_SetItem( locals_urllib3$response_22, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_7;
    }
    tmp_dictset_value = const_str_plain_DeflateDecoder;
    tmp_res = PyObject_SetItem( locals_urllib3$response_22, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_7;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_1cc5274a42b685795d60d9c7d94b511c_2, codeobj_1cc5274a42b685795d60d9c7d94b511c, module_urllib3$response, sizeof(void *) );
    frame_1cc5274a42b685795d60d9c7d94b511c_2 = cache_frame_1cc5274a42b685795d60d9c7d94b511c_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1cc5274a42b685795d60d9c7d94b511c_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1cc5274a42b685795d60d9c7d94b511c_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_22, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_2___getattr__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_22, const_str_plain___getattr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_3_decompress(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_22, const_str_plain_decompress, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cc5274a42b685795d60d9c7d94b511c_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1cc5274a42b685795d60d9c7d94b511c_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1cc5274a42b685795d60d9c7d94b511c_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1cc5274a42b685795d60d9c7d94b511c_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1cc5274a42b685795d60d9c7d94b511c_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1cc5274a42b685795d60d9c7d94b511c_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_1cc5274a42b685795d60d9c7d94b511c_2 == cache_frame_1cc5274a42b685795d60d9c7d94b511c_2 )
    {
        Py_DECREF( frame_1cc5274a42b685795d60d9c7d94b511c_2 );
    }
    cache_frame_1cc5274a42b685795d60d9c7d94b511c_2 = NULL;

    assertFrameObject( frame_1cc5274a42b685795d60d9c7d94b511c_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_7;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_7;
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
    tmp_res = PyObject_SetItem( locals_urllib3$response_22, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_7;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain_DeflateDecoder;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_urllib3$response_22;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 22;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_7;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_37;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_urllib3$response_22 );
    locals_urllib3$response_22 = NULL;
    goto try_return_handler_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$response_22 );
    locals_urllib3$response_22 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 22;
    goto try_except_handler_5;
    outline_result_1:;
    tmp_assign_source_36 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_DeflateDecoder, tmp_assign_source_36 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_38 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_38;

    tmp_assign_source_39 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_39;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
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


        exception_lineno = 55;

        goto try_except_handler_8;
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


        exception_lineno = 55;

        goto try_except_handler_8;
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


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_40;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
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


        exception_lineno = 55;

        goto try_except_handler_8;
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


        exception_lineno = 55;

        goto try_except_handler_8;
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


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    tmp_tuple_element_3 = const_str_plain_GzipDecoderState;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 55;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_41 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_41;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$response_55 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
    tmp_res = PyObject_SetItem( locals_urllib3$response_55, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_10;
    }
    tmp_dictset_value = const_str_plain_GzipDecoderState;
    tmp_res = PyObject_SetItem( locals_urllib3$response_55, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_10;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_1d716c458f3d3d96fef2cca7a8eab0eb_3, codeobj_1d716c458f3d3d96fef2cca7a8eab0eb, module_urllib3$response, sizeof(void *) );
    frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 = cache_frame_1d716c458f3d3d96fef2cca7a8eab0eb_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = const_int_0;
    tmp_res = PyObject_SetItem( locals_urllib3$response_55, const_str_plain_FIRST_MEMBER, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = const_int_pos_1;
    tmp_res = PyObject_SetItem( locals_urllib3$response_55, const_str_plain_OTHER_MEMBERS, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = const_int_pos_2;
    tmp_res = PyObject_SetItem( locals_urllib3$response_55, const_str_plain_SWALLOW_DATA, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d716c458f3d3d96fef2cca7a8eab0eb_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d716c458f3d3d96fef2cca7a8eab0eb_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d716c458f3d3d96fef2cca7a8eab0eb_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 == cache_frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 )
    {
        Py_DECREF( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 );
    }
    cache_frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 = NULL;

    assertFrameObject( frame_1d716c458f3d3d96fef2cca7a8eab0eb_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_10;
    skip_nested_handling_2:;
    tmp_compare_left_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_10;
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
    tmp_dictset_value = const_tuple_type_object_tuple;
    tmp_res = PyObject_SetItem( locals_urllib3$response_55, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_10;
    }
    branch_no_4:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_4 = const_str_plain_GzipDecoderState;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_urllib3$response_55;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 55;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto try_except_handler_10;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_43;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_urllib3$response_55 );
    locals_urllib3$response_55 = NULL;
    goto try_return_handler_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$response_55 );
    locals_urllib3$response_55 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
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

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 55;
    goto try_except_handler_8;
    outline_result_2:;
    tmp_assign_source_42 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoderState, tmp_assign_source_42 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    tmp_dircall_arg1_3 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_44 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_44;

    tmp_assign_source_45 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_45;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
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


        exception_lineno = 62;

        goto try_except_handler_11;
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


        exception_lineno = 62;

        goto try_except_handler_11;
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


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_46;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
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


        exception_lineno = 62;

        goto try_except_handler_11;
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


        exception_lineno = 62;

        goto try_except_handler_11;
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


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    tmp_tuple_element_5 = const_str_plain_GzipDecoder;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_5 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 62;
    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_11;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_47 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_47;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$response_62 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
    tmp_res = PyObject_SetItem( locals_urllib3$response_62, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    tmp_dictset_value = const_str_plain_GzipDecoder;
    tmp_res = PyObject_SetItem( locals_urllib3$response_62, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_5ac2ccd15db63083ae804c0241347632_4, codeobj_5ac2ccd15db63083ae804c0241347632, module_urllib3$response, sizeof(void *) );
    frame_5ac2ccd15db63083ae804c0241347632_4 = cache_frame_5ac2ccd15db63083ae804c0241347632_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ac2ccd15db63083ae804c0241347632_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ac2ccd15db63083ae804c0241347632_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_4___init__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_62, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_5___getattr__(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_62, const_str_plain___getattr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_6_decompress(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_62, const_str_plain_decompress, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ac2ccd15db63083ae804c0241347632_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ac2ccd15db63083ae804c0241347632_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ac2ccd15db63083ae804c0241347632_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ac2ccd15db63083ae804c0241347632_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ac2ccd15db63083ae804c0241347632_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ac2ccd15db63083ae804c0241347632_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_5ac2ccd15db63083ae804c0241347632_4 == cache_frame_5ac2ccd15db63083ae804c0241347632_4 )
    {
        Py_DECREF( frame_5ac2ccd15db63083ae804c0241347632_4 );
    }
    cache_frame_5ac2ccd15db63083ae804c0241347632_4 = NULL;

    assertFrameObject( frame_5ac2ccd15db63083ae804c0241347632_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_13;
    skip_nested_handling_3:;
    tmp_compare_left_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
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
    tmp_dictset_value = const_tuple_type_object_tuple;
    tmp_res = PyObject_SetItem( locals_urllib3$response_62, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    branch_no_6:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_6 = const_str_plain_GzipDecoder;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_urllib3$response_62;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_6 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 62;
    tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_49;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_urllib3$response_62 );
    locals_urllib3$response_62 = NULL;
    goto try_return_handler_12;
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

    Py_DECREF( locals_urllib3$response_62 );
    locals_urllib3$response_62 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 62;
    goto try_except_handler_11;
    outline_result_3:;
    tmp_assign_source_48 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_GzipDecoder, tmp_assign_source_48 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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

    tmp_assign_source_50 = MAKE_FUNCTION_urllib3$response$$$function_7__get_decoder(  );
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain__get_decoder, tmp_assign_source_50 );
    // Tried code:
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;

        goto try_except_handler_14;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_IOBase );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    tmp_assign_source_51 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_51;

    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_52 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_52;

    tmp_assign_source_53 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_53;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
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


        exception_lineno = 100;

        goto try_except_handler_14;
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


        exception_lineno = 100;

        goto try_except_handler_14;
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


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_54;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
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


        exception_lineno = 100;

        goto try_except_handler_14;
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


        exception_lineno = 100;

        goto try_except_handler_14;
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
    tmp_source_name_5 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    tmp_tuple_element_8 = const_str_plain_HTTPResponse;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_8 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 100;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_14;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_55 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_55;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_urllib3$response_100 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_digest_92153a55ef2b1eb7542a2c7a044d6cbb;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_plain_HTTPResponse;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_16;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_a2720a7a6c6abf1dfb54523d907f7f2a_5, codeobj_a2720a7a6c6abf1dfb54523d907f7f2a, module_urllib3$response, sizeof(void *) );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 = cache_frame_a2720a7a6c6abf1dfb54523d907f7f2a_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = LIST_COPY( const_list_str_plain_gzip_str_plain_deflate_list );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_CONTENT_DECODERS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = LIST_COPY( const_list_int_pos_301_int_pos_302_int_pos_303_int_pos_307_int_pos_308_list );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_REDIRECT_STATUSES, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_1 = const_tuple_421629008192601d4f350b75577ee96e_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_8___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_9_get_redirect_location(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_get_redirect_location, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_10_release_conn(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_release_conn, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_urllib3$response_100, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
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
    tmp_called_name_8 = PyObject_GetItem( locals_urllib3$response_100, const_str_plain_property );

    if ( tmp_called_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$response$$$function_11_data(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_called_name_9 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_urllib3$response$$$function_11_data(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    condexpr_end_13:;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_data, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_urllib3$response_100, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_cond_value_14 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
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
    tmp_called_name_10 = PyObject_GetItem( locals_urllib3$response_100, const_str_plain_property );

    if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_urllib3$response$$$function_12_connection(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_called_name_11 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_urllib3$response$$$function_12_connection(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    condexpr_end_14:;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_connection, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_13_isclosed(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_isclosed, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_14_tell(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_tell, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_15__init_length(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__init_length, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_16__init_decoder(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__init_decoder, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_17__decode(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_18__flush_decoder(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__flush_decoder, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_12 = PyObject_GetItem( locals_urllib3$response_100, const_str_plain_contextmanager );

    if ( tmp_called_name_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_contextmanager );

        if (unlikely( tmp_called_name_12 == NULL ))
        {
            tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextmanager );
        }

        if ( tmp_called_name_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "contextmanager" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    tmp_args_element_name_5 = MAKE_FUNCTION_urllib3$response$$$function_19__error_catcher(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__error_catcher, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_2 = const_tuple_none_none_false_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_20_read( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_read, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_3 = const_tuple_int_pos_65536_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_21_stream( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_stream, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_urllib3$response_100, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_called_name_13 = PyObject_GetItem( locals_urllib3$response_100, const_str_plain_classmethod );

    if ( tmp_called_name_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_args_element_name_6 = MAKE_FUNCTION_urllib3$response$$$function_22_from_httplib(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 470;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$response$$$function_22_from_httplib(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    condexpr_end_15:;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_from_httplib, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 470;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_23_getheaders(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_getheaders, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 500;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_24_getheader( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_getheader, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_25_info(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_info, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 507;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_26_close(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_close, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_urllib3$response_100, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
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
    tmp_called_name_14 = PyObject_GetItem( locals_urllib3$response_100, const_str_plain_property );

    if ( tmp_called_name_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_args_element_name_7 = MAKE_FUNCTION_urllib3$response$$$function_27_closed(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 518;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_called_name_15 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_8 = MAKE_FUNCTION_urllib3$response$$$function_27_closed(  );
    frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame.f_lineno = 518;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    condexpr_end_16:;
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_closed, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_28_fileno(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_fileno, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 529;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_29_flush(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_flush, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_30_readable(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_readable, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_31_readinto(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_readinto, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_32_supports_chunked_reads(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_supports_chunked_reads, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_33__update_chunk_length(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__update_chunk_length, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 564;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_34__handle_chunk(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain__handle_chunk, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_5 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_35_read_chunked( tmp_defaults_5 );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_read_chunked, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 600;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_urllib3$response$$$function_36_geturl(  );
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain_geturl, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 667;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2720a7a6c6abf1dfb54523d907f7f2a_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2720a7a6c6abf1dfb54523d907f7f2a_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2720a7a6c6abf1dfb54523d907f7f2a_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 == cache_frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 )
    {
        Py_DECREF( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 );
    }
    cache_frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 = NULL;

    assertFrameObject( frame_a2720a7a6c6abf1dfb54523d907f7f2a_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_16;
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


        exception_lineno = 100;

        goto try_except_handler_16;
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
    tmp_res = PyObject_SetItem( locals_urllib3$response_100, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_16;
    }
    branch_no_8:;
    tmp_called_name_16 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_9 = const_str_plain_HTTPResponse;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_9 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = locals_urllib3$response_100;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_9 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_3cc0929157c2ce1f0b73230571ba9161->m_frame.f_lineno = 100;
    tmp_assign_source_57 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto try_except_handler_16;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_57;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_urllib3$response_100 );
    locals_urllib3$response_100 = NULL;
    goto try_return_handler_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_urllib3$response_100 );
    locals_urllib3$response_100 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$response );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 100;
    goto try_except_handler_14;
    outline_result_4:;
    tmp_assign_source_56 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_urllib3$response, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_56 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cc0929157c2ce1f0b73230571ba9161 );
#endif
    popFrameStack();

    assertFrameObject( frame_3cc0929157c2ce1f0b73230571ba9161 );

    goto frame_no_exception_5;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3cc0929157c2ce1f0b73230571ba9161 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3cc0929157c2ce1f0b73230571ba9161, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3cc0929157c2ce1f0b73230571ba9161->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3cc0929157c2ce1f0b73230571ba9161, exception_lineno );
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


    return MOD_RETURN_VALUE( module_urllib3$response );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
