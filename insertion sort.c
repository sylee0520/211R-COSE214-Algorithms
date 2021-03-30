#include <stdio.h>

int main(void) {
  int list[5] = {5,4,3,2,1};
  int index;
  for(int i=1;i<5;i++) {
    int value = list[i];

    for(int j=i-1;0<=j;j--) {
      if(list[j] < value){
        index = j;
        break;
      }
      list[j+1] = list[j];
    }
    list[index] = value;
  }
  
  for(int i=0;i<5;i++) {
    printf("%d ",list[i]);
  }

  return 0;
}
