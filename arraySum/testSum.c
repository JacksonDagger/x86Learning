/**
Testing a program to sum arrays in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <stdlib.h>

extern long arraySum(long length, long * arr);

int main(int argc, char **argv) {

  int fail = 0;
  long rv;

  long arr0[1] = {0}; 
  if((rv = arraySum(1, arr0)) != 0){
    fail++;
    printf("Test 0 failed with value %ld \n", rv);
  }

  long arr1[2] = {0, 1};
  if((rv = arraySum(2, arr1)) != 1){
    fail++;
    printf("Test 1 failed with value %ld \n", rv);
  }

  long arr2[2] = {3, 4};
  if((rv = arraySum(2, arr2)) != 7){
    fail++;
    printf("Test 2 failed with value %ld \n", rv);
  }

  long arr3[1] = {-1};
  if((rv = arraySum(1, arr3)) != -1){
    fail++;
    printf("Test 3 failed with value %ld \n", rv);
  }

  long arr4[3] = {3, 4, -5};
  if((rv = arraySum(3, arr4)) != 2){
    fail++;
    printf("Test 4 failed with value %ld \n", rv);
  }

  long arr5[3] = {-5, 3, 8};
  if((rv = arraySum(3, arr5)) != 6){
    fail++;
    printf("Test 5 failed with value %ld \n", rv);
  }

  long arr6[4] = {-5, -1, -2, -3};
  if((rv = arraySum(4, arr6)) != -11){
    fail++;
    printf("Test 6 failed with value %ld \n", rv);
  }

  long arr7[10] = {-1, 1, -1, 1, 1, -1, 1, -1, -1, 1};
  if((rv = arraySum(10, arr7)) != 0){
    fail++;
    printf("Test 7 failed with value %ld \n", rv);
  }

  if (fail == 0)
    printf("sum works\n");
  return fail;
}
