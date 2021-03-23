#include <stdio.h>

int main(void) {
  int list[10];
  int max_val = -1;
  for(int i = 0; i < 10; i++) {
    scanf("%d",&list[i]);
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ",list[i]);
  }

  printf("\n");
  
  for(int i = 0; i < 10; i++) {
    max_val = list[i];
    int idx = i;
    for(int j = i+1; j < 10; j++) {
      if(list[j] < max_val) {
        max_val = list[j];
        idx = j;
      }
    }
    int temp = list[i];
    list[i] = list[idx];
    list[idx] = temp;
  }

  for(int i = 0; i < 10; i++) {
    printf("%d ",list[i]);
  }

  return 0;
}
