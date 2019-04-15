/**
Testing a program to sum arrays in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <stdlib.h>

extern long insertion_sort(unsigned long length, long * arr);

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
* tests the check sort function, returns 0 if it works, returns the number of the first test that failed otherwise
*/
int test_check_sort(){
  long arr0[5] = {-3, -2, -2, 0, 1};
  long arr1[5] = {-3, -3, 2, 1, 2};

  /* test 1 */
  if(c
}


int main(int argc, char **argv) {

  int fail = 0;
  long rv;

  
}
