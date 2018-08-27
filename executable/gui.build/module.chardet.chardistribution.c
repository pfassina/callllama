/* Generated code for Python source for module 'chardet.chardistribution'
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

/* The _module_chardet$chardistribution is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$chardistribution;
PyDictObject *moduledict_chardet$chardistribution;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_b45ccb621b613c3bd1bd5e9ddee93753;
extern PyObject *const_tuple_str_plain_self_str_plain_byte_str_tuple;
static PyObject *const_str_plain__total_chars;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_161;
static PyObject *const_str_plain_SURE_NO;
static PyObject *const_str_plain__table_size;
static PyObject *const_str_digest_bb3e1dbd35ea4e41d7f68a3343dd645c;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_jisfreq;
extern PyObject *const_int_pos_31;
static PyObject *const_str_plain_big5freq;
extern PyObject *const_str_plain_get_confidence;
extern PyObject *const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO;
extern PyObject *const_int_pos_512;
extern PyObject *const_str_plain__done;
static PyObject *const_str_digest_bb65158be48501225be1c7d5ef385879;
static PyObject *const_str_digest_fc8702d49daeda02fda707f5feeee25f;
extern PyObject *const_int_pos_1024;
static PyObject *const_str_digest_47013b3ed66904a628c31a1d049eb414;
static PyObject *const_str_plain_euctwfreq;
static PyObject *const_str_digest_d62d03eae1ce02964d633e8daf5aada2;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_a2aab74e252bbabee9c1f1f67a3c7c19;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_digest_c9a93c3344ac4d2f1db773b18f41d871;
extern PyObject *const_str_plain_GB2312_TABLE_SIZE;
extern PyObject *const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO;
static PyObject *const_tuple_7c159ba16de36ddcef81c66827dc7390_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple;
extern PyObject *const_str_plain_first_char;
extern PyObject *const_str_plain_char_len;
static PyObject *const_str_plain__freq_chars;
extern PyObject *const_str_plain_SJISDistributionAnalysis;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_63;
static PyObject *const_str_digest_c124b8f3d4c1a6f372e2c66d94126c7d;
extern PyObject *const_int_pos_239;
extern PyObject *const_float_0_99;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_get_order;
extern PyObject *const_str_plain_got_enough_data;
static PyObject *const_str_plain_SURE_YES;
extern PyObject *const_str_plain_EUCTWDistributionAnalysis;
static PyObject *const_str_digest_efc3b77b2936864df090d58ad85eb204;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_e994e8f263cc5d3eff75df26359082cd;
extern PyObject *const_str_plain_MINIMUM_DATA_THRESHOLD;
extern PyObject *const_int_pos_129;
extern PyObject *const_str_plain_JIS_TABLE_SIZE;
extern PyObject *const_str_plain_EUCKRDistributionAnalysis;
static PyObject *const_str_digest_13e0f5606131955110270bdcb9b5449e;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_typical_distribution_ratio;
static PyObject *const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple;
extern PyObject *const_str_plain_GB2312_CHAR_TO_FREQ_ORDER;
static PyObject *const_str_plain_ENOUGH_DATA_THRESHOLD;
extern PyObject *const_int_pos_164;
extern PyObject *const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER;
extern PyObject *const_str_plain_Big5DistributionAnalysis;
extern PyObject *const_str_plain_EUCJPDistributionAnalysis;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_EUCKR_TABLE_SIZE;
static PyObject *const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_str_plain_reset;
static PyObject *const_str_plain_gb2312freq;
extern PyObject *const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER;
extern PyObject *const_int_pos_64;
static PyObject *const_int_pos_196;
static PyObject *const_str_digest_3ad6227e1f46805bdafb128602de1c1d;
static PyObject *const_str_plain__char_to_freq_order;
static PyObject *const_str_plain_euckrfreq;
extern PyObject *const_str_plain_JIS_CHAR_TO_FREQ_ORDER;
static PyObject *const_str_digest_529a81d15d3f33e1350b614fbf3e8f3b;
extern PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
static PyObject *const_str_plain_CharDistributionAnalysis;
static PyObject *const_str_digest_716723dbf2ba7947e4e1aeecc1269f9e;
extern PyObject *const_int_pos_224;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_4d9e8fef00a7b75f1eadd90f086569e9_tuple;
static PyObject *const_str_digest_927c2db4fca30038b7313c6f508a2595;
static PyObject *const_int_pos_94;
extern PyObject *const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_self_str_plain_byte_str_str_plain_char_tuple;
static PyObject *const_tuple_2c68ef61e5dc2884fad85ffd401114cc_tuple;
extern PyObject *const_str_plain_GB2312DistributionAnalysis;
static PyObject *const_int_pos_188;
static PyObject *const_tuple_40f541a6360b19c8ae5fafb7c9a30e12_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_BIG5_CHAR_TO_FREQ_ORDER;
extern PyObject *const_str_plain___module__;
static PyObject *const_int_pos_176;
extern PyObject *const_int_pos_127;
extern PyObject *const_float_0_01;
static PyObject *const_tuple_109d3d8eea16a531737ebea337292b06_tuple;
static PyObject *const_int_pos_157;
static PyObject *const_str_digest_6f8abe0474c7b3b273bc6ad987b6ff03;
extern PyObject *const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_01f58a979a99e9cbe21eb132fe05ec46_tuple;
static PyObject *const_str_digest_9844569e795b340eed68b81fd3b524ba;
static PyObject *const_str_digest_182c8028d6867148d466cd9f5989f54d;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___init__;
static PyObject *const_int_pos_160;
extern PyObject *const_str_plain_BIG5_TABLE_SIZE;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_965a1de71dde3a9de125babcdcb6ce42;
static PyObject *const_str_digest_18bd7897b8a9a45bd57f09ae98a036cf;
extern PyObject *const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_EUCTW_TABLE_SIZE;
static PyObject *const_str_digest_4c1d467419a5f93fd349b85f711b4c11;
static PyObject *const_str_digest_02376e9c59619f5ed39e6532d21fefdb;
extern PyObject *const_str_plain_second_char;
extern PyObject *const_str_plain_feed;
static PyObject *const_str_digest_fadfdc835d733f1692a74b5240f4d260;
extern PyObject *const_int_pos_159;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b45ccb621b613c3bd1bd5e9ddee93753 = UNSTREAM_STRING( &constant_bin[ 90495 ], 29, 0 );
    const_str_plain__total_chars = UNSTREAM_STRING( &constant_bin[ 90524 ], 12, 1 );
    const_str_plain_SURE_NO = UNSTREAM_STRING( &constant_bin[ 90536 ], 7, 1 );
    const_str_plain__table_size = UNSTREAM_STRING( &constant_bin[ 90543 ], 11, 1 );
    const_str_digest_bb3e1dbd35ea4e41d7f68a3343dd645c = UNSTREAM_STRING( &constant_bin[ 90554 ], 35, 0 );
    const_str_plain_jisfreq = UNSTREAM_STRING( &constant_bin[ 90589 ], 7, 1 );
    const_str_plain_big5freq = UNSTREAM_STRING( &constant_bin[ 90318 ], 8, 1 );
    const_str_digest_bb65158be48501225be1c7d5ef385879 = UNSTREAM_STRING( &constant_bin[ 90596 ], 30, 0 );
    const_str_digest_fc8702d49daeda02fda707f5feeee25f = UNSTREAM_STRING( &constant_bin[ 90626 ], 68, 0 );
    const_str_digest_47013b3ed66904a628c31a1d049eb414 = UNSTREAM_STRING( &constant_bin[ 90694 ], 34, 0 );
    const_str_plain_euctwfreq = UNSTREAM_STRING( &constant_bin[ 90728 ], 9, 1 );
    const_str_digest_d62d03eae1ce02964d633e8daf5aada2 = UNSTREAM_STRING( &constant_bin[ 90737 ], 35, 0 );
    const_str_digest_a2aab74e252bbabee9c1f1f67a3c7c19 = UNSTREAM_STRING( &constant_bin[ 90772 ], 33, 0 );
    const_str_digest_c9a93c3344ac4d2f1db773b18f41d871 = UNSTREAM_STRING( &constant_bin[ 90805 ], 34, 0 );
    const_tuple_7c159ba16de36ddcef81c66827dc7390_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7c159ba16de36ddcef81c66827dc7390_tuple, 0, const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER ); Py_INCREF( const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER );
    PyTuple_SET_ITEM( const_tuple_7c159ba16de36ddcef81c66827dc7390_tuple, 1, const_str_plain_EUCKR_TABLE_SIZE ); Py_INCREF( const_str_plain_EUCKR_TABLE_SIZE );
    PyTuple_SET_ITEM( const_tuple_7c159ba16de36ddcef81c66827dc7390_tuple, 2, const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO ); Py_INCREF( const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO );
    const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple, 2, const_str_plain_first_char ); Py_INCREF( const_str_plain_first_char );
    const_str_plain__freq_chars = UNSTREAM_STRING( &constant_bin[ 90839 ], 11, 1 );
    const_str_digest_c124b8f3d4c1a6f372e2c66d94126c7d = UNSTREAM_STRING( &constant_bin[ 90850 ], 34, 0 );
    const_str_plain_SURE_YES = UNSTREAM_STRING( &constant_bin[ 90884 ], 8, 1 );
    const_str_digest_efc3b77b2936864df090d58ad85eb204 = UNSTREAM_STRING( &constant_bin[ 90892 ], 34, 0 );
    const_str_digest_e994e8f263cc5d3eff75df26359082cd = UNSTREAM_STRING( &constant_bin[ 90926 ], 24, 0 );
    const_str_digest_13e0f5606131955110270bdcb9b5449e = UNSTREAM_STRING( &constant_bin[ 90950 ], 34, 0 );
    const_str_plain_typical_distribution_ratio = UNSTREAM_STRING( &constant_bin[ 90984 ], 26, 1 );
    const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple, 2, const_str_plain_first_char ); Py_INCREF( const_str_plain_first_char );
    PyTuple_SET_ITEM( const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple, 3, const_str_plain_second_char ); Py_INCREF( const_str_plain_second_char );
    PyTuple_SET_ITEM( const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple, 4, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_str_plain_ENOUGH_DATA_THRESHOLD = UNSTREAM_STRING( &constant_bin[ 91010 ], 21, 1 );
    const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple, 2, const_str_plain_first_char ); Py_INCREF( const_str_plain_first_char );
    PyTuple_SET_ITEM( const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple, 3, const_str_plain_second_char ); Py_INCREF( const_str_plain_second_char );
    const_str_plain_gb2312freq = UNSTREAM_STRING( &constant_bin[ 91031 ], 10, 1 );
    const_int_pos_196 = PyLong_FromUnsignedLong( 196ul );
    const_str_digest_3ad6227e1f46805bdafb128602de1c1d = UNSTREAM_STRING( &constant_bin[ 91041 ], 36, 0 );
    const_str_plain__char_to_freq_order = UNSTREAM_STRING( &constant_bin[ 91077 ], 19, 1 );
    const_str_plain_euckrfreq = UNSTREAM_STRING( &constant_bin[ 91096 ], 9, 1 );
    const_str_digest_529a81d15d3f33e1350b614fbf3e8f3b = UNSTREAM_STRING( &constant_bin[ 91105 ], 40, 0 );
    const_str_plain_CharDistributionAnalysis = UNSTREAM_STRING( &constant_bin[ 90495 ], 24, 1 );
    const_str_digest_716723dbf2ba7947e4e1aeecc1269f9e = UNSTREAM_STRING( &constant_bin[ 91145 ], 39, 0 );
    const_tuple_4d9e8fef00a7b75f1eadd90f086569e9_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_4d9e8fef00a7b75f1eadd90f086569e9_tuple, 0, const_str_plain_GB2312_CHAR_TO_FREQ_ORDER ); Py_INCREF( const_str_plain_GB2312_CHAR_TO_FREQ_ORDER );
    PyTuple_SET_ITEM( const_tuple_4d9e8fef00a7b75f1eadd90f086569e9_tuple, 1, const_str_plain_GB2312_TABLE_SIZE ); Py_INCREF( const_str_plain_GB2312_TABLE_SIZE );
    PyTuple_SET_ITEM( const_tuple_4d9e8fef00a7b75f1eadd90f086569e9_tuple, 2, const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO ); Py_INCREF( const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO );
    const_str_digest_927c2db4fca30038b7313c6f508a2595 = UNSTREAM_STRING( &constant_bin[ 91184 ], 33, 0 );
    const_int_pos_94 = PyLong_FromUnsignedLong( 94ul );
    const_tuple_str_plain_self_str_plain_byte_str_str_plain_char_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_char_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_char_tuple, 1, const_str_plain_byte_str ); Py_INCREF( const_str_plain_byte_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_byte_str_str_plain_char_tuple, 2, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    const_tuple_2c68ef61e5dc2884fad85ffd401114cc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_2c68ef61e5dc2884fad85ffd401114cc_tuple, 0, const_str_plain_BIG5_CHAR_TO_FREQ_ORDER ); Py_INCREF( const_str_plain_BIG5_CHAR_TO_FREQ_ORDER );
    PyTuple_SET_ITEM( const_tuple_2c68ef61e5dc2884fad85ffd401114cc_tuple, 1, const_str_plain_BIG5_TABLE_SIZE ); Py_INCREF( const_str_plain_BIG5_TABLE_SIZE );
    PyTuple_SET_ITEM( const_tuple_2c68ef61e5dc2884fad85ffd401114cc_tuple, 2, const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO ); Py_INCREF( const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO );
    const_int_pos_188 = PyLong_FromUnsignedLong( 188ul );
    const_tuple_40f541a6360b19c8ae5fafb7c9a30e12_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_40f541a6360b19c8ae5fafb7c9a30e12_tuple, 0, const_str_plain_JIS_CHAR_TO_FREQ_ORDER ); Py_INCREF( const_str_plain_JIS_CHAR_TO_FREQ_ORDER );
    PyTuple_SET_ITEM( const_tuple_40f541a6360b19c8ae5fafb7c9a30e12_tuple, 1, const_str_plain_JIS_TABLE_SIZE ); Py_INCREF( const_str_plain_JIS_TABLE_SIZE );
    PyTuple_SET_ITEM( const_tuple_40f541a6360b19c8ae5fafb7c9a30e12_tuple, 2, const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO ); Py_INCREF( const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO );
    const_int_pos_176 = PyLong_FromUnsignedLong( 176ul );
    const_tuple_109d3d8eea16a531737ebea337292b06_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_109d3d8eea16a531737ebea337292b06_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_109d3d8eea16a531737ebea337292b06_tuple, 1, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyTuple_SET_ITEM( const_tuple_109d3d8eea16a531737ebea337292b06_tuple, 2, const_str_plain_char_len ); Py_INCREF( const_str_plain_char_len );
    PyTuple_SET_ITEM( const_tuple_109d3d8eea16a531737ebea337292b06_tuple, 3, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_int_pos_157 = PyLong_FromUnsignedLong( 157ul );
    const_str_digest_6f8abe0474c7b3b273bc6ad987b6ff03 = UNSTREAM_STRING( &constant_bin[ 91217 ], 33, 0 );
    const_tuple_01f58a979a99e9cbe21eb132fe05ec46_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_01f58a979a99e9cbe21eb132fe05ec46_tuple, 0, const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER ); Py_INCREF( const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER );
    PyTuple_SET_ITEM( const_tuple_01f58a979a99e9cbe21eb132fe05ec46_tuple, 1, const_str_plain_EUCTW_TABLE_SIZE ); Py_INCREF( const_str_plain_EUCTW_TABLE_SIZE );
    PyTuple_SET_ITEM( const_tuple_01f58a979a99e9cbe21eb132fe05ec46_tuple, 2, const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO ); Py_INCREF( const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO );
    const_str_digest_9844569e795b340eed68b81fd3b524ba = UNSTREAM_STRING( &constant_bin[ 91250 ], 35, 0 );
    const_str_digest_182c8028d6867148d466cd9f5989f54d = UNSTREAM_STRING( &constant_bin[ 91285 ], 40, 0 );
    const_int_pos_160 = PyLong_FromUnsignedLong( 160ul );
    const_str_digest_965a1de71dde3a9de125babcdcb6ce42 = UNSTREAM_STRING( &constant_bin[ 91325 ], 33, 0 );
    const_str_digest_18bd7897b8a9a45bd57f09ae98a036cf = UNSTREAM_STRING( &constant_bin[ 91358 ], 34, 0 );
    const_str_digest_4c1d467419a5f93fd349b85f711b4c11 = UNSTREAM_STRING( &constant_bin[ 91392 ], 34, 0 );
    const_str_digest_02376e9c59619f5ed39e6532d21fefdb = UNSTREAM_STRING( &constant_bin[ 91426 ], 31, 0 );
    const_str_digest_fadfdc835d733f1692a74b5240f4d260 = UNSTREAM_STRING( &constant_bin[ 91457 ], 35, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$chardistribution( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c198620ab583de2b69053c8c0162f733;
static PyCodeObject *codeobj_1218109a2700180b78fb8ccbb755a6d1;
static PyCodeObject *codeobj_abb5785cf0708ba1a3304e5197197aa8;
static PyCodeObject *codeobj_e813eac04ffa8994f700a46e23cbc182;
static PyCodeObject *codeobj_da9c4ef4ae866e3a413066584c63de13;
static PyCodeObject *codeobj_a3c8d8a971b49d548f67df9bf55971b0;
static PyCodeObject *codeobj_e25bbaa35ab82f1966dca1aab93e18a9;
static PyCodeObject *codeobj_e69e4fa526df0768daa030da0a834e56;
static PyCodeObject *codeobj_cae8db970c8a7a057ceb25398bae3ab3;
static PyCodeObject *codeobj_01489fc457c3b0634ce950fd01bd043a;
static PyCodeObject *codeobj_9f011b1a516123a223db9750b5178342;
static PyCodeObject *codeobj_ae7721d03b59946f2c3a9e2c291eea5c;
static PyCodeObject *codeobj_17e5ce4ae664008994ec5dce923d8f8c;
static PyCodeObject *codeobj_c0783bdbef11d03ac994bbfed665cbb2;
static PyCodeObject *codeobj_b2e750291da9a683c351b202e52edb96;
static PyCodeObject *codeobj_f042abccfcd2a94e6ed06fa21909d8f4;
static PyCodeObject *codeobj_ce66d89ae7d049957511ac24612a808c;
static PyCodeObject *codeobj_457821c82351773738d9f1eeeedf73f9;
static PyCodeObject *codeobj_3bd08f2fd27557d1bc600ef27ad814bb;
static PyCodeObject *codeobj_d7ce9dc01ea744fd8231b1a2982e9fea;
static PyCodeObject *codeobj_92c3ef4e66c4c68c6e9e3a9911e58b2f;
static PyCodeObject *codeobj_52c2fd0817e4ea44d949be726014b6f3;
static PyCodeObject *codeobj_d8874489fec9df72b1bc559f09c1b7e4;
static PyCodeObject *codeobj_24de92eb4b9decac2c6cdfc037343040;
static PyCodeObject *codeobj_0d066e45d65c93ba84c0ddf229709711;
static PyCodeObject *codeobj_59c68d8246864c4d5517992de76d19e8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_fc8702d49daeda02fda707f5feeee25f;
    codeobj_c198620ab583de2b69053c8c0162f733 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6f8abe0474c7b3b273bc6ad987b6ff03, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1218109a2700180b78fb8ccbb755a6d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Big5DistributionAnalysis, 170, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_abb5785cf0708ba1a3304e5197197aa8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CharDistributionAnalysis, 40, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e813eac04ffa8994f700a46e23cbc182 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EUCJPDistributionAnalysis, 217, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_da9c4ef4ae866e3a413066584c63de13 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EUCKRDistributionAnalysis, 132, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a3c8d8a971b49d548f67df9bf55971b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EUCTWDistributionAnalysis, 113, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e25bbaa35ab82f1966dca1aab93e18a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GB2312DistributionAnalysis, 151, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e69e4fa526df0768daa030da0a834e56 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SJISDistributionAnalysis, 192, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_cae8db970c8a7a057ceb25398bae3ab3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 46, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_01489fc457c3b0634ce950fd01bd043a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 114, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9f011b1a516123a223db9750b5178342 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 133, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ae7721d03b59946f2c3a9e2c291eea5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 152, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_17e5ce4ae664008994ec5dce923d8f8c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 171, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_c0783bdbef11d03ac994bbfed665cbb2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 193, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b2e750291da9a683c351b202e52edb96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 218, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_f042abccfcd2a94e6ed06fa21909d8f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_feed, 70, const_tuple_109d3d8eea16a531737ebea337292b06_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce66d89ae7d049957511ac24612a808c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_confidence, 84, const_tuple_str_plain_self_str_plain_r_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_457821c82351773738d9f1eeeedf73f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 105, const_tuple_str_plain_self_str_plain_byte_str_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3bd08f2fd27557d1bc600ef27ad814bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 120, const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d7ce9dc01ea744fd8231b1a2982e9fea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 139, const_tuple_str_plain_self_str_plain_byte_str_str_plain_first_char_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_92c3ef4e66c4c68c6e9e3a9911e58b2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 158, const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_52c2fd0817e4ea44d949be726014b6f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 177, const_tuple_13cfd01c70fa2b4cb40c6ceaa84f0956_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8874489fec9df72b1bc559f09c1b7e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 199, const_tuple_19016e41ec0ac0340ad49c20f2c96918_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24de92eb4b9decac2c6cdfc037343040 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_order, 224, const_tuple_str_plain_self_str_plain_byte_str_str_plain_char_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0d066e45d65c93ba84c0ddf229709711 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_got_enough_data, 100, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59c68d8246864c4d5517992de76d19e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset, 61, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_10_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_12_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_13___init__(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_14_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_16_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_17___init__(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_18_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_2_reset(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_3_feed(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_4_get_confidence(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_5_got_enough_data(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_6_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_8_get_order(  );


static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_9___init__(  );


// The module function definitions.
static PyObject *impl_chardet$chardistribution$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cae8db970c8a7a057ceb25398bae3ab3 = NULL;

    struct Nuitka_FrameObject *frame_cae8db970c8a7a057ceb25398bae3ab3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cae8db970c8a7a057ceb25398bae3ab3, codeobj_cae8db970c8a7a057ceb25398bae3ab3, module_chardet$chardistribution, sizeof(void *) );
    frame_cae8db970c8a7a057ceb25398bae3ab3 = cache_frame_cae8db970c8a7a057ceb25398bae3ab3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cae8db970c8a7a057ceb25398bae3ab3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cae8db970c8a7a057ceb25398bae3ab3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
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

        exception_lineno = 55;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__done, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__total_chars, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
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

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__freq_chars, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_self;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_cae8db970c8a7a057ceb25398bae3ab3->m_frame.f_lineno = 59;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reset );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cae8db970c8a7a057ceb25398bae3ab3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cae8db970c8a7a057ceb25398bae3ab3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cae8db970c8a7a057ceb25398bae3ab3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cae8db970c8a7a057ceb25398bae3ab3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cae8db970c8a7a057ceb25398bae3ab3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cae8db970c8a7a057ceb25398bae3ab3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_cae8db970c8a7a057ceb25398bae3ab3 == cache_frame_cae8db970c8a7a057ceb25398bae3ab3 )
    {
        Py_DECREF( frame_cae8db970c8a7a057ceb25398bae3ab3 );
    }
    cache_frame_cae8db970c8a7a057ceb25398bae3ab3 = NULL;

    assertFrameObject( frame_cae8db970c8a7a057ceb25398bae3ab3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_1___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_2_reset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_59c68d8246864c4d5517992de76d19e8 = NULL;

    struct Nuitka_FrameObject *frame_59c68d8246864c4d5517992de76d19e8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59c68d8246864c4d5517992de76d19e8, codeobj_59c68d8246864c4d5517992de76d19e8, module_chardet$chardistribution, sizeof(void *) );
    frame_59c68d8246864c4d5517992de76d19e8 = cache_frame_59c68d8246864c4d5517992de76d19e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59c68d8246864c4d5517992de76d19e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59c68d8246864c4d5517992de76d19e8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__done, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

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

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__total_chars, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__freq_chars, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59c68d8246864c4d5517992de76d19e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59c68d8246864c4d5517992de76d19e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59c68d8246864c4d5517992de76d19e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59c68d8246864c4d5517992de76d19e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59c68d8246864c4d5517992de76d19e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59c68d8246864c4d5517992de76d19e8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_59c68d8246864c4d5517992de76d19e8 == cache_frame_59c68d8246864c4d5517992de76d19e8 )
    {
        Py_DECREF( frame_59c68d8246864c4d5517992de76d19e8 );
    }
    cache_frame_59c68d8246864c4d5517992de76d19e8 = NULL;

    assertFrameObject( frame_59c68d8246864c4d5517992de76d19e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_2_reset );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_2_reset );
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


static PyObject *impl_chardet$chardistribution$$$function_3_feed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_char = python_pars[ 1 ];
    PyObject *par_char_len = python_pars[ 2 ];
    PyObject *var_order = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_f042abccfcd2a94e6ed06fa21909d8f4 = NULL;

    struct Nuitka_FrameObject *frame_f042abccfcd2a94e6ed06fa21909d8f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f042abccfcd2a94e6ed06fa21909d8f4, codeobj_f042abccfcd2a94e6ed06fa21909d8f4, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f042abccfcd2a94e6ed06fa21909d8f4 = cache_frame_f042abccfcd2a94e6ed06fa21909d8f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f042abccfcd2a94e6ed06fa21909d8f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f042abccfcd2a94e6ed06fa21909d8f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_char_len;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooo";
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
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_order );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_char;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_f042abccfcd2a94e6ed06fa21909d8f4->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_2 = const_int_neg_1;
    assert( var_order == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_order = tmp_assign_source_2;

    branch_end_1:;
    tmp_compare_left_2 = var_order;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "oooo";
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__total_chars );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_1__start == NULL );
    tmp_inplace_assign_attr_1__start = tmp_assign_source_3;

    // Tried code:
    tmp_left_name_1 = tmp_inplace_assign_attr_1__start;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_inplace_assign_attr_1__end == NULL );
    tmp_inplace_assign_attr_1__end = tmp_assign_source_4;

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

        exception_lineno = 78;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__total_chars, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooo";
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

    tmp_compare_left_3 = var_order;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "order" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooo";
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

        exception_lineno = 80;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__table_size );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_4 = const_int_pos_512;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__char_to_freq_order );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_order;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "order" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__freq_chars );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_attr_2__start == NULL );
    tmp_inplace_assign_attr_2__start = tmp_assign_source_5;

    // Tried code:
    tmp_left_name_2 = tmp_inplace_assign_attr_2__start;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    assert( tmp_inplace_assign_attr_2__end == NULL );
    tmp_inplace_assign_attr_2__end = tmp_assign_source_6;

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

        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__freq_chars, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    branch_no_4:;
    branch_no_3:;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f042abccfcd2a94e6ed06fa21909d8f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f042abccfcd2a94e6ed06fa21909d8f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f042abccfcd2a94e6ed06fa21909d8f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f042abccfcd2a94e6ed06fa21909d8f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f042abccfcd2a94e6ed06fa21909d8f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f042abccfcd2a94e6ed06fa21909d8f4,
        type_description_1,
        par_self,
        par_char,
        par_char_len,
        var_order
    );


    // Release cached frame.
    if ( frame_f042abccfcd2a94e6ed06fa21909d8f4 == cache_frame_f042abccfcd2a94e6ed06fa21909d8f4 )
    {
        Py_DECREF( frame_f042abccfcd2a94e6ed06fa21909d8f4 );
    }
    cache_frame_f042abccfcd2a94e6ed06fa21909d8f4 = NULL;

    assertFrameObject( frame_f042abccfcd2a94e6ed06fa21909d8f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_3_feed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_char );
    par_char = NULL;

    Py_XDECREF( par_char_len );
    par_char_len = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

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

    Py_XDECREF( par_char );
    par_char = NULL;

    Py_XDECREF( par_char_len );
    par_char_len = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_3_feed );
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


static PyObject *impl_chardet$chardistribution$$$function_4_get_confidence( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_r = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    static struct Nuitka_FrameObject *cache_frame_ce66d89ae7d049957511ac24612a808c = NULL;

    struct Nuitka_FrameObject *frame_ce66d89ae7d049957511ac24612a808c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce66d89ae7d049957511ac24612a808c, codeobj_ce66d89ae7d049957511ac24612a808c, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_ce66d89ae7d049957511ac24612a808c = cache_frame_ce66d89ae7d049957511ac24612a808c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce66d89ae7d049957511ac24612a808c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce66d89ae7d049957511ac24612a808c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__total_chars );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_or_left_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 88;
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__freq_chars );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oo";
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

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MINIMUM_DATA_THRESHOLD );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 88;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oo";
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

        exception_lineno = 88;
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
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SURE_NO );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__total_chars );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__freq_chars );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
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
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__freq_chars );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__total_chars );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__freq_chars );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_typical_distribution_ratio );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 93;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_1;

    tmp_compare_left_2 = var_r;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SURE_YES );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = var_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    branch_no_2:;
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_SURE_YES );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce66d89ae7d049957511ac24612a808c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce66d89ae7d049957511ac24612a808c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce66d89ae7d049957511ac24612a808c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce66d89ae7d049957511ac24612a808c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce66d89ae7d049957511ac24612a808c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce66d89ae7d049957511ac24612a808c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce66d89ae7d049957511ac24612a808c,
        type_description_1,
        par_self,
        var_r
    );


    // Release cached frame.
    if ( frame_ce66d89ae7d049957511ac24612a808c == cache_frame_ce66d89ae7d049957511ac24612a808c )
    {
        Py_DECREF( frame_ce66d89ae7d049957511ac24612a808c );
    }
    cache_frame_ce66d89ae7d049957511ac24612a808c = NULL;

    assertFrameObject( frame_ce66d89ae7d049957511ac24612a808c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_4_get_confidence );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

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

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_4_get_confidence );
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


static PyObject *impl_chardet$chardistribution$$$function_5_got_enough_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_0d066e45d65c93ba84c0ddf229709711 = NULL;

    struct Nuitka_FrameObject *frame_0d066e45d65c93ba84c0ddf229709711;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d066e45d65c93ba84c0ddf229709711, codeobj_0d066e45d65c93ba84c0ddf229709711, module_chardet$chardistribution, sizeof(void *) );
    frame_0d066e45d65c93ba84c0ddf229709711 = cache_frame_0d066e45d65c93ba84c0ddf229709711;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d066e45d65c93ba84c0ddf229709711 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d066e45d65c93ba84c0ddf229709711 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__total_chars );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ENOUGH_DATA_THRESHOLD );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d066e45d65c93ba84c0ddf229709711 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d066e45d65c93ba84c0ddf229709711 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d066e45d65c93ba84c0ddf229709711 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d066e45d65c93ba84c0ddf229709711, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d066e45d65c93ba84c0ddf229709711->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d066e45d65c93ba84c0ddf229709711, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d066e45d65c93ba84c0ddf229709711,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0d066e45d65c93ba84c0ddf229709711 == cache_frame_0d066e45d65c93ba84c0ddf229709711 )
    {
        Py_DECREF( frame_0d066e45d65c93ba84c0ddf229709711 );
    }
    cache_frame_0d066e45d65c93ba84c0ddf229709711 = NULL;

    assertFrameObject( frame_0d066e45d65c93ba84c0ddf229709711 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_5_got_enough_data );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_5_got_enough_data );
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


static PyObject *impl_chardet$chardistribution$$$function_6_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_6_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_6_get_order );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_chardet$chardistribution$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_01489fc457c3b0634ce950fd01bd043a = NULL;

    struct Nuitka_FrameObject *frame_01489fc457c3b0634ce950fd01bd043a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_01489fc457c3b0634ce950fd01bd043a, codeobj_01489fc457c3b0634ce950fd01bd043a, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_01489fc457c3b0634ce950fd01bd043a = cache_frame_01489fc457c3b0634ce950fd01bd043a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_01489fc457c3b0634ce950fd01bd043a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_01489fc457c3b0634ce950fd01bd043a ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTWDistributionAnalysis );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCTWDistributionAnalysis );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCTWDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
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


        exception_lineno = 115;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_01489fc457c3b0634ce950fd01bd043a->m_frame.f_lineno = 115;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCTW_CHAR_TO_FREQ_ORDER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oN";
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

        exception_lineno = 116;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTW_TABLE_SIZE );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCTW_TABLE_SIZE );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCTW_TABLE_SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oN";
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

        exception_lineno = 117;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCTW_TYPICAL_DISTRIBUTION_RATIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "oN";
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

        exception_lineno = 118;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01489fc457c3b0634ce950fd01bd043a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_01489fc457c3b0634ce950fd01bd043a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01489fc457c3b0634ce950fd01bd043a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01489fc457c3b0634ce950fd01bd043a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01489fc457c3b0634ce950fd01bd043a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_01489fc457c3b0634ce950fd01bd043a,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_01489fc457c3b0634ce950fd01bd043a == cache_frame_01489fc457c3b0634ce950fd01bd043a )
    {
        Py_DECREF( frame_01489fc457c3b0634ce950fd01bd043a );
    }
    cache_frame_01489fc457c3b0634ce950fd01bd043a = NULL;

    assertFrameObject( frame_01489fc457c3b0634ce950fd01bd043a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_7___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_7___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_8_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_first_char = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_3bd08f2fd27557d1bc600ef27ad814bb = NULL;

    struct Nuitka_FrameObject *frame_3bd08f2fd27557d1bc600ef27ad814bb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3bd08f2fd27557d1bc600ef27ad814bb, codeobj_3bd08f2fd27557d1bc600ef27ad814bb, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3bd08f2fd27557d1bc600ef27ad814bb = cache_frame_3bd08f2fd27557d1bc600ef27ad814bb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3bd08f2fd27557d1bc600ef27ad814bb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3bd08f2fd27557d1bc600ef27ad814bb ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_first_char == NULL );
    var_first_char = tmp_assign_source_1;

    tmp_compare_left_1 = var_first_char;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_196;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
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
    tmp_left_name_3 = const_int_pos_94;
    tmp_left_name_4 = var_first_char;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_196;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_161;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bd08f2fd27557d1bc600ef27ad814bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bd08f2fd27557d1bc600ef27ad814bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3bd08f2fd27557d1bc600ef27ad814bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3bd08f2fd27557d1bc600ef27ad814bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3bd08f2fd27557d1bc600ef27ad814bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3bd08f2fd27557d1bc600ef27ad814bb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3bd08f2fd27557d1bc600ef27ad814bb,
        type_description_1,
        par_self,
        par_byte_str,
        var_first_char
    );


    // Release cached frame.
    if ( frame_3bd08f2fd27557d1bc600ef27ad814bb == cache_frame_3bd08f2fd27557d1bc600ef27ad814bb )
    {
        Py_DECREF( frame_3bd08f2fd27557d1bc600ef27ad814bb );
    }
    cache_frame_3bd08f2fd27557d1bc600ef27ad814bb = NULL;

    assertFrameObject( frame_3bd08f2fd27557d1bc600ef27ad814bb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_8_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

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

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_8_get_order );
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


static PyObject *impl_chardet$chardistribution$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9f011b1a516123a223db9750b5178342 = NULL;

    struct Nuitka_FrameObject *frame_9f011b1a516123a223db9750b5178342;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f011b1a516123a223db9750b5178342, codeobj_9f011b1a516123a223db9750b5178342, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_9f011b1a516123a223db9750b5178342 = cache_frame_9f011b1a516123a223db9750b5178342;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f011b1a516123a223db9750b5178342 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f011b1a516123a223db9750b5178342 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKRDistributionAnalysis );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCKRDistributionAnalysis );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCKRDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
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


        exception_lineno = 134;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_9f011b1a516123a223db9750b5178342->m_frame.f_lineno = 134;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCKR_CHAR_TO_FREQ_ORDER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "oN";
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

        exception_lineno = 135;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKR_TABLE_SIZE );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCKR_TABLE_SIZE );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCKR_TABLE_SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oN";
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

        exception_lineno = 136;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCKR_TYPICAL_DISTRIBUTION_RATIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oN";
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

        exception_lineno = 137;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f011b1a516123a223db9750b5178342 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f011b1a516123a223db9750b5178342 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f011b1a516123a223db9750b5178342, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f011b1a516123a223db9750b5178342->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f011b1a516123a223db9750b5178342, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f011b1a516123a223db9750b5178342,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_9f011b1a516123a223db9750b5178342 == cache_frame_9f011b1a516123a223db9750b5178342 )
    {
        Py_DECREF( frame_9f011b1a516123a223db9750b5178342 );
    }
    cache_frame_9f011b1a516123a223db9750b5178342 = NULL;

    assertFrameObject( frame_9f011b1a516123a223db9750b5178342 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_9___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_9___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_10_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_first_char = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_d7ce9dc01ea744fd8231b1a2982e9fea = NULL;

    struct Nuitka_FrameObject *frame_d7ce9dc01ea744fd8231b1a2982e9fea;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7ce9dc01ea744fd8231b1a2982e9fea, codeobj_d7ce9dc01ea744fd8231b1a2982e9fea, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7ce9dc01ea744fd8231b1a2982e9fea = cache_frame_d7ce9dc01ea744fd8231b1a2982e9fea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7ce9dc01ea744fd8231b1a2982e9fea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7ce9dc01ea744fd8231b1a2982e9fea ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_first_char == NULL );
    var_first_char = tmp_assign_source_1;

    tmp_compare_left_1 = var_first_char;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_176;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooo";
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
    tmp_left_name_3 = const_int_pos_94;
    tmp_left_name_4 = var_first_char;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_176;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_161;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7ce9dc01ea744fd8231b1a2982e9fea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7ce9dc01ea744fd8231b1a2982e9fea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7ce9dc01ea744fd8231b1a2982e9fea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7ce9dc01ea744fd8231b1a2982e9fea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7ce9dc01ea744fd8231b1a2982e9fea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7ce9dc01ea744fd8231b1a2982e9fea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7ce9dc01ea744fd8231b1a2982e9fea,
        type_description_1,
        par_self,
        par_byte_str,
        var_first_char
    );


    // Release cached frame.
    if ( frame_d7ce9dc01ea744fd8231b1a2982e9fea == cache_frame_d7ce9dc01ea744fd8231b1a2982e9fea )
    {
        Py_DECREF( frame_d7ce9dc01ea744fd8231b1a2982e9fea );
    }
    cache_frame_d7ce9dc01ea744fd8231b1a2982e9fea = NULL;

    assertFrameObject( frame_d7ce9dc01ea744fd8231b1a2982e9fea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_10_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

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

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_10_get_order );
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


static PyObject *impl_chardet$chardistribution$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ae7721d03b59946f2c3a9e2c291eea5c = NULL;

    struct Nuitka_FrameObject *frame_ae7721d03b59946f2c3a9e2c291eea5c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae7721d03b59946f2c3a9e2c291eea5c, codeobj_ae7721d03b59946f2c3a9e2c291eea5c, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_ae7721d03b59946f2c3a9e2c291eea5c = cache_frame_ae7721d03b59946f2c3a9e2c291eea5c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae7721d03b59946f2c3a9e2c291eea5c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae7721d03b59946f2c3a9e2c291eea5c ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312DistributionAnalysis );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GB2312DistributionAnalysis );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GB2312DistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
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


        exception_lineno = 153;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_ae7721d03b59946f2c3a9e2c291eea5c->m_frame.f_lineno = 153;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312_CHAR_TO_FREQ_ORDER );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GB2312_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GB2312_CHAR_TO_FREQ_ORDER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "oN";
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

        exception_lineno = 154;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312_TABLE_SIZE );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GB2312_TABLE_SIZE );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GB2312_TABLE_SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "oN";
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

        exception_lineno = 155;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GB2312_TYPICAL_DISTRIBUTION_RATIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oN";
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

        exception_lineno = 156;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae7721d03b59946f2c3a9e2c291eea5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae7721d03b59946f2c3a9e2c291eea5c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae7721d03b59946f2c3a9e2c291eea5c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae7721d03b59946f2c3a9e2c291eea5c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae7721d03b59946f2c3a9e2c291eea5c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae7721d03b59946f2c3a9e2c291eea5c,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_ae7721d03b59946f2c3a9e2c291eea5c == cache_frame_ae7721d03b59946f2c3a9e2c291eea5c )
    {
        Py_DECREF( frame_ae7721d03b59946f2c3a9e2c291eea5c );
    }
    cache_frame_ae7721d03b59946f2c3a9e2c291eea5c = NULL;

    assertFrameObject( frame_ae7721d03b59946f2c3a9e2c291eea5c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_11___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_11___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_12_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_first_char = NULL;
    PyObject *var_second_char = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_92c3ef4e66c4c68c6e9e3a9911e58b2f = NULL;

    struct Nuitka_FrameObject *frame_92c3ef4e66c4c68c6e9e3a9911e58b2f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92c3ef4e66c4c68c6e9e3a9911e58b2f, codeobj_92c3ef4e66c4c68c6e9e3a9911e58b2f, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_92c3ef4e66c4c68c6e9e3a9911e58b2f = cache_frame_92c3ef4e66c4c68c6e9e3a9911e58b2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_subscribed_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 163;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
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
        exception_lineno = 163;
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
        exception_lineno = 163;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    assert( var_first_char == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_first_char = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_second_char == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_second_char = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compexpr_left_1 = var_first_char;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_176;
    tmp_and_left_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 164;
        type_description_1 = "oooo";
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
    tmp_compexpr_left_2 = var_second_char;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_int_pos_161;
    tmp_and_right_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "oooo";
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

        exception_lineno = 164;
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
    tmp_left_name_3 = const_int_pos_94;
    tmp_left_name_4 = var_first_char;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_176;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = var_second_char;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_161;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92c3ef4e66c4c68c6e9e3a9911e58b2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92c3ef4e66c4c68c6e9e3a9911e58b2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92c3ef4e66c4c68c6e9e3a9911e58b2f,
        type_description_1,
        par_self,
        par_byte_str,
        var_first_char,
        var_second_char
    );


    // Release cached frame.
    if ( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f == cache_frame_92c3ef4e66c4c68c6e9e3a9911e58b2f )
    {
        Py_DECREF( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f );
    }
    cache_frame_92c3ef4e66c4c68c6e9e3a9911e58b2f = NULL;

    assertFrameObject( frame_92c3ef4e66c4c68c6e9e3a9911e58b2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_12_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_second_char );
    var_second_char = NULL;

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

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_second_char );
    var_second_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_12_get_order );
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


static PyObject *impl_chardet$chardistribution$$$function_13___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_17e5ce4ae664008994ec5dce923d8f8c = NULL;

    struct Nuitka_FrameObject *frame_17e5ce4ae664008994ec5dce923d8f8c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17e5ce4ae664008994ec5dce923d8f8c, codeobj_17e5ce4ae664008994ec5dce923d8f8c, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_17e5ce4ae664008994ec5dce923d8f8c = cache_frame_17e5ce4ae664008994ec5dce923d8f8c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17e5ce4ae664008994ec5dce923d8f8c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17e5ce4ae664008994ec5dce923d8f8c ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_Big5DistributionAnalysis );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Big5DistributionAnalysis );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Big5DistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
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


        exception_lineno = 172;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_17e5ce4ae664008994ec5dce923d8f8c->m_frame.f_lineno = 172;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_BIG5_CHAR_TO_FREQ_ORDER );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BIG5_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BIG5_CHAR_TO_FREQ_ORDER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oN";
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

        exception_lineno = 173;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_BIG5_TABLE_SIZE );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BIG5_TABLE_SIZE );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BIG5_TABLE_SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oN";
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

        exception_lineno = 174;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BIG5_TYPICAL_DISTRIBUTION_RATIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oN";
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

        exception_lineno = 175;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17e5ce4ae664008994ec5dce923d8f8c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17e5ce4ae664008994ec5dce923d8f8c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17e5ce4ae664008994ec5dce923d8f8c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17e5ce4ae664008994ec5dce923d8f8c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17e5ce4ae664008994ec5dce923d8f8c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17e5ce4ae664008994ec5dce923d8f8c,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_17e5ce4ae664008994ec5dce923d8f8c == cache_frame_17e5ce4ae664008994ec5dce923d8f8c )
    {
        Py_DECREF( frame_17e5ce4ae664008994ec5dce923d8f8c );
    }
    cache_frame_17e5ce4ae664008994ec5dce923d8f8c = NULL;

    assertFrameObject( frame_17e5ce4ae664008994ec5dce923d8f8c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_13___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_13___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_14_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_first_char = NULL;
    PyObject *var_second_char = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_52c2fd0817e4ea44d949be726014b6f3 = NULL;

    struct Nuitka_FrameObject *frame_52c2fd0817e4ea44d949be726014b6f3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_52c2fd0817e4ea44d949be726014b6f3, codeobj_52c2fd0817e4ea44d949be726014b6f3, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_52c2fd0817e4ea44d949be726014b6f3 = cache_frame_52c2fd0817e4ea44d949be726014b6f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52c2fd0817e4ea44d949be726014b6f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52c2fd0817e4ea44d949be726014b6f3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_subscribed_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 182;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
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
        exception_lineno = 182;
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
        exception_lineno = 182;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    assert( var_first_char == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_first_char = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_second_char == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_second_char = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_first_char;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_pos_164;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "oooo";
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
    tmp_compare_left_2 = var_second_char;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_pos_161;
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_4 = const_int_pos_157;
    tmp_left_name_5 = var_first_char;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_164;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = var_second_char;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_161;
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_63;
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_8 = const_int_pos_157;
    tmp_left_name_9 = var_first_char;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_int_pos_164;
    tmp_right_name_6 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = var_second_char;

    if ( tmp_right_name_8 == NULL )
    {
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = const_int_pos_64;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52c2fd0817e4ea44d949be726014b6f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_52c2fd0817e4ea44d949be726014b6f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52c2fd0817e4ea44d949be726014b6f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52c2fd0817e4ea44d949be726014b6f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52c2fd0817e4ea44d949be726014b6f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52c2fd0817e4ea44d949be726014b6f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52c2fd0817e4ea44d949be726014b6f3,
        type_description_1,
        par_self,
        par_byte_str,
        var_first_char,
        var_second_char
    );


    // Release cached frame.
    if ( frame_52c2fd0817e4ea44d949be726014b6f3 == cache_frame_52c2fd0817e4ea44d949be726014b6f3 )
    {
        Py_DECREF( frame_52c2fd0817e4ea44d949be726014b6f3 );
    }
    cache_frame_52c2fd0817e4ea44d949be726014b6f3 = NULL;

    assertFrameObject( frame_52c2fd0817e4ea44d949be726014b6f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_14_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_second_char );
    var_second_char = NULL;

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

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_second_char );
    var_second_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_14_get_order );
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


static PyObject *impl_chardet$chardistribution$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c0783bdbef11d03ac994bbfed665cbb2 = NULL;

    struct Nuitka_FrameObject *frame_c0783bdbef11d03ac994bbfed665cbb2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c0783bdbef11d03ac994bbfed665cbb2, codeobj_c0783bdbef11d03ac994bbfed665cbb2, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_c0783bdbef11d03ac994bbfed665cbb2 = cache_frame_c0783bdbef11d03ac994bbfed665cbb2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c0783bdbef11d03ac994bbfed665cbb2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c0783bdbef11d03ac994bbfed665cbb2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_SJISDistributionAnalysis );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SJISDistributionAnalysis );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SJISDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
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


        exception_lineno = 194;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_c0783bdbef11d03ac994bbfed665cbb2->m_frame.f_lineno = 194;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_CHAR_TO_FREQ_ORDER );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JIS_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JIS_CHAR_TO_FREQ_ORDER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oN";
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

        exception_lineno = 195;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_TABLE_SIZE );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JIS_TABLE_SIZE );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JIS_TABLE_SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oN";
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

        exception_lineno = 196;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JIS_TYPICAL_DISTRIBUTION_RATIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        type_description_1 = "oN";
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

        exception_lineno = 197;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0783bdbef11d03ac994bbfed665cbb2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0783bdbef11d03ac994bbfed665cbb2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0783bdbef11d03ac994bbfed665cbb2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0783bdbef11d03ac994bbfed665cbb2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0783bdbef11d03ac994bbfed665cbb2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c0783bdbef11d03ac994bbfed665cbb2,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_c0783bdbef11d03ac994bbfed665cbb2 == cache_frame_c0783bdbef11d03ac994bbfed665cbb2 )
    {
        Py_DECREF( frame_c0783bdbef11d03ac994bbfed665cbb2 );
    }
    cache_frame_c0783bdbef11d03ac994bbfed665cbb2 = NULL;

    assertFrameObject( frame_c0783bdbef11d03ac994bbfed665cbb2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_15___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_15___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_16_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_first_char = NULL;
    PyObject *var_second_char = NULL;
    PyObject *var_order = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_d8874489fec9df72b1bc559f09c1b7e4 = NULL;

    struct Nuitka_FrameObject *frame_d8874489fec9df72b1bc559f09c1b7e4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8874489fec9df72b1bc559f09c1b7e4, codeobj_d8874489fec9df72b1bc559f09c1b7e4, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8874489fec9df72b1bc559f09c1b7e4 = cache_frame_d8874489fec9df72b1bc559f09c1b7e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8874489fec9df72b1bc559f09c1b7e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8874489fec9df72b1bc559f09c1b7e4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_subscribed_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 204;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooo";
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


        type_description_1 = "ooooo";
        exception_lineno = 204;
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


        type_description_1 = "ooooo";
        exception_lineno = 204;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    assert( var_first_char == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_first_char = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_second_char == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_second_char = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compexpr_left_1 = var_first_char;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_129;
    tmp_and_left_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 205;
        type_description_1 = "ooooo";
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
    tmp_compexpr_left_2 = var_first_char;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_int_pos_159;
    tmp_and_right_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooo";
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

        exception_lineno = 205;
        type_description_1 = "ooooo";
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
    tmp_left_name_1 = const_int_pos_188;
    tmp_left_name_2 = var_first_char;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_129;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_6;

    goto branch_end_1;
    branch_no_1:;
    tmp_compexpr_left_3 = var_first_char;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_3 = const_int_pos_224;
    tmp_and_left_value_2 = RICH_COMPARE_GE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 207;
        type_description_1 = "ooooo";
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
    tmp_compexpr_left_4 = var_first_char;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = const_int_pos_239;
    tmp_and_right_value_2 = RICH_COMPARE_LE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ooooo";
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
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 207;
        type_description_1 = "ooooo";
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
    tmp_left_name_3 = const_int_pos_188;
    tmp_left_name_5 = var_first_char;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_224;
    tmp_left_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_31;
    tmp_right_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_7;

    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;
    tmp_left_name_7 = var_order;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "order" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = var_second_char;

    if ( tmp_right_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_6 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = const_int_pos_64;
    tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_order;
        var_order = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_second_char;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "second_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_pos_127;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "ooooo";
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
    tmp_assign_source_9 = const_int_neg_1;
    {
        PyObject *old = var_order;
        var_order = tmp_assign_source_9;
        Py_INCREF( var_order );
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_order;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "order" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8874489fec9df72b1bc559f09c1b7e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8874489fec9df72b1bc559f09c1b7e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8874489fec9df72b1bc559f09c1b7e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8874489fec9df72b1bc559f09c1b7e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8874489fec9df72b1bc559f09c1b7e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8874489fec9df72b1bc559f09c1b7e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8874489fec9df72b1bc559f09c1b7e4,
        type_description_1,
        par_self,
        par_byte_str,
        var_first_char,
        var_second_char,
        var_order
    );


    // Release cached frame.
    if ( frame_d8874489fec9df72b1bc559f09c1b7e4 == cache_frame_d8874489fec9df72b1bc559f09c1b7e4 )
    {
        Py_DECREF( frame_d8874489fec9df72b1bc559f09c1b7e4 );
    }
    cache_frame_d8874489fec9df72b1bc559f09c1b7e4 = NULL;

    assertFrameObject( frame_d8874489fec9df72b1bc559f09c1b7e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_16_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_second_char );
    var_second_char = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

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

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_first_char );
    var_first_char = NULL;

    Py_XDECREF( var_second_char );
    var_second_char = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_16_get_order );
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


static PyObject *impl_chardet$chardistribution$$$function_17___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b2e750291da9a683c351b202e52edb96 = NULL;

    struct Nuitka_FrameObject *frame_b2e750291da9a683c351b202e52edb96;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2e750291da9a683c351b202e52edb96, codeobj_b2e750291da9a683c351b202e52edb96, module_chardet$chardistribution, sizeof(void *)+sizeof(void *) );
    frame_b2e750291da9a683c351b202e52edb96 = cache_frame_b2e750291da9a683c351b202e52edb96;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2e750291da9a683c351b202e52edb96 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2e750291da9a683c351b202e52edb96 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCJPDistributionAnalysis );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EUCJPDistributionAnalysis );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EUCJPDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
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


        exception_lineno = 219;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    frame_b2e750291da9a683c351b202e52edb96->m_frame.f_lineno = 219;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_CHAR_TO_FREQ_ORDER );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JIS_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JIS_CHAR_TO_FREQ_ORDER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "oN";
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

        exception_lineno = 220;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__char_to_freq_order, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_TABLE_SIZE );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JIS_TABLE_SIZE );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JIS_TABLE_SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        type_description_1 = "oN";
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

        exception_lineno = 221;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__table_size, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "JIS_TYPICAL_DISTRIBUTION_RATIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        type_description_1 = "oN";
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

        exception_lineno = 222;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_typical_distribution_ratio, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2e750291da9a683c351b202e52edb96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2e750291da9a683c351b202e52edb96 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2e750291da9a683c351b202e52edb96, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2e750291da9a683c351b202e52edb96->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2e750291da9a683c351b202e52edb96, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2e750291da9a683c351b202e52edb96,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_b2e750291da9a683c351b202e52edb96 == cache_frame_b2e750291da9a683c351b202e52edb96 )
    {
        Py_DECREF( frame_b2e750291da9a683c351b202e52edb96 );
    }
    cache_frame_b2e750291da9a683c351b202e52edb96 = NULL;

    assertFrameObject( frame_b2e750291da9a683c351b202e52edb96 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_17___init__ );
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
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_17___init__ );
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


static PyObject *impl_chardet$chardistribution$$$function_18_get_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_byte_str = python_pars[ 1 ];
    PyObject *var_char = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_24de92eb4b9decac2c6cdfc037343040 = NULL;

    struct Nuitka_FrameObject *frame_24de92eb4b9decac2c6cdfc037343040;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24de92eb4b9decac2c6cdfc037343040, codeobj_24de92eb4b9decac2c6cdfc037343040, module_chardet$chardistribution, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24de92eb4b9decac2c6cdfc037343040 = cache_frame_24de92eb4b9decac2c6cdfc037343040;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24de92eb4b9decac2c6cdfc037343040 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24de92eb4b9decac2c6cdfc037343040 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_byte_str;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_char == NULL );
    var_char = tmp_assign_source_1;

    tmp_compare_left_1 = var_char;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_160;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "ooo";
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
    tmp_left_name_3 = const_int_pos_94;
    tmp_left_name_4 = var_char;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_int_pos_161;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_byte_str;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "byte_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_161;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_int_neg_1;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24de92eb4b9decac2c6cdfc037343040 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_24de92eb4b9decac2c6cdfc037343040 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24de92eb4b9decac2c6cdfc037343040 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24de92eb4b9decac2c6cdfc037343040, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24de92eb4b9decac2c6cdfc037343040->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24de92eb4b9decac2c6cdfc037343040, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24de92eb4b9decac2c6cdfc037343040,
        type_description_1,
        par_self,
        par_byte_str,
        var_char
    );


    // Release cached frame.
    if ( frame_24de92eb4b9decac2c6cdfc037343040 == cache_frame_24de92eb4b9decac2c6cdfc037343040 )
    {
        Py_DECREF( frame_24de92eb4b9decac2c6cdfc037343040 );
    }
    cache_frame_24de92eb4b9decac2c6cdfc037343040 = NULL;

    assertFrameObject( frame_24de92eb4b9decac2c6cdfc037343040 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_18_get_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

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

    Py_XDECREF( par_byte_str );
    par_byte_str = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution$$$function_18_get_order );
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



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_10_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_10_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_d62d03eae1ce02964d633e8daf5aada2,
#endif
        codeobj_d7ce9dc01ea744fd8231b1a2982e9fea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_9844569e795b340eed68b81fd3b524ba,
#endif
        codeobj_ae7721d03b59946f2c3a9e2c291eea5c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_12_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_12_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_3ad6227e1f46805bdafb128602de1c1d,
#endif
        codeobj_92c3ef4e66c4c68c6e9e3a9911e58b2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_13___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_a2aab74e252bbabee9c1f1f67a3c7c19,
#endif
        codeobj_17e5ce4ae664008994ec5dce923d8f8c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_14_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_14_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_18bd7897b8a9a45bd57f09ae98a036cf,
#endif
        codeobj_52c2fd0817e4ea44d949be726014b6f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_927c2db4fca30038b7313c6f508a2595,
#endif
        codeobj_c0783bdbef11d03ac994bbfed665cbb2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_16_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_16_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_efc3b77b2936864df090d58ad85eb204,
#endif
        codeobj_d8874489fec9df72b1bc559f09c1b7e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_17___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_47013b3ed66904a628c31a1d049eb414,
#endif
        codeobj_b2e750291da9a683c351b202e52edb96,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_18_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_18_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_bb3e1dbd35ea4e41d7f68a3343dd645c,
#endif
        codeobj_24de92eb4b9decac2c6cdfc037343040,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_965a1de71dde3a9de125babcdcb6ce42,
#endif
        codeobj_cae8db970c8a7a057ceb25398bae3ab3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_2_reset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_bb65158be48501225be1c7d5ef385879,
#endif
        codeobj_59c68d8246864c4d5517992de76d19e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        const_str_digest_02376e9c59619f5ed39e6532d21fefdb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_3_feed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_3_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        const_str_digest_b45ccb621b613c3bd1bd5e9ddee93753,
#endif
        codeobj_f042abccfcd2a94e6ed06fa21909d8f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        const_str_digest_c124b8f3d4c1a6f372e2c66d94126c7d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_4_get_confidence(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_4_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        const_str_digest_716723dbf2ba7947e4e1aeecc1269f9e,
#endif
        codeobj_ce66d89ae7d049957511ac24612a808c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        const_str_digest_529a81d15d3f33e1350b614fbf3e8f3b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_5_got_enough_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_5_got_enough_data,
        const_str_plain_got_enough_data,
#if PYTHON_VERSION >= 300
        const_str_digest_182c8028d6867148d466cd9f5989f54d,
#endif
        codeobj_0d066e45d65c93ba84c0ddf229709711,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_6_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_6_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_4c1d467419a5f93fd349b85f711b4c11,
#endif
        codeobj_457821c82351773738d9f1eeeedf73f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_7___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_13e0f5606131955110270bdcb9b5449e,
#endif
        codeobj_01489fc457c3b0634ce950fd01bd043a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_8_get_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_8_get_order,
        const_str_plain_get_order,
#if PYTHON_VERSION >= 300
        const_str_digest_fadfdc835d733f1692a74b5240f4d260,
#endif
        codeobj_3bd08f2fd27557d1bc600ef27ad814bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$chardistribution$$$function_9___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$chardistribution$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_c9a93c3344ac4d2f1db773b18f41d871,
#endif
        codeobj_9f011b1a516123a223db9750b5178342,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$chardistribution,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$chardistribution =
{
    PyModuleDef_HEAD_INIT,
    "chardet.chardistribution",   /* m_name */
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

