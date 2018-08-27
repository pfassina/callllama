/* Generated code for Python source for module 'pytz'
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

/* The _module_pytz is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pytz;
PyDictObject *moduledict_pytz;

/* The module constants used, if any. */
extern PyObject *const_str_digest_b1bc7fe008192248e9be21d38f9c02c1;
static PyObject *const_str_digest_1e4c2b75c9f1db6a400788e38232d291;
extern PyObject *const_str_plain_readlines;
static PyObject *const_list_e0c41cf66ed84c646cccc6342b37a9b8_list;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_tuple_str_plain_zone_str_plain_fp_tuple;
static PyObject *const_str_digest_d9377d9886e98c27cec2d5edcf37c120;
static PyObject *const_str_digest_c9936f1548c11ea6c3047698538b3dca;
extern PyObject *const_str_plain_LazyList;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_str_plain_sep;
static PyObject *const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple;
extern PyObject *const_str_chr_43;
extern PyObject *const_str_plain_timedelta;
static PyObject *const_list_92089e415774d74a8639031bd4208975_list;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_name_parts;
static PyObject *const_str_plain__plus_;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_plain_bytes;
static PyObject *const_list_e442bdbf8df831c1de739ae7e7e12872_list;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_lstrip;
static PyObject *const_str_plain__tzinfo_cache;
static PyObject *const_str_plain___safe_for_unpickling__;
static PyObject *const_tuple_str_plain_self_str_plain_iso3166_code_tuple;
static PyObject *const_tuple_str_plain_doctest_str_plain_pytz_tuple;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
static PyObject *const_tuple_str_chr_35_tuple;
static PyObject *const_str_digest_8b99c616c864c1da0516542db12c66b8;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_2018e;
extern PyObject *const_str_plain_BaseTzInfo;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_e8e88b2e956a7bdb0e7f5c20e09d37a3;
static PyObject *const_str_plain_country_names;
extern PyObject *const_str_plain_build_tzinfo;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain__minus__str_chr_45_tuple;
static PyObject *const_str_digest_235ffd3085116cd605ef64064f4a8cbe;
extern PyObject *const_str_plain_minutes;
extern PyObject *const_str_plain_InvalidTimeError;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_UnknownTimeZoneError;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_LazyDict;
extern PyObject *const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
extern PyObject *const_str_plain_utcoffset;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_str_plain_build_tzinfo_tuple;
extern PyObject *const_tuple_str_plain_ASCII_tuple;
static PyObject *const_str_plain_open_resource;
extern PyObject *const_str_plain_data;
static PyObject *const_tuple_str_plain_AmbiguousTimeError_tuple;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_digest_8fba0ec9be0c4ed486d17847c03a428a;
static PyObject *const_str_plain__minutes;
extern PyObject *const_str_plain__tzname;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_hours;
extern PyObject *const_str_plain_zoneinfo;
static PyObject *const_str_plain__CountryTimezoneDict;
static PyObject *const_str_digest_c93acf6b434d55ddecef50534819d47b;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_tzinfo;
static PyObject *const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_chr_45;
static PyObject *const_tuple_str_plain_NonExistentTimeError_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_digest_474f3cb26417a0b447aabbea02146a81;
extern PyObject *const_str_plain_insert;
static PyObject *const_str_angle_UTC;
extern PyObject *const_str_chr_35;
extern PyObject *const_str_plain_fromutc;
extern PyObject *const_str_digest_785982eb38344f1637ddf8c4ec0b18f1;
static PyObject *const_str_digest_3fa3ebc1a4c5914c87c94acceb6311f5;
extern PyObject *const_str_plain__p;
static PyObject *const_str_digest_52ef8f9a22d97ac6b8eb9687a0e2f1c3;
static PyObject *const_str_plain_common_timezones;
static PyObject *const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple;
static PyObject *const_str_digest_2e77b725d728f523b91536f8ce9d2135;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_rb;
extern PyObject *const_str_plain_UTC;
extern PyObject *const_dict_e2952c9492316513fb6e1b78814fb058;
static PyObject *const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__CountryNameDict;
static PyObject *const_str_digest_d7cca9e411e72c3aa12aef9e50149884;
extern PyObject *const_str_plain_NonExistentTimeError;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_PYTZ_TZDATADIR;
extern PyObject *const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple;
static PyObject *const_str_digest_84cb20f0560c44bf7323c66541aaa539;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple;
static PyObject *const_str_plain__minus_;
static PyObject *const_str_digest_062d6592abaa96cae3da6e635394d6e6;
static PyObject *const_str_plain_FixedOffset;
static PyObject *const_str_plain_all_timezones_set;
static PyObject *const_str_plain__unmunge_zone;
static PyObject *const_str_digest_a16445c449d3b93d873704f8853b5f01;
static PyObject *const_tuple_none_int_pos_1_tuple;
static PyObject *const_str_digest_e3ca0a2a96ff88561f8696f750ba750f;
static PyObject *const_tuple_str_plain_zone_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_digest_d80d8945c1075596a484c18b20ab6235;
extern PyObject *const_str_plain_localize;
static PyObject *const_str_digest_cbd04be0bd0fcacf5820968e4828185d;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_b14139c8eeddedc0051aa77095084277;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_unpickler;
static PyObject *const_str_plain_common_timezones_set;
static PyObject *const_str_digest_47ce2e6888a56bafc1f83969795c931a;
extern PyObject *const_str_plain_decode;
static PyObject *const_tuple_str_plain_args_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_dt_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_zone_tab;
static PyObject *const_str_digest_fc1c4881636a98bdccfe1a5abb52784f;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_coordinates;
extern PyObject *const_int_pos_1440;
static PyObject *const_tuple_7a491582313d353cda344983d9180a8a_tuple;
static PyObject *const_tuple_str_plain_resource_stream_tuple;
static PyObject *const_str_digest_2720e4cb749c0c6448b10643c93169ae;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_UnknownTimeZoneError_tuple;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_digest_6f6ed120385c30c5ae275bbd94d26244;
static PyObject *const_str_plain_country_timezones;
static PyObject *const_str_digest_36f5c34230ac745520fc175f80e9d8b6;
extern PyObject *const_slice_none_int_pos_3_none;
static PyObject *const_str_digest_4116d603cf18d622a3a96438c3ed8247;
static PyObject *const_tuple_str_plain_self_str_plain_minutes_tuple;
extern PyObject *const_str_plain__dst;
extern PyObject *const_str_plain_timezone;
extern PyObject *const_str_plain_LazySet;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_is_dst;
static PyObject *const_str_digest_7da72749e596baad4f32ab2c7d5af7cd;
extern PyObject *const_str_plain_tz;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain__utcoffset;
static PyObject *const_str_plain__UTC;
static PyObject *const_str_plain__FixedOffset;
static PyObject *const_str_plain_resource_exists;
static PyObject *const_str_digest_28f8b1be0eec2c3927237dee79de4e1e;
static PyObject *const_str_digest_f99045ecb05074b2b58d62365c36390b;
static PyObject *const_str_plain_part;
static PyObject *const_str_plain_doctest;
static PyObject *const_str_plain__test;
static PyObject *const_tuple_str_plain_unpickler_str_plain_BaseTzInfo_tuple;
static PyObject *const_str_digest_ae13355cc51432ccc39ee70bacb8b4a5;
extern PyObject *const_str_plain_ZERO;
extern PyObject *const_str_plain__tzinfos;
extern PyObject *const_str_plain__offset;
static PyObject *const_str_plain_iso3166_code;
static PyObject *const_str_digest_b245bb5820494867ad638f0cd3dab22b;
extern PyObject *const_str_plain_setdefault;
extern PyObject *const_str_plain__fill;
extern PyObject *const_str_plain_normalize;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_bb3f1eb0ff65804a6d288f0fbc2640e3;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_zone;
static PyObject *const_str_digest_6c2bdf6908d6e8bceb61fef9c7d5ed7c;
extern PyObject *const_str_plain_dst;
extern PyObject *const_str_plain_AmbiguousTimeError;
extern PyObject *const_tuple_str_digest_d80d8945c1075596a484c18b20ab6235_tuple;
extern PyObject *const_str_plain_ASCII;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_list_str_digest_2e77b725d728f523b91536f8ce9d2135_list;
static PyObject *const_tuple_str_plain_InvalidTimeError_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_OLSEN_VERSION;
static PyObject *const_str_digest_64abce0daf65cf11df497763b2422a8e;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_digest_6a5f3c6db876837a53c30c7562c81da7;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_chr_47;
extern PyObject *const_str_plain_tzname;
static PyObject *const_str_digest_c7b4fb5b2cd86da580837312828ea772;
static PyObject *const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_pytz;
static PyObject *const_str_digest_4f6b8640a25bf7332f7083aadeee7f2a;
static PyObject *const_str_digest_3b8615855cee11321175eddec500de7a;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
static PyObject *const_str_plain_resource_stream;
extern PyObject *const_tuple_str_chr_47_tuple;
static PyObject *const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple;
static PyObject *const_str_plain_all_timezones;
static PyObject *const_str_digest_9903eb3d26136d2b67b4fbf778624241;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_pardir;
static PyObject *const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_OLSON_VERSION;
static PyObject *const_str_digest_2aabf7ccfa8c1bc7b647e8654408dae9;
static PyObject *const_str_digest_49712a922b4bc4d3e185bc350ead7bfd;
extern PyObject *const_tuple_str_plain_name_tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_utc;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple;
static PyObject *const_str_plain_pkg_resources;
static PyObject *const_str_digest_67e183cbcfc37ab1cf71fb3b486e7293;
static PyObject *const_str_digest_3f309a6fa057172df842d7906d83291f;
static PyObject *const_str_plain_testmod;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_3735242e556d5ab23254722e494faf6c;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_40b1ef956ad859b053615f6025f8f897;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_zoneinfo_dir;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_none_int_pos_4_tuple;
static PyObject *const_tuple_str_plain__plus__str_chr_43_tuple;
static PyObject *const_str_digest_4e398d8cf2a8e37650e81f23aa9b58cd;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_digest_05ebd808c21ea74523ac7072ed059560;
extern PyObject *const_str_plain_astimezone;
static PyObject *const_str_plain_HOUR;
static PyObject *const_str_digest_03b55b7fb007d622534dd1e32a9aab46;
static PyObject *const_str_digest_5a54c8ba187e0241681447f3d9e10a0e;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_1e4c2b75c9f1db6a400788e38232d291 = UNSTREAM_STRING( &constant_bin[ 742097 ], 264, 0 );
    const_list_e0c41cf66ed84c646cccc6342b37a9b8_list = PyList_New( 12 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 0, const_str_plain_timezone ); Py_INCREF( const_str_plain_timezone );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 1, const_str_plain_utc ); Py_INCREF( const_str_plain_utc );
    const_str_plain_country_timezones = UNSTREAM_STRING( &constant_bin[ 742361 ], 17, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 2, const_str_plain_country_timezones ); Py_INCREF( const_str_plain_country_timezones );
    const_str_plain_country_names = UNSTREAM_STRING( &constant_bin[ 742378 ], 13, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 3, const_str_plain_country_names ); Py_INCREF( const_str_plain_country_names );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 4, const_str_plain_AmbiguousTimeError ); Py_INCREF( const_str_plain_AmbiguousTimeError );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 5, const_str_plain_InvalidTimeError ); Py_INCREF( const_str_plain_InvalidTimeError );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 6, const_str_plain_NonExistentTimeError ); Py_INCREF( const_str_plain_NonExistentTimeError );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 7, const_str_plain_UnknownTimeZoneError ); Py_INCREF( const_str_plain_UnknownTimeZoneError );
    const_str_plain_all_timezones = UNSTREAM_STRING( &constant_bin[ 742391 ], 13, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 8, const_str_plain_all_timezones ); Py_INCREF( const_str_plain_all_timezones );
    const_str_plain_all_timezones_set = UNSTREAM_STRING( &constant_bin[ 742404 ], 17, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 9, const_str_plain_all_timezones_set ); Py_INCREF( const_str_plain_all_timezones_set );
    const_str_plain_common_timezones = UNSTREAM_STRING( &constant_bin[ 742421 ], 16, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 10, const_str_plain_common_timezones ); Py_INCREF( const_str_plain_common_timezones );
    const_str_plain_common_timezones_set = UNSTREAM_STRING( &constant_bin[ 742437 ], 20, 1 );
    PyList_SET_ITEM( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list, 11, const_str_plain_common_timezones_set ); Py_INCREF( const_str_plain_common_timezones_set );
    const_tuple_str_plain_zone_str_plain_fp_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_zone_str_plain_fp_tuple, 0, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    PyTuple_SET_ITEM( const_tuple_str_plain_zone_str_plain_fp_tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    const_str_digest_d9377d9886e98c27cec2d5edcf37c120 = UNSTREAM_STRING( &constant_bin[ 742457 ], 140, 0 );
    const_str_digest_c9936f1548c11ea6c3047698538b3dca = UNSTREAM_STRING( &constant_bin[ 742597 ], 8, 0 );
    const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple, 0, const_str_digest_c9936f1548c11ea6c3047698538b3dca ); Py_INCREF( const_str_digest_c9936f1548c11ea6c3047698538b3dca );
    const_list_92089e415774d74a8639031bd4208975_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 742605 ], 9596 );
    const_str_plain_name_parts = UNSTREAM_STRING( &constant_bin[ 752201 ], 10, 1 );
    const_str_plain__plus_ = UNSTREAM_STRING( &constant_bin[ 752211 ], 6, 1 );
    const_list_e442bdbf8df831c1de739ae7e7e12872_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 752217 ], 7627 );
    const_str_plain__tzinfo_cache = UNSTREAM_STRING( &constant_bin[ 759844 ], 13, 1 );
    const_str_plain___safe_for_unpickling__ = UNSTREAM_STRING( &constant_bin[ 759857 ], 23, 1 );
    const_tuple_str_plain_self_str_plain_iso3166_code_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_iso3166_code_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_iso3166_code = UNSTREAM_STRING( &constant_bin[ 759880 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_iso3166_code_tuple, 1, const_str_plain_iso3166_code ); Py_INCREF( const_str_plain_iso3166_code );
    const_tuple_str_plain_doctest_str_plain_pytz_tuple = PyTuple_New( 2 );
    const_str_plain_doctest = UNSTREAM_STRING( &constant_bin[ 380004 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_doctest_str_plain_pytz_tuple, 0, const_str_plain_doctest ); Py_INCREF( const_str_plain_doctest );
    PyTuple_SET_ITEM( const_tuple_str_plain_doctest_str_plain_pytz_tuple, 1, const_str_plain_pytz ); Py_INCREF( const_str_plain_pytz );
    const_tuple_str_chr_35_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_35_tuple, 0, const_str_chr_35 ); Py_INCREF( const_str_chr_35 );
    const_str_digest_8b99c616c864c1da0516542db12c66b8 = UNSTREAM_STRING( &constant_bin[ 759892 ], 22, 0 );
    const_str_plain_2018e = UNSTREAM_STRING( &constant_bin[ 759914 ], 5, 0 );
    const_str_digest_e8e88b2e956a7bdb0e7f5c20e09d37a3 = UNSTREAM_STRING( &constant_bin[ 759919 ], 13, 0 );
    const_tuple_str_plain__minus__str_chr_45_tuple = PyTuple_New( 2 );
    const_str_plain__minus_ = UNSTREAM_STRING( &constant_bin[ 759932 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__minus__str_chr_45_tuple, 0, const_str_plain__minus_ ); Py_INCREF( const_str_plain__minus_ );
    PyTuple_SET_ITEM( const_tuple_str_plain__minus__str_chr_45_tuple, 1, const_str_chr_45 ); Py_INCREF( const_str_chr_45 );
    const_str_digest_235ffd3085116cd605ef64064f4a8cbe = UNSTREAM_STRING( &constant_bin[ 759939 ], 13, 0 );
    const_tuple_str_plain_build_tzinfo_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_build_tzinfo_tuple, 0, const_str_plain_build_tzinfo ); Py_INCREF( const_str_plain_build_tzinfo );
    const_str_plain_open_resource = UNSTREAM_STRING( &constant_bin[ 759952 ], 13, 1 );
    const_tuple_str_plain_AmbiguousTimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AmbiguousTimeError_tuple, 0, const_str_plain_AmbiguousTimeError ); Py_INCREF( const_str_plain_AmbiguousTimeError );
    const_str_plain__minutes = UNSTREAM_STRING( &constant_bin[ 759965 ], 8, 1 );
    const_str_plain__CountryTimezoneDict = UNSTREAM_STRING( &constant_bin[ 759973 ], 20, 1 );
    const_str_digest_c93acf6b434d55ddecef50534819d47b = UNSTREAM_STRING( &constant_bin[ 759993 ], 13, 0 );
    const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple, 0, const_str_plain_LazyDict ); Py_INCREF( const_str_plain_LazyDict );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple, 1, const_str_plain_LazyList ); Py_INCREF( const_str_plain_LazyList );
    PyTuple_SET_ITEM( const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple, 2, const_str_plain_LazySet ); Py_INCREF( const_str_plain_LazySet );
    const_tuple_str_plain_NonExistentTimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NonExistentTimeError_tuple, 0, const_str_plain_NonExistentTimeError ); Py_INCREF( const_str_plain_NonExistentTimeError );
    const_str_digest_474f3cb26417a0b447aabbea02146a81 = UNSTREAM_STRING( &constant_bin[ 760006 ], 11, 0 );
    const_str_angle_UTC = UNSTREAM_STRING( &constant_bin[ 760017 ], 5, 0 );
    const_str_digest_3fa3ebc1a4c5914c87c94acceb6311f5 = UNSTREAM_STRING( &constant_bin[ 760022 ], 12, 0 );
    const_str_digest_52ef8f9a22d97ac6b8eb9687a0e2f1c3 = UNSTREAM_STRING( &constant_bin[ 760034 ], 7, 0 );
    const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 1, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 2, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_str_digest_2e77b725d728f523b91536f8ce9d2135 = UNSTREAM_STRING( &constant_bin[ 760041 ], 45, 0 );
    const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 0, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 1, const_str_plain__tzinfos ); Py_INCREF( const_str_plain__tzinfos );
    PyTuple_SET_ITEM( const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_str_plain__CountryNameDict = UNSTREAM_STRING( &constant_bin[ 760086 ], 16, 1 );
    const_str_digest_d7cca9e411e72c3aa12aef9e50149884 = UNSTREAM_STRING( &constant_bin[ 760102 ], 63, 0 );
    const_str_plain_PYTZ_TZDATADIR = UNSTREAM_STRING( &constant_bin[ 760165 ], 14, 1 );
    const_str_digest_84cb20f0560c44bf7323c66541aaa539 = UNSTREAM_STRING( &constant_bin[ 760179 ], 12, 0 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 1, const_str_plain_tz ); Py_INCREF( const_str_plain_tz );
    const_str_digest_062d6592abaa96cae3da6e635394d6e6 = UNSTREAM_STRING( &constant_bin[ 760191 ], 810, 0 );
    const_str_plain_FixedOffset = UNSTREAM_STRING( &constant_bin[ 759893 ], 11, 1 );
    const_str_plain__unmunge_zone = UNSTREAM_STRING( &constant_bin[ 761001 ], 13, 1 );
    const_str_digest_a16445c449d3b93d873704f8853b5f01 = UNSTREAM_STRING( &constant_bin[ 761014 ], 54, 0 );
    const_tuple_none_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_e3ca0a2a96ff88561f8696f750ba750f = UNSTREAM_STRING( &constant_bin[ 761068 ], 24, 0 );
    const_tuple_str_plain_zone_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_zone_tuple, 0, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    const_str_digest_cbd04be0bd0fcacf5820968e4828185d = UNSTREAM_STRING( &constant_bin[ 761092 ], 40, 0 );
    const_str_digest_b14139c8eeddedc0051aa77095084277 = UNSTREAM_STRING( &constant_bin[ 761132 ], 935, 0 );
    const_str_digest_47ce2e6888a56bafc1f83969795c931a = UNSTREAM_STRING( &constant_bin[ 762067 ], 11, 0 );
    const_tuple_str_plain_args_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_plain_zone_tab = UNSTREAM_STRING( &constant_bin[ 762078 ], 8, 1 );
    const_str_digest_fc1c4881636a98bdccfe1a5abb52784f = UNSTREAM_STRING( &constant_bin[ 762086 ], 229, 0 );
    const_str_plain_coordinates = UNSTREAM_STRING( &constant_bin[ 375120 ], 11, 1 );
    const_tuple_7a491582313d353cda344983d9180a8a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 2, const_str_plain_zone_tab ); Py_INCREF( const_str_plain_zone_tab );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 3, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 4, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_7a491582313d353cda344983d9180a8a_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_tuple_str_plain_resource_stream_tuple = PyTuple_New( 1 );
    const_str_plain_resource_stream = UNSTREAM_STRING( &constant_bin[ 762315 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_resource_stream_tuple, 0, const_str_plain_resource_stream ); Py_INCREF( const_str_plain_resource_stream );
    const_str_digest_2720e4cb749c0c6448b10643c93169ae = UNSTREAM_STRING( &constant_bin[ 762330 ], 22, 0 );
    const_tuple_str_plain_UnknownTimeZoneError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnknownTimeZoneError_tuple, 0, const_str_plain_UnknownTimeZoneError ); Py_INCREF( const_str_plain_UnknownTimeZoneError );
    const_str_digest_36f5c34230ac745520fc175f80e9d8b6 = UNSTREAM_STRING( &constant_bin[ 762352 ], 21, 0 );
    const_str_digest_4116d603cf18d622a3a96438c3ed8247 = UNSTREAM_STRING( &constant_bin[ 762373 ], 20, 0 );
    const_tuple_str_plain_self_str_plain_minutes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_minutes_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_minutes_tuple, 1, const_str_plain_minutes ); Py_INCREF( const_str_plain_minutes );
    const_str_digest_7da72749e596baad4f32ab2c7d5af7cd = UNSTREAM_STRING( &constant_bin[ 762393 ], 166, 0 );
    const_str_plain__UTC = UNSTREAM_STRING( &constant_bin[ 760033 ], 4, 1 );
    const_str_plain__FixedOffset = UNSTREAM_STRING( &constant_bin[ 759892 ], 12, 1 );
    const_str_plain_resource_exists = UNSTREAM_STRING( &constant_bin[ 762559 ], 15, 1 );
    const_str_digest_28f8b1be0eec2c3927237dee79de4e1e = UNSTREAM_STRING( &constant_bin[ 762574 ], 1135, 0 );
    const_str_digest_f99045ecb05074b2b58d62365c36390b = UNSTREAM_STRING( &constant_bin[ 763709 ], 26, 0 );
    const_str_plain_part = UNSTREAM_STRING( &constant_bin[ 20221 ], 4, 1 );
    const_str_plain__test = UNSTREAM_STRING( &constant_bin[ 763735 ], 5, 1 );
    const_tuple_str_plain_unpickler_str_plain_BaseTzInfo_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpickler_str_plain_BaseTzInfo_tuple, 0, const_str_plain_unpickler ); Py_INCREF( const_str_plain_unpickler );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpickler_str_plain_BaseTzInfo_tuple, 1, const_str_plain_BaseTzInfo ); Py_INCREF( const_str_plain_BaseTzInfo );
    const_str_digest_ae13355cc51432ccc39ee70bacb8b4a5 = UNSTREAM_STRING( &constant_bin[ 763740 ], 6, 0 );
    const_str_digest_b245bb5820494867ad638f0cd3dab22b = UNSTREAM_STRING( &constant_bin[ 763746 ], 19, 0 );
    const_str_digest_bb3f1eb0ff65804a6d288f0fbc2640e3 = UNSTREAM_STRING( &constant_bin[ 763765 ], 103, 0 );
    const_str_digest_6c2bdf6908d6e8bceb61fef9c7d5ed7c = UNSTREAM_STRING( &constant_bin[ 763868 ], 22, 0 );
    const_list_str_digest_2e77b725d728f523b91536f8ce9d2135_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_2e77b725d728f523b91536f8ce9d2135_list, 0, const_str_digest_2e77b725d728f523b91536f8ce9d2135 ); Py_INCREF( const_str_digest_2e77b725d728f523b91536f8ce9d2135 );
    const_tuple_str_plain_InvalidTimeError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InvalidTimeError_tuple, 0, const_str_plain_InvalidTimeError ); Py_INCREF( const_str_plain_InvalidTimeError );
    const_str_plain_OLSEN_VERSION = UNSTREAM_STRING( &constant_bin[ 763890 ], 13, 1 );
    const_str_digest_64abce0daf65cf11df497763b2422a8e = UNSTREAM_STRING( &constant_bin[ 763903 ], 14, 0 );
    const_str_digest_6a5f3c6db876837a53c30c7562c81da7 = UNSTREAM_STRING( &constant_bin[ 763917 ], 21, 0 );
    const_str_digest_c7b4fb5b2cd86da580837312828ea772 = UNSTREAM_STRING( &constant_bin[ 763938 ], 289, 0 );
    const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple = PyTuple_New( 1 );
    const_str_digest_3735242e556d5ab23254722e494faf6c = UNSTREAM_STRING( &constant_bin[ 764227 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple, 0, const_str_digest_3735242e556d5ab23254722e494faf6c ); Py_INCREF( const_str_digest_3735242e556d5ab23254722e494faf6c );
    const_str_digest_4f6b8640a25bf7332f7083aadeee7f2a = UNSTREAM_STRING( &constant_bin[ 764238 ], 10, 0 );
    const_str_digest_3b8615855cee11321175eddec500de7a = UNSTREAM_STRING( &constant_bin[ 764248 ], 23, 0 );
    const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 2, const_str_plain_zone_tab ); Py_INCREF( const_str_plain_zone_tab );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 3, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 4, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 5, const_str_plain_coordinates ); Py_INCREF( const_str_plain_coordinates );
    PyTuple_SET_ITEM( const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 6, const_str_plain_zone ); Py_INCREF( const_str_plain_zone );
    const_str_digest_9903eb3d26136d2b67b4fbf778624241 = UNSTREAM_STRING( &constant_bin[ 764271 ], 1439, 0 );
    const_str_plain_pardir = UNSTREAM_STRING( &constant_bin[ 765710 ], 6, 1 );
    const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 1, const_str_plain_name_parts ); Py_INCREF( const_str_plain_name_parts );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 2, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    const_str_plain_zoneinfo_dir = UNSTREAM_STRING( &constant_bin[ 765716 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 3, const_str_plain_zoneinfo_dir ); Py_INCREF( const_str_plain_zoneinfo_dir );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 4, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 5, const_str_plain_resource_stream ); Py_INCREF( const_str_plain_resource_stream );
    const_str_plain_OLSON_VERSION = UNSTREAM_STRING( &constant_bin[ 765728 ], 13, 1 );
    const_str_digest_2aabf7ccfa8c1bc7b647e8654408dae9 = UNSTREAM_STRING( &constant_bin[ 765741 ], 20, 0 );
    const_str_digest_49712a922b4bc4d3e185bc350ead7bfd = UNSTREAM_STRING( &constant_bin[ 380589 ], 9, 0 );
    const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple, 0, const_str_plain_PYTZ_TZDATADIR ); Py_INCREF( const_str_plain_PYTZ_TZDATADIR );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_plain_pkg_resources = UNSTREAM_STRING( &constant_bin[ 764006 ], 13, 1 );
    const_str_digest_67e183cbcfc37ab1cf71fb3b486e7293 = UNSTREAM_STRING( &constant_bin[ 765761 ], 57, 0 );
    const_str_digest_3f309a6fa057172df842d7906d83291f = UNSTREAM_STRING( &constant_bin[ 765818 ], 21, 0 );
    const_str_plain_testmod = UNSTREAM_STRING( &constant_bin[ 765839 ], 7, 1 );
    const_str_digest_40b1ef956ad859b053615f6025f8f897 = UNSTREAM_STRING( &constant_bin[ 765846 ], 219, 0 );
    const_tuple_none_int_pos_4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_4_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_4_tuple, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_tuple_str_plain__plus__str_chr_43_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__plus__str_chr_43_tuple, 0, const_str_plain__plus_ ); Py_INCREF( const_str_plain__plus_ );
    PyTuple_SET_ITEM( const_tuple_str_plain__plus__str_chr_43_tuple, 1, const_str_chr_43 ); Py_INCREF( const_str_chr_43 );
    const_str_digest_4e398d8cf2a8e37650e81f23aa9b58cd = UNSTREAM_STRING( &constant_bin[ 764993 ], 28, 0 );
    const_str_plain_HOUR = UNSTREAM_STRING( &constant_bin[ 404161 ], 4, 1 );
    const_str_digest_03b55b7fb007d622534dd1e32a9aab46 = UNSTREAM_STRING( &constant_bin[ 766065 ], 29, 0 );
    const_str_digest_5a54c8ba187e0241681447f3d9e10a0e = UNSTREAM_STRING( &constant_bin[ 766094 ], 16, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pytz( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_66aa61fa643d61feaa801fe27c69ca69;
static PyCodeObject *codeobj_5ebb899e05903df02d4d95b529734bfa;
static PyCodeObject *codeobj_b372de5efe6e71b533c8ccb0084f13e3;
static PyCodeObject *codeobj_b5d3dcaab6c83a6060a762aa79edb764;
static PyCodeObject *codeobj_c400a55d4101f8dcd4afba8dc0c76698;
static PyCodeObject *codeobj_dac202bd0a235e50f289b738c2912231;
static PyCodeObject *codeobj_1a21e61ad09c7bd829fd1ab989312d62;
static PyCodeObject *codeobj_2784207e8c0ce08ee9fd4609929b3357;
static PyCodeObject *codeobj_92faaa60bd83903a4f6eb963b468caf2;
static PyCodeObject *codeobj_e225f04339b8863ab13d08e5e03c9ca2;
static PyCodeObject *codeobj_4dae7a1decba0edd61b88ec71fe13969;
static PyCodeObject *codeobj_f48acdfa6121f6079c2e86c7aadff821;
static PyCodeObject *codeobj_a7e63ef9b951973ea484c5fa99458030;
static PyCodeObject *codeobj_e7bd2dbe5cf6ed07880e15a89f9a30e5;
static PyCodeObject *codeobj_c2ff7a67e484b108c456c2ee0996f298;
static PyCodeObject *codeobj_4d80d406bf573015621e486dfee4bf3e;
static PyCodeObject *codeobj_4de0641e44503129896da7caf021a968;
static PyCodeObject *codeobj_e2d32fa833bd71a209444a0d291e8a17;
static PyCodeObject *codeobj_bc28308e4a55eb8ac4adff53cfad5fc1;
static PyCodeObject *codeobj_f1bbd71e227041761efc52bc63c8ce0b;
static PyCodeObject *codeobj_ad45c2d23943118c48830dfd8a2d7047;
static PyCodeObject *codeobj_2086aef1938af186ee5c64b5fe4068b6;
static PyCodeObject *codeobj_02a8f1a1c92902fae0a8d27585a56dec;
static PyCodeObject *codeobj_c958a2ee7519fc38bcd584d5c6bf252d;
static PyCodeObject *codeobj_bcbd516111692571b3e7f2b2ae5b5754;
static PyCodeObject *codeobj_36ba861e98e669068ea16a38fb14257a;
static PyCodeObject *codeobj_00844fddd78e123f7281cc1d3f98a3f2;
static PyCodeObject *codeobj_cce129e74d8547ddcf438e00326f9461;
static PyCodeObject *codeobj_72b81bbbbbf6e6629362209a0db28f9d;
static PyCodeObject *codeobj_32435beac84131c2e79bc4ea8e8b9e99;
static PyCodeObject *codeobj_4cf095f3eb0426a755e62bae9a4c9d1a;
static PyCodeObject *codeobj_54d7db9647bf3aa3f1646f0dfd67694b;
static PyCodeObject *codeobj_d1d70b9ca5848cd4739b458fc3326b3f;
static PyCodeObject *codeobj_84898b9d3d0eabb0fecad98908450ae2;
static PyCodeObject *codeobj_932f2663cb0bbec1db1ef37a62c091a8;
static PyCodeObject *codeobj_9d15f356ea516d12703f39c173f1f89b;
static PyCodeObject *codeobj_3b7d78544ad137541aa1efc2446b706c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_67e183cbcfc37ab1cf71fb3b486e7293;
    codeobj_66aa61fa643d61feaa801fe27c69ca69 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1080, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5ebb899e05903df02d4d95b529734bfa = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1524, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_tz_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b372de5efe6e71b533c8ccb0084f13e3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_235ffd3085116cd605ef64064f4a8cbe, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b5d3dcaab6c83a6060a762aa79edb764 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FixedOffset, 410, const_tuple_str_plain_offset_str_plain__tzinfos_str_plain_info_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c400a55d4101f8dcd4afba8dc0c76698 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_UTC, 191, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_dac202bd0a235e50f289b738c2912231 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__CountryNameDict, 345, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_1a21e61ad09c7bd829fd1ab989312d62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__CountryTimezoneDict, 287, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2784207e8c0ce08ee9fd4609929b3357 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__FixedOffset, 370, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_92faaa60bd83903a4f6eb963b468caf2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__UTC, 244, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e225f04339b8863ab13d08e5e03c9ca2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 319, const_tuple_str_plain_self_str_plain_iso3166_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4dae7a1decba0edd61b88ec71fe13969 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 374, const_tuple_str_plain_self_str_plain_minutes_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f48acdfa6121f6079c2e86c7aadff821 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 217, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a7e63ef9b951973ea484c5fa99458030 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 383, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e7bd2dbe5cf6ed07880e15a89f9a30e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 234, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c2ff7a67e484b108c456c2ee0996f298 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 392, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d80d406bf573015621e486dfee4bf3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 237, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4de0641e44503129896da7caf021a968 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fill, 323, const_tuple_ccded7f2945614fc7d128d4ad4acf632_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2d32fa833bd71a209444a0d291e8a17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fill, 351, const_tuple_7a491582313d353cda344983d9180a8a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bc28308e4a55eb8ac4adff53cfad5fc1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__p, 277, const_tuple_str_plain_args_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_f1bbd71e227041761efc52bc63c8ce0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__test, 479, const_tuple_str_plain_doctest_str_plain_pytz_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad45c2d23943118c48830dfd8a2d7047 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unmunge_zone, 182, const_tuple_str_plain_zone_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2086aef1938af186ee5c64b5fe4068b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ascii, 46, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02a8f1a1c92902fae0a8d27585a56dec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ascii, 63, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c958a2ee7519fc38bcd584d5c6bf252d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dst, 214, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bcbd516111692571b3e7f2b2ae5b5754 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dst, 386, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36ba861e98e669068ea16a38fb14257a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fromutc, 203, const_tuple_str_plain_self_str_plain_dt_str_plain___class___tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_00844fddd78e123f7281cc1d3f98a3f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_localize, 220, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cce129e74d8547ddcf438e00326f9461 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_localize, 395, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_72b81bbbbbf6e6629362209a0db28f9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize, 226, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_32435beac84131c2e79bc4ea8e8b9e99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_normalize, 401, const_tuple_str_plain_self_str_plain_dt_str_plain_is_dst_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4cf095f3eb0426a755e62bae9a4c9d1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_resource, 77, const_tuple_2a8a69dc7f803478bc3c1a3cca186a8a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_54d7db9647bf3aa3f1646f0dfd67694b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resource_exists, 110, const_tuple_str_plain_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d1d70b9ca5848cd4739b458fc3326b3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_timezone, 122, const_tuple_str_plain_zone_str_plain_fp_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_84898b9d3d0eabb0fecad98908450ae2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tzname, 211, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_932f2663cb0bbec1db1ef37a62c091a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tzname, 389, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9d15f356ea516d12703f39c173f1f89b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_utcoffset, 208, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b7d78544ad137541aa1efc2446b706c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_utcoffset, 380, const_tuple_str_plain_self_str_plain_dt_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pytz$$$function_10_dst(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_11___reduce__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_12_localize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_13_normalize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_14___repr__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_15___str__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_16__UTC(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_17__p(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_18___call__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_19__fill(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_1_ascii(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_20__fill(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_21___init__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_22_utcoffset(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_23___reduce__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_24_dst(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_25_tzname(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_26___repr__(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_27_localize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_28_normalize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_29_FixedOffset( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pytz$$$function_2_ascii(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_30__test(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_3_open_resource(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_4_resource_exists(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_5_timezone(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_6__unmunge_zone(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_7_fromutc(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_8_utcoffset(  );


static PyObject *MAKE_FUNCTION_pytz$$$function_9_tzname(  );


// The module function definitions.
static PyObject *impl_pytz$$$function_1_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2086aef1938af186ee5c64b5fe4068b6 = NULL;

    struct Nuitka_FrameObject *frame_2086aef1938af186ee5c64b5fe4068b6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2086aef1938af186ee5c64b5fe4068b6, codeobj_2086aef1938af186ee5c64b5fe4068b6, module_pytz, sizeof(void *) );
    frame_2086aef1938af186ee5c64b5fe4068b6 = cache_frame_2086aef1938af186ee5c64b5fe4068b6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2086aef1938af186ee5c64b5fe4068b6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2086aef1938af186ee5c64b5fe4068b6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_arg_1 = par_s;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( !(tmp_compare_left_1 == NULL) );
    tmp_compare_right_1 = (PyObject *)&PyBytes_Type;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
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
    tmp_called_instance_1 = par_s;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_2086aef1938af186ee5c64b5fe4068b6->m_frame.f_lineno = 56;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        par_s = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_s;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_2086aef1938af186ee5c64b5fe4068b6->m_frame.f_lineno = 58;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;
    tmp_return_value = par_s;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2086aef1938af186ee5c64b5fe4068b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2086aef1938af186ee5c64b5fe4068b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2086aef1938af186ee5c64b5fe4068b6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2086aef1938af186ee5c64b5fe4068b6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2086aef1938af186ee5c64b5fe4068b6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2086aef1938af186ee5c64b5fe4068b6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2086aef1938af186ee5c64b5fe4068b6,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_2086aef1938af186ee5c64b5fe4068b6 == cache_frame_2086aef1938af186ee5c64b5fe4068b6 )
    {
        Py_DECREF( frame_2086aef1938af186ee5c64b5fe4068b6 );
    }
    cache_frame_2086aef1938af186ee5c64b5fe4068b6 = NULL;

    assertFrameObject( frame_2086aef1938af186ee5c64b5fe4068b6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_1_ascii );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_1_ascii );
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


static PyObject *impl_pytz$$$function_2_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_02a8f1a1c92902fae0a8d27585a56dec = NULL;

    struct Nuitka_FrameObject *frame_02a8f1a1c92902fae0a8d27585a56dec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_02a8f1a1c92902fae0a8d27585a56dec, codeobj_02a8f1a1c92902fae0a8d27585a56dec, module_pytz, sizeof(void *) );
    frame_02a8f1a1c92902fae0a8d27585a56dec = cache_frame_02a8f1a1c92902fae0a8d27585a56dec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_02a8f1a1c92902fae0a8d27585a56dec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_02a8f1a1c92902fae0a8d27585a56dec ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_02a8f1a1c92902fae0a8d27585a56dec->m_frame.f_lineno = 74;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ASCII_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02a8f1a1c92902fae0a8d27585a56dec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_02a8f1a1c92902fae0a8d27585a56dec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02a8f1a1c92902fae0a8d27585a56dec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_02a8f1a1c92902fae0a8d27585a56dec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_02a8f1a1c92902fae0a8d27585a56dec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_02a8f1a1c92902fae0a8d27585a56dec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_02a8f1a1c92902fae0a8d27585a56dec,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_02a8f1a1c92902fae0a8d27585a56dec == cache_frame_02a8f1a1c92902fae0a8d27585a56dec )
    {
        Py_DECREF( frame_02a8f1a1c92902fae0a8d27585a56dec );
    }
    cache_frame_02a8f1a1c92902fae0a8d27585a56dec = NULL;

    assertFrameObject( frame_02a8f1a1c92902fae0a8d27585a56dec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_2_ascii );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_2_ascii );
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


static PyObject *impl_pytz$$$function_3_open_resource( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_name_parts = NULL;
    PyObject *var_part = NULL;
    PyObject *var_zoneinfo_dir = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_resource_stream = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_4cf095f3eb0426a755e62bae9a4c9d1a = NULL;

    struct Nuitka_FrameObject *frame_4cf095f3eb0426a755e62bae9a4c9d1a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cf095f3eb0426a755e62bae9a4c9d1a, codeobj_4cf095f3eb0426a755e62bae9a4c9d1a, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4cf095f3eb0426a755e62bae9a4c9d1a = cache_frame_4cf095f3eb0426a755e62bae9a4c9d1a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cf095f3eb0426a755e62bae9a4c9d1a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cf095f3eb0426a755e62bae9a4c9d1a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_name;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 86;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_lstrip, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 86;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_47_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_name_parts == NULL );
    var_name_parts = tmp_assign_source_1;

    tmp_iter_arg_1 = var_name_parts;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "oooooo";
        exception_lineno = 87;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
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

        exception_lineno = 87;
        type_description_1 = "oooooo";
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
    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_part;
        var_part = tmp_assign_source_4;
        Py_INCREF( var_part );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_part;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pardir );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sep );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_2 = var_part;

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "part" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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

        exception_lineno = 88;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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
    tmp_left_name_1 = const_str_digest_2aabf7ccfa8c1bc7b647e8654408dae9;
    tmp_right_name_1 = var_part;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "part" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 89;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "oooooo";
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

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_environ );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 90;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_PYTZ_TZDATADIR_none_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zoneinfo_dir == NULL );
    var_zoneinfo_dir = tmp_assign_source_5;

    tmp_compare_left_2 = var_zoneinfo_dir;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = var_zoneinfo_dir;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zoneinfo_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_name_parts;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name_parts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_6 = impl___internal__$$$function_6_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_6;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__file__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );

        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain_zoneinfo;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = var_name_parts;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name_parts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_assign_source_7 = impl___internal__$$$function_6_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_7;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_exists );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_filename;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 96;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_name_name_1 = const_str_plain_pkg_resources;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_resource_stream_tuple;
    tmp_level_name_1 = const_int_0;
    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 101;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_resource_stream );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    assert( var_resource_stream == NULL );
    var_resource_stream = tmp_assign_source_8;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_4cf095f3eb0426a755e62bae9a4c9d1a, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_4cf095f3eb0426a755e62bae9a4c9d1a, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_3 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_3 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
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
    tmp_assign_source_9 = Py_None;
    assert( var_resource_stream == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_resource_stream = tmp_assign_source_9;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 100;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame) frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_5;
    branch_end_5:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_3_open_resource );
    return NULL;
    // End of try:
    try_end_3:;
    tmp_compare_left_4 = var_resource_stream;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resource_stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_3 = var_resource_stream;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "resource_stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = const_str_plain_pytz;
    tmp_left_name_2 = const_str_digest_49712a922b4bc4d3e185bc350ead7bfd;
    tmp_right_name_2 = par_name;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_6:;
    branch_no_4:;
    branch_end_3:;
    tmp_open_filename_1 = var_filename;

    if ( tmp_open_filename_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_open_mode_1 = const_str_plain_rb;
    tmp_return_value = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cf095f3eb0426a755e62bae9a4c9d1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cf095f3eb0426a755e62bae9a4c9d1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cf095f3eb0426a755e62bae9a4c9d1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cf095f3eb0426a755e62bae9a4c9d1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cf095f3eb0426a755e62bae9a4c9d1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cf095f3eb0426a755e62bae9a4c9d1a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cf095f3eb0426a755e62bae9a4c9d1a,
        type_description_1,
        par_name,
        var_name_parts,
        var_part,
        var_zoneinfo_dir,
        var_filename,
        var_resource_stream
    );


    // Release cached frame.
    if ( frame_4cf095f3eb0426a755e62bae9a4c9d1a == cache_frame_4cf095f3eb0426a755e62bae9a4c9d1a )
    {
        Py_DECREF( frame_4cf095f3eb0426a755e62bae9a4c9d1a );
    }
    cache_frame_4cf095f3eb0426a755e62bae9a4c9d1a = NULL;

    assertFrameObject( frame_4cf095f3eb0426a755e62bae9a4c9d1a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_3_open_resource );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_name_parts );
    var_name_parts = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_zoneinfo_dir );
    var_zoneinfo_dir = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_resource_stream );
    var_resource_stream = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_name_parts );
    var_name_parts = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_zoneinfo_dir );
    var_zoneinfo_dir = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_resource_stream );
    var_resource_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_3_open_resource );
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


