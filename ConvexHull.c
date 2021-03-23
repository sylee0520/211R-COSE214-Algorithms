#include <stdio.h>

struct Point {
  int x,y;
};
struct Point p[5];
int answer[5];

void convexHull(x1,y1,x2,y2,first,second) {

  if(x1==x2) {
    int left = 0;
    int right = 0;
    for(int i=0;i<5;i++) {
      if(i!=first && i!=second) {
        if(p[i].x<=x1) {
          left++;
        } else {
          right++;
        }
      }
    }
    if(left==0 || right==0) {
      answer[first] = 1;
      answer[second] = 1;
    }
  }
  else {
      double a = (y2-y1) / (x2-x1);
      double b = y1 - a * x1;
      int lower = 0;
      int upper = 0;

      for(int i=0;i<5;i++) {
        if(i!=first && i!=second) {
          double newX = p[i].x;
          double newY = p[i].y;
          // 좌표가 선분보다 위에 있을 때
          if(a*newX+b <= newY) {
            upper++;
          } else {
            lower++;
          }
        }
      }
      if(lower==0 || upper==0) {
        answer[first] = 1;
        answer[second] = 1;
    }
  }

}

int main(void) {
  for(int i=0;i<5;i++) {
    scanf("%d %d",&p[i].x,&p[i].y);
  }

  for(int i=0;i<4;i++) {
    for(int j=i+1;j<5;j++) {
      convexHull(p[i].x,p[i].y,p[j].x,p[j].y,i,j);
    }
  }
  for(int i=0;i<5;i++) {
    printf("%d\n",answer[i]);
  }

  return 0;
}
