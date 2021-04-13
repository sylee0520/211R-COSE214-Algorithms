#include <stdio.h>

int temp[10]={0,};

void Merge(int arr[], int left, int mid, int right) {
  int i=left,j=mid+1,k=left;
  while(i<=mid && j<=right) {
    if(arr[i]<=arr[j]) temp[k++] = arr[i++];
    else temp[k++] = arr[j++];
  }
  if(mid<i) {
    for(int l=j;l<=right;l++) {
      temp[k++] = arr[l];
    }
  }
  else {
    for(int l=i;l<=mid;l++) {
      temp[k++] = arr[l];
    }
  }
  for(int l=left;l<=right;l++) {
    arr[l] = temp[l];
  }

}

void Mergesort(int left, int right, int arr[]) {
  if(left < right) {
    int mid = (left+right) / 2;
    Mergesort(left,mid,arr);
    Mergesort(mid+1,right,arr);
    Merge(arr,left,mid,right);
  }

}

int main(void) {
  int arr[10] = {10,9,8,7,6,5,4,3,2,1};
  Mergesort(0, 9, arr);
  for(int i=0;i<10;i++) {
    printf("%d ",arr[i]);
  }
  return 0;
}
