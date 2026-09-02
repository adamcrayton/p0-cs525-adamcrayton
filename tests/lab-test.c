#include <stdlib.h>
#include <stdio.h>
#include "harness/unity.h"
#include "../src/lab.h"


void setUp(void) {
  printf("Setting up tests...\n");
}

void tearDown(void) {
  printf("Tearing down tests...\n");
}

void test_get_greeting(void) {
  char *greeting = get_greeting("Alice");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, Alice!", greeting);
  free(greeting); // Free the allocated memory for the greeting

  greeting = get_greeting(NULL);
  TEST_ASSERT_NULL(greeting);

  greeting = get_greeting("");
  TEST_ASSERT_NOT_NULL(greeting);
  TEST_ASSERT_EQUAL_STRING("Hello, !", greeting);
  free(greeting);
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(6, multiply(2, 3));
  TEST_ASSERT_EQUAL(-15, multiply(-5, 3));
  TEST_ASSERT_EQUAL(0, multiply(0, 10));
}

void test_incorrect_sum(void) {
  TEST_ASSERT_FALSE(5 == incorrect_sum(2, 3)); // This will fail because bad_sum is incorrect
  TEST_ASSERT_FALSE(-2 == incorrect_sum(-5, 3)); // This will also fail
  TEST_ASSERT_FALSE(10 == incorrect_sum(5, 5)); // This will fail as well
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_get_greeting);
  RUN_TEST(test_multiply);
  RUN_TEST(test_incorrect_sum);
  return UNITY_END();
}
