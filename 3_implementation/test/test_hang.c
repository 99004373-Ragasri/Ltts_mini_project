#include "hang.h"
#include "unity.h"

int test_getRandom(int n);

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

int test_getRandom(int n){
n=4
flag = true
TEST_ASSERT_EQUAL(clock, getRandom(4,clock));
}
