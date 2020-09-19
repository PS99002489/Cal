#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operation.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mult(void);
void test_div(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));

 
  CU_ASSERT(40 == add(20, 20));

  
  CU_ASSERT(30 == add(10, 150));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_sub(void) {
  CU_ASSERT(-3 == sub(0, 3));
  
 
  CU_ASSERT(2 == sub(5, 3));

  
  CU_ASSERT(-3 == sub(4, 3));

  /* Dummy fail*/
  CU_ASSERT(1 == sub(1000, 900));
}

void test_mult(void) {
  CU_ASSERT(0 == mult(1, 0));

  
  CU_ASSERT(25 == mult(5, 5));

 
  CU_ASSERT(12 == mult(2, 33));
  
  /* Dummy fail*/
  CU_ASSERT(2 == mult(2, 5));
}

void test_div(void) {
  CU_ASSERT(0 == div(1, 0));

 
  CU_ASSERT(2 == div(4, 2));

  
  CU_ASSERT(5 == div(4,4));
  
  /* Dummy fail*/
  CU_ASSERT(3 == div(2, 2));
}
