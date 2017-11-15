#include "mr.4.h"


/* types declaration */

typedef struct TestStruct TestStruct;

typedef struct TestClass TestClass;

typedef struct TestClass_Dynamic TestClass_Dynamic;


/* types struct */

struct TestStruct {
  Int num;
  String* text;
  TestStruct* ts;
  Returncode (*fun)(void);
};

struct TestClass {
  Int num;
  String* text;
};

struct TestClass_Dynamic {
  Returncode (*dynamic_meth)(TestClass* self, TestClass_Dynamic* self_Dynamic);
};


/* types methods declaration */

Returncode TestStruct_set(TestStruct* self, Int x, String* s);

Returncode TestStruct_get(TestStruct* self, Int* x, String** s);

Returncode TestStruct_print(TestStruct* self);

Returncode TestClass_static_meth(TestClass* self, TestClass_Dynamic* self_Dynamic);

Returncode TestClass_dynamic_meth(TestClass* self, TestClass_Dynamic* self_Dynamic);

Returncode TestClass_print(TestClass* self, TestClass_Dynamic* self_Dynamic);


/* types global variables */

TestClass_Dynamic TestClass_dynamic = {TestClass_dynamic_meth};


/* global variables */

Int global_int;

String* global_string;


/* global functions declaration */

Returncode test_simple_function(void);

Returncode test_const_expression(Int* i, Char* c, String** s, TestStruct** t, TestClass** d, TestClass_Dynamic** d_Dynamic, Returncode (**f)(void));

Returncode test_member_expression(TestStruct* t, TestStruct** to, Int* i);

Returncode test_slice_expression(String* s, Array* arri, Array* arrs, Array* arrt, Array* arrd, Array* arrf, Char* c, Int* i, TestStruct** t, TestClass** d, TestClass_Dynamic** d_Dynamic, Returncode (**f)(void));

Returncode test_container_expression(Int x, Int y, String* s, Int* i, Bool* b);

Returncode test_variable(Int i, String* text, Array* arr);

Returncode test_complex_function(Int num, String* text, Int* out_num, String** out_text);

Returncode f_test_void(void);

Returncode f_test_params(Int x, String* s, String* o);

Returncode f_test_outs(String** s, Int* x);

Returncode f_test_int2str(Int x, String** s);

Returncode f_test_int(Int x);

Returncode f_test_int2int(Int x, Int* r);

Returncode f_test_many(Int x, Int y, Int* n, Int* m);

Returncode test_call_expression(void);

Returncode test_code_flow(Array* arr, Int* res);

Returncode test_builtins(Int i, Char c, Bool b, String* s, Array* a);


