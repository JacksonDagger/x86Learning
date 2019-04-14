long arrSum(long length, long * arr){
  long sum = 0;
  while(length > 0){
    sum += *arr;
    length--;
    arr += 8;
  }
  return sum;
}
