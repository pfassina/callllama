/* Generated code for Python source for module 'dateutil.parser.isoparser'
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

/* The _module_dateutil$parser$isoparser is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil$parser$isoparser;
PyDictObject *moduledict_dateutil$parser$isoparser;

/* The module constants used, if any. */
static PyObject *const_str_digest_dc41cce4b2abe5b79410e80649d4c406;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_timestr;
static PyObject *const_str_plain_ordinal_day;
static PyObject *const_str_plain__calculate_weekdate;
static PyObject *const_str_digest_9544b87982742993c0f5f3a4b895482e;
extern PyObject *const_int_pos_24;
static PyObject *const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple;
extern PyObject *const_str_plain_comp;
static PyObject *const_list_str_plain_isoparse_str_plain_isoparser_list;
extern PyObject *const_str_plain_sep;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_month;
static PyObject *const_tuple_bytes_digest_564aaf2f3b56da0094829d86d237e1cc_tuple;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_isocalendar;
extern PyObject *const_str_plain_any;
static PyObject *const_str_digest_ae8781db72c94bbcaea4d4cc6cfb811c;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_23;
static PyObject *const_str_digest_a1e8cc94a5fb27196afc4cccac879310;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_eeece1440ba68c7ebd4a1a68d1035641;
static PyObject *const_str_plain_has_sep;
static PyObject *const_bytes_digest_564aaf2f3b56da0094829d86d237e1cc;
extern PyObject *const_str_plain_dateutil;
static PyObject *const_str_plain_DEFAULT_ISOPARSER;
static PyObject *const_str_digest_addf88fff40d9b7c255c6c48e7c39e5c;
static PyObject *const_str_digest_bc384ce083cb344b6bc03ca5721ca286;
extern PyObject *const_int_pos_5;
static PyObject *const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_isoparse;
static PyObject *const_str_digest_a312668a277fce14e7c7bca251a8f70f;
extern PyObject *const_str_plain_isleap;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_49da3f2ec8546545939c6eaeb04542e5;
static PyObject *const_str_plain_week_1;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_bytes_chr_87;
extern PyObject *const_str_plain_minutes;
static PyObject *const_str_plain__MICROSECOND_END_REGEX;
static PyObject *const_str_digest_3f489f137f8d33c449617a3431dc588b;
static PyObject *const_str_plain__parse_isodate_uncommon;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_str_digest_f535bcb99a549c8dd80a10510acb23d6;
static PyObject *const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_plain_components;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_7907ff4b2f599e4370e7f9ad20a6897c;
extern PyObject *const_tuple_str_plain_tz_tuple;
static PyObject *const_bytes_chr_45;
static PyObject *const_str_plain__MICRO_SEP;
extern PyObject *const_tuple_str_plain_ascii_tuple;
static PyObject *const_slice_int_0_int_pos_4_none;
static PyObject *const_slice_int_0_int_pos_1_none;
static PyObject *const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple;
static PyObject *const_bytes_chr_90;
static PyObject *const_str_digest_2f655a33a5d6c2b979f5e03c27a784e7;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_str_in;
extern PyObject *const_str_plain_hours;
static PyObject *const_slice_int_pos_2_int_pos_3_none;
extern PyObject *const_str_plain_wraps;
extern PyObject *const_str_plain_raise_from;
static PyObject *const_str_digest_273350d1d4e721d00a990e5736020868;
static PyObject *const_str_digest_cd54625f84514313bc3f884cd8f3dbc7;
static PyObject *const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_plain_jan_4;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_3dc887f1fb8082ad07bc6a899cdfc40c;
static PyObject *const_str_digest_7b9c8b2f585fc922a471d79cd765fdad;
static PyObject *const_str_digest_bc5f26e35a2d70ffe8f304fb4e60ed29;
static PyObject *const_str_plain_parse_isodate;
static PyObject *const_str_digest_9fd11276e9e20d1403d77c01811be30a;
static PyObject *const_str_digest_002af61a9928cdbb7f76be79a3ec7e26;
static PyObject *const_str_plain_dayno;
static PyObject *const_str_plain__TIME_SEP;
extern PyObject *const_bytes_chr_46;
static PyObject *const_str_digest_ad78b016e2101d9307280b1e79d08c75;
extern PyObject *const_str_plain_e;
extern PyObject *const_int_pos_8;
static PyObject *const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple;
extern PyObject *const_str_plain_isoparser;
static PyObject *const_str_plain_us_str;
static PyObject *const_str_digest_7ee3aedf01ede174a1f8bd532fd5ea25;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_d81e52c7ef5be9c491b182f253980414;
static PyObject *const_str_plain_zero_as_utc;
extern PyObject *const_str_plain_calendar;
static PyObject *const_str_plain_base_date;
static PyObject *const_str_digest_3b4e7a51f7e41b6b6a2bfe87e1c2fbc5;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_int_pos_59;
extern PyObject *const_str_plain_len_str;
static PyObject *const_str_digest_87476696c188cfa8709a5079d606de15;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_d3e96ef4753a96ddf2d2adb2ecf7fea4;
static PyObject *const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_ba418bb085ae97b5ed215c87204a41b8;
static PyObject *const_str_plain__DATE_SEP;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_tzutc;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_str_plain_wraps_tuple;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_str_plain_self_str_plain_timestr_tuple;
static PyObject *const_str_digest_d13546195c9d971ea2eff59832fbe688;
static PyObject *const_str_digest_721bc1aa30b64bd3642a7350541ba875;
static PyObject *const_str_digest_6d4840b3420c33d1b6b9b6e5fcbbc247;
static PyObject *const_str_plain__takes_ascii;
extern PyObject *const_int_0;
static PyObject *const_str_plain_dt_str;
static PyObject *const_int_pos_54;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_tz;
static PyObject *const_list_int_pos_1_int_pos_1_int_pos_1_list;
extern PyObject *const_str_plain_tzstr;
static PyObject *const_str_digest_9d79937694e45079e3b300f128025ef4;
static PyObject *const_str_plain_datestr;
static PyObject *const_str_plain_component;
static PyObject *const_bytes_chr_43;
static PyObject *const_str_digest_b739213d0714b4dd82f3ec1e92951ccc;
extern PyObject *const_str_plain_year;
static PyObject *const_tuple_37ee49df0d5923256307b48dd3116d52_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_angle_lambda;
static PyObject *const_set_2fbb033eaf09004b738b14061b4856f6;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain__parse_isodate;
static PyObject *const_str_digest_7fe7a3c1ee63a7cc42d939939870fcad;
static PyObject *const_str_plain_mult;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_slice_int_pos_1_int_pos_4_none;
extern PyObject *const_str_plain_0123456789;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_d806ef4223107ee5875af23ec9037645;
static PyObject *const_str_plain__parse_tzstr;
static PyObject *const_str_plain__parse_isotime;
static PyObject *const_str_plain_parse_isotime;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_dd3f8ce78f1e9e917b041dfc99536745;
static PyObject *const_str_plain_weekno;
static PyObject *const_str_plain_week_offset;
static PyObject *const_str_digest_aba2d64fcb9d4a810e6452cb117fb2cd;
extern PyObject *const_str_plain_text_type;
static PyObject *const_str_digest_597528e9487c88e07adcbfce15aed3b1;
static PyObject *const_str_digest_e5eecc50669fd5896ad2f4832a63eda9;
extern PyObject *const_int_pos_1;
static PyObject *const_list_int_0_int_0_int_0_int_0_none_list;
extern PyObject *const_str_plain_day;
static PyObject *const_str_digest_ca7bdd5f09b573d90dd77e9dd7681d48;
static PyObject *const_slice_int_pos_4_int_pos_5_none;
static PyObject *const_str_plain__sep;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_365;
static PyObject *const_tuple_aa9a67aa63adedff6d108d024e656840_tuple;
static PyObject *const_str_digest_feb53e680b6c7d690400004131ece18e;
static PyObject *const_tuple_str_plain_str_in_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_bytes_chr_58;
static PyObject *const_bytes_digest_9055defc64eb2990ba44e5403167cd7c;
extern PyObject *const_slice_int_pos_1_int_pos_3_none;
extern PyObject *const_str_plain_week;
static PyObject *const_tuple_str_plain_self_str_plain_sep_tuple;
extern PyObject *const_str_plain_days;
extern PyObject *const_int_pos_7;
static PyObject *const_tuple_str_plain_self_str_plain_dt_str_tuple;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain__parse_isodate_common;
static PyObject *const_str_digest_4c6175688270c1bbd29a67a501516908;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_4d4b9c8bbe122f377bafc611a553be57;
extern PyObject *const_str_plain_date;
static PyObject *const_slice_int_pos_3_int_pos_4_none;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_1a2b0f43e4fa1cb2d64c6910cc212e07;
extern PyObject *const_str_plain_tzoffset;
static PyObject *const_tuple_str_plain_f_str_plain_func_tuple;
static PyObject *const_str_plain_parse_tzstr;
static PyObject *const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1;
static PyObject *const_str_digest_7340a4cb5be5425958394de31cf804b1;
static PyObject *const_str_digest_650e9be03b1fdec322a970371f4378d1;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_dc41cce4b2abe5b79410e80649d4c406 = UNSTREAM_STRING( &constant_bin[ 393546 ], 220, 0 );
    const_str_plain_ordinal_day = UNSTREAM_STRING( &constant_bin[ 393766 ], 11, 1 );
    const_str_plain__calculate_weekdate = UNSTREAM_STRING( &constant_bin[ 393777 ], 19, 1 );
    const_str_digest_9544b87982742993c0f5f3a4b895482e = UNSTREAM_STRING( &constant_bin[ 393796 ], 18, 0 );
    const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_dt_str = UNSTREAM_STRING( &constant_bin[ 393814 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 2, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    const_str_plain_has_sep = UNSTREAM_STRING( &constant_bin[ 393820 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 3, const_str_plain_has_sep ); Py_INCREF( const_str_plain_has_sep );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_plain_weekno = UNSTREAM_STRING( &constant_bin[ 393827 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 5, const_str_plain_weekno ); Py_INCREF( const_str_plain_weekno );
    const_str_plain_dayno = UNSTREAM_STRING( &constant_bin[ 393833 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 6, const_str_plain_dayno ); Py_INCREF( const_str_plain_dayno );
    const_str_plain_base_date = UNSTREAM_STRING( &constant_bin[ 393838 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 7, const_str_plain_base_date ); Py_INCREF( const_str_plain_base_date );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 8, const_str_plain_ordinal_day ); Py_INCREF( const_str_plain_ordinal_day );
    const_str_plain_components = UNSTREAM_STRING( &constant_bin[ 393847 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 9, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    const_list_str_plain_isoparse_str_plain_isoparser_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_isoparse_str_plain_isoparser_list, 0, const_str_plain_isoparse ); Py_INCREF( const_str_plain_isoparse );
    PyList_SET_ITEM( const_list_str_plain_isoparse_str_plain_isoparser_list, 1, const_str_plain_isoparser ); Py_INCREF( const_str_plain_isoparser );
    const_tuple_bytes_digest_564aaf2f3b56da0094829d86d237e1cc_tuple = PyTuple_New( 1 );
    const_bytes_digest_564aaf2f3b56da0094829d86d237e1cc = UNSTREAM_BYTES( &constant_bin[ 393857 ], 6 );
    PyTuple_SET_ITEM( const_tuple_bytes_digest_564aaf2f3b56da0094829d86d237e1cc_tuple, 0, const_bytes_digest_564aaf2f3b56da0094829d86d237e1cc ); Py_INCREF( const_bytes_digest_564aaf2f3b56da0094829d86d237e1cc );
    const_str_plain_isocalendar = UNSTREAM_STRING( &constant_bin[ 393863 ], 11, 1 );
    const_str_digest_ae8781db72c94bbcaea4d4cc6cfb811c = UNSTREAM_STRING( &constant_bin[ 393874 ], 38, 0 );
    const_str_digest_a1e8cc94a5fb27196afc4cccac879310 = UNSTREAM_STRING( &constant_bin[ 393912 ], 35, 0 );
    const_str_digest_eeece1440ba68c7ebd4a1a68d1035641 = UNSTREAM_STRING( &constant_bin[ 393947 ], 222, 0 );
    const_str_plain_DEFAULT_ISOPARSER = UNSTREAM_STRING( &constant_bin[ 394169 ], 17, 1 );
    const_str_digest_addf88fff40d9b7c255c6c48e7c39e5c = UNSTREAM_STRING( &constant_bin[ 394186 ], 34, 0 );
    const_str_digest_bc384ce083cb344b6bc03ca5721ca286 = UNSTREAM_STRING( &constant_bin[ 394220 ], 18, 0 );
    const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 2, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 3, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 5, const_str_plain_has_sep ); Py_INCREF( const_str_plain_has_sep );
    const_str_digest_a312668a277fce14e7c7bca251a8f70f = UNSTREAM_STRING( &constant_bin[ 394238 ], 175, 0 );
    const_str_digest_49da3f2ec8546545939c6eaeb04542e5 = UNSTREAM_STRING( &constant_bin[ 394413 ], 16, 0 );
    const_str_plain_week_1 = UNSTREAM_STRING( &constant_bin[ 394429 ], 6, 1 );
    const_bytes_chr_87 = UNSTREAM_BYTES( &constant_bin[ 1135 ], 1 );
    const_str_plain__MICROSECOND_END_REGEX = UNSTREAM_STRING( &constant_bin[ 394435 ], 22, 1 );
    const_str_digest_3f489f137f8d33c449617a3431dc588b = UNSTREAM_STRING( &constant_bin[ 394457 ], 33, 0 );
    const_str_plain__parse_isodate_uncommon = UNSTREAM_STRING( &constant_bin[ 394467 ], 23, 1 );
    const_str_digest_f535bcb99a549c8dd80a10510acb23d6 = UNSTREAM_STRING( &constant_bin[ 394490 ], 34, 0 );
    const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_datestr = UNSTREAM_STRING( &constant_bin[ 394013 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 1, const_str_plain_datestr ); Py_INCREF( const_str_plain_datestr );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 3, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_digest_7907ff4b2f599e4370e7f9ad20a6897c = UNSTREAM_STRING( &constant_bin[ 394524 ], 33, 0 );
    const_bytes_chr_45 = UNSTREAM_BYTES( &constant_bin[ 51 ], 1 );
    const_str_plain__MICRO_SEP = UNSTREAM_STRING( &constant_bin[ 394557 ], 10, 1 );
    const_slice_int_0_int_pos_4_none = PySlice_New( const_int_0, const_int_pos_4, Py_None );
    const_slice_int_0_int_pos_1_none = PySlice_New( const_int_0, const_int_pos_1, Py_None );
    const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    const_str_plain_component = UNSTREAM_STRING( &constant_bin[ 393847 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple, 1, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 1, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 2, const_str_plain_week ); Py_INCREF( const_str_plain_week );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 3, const_str_plain_day ); Py_INCREF( const_str_plain_day );
    const_str_plain_jan_4 = UNSTREAM_STRING( &constant_bin[ 394567 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 4, const_str_plain_jan_4 ); Py_INCREF( const_str_plain_jan_4 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 5, const_str_plain_week_1 ); Py_INCREF( const_str_plain_week_1 );
    const_str_plain_week_offset = UNSTREAM_STRING( &constant_bin[ 394572 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 6, const_str_plain_week_offset ); Py_INCREF( const_str_plain_week_offset );
    const_bytes_chr_90 = UNSTREAM_BYTES( &constant_bin[ 3359 ], 1 );
    const_str_digest_2f655a33a5d6c2b979f5e03c27a784e7 = UNSTREAM_STRING( &constant_bin[ 394583 ], 31, 0 );
    const_str_plain_str_in = UNSTREAM_STRING( &constant_bin[ 394614 ], 6, 1 );
    const_slice_int_pos_2_int_pos_3_none = PySlice_New( const_int_pos_2, const_int_pos_3, Py_None );
    const_str_digest_273350d1d4e721d00a990e5736020868 = UNSTREAM_STRING( &constant_bin[ 394620 ], 18, 0 );
    const_str_digest_cd54625f84514313bc3f884cd8f3dbc7 = UNSTREAM_STRING( &constant_bin[ 394638 ], 19, 0 );
    const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 3, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_digest_3dc887f1fb8082ad07bc6a899cdfc40c = UNSTREAM_STRING( &constant_bin[ 394657 ], 482, 0 );
    const_str_digest_7b9c8b2f585fc922a471d79cd765fdad = UNSTREAM_STRING( &constant_bin[ 395139 ], 31, 0 );
    const_str_digest_bc5f26e35a2d70ffe8f304fb4e60ed29 = UNSTREAM_STRING( &constant_bin[ 395170 ], 30, 0 );
    const_str_plain_parse_isodate = UNSTREAM_STRING( &constant_bin[ 394468 ], 13, 1 );
    const_str_digest_9fd11276e9e20d1403d77c01811be30a = UNSTREAM_STRING( &constant_bin[ 395200 ], 53, 0 );
    const_str_digest_002af61a9928cdbb7f76be79a3ec7e26 = UNSTREAM_STRING( &constant_bin[ 395253 ], 14, 0 );
    const_str_plain__TIME_SEP = UNSTREAM_STRING( &constant_bin[ 395267 ], 9, 1 );
    const_str_digest_ad78b016e2101d9307280b1e79d08c75 = UNSTREAM_STRING( &constant_bin[ 395276 ], 21, 0 );
    const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 0, const_str_plain_datetime ); Py_INCREF( const_str_plain_datetime );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 1, const_str_plain_timedelta ); Py_INCREF( const_str_plain_timedelta );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 2, const_str_plain_time ); Py_INCREF( const_str_plain_time );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 3, const_str_plain_date ); Py_INCREF( const_str_plain_date );
    const_str_plain_us_str = UNSTREAM_STRING( &constant_bin[ 395297 ], 6, 1 );
    const_str_digest_7ee3aedf01ede174a1f8bd532fd5ea25 = UNSTREAM_STRING( &constant_bin[ 395303 ], 31, 0 );
    const_str_digest_d81e52c7ef5be9c491b182f253980414 = UNSTREAM_STRING( &constant_bin[ 395334 ], 43, 0 );
    const_str_plain_zero_as_utc = UNSTREAM_STRING( &constant_bin[ 395377 ], 11, 1 );
    const_str_digest_3b4e7a51f7e41b6b6a2bfe87e1c2fbc5 = UNSTREAM_STRING( &constant_bin[ 395388 ], 44, 0 );
    const_str_digest_87476696c188cfa8709a5079d606de15 = UNSTREAM_STRING( &constant_bin[ 395432 ], 20, 0 );
    const_str_digest_d3e96ef4753a96ddf2d2adb2ecf7fea4 = UNSTREAM_STRING( &constant_bin[ 395452 ], 22, 0 );
    const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 1, const_str_plain_str_in ); Py_INCREF( const_str_plain_str_in );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 6, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_ba418bb085ae97b5ed215c87204a41b8 = UNSTREAM_STRING( &constant_bin[ 395474 ], 226, 0 );
    const_str_plain__DATE_SEP = UNSTREAM_STRING( &constant_bin[ 395700 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_timestr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timestr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timestr_tuple, 1, const_str_plain_timestr ); Py_INCREF( const_str_plain_timestr );
    const_str_digest_d13546195c9d971ea2eff59832fbe688 = UNSTREAM_STRING( &constant_bin[ 395709 ], 20, 0 );
    const_str_digest_721bc1aa30b64bd3642a7350541ba875 = UNSTREAM_STRING( &constant_bin[ 395729 ], 29, 0 );
    const_str_digest_6d4840b3420c33d1b6b9b6e5fcbbc247 = UNSTREAM_STRING( &constant_bin[ 395758 ], 18, 0 );
    const_str_plain__takes_ascii = UNSTREAM_STRING( &constant_bin[ 395388 ], 12, 1 );
    const_int_pos_54 = PyLong_FromUnsignedLong( 54ul );
    const_list_int_pos_1_int_pos_1_int_pos_1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_pos_1_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_pos_1_list, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_pos_1_list, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_9d79937694e45079e3b300f128025ef4 = UNSTREAM_STRING( &constant_bin[ 393874 ], 28, 0 );
    const_bytes_chr_43 = UNSTREAM_BYTES( &constant_bin[ 6601 ], 1 );
    const_str_digest_b739213d0714b4dd82f3ec1e92951ccc = UNSTREAM_STRING( &constant_bin[ 395776 ], 35, 0 );
    const_tuple_37ee49df0d5923256307b48dd3116d52_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 1, const_str_plain_timestr ); Py_INCREF( const_str_plain_timestr );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 2, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 3, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 5, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 6, const_str_plain_has_sep ); Py_INCREF( const_str_plain_has_sep );
    PyTuple_SET_ITEM( const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 7, const_str_plain_us_str ); Py_INCREF( const_str_plain_us_str );
    const_set_2fbb033eaf09004b738b14061b4856f6 = PySet_New( NULL );
    PySet_Add( const_set_2fbb033eaf09004b738b14061b4856f6, const_int_pos_3 );
    PySet_Add( const_set_2fbb033eaf09004b738b14061b4856f6, const_int_pos_5 );
    PySet_Add( const_set_2fbb033eaf09004b738b14061b4856f6, const_int_pos_6 );
    assert( PySet_Size( const_set_2fbb033eaf09004b738b14061b4856f6 ) == 3 );
    const_str_plain__parse_isodate = UNSTREAM_STRING( &constant_bin[ 394467 ], 14, 1 );
    const_str_digest_7fe7a3c1ee63a7cc42d939939870fcad = UNSTREAM_STRING( &constant_bin[ 395811 ], 526, 0 );
    const_str_plain_mult = UNSTREAM_STRING( &constant_bin[ 1358 ], 4, 1 );
    const_slice_int_pos_1_int_pos_4_none = PySlice_New( const_int_pos_1, const_int_pos_4, Py_None );
    const_str_digest_d806ef4223107ee5875af23ec9037645 = UNSTREAM_STRING( &constant_bin[ 396337 ], 19, 0 );
    const_str_plain__parse_tzstr = UNSTREAM_STRING( &constant_bin[ 395462 ], 12, 1 );
    const_str_plain__parse_isotime = UNSTREAM_STRING( &constant_bin[ 395344 ], 14, 1 );
    const_str_plain_parse_isotime = UNSTREAM_STRING( &constant_bin[ 395345 ], 13, 1 );
    const_str_digest_dd3f8ce78f1e9e917b041dfc99536745 = UNSTREAM_STRING( &constant_bin[ 395334 ], 24, 0 );
    const_str_digest_aba2d64fcb9d4a810e6452cb117fb2cd = UNSTREAM_STRING( &constant_bin[ 395876 ], 18, 0 );
    const_str_digest_597528e9487c88e07adcbfce15aed3b1 = UNSTREAM_STRING( &constant_bin[ 396356 ], 69, 0 );
    const_str_digest_e5eecc50669fd5896ad2f4832a63eda9 = UNSTREAM_STRING( &constant_bin[ 396425 ], 15, 0 );
    const_list_int_0_int_0_int_0_int_0_none_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_ca7bdd5f09b573d90dd77e9dd7681d48 = UNSTREAM_STRING( &constant_bin[ 396440 ], 23, 0 );
    const_slice_int_pos_4_int_pos_5_none = PySlice_New( const_int_pos_4, const_int_pos_5, Py_None );
    const_str_plain__sep = UNSTREAM_STRING( &constant_bin[ 393823 ], 4, 1 );
    const_tuple_aa9a67aa63adedff6d108d024e656840_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 1, const_str_plain_tzstr ); Py_INCREF( const_str_plain_tzstr );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 2, const_str_plain_zero_as_utc ); Py_INCREF( const_str_plain_zero_as_utc );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 3, const_str_plain_mult ); Py_INCREF( const_str_plain_mult );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 4, const_str_plain_hours ); Py_INCREF( const_str_plain_hours );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 5, const_str_plain_minutes ); Py_INCREF( const_str_plain_minutes );
    const_str_digest_feb53e680b6c7d690400004131ece18e = UNSTREAM_STRING( &constant_bin[ 396463 ], 23, 0 );
    const_tuple_str_plain_str_in_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_str_in_tuple, 0, const_str_plain_str_in ); Py_INCREF( const_str_plain_str_in );
    const_bytes_digest_9055defc64eb2990ba44e5403167cd7c = UNSTREAM_BYTES( &constant_bin[ 393858 ], 3 );
    const_tuple_str_plain_self_str_plain_sep_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sep_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sep_tuple, 1, const_str_plain_sep ); Py_INCREF( const_str_plain_sep );
    const_tuple_str_plain_self_str_plain_dt_str_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    const_str_plain__parse_isodate_common = UNSTREAM_STRING( &constant_bin[ 394593 ], 21, 1 );
    const_str_digest_4c6175688270c1bbd29a67a501516908 = UNSTREAM_STRING( &constant_bin[ 394457 ], 24, 0 );
    const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 1, const_str_plain_tzstr ); Py_INCREF( const_str_plain_tzstr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 2, const_str_plain_zero_as_utc ); Py_INCREF( const_str_plain_zero_as_utc );
    const_str_digest_4d4b9c8bbe122f377bafc611a553be57 = UNSTREAM_STRING( &constant_bin[ 396486 ], 55, 0 );
    const_slice_int_pos_3_int_pos_4_none = PySlice_New( const_int_pos_3, const_int_pos_4, Py_None );
    const_str_digest_1a2b0f43e4fa1cb2d64c6910cc212e07 = UNSTREAM_STRING( &constant_bin[ 396541 ], 48, 0 );
    const_tuple_str_plain_f_str_plain_func_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_func_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_func_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_plain_parse_tzstr = UNSTREAM_STRING( &constant_bin[ 395286 ], 11, 1 );
    const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1 = UNSTREAM_STRING( &constant_bin[ 394194 ], 25, 0 );
    const_str_digest_7340a4cb5be5425958394de31cf804b1 = UNSTREAM_STRING( &constant_bin[ 395388 ], 26, 0 );
    const_str_digest_650e9be03b1fdec322a970371f4378d1 = UNSTREAM_STRING( &constant_bin[ 396589 ], 2556, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil$parser$isoparser( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fef793ed0020359f91453a03337314ec;
static PyCodeObject *codeobj_5cdfdfdd58d6a504b7e236b61cfca8cc;
static PyCodeObject *codeobj_8e1453583ae7115ce29fa9541e7619d2;
static PyCodeObject *codeobj_f099a76e9ae389ddeafcbc668c9d8e15;
static PyCodeObject *codeobj_a816bd95fe7ab7088d0a554d41d65f64;
static PyCodeObject *codeobj_b47d1b98ff66e84571fb3cfae7aa70bb;
static PyCodeObject *codeobj_1158085feaa04dd4e015ca9d058d3584;
static PyCodeObject *codeobj_79f2fdf7a74e26dfe1dd27aaea63ace2;
static PyCodeObject *codeobj_fcbdb69aa10917d48cbb54747da109d5;
static PyCodeObject *codeobj_cdaaf0268b1384302d1cc7be989439d7;
static PyCodeObject *codeobj_4a337dd5d1e4e12286ceaad02fbe5647;
static PyCodeObject *codeobj_9da25490ff7048dbb14977384e25a1ef;
static PyCodeObject *codeobj_cc518701fdf712c7dc595cd5050f9631;
static PyCodeObject *codeobj_ba9c87343e73a864faf5651b3ca44932;
static PyCodeObject *codeobj_fe04754f7ce0415eaa69ed50fc571626;
static PyCodeObject *codeobj_04cb2af3cfe7aae5f4e11b01aaf77a27;
static PyCodeObject *codeobj_a2543d52bdb7d0d93b6edcb8f241b890;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_597528e9487c88e07adcbfce15aed3b1;
    codeobj_fef793ed0020359f91453a03337314ec = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 367, const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5cdfdfdd58d6a504b7e236b61cfca8cc = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 26, const_tuple_str_plain_str_in_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8e1453583ae7115ce29fa9541e7619d2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_addf88fff40d9b7c255c6c48e7c39e5c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f099a76e9ae389ddeafcbc668c9d8e15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 43, const_tuple_str_plain_self_str_plain_sep_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a816bd95fe7ab7088d0a554d41d65f64 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__calculate_weekdate, 289, const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b47d1b98ff66e84571fb3cfae7aa70bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isodate, 198, const_tuple_str_plain_self_str_plain_dt_str_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1158085feaa04dd4e015ca9d058d3584 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isodate_common, 204, const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79f2fdf7a74e26dfe1dd27aaea63ace2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isodate_uncommon, 245, const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fcbdb69aa10917d48cbb54747da109d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isotime, 322, const_tuple_37ee49df0d5923256307b48dd3116d52_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cdaaf0268b1384302d1cc7be989439d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_tzstr, 373, const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a337dd5d1e4e12286ceaad02fbe5647 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__takes_ascii, 22, const_tuple_str_plain_f_str_plain_func_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9da25490ff7048dbb14977384e25a1ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func, 23, const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_cc518701fdf712c7dc595cd5050f9631 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isoparse, 59, const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba9c87343e73a864faf5651b3ca44932 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isoparser, 42, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_fe04754f7ce0415eaa69ed50fc571626 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_isodate, 142, const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_04cb2af3cfe7aae5f4e11b01aaf77a27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_isotime, 159, const_tuple_str_plain_self_str_plain_timestr_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a2543d52bdb7d0d93b6edcb8f241b890 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_tzstr, 172, const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_11_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_10__calculate_weekdate(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_11__parse_isotime(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_12__parse_tzstr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func( struct Nuitka_CellObject *closure_f );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda( struct Nuitka_CellObject *closure_str_in );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_3_isoparse(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_4_parse_isodate(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_5_parse_isotime(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_6_parse_tzstr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_7__parse_isodate(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_8__parse_isodate_common(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon(  );


// The module function definitions.
static PyObject *impl_dateutil$parser$isoparser$$$function_1__takes_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_func = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4a337dd5d1e4e12286ceaad02fbe5647 = NULL;

    struct Nuitka_FrameObject *frame_4a337dd5d1e4e12286ceaad02fbe5647;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a337dd5d1e4e12286ceaad02fbe5647, codeobj_4a337dd5d1e4e12286ceaad02fbe5647, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_4a337dd5d1e4e12286ceaad02fbe5647 = cache_frame_4a337dd5d1e4e12286ceaad02fbe5647;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a337dd5d1e4e12286ceaad02fbe5647 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a337dd5d1e4e12286ceaad02fbe5647 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_wraps );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wraps );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wraps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }

    if ( par_f == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( par_f );
    }

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4a337dd5d1e4e12286ceaad02fbe5647->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func( par_f );
    frame_4a337dd5d1e4e12286ceaad02fbe5647->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }
    assert( var_func == NULL );
    var_func = tmp_assign_source_1;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a337dd5d1e4e12286ceaad02fbe5647 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a337dd5d1e4e12286ceaad02fbe5647 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a337dd5d1e4e12286ceaad02fbe5647, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a337dd5d1e4e12286ceaad02fbe5647->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a337dd5d1e4e12286ceaad02fbe5647, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a337dd5d1e4e12286ceaad02fbe5647,
        type_description_1,
        par_f,
        var_func
    );


    // Release cached frame.
    if ( frame_4a337dd5d1e4e12286ceaad02fbe5647 == cache_frame_4a337dd5d1e4e12286ceaad02fbe5647 )
    {
        Py_DECREF( frame_4a337dd5d1e4e12286ceaad02fbe5647 );
    }
    cache_frame_4a337dd5d1e4e12286ceaad02fbe5647 = NULL;

    assertFrameObject( frame_4a337dd5d1e4e12286ceaad02fbe5647 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_func;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_CellObject *par_str_in = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_e = NULL;
    PyObject *var_msg = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9da25490ff7048dbb14977384e25a1ef = NULL;

    struct Nuitka_FrameObject *frame_9da25490ff7048dbb14977384e25a1ef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9da25490ff7048dbb14977384e25a1ef, codeobj_9da25490ff7048dbb14977384e25a1ef, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9da25490ff7048dbb14977384e25a1ef = cache_frame_9da25490ff7048dbb14977384e25a1ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9da25490ff7048dbb14977384e25a1ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9da25490ff7048dbb14977384e25a1ef ) == 2 ); // Frame stack

    // Framed code:
    if ( par_str_in == NULL )
    {
        tmp_getattr_target_1 = NULL;
    }
    else
    {
        tmp_getattr_target_1 = PyCell_GET( par_str_in );
    }

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_read;
    tmp_getattr_default_1 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda( par_str_in );
    tmp_called_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }
    frame_9da25490ff7048dbb14977384e25a1ef->m_frame.f_lineno = 26;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( par_str_in );
        PyCell_SET( par_str_in, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    if ( par_str_in == NULL )
    {
        tmp_isinstance_inst_1 = NULL;
    }
    else
    {
        tmp_isinstance_inst_1 = PyCell_GET( par_str_in );
    }

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ocooooc";
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
    if ( par_str_in == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( par_str_in );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "str_in" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ocooooc";
        goto try_except_handler_2;
    }

    frame_9da25490ff7048dbb14977384e25a1ef->m_frame.f_lineno = 32;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ocooooc";
        goto try_except_handler_2;
    }
    {
        PyObject *old = PyCell_GET( par_str_in );
        PyCell_SET( par_str_in, tmp_assign_source_2 );
        Py_XDECREF( old );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9da25490ff7048dbb14977384e25a1ef, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9da25490ff7048dbb14977384e25a1ef, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_UnicodeEncodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ocooooc";
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
    tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_digest_9fd11276e9e20d1403d77c01811be30a;
    assert( var_msg == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_msg = tmp_assign_source_4;

    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "ocooooc";
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_raise_from );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "ocooooc";
        goto try_except_handler_4;
    }
    tmp_make_exception_arg_1 = var_msg;

    if ( tmp_make_exception_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "ocooooc";
        goto try_except_handler_4;
    }

    frame_9da25490ff7048dbb14977384e25a1ef->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_args_element_name_1 == NULL) );
    tmp_args_element_name_2 = var_e;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "ocooooc";
        goto try_except_handler_4;
    }

    frame_9da25490ff7048dbb14977384e25a1ef->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "ocooooc";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto try_end_2;
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
    try_end_2:;
    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 31;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9da25490ff7048dbb14977384e25a1ef->m_frame) frame_9da25490ff7048dbb14977384e25a1ef->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocooooc";
    goto try_except_handler_3;
    branch_end_2:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func );
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_1:;
    if ( self->m_closure[0] == NULL )
    {
        tmp_dircall_arg1_1 = NULL;
    }
    else
    {
        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_self;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    if ( par_str_in == NULL )
    {
        tmp_tuple_element_1 = NULL;
    }
    else
    {
        tmp_tuple_element_1 = PyCell_GET( par_str_in );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "str_in" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_kwargs;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
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


        exception_lineno = 37;
        type_description_1 = "ocooooc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9da25490ff7048dbb14977384e25a1ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9da25490ff7048dbb14977384e25a1ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9da25490ff7048dbb14977384e25a1ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9da25490ff7048dbb14977384e25a1ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9da25490ff7048dbb14977384e25a1ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9da25490ff7048dbb14977384e25a1ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9da25490ff7048dbb14977384e25a1ef,
        type_description_1,
        par_self,
        par_str_in,
        par_args,
        par_kwargs,
        var_e,
        var_msg,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9da25490ff7048dbb14977384e25a1ef == cache_frame_9da25490ff7048dbb14977384e25a1ef )
    {
        Py_DECREF( frame_9da25490ff7048dbb14977384e25a1ef );
    }
    cache_frame_9da25490ff7048dbb14977384e25a1ef = NULL;

    assertFrameObject( frame_9da25490ff7048dbb14977384e25a1ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_str_in );
    Py_DECREF( par_str_in );
    par_str_in = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_str_in );
    Py_DECREF( par_str_in );
    par_str_in = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_5cdfdfdd58d6a504b7e236b61cfca8cc = NULL;

    struct Nuitka_FrameObject *frame_5cdfdfdd58d6a504b7e236b61cfca8cc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_5cdfdfdd58d6a504b7e236b61cfca8cc, codeobj_5cdfdfdd58d6a504b7e236b61cfca8cc, module_dateutil$parser$isoparser, sizeof(void *) );
    frame_5cdfdfdd58d6a504b7e236b61cfca8cc = cache_frame_5cdfdfdd58d6a504b7e236b61cfca8cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5cdfdfdd58d6a504b7e236b61cfca8cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5cdfdfdd58d6a504b7e236b61cfca8cc ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_return_value = NULL;
    }
    else
    {
        tmp_return_value = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "str_in" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5cdfdfdd58d6a504b7e236b61cfca8cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5cdfdfdd58d6a504b7e236b61cfca8cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5cdfdfdd58d6a504b7e236b61cfca8cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5cdfdfdd58d6a504b7e236b61cfca8cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5cdfdfdd58d6a504b7e236b61cfca8cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5cdfdfdd58d6a504b7e236b61cfca8cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5cdfdfdd58d6a504b7e236b61cfca8cc,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_5cdfdfdd58d6a504b7e236b61cfca8cc == cache_frame_5cdfdfdd58d6a504b7e236b61cfca8cc )
    {
        Py_DECREF( frame_5cdfdfdd58d6a504b7e236b61cfca8cc );
    }
    cache_frame_5cdfdfdd58d6a504b7e236b61cfca8cc = NULL;

    assertFrameObject( frame_5cdfdfdd58d6a504b7e236b61cfca8cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sep = python_pars[ 1 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_ord_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f099a76e9ae389ddeafcbc668c9d8e15 = NULL;

    struct Nuitka_FrameObject *frame_f099a76e9ae389ddeafcbc668c9d8e15;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f099a76e9ae389ddeafcbc668c9d8e15, codeobj_f099a76e9ae389ddeafcbc668c9d8e15, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_f099a76e9ae389ddeafcbc668c9d8e15 = cache_frame_f099a76e9ae389ddeafcbc668c9d8e15;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f099a76e9ae389ddeafcbc668c9d8e15 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f099a76e9ae389ddeafcbc668c9d8e15 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_sep;

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
    tmp_len_arg_1 = par_sep;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 51;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_ord_arg_1 = par_sep;

    if ( tmp_ord_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = BUILTIN_ORD( tmp_ord_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_128;
    tmp_or_left_value_2 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 51;
        type_description_1 = "oo";
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
    tmp_compexpr_left_3 = par_sep;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = const_str_plain_0123456789;
    tmp_or_right_value_2 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_or_right_value_2 );
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
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

        exception_lineno = 51;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_1 = const_str_digest_4d4b9c8bbe122f377bafc611a553be57;
    frame_f099a76e9ae389ddeafcbc668c9d8e15->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 52;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_1 = par_sep;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_f099a76e9ae389ddeafcbc668c9d8e15->m_frame.f_lineno = 55;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_sep;
        par_sep = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_1 = par_sep;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oo";
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

        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__sep, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f099a76e9ae389ddeafcbc668c9d8e15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f099a76e9ae389ddeafcbc668c9d8e15 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f099a76e9ae389ddeafcbc668c9d8e15, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f099a76e9ae389ddeafcbc668c9d8e15->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f099a76e9ae389ddeafcbc668c9d8e15, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f099a76e9ae389ddeafcbc668c9d8e15,
        type_description_1,
        par_self,
        par_sep
    );


    // Release cached frame.
    if ( frame_f099a76e9ae389ddeafcbc668c9d8e15 == cache_frame_f099a76e9ae389ddeafcbc668c9d8e15 )
    {
        Py_DECREF( frame_f099a76e9ae389ddeafcbc668c9d8e15 );
    }
    cache_frame_f099a76e9ae389ddeafcbc668c9d8e15 = NULL;

    assertFrameObject( frame_f099a76e9ae389ddeafcbc668c9d8e15 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_sep );
    par_sep = NULL;

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

    Py_XDECREF( par_sep );
    par_sep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_2___init__ );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_3_isoparse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_cc518701fdf712c7dc595cd5050f9631 = NULL;

    struct Nuitka_FrameObject *frame_cc518701fdf712c7dc595cd5050f9631;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc518701fdf712c7dc595cd5050f9631, codeobj_cc518701fdf712c7dc595cd5050f9631, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cc518701fdf712c7dc595cd5050f9631 = cache_frame_cc518701fdf712c7dc595cd5050f9631;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc518701fdf712c7dc595cd5050f9631 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc518701fdf712c7dc595cd5050f9631 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_isodate );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_dt_str;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_cc518701fdf712c7dc595cd5050f9631->m_frame.f_lineno = 132;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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
        exception_lineno = 132;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooo";
        exception_lineno = 132;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
                exception_lineno = 132;
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

        type_description_1 = "oooo";
        exception_lineno = 132;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_components == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_components = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_pos == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_pos = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_len_arg_1 = par_dt_str;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = var_pos;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
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

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__sep );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooo";
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
    tmp_subscribed_name_1 = par_dt_str;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_pos;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = var_pos;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( !(tmp_subscript_name_1 == NULL) );
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__sep );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 135;
        type_description_1 = "oooo";
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
    tmp_left_name_2 = var_components;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__parse_isotime );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_dt_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = var_pos;

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_start_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_start_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_stop_name_2 = Py_None;
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_start_name_2 );
    assert( !(tmp_subscript_name_2 == NULL) );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_cc518701fdf712c7dc595cd5050f9631->m_frame.f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_6 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    var_components = tmp_assign_source_6;

    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_1 = const_str_digest_ae8781db72c94bbcaea4d4cc6cfb811c;
    frame_cc518701fdf712c7dc595cd5050f9631->m_frame.f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 138;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_no_1:;
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = var_components;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_2_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc518701fdf712c7dc595cd5050f9631 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc518701fdf712c7dc595cd5050f9631 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc518701fdf712c7dc595cd5050f9631 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc518701fdf712c7dc595cd5050f9631, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc518701fdf712c7dc595cd5050f9631->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc518701fdf712c7dc595cd5050f9631, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc518701fdf712c7dc595cd5050f9631,
        type_description_1,
        par_self,
        par_dt_str,
        var_components,
        var_pos
    );


    // Release cached frame.
    if ( frame_cc518701fdf712c7dc595cd5050f9631 == cache_frame_cc518701fdf712c7dc595cd5050f9631 )
    {
        Py_DECREF( frame_cc518701fdf712c7dc595cd5050f9631 );
    }
    cache_frame_cc518701fdf712c7dc595cd5050f9631 = NULL;

    assertFrameObject( frame_cc518701fdf712c7dc595cd5050f9631 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_3_isoparse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

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

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_3_isoparse );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_4_parse_isodate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_datestr = python_pars[ 1 ];
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_fe04754f7ce0415eaa69ed50fc571626 = NULL;

    struct Nuitka_FrameObject *frame_fe04754f7ce0415eaa69ed50fc571626;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe04754f7ce0415eaa69ed50fc571626, codeobj_fe04754f7ce0415eaa69ed50fc571626, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fe04754f7ce0415eaa69ed50fc571626 = cache_frame_fe04754f7ce0415eaa69ed50fc571626;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe04754f7ce0415eaa69ed50fc571626 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe04754f7ce0415eaa69ed50fc571626 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_isodate );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_datestr;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "datestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_fe04754f7ce0415eaa69ed50fc571626->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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
        exception_lineno = 153;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooo";
        exception_lineno = 153;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
                exception_lineno = 153;
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

        type_description_1 = "oooo";
        exception_lineno = 153;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_components == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_components = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_pos == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_pos = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_pos;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = par_datestr;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "datestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_9d79937694e45079e3b300f128025ef4;
    tmp_source_name_2 = const_str_digest_002af61a9928cdbb7f76be79a3ec7e26;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_args_element_name_2 = par_datestr;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "datestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_fe04754f7ce0415eaa69ed50fc571626->m_frame.f_lineno = 156;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_fe04754f7ce0415eaa69ed50fc571626->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 155;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = var_components;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_2_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe04754f7ce0415eaa69ed50fc571626 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe04754f7ce0415eaa69ed50fc571626 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe04754f7ce0415eaa69ed50fc571626 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe04754f7ce0415eaa69ed50fc571626, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe04754f7ce0415eaa69ed50fc571626->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe04754f7ce0415eaa69ed50fc571626, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe04754f7ce0415eaa69ed50fc571626,
        type_description_1,
        par_self,
        par_datestr,
        var_components,
        var_pos
    );


    // Release cached frame.
    if ( frame_fe04754f7ce0415eaa69ed50fc571626 == cache_frame_fe04754f7ce0415eaa69ed50fc571626 )
    {
        Py_DECREF( frame_fe04754f7ce0415eaa69ed50fc571626 );
    }
    cache_frame_fe04754f7ce0415eaa69ed50fc571626 = NULL;

    assertFrameObject( frame_fe04754f7ce0415eaa69ed50fc571626 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_4_parse_isodate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_datestr );
    par_datestr = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

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

    Py_XDECREF( par_datestr );
    par_datestr = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_4_parse_isodate );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_5_parse_isotime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timestr = python_pars[ 1 ];
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_04cb2af3cfe7aae5f4e11b01aaf77a27 = NULL;

    struct Nuitka_FrameObject *frame_04cb2af3cfe7aae5f4e11b01aaf77a27;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_04cb2af3cfe7aae5f4e11b01aaf77a27, codeobj_04cb2af3cfe7aae5f4e11b01aaf77a27, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_04cb2af3cfe7aae5f4e11b01aaf77a27 = cache_frame_04cb2af3cfe7aae5f4e11b01aaf77a27;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_isotime );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_timestr;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_04cb2af3cfe7aae5f4e11b01aaf77a27->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_2_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_04cb2af3cfe7aae5f4e11b01aaf77a27, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_04cb2af3cfe7aae5f4e11b01aaf77a27->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_04cb2af3cfe7aae5f4e11b01aaf77a27, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_04cb2af3cfe7aae5f4e11b01aaf77a27,
        type_description_1,
        par_self,
        par_timestr
    );


    // Release cached frame.
    if ( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 == cache_frame_04cb2af3cfe7aae5f4e11b01aaf77a27 )
    {
        Py_DECREF( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 );
    }
    cache_frame_04cb2af3cfe7aae5f4e11b01aaf77a27 = NULL;

    assertFrameObject( frame_04cb2af3cfe7aae5f4e11b01aaf77a27 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_5_parse_isotime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_timestr );
    par_timestr = NULL;

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

    Py_XDECREF( par_timestr );
    par_timestr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_5_parse_isotime );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_6_parse_tzstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tzstr = python_pars[ 1 ];
    PyObject *par_zero_as_utc = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_a2543d52bdb7d0d93b6edcb8f241b890 = NULL;

    struct Nuitka_FrameObject *frame_a2543d52bdb7d0d93b6edcb8f241b890;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2543d52bdb7d0d93b6edcb8f241b890, codeobj_a2543d52bdb7d0d93b6edcb8f241b890, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a2543d52bdb7d0d93b6edcb8f241b890 = cache_frame_a2543d52bdb7d0d93b6edcb8f241b890;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2543d52bdb7d0d93b6edcb8f241b890 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2543d52bdb7d0d93b6edcb8f241b890 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_tzstr );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_tzstr;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_zero_as_utc;
    tmp_dict_value_1 = par_zero_as_utc;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zero_as_utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_a2543d52bdb7d0d93b6edcb8f241b890->m_frame.f_lineno = 190;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2543d52bdb7d0d93b6edcb8f241b890 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2543d52bdb7d0d93b6edcb8f241b890 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2543d52bdb7d0d93b6edcb8f241b890 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2543d52bdb7d0d93b6edcb8f241b890, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2543d52bdb7d0d93b6edcb8f241b890->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2543d52bdb7d0d93b6edcb8f241b890, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2543d52bdb7d0d93b6edcb8f241b890,
        type_description_1,
        par_self,
        par_tzstr,
        par_zero_as_utc
    );


    // Release cached frame.
    if ( frame_a2543d52bdb7d0d93b6edcb8f241b890 == cache_frame_a2543d52bdb7d0d93b6edcb8f241b890 )
    {
        Py_DECREF( frame_a2543d52bdb7d0d93b6edcb8f241b890 );
    }
    cache_frame_a2543d52bdb7d0d93b6edcb8f241b890 = NULL;

    assertFrameObject( frame_a2543d52bdb7d0d93b6edcb8f241b890 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_6_parse_tzstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_tzstr );
    par_tzstr = NULL;

    Py_XDECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

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

    Py_XDECREF( par_tzstr );
    par_tzstr = NULL;

    Py_XDECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_6_parse_tzstr );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_7__parse_isodate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_b47d1b98ff66e84571fb3cfae7aa70bb = NULL;

    struct Nuitka_FrameObject *frame_b47d1b98ff66e84571fb3cfae7aa70bb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b47d1b98ff66e84571fb3cfae7aa70bb, codeobj_b47d1b98ff66e84571fb3cfae7aa70bb, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_b47d1b98ff66e84571fb3cfae7aa70bb = cache_frame_b47d1b98ff66e84571fb3cfae7aa70bb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b47d1b98ff66e84571fb3cfae7aa70bb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b47d1b98ff66e84571fb3cfae7aa70bb ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_isodate_common );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_dt_str;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    frame_b47d1b98ff66e84571fb3cfae7aa70bb->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b47d1b98ff66e84571fb3cfae7aa70bb, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b47d1b98ff66e84571fb3cfae7aa70bb, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oo";
        goto try_except_handler_3;
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__parse_isodate_uncommon );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_2 = par_dt_str;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    frame_b47d1b98ff66e84571fb3cfae7aa70bb->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 199;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b47d1b98ff66e84571fb3cfae7aa70bb->m_frame) frame_b47d1b98ff66e84571fb3cfae7aa70bb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b47d1b98ff66e84571fb3cfae7aa70bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b47d1b98ff66e84571fb3cfae7aa70bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b47d1b98ff66e84571fb3cfae7aa70bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b47d1b98ff66e84571fb3cfae7aa70bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b47d1b98ff66e84571fb3cfae7aa70bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b47d1b98ff66e84571fb3cfae7aa70bb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b47d1b98ff66e84571fb3cfae7aa70bb,
        type_description_1,
        par_self,
        par_dt_str
    );


    // Release cached frame.
    if ( frame_b47d1b98ff66e84571fb3cfae7aa70bb == cache_frame_b47d1b98ff66e84571fb3cfae7aa70bb )
    {
        Py_DECREF( frame_b47d1b98ff66e84571fb3cfae7aa70bb );
    }
    cache_frame_b47d1b98ff66e84571fb3cfae7aa70bb = NULL;

    assertFrameObject( frame_b47d1b98ff66e84571fb3cfae7aa70bb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

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

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_8__parse_isodate_common( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    PyObject *var_len_str = NULL;
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_has_sep = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    int tmp_ass_subscript_res_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_Lt_3;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_start_name_4;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_step_name_4;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_stop_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static struct Nuitka_FrameObject *cache_frame_1158085feaa04dd4e015ca9d058d3584 = NULL;

    struct Nuitka_FrameObject *frame_1158085feaa04dd4e015ca9d058d3584;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1158085feaa04dd4e015ca9d058d3584, codeobj_1158085feaa04dd4e015ca9d058d3584, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1158085feaa04dd4e015ca9d058d3584 = cache_frame_1158085feaa04dd4e015ca9d058d3584;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1158085feaa04dd4e015ca9d058d3584 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1158085feaa04dd4e015ca9d058d3584 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_dt_str;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_len_str == NULL );
    var_len_str = tmp_assign_source_1;

    tmp_assign_source_2 = LIST_COPY( const_list_int_pos_1_int_pos_1_int_pos_1_list );
    assert( var_components == NULL );
    var_components = tmp_assign_source_2;

    tmp_compare_left_1 = var_len_str;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_4;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_d13546195c9d971ea2eff59832fbe688;
    frame_1158085feaa04dd4e015ca9d058d3584->m_frame.f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 209;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = par_dt_str;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_int_0_int_pos_4_none;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_components;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = const_int_pos_4;
    assert( var_pos == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_pos = tmp_assign_source_3;

    tmp_compare_left_2 = const_int_pos_4;
    tmp_compare_right_2 = var_len_str;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_tuple_element_1 = var_components;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_pos;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_subscribed_name_2 = par_dt_str;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_pos;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = var_pos;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( !(tmp_subscript_name_2 == NULL) );
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__DATE_SEP );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_has_sep == NULL );
    var_has_sep = tmp_assign_source_4;

    tmp_cond_value_1 = var_has_sep;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_2 = var_pos;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_5 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_5;

    branch_no_3:;
    tmp_left_name_3 = var_len_str;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = var_pos;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_2;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_87476696c188cfa8709a5079d606de15;
    frame_1158085feaa04dd4e015ca9d058d3584->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 223;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_subscribed_name_3 = par_dt_str;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = var_pos;

    if ( tmp_start_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = var_pos;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_2;
    tmp_stop_name_2 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( !(tmp_subscript_name_3 == NULL) );
    tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_components;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_int_pos_1;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = var_pos;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_2;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_6 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_6;

    tmp_compare_left_4 = var_pos;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = var_len_str;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_cond_value_2 = var_has_sep;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_tuple_element_2 = var_components;

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_pos;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_make_exception_arg_3 = const_str_digest_6d4840b3420c33d1b6b9b6e5fcbbc247;
    frame_1158085feaa04dd4e015ca9d058d3584->m_frame.f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_3 == NULL) );
    exception_type = tmp_raise_type_3;
    exception_lineno = 232;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_6:;
    branch_no_5:;
    tmp_cond_value_3 = var_has_sep;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_subscribed_name_4 = par_dt_str;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = var_pos;

    if ( tmp_start_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = var_pos;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( !(tmp_subscript_name_4 == NULL) );
    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__DATE_SEP );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_4 = const_str_digest_7ee3aedf01ede174a1f8bd532fd5ea25;
    frame_1158085feaa04dd4e015ca9d058d3584->m_frame.f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_4 == NULL) );
    exception_type = tmp_raise_type_4;
    exception_lineno = 236;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_left_name_7 = var_pos;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_7 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_7;

    branch_no_7:;
    tmp_left_name_8 = var_len_str;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = var_pos;

    if ( tmp_right_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = const_int_pos_2;
    tmp_cmp_Lt_3 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_Lt_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_3 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_5 = const_str_digest_9544b87982742993c0f5f3a4b895482e;
    frame_1158085feaa04dd4e015ca9d058d3584->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_5 == NULL) );
    exception_type = tmp_raise_type_5;
    exception_lineno = 241;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_subscribed_name_5 = par_dt_str;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_4 = var_pos;

    if ( tmp_start_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = var_pos;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_2;
    tmp_stop_name_4 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_stop_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_4 = Py_None;
    tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
    Py_DECREF( tmp_stop_name_4 );
    assert( !(tmp_subscript_name_5 == NULL) );
    tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_3 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = var_components;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = const_int_pos_2;
    tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_ass_subscript_res_3 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_3 = var_components;

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_left_name_10 = var_pos;

    if ( tmp_left_name_10 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_int_pos_2;
    tmp_tuple_element_3 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1158085feaa04dd4e015ca9d058d3584 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1158085feaa04dd4e015ca9d058d3584 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1158085feaa04dd4e015ca9d058d3584 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1158085feaa04dd4e015ca9d058d3584, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1158085feaa04dd4e015ca9d058d3584->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1158085feaa04dd4e015ca9d058d3584, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1158085feaa04dd4e015ca9d058d3584,
        type_description_1,
        par_self,
        par_dt_str,
        var_len_str,
        var_components,
        var_pos,
        var_has_sep
    );


    // Release cached frame.
    if ( frame_1158085feaa04dd4e015ca9d058d3584 == cache_frame_1158085feaa04dd4e015ca9d058d3584 )
    {
        Py_DECREF( frame_1158085feaa04dd4e015ca9d058d3584 );
    }
    cache_frame_1158085feaa04dd4e015ca9d058d3584 = NULL;

    assertFrameObject( frame_1158085feaa04dd4e015ca9d058d3584 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_8__parse_isodate_common );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

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

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_8__parse_isodate_common );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    PyObject *var_year = NULL;
    PyObject *var_has_sep = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_weekno = NULL;
    PyObject *var_dayno = NULL;
    PyObject *var_base_date = NULL;
    PyObject *var_ordinal_day = NULL;
    PyObject *var_components = NULL;
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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_start_name_4;
    PyObject *tmp_start_name_5;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_step_name_4;
    PyObject *tmp_step_name_5;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_stop_name_4;
    PyObject *tmp_stop_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_79f2fdf7a74e26dfe1dd27aaea63ace2 = NULL;

    struct Nuitka_FrameObject *frame_79f2fdf7a74e26dfe1dd27aaea63ace2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79f2fdf7a74e26dfe1dd27aaea63ace2, codeobj_79f2fdf7a74e26dfe1dd27aaea63ace2, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2 = cache_frame_79f2fdf7a74e26dfe1dd27aaea63ace2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_dt_str;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_4;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_d13546195c9d971ea2eff59832fbe688;
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 247;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = par_dt_str;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_int_0_int_pos_4_none;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_year == NULL );
    var_year = tmp_assign_source_1;

    tmp_subscribed_name_2 = par_dt_str;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_slice_int_pos_4_int_pos_5_none;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__DATE_SEP );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 252;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_has_sep == NULL );
    var_has_sep = tmp_assign_source_2;

    tmp_left_name_1 = const_int_pos_4;
    tmp_right_name_1 = var_has_sep;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_pos == NULL );
    var_pos = tmp_assign_source_3;

    tmp_subscribed_name_3 = par_dt_str;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_pos;

    CHECK_OBJECT( tmp_start_name_1 );
    tmp_left_name_2 = var_pos;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( !(tmp_subscript_name_3 == NULL) );
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_bytes_chr_87;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_3 = var_pos;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_4 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_4;

    tmp_subscribed_name_4 = par_dt_str;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = var_pos;

    CHECK_OBJECT( tmp_start_name_2 );
    tmp_left_name_4 = var_pos;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = const_int_pos_2;
    tmp_stop_name_2 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( !(tmp_subscript_name_4 == NULL) );
    tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_weekno == NULL );
    var_weekno = tmp_assign_source_5;

    tmp_left_name_5 = var_pos;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_2;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_6 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_6;

    tmp_assign_source_7 = const_int_pos_1;
    assert( var_dayno == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_dayno = tmp_assign_source_7;

    tmp_len_arg_2 = par_dt_str;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = var_pos;

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_subscribed_name_5 = par_dt_str;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = var_pos;

    if ( tmp_start_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = var_pos;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( !(tmp_subscript_name_5 == NULL) );
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__DATE_SEP );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = var_has_sep;

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_f535bcb99a549c8dd80a10510acb23d6;
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 264;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 264;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_left_name_7 = var_pos;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = var_has_sep;

    if ( tmp_right_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_8 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_8;

    tmp_subscribed_name_6 = par_dt_str;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_4 = var_pos;

    CHECK_OBJECT( tmp_start_name_4 );
    tmp_left_name_8 = var_pos;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_right_name_8 = const_int_pos_1;
    tmp_stop_name_4 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_stop_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_4 = Py_None;
    tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
    Py_DECREF( tmp_stop_name_4 );
    assert( !(tmp_subscript_name_6 == NULL) );
    tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscript_name_6 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_dayno;
        var_dayno = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_9 = var_pos;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_10 = tmp_left_name_9;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_10;

    branch_no_3:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__calculate_weekdate );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_year;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_weekno;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "weekno" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_dayno;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dayno" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_base_date == NULL );
    var_base_date = tmp_assign_source_11;

    goto branch_end_2;
    branch_no_2:;
    tmp_len_arg_3 = par_dt_str;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = var_pos;

    if ( tmp_right_name_10 == NULL )
    {
        Py_DECREF( tmp_left_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_pos_3;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_3 = const_str_digest_cd54625f84514313bc3f884cd8f3dbc7;
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_3 == NULL) );
    exception_type = tmp_raise_type_3;
    exception_lineno = 275;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_subscribed_name_7 = par_dt_str;

    if ( tmp_subscribed_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_5 = var_pos;

    if ( tmp_start_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_11 = var_pos;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_3;
    tmp_stop_name_5 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_stop_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_5 = Py_None;
    tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
    Py_DECREF( tmp_stop_name_5 );
    assert( !(tmp_subscript_name_7 == NULL) );
    tmp_int_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscript_name_7 );
    if ( tmp_int_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = PyNumber_Int( tmp_int_arg_4 );
    Py_DECREF( tmp_int_arg_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ordinal_day == NULL );
    var_ordinal_day = tmp_assign_source_12;

    tmp_left_name_12 = var_pos;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_int_pos_3;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_13 = tmp_left_name_12;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_13;

    tmp_compexpr_left_3 = var_ordinal_day;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ordinal_day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_or_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 280;
        type_description_1 = "oooooooooo";
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
    tmp_compexpr_left_4 = var_ordinal_day;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ordinal_day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_13 = const_int_pos_365;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_calendar );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calendar" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_isleap );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_year;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 280;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_right_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooooooooo";
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 280;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_left_name_14 = const_str_digest_cd54625f84514313bc3f884cd8f3dbc7;
    tmp_source_name_5 = const_str_digest_e5eecc50669fd5896ad2f4832a63eda9;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_format );
    assert( !(tmp_called_name_3 == NULL) );
    tmp_args_element_name_5 = var_ordinal_day;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ordinal_day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = var_year;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_right_name_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 281;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( !(tmp_raise_type_4 == NULL) );
    exception_type = tmp_raise_type_4;
    exception_lineno = 281;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_year;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = const_int_pos_1;
    tmp_args_element_name_9 = const_int_pos_1;
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 284;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_left_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_days;
    tmp_left_name_16 = var_ordinal_day;

    if ( tmp_left_name_16 == NULL )
    {
        Py_DECREF( tmp_left_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ordinal_day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_16 = const_int_pos_1;
    tmp_dict_value_1 = BINARY_OPERATION_SUB( tmp_left_name_16, tmp_right_name_16 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_15 );

        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame.f_lineno = 284;
    tmp_right_name_15 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_15 );

        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_base_date == NULL );
    var_base_date = tmp_assign_source_14;

    branch_end_2:;
    tmp_source_name_6 = var_base_date;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_year );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = PyList_New( 3 );
    PyList_SET_ITEM( tmp_assign_source_15, 0, tmp_list_element_1 );
    tmp_source_name_7 = var_base_date;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base_date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_month );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        exception_lineno = 286;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_15, 1, tmp_list_element_1 );
    tmp_source_name_8 = var_base_date;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "base_date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_day );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        exception_lineno = 286;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_15, 2, tmp_list_element_1 );
    assert( var_components == NULL );
    var_components = tmp_assign_source_15;

    tmp_tuple_element_1 = var_components;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_pos;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79f2fdf7a74e26dfe1dd27aaea63ace2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79f2fdf7a74e26dfe1dd27aaea63ace2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79f2fdf7a74e26dfe1dd27aaea63ace2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79f2fdf7a74e26dfe1dd27aaea63ace2,
        type_description_1,
        par_self,
        par_dt_str,
        var_year,
        var_has_sep,
        var_pos,
        var_weekno,
        var_dayno,
        var_base_date,
        var_ordinal_day,
        var_components
    );


    // Release cached frame.
    if ( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 == cache_frame_79f2fdf7a74e26dfe1dd27aaea63ace2 )
    {
        Py_DECREF( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 );
    }
    cache_frame_79f2fdf7a74e26dfe1dd27aaea63ace2 = NULL;

    assertFrameObject( frame_79f2fdf7a74e26dfe1dd27aaea63ace2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_year );
    var_year = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_weekno );
    var_weekno = NULL;

    Py_XDECREF( var_dayno );
    var_dayno = NULL;

    Py_XDECREF( var_base_date );
    var_base_date = NULL;

    Py_XDECREF( var_ordinal_day );
    var_ordinal_day = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

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

    Py_XDECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_year );
    var_year = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_weekno );
    var_weekno = NULL;

    Py_XDECREF( var_dayno );
    var_dayno = NULL;

    Py_XDECREF( var_base_date );
    var_base_date = NULL;

    Py_XDECREF( var_ordinal_day );
    var_ordinal_day = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_10__calculate_weekdate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_year = python_pars[ 1 ];
    PyObject *par_week = python_pars[ 2 ];
    PyObject *par_day = python_pars[ 3 ];
    PyObject *var_jan_4 = NULL;
    PyObject *var_week_1 = NULL;
    PyObject *var_week_offset = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
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
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_a816bd95fe7ab7088d0a554d41d65f64 = NULL;

    struct Nuitka_FrameObject *frame_a816bd95fe7ab7088d0a554d41d65f64;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a816bd95fe7ab7088d0a554d41d65f64, codeobj_a816bd95fe7ab7088d0a554d41d65f64, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a816bd95fe7ab7088d0a554d41d65f64 = cache_frame_a816bd95fe7ab7088d0a554d41d65f64;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a816bd95fe7ab7088d0a554d41d65f64 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a816bd95fe7ab7088d0a554d41d65f64 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_1 = par_week;

    CHECK_OBJECT( tmp_assign_source_1 );
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;

    // Tried code:
    tmp_compexpr_left_1 = const_int_0;
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_assign_source_2 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_2:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_pos_54;
    tmp_outline_return_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
    return NULL;
    outline_result_1:;
    tmp_cond_value_1 = tmp_outline_return_value_1;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 308;
        type_description_1 = "ooooooo";
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
    tmp_source_name_1 = const_str_digest_49da3f2ec8546545939c6eaeb04542e5;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( !(tmp_called_name_1 == NULL) );
    tmp_args_element_name_1 = par_week;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "week" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 309;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_assign_source_3 = par_day;

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    assert( tmp_comparison_chain_2__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;

    tmp_compexpr_left_3 = const_int_0;
    tmp_compexpr_right_3 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_assign_source_4 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_comparison_chain_2__comparison_result == NULL );
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;

    tmp_cond_value_4 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    branch_no_4:;
    tmp_compexpr_left_4 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_int_pos_8;
    tmp_outline_return_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
    Py_DECREF( tmp_comparison_chain_2__operand_2 );
    tmp_comparison_chain_2__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__comparison_result );
    Py_DECREF( tmp_comparison_chain_2__comparison_result );
    tmp_comparison_chain_2__comparison_result = NULL;

    goto outline_result_2;
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

    Py_XDECREF( tmp_comparison_chain_2__operand_2 );
    tmp_comparison_chain_2__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_2__comparison_result );
    tmp_comparison_chain_2__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
    return NULL;
    outline_result_2:;
    tmp_cond_value_3 = tmp_outline_return_value_2;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 311;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = const_str_digest_d806ef4223107ee5875af23ec9037645;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_args_element_name_2 = par_day;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 312;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_year;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "year" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = const_int_pos_1;
    tmp_args_element_name_5 = const_int_pos_4;
    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 315;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_jan_4 == NULL );
    var_jan_4 = tmp_assign_source_5;

    tmp_left_name_1 = var_jan_4;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_days;
    tmp_called_instance_1 = var_jan_4;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 316;
    tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isocalendar );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_2;
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_dict_value_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 316;
    tmp_right_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_week_1 == NULL );
    var_week_1 = tmp_assign_source_6;

    tmp_left_name_5 = par_week;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "week" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_left_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_3 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_7;
    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = par_day;

    if ( tmp_left_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "day" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_right_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 319;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_week_offset == NULL );
    var_week_offset = tmp_assign_source_7;

    tmp_left_name_7 = var_week_1;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "week_1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_days;
    tmp_dict_value_2 = var_week_offset;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame.f_lineno = 320;
    tmp_right_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a816bd95fe7ab7088d0a554d41d65f64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a816bd95fe7ab7088d0a554d41d65f64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a816bd95fe7ab7088d0a554d41d65f64 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a816bd95fe7ab7088d0a554d41d65f64, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a816bd95fe7ab7088d0a554d41d65f64->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a816bd95fe7ab7088d0a554d41d65f64, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a816bd95fe7ab7088d0a554d41d65f64,
        type_description_1,
        par_self,
        par_year,
        par_week,
        par_day,
        var_jan_4,
        var_week_1,
        var_week_offset
    );


    // Release cached frame.
    if ( frame_a816bd95fe7ab7088d0a554d41d65f64 == cache_frame_a816bd95fe7ab7088d0a554d41d65f64 )
    {
        Py_DECREF( frame_a816bd95fe7ab7088d0a554d41d65f64 );
    }
    cache_frame_a816bd95fe7ab7088d0a554d41d65f64 = NULL;

    assertFrameObject( frame_a816bd95fe7ab7088d0a554d41d65f64 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_year );
    par_year = NULL;

    Py_XDECREF( par_week );
    par_week = NULL;

    Py_XDECREF( par_day );
    par_day = NULL;

    Py_XDECREF( var_jan_4 );
    var_jan_4 = NULL;

    Py_XDECREF( var_week_1 );
    var_week_1 = NULL;

    Py_XDECREF( var_week_offset );
    var_week_offset = NULL;

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

    Py_XDECREF( par_year );
    par_year = NULL;

    Py_XDECREF( par_week );
    par_week = NULL;

    Py_XDECREF( par_day );
    par_day = NULL;

    Py_XDECREF( var_jan_4 );
    var_jan_4 = NULL;

    Py_XDECREF( var_week_1 );
    var_week_1 = NULL;

    Py_XDECREF( var_week_offset );
    var_week_offset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_11__parse_isotime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timestr = python_pars[ 1 ];
    PyObject *var_len_str = NULL;
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_comp = NULL;
    PyObject *var_has_sep = NULL;
    PyObject *var_us_str = NULL;
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
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_Lt_3;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_start_name_3;
    PyObject *tmp_start_name_4;
    PyObject *tmp_start_name_5;
    PyObject *tmp_start_name_6;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_step_name_3;
    PyObject *tmp_step_name_4;
    PyObject *tmp_step_name_5;
    PyObject *tmp_step_name_6;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
    PyObject *tmp_stop_name_3;
    PyObject *tmp_stop_name_4;
    PyObject *tmp_stop_name_5;
    PyObject *tmp_stop_name_6;
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
    static struct Nuitka_FrameObject *cache_frame_fcbdb69aa10917d48cbb54747da109d5 = NULL;

    struct Nuitka_FrameObject *frame_fcbdb69aa10917d48cbb54747da109d5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fcbdb69aa10917d48cbb54747da109d5, codeobj_fcbdb69aa10917d48cbb54747da109d5, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fcbdb69aa10917d48cbb54747da109d5 = cache_frame_fcbdb69aa10917d48cbb54747da109d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fcbdb69aa10917d48cbb54747da109d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fcbdb69aa10917d48cbb54747da109d5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_timestr;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_len_str == NULL );
    var_len_str = tmp_assign_source_1;

    tmp_assign_source_2 = LIST_COPY( const_list_int_0_int_0_int_0_int_0_none_list );
    assert( var_components == NULL );
    var_components = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_0;
    assert( var_pos == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_pos = tmp_assign_source_3;

    tmp_assign_source_4 = const_int_neg_1;
    assert( var_comp == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_comp = tmp_assign_source_4;

    tmp_len_arg_2 = par_timestr;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_273350d1d4e721d00a990e5736020868;
    frame_fcbdb69aa10917d48cbb54747da109d5->m_frame.f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 329;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compexpr_left_1 = var_len_str;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_3;
    tmp_and_left_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 331;
        type_description_1 = "oooooooo";
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
    tmp_subscribed_name_1 = par_timestr;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_int_pos_2_int_pos_3_none;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__TIME_SEP );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_assign_source_5 = tmp_and_left_value_1;
    and_end_1:;
    assert( var_has_sep == NULL );
    var_has_sep = tmp_assign_source_5;

    loop_start_1:;
    tmp_compexpr_left_3 = var_pos;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = var_len_str;

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 333;
        type_description_1 = "oooooooo";
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
    tmp_compexpr_left_4 = var_comp;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = const_int_pos_5;
    tmp_and_right_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    tmp_left_name_1 = var_comp;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_6 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_comp = tmp_assign_source_6;

    tmp_subscribed_name_2 = par_timestr;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_pos;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = var_pos;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_stop_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( !(tmp_subscript_name_2 == NULL) );
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_bytes_digest_9055defc64eb2990ba44e5403167cd7c;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    Py_DECREF( tmp_compare_left_2 );
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__parse_tzstr );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = par_timestr;

    if ( tmp_subscribed_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_2 = var_pos;

    if ( tmp_start_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_2 = Py_None;
    tmp_step_name_2 = Py_None;
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    assert( !(tmp_subscript_name_3 == NULL) );
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_fcbdb69aa10917d48cbb54747da109d5->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_components;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_int_neg_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = var_len_str;

    if ( tmp_assign_source_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = var_pos;
        var_pos = tmp_assign_source_7;
        Py_INCREF( var_pos );
        Py_XDECREF( old );
    }

    goto loop_end_1;
    branch_no_3:;
    tmp_compare_left_3 = var_comp;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_pos_3;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_subscribed_name_4 = par_timestr;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_3 = var_pos;

    if ( tmp_start_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = var_pos;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_2;
    tmp_stop_name_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_stop_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_3 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
    Py_DECREF( tmp_stop_name_3 );
    assert( !(tmp_subscript_name_4 == NULL) );
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_components;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = var_comp;

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = var_pos;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_2;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_8 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_8;

    tmp_and_left_value_3 = var_has_sep;

    if ( tmp_and_left_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "has_sep" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooooooo";
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
    tmp_compexpr_left_5 = var_pos;

    CHECK_OBJECT( tmp_compexpr_left_5 );
    tmp_compexpr_right_5 = var_len_str;

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_4 = RICH_COMPARE_LT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_subscribed_name_5 = par_timestr;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_4 = var_pos;

    if ( tmp_start_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = var_pos;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_int_pos_1;
    tmp_stop_name_4 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_stop_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_4 = Py_None;
    tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
    Py_DECREF( tmp_stop_name_4 );
    assert( !(tmp_subscript_name_5 == NULL) );
    tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__TIME_SEP );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 347;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
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
    tmp_left_name_6 = var_pos;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_9 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_9;

    branch_no_5:;
    branch_no_4:;
    tmp_compare_left_4 = var_comp;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_pos_3;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscribed_name_6 = par_timestr;

    if ( tmp_subscribed_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_5 = var_pos;

    if ( tmp_start_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_7 = var_pos;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_1;
    tmp_stop_name_5 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_stop_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_5 = Py_None;
    tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
    Py_DECREF( tmp_stop_name_5 );
    assert( !(tmp_subscript_name_6 == NULL) );
    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscript_name_6 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__MICRO_SEP );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_start_1;
    branch_no_7:;
    tmp_left_name_8 = var_pos;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_10 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_10;

    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__MICROSECOND_END_REGEX );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_split );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_8 = par_timestr;

    if ( tmp_subscribed_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timestr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_6 = var_pos;

    if ( tmp_start_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = var_pos;

    if ( tmp_left_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_6;
    tmp_stop_name_6 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_stop_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_6 = Py_None;
    tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
    Py_DECREF( tmp_stop_name_6 );
    assert( !(tmp_subscript_name_7 == NULL) );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscript_name_7 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_int_pos_1;
    frame_fcbdb69aa10917d48cbb54747da109d5->m_frame.f_lineno = 356;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_subscribed_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_8 = const_int_0;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_8 );
    Py_DECREF( tmp_subscribed_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_us_str;
        var_us_str = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_int_arg_2 = var_us_str;

    CHECK_OBJECT( tmp_int_arg_2 );
    tmp_left_name_10 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = const_int_pos_10;
    tmp_left_name_12 = const_int_pos_6;
    tmp_len_arg_3 = var_us_str;

    if ( tmp_len_arg_3 == NULL )
    {
        Py_DECREF( tmp_left_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "us_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_3 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = var_components;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_3 = var_comp;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_13 = var_pos;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_4 = var_us_str;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "us_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
    tmp_assign_source_12 = tmp_left_name_13;
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    var_pos = tmp_assign_source_12;

    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_compare_left_6 = var_pos;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 362;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = var_len_str;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "len_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 362;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_3 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_2 = const_str_digest_7b9c8b2f585fc922a471d79cd765fdad;
    frame_fcbdb69aa10917d48cbb54747da109d5->m_frame.f_lineno = 363;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 363;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_subscribed_name_9 = var_components;

    if ( tmp_subscribed_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 365;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_9 = const_int_0;
    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = const_int_pos_24;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_any );
    assert( tmp_called_name_3 != NULL );
    tmp_subscribed_name_10 = var_components;

    if ( tmp_subscribed_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_10 = const_slice_int_pos_1_int_pos_4_none;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_13;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context,
        module_dateutil$parser$isoparser,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_d81e52c7ef5be9c491b182f253980414,
#endif
        codeobj_fef793ed0020359f91453a03337314ec,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
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
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
    return NULL;
    outline_result_1:;
    tmp_args_element_name_4 = tmp_outline_return_value_1;
    frame_fcbdb69aa10917d48cbb54747da109d5->m_frame.f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 367;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_3 = const_str_digest_b739213d0714b4dd82f3ec1e92951ccc;
    frame_fcbdb69aa10917d48cbb54747da109d5->m_frame.f_lineno = 368;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_3 == NULL) );
    exception_type = tmp_raise_type_3;
    exception_lineno = 368;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
    branch_no_10:;
    tmp_ass_subvalue_4 = const_int_0;
    tmp_ass_subscribed_4 = var_components;

    if ( tmp_ass_subscribed_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 369;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = const_int_0;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 0, tmp_ass_subvalue_4 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    tmp_return_value = var_components;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 371;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcbdb69aa10917d48cbb54747da109d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcbdb69aa10917d48cbb54747da109d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fcbdb69aa10917d48cbb54747da109d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fcbdb69aa10917d48cbb54747da109d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fcbdb69aa10917d48cbb54747da109d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fcbdb69aa10917d48cbb54747da109d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fcbdb69aa10917d48cbb54747da109d5,
        type_description_1,
        par_self,
        par_timestr,
        var_len_str,
        var_components,
        var_pos,
        var_comp,
        var_has_sep,
        var_us_str
    );


    // Release cached frame.
    if ( frame_fcbdb69aa10917d48cbb54747da109d5 == cache_frame_fcbdb69aa10917d48cbb54747da109d5 )
    {
        Py_DECREF( frame_fcbdb69aa10917d48cbb54747da109d5 );
    }
    cache_frame_fcbdb69aa10917d48cbb54747da109d5 = NULL;

    assertFrameObject( frame_fcbdb69aa10917d48cbb54747da109d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_timestr );
    par_timestr = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_us_str );
    var_us_str = NULL;

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

    Py_XDECREF( par_timestr );
    par_timestr = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_us_str );
    var_us_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
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
struct dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_locals {
    PyObject *var_component
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_component = NULL;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_fef793ed0020359f91453a03337314ec, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
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
        exception_lineno = 367;
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

        exception_lineno = 367;
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
        PyObject *old = var_component;
        var_component = tmp_assign_source_2;
        Py_INCREF( var_component );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_component;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_expression_name_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
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
            var_component
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

    Py_XDECREF( var_component );
    var_component = NULL;

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

    Py_XDECREF( var_component );
    var_component = NULL;


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


static PyObject *impl_dateutil$parser$isoparser$$$function_12__parse_tzstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tzstr = python_pars[ 1 ];
    PyObject *par_zero_as_utc = python_pars[ 2 ];
    PyObject *var_mult = NULL;
    PyObject *var_hours = NULL;
    PyObject *var_minutes = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    static struct Nuitka_FrameObject *cache_frame_cdaaf0268b1384302d1cc7be989439d7 = NULL;

    struct Nuitka_FrameObject *frame_cdaaf0268b1384302d1cc7be989439d7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cdaaf0268b1384302d1cc7be989439d7, codeobj_cdaaf0268b1384302d1cc7be989439d7, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cdaaf0268b1384302d1cc7be989439d7 = cache_frame_cdaaf0268b1384302d1cc7be989439d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdaaf0268b1384302d1cc7be989439d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdaaf0268b1384302d1cc7be989439d7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_tzstr;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_bytes_chr_90;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "oooooo";
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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tz );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 375;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tzutc );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_len_arg_1 = par_tzstr;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = PySet_New( const_set_2fbb033eaf09004b738b14061b4856f6 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_1a2b0f43e4fa1cb2d64c6910cc212e07;
    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 378;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 378;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_subscribed_name_1 = par_tzstr;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_int_0_int_pos_1_none;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_bytes_chr_45;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_1 = const_int_neg_1;
    assert( var_mult == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_mult = tmp_assign_source_1;

    goto branch_end_3;
    branch_no_3:;
    tmp_subscribed_name_2 = par_tzstr;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_slice_int_0_int_pos_1_none;
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_bytes_chr_43;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_2 = const_int_pos_1;
    assert( var_mult == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_mult = tmp_assign_source_2;

    goto branch_end_4;
    branch_no_4:;
    tmp_make_exception_arg_2 = const_str_digest_bc5f26e35a2d70ffe8f304fb4e60ed29;
    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 385;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    tmp_subscribed_name_3 = par_tzstr;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_slice_int_pos_1_int_pos_3_none;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_hours == NULL );
    var_hours = tmp_assign_source_3;

    tmp_len_arg_2 = par_tzstr;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_pos_3;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_4 = const_int_0;
    assert( var_minutes == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_minutes = tmp_assign_source_4;

    goto branch_end_5;
    branch_no_5:;
    tmp_subscribed_name_4 = par_tzstr;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_5 = par_tzstr;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tzstr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_slice_int_pos_3_int_pos_4_none;
    tmp_compare_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__TIME_SEP );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_start_name_1 = const_int_pos_4;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_start_name_1 = const_int_pos_3;
    condexpr_end_1:;
    tmp_stop_name_1 = Py_None;
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( !(tmp_subscript_name_4 == NULL) );
    tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_minutes == NULL );
    var_minutes = tmp_assign_source_5;

    branch_end_5:;
    tmp_and_left_value_1 = par_zero_as_utc;

    if ( tmp_and_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zero_as_utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
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
    tmp_compexpr_left_1 = var_hours;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hours" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 393;
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
    tmp_compexpr_left_2 = var_minutes;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
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

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tz );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 394;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tzutc );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_7 = var_minutes;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = const_int_pos_59;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_3 = const_str_digest_a1e8cc94a5fb27196afc4cccac879310;
    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_3 == NULL) );
    exception_type = tmp_raise_type_3;
    exception_lineno = 397;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_compare_left_8 = var_hours;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hours" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = const_int_pos_23;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_4 = const_str_digest_7907ff4b2f599e4370e7f9ad20a6897c;
    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 400;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_4 == NULL) );
    exception_type = tmp_raise_type_4;
    exception_lineno = 400;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tz );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzoffset );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = Py_None;
    tmp_left_name_2 = var_mult;

    if ( tmp_left_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mult" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = var_hours;

    if ( tmp_left_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hours" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_60;
    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = var_minutes;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_60;
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cdaaf0268b1384302d1cc7be989439d7->m_frame.f_lineno = 402;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdaaf0268b1384302d1cc7be989439d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdaaf0268b1384302d1cc7be989439d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdaaf0268b1384302d1cc7be989439d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdaaf0268b1384302d1cc7be989439d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdaaf0268b1384302d1cc7be989439d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdaaf0268b1384302d1cc7be989439d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdaaf0268b1384302d1cc7be989439d7,
        type_description_1,
        par_self,
        par_tzstr,
        par_zero_as_utc,
        var_mult,
        var_hours,
        var_minutes
    );


    // Release cached frame.
    if ( frame_cdaaf0268b1384302d1cc7be989439d7 == cache_frame_cdaaf0268b1384302d1cc7be989439d7 )
    {
        Py_DECREF( frame_cdaaf0268b1384302d1cc7be989439d7 );
    }
    cache_frame_cdaaf0268b1384302d1cc7be989439d7 = NULL;

    assertFrameObject( frame_cdaaf0268b1384302d1cc7be989439d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_12__parse_tzstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_tzstr );
    par_tzstr = NULL;

    Py_XDECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

    Py_XDECREF( var_mult );
    var_mult = NULL;

    Py_XDECREF( var_hours );
    var_hours = NULL;

    Py_XDECREF( var_minutes );
    var_minutes = NULL;

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

    Py_XDECREF( par_tzstr );
    par_tzstr = NULL;

    Py_XDECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

    Py_XDECREF( var_mult );
    var_mult = NULL;

    Py_XDECREF( var_hours );
    var_hours = NULL;

    Py_XDECREF( var_minutes );
    var_minutes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_12__parse_tzstr );
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



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_10__calculate_weekdate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_10__calculate_weekdate,
        const_str_plain__calculate_weekdate,
