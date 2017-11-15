#ifndef MR_MAINFILE
#define MR_MAINFILE "tests/expression-tests.c"
#define DEPTH 5
#include "mr.3.h"
#else

#if MR_STAGE == MR_TYPEDEFS
static char* _mr_file23_name = "tests/expression-tests.3.mr";
#endif
#define MR_FILE_NAME _mr_file23_name

/* MR4 compiler tests - Expression */

#if MR_STAGE == MR_DECLARATIONS
Returncode test_code_setup(String* input_text);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_code_setup = "test-code-setup";
#define MR_FUNC_NAME _func_name_test_code_setup
Returncode test_code_setup(String* input_text) {
  CHECK(4, f_setup_test() )
  CHECK(5, set_mock_file_text(&(String){1, 0, ""}) )
  CHECK(6, String_concat(mock_input_file_text, &(String){13, 12, "struct Test\n"}) )
  CHECK(7, String_concat(mock_input_file_text, &(String){15, 14, "  var Int num\n"}) )
  CHECK(8, String_concat(mock_input_file_text, &(String){20, 19, "  var Func{()} fun\n"}) )
  CHECK(9, String_concat(mock_input_file_text, &(String){15, 14, "  func meth()\n"}) )
  CHECK(10, String_concat(mock_input_file_text, &(String){16, 15, "class Ta(Test)\n"}) )
  CHECK(11, String_concat(mock_input_file_text, &(String){16, 15, "  var Int numa\n"}) )
  CHECK(12, String_concat(mock_input_file_text, &(String){21, 20, "  func inst metha()\n"}) )
  CHECK(13, String_concat(mock_input_file_text, &(String){22, 21, "  func dynamic dyn()\n"}) )
  CHECK(14, String_concat(mock_input_file_text, &(String){14, 13, "class Tb(Ta)\n"}) )
  CHECK(15, String_concat(mock_input_file_text, &(String){16, 15, "  var Int numb\n"}) )
  CHECK(16, String_concat(mock_input_file_text, &(String){21, 20, "  func inst methb()\n"}) )
  CHECK(17, String_concat(mock_input_file_text, &(String){22, 21, "  func dynamic dyn()\n"}) )
  CHECK(18, String_concat(mock_input_file_text, &(String){14, 13, "class Tc(Tb)\n"}) )
  CHECK(19, String_concat(mock_input_file_text, &(String){16, 15, "  var Int numc\n"}) )
  CHECK(20, String_concat(mock_input_file_text, &(String){21, 20, "  func inst methc()\n"}) )
  CHECK(21, String_concat(mock_input_file_text, &(String){22, 21, "  func dynamic dyn()\n"}) )
  CHECK(22, String_concat(mock_input_file_text, &(String){1, 0, ""}) )
  CHECK(23, String_concat(mock_input_file_text, &(String){13, 12, "func fun0()\n"}) )
  CHECK(24, String_concat(mock_input_file_text, &(String){36, 35, "func fun1(copy Int x, user String s"}) )
  CHECK(25, String_concat(mock_input_file_text, &(String){19, 18, ", owner String o)\n"}) )
  CHECK(26, String_concat(mock_input_file_text, &(String){29, 28, "func fun2()->(owner String s"}) )
  CHECK(27, String_concat(mock_input_file_text, &(String){15, 14, ", copy Int x)\n"}) )
  CHECK(28, String_concat(mock_input_file_text, &(String){41, 40, "func fun3(copy Int x)->(owner String s)\n"}) )
  CHECK(29, String_concat(mock_input_file_text, &(String){23, 22, "func fun4(copy Int x)\n"}) )
  CHECK(30, String_concat(mock_input_file_text, &(String){37, 36, "func fun5(copy Int x)->(copy Int y)\n"}) )
  CHECK(31, String_concat(mock_input_file_text, &(String){21, 20, "func fun6(copy Int x"}) )
  CHECK(32, String_concat(mock_input_file_text, &(String){41, 40, ", copy Int y)->(copy Int n, copy Int m)\n"}) )
  CHECK(33, String_concat(mock_input_file_text, &(String){27, 26, "func fun7()->(user Tb tb)\n"}) )
  CHECK(34, String_concat(mock_input_file_text, &(String){12, 11, "func mock(\n"}) )
  CHECK(35, String_concat(mock_input_file_text, &(String){17, 16, "    copy Int i,\n"}) )
  CHECK(36, String_concat(mock_input_file_text, &(String){18, 17, "    copy Char c,\n"}) )
  CHECK(37, String_concat(mock_input_file_text, &(String){18, 17, "    copy Bool b,\n"}) )
  CHECK(38, String_concat(mock_input_file_text, &(String){22, 21, "    user String str,\n"}) )
  CHECK(39, String_concat(mock_input_file_text, &(String){26, 25, "    user Array{Int} arr,\n"}) )
  CHECK(40, String_concat(mock_input_file_text, &(String){21, 20, "    user File fobj,\n"}) )
  CHECK(41, String_concat(mock_input_file_text, &(String){18, 17, "    user Test t,\n"}) )
  CHECK(42, String_concat(mock_input_file_text, &(String){17, 16, "    user Ta ta,\n"}) )
  CHECK(43, String_concat(mock_input_file_text, &(String){17, 16, "    user Tb tb,\n"}) )
  CHECK(44, String_concat(mock_input_file_text, &(String){20, 19, "    user Tc tc)->(\n"}) )
  CHECK(45, String_concat(mock_input_file_text, &(String){22, 21, "    owner String so,\n"}) )
  CHECK(46, String_concat(mock_input_file_text, &(String){16, 15, "    copy Int io"}) )
  CHECK(47, String_concat(mock_input_file_text, &(String){5, 4, ")\n  "}) )
  mock_input_line_reset_index = mock_input_file_text->length;
  CHECK(49, String_concat(mock_input_file_text, input_text) )
  CHECK(50, String_append(mock_input_file_text, '\n') )
  
  return OK;
}
#undef MR_FUNC_NAME
#endif

