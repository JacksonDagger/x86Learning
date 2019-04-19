/**
Testing a program to sum arrays in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <stdlib.h>

extern void insertion_sort(unsigned long length, long * arr);

/*
* returns 0 if the array is sorted, returns the position of the first element that is smaller than the previous element otherwise
* @param length: length of the array
* @param arr: array to be checked
*/
unsigned long check_sort(unsigned long length, long * arr){
  for(unsigned long i = 1; i < length; i++){
    if (arr[i] < arr[i-1]) return i;
  }
  return 0;
}


/*
* returns -1 if the two arrays are the same and the index of the first unequal position otherwise
* @param length: the length of the arrays
* @param arr1[]: first array
* @param arr2[]: second array
*/
unsigned long array_equals(unsigned long length, long * arr1, long * arr2){
  for(unsigned long i = 0; i < length; i++){
    if(arr1[i] != arr2[i]) return i;
  }
  return -1;
}


/*
* tests the check sort function, returns 0 if it works, returns the number of the first test that failed otherwise
*/
void test_check_sort(){
  long arr0[5] = {-3, -2, -2, 0, 1};
  long arr1[5] = {-3, -3, 2, 1, 2};

  printf("Starting tests of check_sort \n");
  if(check_sort(5, arr0)) printf("Test 1 failed \n");
  if(check_sort(0, arr1)) printf("Test 2 failed \n");
  if(check_sort(1, arr1)) printf("Test 3 failed \n");
  if(check_sort(3, arr1)) printf("Test 4 failed \n");
  if(!check_sort(5, arr1)) printf("Test 5 failed \n");
  printf("Done tests of check_sort \n");
}


/*
* tests the array_equals function
*/
void test_array_equals(){
  long arr0[5] = {-3, -2, -2, 0, 1};
  long arr1[5] = {-3, -3, 2, 1, 2};
  long arr2[5] = {-3, -3, 2, 1, 2};
  
  long rv;

  printf("Starting tests of array_equals \n");
  if((rv = array_equals(0, arr0, arr1)) != -1) printf("Test 1 failed with value: %ld \n", rv);
  if((rv = array_equals(5, arr0, arr1)) != 1) printf("Test 2 failed with value: %ld \n", rv);
  if((rv = array_equals(5, arr1, arr2)) != -1) printf("Test 3 failed with value: %ld \n", rv);
  printf("Done tests of array_equals \n");
}

void print_arr(unsigned long length, long * arr){
  for(unsigned long i = 0; i < length; i++) printf("%ld, ", arr[i]);
  printf("\n");
}


int main(int argc, char **argv) {
  long rv;

  /* test arrays */
  long arr1[1] = {1};
  long arr2[5] = {-1, 0, 8, 12, 15};
  long arr3[5] = {20, 3, -5, -10, -15};
  long arr4[2] = {2, 1};
  long arr5[9] = {8, 8, 5, -12, 17, 2, 0, -20, 7};
  
  /* sorted test arrays */
  long arr1s[1] = {1};
  long arr2s[5] = {-1, 0, 8, 12, 15};
  long arr3s[5] = {-15, -10, -5, 3, 20};
  long arr4s[2] = {1, 2};
  long arr5s[9] = {-20, -12, 0, 2, 5, 7, 8, 8, 17};

  /* testing test functions */

  /*
  test_array_equals();
  test_check_sort();
  */

  printf("Starting tests of insertion sort \n");

  printf("Test 1: ");
  insertion_sort(1, arr1);
  if((rv = array_equals(1, arr1, arr1s)) != -1) printf("failed at position %ld \n", rv);
  else printf("passed \n");

  printf("Test 2: ");
  insertion_sort(5, arr2);
  if((rv = array_equals(5, arr2, arr2s)) != -1) printf("failed at position %ld \n", rv);
  else printf("passed \n");

  printf("Test 3: ");
  insertion_sort(5, arr3);
  if((rv = array_equals(5, arr3, arr3s)) != -1) printf("failed at position %ld \n", rv);
  else printf("passed \n");

  printf("Test 4: ");
  insertion_sort(2, arr4);
  if((rv = array_equals(2, arr4, arr4s)) != -1) printf("failed at position %ld \n", rv);
  else printf("passed \n");
  
  printf("Test 5: ");
  insertion_sort(9, arr5);
  if((rv = array_equals(9, arr5, arr5s)) != -1) printf("failed at position %ld \n", rv);
  else printf("passed \n");

  printf("Done tests of insertion sort \n");
}
