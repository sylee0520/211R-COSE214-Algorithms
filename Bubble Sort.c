#include <stdio.h>

int main(void) {
  int list[10];
  for(int i = 0; i < 10; i++) {
    scanf("%d",&list[i]);
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ",list[i]);
  }

  printf("\n");
  
  for(int i=0;i<10;i++) {
    for(int j=0;j<9;j++) {
      if(list[j] > list[j+1]) {
        int temp = list[j];
        list[j] = list[j+1];
        list[j+1] = temp;
      }
    }
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ",list[i]);
  }

  return 0;
}
