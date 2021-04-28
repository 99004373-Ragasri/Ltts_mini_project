#include "hang.h"
#include "unity.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define PROJECT_NAME   "hangman"

int test_getRandom(int *n);

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

int test_getRandom(int *n){
  int n=4;
  bool min(n){
    if(geRandom()>n){
      return true;
    }else{
      return false;
    }

TEST_ASSERT_EQUAL(min(4), min(getRandom(4)));
}