static PyObject *impl_pytz$$$function_4_resource_exists( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_54d7db9647bf3aa3f1646f0dfd67694b = NULL;

    struct Nuitka_FrameObject *frame_54d7db9647bf3aa3f1646f0dfd67694b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54d7db9647bf3aa3f1646f0dfd67694b, codeobj_54d7db9647bf3aa3f1646f0dfd67694b, module_pytz, sizeof(void *) );
    frame_54d7db9647bf3aa3f1646f0dfd67694b = cache_frame_54d7db9647bf3aa3f1646f0dfd67694b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54d7db9647bf3aa3f1646f0dfd67694b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54d7db9647bf3aa3f1646f0dfd67694b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_54d7db9647bf3aa3f1646f0dfd67694b->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    frame_54d7db9647bf3aa3f1646f0dfd67694b->m_frame.f_lineno = 113;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_54d7db9647bf3aa3f1646f0dfd67694b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_54d7db9647bf3aa3f1646f0dfd67694b, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "o";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 112;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_54d7db9647bf3aa3f1646f0dfd67694b->m_frame) frame_54d7db9647bf3aa3f1646f0dfd67694b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_4_resource_exists );
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54d7db9647bf3aa3f1646f0dfd67694b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_54d7db9647bf3aa3f1646f0dfd67694b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54d7db9647bf3aa3f1646f0dfd67694b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54d7db9647bf3aa3f1646f0dfd67694b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54d7db9647bf3aa3f1646f0dfd67694b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54d7db9647bf3aa3f1646f0dfd67694b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54d7db9647bf3aa3f1646f0dfd67694b,
        type_description_1,
        par_name
    );


    // Release cached frame.
    if ( frame_54d7db9647bf3aa3f1646f0dfd67694b == cache_frame_54d7db9647bf3aa3f1646f0dfd67694b )
    {
        Py_DECREF( frame_54d7db9647bf3aa3f1646f0dfd67694b );
    }
    cache_frame_54d7db9647bf3aa3f1646f0dfd67694b = NULL;

    assertFrameObject( frame_54d7db9647bf3aa3f1646f0dfd67694b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_4_resource_exists );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_4_resource_exists );
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


