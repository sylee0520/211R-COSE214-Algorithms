#include <stdio.h>

int list[10];
int key;
int sequentialSearch(key) {
  for(int i=0;i<10;i++) {
    if(list[i] == key) {
      return i;
    }
  }
  return -1;
}

int main(void) {

  for(int i = 0; i < 10; i++) {
    scanf("%d",&list[i]);
  }
  scanf("%d",&key);

  for(int i = 0; i < 10; i++) {
    printf("%d ",list[i]);
  }
  printf("\n");

  int result = sequentialSearch(key);
  if(result == -1) {
    printf("Search Failed");
  } else {
    printf("key's index is %d",result);
  }

  return 0;
}
