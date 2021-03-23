#include <stdio.h>
#include <math.h>

struct Point {
  int x,y;
};

double Min(a,b) {
  if(a<=b) {
    return a;
  }
  else {
    return b;
  }
}

struct Point p[5];
double min = 9876;

double closestPair() {
  for(int i=0;i<4;i++) {
    for(int j=i+1;j<5;j++) {
      double distance = sqrt(pow((p[i].x-p[j].x),2)+pow((p[i].y-p[j].y),2));
      min = Min(min,distance);
    }
  }
  return min;
}

int main(void) {
  for(int i=0;i<5;i++) {
    scanf("%d %d",&p[i].x,&p[i].y);
  }
  double result = closestPair();
  printf("%f\n",result);

  return 0;
}
