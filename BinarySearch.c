#include <stdio.h>
int arr[13] = {3,14,27,31,39,42,55,70,74,81,85,93,98};

int binarySearch(int key, int left, int right) {
  int mid = (left+right)/2;
  if(right < left) {
    return -1;
  }
  if(arr[mid] == key) {
    return mid;
  }
  else if(key < arr[mid]) {
    return binarySearch(key, left, mid-1);
  }
  else {
    return binarySearch(key, mid+1, right);
  }
}

int main(void) {
  int res = binarySearch(70,0,12);
  printf("%d\n",res);
  return 0;
}