#if MR_STAGE == MR_DECLARATIONS
Returncode test_code(String* input_text, String* expected_output);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_code = "test-code";
#define MR_FUNC_NAME _func_name_test_code
Returncode test_code(String* input_text, String* expected_output) {
  CHECK(54, test_code_setup(input_text) )
  CHECK(55, write_syntax_tree() )
  String* mock_func_header = &(String){1024, 0, (char[1024]){0}};
  CHECK(57, String_copy(mock_func_header, &(String){17, 16, "Returncode mock("}) )
  CHECK(58, String_concat(mock_func_header, &(String){6, 5, "Int i"}) )
  CHECK(59, String_concat(mock_func_header, &(String){9, 8, ", Char c"}) )
  CHECK(60, String_concat(mock_func_header, &(String){9, 8, ", Bool b"}) )
  CHECK(61, String_concat(mock_func_header, &(String){14, 13, ", String* str"}) )
  CHECK(62, String_concat(mock_func_header, &(String){13, 12, ", Array* arr"}) )
  CHECK(63, String_concat(mock_func_header, &(String){13, 12, ", File* fobj"}) )
  CHECK(64, String_concat(mock_func_header, &(String){10, 9, ", Test* t"}) )
  CHECK(65, String_concat(mock_func_header, &(String){33, 32, ", Ta* ta, Ta_Dynamic* ta_Dynamic"}) )
  CHECK(66, String_concat(mock_func_header, &(String){33, 32, ", Tb* tb, Tb_Dynamic* tb_Dynamic"}) )
  CHECK(67, String_concat(mock_func_header, &(String){33, 32, ", Tc* tc, Tc_Dynamic* tc_Dynamic"}) )
  CHECK(68, String_concat(mock_func_header, &(String){14, 13, ", String** so"}) )
  CHECK(69, String_concat(mock_func_header, &(String){10, 9, ", Int* io"}) )
  CHECK(70, String_concat(mock_func_header, &(String){2, 1, ")"}) )
  String* empty_func_body = &(String){19, 18, " {\n  return OK;\n}\n"};
  String* expected_header = &(String){4096, 0, (char[4096]){0}};
  CHECK(73, String_copy(expected_header, &(String){28, 27, "\ntypedef struct Test Test;\n"}) )
  CHECK(74, String_concat(expected_header, &(String){23, 22, "typedef struct Ta Ta;\n"}) )
  CHECK(75, String_concat(expected_header, &(String){39, 38, "typedef struct Ta_Dynamic Ta_Dynamic;\n"}) )
  CHECK(76, String_concat(expected_header, &(String){23, 22, "typedef struct Tb Tb;\n"}) )
  CHECK(77, String_concat(expected_header, &(String){39, 38, "typedef struct Tb_Dynamic Tb_Dynamic;\n"}) )
  CHECK(78, String_concat(expected_header, &(String){23, 22, "typedef struct Tc Tc;\n"}) )
  CHECK(79, String_concat(expected_header, &(String){39, 38, "typedef struct Tc_Dynamic Tc_Dynamic;\n"}) )
  
  CHECK(81, String_concat(expected_header, &(String){15, 14, "struct Test {\n"}) )
  CHECK(82, String_concat(expected_header, &(String){12, 11, "  Int num;\n"}) )
  CHECK(83, String_concat(expected_header, &(String){28, 27, "  Returncode (*fun)(void);\n"}) )
  CHECK(84, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  CHECK(85, String_concat(expected_header, &(String){13, 12, "struct Ta {\n"}) )
  CHECK(86, String_concat(expected_header, &(String){15, 14, "  Test _base;\n"}) )
  CHECK(87, String_concat(expected_header, &(String){13, 12, "  Int numa;\n"}) )
  CHECK(88, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  CHECK(89, String_concat(expected_header, &(String){21, 20, "struct Ta_Dynamic {\n"}) )
  CHECK(90, String_concat(expected_header, &(String){29, 28, "  Returncode (*dyn)(Ta* self"}) )
  CHECK(91, String_concat(expected_header, &(String){30, 29, ", Ta_Dynamic* self_Dynamic);\n"}) )
  CHECK(92, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  CHECK(93, String_concat(expected_header, &(String){13, 12, "struct Tb {\n"}) )
  CHECK(94, String_concat(expected_header, &(String){13, 12, "  Ta _base;\n"}) )
  CHECK(95, String_concat(expected_header, &(String){13, 12, "  Int numb;\n"}) )
  CHECK(96, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  CHECK(97, String_concat(expected_header, &(String){21, 20, "struct Tb_Dynamic {\n"}) )
  CHECK(98, String_concat(expected_header, &(String){21, 20, "  Ta_Dynamic _base;\n"}) )
  CHECK(99, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  CHECK(100, String_concat(expected_header, &(String){13, 12, "struct Tc {\n"}) )
  CHECK(101, String_concat(expected_header, &(String){13, 12, "  Tb _base;\n"}) )
  CHECK(102, String_concat(expected_header, &(String){13, 12, "  Int numc;\n"}) )
  CHECK(103, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  CHECK(104, String_concat(expected_header, &(String){21, 20, "struct Tc_Dynamic {\n"}) )
  CHECK(105, String_concat(expected_header, &(String){21, 20, "  Tb_Dynamic _base;\n"}) )
  CHECK(106, String_concat(expected_header, &(String){4, 3, "};\n"}) )
  
  CHECK(108, String_concat(expected_header, &(String){35, 34, "Returncode Test_meth(Test* self);\n"}) )
  CHECK(109, String_concat(expected_header, &(String){29, 28, "Returncode Ta_metha(Ta* self"}) )
  CHECK(110, String_concat(expected_header, &(String){30, 29, ", Ta_Dynamic* self_Dynamic);\n"}) )
  CHECK(111, String_concat(expected_header, &(String){27, 26, "Returncode Ta_dyn(Ta* self"}) )
  CHECK(112, String_concat(expected_header, &(String){30, 29, ", Ta_Dynamic* self_Dynamic);\n"}) )
  CHECK(113, String_concat(expected_header, &(String){29, 28, "Returncode Tb_methb(Tb* self"}) )
  CHECK(114, String_concat(expected_header, &(String){30, 29, ", Tb_Dynamic* self_Dynamic);\n"}) )
  CHECK(115, String_concat(expected_header, &(String){27, 26, "Returncode Tb_dyn(Tb* self"}) )
  CHECK(116, String_concat(expected_header, &(String){30, 29, ", Tb_Dynamic* self_Dynamic);\n"}) )
  CHECK(117, String_concat(expected_header, &(String){29, 28, "Returncode Tc_methc(Tc* self"}) )
  CHECK(118, String_concat(expected_header, &(String){30, 29, ", Tc_Dynamic* self_Dynamic);\n"}) )
  CHECK(119, String_concat(expected_header, &(String){27, 26, "Returncode Tc_dyn(Tc* self"}) )
  CHECK(120, String_concat(expected_header, &(String){30, 29, ", Tc_Dynamic* self_Dynamic);\n"}) )
  
  CHECK(122, String_concat(expected_header, &(String){35, 34, "Ta_Dynamic Ta_dynamic = {Ta_dyn};\n"}) )
  CHECK(123, String_concat(expected_header, &(String){43, 42, "Tb_Dynamic Tb_dynamic = {{(Func)Tb_dyn}};\n"}) )
  CHECK(124, String_concat(expected_header, &(String){45, 44, "Tc_Dynamic Tc_dynamic = {{{(Func)Tc_dyn}}};\n"}) )
  
  CHECK(126, String_concat(expected_header, &(String){24, 23, "Returncode fun0(void);\n"}) )
  CHECK(127, String_concat(expected_header, &(String){47, 46, "Returncode fun1(Int x, String* s, String* o);\n"}) )
  CHECK(128, String_concat(expected_header, &(String){38, 37, "Returncode fun2(String** s, Int* x);\n"}) )
  CHECK(129, String_concat(expected_header, &(String){37, 36, "Returncode fun3(Int x, String** s);\n"}) )
  CHECK(130, String_concat(expected_header, &(String){25, 24, "Returncode fun4(Int x);\n"}) )
  CHECK(131, String_concat(expected_header, &(String){33, 32, "Returncode fun5(Int x, Int* y);\n"}) )
  CHECK(132, String_concat(expected_header, &(String){37, 36, "Returncode fun6(Int x, Int y, Int* n"}) )
  CHECK(133, String_concat(expected_header, &(String){12, 11, ", Int* m);\n"}) )
  CHECK(134, String_concat(expected_header, &(String){24, 23, "Returncode fun7(Tb** tb"}) )
  CHECK(135, String_concat(expected_header, &(String){29, 28, ", Tb_Dynamic** tb_Dynamic);\n"}) )
  CHECK(136, String_concat(expected_header, mock_func_header) )
  CHECK(137, String_concat(expected_header, &(String){3, 2, ";\n"}) )
  
  CHECK(139, String_concat(expected_header, &(String){33, 32, "Returncode Test_meth(Test* self)"}) )
  CHECK(140, String_concat(expected_header, empty_func_body) )
  CHECK(141, String_concat(expected_header, &(String){29, 28, "Returncode Ta_metha(Ta* self"}) )
  CHECK(142, String_concat(expected_header, &(String){28, 27, ", Ta_Dynamic* self_Dynamic)"}) )
  CHECK(143, String_concat(expected_header, empty_func_body) )
  CHECK(144, String_concat(expected_header, &(String){27, 26, "Returncode Ta_dyn(Ta* self"}) )
  CHECK(145, String_concat(expected_header, &(String){28, 27, ", Ta_Dynamic* self_Dynamic)"}) )
  CHECK(146, String_concat(expected_header, empty_func_body) )
  CHECK(147, String_concat(expected_header, &(String){29, 28, "Returncode Tb_methb(Tb* self"}) )
  CHECK(148, String_concat(expected_header, &(String){28, 27, ", Tb_Dynamic* self_Dynamic)"}) )
  CHECK(149, String_concat(expected_header, empty_func_body) )
  CHECK(150, String_concat(expected_header, &(String){27, 26, "Returncode Tb_dyn(Tb* self"}) )
  CHECK(151, String_concat(expected_header, &(String){28, 27, ", Tb_Dynamic* self_Dynamic)"}) )
  CHECK(152, String_concat(expected_header, empty_func_body) )
  CHECK(153, String_concat(expected_header, &(String){29, 28, "Returncode Tc_methc(Tc* self"}) )
  CHECK(154, String_concat(expected_header, &(String){28, 27, ", Tc_Dynamic* self_Dynamic)"}) )
  CHECK(155, String_concat(expected_header, empty_func_body) )
  CHECK(156, String_concat(expected_header, &(String){27, 26, "Returncode Tc_dyn(Tc* self"}) )
  CHECK(157, String_concat(expected_header, &(String){28, 27, ", Tc_Dynamic* self_Dynamic)"}) )
  CHECK(158, String_concat(expected_header, empty_func_body) )
  
  CHECK(160, String_concat(expected_header, &(String){22, 21, "Returncode fun0(void)"}) )
  CHECK(161, String_concat(expected_header, empty_func_body) )
  CHECK(162, String_concat(expected_header, &(String){45, 44, "Returncode fun1(Int x, String* s, String* o)"}) )
  CHECK(163, String_concat(expected_header, empty_func_body) )
  CHECK(164, String_concat(expected_header, &(String){36, 35, "Returncode fun2(String** s, Int* x)"}) )
  CHECK(165, String_concat(expected_header, empty_func_body) )
  CHECK(166, String_concat(expected_header, &(String){35, 34, "Returncode fun3(Int x, String** s)"}) )
  CHECK(167, String_concat(expected_header, empty_func_body) )
  CHECK(168, String_concat(expected_header, &(String){23, 22, "Returncode fun4(Int x)"}) )
  CHECK(169, String_concat(expected_header, empty_func_body) )
  CHECK(170, String_concat(expected_header, &(String){31, 30, "Returncode fun5(Int x, Int* y)"}) )
  CHECK(171, String_concat(expected_header, empty_func_body) )
  CHECK(172, String_concat(expected_header, &(String){46, 45, "Returncode fun6(Int x, Int y, Int* n, Int* m)"}) )
  CHECK(173, String_concat(expected_header, empty_func_body) )
  CHECK(174, String_concat(expected_header, &(String){24, 23, "Returncode fun7(Tb** tb"}) )
  CHECK(175, String_concat(expected_header, &(String){27, 26, ", Tb_Dynamic** tb_Dynamic)"}) )
  CHECK(176, String_concat(expected_header, empty_func_body) )
  CHECK(177, String_concat(expected_header, mock_func_header) )
  CHECK(178, String_concat(expected_header, &(String){6, 5, " {\n  "}) )
  
  String* expected_footer = &(String){17, 16, "\n  return OK;\n}\n"};
  CHECK(181, f_assert_string_slice(expected_header, mock_output_file_text, 0, expected_header->length) )
  CHECK(186, f_assert_string_slice(expected_output, mock_output_file_text, expected_header->length, mock_output_file_text->length - expected_header->length - expected_footer->length) )
  CHECK(192, f_assert_string_slice(expected_footer, mock_output_file_text, mock_output_file_text->length - expected_footer->length, expected_footer->length) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_code_error(String* input_text, String* expected_error);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_code_error = "test-code-error";
#define MR_FUNC_NAME _func_name_test_code_error
Returncode test_code_error(String* input_text, String* expected_error) {
  CHECK(200, test_code_setup(input_text) )
  mock_print_active = true;
  _trace_stream = NULL;
  do {
#undef RETURN_ERROR
#define RETURN_ERROR(value) break
    CHECK(202, write_syntax_tree() );
#undef RETURN_ERROR
#define RETURN_ERROR(value) return value
    _trace_stream = stdout;
    TEST_FAIL(202)
  } while (false);
  _trace_stream = stdout;
  mock_print_active = false;
  String* expected_header = &(String){25, 24, "Code error in mock.3.mr["};
  CHECK(205, f_assert_string_slice(expected_header, mock_print_text, 0, expected_header->length) )
  CHECK(210, f_assert_string_slice(expected_error, mock_print_text, expected_header->length + 3, mock_print_text->length - expected_header->length - 4) )
  if ((mock_print_text->length - 1) < 0 || (mock_print_text->length - 1) >= (mock_print_text)->length) RAISE(215)
  TEST_ASSERT(215, ((mock_print_text)->values[mock_print_text->length - 1]) == '\n')
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_int_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_int_expression = "test-int-expression";
#define MR_FUNC_NAME _func_name_test_int_expression
Returncode test_int_expression() {
  CHECK(219, test_code(&(String){7, 6, "i := 0"}, &(String){7, 6, "i = 0;"}) )
  CHECK(220, test_code(&(String){10, 9, "i := 9630"}, &(String){10, 9, "i = 9630;"}) )
  CHECK(221, test_code(&(String){11, 10, "i := -9630"}, &(String){11, 10, "i = -9630;"}) )
  CHECK(222, test_code(&(String){11, 10, "i := 07520"}, &(String){11, 10, "i = 07520;"}) )
  CHECK(223, test_code(&(String){12, 11, "i := -07520"}, &(String){12, 11, "i = -07520;"}) )
  CHECK(224, test_code(&(String){14, 13, "i := 0xfda940"}, &(String){14, 13, "i = 0xfda940;"}) )
  CHECK(225, test_code(&(String){15, 14, "i := -0xfda940"}, &(String){15, 14, "i = -0xfda940;"}) )
  CHECK(226, test_code(&(String){14, 13, "i := 0xFDA940"}, &(String){14, 13, "i = 0xFDA940;"}) )
  CHECK(227, test_code(&(String){15, 14, "i := -0xFDA940"}, &(String){15, 14, "i = -0xFDA940;"}) )
  CHECK(228, test_code_error(&(String){3, 2, "2a"}, &(String){20, 19, "illegal number \"2a\""}) )
  CHECK(229, test_code_error(&(String){3, 2, "0a"}, &(String){20, 19, "illegal number \"0a\""}) )
  CHECK(230, test_code_error(&(String){4, 3, "038"}, &(String){27, 26, "illegal octal number \"038\""}) )
  CHECK(231, test_code_error(&(String){6, 5, "0b021"}, &(String){30, 29, "illegal binary number \"0b021\""}) )
  CHECK(232, test_code_error(&(String){6, 5, "0xadg"}, &(String){35, 34, "illegal hexadecimal number \"0xadg\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_char_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_char_expression = "test-char-expression";
#define MR_FUNC_NAME _func_name_test_char_expression
Returncode test_char_expression() {
  CHECK(236, test_code(&(String){9, 8, "c := 'a'"}, &(String){9, 8, "c = 'a';"}) )
  CHECK(237, test_code(&(String){10, 9, "c := '\\''"}, &(String){10, 9, "c = '\\'';"}) )
  CHECK(238, test_code(&(String){10, 9, "c := '\\n'"}, &(String){10, 9, "c = '\\n';"}) )
  CHECK(239, test_code(&(String){12, 11, "c := '\\x0f'"}, &(String){12, 11, "c = '\\x0f';"}) )
  CHECK(240, test_code(&(String){12, 11, "c := '\\xA9'"}, &(String){12, 11, "c = '\\xA9';"}) )
  CHECK(241, test_code(&(String){12, 11, "c := '\\270'"}, &(String){12, 11, "c = '\\270';"}) )
  CHECK(242, test_code_error(&(String){4, 3, "'''"}, &(String){33, 32, "illegal character constant \"'''\""}) )
  CHECK(243, test_code_error(&(String){4, 3, "'\\'"}, &(String){33, 32, "illegal character constant \"'\\'\""}) )
  CHECK(245, test_code_error(&(String){5, 4, "'aa'"}, &(String){34, 33, "illegal character constant \"'aa'\""}) )
  CHECK(246, test_code_error(&(String){5, 4, "'\\c'"}, &(String){34, 33, "illegal character constant \"'\\c'\""}) )
  CHECK(248, test_code_error(&(String){7, 6, "'aaaa'"}, &(String){36, 35, "illegal character constant \"'aaaa'\""}) )
  CHECK(250, test_code_error(&(String){8, 7, "'\\x6fg'"}, &(String){37, 36, "illegal character constant \"'\\x6fg'\""}) )
  CHECK(252, test_code_error(&(String){7, 6, "'\\058'"}, &(String){36, 35, "illegal character constant \"'\\058'\""}) )
  CHECK(254, test_code_error(&(String){3, 2, "''"}, &(String){32, 31, "illegal character constant \"''\""}) )
  CHECK(255, test_code_error(&(String){6, 5, "'aaa'"}, &(String){35, 34, "illegal character constant \"'aaa'\""}) )
  CHECK(257, test_code_error(&(String){8, 7, "'aaaaa'"}, &(String){37, 36, "illegal character constant \"'aaaaa'\""}) )
  CHECK(259, test_code_error(&(String){4, 3, "'aa"}, &(String){33, 32, "illegal character constant \"'aa\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_string_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_string_expression = "test-string-expression";
#define MR_FUNC_NAME _func_name_test_string_expression
Returncode test_string_expression() {
  CHECK(264, test_code(&(String){21, 20, "str := \"some string\""}, &(String){199, 198, "String aux_String_0_Var = {0};\n  String* aux_String_0 = &aux_String_0_Var;\n  aux_String_0->max_length = 12;\n  aux_String_0->length = 11;\n  aux_String_0->values = \"some string\";\n  str = aux_String_0;"}) )
  CHECK(267, test_code_error(&(String){5, 4, "\"aaa"}, &(String){31, 30, "illegal string constant \"\"aaa\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_empty_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_empty_expression = "test-empty-expression";
#define MR_FUNC_NAME _func_name_test_empty_expression
Returncode test_empty_expression() {
  CHECK(271, test_code(&(String){9, 8, "str := _"}, &(String){12, 11, "str = NULL;"}) )
  CHECK(272, test_code(&(String){7, 6, "t := _"}, &(String){10, 9, "t = NULL;"}) )
  CHECK(273, test_code_error(&(String){7, 6, "i := _"}, &(String){40, 39, "cannot assign \"Empty Symbol\" into \"Int\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_member_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_member_expression = "test-member-expression";
#define MR_FUNC_NAME _func_name_test_member_expression
Returncode test_member_expression() {
  CHECK(278, test_code(&(String){11, 10, "i := t.num"}, &(String){38, 37, "if (t == NULL) RAISE(1)\n  i = t->num;"}) )
  CHECK(279, test_code(&(String){13, 12, "i := tc.numb"}, &(String){47, 46, "if (tc == NULL) RAISE(1)\n  i = tc->_base.numb;"}) )
  CHECK(282, test_code(&(String){12, 11, "i := tc.num"}, &(String){58, 57, "if (tc == NULL) RAISE(1)\n  i = tc->_base._base._base.num;"}) )
  CHECK(285, test_code_error(&(String){6, 5, "error"}, &(String){23, 22, "unknown symbol \"error\""}) )
  CHECK(286, test_code_error(&(String){15, 14, "(i := 1).error"}, &(String){38, 37, "void expression has no member \"error\""}) )
  CHECK(288, test_code_error(&(String){8, 7, "t.error"}, &(String){34, 33, "type \"Test\" has no member \"error\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_slice_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_slice_expression = "test-slice-expression";
#define MR_FUNC_NAME _func_name_test_slice_expression
Returncode test_slice_expression() {
  CHECK(292, test_code(&(String){13, 12, "c := str[13]"}, &(String){75, 74, "if ((13) < 0 || (13) >= (str)->length) RAISE(1)\n  c = ((str)->values)[13];"}) )
  String* expected = &(String){1024, 0, (char[1024]){0}};
  CHECK(296, String_copy(expected, &(String){32, 31, "String aux_String_0_Var = {0};\n"}) )
  CHECK(297, String_concat(expected, &(String){45, 44, "  String* aux_String_0 = &aux_String_0_Var;\n"}) )
  CHECK(298, String_concat(expected, &(String){32, 31, "  aux_String_0_Var.length = 6;\n"}) )
  CHECK(299, String_concat(expected, &(String){62, 61, "  aux_String_0_Var.max_length = aux_String_0_Var.length + 1;\n"}) )
  CHECK(301, String_concat(expected, &(String){50, 49, "  aux_String_0_Var.values = (str)->values + (2);\n"}) )
  CHECK(302, String_concat(expected, &(String){65, 64, "  if ((2) < 0 || (6) < 0 || (2) + (6) > (str)->length) RAISE(1)\n"}) )
  CHECK(304, String_concat(expected, &(String){22, 21, "  str = aux_String_0;"}) )
  CHECK(305, test_code(&(String){16, 15, "str := str[2:6]"}, expected) )
  CHECK(306, test_code(&(String){13, 12, "i := arr[13]"}, &(String){83, 82, "if ((13) < 0 || (13) >= (arr)->length) RAISE(1)\n  i = ((Int*)((arr)->values))[13];"}) )
  CHECK(309, test_code(&(String){16, 15, "arr := arr[2:6]"}, &(String){242, 241, "Array aux_Array_0_Var = {0};\n  Array* aux_Array_0 = &aux_Array_0_Var;\n  aux_Array_0_Var.length = 6;\n  aux_Array_0_Var.values = (Byte*)((arr)->values) + (2);\n  if ((2) < 0 || (6) < 0 || (2) + (6) > (arr)->length) RAISE(1)\n  arr = aux_Array_0;"}) )
  CHECK(312, test_code(&(String){12, 11, "str[4] := c"}, &(String){72, 71, "if ((4) < 0 || (4) >= (str)->length) RAISE(1)\n  ((str)->values)[4] = c;"}) )
  CHECK(315, test_code(&(String){12, 11, "arr[4] := i"}, &(String){80, 79, "if ((4) < 0 || (4) >= (arr)->length) RAISE(1)\n  ((Int*)((arr)->values))[4] = i;"}) )
  CHECK(318, test_code_error(&(String){6, 5, "arr[2"}, &(String){29, 28, "expected \"]\", got \"new-line\""}) )
  CHECK(319, test_code_error(&(String){8, 7, "arr[2:3"}, &(String){29, 28, "expected \"]\", got \"new-line\""}) )
  CHECK(320, test_code_error(&(String){12, 11, "(i := 3)[2]"}, &(String){31, 30, "cannot slice a void expression"}) )
  CHECK(321, test_code_error(&(String){5, 4, "i[2]"}, &(String){24, 23, "cannot slice type \"Int\""}) )
  CHECK(322, test_code_error(&(String){9, 8, "arr[str]"}, &(String){47, 46, "expected integer index for slice, got \"String\""}) )
  CHECK(324, test_code_error(&(String){11, 10, "arr[3:str]"}, &(String){47, 46, "expected integer index for slice, got \"String\""}) )
  CHECK(327, test_code_error(&(String){12, 11, "arr[i += 3]"}, &(String){54, 53, "expected integer index for slice, got void expression"}) )
  CHECK(330, test_code_error(&(String){16, 15, "str[2:5] := str"}, &(String){41, 40, "assigning into non assignable expression"}) )
  CHECK(332, test_code_error(&(String){16, 15, "arr[7:2] := arr"}, &(String){41, 40, "assigning into non assignable expression"}) )
  CHECK(334, test_code_error(&(String){33, 32, "user Array{Test} at\n  at[0] := t"}, &(String){41, 40, "assigning into non assignable expression"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_call_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_call_expression = "test-call-expression";
#define MR_FUNC_NAME _func_name_test_call_expression
Returncode test_call_expression() {
  CHECK(340, test_code(&(String){7, 6, "fun0()"}, &(String){18, 17, "CHECK(1, fun0() )"}) )
  CHECK(341, test_code(&(String){32, 31, "fun1(copy 3, user str, owner _)"}, &(String){30, 29, "CHECK(1, fun1(3, str, NULL) )"}) )
  CHECK(344, test_code(&(String){28, 27, "fun2()->(owner so, copy io)"}, &(String){32, 31, "CHECK(1, fun2(&(*so), &(*io)) )"}) )
  CHECK(347, test_code(&(String){55, 54, "var Int x\n  owner String s\n  fun2()->(owner s, copy x)"}, &(String){61, 60, "Int x = 0;\n  String* s = NULL;\n  CHECK(3, fun2(&(s), &(x)) )"}) )
  CHECK(350, test_code(&(String){25, 24, "fun3(copy 0)->(owner so)"}, &(String){27, 26, "CHECK(1, fun3(0, &(*so)) )"}) )
  CHECK(351, test_code(&(String){46, 45, "var Int x\n  fun4(copy fun5(copy 3)->(copy x))"}, &(String){59, 58, "Int x = 0;\n  CHECK(2, fun5(3, &(x)) )\n  CHECK(2, fun4(x) )"}) )
  CHECK(354, test_code(&(String){67, 66, "fun6(\n      copy 2,\n      copy 3)->(\n      copy io,\n      copy io)"}, &(String){38, 37, "CHECK(1, fun6(2, 3, &(*io), &(*io)) )"}) )
  CHECK(357, test_code(&(String){13, 12, "fun5(copy 4)"}, &(String){54, 53, "Int aux_Int_0 = 0;\n  CHECK(1, fun5(4, &(aux_Int_0)) )"}) )
  CHECK(360, test_code(&(String){19, 18, "io := fun5(copy 4)"}, &(String){73, 72, "Int aux_Int_0 = 0;\n  CHECK(1, fun5(4, &(aux_Int_0)) )\n  *io = aux_Int_0;"}) )
  CHECK(363, test_code(&(String){19, 18, "so := fun3(copy 7)"}, &(String){89, 88, "String* aux_String_0 = NULL;\n  CHECK(1, fun3(7, &(aux_String_0)) )\n  *so = aux_String_0;"}) )
  CHECK(366, test_code(&(String){11, 10, "tc.methc()"}, &(String){36, 35, "CHECK(1, Tc_methc(tc, tc_Dynamic) )"}) )
  CHECK(367, test_code(&(String){11, 10, "tc.methb()"}, &(String){56, 55, "CHECK(1, Tb_methb(&(tc->_base), &(tc_Dynamic->_base)) )"}) )
  CHECK(370, test_code(&(String){10, 9, "tc.meth()"}, &(String){47, 46, "CHECK(1, Test_meth(&(tc->_base._base._base)) )"}) )
  CHECK(372, test_code_error(&(String){18, 17, "function( copy 1)"}, &(String){25, 24, "expected access, got \" \""}) )
  CHECK(374, test_code_error(&(String){15, 14, "function(user)"}, &(String){37, 36, "expected space after access, got \")\""}) )
  CHECK(376, test_code_error(&(String){24, 23, "function(copy 4,copy 3)"}, &(String){46, 45, "expected space or new-line after \",\", got \"c\""}) )
  CHECK(379, test_code_error(&(String){16, 15, "function(copy 2"}, &(String){36, 35, "expected \",\" or \")\", got \"new-line\""}) )
  CHECK(381, test_code_error(&(String){18, 17, "function(error 4)"}, &(String){23, 22, "illegal access \"error\""}) )
  CHECK(383, test_code_error(&(String){11, 10, "(i := 0)()"}, &(String){32, 31, "void expression is not callable"}) )
  CHECK(385, test_code_error(&(String){4, 3, "i()"}, &(String){24, 23, "non callable type \"Int\""}) )
  CHECK(387, test_code_error(&(String){23, 22, "fun5(copy 0)->(copy 4)"}, &(String){27, 26, "non assignable call output"}) )
  CHECK(389, test_code_error(&(String){18, 17, "fun7()->(user tc)"}, &(String){29, 28, "cannot assign \"Tb\" into \"Tc\""}) )
  CHECK(391, test_code_error(&(String){18, 17, "fun5(copy i := 1)"}, &(String){30, 29, "cannot assign void expression"}) )
  CHECK(393, test_code_error(&(String){13, 12, "fun5(user 8)"}, &(String){36, 35, "expected access \"copy\" , got \"user\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_type_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_type_expression = "test-type-expression";
#define MR_FUNC_NAME _func_name_test_type_expression
Returncode test_type_expression() {
  CHECK(398, test_code(&(String){17, 16, "Test.meth(var t)"}, &(String){24, 23, "CHECK(1, Test_meth(t) )"}) )
  CHECK(399, test_code(&(String){17, 16, "Tb.methb(var tc)"}, &(String){56, 55, "CHECK(1, Tb_methb(&(tc->_base), &(tc_Dynamic->_base)) )"}) )
  CHECK(402, test_code(&(String){16, 15, "Tc.meth(var tc)"}, &(String){47, 46, "CHECK(1, Test_meth(&(tc->_base._base._base)) )"}) )
  CHECK(405, test_code_error(&(String){6, 5, "Error"}, &(String){21, 20, "unknown type \"Error\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_base_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_base_expression = "test-base-expression";
#define MR_FUNC_NAME _func_name_test_base_expression
Returncode test_base_expression() {
  CHECK(409, test_meth_code(&(String){13, 12, "base.methm()"}, &(String){37, 36, "CHECK(9, Mid_methm(&(self->_base)) )"}) )
  CHECK(411, test_meth_code(&(String){13, 12, "base.methb()"}, &(String){44, 43, "CHECK(9, Base_methb(&(self->_base._base)) )"}) )
  CHECK(413, test_code_error(&(String){5, 4, "base"}, &(String){26, 25, "\"base\" used not in method"}) )
  CHECK(414, test_global_scope_error(&(String){48, 47, "struct Test\n  var Int x\n  func mock()\n    base\n"}, &(String){29, 28, "no base type for type \"Test\""}) )
  CHECK(417, test_global_scope_error(&(String){74, 73, "struct Base\n  var Int x\nstruct Test(Base)\n  func mock()\n    base := self\n"}, &(String){40, 39, "cannot assign \"Test\" into \"Base Symbol\""}) )
  CHECK(420, test_global_scope_error(&(String){87, 86, "struct Base\n  var Int x\nstruct Test(Base)\n  func mock()->(copy Int x)\n    x := base.x\n"}, &(String){35, 34, "calling \"base\" with non-method \"x\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif

#if MR_STAGE == MR_DECLARATIONS
Returncode test_meth_code(String* input_text, String* expected_output);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_meth_code = "test-meth-code";
#define MR_FUNC_NAME _func_name_test_meth_code
Returncode test_meth_code(String* input_text, String* expected_output) {
  String* input = &(String){1024, 0, (char[1024]){0}};
  CHECK(426, String_copy(input, &(String){13, 12, "struct Base\n"}) )
  CHECK(427, String_concat(input, &(String){13, 12, "  var Int x\n"}) )
  CHECK(428, String_concat(input, &(String){16, 15, "  func methb()\n"}) )
  CHECK(429, String_concat(input, &(String){18, 17, "struct Mid(Base)\n"}) )
  CHECK(430, String_concat(input, &(String){16, 15, "  func methm()\n"}) )
  CHECK(431, String_concat(input, &(String){17, 16, "struct Top(Mid)\n"}) )
  CHECK(432, String_concat(input, &(String){16, 15, "  func methb()\n"}) )
  CHECK(433, String_concat(input, &(String){20, 19, "  func methm()\n    "}) )
  CHECK(434, String_concat(input, input_text) )
  CHECK(435, String_concat(input, &(String){2, 1, "\n"}) )
  String* expected = &(String){1024, 0, (char[1024]){0}};
  CHECK(437, String_copy(expected, &(String){27, 26, "typedef struct Base Base;\n"}) )
  CHECK(438, String_concat(expected, &(String){25, 24, "typedef struct Mid Mid;\n"}) )
  CHECK(439, String_concat(expected, &(String){25, 24, "typedef struct Top Top;\n"}) )
  CHECK(440, String_concat(expected, &(String){15, 14, "struct Base {\n"}) )
  CHECK(441, String_concat(expected, &(String){10, 9, "  Int x;\n"}) )
  CHECK(442, String_concat(expected, &(String){4, 3, "};\n"}) )
  CHECK(443, String_concat(expected, &(String){14, 13, "struct Mid {\n"}) )
  CHECK(444, String_concat(expected, &(String){15, 14, "  Base _base;\n"}) )
  CHECK(445, String_concat(expected, &(String){4, 3, "};\n"}) )
  CHECK(446, String_concat(expected, &(String){14, 13, "struct Top {\n"}) )
  CHECK(447, String_concat(expected, &(String){14, 13, "  Mid _base;\n"}) )
  CHECK(448, String_concat(expected, &(String){4, 3, "};\n"}) )
  CHECK(449, String_concat(expected, &(String){36, 35, "Returncode Base_methb(Base* self);\n"}) )
  CHECK(450, String_concat(expected, &(String){34, 33, "Returncode Mid_methm(Mid* self);\n"}) )
  CHECK(451, String_concat(expected, &(String){34, 33, "Returncode Top_methb(Top* self);\n"}) )
  CHECK(452, String_concat(expected, &(String){34, 33, "Returncode Top_methm(Top* self);\n"}) )
  CHECK(453, String_concat(expected, &(String){37, 36, "Returncode Base_methb(Base* self) {\n"}) )
  CHECK(454, String_concat(expected, &(String){14, 13, "  return OK;\n"}) )
  CHECK(455, String_concat(expected, &(String){3, 2, "}\n"}) )
  CHECK(456, String_concat(expected, &(String){35, 34, "Returncode Mid_methm(Mid* self) {\n"}) )
  CHECK(457, String_concat(expected, &(String){14, 13, "  return OK;\n"}) )
  CHECK(458, String_concat(expected, &(String){3, 2, "}\n"}) )
  CHECK(459, String_concat(expected, &(String){35, 34, "Returncode Top_methb(Top* self) {\n"}) )
  CHECK(460, String_concat(expected, &(String){14, 13, "  return OK;\n"}) )
  CHECK(461, String_concat(expected, &(String){3, 2, "}\n"}) )
  CHECK(462, String_concat(expected, &(String){37, 36, "Returncode Top_methm(Top* self) {\n  "}) )
  CHECK(463, String_concat(expected, expected_output) )
  CHECK(464, String_concat(expected, &(String){15, 14, "\n  return OK;\n"}) )
  CHECK(465, String_concat(expected, &(String){2, 1, "}"}) )
  CHECK(466, test_global_scope(input, expected) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_block_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_block_expression = "test-block-expression";
#define MR_FUNC_NAME _func_name_test_block_expression
Returncode test_block_expression() {
  CHECK(470, test_code(&(String){15, 14, "i := 2 + (123)"}, &(String){15, 14, "i = 2 + (123);"}) )
  CHECK(471, test_code(&(String){11, 10, "i := (123)"}, &(String){9, 8, "i = 123;"}) )
  CHECK(472, test_code(&(String){25, 24, "i := (123 * (i - 4)) + 2"}, &(String){25, 24, "i = (123 * (i - 4)) + 2;"}) )
  CHECK(473, test_code_error(&(String){7, 6, "(error"}, &(String){29, 28, "expected \")\", got \"new-line\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_unary_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_unary_expression = "test-unary-expression";
#define MR_FUNC_NAME _func_name_test_unary_expression
Returncode test_unary_expression() {
  CHECK(477, test_code(&(String){9, 8, "i := - i"}, &(String){9, 8, "i = - i;"}) )
  CHECK(478, test_code(&(String){15, 14, "i := -\n      i"}, &(String){9, 8, "i = - i;"}) )
  CHECK(479, test_code(&(String){11, 10, "i := - - i"}, &(String){13, 12, "i = - (- i);"}) )
  CHECK(480, test_code(&(String){11, 10, "b := not b"}, &(String){9, 8, "b = ! b;"}) )
  CHECK(481, test_code(&(String){15, 14, "b := not i > 3"}, &(String){15, 14, "b = ! (i > 3);"}) )
  CHECK(482, test_code_error(&(String){5, 4, "[45]"}, &(String){15, 14, "unexpected \"[\""}) )
  CHECK(483, test_code_error(&(String){3, 2, "-["}, &(String){15, 14, "unexpected \"[\""}) )
  CHECK(484, test_code_error(&(String){4, 3, "+ 2"}, &(String){23, 22, "not unary operator \"+\""}) )
  CHECK(485, test_code_error(&(String){11, 10, "- (i := 2)"}, &(String){49, 48, "void expression given as operand to operator \"-\""}) )
  CHECK(488, test_code_error(&(String){10, 9, "- (i > 4)"}, &(String){48, 47, "operator \"-\" expected \"Int\" operand, got \"Bool\""}) )
  CHECK(491, test_code_error(&(String){6, 5, "not i"}, &(String){50, 49, "operator \"not\" expected \"Bool\" operand, got \"Int\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_binary_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_binary_expression = "test-binary-expression";
#define MR_FUNC_NAME _func_name_test_binary_expression
Returncode test_binary_expression() {
  CHECK(497, test_code(&(String){13, 12, "i := 23 + 54"}, &(String){13, 12, "i = 23 + 54;"}) )
  CHECK(498, test_code(&(String){34, 33, "i += (100 * 2) - (37 div 5 mod 2)"}, &(String){33, 32, "i += (100 * 2) - ((37 / 5) % 2);"}) )
  CHECK(501, test_code(&(String){19, 18, "i -= 12 *\n      13"}, &(String){14, 13, "i -= 12 * 13;"}) )
  CHECK(502, test_code(&(String){22, 21, "b := 3 < 5 or 23 > 37"}, &(String){26, 25, "b = (3 < 5) || (23 > 37);"}) )
  CHECK(503, test_code(&(String){25, 24, "b := 3 <= 5 and 23 >= 37"}, &(String){28, 27, "b = (3 <= 5) && (23 >= 37);"}) )
  CHECK(504, test_code(&(String){22, 21, "b := i = 5 or i != 37"}, &(String){27, 26, "b = (i == 5) || (i != 37);"}) )
  CHECK(505, test_code(&(String){24, 23, "b := 2 < i < 12 < 2 * i"}, &(String){45, 44, "b = ((2 < i) && (i < 12)) && (12 < (2 * i));"}) )
  CHECK(508, test_code(&(String){8, 7, "t := tc"}, &(String){30, 29, "t = &(tc->_base._base._base);"}) )
  CHECK(509, test_code_error(&(String){8, 7, "345 @ 2"}, &(String){21, 20, "unknown operator \"@\""}) )
  CHECK(510, test_code_error(&(String){6, 5, "80 +("}, &(String){15, 14, "unexpected \"(\""}) )
  CHECK(511, test_code_error(&(String){10, 9, "1 + 2 * 3"}, &(String){51, 50, "ambiguous precedence between operators \"+\" and \"*\""}) )
  CHECK(514, test_code_error(&(String){25, 24, "1 < i or 2 < i and 3 < i"}, &(String){54, 53, "ambiguous precedence between operators \"or\" and \"and\""}) )
  CHECK(517, test_code_error(&(String){8, 7, "1 not 2"}, &(String){35, 34, "cannot use \"not\" as binary operand"}) )
  CHECK(519, test_code_error(&(String){7, 6, "1 := 2"}, &(String){41, 40, "assigning into non assignable expression"}) )
  CHECK(521, test_code_error(&(String){7, 6, "1 += 2"}, &(String){41, 40, "assigning into non assignable expression"}) )
  CHECK(523, test_code_error(&(String){7, 6, "1 -= 2"}, &(String){41, 40, "assigning into non assignable expression"}) )
  CHECK(525, test_int_operator_error(&(String){2, 1, "+"}) )
  CHECK(526, test_int_operator_error(&(String){2, 1, "-"}) )
  CHECK(527, test_int_operator_error(&(String){2, 1, "*"}) )
  CHECK(528, test_int_operator_error(&(String){4, 3, "div"}) )
  CHECK(529, test_int_operator_error(&(String){4, 3, "mod"}) )
  CHECK(530, test_int_operator_error(&(String){2, 1, "="}) )
  CHECK(531, test_int_operator_error(&(String){3, 2, "!="}) )
  CHECK(532, test_int_operator_error(&(String){2, 1, ">"}) )
  CHECK(533, test_int_operator_error(&(String){2, 1, "<"}) )
  CHECK(534, test_int_operator_error(&(String){3, 2, ">="}) )
  CHECK(535, test_int_operator_error(&(String){3, 2, "<="}) )
  CHECK(536, test_int_operator_error(&(String){3, 2, "+="}) )
  CHECK(537, test_int_operator_error(&(String){3, 2, "-="}) )
  CHECK(538, test_bool_operator_error(&(String){3, 2, "or"}) )
  CHECK(539, test_bool_operator_error(&(String){4, 3, "and"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif

#if MR_STAGE == MR_DECLARATIONS
Returncode test_int_operator_error(String* operator);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_int_operator_error = "test-int-operator-error";
#define MR_FUNC_NAME _func_name_test_int_operator_error
Returncode test_int_operator_error(String* operator) {
  CHECK(542, test_operator_error(operator, &(String){4, 3, "Int"}, &(String){5, 4, "Bool"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif

#if MR_STAGE == MR_DECLARATIONS
Returncode test_bool_operator_error(String* operator);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_bool_operator_error = "test-bool-operator-error";
#define MR_FUNC_NAME _func_name_test_bool_operator_error
Returncode test_bool_operator_error(String* operator) {
  CHECK(545, test_operator_error(operator, &(String){5, 4, "Bool"}, &(String){4, 3, "Int"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif

#if MR_STAGE == MR_DECLARATIONS
Returncode test_operator_error(String* operator, String* expected_type, String* actual_type);
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_operator_error = "test-operator-error";
#define MR_FUNC_NAME _func_name_test_operator_error
Returncode test_operator_error(String* operator, String* expected_type, String* actual_type) {
  String* input_text = &(String){128, 0, (char[128]){0}};
  CHECK(550, String_copy(input_text, &(String){3, 2, "2 "}) )
  CHECK(551, String_concat(input_text, operator) )
  CHECK(552, String_concat(input_text, &(String){9, 8, " (i > 4)"}) )
  String* expected_error = &(String){128, 0, (char[128]){0}};
  CHECK(554, String_copy(expected_error, &(String){11, 10, "operator \""}) )
  CHECK(555, String_concat(expected_error, operator) )
  CHECK(556, String_concat(expected_error, &(String){13, 12, "\" expected \""}) )
  CHECK(557, String_concat(expected_error, expected_type) )
  CHECK(558, String_concat(expected_error, &(String){17, 16, "\" operand, got \""}) )
  CHECK(559, String_concat(expected_error, actual_type) )
  CHECK(560, String_concat(expected_error, &(String){2, 1, "\""}) )
  CHECK(561, test_code_error(input_text, expected_error) )
  CHECK(562, String_copy(input_text, &(String){9, 8, "(i > 4) "}) )
  CHECK(563, String_concat(input_text, operator) )
  CHECK(564, String_concat(input_text, &(String){3, 2, " 2"}) )
  CHECK(565, test_code_error(input_text, expected_error) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_question_expression();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_question_expression = "test-question-expression";
#define MR_FUNC_NAME _func_name_test_question_expression
Returncode test_question_expression() {
  CHECK(569, test_code(&(String){10, 9, "b := str?"}, &(String){17, 16, "b = str != NULL;"}) )
  CHECK(570, test_code(&(String){14, 13, "b := not str?"}, &(String){21, 20, "b = ! (str != NULL);"}) )
  CHECK(571, test_code_error(&(String){10, 9, "(i := 2)?"}, &(String){34, 33, "cannot use \"?\" on void expression"}) )
  CHECK(572, test_code_error(&(String){3, 2, "i?"}, &(String){29, 28, "cannot use \"?\" on type \"Int\""}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_dynamic();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_dynamic = "test-dynamic";
#define MR_FUNC_NAME _func_name_test_dynamic
Returncode test_dynamic() {
  CHECK(576, test_code(&(String){9, 8, "var Ta a"}, &(String){73, 72, "Ta a_Var = {0};\n  Ta* a = &a_Var;\n  Ta_Dynamic* a_Dynamic = &Ta_dynamic;"}) )
  CHECK(579, test_code(&(String){10, 9, "user Ta a"}, &(String){46, 45, "Ta* a = NULL;\n  Ta_Dynamic* a_Dynamic = NULL;"}) )
  CHECK(581, test_code(&(String){11, 10, "ta := Ta()"}, &(String){186, 185, "Ta* aux_Ta_0 = NULL;\n  Ta_Dynamic* aux_Ta_0_Dynamic = &Ta_dynamic;\n  aux_Ta_0 = calloc(1, sizeof(Ta));\n  if (aux_Ta_0 == NULL) RAISE(1)\n  ta_Dynamic = aux_Ta_0_Dynamic;\n  ta = aux_Ta_0;"}) )
  CHECK(584, test_code(&(String){9, 8, "new Ta a"}, &(String){108, 107, "Ta* a = NULL;\n  Ta_Dynamic* a_Dynamic = &Ta_dynamic;\n  a = calloc(1, sizeof(Ta));\n  if (a == NULL) RAISE(1)"}) )
  CHECK(587, test_code(&(String){14, 13, "user Ta a(ta)"}, &(String){82, 81, "Ta* a = NULL;\n  Ta_Dynamic* a_Dynamic = NULL;\n  a = ta;\n  a_Dynamic = ta_Dynamic;"}) )
  CHECK(590, test_code(&(String){9, 8, "ta := ta"}, &(String){36, 35, "ta_Dynamic = ta_Dynamic;\n  ta = ta;"}) )
  CHECK(591, test_code(&(String){9, 8, "ta := tb"}, &(String){56, 55, "ta_Dynamic = &(tb_Dynamic->_base);\n  ta = &(tb->_base);"}) )
  CHECK(594, test_code(&(String){9, 8, "ta := tc"}, &(String){68, 67, "ta_Dynamic = &(tc_Dynamic->_base._base);\n  ta = &(tc->_base._base);"}) )
  CHECK(597, test_code(&(String){8, 7, "ta := _"}, &(String){32, 31, "ta_Dynamic = NULL;\n  ta = NULL;"}) )
  CHECK(598, test_code(&(String){32, 31, "user Array{Ta} aa\n  ta := aa[4]"}, &(String){127, 126, "Array* aa = NULL;\n  if ((4) < 0 || (4) >= (aa)->length) RAISE(2)\n  ta_Dynamic = &Ta_dynamic;\n  ta = ((Ta**)((aa)->values))[4];"}) )
  CHECK(601, test_code(&(String){32, 31, "user Array{Tc} ca\n  ta := ca[4]"}, &(String){161, 160, "Array* ca = NULL;\n  if ((4) < 0 || (4) >= (ca)->length) RAISE(2)\n  ta_Dynamic = &(&Tc_dynamic->_base._base);\n  ta = &((((Tc**)((ca)->values))[4])->_base._base);"}) )
  CHECK(604, test_code(&(String){9, 8, "ta.dyn()"}, &(String){78, 77, "if (ta_Dynamic == NULL) RAISE(1)\n  CHECK(1, ta_Dynamic->dyn(ta, ta_Dynamic) )"}) )
  CHECK(607, test_code(&(String){9, 8, "tb.dyn()"}, &(String){104, 103, "if (tb_Dynamic == NULL) RAISE(1)\n  CHECK(1, tb_Dynamic->_base.dyn(&(tb->_base), &(tb_Dynamic->_base)) )"}) )
  CHECK(610, test_code(&(String){9, 8, "tc.dyn()"}, &(String){122, 121, "if (tc_Dynamic == NULL) RAISE(1)\n  CHECK(1, tc_Dynamic->_base._base.dyn(&(tc->_base._base), &(tc_Dynamic->_base._base)) )"}) )
  CHECK(613, test_code(&(String){18, 17, "fun7()->(user ta)"}, &(String){79, 78, "if (ta != NULL) RAISE(1)\n  CHECK(1, fun7((void*)&(ta), (void*)&(ta_Dynamic)) )"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_function_object();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_function_object = "test-function-object";
#define MR_FUNC_NAME _func_name_test_function_object
Returncode test_function_object() {
  CHECK(619, test_code(&(String){39, 38, "var Func{()} fun\n  fun := fun0\n  fun()"}, &(String){93, 92, "Returncode (*fun)(void) = NULL;\n  fun = fun0;\n  if (fun == NULL) RAISE(3)\n  CHECK(3, fun() )"}) )
  CHECK(622, test_code(&(String){83, 82, "var Func{(copy Int x)->(copy Int y)} fun(fun5)\n  var Int x\n  fun(copy 9)->(copy x)"}, &(String){122, 121, "Returncode (*fun)(Int x, Int* y) = NULL;\n  Int x = 0;\n  fun = fun5;\n  if (fun == NULL) RAISE(3)\n  CHECK(3, fun(9, &(x)) )"}) )
  CHECK(625, test_code(&(String){54, 53, "var Func{(var Test self)} fun(Test.meth)\n  fun(var t)"}, &(String){105, 104, "Returncode (*fun)(Test* self) = NULL;\n  fun = Test_meth;\n  if (fun == NULL) RAISE(2)\n  CHECK(2, fun(t) )"}) )
  CHECK(628, test_code(&(String){40, 39, "var Func{()} fun\n  fun := _\n  b := fun?"}, &(String){65, 64, "Returncode (*fun)(void) = NULL;\n  fun = NULL;\n  b = fun != NULL;"}) )
  CHECK(631, test_code(&(String){24, 23, "t.fun := fun0\n  t.fun()"}, &(String){120, 119, "if (t == NULL) RAISE(1)\n  t->fun = fun0;\n  if (t == NULL) RAISE(2)\n  if (t->fun == NULL) RAISE(2)\n  CHECK(2, t->fun() )"}) )
  String* expected = &(String){1024, 0, (char[1024]){0}};
  CHECK(635, String_copy(expected, &(String){38, 37, "Returncode (*farr_Values[38])(void);\n"}) )
  CHECK(636, String_concat(expected, &(String){32, 31, "  Array farr_Var = {38, NULL};\n"}) )
  CHECK(637, String_concat(expected, &(String){28, 27, "  Array* farr = &farr_Var;\n"}) )
  CHECK(638, String_concat(expected, &(String){34, 33, "  farr_Var.values = farr_Values;\n"}) )
  CHECK(639, String_concat(expected, &(String){50, 49, "  if ((3) < 0 || (3) >= (farr)->length) RAISE(2)\n"}) )
  CHECK(640, String_concat(expected, &(String){47, 46, "  ((Returncode (**)(void))((farr)->values))[3]"}) )
  CHECK(641, String_concat(expected, &(String){10, 9, " = fun0;\n"}) )
  CHECK(642, String_concat(expected, &(String){50, 49, "  if ((3) < 0 || (3) >= (farr)->length) RAISE(3)\n"}) )
  CHECK(643, String_concat(expected, &(String){51, 50, "  if (((Returncode (**)(void))((farr)->values))[3]"}) )
  CHECK(644, String_concat(expected, &(String){20, 19, " == NULL) RAISE(3)\n"}) )
  CHECK(645, String_concat(expected, &(String){10, 9, "  CHECK(3"}) )
  CHECK(646, String_concat(expected, &(String){53, 52, ", (((Returncode (**)(void))((farr)->values))[3])() )"}) )
  CHECK(647, test_code(&(String){58, 57, "var Array{38:Func{()}} farr\n  farr[3] := fun0\n  farr[3]()"}, expected) )
  CHECK(650, test_code_error(&(String){15, 14, "var Func error"}, &(String){35, 34, "missing arguments in function type"}) )
  CHECK(652, test_code_error(&(String){24, 23, "var Array{3:Func} error"}, &(String){35, 34, "missing arguments in function type"}) )
  CHECK(654, test_code_error(&(String){17, 16, "var Func{} error"}, &(String){43, 42, "expected \"(\" inside Function type, got \"}\""}) )
  CHECK(657, test_code_error(&(String){20, 19, "var Func{() } error"}, &(String){22, 21, "expected \"}\", got \" \""}) )
  CHECK(658, test_code_error(&(String){23, 22, "var Func{()} fun(fun1)"}, &(String){20, 19, "too many parameters"}) )
  CHECK(660, test_code_error(&(String){45, 44, "var Func{()->(copy Int x)} fun\n  fun := fun0"}, &(String){16, 15, "too few outputs"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif


#if MR_STAGE == MR_DECLARATIONS
Returncode test_builtin();
#elif MR_STAGE == MR_FUNCTIONS
static char* _func_name_test_builtin = "test-builtin";
#define MR_FUNC_NAME _func_name_test_builtin
Returncode test_builtin() {
  CHECK(666, test_code(&(String){16, 15, "i.str(user str)"}, &(String){27, 26, "CHECK(1, Int_str(i, str) )"}) )
  CHECK(667, test_code(&(String){10, 9, "b := true"}, &(String){10, 9, "b = true;"}) )
  CHECK(668, test_code(&(String){11, 10, "b := false"}, &(String){11, 10, "b = false;"}) )
  CHECK(669, test_code(&(String){9, 8, "c := EOF"}, &(String){9, 8, "c = EOF;"}) )
  CHECK(670, test_code(&(String){16, 15, "i := arr.length"}, &(String){45, 44, "if (arr == NULL) RAISE(1)\n  i = arr->length;"}) )
  CHECK(673, test_code(&(String){16, 15, "i := str.length"}, &(String){45, 44, "if (str == NULL) RAISE(1)\n  i = str->length;"}) )
  CHECK(676, test_code(&(String){12, 11, "str.clear()"}, &(String){29, 28, "CHECK(1, String_clear(str) )"}) )
  CHECK(677, test_code(&(String){30, 29, "str.equal(user str)->(copy b)"}, &(String){40, 39, "CHECK(1, String_equal(str, str, &(b)) )"}) )
  CHECK(680, test_code(&(String){26, 25, "str.get(copy i)->(copy c)"}, &(String){36, 35, "CHECK(1, String_get(str, i, &(c)) )"}) )
  CHECK(683, test_code(&(String){19, 18, "str.append(copy c)"}, &(String){33, 32, "CHECK(1, String_append(str, c) )"}) )
  CHECK(684, test_code(&(String){19, 18, "str.copy(user str)"}, &(String){33, 32, "CHECK(1, String_copy(str, str) )"}) )
  CHECK(685, test_code(&(String){21, 20, "str.concat(user str)"}, &(String){35, 34, "CHECK(1, String_concat(str, str) )"}) )
  CHECK(687, test_code(&(String){23, 22, "str.concat-int(copy i)"}, &(String){37, 36, "CHECK(1, String_concat_int(str, i) )"}) )
  CHECK(690, test_code(&(String){29, 28, "str.find(user str)->(copy i)"}, &(String){39, 38, "CHECK(1, String_find(str, str, &(i)) )"}) )
  CHECK(693, test_code(&(String){26, 25, "str.has(copy c)->(copy b)"}, &(String){36, 35, "CHECK(1, String_has(str, c, &(b)) )"}) )
  CHECK(696, test_code(&(String){39, 38, "file-open-read(user str)->(owner fobj)"}, &(String){40, 39, "CHECK(1, file_open_read(str, &(fobj)) )"}) )
  CHECK(699, test_code(&(String){40, 39, "file-open-write(user str)->(owner fobj)"}, &(String){41, 40, "CHECK(1, file_open_write(str, &(fobj)) )"}) )
  CHECK(702, test_code(&(String){13, 12, "fobj.close()"}, &(String){28, 27, "CHECK(1, File_close(fobj) )"}) )
  CHECK(703, test_code(&(String){22, 21, "fobj.getc()->(copy c)"}, &(String){33, 32, "CHECK(1, File_getc(fobj, &(c)) )"}) )
  CHECK(705, test_code(&(String){18, 17, "fobj.putc(copy c)"}, &(String){30, 29, "CHECK(1, File_putc(fobj, c) )"}) )
  CHECK(706, test_code(&(String){21, 20, "fobj.write(user str)"}, &(String){33, 32, "CHECK(1, File_write(fobj, str) )"}) )
  CHECK(708, test_code(&(String){34, 33, "user Array{String} argv(sys.argv)"}, &(String){68, 67, "Array* argv = NULL;\n  if (sys == NULL) RAISE(1)\n  argv = sys->argv;"}) )
  CHECK(711, test_code(&(String){20, 19, "sys.print(user str)"}, &(String){31, 30, "CHECK(1, Sys_print(sys, str) )"}) )
  CHECK(712, test_code(&(String){22, 21, "sys.println(user str)"}, &(String){33, 32, "CHECK(1, Sys_println(sys, str) )"}) )
  CHECK(714, test_code(&(String){17, 16, "sys.exit(copy i)"}, &(String){28, 27, "CHECK(1, Sys_exit(sys, i) )"}) )
  CHECK(715, test_code(&(String){31, 30, "sys.system(user str)->(copy i)"}, &(String){38, 37, "CHECK(1, Sys_system(sys, str, &(i)) )"}) )
  CHECK(718, test_code(&(String){41, 40, "sys.getenv(user str, user str)->(copy b)"}, &(String){43, 42, "CHECK(1, Sys_getenv(sys, str, str, &(b)) )"}) )
  return OK;
}
#undef MR_FUNC_NAME
#endif

#undef MR_FILE_NAME

#ifndef MR_INCLUDES
#define MR_INCLUDES
#include "global/argument.c"
#include "global/common.c"
#include "global/file-io.c"
#include "global/global.c"
#include "global/list.c"
#include "global/map.c"
#include "expression/call.c"
#include "expression/constant.c"
#include "expression/container.c"
#include "expression/expression.c"
#include "expression/slice.c"
#include "expression/symbol.c"
#include "syntax-tree/block.c"
#include "syntax-tree/branch.c"
#include "syntax-tree/code.c"
#include "syntax-tree/code-flow.c"
#include "syntax-tree/function.c"
#include "syntax-tree/node.c"
#include "syntax-tree/root.c"
#include "syntax-tree/test.c"
#include "syntax-tree/type.c"
#include "syntax-tree/variable.c"
#include "tests/global-tests.c"
#include "tests/syntax-tree-tests.c"
#include "mr4-compiler.c"
#if MR_STAGE == MR_TYPES(1)
#undef MR_STAGE
#define MR_STAGE MR_TYPES(2)
#elif MR_STAGE == MR_TYPES(2)
#undef MR_STAGE
#define MR_STAGE MR_TYPES(3)
#elif MR_STAGE == MR_TYPES(3)
#undef MR_STAGE
#define MR_STAGE MR_TYPES(4)
#elif MR_STAGE == MR_TYPES(4)
#undef MR_STAGE
#define MR_STAGE MR_TYPES(5)
#endif
#undef MR_INCLUDES
#endif

#endif
