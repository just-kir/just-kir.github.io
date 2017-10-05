#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ( int c, char **b){
  if (b[1] != NULL && b[2] != NULL && b[3] == NULL){
    int a,b;
    a = atoi(b[1]);
    d = atoi(b[2]);
    if (a == 0 && b == 0){
      a = a + b;
      printf("%d\n",a);
    }
    while(a != b){
      if( a > b){
        a = a - b;
      }
      else{
        b = b - a;
      }
    printf("%d\n", a);
    }
  elif(b[1] != NULL && b[2] != NULL && b[3] != NULL && b[4] == NULL){
    int c,a,d,f;
    a = atoi(b[1]);
    d = atoi(b[2]);
    f = atoi(b[3]);
    c = a + d + f;
    prinf("%d\n",c)
  }
  else{
    printf("TRY AGAIN, SWETTIE\n")
  }
  }}
