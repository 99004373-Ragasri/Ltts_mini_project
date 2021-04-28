#include "hang.h"
#include "unity.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define PROJECT_NAME   "hangman"

void test_getRandom();

void setUp(){

}
void tearDown(){

}
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_getRandom);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_getRandom(){
 
TEST_ASSERT_EQUAL(true, getRandom(20)<20);
}