MOD_INIT_DECL( chardet$chardistribution )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$chardistribution );
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
    puts("chardet.chardistribution: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.chardistribution: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.chardistribution: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$chardistribution" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$chardistribution = Py_InitModule4(
        "chardet.chardistribution",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$chardistribution = PyModule_Create( &mdef_chardet$chardistribution );
#endif

    moduledict_chardet$chardistribution = MODULE_DICT( module_chardet$chardistribution );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$chardistribution,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$chardistribution,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$chardistribution,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$chardistribution );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e994e8f263cc5d3eff75df26359082cd, module_chardet$chardistribution );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_class_creation_1__bases = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
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
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
    int tmp_cmp_NotEq_5;
    int tmp_cmp_NotEq_6;
    int tmp_cmp_NotEq_7;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    static struct Nuitka_FrameObject *cache_frame_abb5785cf0708ba1a3304e5197197aa8_2 = NULL;

    struct Nuitka_FrameObject *frame_abb5785cf0708ba1a3304e5197197aa8_2;

    static struct Nuitka_FrameObject *cache_frame_a3c8d8a971b49d548f67df9bf55971b0_3 = NULL;

    struct Nuitka_FrameObject *frame_a3c8d8a971b49d548f67df9bf55971b0_3;

    static struct Nuitka_FrameObject *cache_frame_da9c4ef4ae866e3a413066584c63de13_4 = NULL;

    struct Nuitka_FrameObject *frame_da9c4ef4ae866e3a413066584c63de13_4;

    static struct Nuitka_FrameObject *cache_frame_e25bbaa35ab82f1966dca1aab93e18a9_5 = NULL;

    struct Nuitka_FrameObject *frame_e25bbaa35ab82f1966dca1aab93e18a9_5;

    static struct Nuitka_FrameObject *cache_frame_1218109a2700180b78fb8ccbb755a6d1_6 = NULL;

    struct Nuitka_FrameObject *frame_1218109a2700180b78fb8ccbb755a6d1_6;

    static struct Nuitka_FrameObject *cache_frame_e69e4fa526df0768daa030da0a834e56_7 = NULL;

    struct Nuitka_FrameObject *frame_e69e4fa526df0768daa030da0a834e56_7;

    static struct Nuitka_FrameObject *cache_frame_e813eac04ffa8994f700a46e23cbc182_8 = NULL;

    struct Nuitka_FrameObject *frame_e813eac04ffa8994f700a46e23cbc182_8;

    struct Nuitka_FrameObject *frame_c198620ab583de2b69053c8c0162f733;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    PyObject *locals_chardet$chardistribution_170 = NULL;
    PyObject *locals_chardet$chardistribution_113 = NULL;
    PyObject *locals_chardet$chardistribution_192 = NULL;
    PyObject *locals_chardet$chardistribution_151 = NULL;
    PyObject *locals_chardet$chardistribution_40 = NULL;
    PyObject *locals_chardet$chardistribution_217 = NULL;
    PyObject *locals_chardet$chardistribution_132 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_fc8702d49daeda02fda707f5feeee25f;
    UPDATE_STRING_DICT0( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_c198620ab583de2b69053c8c0162f733 = MAKE_MODULE_FRAME( codeobj_c198620ab583de2b69053c8c0162f733, module_chardet$chardistribution );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c198620ab583de2b69053c8c0162f733 );
    assert( Py_REFCNT( frame_c198620ab583de2b69053c8c0162f733 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_euctwfreq;
    tmp_globals_name_1 = (PyObject *)moduledict_chardet$chardistribution;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_01f58a979a99e9cbe21eb132fe05ec46_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 28;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_EUCTW_TABLE_SIZE,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_EUCTW_TABLE_SIZE );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTW_TABLE_SIZE, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_7 );
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

    tmp_name_name_2 = const_str_plain_euckrfreq;
    tmp_globals_name_2 = (PyObject *)moduledict_chardet$chardistribution;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_7c159ba16de36ddcef81c66827dc7390_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 30;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKR_CHAR_TO_FREQ_ORDER, tmp_assign_source_9 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_EUCKR_TABLE_SIZE,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_EUCKR_TABLE_SIZE );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKR_TABLE_SIZE, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKR_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_11 );
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

    tmp_name_name_3 = const_str_plain_gb2312freq;
    tmp_globals_name_3 = (PyObject *)moduledict_chardet$chardistribution;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_4d9e8fef00a7b75f1eadd90f086569e9_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 32;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_GB2312_CHAR_TO_FREQ_ORDER,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_GB2312_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312_CHAR_TO_FREQ_ORDER, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_GB2312_TABLE_SIZE,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_GB2312_TABLE_SIZE );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312_TABLE_SIZE, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_15 );
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

    tmp_name_name_4 = const_str_plain_big5freq;
    tmp_globals_name_4 = (PyObject *)moduledict_chardet$chardistribution;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_2c68ef61e5dc2884fad85ffd401114cc_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 34;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_10 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_BIG5_CHAR_TO_FREQ_ORDER,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_BIG5_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_BIG5_CHAR_TO_FREQ_ORDER, tmp_assign_source_17 );
    tmp_import_name_from_11 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_BIG5_TABLE_SIZE,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_BIG5_TABLE_SIZE );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_BIG5_TABLE_SIZE, tmp_assign_source_18 );
    tmp_import_name_from_12 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_BIG5_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_19 );
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

    tmp_name_name_5 = const_str_plain_jisfreq;
    tmp_globals_name_5 = (PyObject *)moduledict_chardet$chardistribution;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_40f541a6360b19c8ae5fafb7c9a30e12_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 36;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    if ( PyModule_Check( tmp_import_name_from_13 ) )
    {
       tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_13,
            (PyObject *)MODULE_DICT(tmp_import_name_from_13),
            const_str_plain_JIS_CHAR_TO_FREQ_ORDER,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_JIS_CHAR_TO_FREQ_ORDER );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_CHAR_TO_FREQ_ORDER, tmp_assign_source_21 );
    tmp_import_name_from_14 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    if ( PyModule_Check( tmp_import_name_from_14 ) )
    {
       tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_14,
            (PyObject *)MODULE_DICT(tmp_import_name_from_14),
            const_str_plain_JIS_TABLE_SIZE,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_JIS_TABLE_SIZE );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_TABLE_SIZE, tmp_assign_source_22 );
    tmp_import_name_from_15 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    if ( PyModule_Check( tmp_import_name_from_15 ) )
    {
       tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_15,
            (PyObject *)MODULE_DICT(tmp_import_name_from_15),
            const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO );
    }

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_JIS_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_23 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Tried code:
    tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_assign_source_24 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_24;

    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_25;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
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


        exception_lineno = 40;

        goto try_except_handler_6;
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


        exception_lineno = 40;

        goto try_except_handler_6;
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


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_26;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
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


        exception_lineno = 40;

        goto try_except_handler_6;
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


        exception_lineno = 40;

        goto try_except_handler_6;
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


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    tmp_tuple_element_1 = const_str_plain_CharDistributionAnalysis;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 40;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_27;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_40 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
    }
    tmp_dictset_value = const_str_plain_CharDistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_abb5785cf0708ba1a3304e5197197aa8_2, codeobj_abb5785cf0708ba1a3304e5197197aa8, module_chardet$chardistribution, sizeof(void *) );
    frame_abb5785cf0708ba1a3304e5197197aa8_2 = cache_frame_abb5785cf0708ba1a3304e5197197aa8_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abb5785cf0708ba1a3304e5197197aa8_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abb5785cf0708ba1a3304e5197197aa8_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = const_int_pos_1024;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_ENOUGH_DATA_THRESHOLD, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = const_float_0_99;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_SURE_YES, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = const_float_0_01;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_SURE_NO, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = const_int_pos_3;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_MINIMUM_DATA_THRESHOLD, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_2_reset(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_reset, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_3_feed(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_feed, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_4_get_confidence(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_get_confidence, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_5_got_enough_data(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_got_enough_data, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_6_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb5785cf0708ba1a3304e5197197aa8_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb5785cf0708ba1a3304e5197197aa8_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abb5785cf0708ba1a3304e5197197aa8_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abb5785cf0708ba1a3304e5197197aa8_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abb5785cf0708ba1a3304e5197197aa8_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abb5785cf0708ba1a3304e5197197aa8_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_abb5785cf0708ba1a3304e5197197aa8_2 == cache_frame_abb5785cf0708ba1a3304e5197197aa8_2 )
    {
        Py_DECREF( frame_abb5785cf0708ba1a3304e5197197aa8_2 );
    }
    cache_frame_abb5785cf0708ba1a3304e5197197aa8_2 = NULL;

    assertFrameObject( frame_abb5785cf0708ba1a3304e5197197aa8_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_8;
    skip_nested_handling_1:;
    tmp_compare_left_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_type_object_tuple;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_40, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
    }
    branch_no_2:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_2 = const_str_plain_CharDistributionAnalysis;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_chardet$chardistribution_40;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 40;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_29;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    Py_DECREF( locals_chardet$chardistribution_40 );
    locals_chardet$chardistribution_40 = NULL;
    goto try_return_handler_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_chardet$chardistribution_40 );
    locals_chardet$chardistribution_40 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 40;
    goto try_except_handler_6;
    outline_result_1:;
    tmp_assign_source_28 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis, tmp_assign_source_28 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;

        goto try_except_handler_9;
    }

    tmp_assign_source_30 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_30, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases_orig == NULL );
    tmp_class_creation_2__bases_orig = tmp_assign_source_30;

    tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg1_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_assign_source_31 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_31;

    tmp_assign_source_32 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_32;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
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


        exception_lineno = 113;

        goto try_except_handler_9;
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


        exception_lineno = 113;

        goto try_except_handler_9;
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


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_33 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_33;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
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


        exception_lineno = 113;

        goto try_except_handler_9;
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


        exception_lineno = 113;

        goto try_except_handler_9;
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


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    tmp_tuple_element_4 = const_str_plain_EUCTWDistributionAnalysis;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 113;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_9;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_34 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_34;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_113 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_113, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_11;
    }
    tmp_dictset_value = const_str_plain_EUCTWDistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_113, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_11;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_a3c8d8a971b49d548f67df9bf55971b0_3, codeobj_a3c8d8a971b49d548f67df9bf55971b0, module_chardet$chardistribution, sizeof(void *) );
    frame_a3c8d8a971b49d548f67df9bf55971b0_3 = cache_frame_a3c8d8a971b49d548f67df9bf55971b0_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a3c8d8a971b49d548f67df9bf55971b0_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a3c8d8a971b49d548f67df9bf55971b0_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_7___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_113, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_8_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_113, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3c8d8a971b49d548f67df9bf55971b0_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3c8d8a971b49d548f67df9bf55971b0_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3c8d8a971b49d548f67df9bf55971b0_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3c8d8a971b49d548f67df9bf55971b0_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3c8d8a971b49d548f67df9bf55971b0_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a3c8d8a971b49d548f67df9bf55971b0_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_a3c8d8a971b49d548f67df9bf55971b0_3 == cache_frame_a3c8d8a971b49d548f67df9bf55971b0_3 )
    {
        Py_DECREF( frame_a3c8d8a971b49d548f67df9bf55971b0_3 );
    }
    cache_frame_a3c8d8a971b49d548f67df9bf55971b0_3 = NULL;

    assertFrameObject( frame_a3c8d8a971b49d548f67df9bf55971b0_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_11;
    skip_nested_handling_2:;
    tmp_compare_left_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = tmp_class_creation_2__bases_orig;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_11;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_113, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_11;
    }
    branch_no_4:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_5 = const_str_plain_EUCTWDistributionAnalysis;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_chardet$chardistribution_113;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 113;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;

        goto try_except_handler_11;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_36;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    Py_DECREF( locals_chardet$chardistribution_113 );
    locals_chardet$chardistribution_113 = NULL;
    goto try_return_handler_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_chardet$chardistribution_113 );
    locals_chardet$chardistribution_113 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 113;
    goto try_except_handler_9;
    outline_result_2:;
    tmp_assign_source_35 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCTWDistributionAnalysis, tmp_assign_source_35 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );
    }

    if ( tmp_tuple_element_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;

        goto try_except_handler_12;
    }

    tmp_assign_source_37 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases_orig == NULL );
    tmp_class_creation_3__bases_orig = tmp_assign_source_37;

    tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg1_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_assign_source_38 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_38;

    tmp_assign_source_39 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
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


        exception_lineno = 132;

        goto try_except_handler_12;
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


        exception_lineno = 132;

        goto try_except_handler_12;
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


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_40;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
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


        exception_lineno = 132;

        goto try_except_handler_12;
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


        exception_lineno = 132;

        goto try_except_handler_12;
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


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    tmp_tuple_element_7 = const_str_plain_EUCKRDistributionAnalysis;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 132;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_12;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_41 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_41;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_132 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_132, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
    }
    tmp_dictset_value = const_str_plain_EUCKRDistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_132, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_da9c4ef4ae866e3a413066584c63de13_4, codeobj_da9c4ef4ae866e3a413066584c63de13, module_chardet$chardistribution, sizeof(void *) );
    frame_da9c4ef4ae866e3a413066584c63de13_4 = cache_frame_da9c4ef4ae866e3a413066584c63de13_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da9c4ef4ae866e3a413066584c63de13_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da9c4ef4ae866e3a413066584c63de13_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_9___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_132, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_10_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_132, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da9c4ef4ae866e3a413066584c63de13_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da9c4ef4ae866e3a413066584c63de13_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da9c4ef4ae866e3a413066584c63de13_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da9c4ef4ae866e3a413066584c63de13_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da9c4ef4ae866e3a413066584c63de13_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da9c4ef4ae866e3a413066584c63de13_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_da9c4ef4ae866e3a413066584c63de13_4 == cache_frame_da9c4ef4ae866e3a413066584c63de13_4 )
    {
        Py_DECREF( frame_da9c4ef4ae866e3a413066584c63de13_4 );
    }
    cache_frame_da9c4ef4ae866e3a413066584c63de13_4 = NULL;

    assertFrameObject( frame_da9c4ef4ae866e3a413066584c63de13_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_14;
    skip_nested_handling_3:;
    tmp_compare_left_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = tmp_class_creation_3__bases_orig;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_132, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
    }
    branch_no_6:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_8 = const_str_plain_EUCKRDistributionAnalysis;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_chardet$chardistribution_132;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 132;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_14;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_43;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_chardet$chardistribution_132 );
    locals_chardet$chardistribution_132 = NULL;
    goto try_return_handler_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_chardet$chardistribution_132 );
    locals_chardet$chardistribution_132 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 132;
    goto try_except_handler_12;
    outline_result_3:;
    tmp_assign_source_42 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCKRDistributionAnalysis, tmp_assign_source_42 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );
    }

    if ( tmp_tuple_element_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;

        goto try_except_handler_15;
    }

    tmp_assign_source_44 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases_orig == NULL );
    tmp_class_creation_4__bases_orig = tmp_assign_source_44;

    tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg1_4 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
        tmp_assign_source_45 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_45;

    tmp_assign_source_46 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_46;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
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


        exception_lineno = 151;

        goto try_except_handler_15;
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


        exception_lineno = 151;

        goto try_except_handler_15;
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


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_47 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_47;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
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


        exception_lineno = 151;

        goto try_except_handler_15;
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


        exception_lineno = 151;

        goto try_except_handler_15;
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


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    tmp_tuple_element_10 = const_str_plain_GB2312DistributionAnalysis;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 151;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_15;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_48 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_48;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_151 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_151, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_17;
    }
    tmp_dictset_value = const_str_plain_GB2312DistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_151, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_17;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_e25bbaa35ab82f1966dca1aab93e18a9_5, codeobj_e25bbaa35ab82f1966dca1aab93e18a9, module_chardet$chardistribution, sizeof(void *) );
    frame_e25bbaa35ab82f1966dca1aab93e18a9_5 = cache_frame_e25bbaa35ab82f1966dca1aab93e18a9_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_11___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_151, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_12_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_151, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e25bbaa35ab82f1966dca1aab93e18a9_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e25bbaa35ab82f1966dca1aab93e18a9_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e25bbaa35ab82f1966dca1aab93e18a9_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e25bbaa35ab82f1966dca1aab93e18a9_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 == cache_frame_e25bbaa35ab82f1966dca1aab93e18a9_5 )
    {
        Py_DECREF( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 );
    }
    cache_frame_e25bbaa35ab82f1966dca1aab93e18a9_5 = NULL;

    assertFrameObject( frame_e25bbaa35ab82f1966dca1aab93e18a9_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_17;
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


        exception_lineno = 151;

        goto try_except_handler_17;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_151, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_17;
    }
    branch_no_8:;
    tmp_called_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_11 = const_str_plain_GB2312DistributionAnalysis;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_chardet$chardistribution_151;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 151;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto try_except_handler_17;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_50;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    Py_DECREF( locals_chardet$chardistribution_151 );
    locals_chardet$chardistribution_151 = NULL;
    goto try_return_handler_16;
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

    Py_DECREF( locals_chardet$chardistribution_151 );
    locals_chardet$chardistribution_151 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 151;
    goto try_except_handler_15;
    outline_result_4:;
    tmp_assign_source_49 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_GB2312DistributionAnalysis, tmp_assign_source_49 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );
    }

    if ( tmp_tuple_element_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;

        goto try_except_handler_18;
    }

    tmp_assign_source_51 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_5__bases_orig == NULL );
    tmp_class_creation_5__bases_orig = tmp_assign_source_51;

    tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_5 );
    Py_INCREF( tmp_dircall_arg1_5 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
        tmp_assign_source_52 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_52;

    tmp_assign_source_53 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_53;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
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


        exception_lineno = 170;

        goto try_except_handler_18;
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


        exception_lineno = 170;

        goto try_except_handler_18;
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


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_54 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_54;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
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


        exception_lineno = 170;

        goto try_except_handler_18;
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


        exception_lineno = 170;

        goto try_except_handler_18;
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


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    tmp_tuple_element_13 = const_str_plain_Big5DistributionAnalysis;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 170;
    tmp_assign_source_55 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_18;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_55 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_55;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_170 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_170, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_20;
    }
    tmp_dictset_value = const_str_plain_Big5DistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_170, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_20;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_1218109a2700180b78fb8ccbb755a6d1_6, codeobj_1218109a2700180b78fb8ccbb755a6d1, module_chardet$chardistribution, sizeof(void *) );
    frame_1218109a2700180b78fb8ccbb755a6d1_6 = cache_frame_1218109a2700180b78fb8ccbb755a6d1_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1218109a2700180b78fb8ccbb755a6d1_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1218109a2700180b78fb8ccbb755a6d1_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_13___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_170, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_14_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_170, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1218109a2700180b78fb8ccbb755a6d1_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1218109a2700180b78fb8ccbb755a6d1_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1218109a2700180b78fb8ccbb755a6d1_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1218109a2700180b78fb8ccbb755a6d1_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1218109a2700180b78fb8ccbb755a6d1_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1218109a2700180b78fb8ccbb755a6d1_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_1218109a2700180b78fb8ccbb755a6d1_6 == cache_frame_1218109a2700180b78fb8ccbb755a6d1_6 )
    {
        Py_DECREF( frame_1218109a2700180b78fb8ccbb755a6d1_6 );
    }
    cache_frame_1218109a2700180b78fb8ccbb755a6d1_6 = NULL;

    assertFrameObject( frame_1218109a2700180b78fb8ccbb755a6d1_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_20;
    skip_nested_handling_5:;
    tmp_compare_left_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = tmp_class_creation_5__bases_orig;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_NotEq_5 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_20;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_170, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_20;
    }
    branch_no_10:;
    tmp_called_name_10 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_tuple_element_14 = const_str_plain_Big5DistributionAnalysis;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_14 );
    tmp_tuple_element_14 = locals_chardet$chardistribution_170;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_14 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 170;
    tmp_assign_source_57 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_20;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_57;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_20;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    Py_DECREF( locals_chardet$chardistribution_170 );
    locals_chardet$chardistribution_170 = NULL;
    goto try_return_handler_19;
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

    Py_DECREF( locals_chardet$chardistribution_170 );
    locals_chardet$chardistribution_170 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_19;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 170;
    goto try_except_handler_18;
    outline_result_5:;
    tmp_assign_source_56 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_Big5DistributionAnalysis, tmp_assign_source_56 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
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
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
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
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );
    }

    if ( tmp_tuple_element_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;

        goto try_except_handler_21;
    }

    tmp_assign_source_58 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_58, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_6__bases_orig == NULL );
    tmp_class_creation_6__bases_orig = tmp_assign_source_58;

    tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_6 );
    Py_INCREF( tmp_dircall_arg1_6 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
        tmp_assign_source_59 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_59;

    tmp_assign_source_60 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_60;

    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
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


        exception_lineno = 192;

        goto try_except_handler_21;
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


        exception_lineno = 192;

        goto try_except_handler_21;
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


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_61 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_61;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
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


        exception_lineno = 192;

        goto try_except_handler_21;
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


        exception_lineno = 192;

        goto try_except_handler_21;
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


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    tmp_tuple_element_16 = const_str_plain_SJISDistributionAnalysis;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_16 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_16 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 192;
    tmp_assign_source_62 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_21;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_62 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_62;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_192 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_192, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_23;
    }
    tmp_dictset_value = const_str_plain_SJISDistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_192, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_23;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_e69e4fa526df0768daa030da0a834e56_7, codeobj_e69e4fa526df0768daa030da0a834e56, module_chardet$chardistribution, sizeof(void *) );
    frame_e69e4fa526df0768daa030da0a834e56_7 = cache_frame_e69e4fa526df0768daa030da0a834e56_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e69e4fa526df0768daa030da0a834e56_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e69e4fa526df0768daa030da0a834e56_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_15___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_192, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_16_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_192, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e69e4fa526df0768daa030da0a834e56_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e69e4fa526df0768daa030da0a834e56_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e69e4fa526df0768daa030da0a834e56_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e69e4fa526df0768daa030da0a834e56_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e69e4fa526df0768daa030da0a834e56_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e69e4fa526df0768daa030da0a834e56_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_e69e4fa526df0768daa030da0a834e56_7 == cache_frame_e69e4fa526df0768daa030da0a834e56_7 )
    {
        Py_DECREF( frame_e69e4fa526df0768daa030da0a834e56_7 );
    }
    cache_frame_e69e4fa526df0768daa030da0a834e56_7 = NULL;

    assertFrameObject( frame_e69e4fa526df0768daa030da0a834e56_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_23;
    skip_nested_handling_6:;
    tmp_compare_left_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = tmp_class_creation_6__bases_orig;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_NotEq_6 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_23;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_192, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_23;
    }
    branch_no_12:;
    tmp_called_name_12 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_17 = const_str_plain_SJISDistributionAnalysis;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals_chardet$chardistribution_192;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_17 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 192;
    tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_23;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_64;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    Py_DECREF( locals_chardet$chardistribution_192 );
    locals_chardet$chardistribution_192 = NULL;
    goto try_return_handler_22;
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

    Py_DECREF( locals_chardet$chardistribution_192 );
    locals_chardet$chardistribution_192 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_22;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 192;
    goto try_except_handler_21;
    outline_result_6:;
    tmp_assign_source_63 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_SJISDistributionAnalysis, tmp_assign_source_63 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
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
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
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
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CharDistributionAnalysis );
    }

    if ( tmp_tuple_element_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CharDistributionAnalysis" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;

        goto try_except_handler_24;
    }

    tmp_assign_source_65 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_65, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_7__bases_orig == NULL );
    tmp_class_creation_7__bases_orig = tmp_assign_source_65;

    tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_dircall_arg1_7 );
    Py_INCREF( tmp_dircall_arg1_7 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
        tmp_assign_source_66 = impl___internal__$$$function_1__mro_entries_conversion( dir_call_args );
    }
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_66;

    tmp_assign_source_67 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_67;

    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
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


        exception_lineno = 217;

        goto try_except_handler_24;
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


        exception_lineno = 217;

        goto try_except_handler_24;
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


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_68 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_68;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    tmp_cond_value_21 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
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


        exception_lineno = 217;

        goto try_except_handler_24;
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


        exception_lineno = 217;

        goto try_except_handler_24;
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


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    tmp_tuple_element_19 = const_str_plain_EUCJPDistributionAnalysis;
    tmp_args_name_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_19 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 217;
    tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_24;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_69 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_69;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_chardet$chardistribution_217 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_e994e8f263cc5d3eff75df26359082cd;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_217, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_26;
    }
    tmp_dictset_value = const_str_plain_EUCJPDistributionAnalysis;
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_217, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_26;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_e813eac04ffa8994f700a46e23cbc182_8, codeobj_e813eac04ffa8994f700a46e23cbc182, module_chardet$chardistribution, sizeof(void *) );
    frame_e813eac04ffa8994f700a46e23cbc182_8 = cache_frame_e813eac04ffa8994f700a46e23cbc182_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e813eac04ffa8994f700a46e23cbc182_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e813eac04ffa8994f700a46e23cbc182_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_17___init__(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_217, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_dictset_value = MAKE_FUNCTION_chardet$chardistribution$$$function_18_get_order(  );
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_217, const_str_plain_get_order, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e813eac04ffa8994f700a46e23cbc182_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e813eac04ffa8994f700a46e23cbc182_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e813eac04ffa8994f700a46e23cbc182_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e813eac04ffa8994f700a46e23cbc182_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e813eac04ffa8994f700a46e23cbc182_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e813eac04ffa8994f700a46e23cbc182_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_e813eac04ffa8994f700a46e23cbc182_8 == cache_frame_e813eac04ffa8994f700a46e23cbc182_8 )
    {
        Py_DECREF( frame_e813eac04ffa8994f700a46e23cbc182_8 );
    }
    cache_frame_e813eac04ffa8994f700a46e23cbc182_8 = NULL;

    assertFrameObject( frame_e813eac04ffa8994f700a46e23cbc182_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_26;
    skip_nested_handling_7:;
    tmp_compare_left_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = tmp_class_creation_7__bases_orig;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_NotEq_7 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_26;
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
    tmp_res = PyObject_SetItem( locals_chardet$chardistribution_217, const_str_plain___orig_bases__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_26;
    }
    branch_no_14:;
    tmp_called_name_14 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_tuple_element_20 = const_str_plain_EUCJPDistributionAnalysis;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_20 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = locals_chardet$chardistribution_217;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_20 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_c198620ab583de2b69053c8c0162f733->m_frame.f_lineno = 217;
    tmp_assign_source_71 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;

        goto try_except_handler_26;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_71;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    Py_DECREF( locals_chardet$chardistribution_217 );
    locals_chardet$chardistribution_217 = NULL;
    goto try_return_handler_25;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_chardet$chardistribution_217 );
    locals_chardet$chardistribution_217 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_25;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( chardet$chardistribution );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 217;
    goto try_except_handler_24;
    outline_result_7:;
    tmp_assign_source_70 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_chardet$chardistribution, (Nuitka_StringObject *)const_str_plain_EUCJPDistributionAnalysis, tmp_assign_source_70 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
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
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c198620ab583de2b69053c8c0162f733 );
#endif
    popFrameStack();

    assertFrameObject( frame_c198620ab583de2b69053c8c0162f733 );

    goto frame_no_exception_8;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c198620ab583de2b69053c8c0162f733 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c198620ab583de2b69053c8c0162f733, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c198620ab583de2b69053c8c0162f733->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c198620ab583de2b69053c8c0162f733, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;
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


    return MOD_RETURN_VALUE( module_chardet$chardistribution );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