#if PYTHON_VERSION >= 300
        const_str_digest_721bc1aa30b64bd3642a7350541ba875,
#endif
        codeobj_a816bd95fe7ab7088d0a554d41d65f64,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_3dc887f1fb8082ad07bc6a899cdfc40c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_11__parse_isotime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_11__parse_isotime,
        const_str_plain__parse_isotime,
#if PYTHON_VERSION >= 300
        const_str_digest_dd3f8ce78f1e9e917b041dfc99536745,
#endif
        codeobj_fcbdb69aa10917d48cbb54747da109d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_12__parse_tzstr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_12__parse_tzstr,
        const_str_plain__parse_tzstr,
#if PYTHON_VERSION >= 300
        const_str_digest_d3e96ef4753a96ddf2d2adb2ecf7fea4,
#endif
        codeobj_cdaaf0268b1384302d1cc7be989439d7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_1__takes_ascii,
        const_str_plain__takes_ascii,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a337dd5d1e4e12286ceaad02fbe5647,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func( struct Nuitka_CellObject *closure_f )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func,
        const_str_plain_func,
#if PYTHON_VERSION >= 300
        const_str_digest_7340a4cb5be5425958394de31cf804b1,
#endif
        codeobj_9da25490ff7048dbb14977384e25a1ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        1
    );