static PyObject *impl_pytz$$$function_5_timezone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zone = python_pars[ 0 ];
    PyObject *var_fp = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d1d70b9ca5848cd4739b458fc3326b3f = NULL;

    struct Nuitka_FrameObject *frame_d1d70b9ca5848cd4739b458fc3326b3f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d1d70b9ca5848cd4739b458fc3326b3f, codeobj_d1d70b9ca5848cd4739b458fc3326b3f, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_d1d70b9ca5848cd4739b458fc3326b3f = cache_frame_d1d70b9ca5848cd4739b458fc3326b3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d1d70b9ca5848cd4739b458fc3326b3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d1d70b9ca5848cd4739b458fc3326b3f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_zone;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 159;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_UTC;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_1 = "oo";
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ascii );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ascii );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_zone;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_zone;
        par_zone = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d1d70b9ca5848cd4739b458fc3326b3f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d1d70b9ca5848cd4739b458fc3326b3f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_UnicodeEncodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnknownTimeZoneError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_2 = par_zone;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 166;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto try_except_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 162;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame) frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__unmunge_zone );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unmunge_zone );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_unmunge_zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_zone;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_zone;
        par_zone = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = par_zone;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tzinfo_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_compare_left_4 = par_zone;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones_set );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones_set );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_zone;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_fp == NULL );
    var_fp = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_build_tzinfo );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_build_tzinfo );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "build_tzinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_5 = par_zone;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_6 = var_fp;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tzinfo_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_ass_subscript_1 = par_zone;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    goto try_end_2;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_d1d70b9ca5848cd4739b458fc3326b3f, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_d1d70b9ca5848cd4739b458fc3326b3f, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_called_instance_2 = var_fp;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oo";
        goto try_except_handler_5;
    }

    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 175;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 172;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame) frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    tmp_called_instance_3 = var_fp;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 175;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnknownTimeZoneError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_zone;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 177;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_no_3:;
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tzinfo_cache );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_tzinfo_cache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_zone;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1d70b9ca5848cd4739b458fc3326b3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1d70b9ca5848cd4739b458fc3326b3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1d70b9ca5848cd4739b458fc3326b3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d1d70b9ca5848cd4739b458fc3326b3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d1d70b9ca5848cd4739b458fc3326b3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d1d70b9ca5848cd4739b458fc3326b3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d1d70b9ca5848cd4739b458fc3326b3f,
        type_description_1,
        par_zone,
        var_fp
    );


    // Release cached frame.
    if ( frame_d1d70b9ca5848cd4739b458fc3326b3f == cache_frame_d1d70b9ca5848cd4739b458fc3326b3f )
    {
        Py_DECREF( frame_d1d70b9ca5848cd4739b458fc3326b3f );
    }
    cache_frame_d1d70b9ca5848cd4739b458fc3326b3f = NULL;

    assertFrameObject( frame_d1d70b9ca5848cd4739b458fc3326b3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_zone );
    par_zone = NULL;

    Py_XDECREF( var_fp );
    var_fp = NULL;

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

    Py_XDECREF( par_zone );
    par_zone = NULL;

    Py_XDECREF( var_fp );
    var_fp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_5_timezone );
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


