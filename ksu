#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ( int k, char **b){
  int c,a,d,f;
  if (k == 3){

    a = atoi(b[1]);
    d = atoi(b[2]);
    if (a == 0 && d == 0){
      a = a + d;
      printf("%d\n",a);
    }
    while(a != d){
      if( a > d){
        a = a - d;
      }
      else{
        d = d - a;
      }
    }
    printf("%d\n", a);
    }
  if(k == 4){

    a = atoi(b[1]);
    d = atoi(b[2]);
    f = atoi(b[3]);
    c = a + d + f;
    printf("%d\n",c);
  }
  if((k < 3)  || (k > 4)){
     printf("TRY AGAIN, SWEETTIE\n");
  }

  return 0;
}
