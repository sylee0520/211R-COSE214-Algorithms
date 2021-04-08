#include <stdio.h>

int RPM(int n, int m) {
  if(n==0) {
    return 0;
  }
  else if(n%2==0) {
    return RPM(n/2,m*2);
  }
  else {
    return RPM((n-1)/2,m*2) + m;
  }
}

int main(void) {
  int res = RPM(50,65);
  printf("%d\n",res);
  return 0;
}