static PyObject *impl_pytz$$$function_6__unmunge_zone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zone = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ad45c2d23943118c48830dfd8a2d7047 = NULL;

    struct Nuitka_FrameObject *frame_ad45c2d23943118c48830dfd8a2d7047;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad45c2d23943118c48830dfd8a2d7047, codeobj_ad45c2d23943118c48830dfd8a2d7047, module_pytz, sizeof(void *) );
    frame_ad45c2d23943118c48830dfd8a2d7047 = cache_frame_ad45c2d23943118c48830dfd8a2d7047;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad45c2d23943118c48830dfd8a2d7047 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad45c2d23943118c48830dfd8a2d7047 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_zone;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_ad45c2d23943118c48830dfd8a2d7047->m_frame.f_lineno = 184;
    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_plain__plus__str_chr_43_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_ad45c2d23943118c48830dfd8a2d7047->m_frame.f_lineno = 184;
    tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_plain__minus__str_chr_45_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad45c2d23943118c48830dfd8a2d7047 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad45c2d23943118c48830dfd8a2d7047 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad45c2d23943118c48830dfd8a2d7047 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad45c2d23943118c48830dfd8a2d7047, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad45c2d23943118c48830dfd8a2d7047->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad45c2d23943118c48830dfd8a2d7047, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad45c2d23943118c48830dfd8a2d7047,
        type_description_1,
        par_zone
    );


    // Release cached frame.
    if ( frame_ad45c2d23943118c48830dfd8a2d7047 == cache_frame_ad45c2d23943118c48830dfd8a2d7047 )
    {
        Py_DECREF( frame_ad45c2d23943118c48830dfd8a2d7047 );
    }
    cache_frame_ad45c2d23943118c48830dfd8a2d7047 = NULL;

    assertFrameObject( frame_ad45c2d23943118c48830dfd8a2d7047 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_6__unmunge_zone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_zone );
    par_zone = NULL;

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

    Py_XDECREF( par_zone );
    par_zone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_6__unmunge_zone );
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


static PyObject *impl_pytz$$$function_7_fromutc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_36ba861e98e669068ea16a38fb14257a = NULL;

    struct Nuitka_FrameObject *frame_36ba861e98e669068ea16a38fb14257a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36ba861e98e669068ea16a38fb14257a, codeobj_36ba861e98e669068ea16a38fb14257a, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_36ba861e98e669068ea16a38fb14257a = cache_frame_36ba861e98e669068ea16a38fb14257a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36ba861e98e669068ea16a38fb14257a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36ba861e98e669068ea16a38fb14257a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooN";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_localize );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_dt;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    frame_36ba861e98e669068ea16a38fb14257a->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_type_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_type_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {
        Py_DECREF( tmp_type_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    Py_DECREF( tmp_type_name_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fromutc );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_dt;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    frame_36ba861e98e669068ea16a38fb14257a->m_frame.f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36ba861e98e669068ea16a38fb14257a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_36ba861e98e669068ea16a38fb14257a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36ba861e98e669068ea16a38fb14257a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36ba861e98e669068ea16a38fb14257a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36ba861e98e669068ea16a38fb14257a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36ba861e98e669068ea16a38fb14257a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36ba861e98e669068ea16a38fb14257a,
        type_description_1,
        par_self,
        par_dt,
        NULL
    );


    // Release cached frame.
    if ( frame_36ba861e98e669068ea16a38fb14257a == cache_frame_36ba861e98e669068ea16a38fb14257a )
    {
        Py_DECREF( frame_36ba861e98e669068ea16a38fb14257a );
    }
    cache_frame_36ba861e98e669068ea16a38fb14257a = NULL;

    assertFrameObject( frame_36ba861e98e669068ea16a38fb14257a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_7_fromutc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_7_fromutc );
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


static PyObject *impl_pytz$$$function_8_utcoffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9d15f356ea516d12703f39c173f1f89b = NULL;

    struct Nuitka_FrameObject *frame_9d15f356ea516d12703f39c173f1f89b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d15f356ea516d12703f39c173f1f89b, codeobj_9d15f356ea516d12703f39c173f1f89b, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_9d15f356ea516d12703f39c173f1f89b = cache_frame_9d15f356ea516d12703f39c173f1f89b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d15f356ea516d12703f39c173f1f89b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d15f356ea516d12703f39c173f1f89b ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d15f356ea516d12703f39c173f1f89b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d15f356ea516d12703f39c173f1f89b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d15f356ea516d12703f39c173f1f89b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d15f356ea516d12703f39c173f1f89b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d15f356ea516d12703f39c173f1f89b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d15f356ea516d12703f39c173f1f89b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d15f356ea516d12703f39c173f1f89b,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_9d15f356ea516d12703f39c173f1f89b == cache_frame_9d15f356ea516d12703f39c173f1f89b )
    {
        Py_DECREF( frame_9d15f356ea516d12703f39c173f1f89b );
    }
    cache_frame_9d15f356ea516d12703f39c173f1f89b = NULL;

    assertFrameObject( frame_9d15f356ea516d12703f39c173f1f89b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_8_utcoffset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_8_utcoffset );
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


static PyObject *impl_pytz$$$function_9_tzname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_plain_UTC;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_9_tzname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_9_tzname );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pytz$$$function_10_dst( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c958a2ee7519fc38bcd584d5c6bf252d = NULL;

    struct Nuitka_FrameObject *frame_c958a2ee7519fc38bcd584d5c6bf252d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c958a2ee7519fc38bcd584d5c6bf252d, codeobj_c958a2ee7519fc38bcd584d5c6bf252d, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_c958a2ee7519fc38bcd584d5c6bf252d = cache_frame_c958a2ee7519fc38bcd584d5c6bf252d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c958a2ee7519fc38bcd584d5c6bf252d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c958a2ee7519fc38bcd584d5c6bf252d ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c958a2ee7519fc38bcd584d5c6bf252d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c958a2ee7519fc38bcd584d5c6bf252d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c958a2ee7519fc38bcd584d5c6bf252d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c958a2ee7519fc38bcd584d5c6bf252d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c958a2ee7519fc38bcd584d5c6bf252d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c958a2ee7519fc38bcd584d5c6bf252d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c958a2ee7519fc38bcd584d5c6bf252d,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_c958a2ee7519fc38bcd584d5c6bf252d == cache_frame_c958a2ee7519fc38bcd584d5c6bf252d )
    {
        Py_DECREF( frame_c958a2ee7519fc38bcd584d5c6bf252d );
    }
    cache_frame_c958a2ee7519fc38bcd584d5c6bf252d = NULL;

    assertFrameObject( frame_c958a2ee7519fc38bcd584d5c6bf252d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_10_dst );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_10_dst );
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


static PyObject *impl_pytz$$$function_11___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_f48acdfa6121f6079c2e86c7aadff821 = NULL;

    struct Nuitka_FrameObject *frame_f48acdfa6121f6079c2e86c7aadff821;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f48acdfa6121f6079c2e86c7aadff821, codeobj_f48acdfa6121f6079c2e86c7aadff821, module_pytz, sizeof(void *) );
    frame_f48acdfa6121f6079c2e86c7aadff821 = cache_frame_f48acdfa6121f6079c2e86c7aadff821;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f48acdfa6121f6079c2e86c7aadff821 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f48acdfa6121f6079c2e86c7aadff821 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__UTC );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTC );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f48acdfa6121f6079c2e86c7aadff821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f48acdfa6121f6079c2e86c7aadff821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f48acdfa6121f6079c2e86c7aadff821 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f48acdfa6121f6079c2e86c7aadff821, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f48acdfa6121f6079c2e86c7aadff821->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f48acdfa6121f6079c2e86c7aadff821, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f48acdfa6121f6079c2e86c7aadff821,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f48acdfa6121f6079c2e86c7aadff821 == cache_frame_f48acdfa6121f6079c2e86c7aadff821 )
    {
        Py_DECREF( frame_f48acdfa6121f6079c2e86c7aadff821 );
    }
    cache_frame_f48acdfa6121f6079c2e86c7aadff821 = NULL;

    assertFrameObject( frame_f48acdfa6121f6079c2e86c7aadff821 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_11___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_11___reduce__ );
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


static PyObject *impl_pytz$$$function_12_localize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_00844fddd78e123f7281cc1d3f98a3f2 = NULL;

    struct Nuitka_FrameObject *frame_00844fddd78e123f7281cc1d3f98a3f2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00844fddd78e123f7281cc1d3f98a3f2, codeobj_00844fddd78e123f7281cc1d3f98a3f2, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_00844fddd78e123f7281cc1d3f98a3f2 = cache_frame_00844fddd78e123f7281cc1d3f98a3f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00844fddd78e123f7281cc1d3f98a3f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00844fddd78e123f7281cc1d3f98a3f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_b1bc7fe008192248e9be21d38f9c02c1;
    frame_00844fddd78e123f7281cc1d3f98a3f2->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 223;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_tzinfo;
    tmp_dict_value_1 = par_self;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_00844fddd78e123f7281cc1d3f98a3f2->m_frame.f_lineno = 224;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00844fddd78e123f7281cc1d3f98a3f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_00844fddd78e123f7281cc1d3f98a3f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00844fddd78e123f7281cc1d3f98a3f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00844fddd78e123f7281cc1d3f98a3f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00844fddd78e123f7281cc1d3f98a3f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00844fddd78e123f7281cc1d3f98a3f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00844fddd78e123f7281cc1d3f98a3f2,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_00844fddd78e123f7281cc1d3f98a3f2 == cache_frame_00844fddd78e123f7281cc1d3f98a3f2 )
    {
        Py_DECREF( frame_00844fddd78e123f7281cc1d3f98a3f2 );
    }
    cache_frame_00844fddd78e123f7281cc1d3f98a3f2 = NULL;

    assertFrameObject( frame_00844fddd78e123f7281cc1d3f98a3f2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_12_localize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_12_localize );
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


static PyObject *impl_pytz$$$function_13_normalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_72b81bbbbbf6e6629362209a0db28f9d = NULL;

    struct Nuitka_FrameObject *frame_72b81bbbbbf6e6629362209a0db28f9d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72b81bbbbbf6e6629362209a0db28f9d, codeobj_72b81bbbbbf6e6629362209a0db28f9d, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_72b81bbbbbf6e6629362209a0db28f9d = cache_frame_72b81bbbbbf6e6629362209a0db28f9d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72b81bbbbbf6e6629362209a0db28f9d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72b81bbbbbf6e6629362209a0db28f9d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_self;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

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
    tmp_return_value = par_dt;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzinfo );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_05ebd808c21ea74523ac7072ed059560;
    frame_72b81bbbbbf6e6629362209a0db28f9d->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 231;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_dt;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astimezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
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

        exception_lineno = 232;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_72b81bbbbbf6e6629362209a0db28f9d->m_frame.f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72b81bbbbbf6e6629362209a0db28f9d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72b81bbbbbf6e6629362209a0db28f9d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72b81bbbbbf6e6629362209a0db28f9d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72b81bbbbbf6e6629362209a0db28f9d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72b81bbbbbf6e6629362209a0db28f9d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72b81bbbbbf6e6629362209a0db28f9d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72b81bbbbbf6e6629362209a0db28f9d,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_72b81bbbbbf6e6629362209a0db28f9d == cache_frame_72b81bbbbbf6e6629362209a0db28f9d )
    {
        Py_DECREF( frame_72b81bbbbbf6e6629362209a0db28f9d );
    }
    cache_frame_72b81bbbbbf6e6629362209a0db28f9d = NULL;

    assertFrameObject( frame_72b81bbbbbf6e6629362209a0db28f9d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_13_normalize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_13_normalize );
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


