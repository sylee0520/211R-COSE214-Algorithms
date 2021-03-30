#include <stdio.h>

int inDegree[5]={0,};

int isEnd(n) {
  for(int i=0;i<n;i++) {
    if(inDegree[i] != 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int adj[5][5] = {
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,1,1},
    {0,0,0,0,1},
    {0,0,0,0,0}
  };

  
  for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
      inDegree[i]+=adj[j][i];
    }
  }

  int result[5] = {0,};
  int index = 0;
  for(int i=0;i<5;i++) {
    if(inDegree[i] == 0) {
      result[index] = i;
      index++;
      for(int j=0;j<5;j++) {
        if(adj[i][j] == 1) {
          adj[i][j] = 0;
          inDegree[j]--;
        }
      }
    }
  }
  
  while(1) {
    if(isEnd(5)) {
      break;
    }
    printf("%d",1);
    for(int i=0;i<5;i++) {
      if(inDegree[i] == 0) {
        result[index] = i;
        index++;
        for(int j=0;j<5;j++) {
          if(adj[i][j] == 1) {
            adj[i][j] = 0;
            inDegree[j]--;
          }
        }
      }
  }
}  
  for(int i=0;i<5;i++) {
    printf("%d ",result[i]);
  }
  return 0;
}