result->m_closure[0] = closure_f;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda( struct Nuitka_CellObject *closure_str_in )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_3b4e7a51f7e41b6b6a2bfe87e1c2fbc5,
#endif
        codeobj_5cdfdfdd58d6a504b7e236b61cfca8cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        1
    );

result->m_closure[0] = closure_str_in;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_bc384ce083cb344b6bc03ca5721ca286,
#endif
        codeobj_f099a76e9ae389ddeafcbc668c9d8e15,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_ba418bb085ae97b5ed215c87204a41b8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_3_isoparse(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_3_isoparse,
        const_str_plain_isoparse,
#if PYTHON_VERSION >= 300
        const_str_digest_aba2d64fcb9d4a810e6452cb117fb2cd,
#endif
        codeobj_cc518701fdf712c7dc595cd5050f9631,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_650e9be03b1fdec322a970371f4378d1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_4_parse_isodate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_4_parse_isodate,
        const_str_plain_parse_isodate,
#if PYTHON_VERSION >= 300
        const_str_digest_feb53e680b6c7d690400004131ece18e,
#endif
        codeobj_fe04754f7ce0415eaa69ed50fc571626,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_eeece1440ba68c7ebd4a1a68d1035641,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_5_parse_isotime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_5_parse_isotime,
        const_str_plain_parse_isotime,
#if PYTHON_VERSION >= 300
        const_str_digest_ca7bdd5f09b573d90dd77e9dd7681d48,
#endif
        codeobj_04cb2af3cfe7aae5f4e11b01aaf77a27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_dc41cce4b2abe5b79410e80649d4c406,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_6_parse_tzstr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_6_parse_tzstr,
        const_str_plain_parse_tzstr,
#if PYTHON_VERSION >= 300
        const_str_digest_ad78b016e2101d9307280b1e79d08c75,
#endif
        codeobj_a2543d52bdb7d0d93b6edcb8f241b890,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_7fe7a3c1ee63a7cc42d939939870fcad,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_7__parse_isodate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_7__parse_isodate,
        const_str_plain__parse_isodate,
#if PYTHON_VERSION >= 300
        const_str_digest_4c6175688270c1bbd29a67a501516908,
#endif
        codeobj_b47d1b98ff66e84571fb3cfae7aa70bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_8__parse_isodate_common(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_8__parse_isodate_common,
        const_str_plain__parse_isodate_common,
#if PYTHON_VERSION >= 300
        const_str_digest_2f655a33a5d6c2b979f5e03c27a784e7,
#endif
        codeobj_1158085feaa04dd4e015ca9d058d3584,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon,
        const_str_plain__parse_isodate_uncommon,
#if PYTHON_VERSION >= 300
        const_str_digest_3f489f137f8d33c449617a3431dc588b,
#endif
        codeobj_79f2fdf7a74e26dfe1dd27aaea63ace2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil$parser$isoparser =
{
    PyModuleDef_HEAD_INIT,
    "dateutil.parser.isoparser",   /* m_name */
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

MOD_INIT_DECL( dateutil$parser$isoparser )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil$parser$isoparser );
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
    puts("dateutil.parser.isoparser: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.parser.isoparser: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.parser.isoparser: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil$parser$isoparser" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil$parser$isoparser = Py_InitModule4(
        "dateutil.parser.isoparser",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil$parser$isoparser = PyModule_Create( &mdef_dateutil$parser$isoparser );
#endif

    moduledict_dateutil$parser$isoparser = MODULE_DICT( module_dateutil$parser$isoparser );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil$parser$isoparser,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$parser$isoparser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$parser$isoparser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil$parser$isoparser );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1, module_dateutil$parser$isoparser );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_ba9c87343e73a864faf5651b3ca44932_2 = NULL;

    struct Nuitka_FrameObject *frame_ba9c87343e73a864faf5651b3ca44932_2;

    struct Nuitka_FrameObject *frame_8e1453583ae7115ce29fa9541e7619d2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_dateutil$parser$isoparser_42 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_a312668a277fce14e7c7bca251a8f70f;
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_597528e9487c88e07adcbfce15aed3b1;
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_8e1453583ae7115ce29fa9541e7619d2 = MAKE_MODULE_FRAME( codeobj_8e1453583ae7115ce29fa9541e7619d2, module_dateutil$parser$isoparser );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8e1453583ae7115ce29fa9541e7619d2 );
    assert( Py_REFCNT( frame_8e1453583ae7115ce29fa9541e7619d2 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_datetime;
    tmp_globals_name_1 = (PyObject *)moduledict_dateutil$parser$isoparser;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple;
    tmp_level_name_1 = const_int_0;
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 10;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_datetime );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_timedelta );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_time );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_date );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date, tmp_assign_source_8 );
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

    tmp_name_name_2 = const_str_plain_calendar;
    tmp_globals_name_2 = (PyObject *)moduledict_dateutil$parser$isoparser;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 11;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_dateutil;
    tmp_globals_name_3 = (PyObject *)moduledict_dateutil$parser$isoparser;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_tz_tuple;
    tmp_level_name_3 = const_int_0;
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 12;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_tz );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_functools;
    tmp_globals_name_4 = (PyObject *)moduledict_dateutil$parser$isoparser;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_wraps_tuple;
    tmp_level_name_4 = const_int_0;
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 14;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_wraps );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_wraps, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_plain_re;
    tmp_globals_name_5 = (PyObject *)moduledict_dateutil$parser$isoparser;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 16;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_plain_six;
    tmp_globals_name_6 = (PyObject *)moduledict_dateutil$parser$isoparser;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 17;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_13 );
    tmp_assign_source_14 = LIST_COPY( const_list_str_plain_isoparse_str_plain_isoparser_list );
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii(  );
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii, tmp_assign_source_15 );
    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_16 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_16;

    tmp_assign_source_17 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
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


        exception_lineno = 42;

        goto try_except_handler_2;
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


        exception_lineno = 42;

        goto try_except_handler_2;
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


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_18 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_18;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
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


        exception_lineno = 42;

        goto try_except_handler_2;
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


        exception_lineno = 42;

        goto try_except_handler_2;
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


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    tmp_tuple_element_1 = const_str_plain_isoparser;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 42;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_19 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_19;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_dateutil$parser$isoparser_42 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1;
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_isoparser;
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_ba9c87343e73a864faf5651b3ca44932_2, codeobj_ba9c87343e73a864faf5651b3ca44932, module_dateutil$parser$isoparser, sizeof(void *) );
    frame_ba9c87343e73a864faf5651b3ca44932_2 = cache_frame_ba9c87343e73a864faf5651b3ca44932_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba9c87343e73a864faf5651b3ca44932_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba9c87343e73a864faf5651b3ca44932_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_2___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_name_2 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

    if ( tmp_called_name_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

        if (unlikely( tmp_called_name_2 == NULL ))
        {
            tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
        }

        if ( tmp_called_name_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 59;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_3_isoparse(  );
    frame_ba9c87343e73a864faf5651b3ca44932_2->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_isoparse, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_name_3 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

    if ( tmp_called_name_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

        if (unlikely( tmp_called_name_3 == NULL ))
        {
            tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
        }

        if ( tmp_called_name_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_2 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_4_parse_isodate(  );
    frame_ba9c87343e73a864faf5651b3ca44932_2->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_parse_isodate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_name_4 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

    if ( tmp_called_name_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

        if (unlikely( tmp_called_name_4 == NULL ))
        {
            tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
        }

        if ( tmp_called_name_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_3 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_5_parse_isotime(  );
    frame_ba9c87343e73a864faf5651b3ca44932_2->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_parse_isotime, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_name_5 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

    if ( tmp_called_name_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

        if (unlikely( tmp_called_name_5 == NULL ))
        {
            tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
        }

        if ( tmp_called_name_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_defaults_2 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_args_element_name_4 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_6_parse_tzstr( tmp_defaults_2 );
    frame_ba9c87343e73a864faf5651b3ca44932_2->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_parse_tzstr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_instance_1 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain_re );

    if ( tmp_called_instance_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_called_instance_1 == NULL ))
        {
            tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_called_instance_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    frame_ba9c87343e73a864faf5651b3ca44932_2->m_frame.f_lineno = 193;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_bytes_digest_564aaf2f3b56da0094829d86d237e1cc_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__MICROSECOND_END_REGEX, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = const_bytes_chr_45;
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__DATE_SEP, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = const_bytes_chr_58;
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__TIME_SEP, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = const_bytes_chr_46;
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__MICRO_SEP, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_7__parse_isodate(  );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isodate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_8__parse_isodate_common(  );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isodate_common, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon(  );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isodate_uncommon, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_10__calculate_weekdate(  );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__calculate_weekdate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_11__parse_isotime(  );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isotime, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_3 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_12__parse_tzstr( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_tzstr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba9c87343e73a864faf5651b3ca44932_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba9c87343e73a864faf5651b3ca44932_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba9c87343e73a864faf5651b3ca44932_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba9c87343e73a864faf5651b3ca44932_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba9c87343e73a864faf5651b3ca44932_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba9c87343e73a864faf5651b3ca44932_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_ba9c87343e73a864faf5651b3ca44932_2 == cache_frame_ba9c87343e73a864faf5651b3ca44932_2 )
    {
        Py_DECREF( frame_ba9c87343e73a864faf5651b3ca44932_2 );
    }
    cache_frame_ba9c87343e73a864faf5651b3ca44932_2 = NULL;

    assertFrameObject( frame_ba9c87343e73a864faf5651b3ca44932_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_4;
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
    tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_called_name_6 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_2 = const_str_plain_isoparser;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dateutil$parser$isoparser_42;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 42;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_21;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_dateutil$parser$isoparser_42 );
    locals_dateutil$parser$isoparser_42 = NULL;
    goto try_return_handler_3;
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

    Py_DECREF( locals_dateutil$parser$isoparser_42 );
    locals_dateutil$parser$isoparser_42 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 42;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_20 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_isoparser, tmp_assign_source_20 );
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_isoparser );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isoparser );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isoparser" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;

        goto frame_exception_exit_1;
    }

    frame_8e1453583ae7115ce29fa9541e7619d2->m_frame.f_lineno = 405;
    tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_DEFAULT_ISOPARSER, tmp_assign_source_22 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_DEFAULT_ISOPARSER );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_ISOPARSER );
    }

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_isoparse );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_isoparse, tmp_assign_source_23 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e1453583ae7115ce29fa9541e7619d2 );
#endif
    popFrameStack();

    assertFrameObject( frame_8e1453583ae7115ce29fa9541e7619d2 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e1453583ae7115ce29fa9541e7619d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e1453583ae7115ce29fa9541e7619d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e1453583ae7115ce29fa9541e7619d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e1453583ae7115ce29fa9541e7619d2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_dateutil$parser$isoparser );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