static PyObject *impl_pytz$$$function_14___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_angle_UTC;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_14___repr__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_14___repr__ );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pytz$$$function_15___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_plain_UTC;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_15___str__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_15___str__ );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pytz$$$function_16__UTC( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_92faaa60bd83903a4f6eb963b468caf2 = NULL;

    struct Nuitka_FrameObject *frame_92faaa60bd83903a4f6eb963b468caf2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_92faaa60bd83903a4f6eb963b468caf2, codeobj_92faaa60bd83903a4f6eb963b468caf2, module_pytz, 0 );
    frame_92faaa60bd83903a4f6eb963b468caf2 = cache_frame_92faaa60bd83903a4f6eb963b468caf2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92faaa60bd83903a4f6eb963b468caf2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92faaa60bd83903a4f6eb963b468caf2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utc );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92faaa60bd83903a4f6eb963b468caf2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_92faaa60bd83903a4f6eb963b468caf2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92faaa60bd83903a4f6eb963b468caf2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92faaa60bd83903a4f6eb963b468caf2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92faaa60bd83903a4f6eb963b468caf2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92faaa60bd83903a4f6eb963b468caf2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92faaa60bd83903a4f6eb963b468caf2,
        type_description_1
    );


    // Release cached frame.
    if ( frame_92faaa60bd83903a4f6eb963b468caf2 == cache_frame_92faaa60bd83903a4f6eb963b468caf2 )
    {
        Py_DECREF( frame_92faaa60bd83903a4f6eb963b468caf2 );
    }
    cache_frame_92faaa60bd83903a4f6eb963b468caf2 = NULL;

    assertFrameObject( frame_92faaa60bd83903a4f6eb963b468caf2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_16__UTC );
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


static PyObject *impl_pytz$$$function_17__p( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_bc28308e4a55eb8ac4adff53cfad5fc1 = NULL;

    struct Nuitka_FrameObject *frame_bc28308e4a55eb8ac4adff53cfad5fc1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc28308e4a55eb8ac4adff53cfad5fc1, codeobj_bc28308e4a55eb8ac4adff53cfad5fc1, module_pytz, sizeof(void *) );
    frame_bc28308e4a55eb8ac4adff53cfad5fc1 = cache_frame_bc28308e4a55eb8ac4adff53cfad5fc1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc28308e4a55eb8ac4adff53cfad5fc1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc28308e4a55eb8ac4adff53cfad5fc1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unpickler );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpickler );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpickler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
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


        exception_lineno = 283;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc28308e4a55eb8ac4adff53cfad5fc1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc28308e4a55eb8ac4adff53cfad5fc1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc28308e4a55eb8ac4adff53cfad5fc1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc28308e4a55eb8ac4adff53cfad5fc1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc28308e4a55eb8ac4adff53cfad5fc1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc28308e4a55eb8ac4adff53cfad5fc1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc28308e4a55eb8ac4adff53cfad5fc1,
        type_description_1,
        par_args
    );


    // Release cached frame.
    if ( frame_bc28308e4a55eb8ac4adff53cfad5fc1 == cache_frame_bc28308e4a55eb8ac4adff53cfad5fc1 )
    {
        Py_DECREF( frame_bc28308e4a55eb8ac4adff53cfad5fc1 );
    }
    cache_frame_bc28308e4a55eb8ac4adff53cfad5fc1 = NULL;

    assertFrameObject( frame_bc28308e4a55eb8ac4adff53cfad5fc1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_17__p );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_17__p );
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


static PyObject *impl_pytz$$$function_18___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_iso3166_code = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_e225f04339b8863ab13d08e5e03c9ca2 = NULL;

    struct Nuitka_FrameObject *frame_e225f04339b8863ab13d08e5e03c9ca2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e225f04339b8863ab13d08e5e03c9ca2, codeobj_e225f04339b8863ab13d08e5e03c9ca2, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_e225f04339b8863ab13d08e5e03c9ca2 = cache_frame_e225f04339b8863ab13d08e5e03c9ca2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e225f04339b8863ab13d08e5e03c9ca2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e225f04339b8863ab13d08e5e03c9ca2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_self;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = par_iso3166_code;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e225f04339b8863ab13d08e5e03c9ca2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e225f04339b8863ab13d08e5e03c9ca2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e225f04339b8863ab13d08e5e03c9ca2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e225f04339b8863ab13d08e5e03c9ca2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e225f04339b8863ab13d08e5e03c9ca2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e225f04339b8863ab13d08e5e03c9ca2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e225f04339b8863ab13d08e5e03c9ca2,
        type_description_1,
        par_self,
        par_iso3166_code
    );


    // Release cached frame.
    if ( frame_e225f04339b8863ab13d08e5e03c9ca2 == cache_frame_e225f04339b8863ab13d08e5e03c9ca2 )
    {
        Py_DECREF( frame_e225f04339b8863ab13d08e5e03c9ca2 );
    }
    cache_frame_e225f04339b8863ab13d08e5e03c9ca2 = NULL;

    assertFrameObject( frame_e225f04339b8863ab13d08e5e03c9ca2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_18___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_iso3166_code );
    par_iso3166_code = NULL;

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

    Py_XDECREF( par_iso3166_code );
    par_iso3166_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_18___call__ );
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


static PyObject *impl_pytz$$$function_19__fill( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_zone_tab = NULL;
    PyObject *var_line = NULL;
    PyObject *var_code = NULL;
    PyObject *var_coordinates = NULL;
    PyObject *var_zone = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_4de0641e44503129896da7caf021a968 = NULL;

    struct Nuitka_FrameObject *frame_4de0641e44503129896da7caf021a968;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4de0641e44503129896da7caf021a968, codeobj_4de0641e44503129896da7caf021a968, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4de0641e44503129896da7caf021a968 = cache_frame_4de0641e44503129896da7caf021a968;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4de0641e44503129896da7caf021a968 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4de0641e44503129896da7caf021a968 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 325;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_c9936f1548c11ea6c3047698538b3dca_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zone_tab == NULL );
    var_zone_tab = tmp_assign_source_2;

    // Tried code:
    tmp_iter_arg_1 = var_zone_tab;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
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
        exception_lineno = 327;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
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

        exception_lineno = 327;
        type_description_1 = "ooooooo";
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

    goto try_except_handler_3;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_5;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_line;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 328;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_d80d8945c1075596a484c18b20ab6235_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_line;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 329;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 329;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
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
    goto loop_start_1;
    branch_no_2:;
    // Tried code:
    tmp_called_instance_3 = var_line;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 331;
    tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_none_int_pos_4_tuple, 0 ) );

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_subscript_name_1 = const_slice_none_int_pos_3_none;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_7 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
    if ( tmp_assign_source_8 == NULL )
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
        exception_lineno = 331;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 331;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 331;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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

                type_description_1 = "ooooooo";
                exception_lineno = 331;
                goto try_except_handler_6;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooo";
        exception_lineno = 331;
        goto try_except_handler_6;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_code;
        var_code = tmp_assign_source_11;
        Py_INCREF( var_code );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_coordinates;
        var_coordinates = tmp_assign_source_12;
        Py_INCREF( var_coordinates );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_zone;
        var_zone = tmp_assign_source_13;
        Py_INCREF( var_zone );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_compare_left_2 = var_zone;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones_set );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones_set );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones_set" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    goto loop_start_1;
    branch_no_3:;
    // Tried code:
    tmp_subscribed_name_2 = var_data;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }

    tmp_subscript_name_2 = var_code;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }

    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_1 = var_zone;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }

    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
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
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_4de0641e44503129896da7caf021a968, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_4de0641e44503129896da7caf021a968, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_3 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_list_element_1 = var_zone;

    if ( tmp_list_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subvalue_1 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_ass_subvalue_1, 0, tmp_list_element_1 );
    tmp_ass_subscribed_1 = var_data;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subscript_1 = var_code;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 334;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4de0641e44503129896da7caf021a968->m_frame) frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_8;
    branch_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
    return NULL;
    // End of try:
    try_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assattr_name_1 = var_data;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
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

        exception_lineno = 338;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_4de0641e44503129896da7caf021a968, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_4de0641e44503129896da7caf021a968, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    tmp_called_instance_4 = var_zone_tab;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }

    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 340;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 326;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4de0641e44503129896da7caf021a968->m_frame) frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
    return NULL;
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
    // End of try:
    try_end_7:;
    tmp_called_instance_5 = var_zone_tab;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_4de0641e44503129896da7caf021a968->m_frame.f_lineno = 340;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4de0641e44503129896da7caf021a968 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4de0641e44503129896da7caf021a968 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4de0641e44503129896da7caf021a968, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4de0641e44503129896da7caf021a968->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4de0641e44503129896da7caf021a968, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4de0641e44503129896da7caf021a968,
        type_description_1,
        par_self,
        var_data,
        var_zone_tab,
        var_line,
        var_code,
        var_coordinates,
        var_zone
    );


    // Release cached frame.
    if ( frame_4de0641e44503129896da7caf021a968 == cache_frame_4de0641e44503129896da7caf021a968 )
    {
        Py_DECREF( frame_4de0641e44503129896da7caf021a968 );
    }
    cache_frame_4de0641e44503129896da7caf021a968 = NULL;

    assertFrameObject( frame_4de0641e44503129896da7caf021a968 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_coordinates );
    var_coordinates = NULL;

    Py_XDECREF( var_zone );
    var_zone = NULL;

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

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_coordinates );
    var_coordinates = NULL;

    Py_XDECREF( var_zone );
    var_zone = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_19__fill );
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


static PyObject *impl_pytz$$$function_20__fill( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_zone_tab = NULL;
    PyObject *var_line = NULL;
    PyObject *var_code = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_e2d32fa833bd71a209444a0d291e8a17 = NULL;

    struct Nuitka_FrameObject *frame_e2d32fa833bd71a209444a0d291e8a17;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2d32fa833bd71a209444a0d291e8a17, codeobj_e2d32fa833bd71a209444a0d291e8a17, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e2d32fa833bd71a209444a0d291e8a17 = cache_frame_e2d32fa833bd71a209444a0d291e8a17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2d32fa833bd71a209444a0d291e8a17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2d32fa833bd71a209444a0d291e8a17 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_open_resource );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "open_resource" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 353;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_3735242e556d5ab23254722e494faf6c_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zone_tab == NULL );
    var_zone_tab = tmp_assign_source_2;

    // Tried code:
    tmp_called_instance_1 = var_zone_tab;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 355;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readlines );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "oooooo";
        exception_lineno = 355;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
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

        exception_lineno = 355;
        type_description_1 = "oooooo";
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

    goto try_except_handler_3;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_5;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_line;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 356;
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_d80d8945c1075596a484c18b20ab6235_tuple, 0 ) );

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_3 = var_line;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 357;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_35_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 357;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
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
    goto loop_start_1;
    branch_no_2:;
    // Tried code:
    tmp_called_instance_4 = var_line;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }

    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 359;
    tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_none_int_pos_1_tuple, 0 ) );

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_7 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "oooooo";
        exception_lineno = 359;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 359;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                type_description_1 = "oooooo";
                exception_lineno = 359;
                goto try_except_handler_6;
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

        type_description_1 = "oooooo";
        exception_lineno = 359;
        goto try_except_handler_6;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_code;
        var_code = tmp_assign_source_10;
        Py_INCREF( var_code );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_11;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_5 = var_name;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 360;
    tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_strip );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_1 = var_data;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_ass_subscript_1 = var_code;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assattr_name_1 = var_data;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
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

        exception_lineno = 361;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto try_end_5;
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
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_e2d32fa833bd71a209444a0d291e8a17, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_e2d32fa833bd71a209444a0d291e8a17, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_called_instance_6 = var_zone_tab;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 363;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }

    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 363;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 354;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e2d32fa833bd71a209444a0d291e8a17->m_frame) frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_20__fill );
    return NULL;
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
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    tmp_called_instance_7 = var_zone_tab;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "zone_tab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 363;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_e2d32fa833bd71a209444a0d291e8a17->m_frame.f_lineno = 363;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d32fa833bd71a209444a0d291e8a17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d32fa833bd71a209444a0d291e8a17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2d32fa833bd71a209444a0d291e8a17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2d32fa833bd71a209444a0d291e8a17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2d32fa833bd71a209444a0d291e8a17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2d32fa833bd71a209444a0d291e8a17,
        type_description_1,
        par_self,
        var_data,
        var_zone_tab,
        var_line,
        var_code,
        var_name
    );


    // Release cached frame.
    if ( frame_e2d32fa833bd71a209444a0d291e8a17 == cache_frame_e2d32fa833bd71a209444a0d291e8a17 )
    {
        Py_DECREF( frame_e2d32fa833bd71a209444a0d291e8a17 );
    }
    cache_frame_e2d32fa833bd71a209444a0d291e8a17 = NULL;

    assertFrameObject( frame_e2d32fa833bd71a209444a0d291e8a17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_20__fill );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_zone_tab );
    var_zone_tab = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_20__fill );
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


static PyObject *impl_pytz$$$function_21___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_minutes = python_pars[ 1 ];
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
    PyObject *tmp_called_name_2;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_4dae7a1decba0edd61b88ec71fe13969 = NULL;

    struct Nuitka_FrameObject *frame_4dae7a1decba0edd61b88ec71fe13969;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4dae7a1decba0edd61b88ec71fe13969, codeobj_4dae7a1decba0edd61b88ec71fe13969, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_4dae7a1decba0edd61b88ec71fe13969 = cache_frame_4dae7a1decba0edd61b88ec71fe13969;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4dae7a1decba0edd61b88ec71fe13969 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4dae7a1decba0edd61b88ec71fe13969 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_minutes;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4dae7a1decba0edd61b88ec71fe13969->m_frame.f_lineno = 375;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1440;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_4e398d8cf2a8e37650e81f23aa9b58cd;
    tmp_make_exception_arg_2 = par_minutes;

    if ( tmp_make_exception_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 376;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_4dae7a1decba0edd61b88ec71fe13969->m_frame.f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 376;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assattr_name_1 = par_minutes;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
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

        exception_lineno = 377;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__minutes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timedelta );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_minutes;
    tmp_dict_value_1 = par_minutes;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "minutes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_4dae7a1decba0edd61b88ec71fe13969->m_frame.f_lineno = 378;
    tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oo";
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

        exception_lineno = 378;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__offset, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dae7a1decba0edd61b88ec71fe13969 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dae7a1decba0edd61b88ec71fe13969 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4dae7a1decba0edd61b88ec71fe13969, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4dae7a1decba0edd61b88ec71fe13969->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4dae7a1decba0edd61b88ec71fe13969, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4dae7a1decba0edd61b88ec71fe13969,
        type_description_1,
        par_self,
        par_minutes
    );


    // Release cached frame.
    if ( frame_4dae7a1decba0edd61b88ec71fe13969 == cache_frame_4dae7a1decba0edd61b88ec71fe13969 )
    {
        Py_DECREF( frame_4dae7a1decba0edd61b88ec71fe13969 );
    }
    cache_frame_4dae7a1decba0edd61b88ec71fe13969 = NULL;

    assertFrameObject( frame_4dae7a1decba0edd61b88ec71fe13969 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_21___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_minutes );
    par_minutes = NULL;

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

    Py_XDECREF( par_minutes );
    par_minutes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_21___init__ );
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


static PyObject *impl_pytz$$$function_22_utcoffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_3b7d78544ad137541aa1efc2446b706c = NULL;

    struct Nuitka_FrameObject *frame_3b7d78544ad137541aa1efc2446b706c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b7d78544ad137541aa1efc2446b706c, codeobj_3b7d78544ad137541aa1efc2446b706c, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_3b7d78544ad137541aa1efc2446b706c = cache_frame_3b7d78544ad137541aa1efc2446b706c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b7d78544ad137541aa1efc2446b706c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b7d78544ad137541aa1efc2446b706c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__offset );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b7d78544ad137541aa1efc2446b706c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b7d78544ad137541aa1efc2446b706c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b7d78544ad137541aa1efc2446b706c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b7d78544ad137541aa1efc2446b706c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b7d78544ad137541aa1efc2446b706c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b7d78544ad137541aa1efc2446b706c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b7d78544ad137541aa1efc2446b706c,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_3b7d78544ad137541aa1efc2446b706c == cache_frame_3b7d78544ad137541aa1efc2446b706c )
    {
        Py_DECREF( frame_3b7d78544ad137541aa1efc2446b706c );
    }
    cache_frame_3b7d78544ad137541aa1efc2446b706c = NULL;

    assertFrameObject( frame_3b7d78544ad137541aa1efc2446b706c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_22_utcoffset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_22_utcoffset );
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