/* types methods body */

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "TestStruct.set"
Returncode TestStruct_set(TestStruct* self, Int x, String* s) {
  if (self == NULL) RAISE(184)
  self->num = x;
  if (self == NULL) RAISE(185)
  self->text = s;
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "TestStruct.get"
Returncode TestStruct_get(TestStruct* self, Int* x, String** s) {
  if (self == NULL) RAISE(192)
  *x = self->num;
  if (self == NULL) RAISE(193)
  *s = self->text;
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "TestStruct.print"
Returncode TestStruct_print(TestStruct* self) {
  if (self == NULL) RAISE(196)
  CHECK(196, Sys_println(sys, self->text) )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "TestClass.static-meth"
Returncode TestClass_static_meth(TestClass* self, TestClass_Dynamic* self_Dynamic) {
  if (self == NULL) RAISE(204)
  self->num = 3;
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "TestClass.dynamic-meth"
Returncode TestClass_dynamic_meth(TestClass* self, TestClass_Dynamic* self_Dynamic) {
  if (self == NULL) RAISE(207)
  self->num = 6;
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "TestClass.print"
Returncode TestClass_print(TestClass* self, TestClass_Dynamic* self_Dynamic) {
  if (self == NULL) RAISE(210)
  CHECK(210, Sys_println(sys, self->text) )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME


/* global functions body */

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-simple-function"
Returncode test_simple_function(void) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-const-expression"
Returncode test_const_expression(Int* i, Char* c, String** s, TestStruct** t, TestClass** d, TestClass_Dynamic** d_Dynamic, Returncode (**f)(void)) {
  String aux_String_0_Var = {0};
  String* aux_String_0 = &aux_String_0_Var;
  *i = (((((((0 + 9630) + -9630) + 07520) + -07520) + 0xfda940) + -0xfda940) + 0xFDA940) + -0xFDA940;
  *c = (((('a' + '\'') + '\n') + '\x0f') + '\xA9') + '\270';
  aux_String_0->max_length = 12;
  aux_String_0->length = 11;
  aux_String_0->values = "some string";
  *s = aux_String_0;
  *t = NULL;
  *d_Dynamic = NULL;
  *d = NULL;
  *f = NULL;
  if (*f == NULL) RAISE(43)
  CHECK(43, (*f)() )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-member-expression"
Returncode test_member_expression(TestStruct* t, TestStruct** to, Int* i) {
  if (t == NULL) RAISE(47)
  if (t->ts == NULL) RAISE(47)
  if (t->ts->ts == NULL) RAISE(47)
  if (t == NULL) RAISE(47)
  if (t->ts == NULL) RAISE(47)
  if ((*to) == NULL) RAISE(47)
  if (t == NULL) RAISE(47)
  t->num = ((*to)->num + t->ts->num) + t->ts->ts->num;
  if (t == NULL) RAISE(48)
  if ((*to) == NULL) RAISE(48)
  (*to)->num = t->num;
  if (t == NULL) RAISE(49)
  if (t->ts == NULL) RAISE(49)
  if (t->ts->ts == NULL) RAISE(49)
  t->ts->ts->num = 4;
  if (t == NULL) RAISE(50)
  t->fun = f_test_void;
  if (t == NULL) RAISE(51)
  if (t->fun == NULL) RAISE(51)
  CHECK(51, t->fun() )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-slice-expression"
Returncode test_slice_expression(String* s, Array* arri, Array* arrs, Array* arrt, Array* arrd, Array* arrf, Char* c, Int* i, TestStruct** t, TestClass** d, TestClass_Dynamic** d_Dynamic, Returncode (**f)(void)) {
  Array aux_Array_0_Var = {0};
  Array* aux_Array_0 = &aux_Array_0_Var;
  String aux_String_0_Var = {0};
  String* aux_String_0 = &aux_String_0_Var;
  String aux_String_1_Var = {0};
  String* aux_String_1 = &aux_String_1_Var;
  Array aux_Array_1_Var = {0};
  Array* aux_Array_1 = &aux_Array_1_Var;
  Array aux_Array_2_Var = {0};
  Array* aux_Array_2 = &aux_Array_2_Var;
  Array aux_Array_3_Var = {0};
  Array* aux_Array_3 = &aux_Array_3_Var;
  Array aux_Array_4_Var = {0};
  Array* aux_Array_4 = &aux_Array_4_Var;
  Array aux_Array_5_Var = {0};
  Array* aux_Array_5 = &aux_Array_5_Var;
  Array aux_Array_6_Var = {0};
  Array* aux_Array_6 = &aux_Array_6_Var;
  Array aux_Array_7_Var = {0};
  Array* aux_Array_7 = &aux_Array_7_Var;
  Array aux_Array_8_Var = {0};
  Array* aux_Array_8 = &aux_Array_8_Var;
  Array aux_Array_9_Var = {0};
  Array* aux_Array_9 = &aux_Array_9_Var;
  aux_Array_0_Var.length = 2;
  aux_Array_0_Var.values = (Byte*)((arrs)->values) + (4);
  if ((4) < 0 || (2) < 0 || (4) + (2) > (arrs)->length) RAISE(66)
  if ((4) < 0 || (4) >= (aux_Array_0)->length) RAISE(66)
  aux_String_0_Var.length = 3;
  aux_String_0_Var.max_length = aux_String_0_Var.length + 1;
  aux_String_0_Var.values = ((((String**)((aux_Array_0)->values))[4]))->values + (1);
  if ((1) < 0 || (3) < 0 || (1) + (3) > ((((String**)((aux_Array_0)->values))[4]))->length) RAISE(66)
  if ((0) < 0 || (0) >= (aux_String_0)->length) RAISE(66)
  if ((3) < 0 || (3) >= (arrs)->length) RAISE(66)
  if ((2) < 0 || (2) >= ((((String**)((arrs)->values))[3]))->length) RAISE(66)
  aux_String_1_Var.length = 7;
  aux_String_1_Var.max_length = aux_String_1_Var.length + 1;
  aux_String_1_Var.values = (s)->values + (4);
  if ((4) < 0 || (7) < 0 || (4) + (7) > (s)->length) RAISE(66)
  if ((2) < 0 || (2) >= (aux_String_1)->length) RAISE(66)
  if ((2) < 0 || (2) >= (s)->length) RAISE(66)
  *c = (((((s)->values)[2]) + (((aux_String_1)->values)[2])) + ((((((String**)((arrs)->values))[3]))->values)[2])) + (((aux_String_0)->values)[0]);
  aux_Array_1_Var.length = 4;
  aux_Array_1_Var.values = (Byte*)((arri)->values) + (2);
  if ((2) < 0 || (4) < 0 || (2) + (4) > (arri)->length) RAISE(68)
  aux_Array_2_Var.length = 2;
  aux_Array_2_Var.values = (Byte*)((aux_Array_1)->values) + (1);
  if ((1) < 0 || (2) < 0 || (1) + (2) > (aux_Array_1)->length) RAISE(68)
  if ((1) < 0 || (1) >= (aux_Array_2)->length) RAISE(68)
  aux_Array_3_Var.length = 4;
  aux_Array_3_Var.values = (Byte*)((arrt)->values) + (2);
  if ((2) < 0 || (4) < 0 || (2) + (4) > (arrt)->length) RAISE(67)
  if ((1) < 0 || (1) >= (aux_Array_3)->length) RAISE(67)
  if ((((TestStruct**)((aux_Array_3)->values))[1]) == NULL) RAISE(67)
  if ((4) < 0 || (4) >= (arrt)->length) RAISE(67)
  if ((((TestStruct**)((arrt)->values))[4]) == NULL) RAISE(67)
  if ((2) < 0 || (2) >= (arri)->length) RAISE(67)
  if ((((*i) + 3) - (((Int*)((arri)->values))[2])) < 0 || (((*i) + 3) - (((Int*)((arri)->values))[2])) >= (arri)->length) RAISE(67)
  *i = (((((Int*)((arri)->values))[((*i) + 3) - (((Int*)((arri)->values))[2])]) + (((TestStruct**)((arrt)->values))[4])->num) + (((TestStruct**)((aux_Array_3)->values))[1])->num) + (((Int*)((aux_Array_2)->values))[1]);
  aux_Array_4_Var.length = 4;
  aux_Array_4_Var.values = (Byte*)((arri)->values) + (2);
  if ((2) < 0 || (4) < 0 || (2) + (4) > (arri)->length) RAISE(69)
  if ((1) < 0 || (1) >= (aux_Array_4)->length) RAISE(69)
  aux_Array_5_Var.length = 5 * ((*i) - 1);
  aux_Array_5_Var.values = (Byte*)((arri)->values) + ((2 - (*i)) + (((Int*)((aux_Array_4)->values))[1]));
  if (((2 - (*i)) + (((Int*)((aux_Array_4)->values))[1])) < 0 || (5 * ((*i) - 1)) < 0 || ((2 - (*i)) + (((Int*)((aux_Array_4)->values))[1])) + (5 * ((*i) - 1)) > (arri)->length) RAISE(69)
  arri = aux_Array_5;
  if ((4) < 0 || (4) >= (arrs)->length) RAISE(70)
  s = ((String**)((arrs)->values))[4];
  aux_Array_6_Var.length = 7;
  aux_Array_6_Var.values = (Byte*)((arrs)->values) + (2);
  if ((2) < 0 || (7) < 0 || (2) + (7) > (arrs)->length) RAISE(71)
  arrs = aux_Array_6;
  if ((4) < 0 || (4) >= (arrt)->length) RAISE(72)
  *t = ((TestStruct**)((arrt)->values))[4];
  aux_Array_7_Var.length = 7;
  aux_Array_7_Var.values = (Byte*)((arrt)->values) + (2);
  if ((2) < 0 || (7) < 0 || (2) + (7) > (arrt)->length) RAISE(73)
  arrt = aux_Array_7;
  if ((4) < 0 || (4) >= (arrd)->length) RAISE(74)
  *d_Dynamic = &TestClass_dynamic;
  *d = ((TestClass**)((arrd)->values))[4];
  aux_Array_8_Var.length = 7;
  aux_Array_8_Var.values = (Byte*)((arrd)->values) + (2);
  if ((2) < 0 || (7) < 0 || (2) + (7) > (arrd)->length) RAISE(75)
  arrd = aux_Array_8;
  if ((4) < 0 || (4) >= (arrf)->length) RAISE(76)
  *f = ((Returncode (**)(void))((arrf)->values))[4];
  aux_Array_9_Var.length = 7;
  aux_Array_9_Var.values = (Byte*)((arrf)->values) + (2);
  if ((2) < 0 || (7) < 0 || (2) + (7) > (arrf)->length) RAISE(77)
  arrf = aux_Array_9;
  if ((4) < 0 || (4) >= (arrf)->length) RAISE(78)
  if (((Returncode (**)(void))((arrf)->values))[4] == NULL) RAISE(78)
  CHECK(78, (((Returncode (**)(void))((arrf)->values))[4])() )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-container-expression"
Returncode test_container_expression(Int x, Int y, String* s, Int* i, Bool* b) {
  *i = (- x) + (- (- (- y)));
  *b = (! (((! ((((x * 3) - 5) > (6 * y)) && ((6 * y) == 234))) && (! ((5 - x) < y))) || (! ((x == (-2 - (-4 * y))) && (((-6 > y) && (y >= 12)) && (12 == x)))))) && ((((- (2 + x)) > y) || (s != NULL)) || (! (s != NULL)));
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-variable"
Returncode test_variable(Int i, String* text, Array* arr) {
  Int x = 0;
  String* s = NULL;
  Array* a = NULL;
  TestStruct* t = NULL;
  TestClass* d = NULL;
  TestClass_Dynamic* d_Dynamic = NULL;
  TestStruct tv_Var = {0};
  TestStruct* tv = &tv_Var;
  TestClass dv_Var = {0};
  TestClass* dv = &dv_Var;
  TestClass_Dynamic* dv_Dynamic = &TestClass_dynamic;
  char sv_Values[12];
  String sv_Var = {12, 0, NULL};
  String* sv = &sv_Var;
  Returncode (*f)(Int xi, String* si, Int* xo, String** so) = NULL;
  Int ia_Values[12];
  Array ia_Var = {12, NULL};
  Array* ia = &ia_Var;
  TestStruct ta_Values[12];
  Array ta_Var = {12, NULL};
  Array* ta = &ta_Var;
  TestClass da_Values[12];
  Array da_Var = {12, NULL};
  Array* da = &da_Var;
  char sa_Chars[12 * 7];
  String sa_Values[12];
  Array sa_Var = {12, NULL};
  Array* sa = &sa_Var;
  Returncode (*fa_Values[12])(void);
  Array fa_Var = {12, NULL};
  Array* fa = &fa_Var;
  TestStruct* tn = NULL;
  TestClass* dn = NULL;
  TestClass_Dynamic* dn_Dynamic = &TestClass_dynamic;
  String* sn = NULL;
  Array* ian = NULL;
  Array* tan = NULL;
  Array* dan = NULL;
  Array* san = NULL;
  Array* sfn = NULL;
  Int ix = 0;
  String* is = NULL;
  char isv_Values[12];
  String isv_Var = {12, 0, NULL};
  String* isv = &isv_Var;
  String* isn = NULL;
  Returncode (*fi)(Int x, String** s) = NULL;
  String aux_String_0_Var = {0};
  String* aux_String_0 = &aux_String_0_Var;
  TestStruct* aux_TestStruct_0 = NULL;
  TestClass* aux_TestClass_0 = NULL;
  TestClass_Dynamic* aux_TestClass_0_Dynamic = &TestClass_dynamic;
  String* aux_String_1 = NULL;
  Array* aux_Array_0 = NULL;
  Array* aux_Array_1 = NULL;
  Array* aux_Array_2 = NULL;
  Array* aux_Array_3 = NULL;
  Array* aux_Array_4 = NULL;
  String* aux_String_2 = NULL;
  sv_Var.values = sv_Values;
  ia_Var.values = ia_Values;
  ta_Var.values = ta_Values;
  da_Var.values = da_Values;
  sa_Var.values = sa_Values;
  MR_set_var_string_array(12, 7, sa, sa_Chars);
  fa_Var.values = fa_Values;
  tn = calloc(1, sizeof(TestStruct));
  if (tn == NULL) RAISE(104)
  dn = calloc(1, sizeof(TestClass));
  if (dn == NULL) RAISE(105)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(106)
  sn = MR_new_string(((Int*)((arr)->values))[0]);
  if (sn == NULL) RAISE(106)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(107)
  ian = MR_new_array(((Int*)((arr)->values))[0], sizeof(Int));
  if (ian == NULL) RAISE(107)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(108)
  tan = MR_new_array(((Int*)((arr)->values))[0], sizeof(TestStruct));
  if (tan == NULL) RAISE(108)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(109)
  dan = MR_new_array(((Int*)((arr)->values))[0], sizeof(TestClass));
  if (dan == NULL) RAISE(109)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(110)
  if ((1) < 0 || (1) >= (arr)->length) RAISE(110)
  san = MR_new_string_array(((Int*)((arr)->values))[0], ((Int*)((arr)->values))[1]);
  if (san == NULL) RAISE(110)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(111)
  sfn = MR_new_array(((Int*)((arr)->values))[0], sizeof(Func));
  if (sfn == NULL) RAISE(111)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(112)
  ix = ((Int*)((arr)->values))[0];
  is = text;
  isv_Var.values = isv_Values;
  aux_String_0->max_length = 12;
  aux_String_0->length = 11;
  aux_String_0->values = "some string";
  CHECK(114, String_copy(isv, aux_String_0) )
  isn = MR_new_string(i);
  if (isn == NULL) RAISE(115)
  CHECK(115, String_copy(isn, text) )
  fi = f_test_int2str;
  aux_TestStruct_0 = calloc(1, sizeof(TestStruct));
  if (aux_TestStruct_0 == NULL) RAISE(117)
  CHECK(117, TestStruct_print(aux_TestStruct_0) )
  aux_TestClass_0 = calloc(1, sizeof(TestClass));
  if (aux_TestClass_0 == NULL) RAISE(118)
  CHECK(118, TestClass_print(aux_TestClass_0, aux_TestClass_0_Dynamic) )
  if ((0) < 0 || (0) >= (arr)->length) RAISE(119)
  aux_String_1 = MR_new_string(((Int*)((arr)->values))[0]);
  if (aux_String_1 == NULL) RAISE(119)
  TEST_ASSERT(119, aux_String_1 != NULL)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(120)
  aux_Array_0 = MR_new_array(((Int*)((arr)->values))[0], sizeof(Int));
  if (aux_Array_0 == NULL) RAISE(120)
  TEST_ASSERT(120, aux_Array_0 != NULL)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(121)
  aux_Array_1 = MR_new_array(((Int*)((arr)->values))[0], sizeof(TestStruct));
  if (aux_Array_1 == NULL) RAISE(121)
  TEST_ASSERT(121, aux_Array_1 != NULL)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(122)
  aux_Array_2 = MR_new_array(((Int*)((arr)->values))[0], sizeof(TestClass));
  if (aux_Array_2 == NULL) RAISE(122)
  TEST_ASSERT(122, aux_Array_2 != NULL)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(123)
  if ((1) < 0 || (1) >= (arr)->length) RAISE(123)
  aux_Array_3 = MR_new_string_array(((Int*)((arr)->values))[0], ((Int*)((arr)->values))[1]);
  if (aux_Array_3 == NULL) RAISE(123)
  TEST_ASSERT(123, aux_Array_3 != NULL)
  if ((0) < 0 || (0) >= (arr)->length) RAISE(124)
  aux_Array_4 = MR_new_array(((Int*)((arr)->values))[0], sizeof(Func));
  if (aux_Array_4 == NULL) RAISE(124)
  TEST_ASSERT(124, aux_Array_4 != NULL)
  TEST_ASSERT(125, x == 0)
  TEST_ASSERT(126, s != NULL)
  TEST_ASSERT(127, a != NULL)
  CHECK(128, TestStruct_print(t) )
  CHECK(129, TestClass_print(d, d_Dynamic) )
  TEST_ASSERT(130, f != NULL)
  CHECK(131, TestStruct_print(tv) )
  CHECK(132, TestClass_print(dv, dv_Dynamic) )
  TEST_ASSERT(133, sv != NULL)
  TEST_ASSERT(134, ia != NULL)
  TEST_ASSERT(135, ta != NULL)
  TEST_ASSERT(136, da != NULL)
  TEST_ASSERT(137, sa != NULL)
  TEST_ASSERT(138, fa != NULL)
  CHECK(139, TestStruct_print(tn) )
  CHECK(140, TestClass_print(dn, dn_Dynamic) )
  TEST_ASSERT(141, sn != NULL)
  TEST_ASSERT(142, ian != NULL)
  TEST_ASSERT(143, tan != NULL)
  TEST_ASSERT(144, dan != NULL)
  TEST_ASSERT(145, san != NULL)
  TEST_ASSERT(146, sfn != NULL)
  TEST_ASSERT(147, ix == 0)
  TEST_ASSERT(148, is != NULL)
  if (fi == NULL) RAISE(149)
  CHECK(149, fi(7, &(aux_String_2)) )
  TEST_ASSERT(150, isv != NULL)
  TEST_ASSERT(151, isn != NULL)
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-complex-function"
Returncode test_complex_function(Int num, String* text, Int* out_num, String** out_text) {
  *out_num = num;
  *out_text = text;
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-void"
Returncode f_test_void(void) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-params"
Returncode f_test_params(Int x, String* s, String* o) {
  RAISE(216)
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-outs"
Returncode f_test_outs(String** s, Int* x) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-int2str"
Returncode f_test_int2str(Int x, String** s) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-int"
Returncode f_test_int(Int x) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-int2int"
Returncode f_test_int2int(Int x, Int* r) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "f-test-many"
Returncode f_test_many(Int x, Int y, Int* n, Int* m) {
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-call-expression"
Returncode test_call_expression(void) {
  String* s = NULL;
  Int x = 0;
  Int tmp = 0;
  String aux_String_0_Var = {0};
  String* aux_String_0 = &aux_String_0_Var;
  Int aux_Int_0 = 0;
  Int aux_Int_1 = 0;
  String* aux_String_1 = NULL;
  CHECK(231, f_test_void() )
  aux_String_0->max_length = 5;
  aux_String_0->length = 4;
  aux_String_0->values = "text";
  CHECK(232, f_test_params(3, aux_String_0, NULL) )
  CHECK(233, f_test_outs(&(s), &(x)) )
  CHECK(234, f_test_int2str(4, &(s)) )
  CHECK(235, f_test_int(5) )
  CHECK(236, f_test_int2int(6, &(x)) )
  CHECK(237, f_test_many(7, 8, &(x), &(x)) )
  CHECK(243, f_test_int2int(9, &(tmp)) )
  CHECK(243, f_test_int(tmp) )
  CHECK(244, f_test_many(11, 12, &(x), &(aux_Int_0)) )
  CHECK(244, f_test_int2int(10, &(aux_Int_1)) )
  x = aux_Int_1 + aux_Int_0;
  CHECK(245, f_test_int2str(13, &(aux_String_1)) )
  s = aux_String_1;
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-code-flow"
Returncode test_code_flow(Array* arr, Int* res) {
  if ((4) < 0 || (4) >= (arr)->length) RAISE(249)
  if ((((Int*)((arr)->values))[4]) > 6) {
    *res = 6;
  }
  else {
    if (arr != NULL) {
      *res = 6;
    }
    else {
      if ((4) < 0 || (4) >= (arr)->length) RAISE(253)
      if ((4) < 0 || (4) >= (arr)->length) RAISE(253)
      if ((((Int*)((arr)->values))[4]) != (((Int*)((arr)->values))[4])) {
        *res = 6;
      }
      else {
        if ((0) < 0 || (0) >= (arr)->length) RAISE(255)
        if (0 == (((Int*)((arr)->values))[0])) {
          *res = 6;
        }
        else {
          *res = 0;
        }
      }
    }
  }
  while (true) {
    Int x = 0;
    Int y = 0;
    if ((6) < 0 || (6) >= (arr)->length) RAISE(260)
    ((Int*)((arr)->values))[6] = 6;
    if ((2) < 0 || (2) >= (arr)->length) RAISE(261)
    x = ((Int*)((arr)->values))[2];
    if (!(x > 3)) break;
    y = x - 1;
    while (true) {
      Int z = 0;
      if ((8) < 0 || (8) >= (arr)->length) RAISE(265)
      if ((4) < 0 || (4) >= (arr)->length) RAISE(265)
      ((Int*)((arr)->values))[4] = ((Int*)((arr)->values))[8];
      if ((4) < 0 || (4) >= (arr)->length) RAISE(266)
      if (y > (((Int*)((arr)->values))[4])) {
        continue;
      }
      z = 0;
      if ((4) < 0 || (4) >= (arr)->length) RAISE(269)
      if (z <= (((Int*)((arr)->values))[4])) {
        if (!(z > 0)) break;
      }
    }
  }
  if ((2) < 0 || (2) >= (arr)->length) RAISE(271)
  if ((2) < 0 || (2) >= (arr)->length) RAISE(271)
  {int n; for(n=((Int*)((arr)->values))[2]; n<2 - (3 * (((Int*)((arr)->values))[2])); ++n) {
    Int x = 0;
    if ((2) < 0 || (2) >= (arr)->length) RAISE(272)
    if ((0) < 0 || (0) >= (arr)->length) RAISE(272)
    ((Int*)((arr)->values))[0] = ((Int*)((arr)->values))[2];
    if ((0) < 0 || (0) >= (arr)->length) RAISE(273)
    x = ((Int*)((arr)->values))[0];
    if (x > 4) {
      if ((1) < 0 || (1) >= (arr)->length) RAISE(275)
      ((Int*)((arr)->values))[1] = x;
    }
  }
  }
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "test-builtins"
Returncode test_builtins(Int i, Char c, Bool b, String* s, Array* a) {
  File* f = NULL;
  CHECK(280, Int_str(i, s) )
  b = true || false;
  c = EOF;
  if (a == NULL) RAISE(283)
  i = a->length;
  if (s == NULL) RAISE(284)
  i = s->length;
  CHECK(285, String_clear(s) )
  CHECK(286, String_equal(s, s, &(b)) )
  CHECK(287, String_get(s, i, &(c)) )
  CHECK(288, String_append(s, c) )
  CHECK(289, String_copy(s, s) )
  CHECK(290, String_concat(s, s) )
  CHECK(291, String_concat_int(s, i) )
  CHECK(292, String_find(s, s, &(i)) )
  CHECK(293, String_has(s, c, &(b)) )
  CHECK(295, file_open_read(s, &(f)) )
  CHECK(296, file_open_write(s, &(f)) )
  CHECK(297, File_getc(f, &(c)) )
  CHECK(298, File_putc(f, c) )
  CHECK(299, File_write(f, s) )
  CHECK(300, File_close(f) )
  if (sys == NULL) RAISE(301)
  if ((1) < 0 || (1) >= (sys->argv)->length) RAISE(301)
  s = ((String**)((sys->argv)->values))[1];
  CHECK(302, Sys_print(sys, s) )
  CHECK(303, Sys_println(sys, s) )
  CHECK(304, Sys_getenv(sys, s, s, &(b)) )
  CHECK(305, Sys_system(sys, s, &(i)) )
  CHECK(306, Sys_exit(sys, i) )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME


/* main function */

#define MR_FILE_NAME "tests/integration-test0.4.mr"
#define MR_FUNC_NAME "main"
USER_MAIN_HEADER {
  CHECK(310, test_simple_function() )
  CHECK(311, test_call_expression() )
  return OK;
}
#undef MR_FILE_NAME
#undef MR_FUNC_NAME

MAIN_FUNC
