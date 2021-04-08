#include <stdio.h>

int arr[10] = {1,3,5,7,9,10,8,6,4,2};

void swap(int a, int b) {
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

int LomutoPartition(int left, int right) {
  int partition = arr[left];
  int s = left;
  for(int i=left+1;i<right;i++) {
    if(arr[i] < partition) {
      s++;
      swap(s,i);
    }
  }
  swap(left,s);
  return s;
}

int main(void) {
  int res = LomutoPartition(0,13);
  printf("%d\n",res);
  return 0;
}