static PyObject *impl_pytz$$$function_23___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_a7e63ef9b951973ea484c5fa99458030 = NULL;

    struct Nuitka_FrameObject *frame_a7e63ef9b951973ea484c5fa99458030;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7e63ef9b951973ea484c5fa99458030, codeobj_a7e63ef9b951973ea484c5fa99458030, module_pytz, sizeof(void *) );
    frame_a7e63ef9b951973ea484c5fa99458030 = cache_frame_a7e63ef9b951973ea484c5fa99458030;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7e63ef9b951973ea484c5fa99458030 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7e63ef9b951973ea484c5fa99458030 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_FixedOffset );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FixedOffset );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FixedOffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__minutes );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 384;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7e63ef9b951973ea484c5fa99458030 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7e63ef9b951973ea484c5fa99458030 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7e63ef9b951973ea484c5fa99458030 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7e63ef9b951973ea484c5fa99458030, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7e63ef9b951973ea484c5fa99458030->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7e63ef9b951973ea484c5fa99458030, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7e63ef9b951973ea484c5fa99458030,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a7e63ef9b951973ea484c5fa99458030 == cache_frame_a7e63ef9b951973ea484c5fa99458030 )
    {
        Py_DECREF( frame_a7e63ef9b951973ea484c5fa99458030 );
    }
    cache_frame_a7e63ef9b951973ea484c5fa99458030 = NULL;

    assertFrameObject( frame_a7e63ef9b951973ea484c5fa99458030 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_23___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_23___reduce__ );
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


static PyObject *impl_pytz$$$function_24_dst( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_bcbd516111692571b3e7f2b2ae5b5754 = NULL;

    struct Nuitka_FrameObject *frame_bcbd516111692571b3e7f2b2ae5b5754;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bcbd516111692571b3e7f2b2ae5b5754, codeobj_bcbd516111692571b3e7f2b2ae5b5754, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_bcbd516111692571b3e7f2b2ae5b5754 = cache_frame_bcbd516111692571b3e7f2b2ae5b5754;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bcbd516111692571b3e7f2b2ae5b5754 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bcbd516111692571b3e7f2b2ae5b5754 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcbd516111692571b3e7f2b2ae5b5754 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcbd516111692571b3e7f2b2ae5b5754 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bcbd516111692571b3e7f2b2ae5b5754 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bcbd516111692571b3e7f2b2ae5b5754, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bcbd516111692571b3e7f2b2ae5b5754->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bcbd516111692571b3e7f2b2ae5b5754, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bcbd516111692571b3e7f2b2ae5b5754,
        type_description_1,
        par_self,
        par_dt
    );


    // Release cached frame.
    if ( frame_bcbd516111692571b3e7f2b2ae5b5754 == cache_frame_bcbd516111692571b3e7f2b2ae5b5754 )
    {
        Py_DECREF( frame_bcbd516111692571b3e7f2b2ae5b5754 );
    }
    cache_frame_bcbd516111692571b3e7f2b2ae5b5754 = NULL;

    assertFrameObject( frame_bcbd516111692571b3e7f2b2ae5b5754 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_24_dst );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_24_dst );
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


static PyObject *impl_pytz$$$function_25_tzname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_25_tzname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_25_tzname );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pytz$$$function_26___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_c2ff7a67e484b108c456c2ee0996f298 = NULL;

    struct Nuitka_FrameObject *frame_c2ff7a67e484b108c456c2ee0996f298;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2ff7a67e484b108c456c2ee0996f298, codeobj_c2ff7a67e484b108c456c2ee0996f298, module_pytz, sizeof(void *) );
    frame_c2ff7a67e484b108c456c2ee0996f298 = cache_frame_c2ff7a67e484b108c456c2ee0996f298;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2ff7a67e484b108c456c2ee0996f298 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2ff7a67e484b108c456c2ee0996f298 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_4116d603cf18d622a3a96438c3ed8247;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__minutes );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ff7a67e484b108c456c2ee0996f298 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ff7a67e484b108c456c2ee0996f298 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ff7a67e484b108c456c2ee0996f298 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2ff7a67e484b108c456c2ee0996f298, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2ff7a67e484b108c456c2ee0996f298->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2ff7a67e484b108c456c2ee0996f298, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2ff7a67e484b108c456c2ee0996f298,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c2ff7a67e484b108c456c2ee0996f298 == cache_frame_c2ff7a67e484b108c456c2ee0996f298 )
    {
        Py_DECREF( frame_c2ff7a67e484b108c456c2ee0996f298 );
    }
    cache_frame_c2ff7a67e484b108c456c2ee0996f298 = NULL;

    assertFrameObject( frame_c2ff7a67e484b108c456c2ee0996f298 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_26___repr__ );
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
    NUITKA_CANNOT_GET_HERE( pytz$$$function_26___repr__ );
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


static PyObject *impl_pytz$$$function_27_localize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_cce129e74d8547ddcf438e00326f9461 = NULL;

    struct Nuitka_FrameObject *frame_cce129e74d8547ddcf438e00326f9461;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cce129e74d8547ddcf438e00326f9461, codeobj_cce129e74d8547ddcf438e00326f9461, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cce129e74d8547ddcf438e00326f9461 = cache_frame_cce129e74d8547ddcf438e00326f9461;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cce129e74d8547ddcf438e00326f9461 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cce129e74d8547ddcf438e00326f9461 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_b1bc7fe008192248e9be21d38f9c02c1;
    frame_cce129e74d8547ddcf438e00326f9461->m_frame.f_lineno = 398;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 398;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_tzinfo;
    tmp_dict_value_1 = par_self;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_cce129e74d8547ddcf438e00326f9461->m_frame.f_lineno = 399;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cce129e74d8547ddcf438e00326f9461 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cce129e74d8547ddcf438e00326f9461 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cce129e74d8547ddcf438e00326f9461 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cce129e74d8547ddcf438e00326f9461, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cce129e74d8547ddcf438e00326f9461->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cce129e74d8547ddcf438e00326f9461, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cce129e74d8547ddcf438e00326f9461,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_cce129e74d8547ddcf438e00326f9461 == cache_frame_cce129e74d8547ddcf438e00326f9461 )
    {
        Py_DECREF( frame_cce129e74d8547ddcf438e00326f9461 );
    }
    cache_frame_cce129e74d8547ddcf438e00326f9461 = NULL;

    assertFrameObject( frame_cce129e74d8547ddcf438e00326f9461 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_27_localize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_27_localize );
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


static PyObject *impl_pytz$$$function_28_normalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_is_dst = python_pars[ 2 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_32435beac84131c2e79bc4ea8e8b9e99 = NULL;

    struct Nuitka_FrameObject *frame_32435beac84131c2e79bc4ea8e8b9e99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_32435beac84131c2e79bc4ea8e8b9e99, codeobj_32435beac84131c2e79bc4ea8e8b9e99, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_32435beac84131c2e79bc4ea8e8b9e99 = cache_frame_32435beac84131c2e79bc4ea8e8b9e99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_32435beac84131c2e79bc4ea8e8b9e99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_32435beac84131c2e79bc4ea8e8b9e99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dt;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tzinfo );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_self;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 403;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

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
    tmp_return_value = par_dt;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 404;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_dt;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzinfo );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "ooo";
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
    tmp_make_exception_arg_1 = const_str_digest_05ebd808c21ea74523ac7072ed059560;
    frame_32435beac84131c2e79bc4ea8e8b9e99->m_frame.f_lineno = 406;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 406;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_dt;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astimezone );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
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

        exception_lineno = 407;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_32435beac84131c2e79bc4ea8e8b9e99->m_frame.f_lineno = 407;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32435beac84131c2e79bc4ea8e8b9e99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32435beac84131c2e79bc4ea8e8b9e99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32435beac84131c2e79bc4ea8e8b9e99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32435beac84131c2e79bc4ea8e8b9e99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32435beac84131c2e79bc4ea8e8b9e99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32435beac84131c2e79bc4ea8e8b9e99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32435beac84131c2e79bc4ea8e8b9e99,
        type_description_1,
        par_self,
        par_dt,
        par_is_dst
    );


    // Release cached frame.
    if ( frame_32435beac84131c2e79bc4ea8e8b9e99 == cache_frame_32435beac84131c2e79bc4ea8e8b9e99 )
    {
        Py_DECREF( frame_32435beac84131c2e79bc4ea8e8b9e99 );
    }
    cache_frame_32435beac84131c2e79bc4ea8e8b9e99 = NULL;

    assertFrameObject( frame_32435beac84131c2e79bc4ea8e8b9e99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_28_normalize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

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

    Py_XDECREF( par_dt );
    par_dt = NULL;

    Py_XDECREF( par_is_dst );
    par_is_dst = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_28_normalize );
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


static PyObject *impl_pytz$$$function_29_FixedOffset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_offset = python_pars[ 0 ];
    PyObject *par__tzinfos = python_pars[ 1 ];
    PyObject *var_info = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_b5d3dcaab6c83a6060a762aa79edb764 = NULL;

    struct Nuitka_FrameObject *frame_b5d3dcaab6c83a6060a762aa79edb764;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5d3dcaab6c83a6060a762aa79edb764, codeobj_b5d3dcaab6c83a6060a762aa79edb764, module_pytz, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b5d3dcaab6c83a6060a762aa79edb764 = cache_frame_b5d3dcaab6c83a6060a762aa79edb764;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5d3dcaab6c83a6060a762aa79edb764 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5d3dcaab6c83a6060a762aa79edb764 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_offset;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTC );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 464;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par__tzinfos;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_tzinfos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_offset;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 466;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b5d3dcaab6c83a6060a762aa79edb764->m_frame.f_lineno = 466;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_info == NULL );
    var_info = tmp_assign_source_1;

    tmp_compare_left_2 = var_info;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par__tzinfos;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_tzinfos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setdefault );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_offset;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__FixedOffset );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FixedOffset );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FixedOffset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_offset;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "offset" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b5d3dcaab6c83a6060a762aa79edb764->m_frame.f_lineno = 472;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_b5d3dcaab6c83a6060a762aa79edb764->m_frame.f_lineno = 472;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_info;
        var_info = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    branch_no_2:;
    tmp_return_value = var_info;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 474;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5d3dcaab6c83a6060a762aa79edb764 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5d3dcaab6c83a6060a762aa79edb764 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5d3dcaab6c83a6060a762aa79edb764 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5d3dcaab6c83a6060a762aa79edb764, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5d3dcaab6c83a6060a762aa79edb764->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5d3dcaab6c83a6060a762aa79edb764, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5d3dcaab6c83a6060a762aa79edb764,
        type_description_1,
        par_offset,
        par__tzinfos,
        var_info
    );


    // Release cached frame.
    if ( frame_b5d3dcaab6c83a6060a762aa79edb764 == cache_frame_b5d3dcaab6c83a6060a762aa79edb764 )
    {
        Py_DECREF( frame_b5d3dcaab6c83a6060a762aa79edb764 );
    }
    cache_frame_b5d3dcaab6c83a6060a762aa79edb764 = NULL;

    assertFrameObject( frame_b5d3dcaab6c83a6060a762aa79edb764 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_29_FixedOffset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par__tzinfos );
    par__tzinfos = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

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

    Py_XDECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par__tzinfos );
    par__tzinfos = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_29_FixedOffset );
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


static PyObject *impl_pytz$$$function_30__test( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_doctest = NULL;
    PyObject *var_pytz = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f1bbd71e227041761efc52bc63c8ce0b = NULL;

    struct Nuitka_FrameObject *frame_f1bbd71e227041761efc52bc63c8ce0b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1bbd71e227041761efc52bc63c8ce0b, codeobj_f1bbd71e227041761efc52bc63c8ce0b, module_pytz, sizeof(void *)+sizeof(void *) );
    frame_f1bbd71e227041761efc52bc63c8ce0b = cache_frame_f1bbd71e227041761efc52bc63c8ce0b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1bbd71e227041761efc52bc63c8ce0b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1bbd71e227041761efc52bc63c8ce0b ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_doctest;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_f1bbd71e227041761efc52bc63c8ce0b->m_frame.f_lineno = 480;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_doctest == NULL );
    var_doctest = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_insert );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_int_0;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pardir );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f1bbd71e227041761efc52bc63c8ce0b->m_frame.f_lineno = 481;
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


        exception_lineno = 481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_2 = const_str_plain_pytz;
    tmp_globals_name_2 = (PyObject *)moduledict_pytz;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_f1bbd71e227041761efc52bc63c8ce0b->m_frame.f_lineno = 482;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_pytz == NULL );
    var_pytz = tmp_assign_source_2;

    tmp_source_name_4 = var_doctest;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doctest" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_testmod );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_pytz;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pytz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_f1bbd71e227041761efc52bc63c8ce0b->m_frame.f_lineno = 483;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1bbd71e227041761efc52bc63c8ce0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1bbd71e227041761efc52bc63c8ce0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1bbd71e227041761efc52bc63c8ce0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1bbd71e227041761efc52bc63c8ce0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1bbd71e227041761efc52bc63c8ce0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1bbd71e227041761efc52bc63c8ce0b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1bbd71e227041761efc52bc63c8ce0b,
        type_description_1,
        var_doctest,
        var_pytz
    );


    // Release cached frame.
    if ( frame_f1bbd71e227041761efc52bc63c8ce0b == cache_frame_f1bbd71e227041761efc52bc63c8ce0b )
    {
        Py_DECREF( frame_f1bbd71e227041761efc52bc63c8ce0b );
    }
    cache_frame_f1bbd71e227041761efc52bc63c8ce0b = NULL;

    assertFrameObject( frame_f1bbd71e227041761efc52bc63c8ce0b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz$$$function_30__test );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_doctest );
    var_doctest = NULL;

    Py_XDECREF( var_pytz );
    var_pytz = NULL;

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

    Py_XDECREF( var_doctest );
    var_doctest = NULL;

    Py_XDECREF( var_pytz );
    var_pytz = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz$$$function_30__test );
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
struct pytz$$$genexpr_1_genexpr_locals {
    PyObject *var_tz
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void pytz$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_tz = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_66aa61fa643d61feaa801fe27c69ca69, module_pytz, sizeof(void *)+sizeof(void *) );
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
        exception_lineno = 1080;
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

        exception_lineno = 1080;
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
        PyObject *old = var_tz;
        var_tz = tmp_assign_source_2;
        Py_INCREF( var_tz );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_resource_exists );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resource_exists );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "resource_exists" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1080;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_tz;

    CHECK_OBJECT( tmp_args_element_name_1 );
    generator->m_frame->m_frame.f_lineno = 1080;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1080;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1080;
        type_description_1 = "No";
        goto try_except_handler_2;
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
    tmp_expression_name_1 = var_tz;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1080;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1080;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1080;
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
            var_tz
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

    Py_XDECREF( var_tz );
    var_tz = NULL;

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

    Py_XDECREF( var_tz );
    var_tz = NULL;


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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct pytz$$$genexpr_2_genexpr_locals {
    PyObject *var_tz
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void pytz$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_tz = NULL;
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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_5ebb899e05903df02d4d95b529734bfa, module_pytz, sizeof(void *)+sizeof(void *) );
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
        exception_lineno = 1524;
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

        exception_lineno = 1524;
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
        PyObject *old = var_tz;
        var_tz = tmp_assign_source_2;
        Py_INCREF( var_tz );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_tz;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "all_timezones" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1524;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_expression_name_1 = var_tz;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tz" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1524;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_expression_name_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1524;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1524;
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
            var_tz
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

    Py_XDECREF( var_tz );
    var_tz = NULL;

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

    Py_XDECREF( var_tz );
    var_tz = NULL;


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



