#include <stdio.h>

//Decrease by a constant factor
int power(int n,int p) {
  if(p==0) {
    return 1;
  }
  else if(p % 2 == 0) {
    return power(n,p/2) * power(n,p/2);
  }
  else {
    return power(n,(p-1)/2) * power(n,(p-1)/2) * n;
  }
}

// Decrease by a constant
int power2(int n, int p) {
  if(p == 0) {
    return 1;
  }
  else {
    return n * power2(n,p-1);
  }
}

// Variable-size decrease
int gcd(int n,int m) {
  if(m == 0) {
    return n;
  }
  else {
    int r = n % m;
    n = m;
    m = r;
    return gcd(n,m);
  }
}

int main(void) {
  int p,n;
  scanf("%d %d",&n,&p);
  int res = power(n,p);
  int res2 = power2(n,p);
  int res3 = gcd(60,15);
  printf("%d\n",res);
  printf("%d\n",res2);
  printf("%d\n",res3);
  return 0;
}
