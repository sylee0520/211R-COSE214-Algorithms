#include <stdio.h>

char pattern[4];
char string[11];

int stringMatching(){
  for(int i=0;i<=7;i++) {
    int cnt = 0;
    for(int j=0;j<3;j++) {
      if(string[i+j] == pattern[j]) {
        cnt++;
      }
    }
    if(cnt == 3) {
      return i;
    }
  }
  return -1;
}


int main(void) {
  scanf("%s",string);
  scanf("%s",pattern);

  int result = stringMatching();

  if(result == -1) {
    printf("Search Failed");
  }
  else {
    printf("Pattern is searched in %d",result);
  }
  return 0;
}