static PyObject *MAKE_FUNCTION_pytz$$$function_10_dst(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_10_dst,
        const_str_plain_dst,
#if PYTHON_VERSION >= 300
        const_str_digest_52ef8f9a22d97ac6b8eb9687a0e2f1c3,
#endif
        codeobj_c958a2ee7519fc38bcd584d5c6bf252d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_11___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_11___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        const_str_digest_64abce0daf65cf11df497763b2422a8e,
#endif
        codeobj_f48acdfa6121f6079c2e86c7aadff821,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_12_localize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_12_localize,
        const_str_plain_localize,
#if PYTHON_VERSION >= 300
        const_str_digest_84cb20f0560c44bf7323c66541aaa539,
#endif
        codeobj_00844fddd78e123f7281cc1d3f98a3f2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_785982eb38344f1637ddf8c4ec0b18f1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_13_normalize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_13_normalize,
        const_str_plain_normalize,
#if PYTHON_VERSION >= 300
        const_str_digest_c93acf6b434d55ddecef50534819d47b,
#endif
        codeobj_72b81bbbbbf6e6629362209a0db28f9d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_a16445c449d3b93d873704f8853b5f01,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_14___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_14___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_3fa3ebc1a4c5914c87c94acceb6311f5,
#endif
        codeobj_e7bd2dbe5cf6ed07880e15a89f9a30e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_15___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_15___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        const_str_digest_474f3cb26417a0b447aabbea02146a81,
#endif
        codeobj_4d80d406bf573015621e486dfee4bf3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_16__UTC(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_16__UTC,
        const_str_plain__UTC,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_92faaa60bd83903a4f6eb963b468caf2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_062d6592abaa96cae3da6e635394d6e6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_17__p(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_17__p,
        const_str_plain__p,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bc28308e4a55eb8ac4adff53cfad5fc1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_7da72749e596baad4f32ab2c7d5af7cd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_18___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_18___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_03b55b7fb007d622534dd1e32a9aab46,
#endif
        codeobj_e225f04339b8863ab13d08e5e03c9ca2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_e3ca0a2a96ff88561f8696f750ba750f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_19__fill(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_19__fill,
        const_str_plain__fill,
#if PYTHON_VERSION >= 300
        const_str_digest_f99045ecb05074b2b58d62365c36390b,
#endif
        codeobj_4de0641e44503129896da7caf021a968,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_1_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_1_ascii,
        const_str_plain_ascii,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2086aef1938af186ee5c64b5fe4068b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_40b1ef956ad859b053615f6025f8f897,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_20__fill(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_20__fill,
        const_str_plain__fill,
#if PYTHON_VERSION >= 300
        const_str_digest_2720e4cb749c0c6448b10643c93169ae,
#endif
        codeobj_e2d32fa833bd71a209444a0d291e8a17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_21___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_6a5f3c6db876837a53c30c7562c81da7,
#endif
        codeobj_4dae7a1decba0edd61b88ec71fe13969,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_22_utcoffset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_22_utcoffset,
        const_str_plain_utcoffset,
#if PYTHON_VERSION >= 300
        const_str_digest_8b99c616c864c1da0516542db12c66b8,
#endif
        codeobj_3b7d78544ad137541aa1efc2446b706c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_23___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_23___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        const_str_digest_3b8615855cee11321175eddec500de7a,
#endif
        codeobj_a7e63ef9b951973ea484c5fa99458030,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_24_dst(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_24_dst,
        const_str_plain_dst,
#if PYTHON_VERSION >= 300
        const_str_digest_5a54c8ba187e0241681447f3d9e10a0e,
#endif
        codeobj_bcbd516111692571b3e7f2b2ae5b5754,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_25_tzname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_25_tzname,
        const_str_plain_tzname,
#if PYTHON_VERSION >= 300
        const_str_digest_b245bb5820494867ad638f0cd3dab22b,
#endif
        codeobj_932f2663cb0bbec1db1ef37a62c091a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_26___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_26___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_3f309a6fa057172df842d7906d83291f,
#endif
        codeobj_c2ff7a67e484b108c456c2ee0996f298,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_27_localize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_27_localize,
        const_str_plain_localize,
#if PYTHON_VERSION >= 300
        const_str_digest_36f5c34230ac745520fc175f80e9d8b6,
#endif
        codeobj_cce129e74d8547ddcf438e00326f9461,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_785982eb38344f1637ddf8c4ec0b18f1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_28_normalize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_28_normalize,
        const_str_plain_normalize,
#if PYTHON_VERSION >= 300
        const_str_digest_6c2bdf6908d6e8bceb61fef9c7d5ed7c,
#endif
        codeobj_32435beac84131c2e79bc4ea8e8b9e99,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_a16445c449d3b93d873704f8853b5f01,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_29_FixedOffset( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_29_FixedOffset,
        const_str_plain_FixedOffset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b5d3dcaab6c83a6060a762aa79edb764,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_9903eb3d26136d2b67b4fbf778624241,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_2_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_2_ascii,
        const_str_plain_ascii,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_02a8f1a1c92902fae0a8d27585a56dec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_1e4c2b75c9f1db6a400788e38232d291,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_30__test(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_30__test,
        const_str_plain__test,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f1bbd71e227041761efc52bc63c8ce0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_3_open_resource(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_3_open_resource,
        const_str_plain_open_resource,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4cf095f3eb0426a755e62bae9a4c9d1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_c7b4fb5b2cd86da580837312828ea772,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_4_resource_exists(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_4_resource_exists,
        const_str_plain_resource_exists,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_54d7db9647bf3aa3f1646f0dfd67694b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_cbd04be0bd0fcacf5820968e4828185d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_5_timezone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_5_timezone,
        const_str_plain_timezone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d1d70b9ca5848cd4739b458fc3326b3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_28f8b1be0eec2c3927237dee79de4e1e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_6__unmunge_zone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_6__unmunge_zone,
        const_str_plain__unmunge_zone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ad45c2d23943118c48830dfd8a2d7047,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        const_str_digest_d7cca9e411e72c3aa12aef9e50149884,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_7_fromutc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_7_fromutc,
        const_str_plain_fromutc,
#if PYTHON_VERSION >= 300
        const_str_digest_47ce2e6888a56bafc1f83969795c931a,
#endif
        codeobj_36ba861e98e669068ea16a38fb14257a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_8_utcoffset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_8_utcoffset,
        const_str_plain_utcoffset,
#if PYTHON_VERSION >= 300
        const_str_digest_e8e88b2e956a7bdb0e7f5c20e09d37a3,
#endif
        codeobj_9d15f356ea516d12703f39c173f1f89b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pytz$$$function_9_tzname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pytz$$$function_9_tzname,
        const_str_plain_tzname,
#if PYTHON_VERSION >= 300
        const_str_digest_4f6b8640a25bf7332f7083aadeee7f2a,
#endif
        codeobj_84898b9d3d0eabb0fecad98908450ae2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pytz,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pytz =
{
    PyModuleDef_HEAD_INIT,
    "pytz",   /* m_name */
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

MOD_INIT_DECL( pytz )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pytz );
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
    puts("pytz: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pytz: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pytz: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpytz" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pytz = Py_InitModule4(
        "pytz",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pytz = PyModule_Create( &mdef_pytz );
#endif

    moduledict_pytz = MODULE_DICT( module_pytz );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pytz,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pytz,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pytz,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pytz );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_pytz, module_pytz );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
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
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
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
    PyObject *tmp_kw_name_9;
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
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    static struct Nuitka_FrameObject *cache_frame_c400a55d4101f8dcd4afba8dc0c76698_2 = NULL;

    struct Nuitka_FrameObject *frame_c400a55d4101f8dcd4afba8dc0c76698_2;

    static struct Nuitka_FrameObject *cache_frame_1a21e61ad09c7bd829fd1ab989312d62_3 = NULL;

    struct Nuitka_FrameObject *frame_1a21e61ad09c7bd829fd1ab989312d62_3;

    static struct Nuitka_FrameObject *cache_frame_dac202bd0a235e50f289b738c2912231_4 = NULL;

    struct Nuitka_FrameObject *frame_dac202bd0a235e50f289b738c2912231_4;

    static struct Nuitka_FrameObject *cache_frame_2784207e8c0ce08ee9fd4609929b3357_5 = NULL;

    struct Nuitka_FrameObject *frame_2784207e8c0ce08ee9fd4609929b3357_5;

    struct Nuitka_FrameObject *frame_b372de5efe6e71b533c8ccb0084f13e3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    PyObject *locals_pytz_370 = NULL;
    PyObject *locals_pytz_287 = NULL;
    PyObject *locals_pytz_191 = NULL;
    PyObject *locals_pytz_345 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_fc1c4881636a98bdccfe1a5abb52784f;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_67e183cbcfc37ab1cf71fb3b486e7293;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_2e77b725d728f523b91536f8ce9d2135_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_pytz;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_5 == NULL) );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_b372de5efe6e71b533c8ccb0084f13e3 = MAKE_MODULE_FRAME( codeobj_b372de5efe6e71b533c8ccb0084f13e3, module_pytz );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b372de5efe6e71b533c8ccb0084f13e3 );
    assert( Py_REFCNT( frame_b372de5efe6e71b533c8ccb0084f13e3 ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_datetime;
    tmp_globals_name_2 = (PyObject *)moduledict_pytz;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_6 );
    tmp_name_name_3 = const_str_digest_e399ba4554180f37de594a6743234f17;
    tmp_globals_name_3 = (PyObject *)moduledict_pytz;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 13;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_name_name_4 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_4 = (PyObject *)moduledict_pytz;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_AmbiguousTimeError_tuple;
    tmp_level_name_4 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 15;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AmbiguousTimeError );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_AmbiguousTimeError, tmp_assign_source_8 );
    tmp_name_name_5 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_5 = (PyObject *)moduledict_pytz;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_InvalidTimeError_tuple;
    tmp_level_name_5 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 16;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_InvalidTimeError );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_InvalidTimeError, tmp_assign_source_9 );
    tmp_name_name_6 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_6 = (PyObject *)moduledict_pytz;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_NonExistentTimeError_tuple;
    tmp_level_name_6 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 17;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_NonExistentTimeError );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_NonExistentTimeError, tmp_assign_source_10 );
    tmp_name_name_7 = const_str_digest_c3c7bf3c5a4a733fe62b7f4b6ed9a9ea;
    tmp_globals_name_7 = (PyObject *)moduledict_pytz;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_UnknownTimeZoneError_tuple;
    tmp_level_name_7 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 18;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_UnknownTimeZoneError );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UnknownTimeZoneError, tmp_assign_source_11 );
    tmp_name_name_8 = const_str_digest_6f6ed120385c30c5ae275bbd94d26244;
    tmp_globals_name_8 = (PyObject *)moduledict_pytz;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_LazyDict_str_plain_LazyList_str_plain_LazySet_tuple;
    tmp_level_name_8 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 19;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_LazyDict );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyDict, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LazyList );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyList, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_LazySet );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazySet, tmp_assign_source_15 );
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

    tmp_name_name_9 = const_str_digest_5f18f2c6586a4ad10d7b44ad223b9240;
    tmp_globals_name_9 = (PyObject *)moduledict_pytz;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_unpickler_str_plain_BaseTzInfo_tuple;
    tmp_level_name_9 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 20;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_unpickler );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unpickler, tmp_assign_source_17 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_BaseTzInfo );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_BaseTzInfo, tmp_assign_source_18 );
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

    tmp_name_name_10 = const_str_digest_8fba0ec9be0c4ed486d17847c03a428a;
    tmp_globals_name_10 = (PyObject *)moduledict_pytz;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_build_tzinfo_tuple;
    tmp_level_name_10 = const_int_0;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 21;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_build_tzinfo );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_build_tzinfo, tmp_assign_source_19 );
    tmp_assign_source_20 = const_str_plain_2018e;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_OLSON_VERSION, tmp_assign_source_20 );
    tmp_assign_source_21 = const_str_digest_ae13355cc51432ccc39ee70bacb8b4a5;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_21 );
    tmp_assign_source_22 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_VERSION );

    if (unlikely( tmp_assign_source_22 == NULL ))
    {
        tmp_assign_source_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VERSION );
    }

    CHECK_OBJECT( tmp_assign_source_22 );
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_22 );
    tmp_assign_source_23 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_OLSON_VERSION );

    if (unlikely( tmp_assign_source_23 == NULL ))
    {
        tmp_assign_source_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OLSON_VERSION );
    }

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_OLSEN_VERSION, tmp_assign_source_23 );
    tmp_assign_source_24 = LIST_COPY( const_list_e0c41cf66ed84c646cccc6342b37a9b8_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

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
    tmp_assign_source_25 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_pytz$$$function_1_ascii(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_26 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_27 = MAKE_FUNCTION_pytz$$$function_2_ascii(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_27 );
    branch_end_1:;
    tmp_assign_source_28 = MAKE_FUNCTION_pytz$$$function_3_open_resource(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_open_resource, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_pytz$$$function_4_resource_exists(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_resource_exists, tmp_assign_source_29 );
    tmp_assign_source_30 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__tzinfo_cache, tmp_assign_source_30 );
    tmp_assign_source_31 = MAKE_FUNCTION_pytz$$$function_5_timezone(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_timezone, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_pytz$$$function_6__unmunge_zone(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__unmunge_zone, tmp_assign_source_32 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;

        goto frame_exception_exit_1;
    }

    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 187;
    tmp_assign_source_33 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_timedelta, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO, tmp_assign_source_33 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;

        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_timedelta );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_e2952c9492316513fb6e1b78814fb058 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 188;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_HOUR, tmp_assign_source_34 );
    // Tried code:
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_BaseTzInfo );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseTzInfo );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BaseTzInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;

        goto try_except_handler_3;
    }

    tmp_assign_source_35 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases_orig == NULL );
    tmp_class_creation_1__bases_orig = tmp_assign_source_35;

    tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_36 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_36;

    tmp_assign_source_37 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_37;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
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


        exception_lineno = 191;

        goto try_except_handler_3;
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


        exception_lineno = 191;

        goto try_except_handler_3;
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
    tmp_subscribed_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_38 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_38;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
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


        exception_lineno = 191;

        goto try_except_handler_3;
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


        exception_lineno = 191;

        goto try_except_handler_3;
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
    tmp_source_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    tmp_tuple_element_2 = const_str_plain_UTC;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 191;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_39 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_39;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_pytz_191 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_pytz;
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_digest_d9377d9886e98c27cec2d5edcf37c120;
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_plain_UTC;
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_5;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_c400a55d4101f8dcd4afba8dc0c76698_2, codeobj_c400a55d4101f8dcd4afba8dc0c76698, module_pytz, sizeof(void *) );
    frame_c400a55d4101f8dcd4afba8dc0c76698_2 = cache_frame_c400a55d4101f8dcd4afba8dc0c76698_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c400a55d4101f8dcd4afba8dc0c76698_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c400a55d4101f8dcd4afba8dc0c76698_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = const_str_plain_UTC;
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_zone, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = PyObject_GetItem( locals_pytz_191, const_str_plain_ZERO );

    if ( tmp_dictset_value == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

        if (unlikely( tmp_dictset_value == NULL ))
        {
            tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
        }

        if ( tmp_dictset_value == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 199;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain__utcoffset, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = PyObject_GetItem( locals_pytz_191, const_str_plain_ZERO );

    if ( tmp_dictset_value == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_ZERO );

        if (unlikely( tmp_dictset_value == NULL ))
        {
            tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ZERO );
        }

        if ( tmp_dictset_value == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ZERO" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 200;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain__dst, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = PyObject_GetItem( locals_pytz_191, const_str_plain_zone );

    if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zone" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain__tzname, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_7_fromutc(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_fromutc, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_8_utcoffset(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_utcoffset, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_9_tzname(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_tzname, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_10_dst(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_dst, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_11___reduce__(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___reduce__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_12_localize( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_localize, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_2 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_13_normalize( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain_normalize, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_14___repr__(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_15___str__(  );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___str__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c400a55d4101f8dcd4afba8dc0c76698_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c400a55d4101f8dcd4afba8dc0c76698_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c400a55d4101f8dcd4afba8dc0c76698_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c400a55d4101f8dcd4afba8dc0c76698_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c400a55d4101f8dcd4afba8dc0c76698_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c400a55d4101f8dcd4afba8dc0c76698_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_c400a55d4101f8dcd4afba8dc0c76698_2 == cache_frame_c400a55d4101f8dcd4afba8dc0c76698_2 )
    {
        Py_DECREF( frame_c400a55d4101f8dcd4afba8dc0c76698_2 );
    }
    cache_frame_c400a55d4101f8dcd4afba8dc0c76698_2 = NULL;

    assertFrameObject( frame_c400a55d4101f8dcd4afba8dc0c76698_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_5;
    skip_nested_handling_1:;
    tmp_compare_left_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_5;
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
    tmp_dictset_value = tmp_class_creation_1__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_pytz_191, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_5;
    }
    branch_no_3:;
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_tuple_element_3 = const_str_plain_UTC;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_pytz_191;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 191;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto try_except_handler_5;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_41;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_pytz_191 );
    locals_pytz_191 = NULL;
    goto try_return_handler_4;
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

    Py_DECREF( locals_pytz_191 );
    locals_pytz_191 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 191;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_40 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC, tmp_assign_source_40 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UTC );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UTC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;

        goto try_except_handler_6;
    }

    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 241;
    tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;

        goto try_except_handler_6;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_42;

    goto try_end_4;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_43 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_UTC, tmp_assign_source_43 );
    tmp_assign_source_44 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_44 );
    UPDATE_STRING_DICT0( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_utc, tmp_assign_source_44 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_assign_source_45 = MAKE_FUNCTION_pytz$$$function_16__UTC(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__UTC, tmp_assign_source_45 );
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__UTC );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__UTC );
    }

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___safe_for_unpickling__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_46 = MAKE_FUNCTION_pytz$$$function_17__p(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__p, tmp_assign_source_46 );
    tmp_assattr_name_2 = Py_True;
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__p );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__p );
    }

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___safe_for_unpickling__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyDict );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyDict );
    }

    if ( tmp_tuple_element_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;

        goto try_except_handler_7;
    }

    tmp_assign_source_47 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_47;

    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_48 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_48;

    tmp_assign_source_49 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_49;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
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


        exception_lineno = 287;

        goto try_except_handler_7;
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


        exception_lineno = 287;

        goto try_except_handler_7;
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
    tmp_subscribed_name_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_50 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_50;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
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


        exception_lineno = 287;

        goto try_except_handler_7;
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


        exception_lineno = 287;

        goto try_except_handler_7;
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
    tmp_source_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    tmp_tuple_element_5 = const_str_plain__CountryTimezoneDict;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 287;
    tmp_assign_source_51 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_7;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_51 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_51;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_pytz_287 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_pytz;
    tmp_res = PyObject_SetItem( locals_pytz_287, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_digest_b14139c8eeddedc0051aa77095084277;
    tmp_res = PyObject_SetItem( locals_pytz_287, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_plain__CountryTimezoneDict;
    tmp_res = PyObject_SetItem( locals_pytz_287, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_9;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_1a21e61ad09c7bd829fd1ab989312d62_3, codeobj_1a21e61ad09c7bd829fd1ab989312d62, module_pytz, sizeof(void *) );
    frame_1a21e61ad09c7bd829fd1ab989312d62_3 = cache_frame_1a21e61ad09c7bd829fd1ab989312d62_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1a21e61ad09c7bd829fd1ab989312d62_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1a21e61ad09c7bd829fd1ab989312d62_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_18___call__(  );
    tmp_res = PyObject_SetItem( locals_pytz_287, const_str_plain___call__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_19__fill(  );
    tmp_res = PyObject_SetItem( locals_pytz_287, const_str_plain__fill, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a21e61ad09c7bd829fd1ab989312d62_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1a21e61ad09c7bd829fd1ab989312d62_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1a21e61ad09c7bd829fd1ab989312d62_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1a21e61ad09c7bd829fd1ab989312d62_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1a21e61ad09c7bd829fd1ab989312d62_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1a21e61ad09c7bd829fd1ab989312d62_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_1a21e61ad09c7bd829fd1ab989312d62_3 == cache_frame_1a21e61ad09c7bd829fd1ab989312d62_3 )
    {
        Py_DECREF( frame_1a21e61ad09c7bd829fd1ab989312d62_3 );
    }
    cache_frame_1a21e61ad09c7bd829fd1ab989312d62_3 = NULL;

    assertFrameObject( frame_1a21e61ad09c7bd829fd1ab989312d62_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_9;
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


        exception_lineno = 287;

        goto try_except_handler_9;
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
    tmp_res = PyObject_SetItem( locals_pytz_287, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_9;
    }
    branch_no_5:;
    tmp_called_name_6 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_6 = const_str_plain__CountryTimezoneDict;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_pytz_287;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
    tmp_kw_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 287;
    tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;

        goto try_except_handler_9;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_53;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_pytz_287 );
    locals_pytz_287 = NULL;
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

    Py_DECREF( locals_pytz_287 );
    locals_pytz_287 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
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

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 287;
    goto try_except_handler_7;
    outline_result_2:;
    tmp_assign_source_52 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryTimezoneDict, tmp_assign_source_52 );
    goto try_end_5;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryTimezoneDict );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__CountryTimezoneDict );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_CountryTimezoneDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 342;

        goto frame_exception_exit_1;
    }

    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 342;
    tmp_assign_source_54 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_country_timezones, tmp_assign_source_54 );
    // Tried code:
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyDict );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyDict );
    }

    if ( tmp_tuple_element_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 345;

        goto try_except_handler_10;
    }

    tmp_assign_source_55 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_55;

    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_56 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_56;

    tmp_assign_source_57 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_57;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
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


        exception_lineno = 345;

        goto try_except_handler_10;
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


        exception_lineno = 345;

        goto try_except_handler_10;
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
    tmp_subscribed_name_4 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_58 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_58;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    branch_no_6:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
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
    tmp_source_name_5 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    tmp_tuple_element_8 = const_str_plain__CountryNameDict;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 345;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_5, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_10;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_59 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_59;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_pytz_345 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_pytz;
    tmp_res = PyObject_SetItem( locals_pytz_345, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_digest_bb3f1eb0ff65804a6d288f0fbc2640e3;
    tmp_res = PyObject_SetItem( locals_pytz_345, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain__CountryNameDict;
    tmp_res = PyObject_SetItem( locals_pytz_345, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_12;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_dac202bd0a235e50f289b738c2912231_4, codeobj_dac202bd0a235e50f289b738c2912231, module_pytz, sizeof(void *) );
    frame_dac202bd0a235e50f289b738c2912231_4 = cache_frame_dac202bd0a235e50f289b738c2912231_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dac202bd0a235e50f289b738c2912231_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dac202bd0a235e50f289b738c2912231_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_20__fill(  );
    tmp_res = PyObject_SetItem( locals_pytz_345, const_str_plain__fill, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dac202bd0a235e50f289b738c2912231_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dac202bd0a235e50f289b738c2912231_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dac202bd0a235e50f289b738c2912231_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dac202bd0a235e50f289b738c2912231_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dac202bd0a235e50f289b738c2912231_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dac202bd0a235e50f289b738c2912231_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_dac202bd0a235e50f289b738c2912231_4 == cache_frame_dac202bd0a235e50f289b738c2912231_4 )
    {
        Py_DECREF( frame_dac202bd0a235e50f289b738c2912231_4 );
    }
    cache_frame_dac202bd0a235e50f289b738c2912231_4 = NULL;

    assertFrameObject( frame_dac202bd0a235e50f289b738c2912231_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_12;
    skip_nested_handling_3:;
    tmp_compare_left_4 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_12;
    }
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictset_value = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_pytz_345, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_12;
    }
    branch_no_7:;
    tmp_called_name_9 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_tuple_element_9 = const_str_plain__CountryNameDict;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_9 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = locals_pytz_345;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_9 );
    tmp_kw_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 345;
    tmp_assign_source_61 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_6, tmp_kw_name_7 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;

        goto try_except_handler_12;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_61;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_pytz_345 );
    locals_pytz_345 = NULL;
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

    Py_DECREF( locals_pytz_345 );
    locals_pytz_345 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
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

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 345;
    goto try_except_handler_10;
    outline_result_3:;
    tmp_assign_source_60 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryNameDict, tmp_assign_source_60 );
    goto try_end_6;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__CountryNameDict );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__CountryNameDict );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_CountryNameDict" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 365;

        goto frame_exception_exit_1;
    }

    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 365;
    tmp_assign_source_62 = CALL_FUNCTION_NO_ARGS( tmp_called_name_10 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_country_names, tmp_assign_source_62 );
    // Tried code:
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;

        goto try_except_handler_13;
    }

    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_tzinfo );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    tmp_assign_source_63 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_63, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_63;

    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_64 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_64;

    tmp_assign_source_65 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_65;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
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


        exception_lineno = 370;

        goto try_except_handler_13;
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


        exception_lineno = 370;

        goto try_except_handler_13;
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
    tmp_subscribed_name_5 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_66 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_66;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    branch_no_8:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
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
    tmp_source_name_7 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    tmp_tuple_element_11 = const_str_plain__FixedOffset;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 370;
    tmp_assign_source_67 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_7, tmp_kw_name_8 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_13;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_67 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_67;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_pytz_370 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_pytz;
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_15;
    }
    tmp_dictset_value = const_str_plain__FixedOffset;
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_15;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_2784207e8c0ce08ee9fd4609929b3357_5, codeobj_2784207e8c0ce08ee9fd4609929b3357, module_pytz, sizeof(void *) );
    frame_2784207e8c0ce08ee9fd4609929b3357_5 = cache_frame_2784207e8c0ce08ee9fd4609929b3357_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2784207e8c0ce08ee9fd4609929b3357_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2784207e8c0ce08ee9fd4609929b3357_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = Py_None;
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain_zone, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_21___init__(  );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_22_utcoffset(  );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain_utcoffset, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_23___reduce__(  );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain___reduce__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_24_dst(  );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain_dst, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_25_tzname(  );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain_tzname, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_26___repr__(  );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_3 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_27_localize( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain_localize, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_defaults_4 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_pytz$$$function_28_normalize( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain_normalize, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2784207e8c0ce08ee9fd4609929b3357_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2784207e8c0ce08ee9fd4609929b3357_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2784207e8c0ce08ee9fd4609929b3357_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2784207e8c0ce08ee9fd4609929b3357_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2784207e8c0ce08ee9fd4609929b3357_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2784207e8c0ce08ee9fd4609929b3357_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_2784207e8c0ce08ee9fd4609929b3357_5 == cache_frame_2784207e8c0ce08ee9fd4609929b3357_5 )
    {
        Py_DECREF( frame_2784207e8c0ce08ee9fd4609929b3357_5 );
    }
    cache_frame_2784207e8c0ce08ee9fd4609929b3357_5 = NULL;

    assertFrameObject( frame_2784207e8c0ce08ee9fd4609929b3357_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_15;
    skip_nested_handling_4:;
    tmp_compare_left_5 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_15;
    }
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictset_value = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_res = PyObject_SetItem( locals_pytz_370, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_15;
    }
    branch_no_9:;
    tmp_called_name_12 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_12 = const_str_plain__FixedOffset;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_12 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_pytz_370;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
    tmp_kw_name_9 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 370;
    tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_8, tmp_kw_name_9 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;

        goto try_except_handler_15;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_69;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_pytz_370 );
    locals_pytz_370 = NULL;
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

    Py_DECREF( locals_pytz_370 );
    locals_pytz_370 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
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

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 370;
    goto try_except_handler_13;
    outline_result_4:;
    tmp_assign_source_68 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__FixedOffset, tmp_assign_source_68 );
    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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

    tmp_tuple_element_13 = PyDict_New();
    tmp_defaults_5 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_13 );
    tmp_assign_source_70 = MAKE_FUNCTION_pytz$$$function_29_FixedOffset( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_FixedOffset, tmp_assign_source_70 );
    tmp_assattr_name_3 = Py_True;
    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_FixedOffset );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FixedOffset );
    }

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain___safe_for_unpickling__, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_71 = MAKE_FUNCTION_pytz$$$function_30__test(  );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain__test, tmp_assign_source_71 );
    tmp_assign_source_72 = LIST_COPY( const_list_92089e415774d74a8639031bd4208975_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones, tmp_assign_source_72 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyList );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyList );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1079;

        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones );
    }

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_74 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1080;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_74;

    // Tried code:
    tmp_outline_return_value_5 = Nuitka_Generator_New(
        pytz$$$genexpr_1_genexpr_context,
        module_pytz,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_angle_genexpr,
#endif
        codeobj_66aa61fa643d61feaa801fe27c69ca69,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_5)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_5 ) >= 1 ); 


    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_args_element_name_1 = tmp_outline_return_value_5;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 1079;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1079;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones, tmp_assign_source_73 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazySet );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazySet );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazySet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1082;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_all_timezones );
    }

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 1082;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1082;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_all_timezones_set, tmp_assign_source_75 );
    tmp_assign_source_76 = LIST_COPY( const_list_e442bdbf8df831c1de739ae7e7e12872_list );
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones, tmp_assign_source_76 );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazyList );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazyList );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazyList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1523;

        goto frame_exception_exit_1;
    }

    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common_timezones );
    }

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_78 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1524;

        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_2__$0 == NULL );
    tmp_genexpr_2__$0 = tmp_assign_source_78;

    // Tried code:
    tmp_outline_return_value_6 = Nuitka_Generator_New(
        pytz$$$genexpr_2_genexpr_context,
        module_pytz,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_angle_genexpr,
#endif
        codeobj_5ebb899e05903df02d4d95b529734bfa,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_6)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );
    assert( Py_SIZE( tmp_outline_return_value_6 ) >= 1 ); 


    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
    Py_DECREF( tmp_genexpr_2__$0 );
    tmp_genexpr_2__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pytz );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_args_element_name_3 = tmp_outline_return_value_6;
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 1523;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1523;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones, tmp_assign_source_77 );
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_LazySet );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LazySet );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LazySet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 1526;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common_timezones );
    }

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame.f_lineno = 1526;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1526;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pytz, (Nuitka_StringObject *)const_str_plain_common_timezones_set, tmp_assign_source_79 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b372de5efe6e71b533c8ccb0084f13e3 );
#endif
    popFrameStack();

    assertFrameObject( frame_b372de5efe6e71b533c8ccb0084f13e3 );

    goto frame_no_exception_5;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b372de5efe6e71b533c8ccb0084f13e3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b372de5efe6e71b533c8ccb0084f13e3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b372de5efe6e71b533c8ccb0084f13e3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b372de5efe6e71b533c8ccb0084f13e3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;

    return MOD_RETURN_VALUE( module_pytz );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
