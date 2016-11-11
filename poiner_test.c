#include <stdio.h>

int * int_new(){
  int i = 5;
  int * j = &i;
  return j;
}

int main(){
  int * k = int_new();
  printf("%d", *k);
}
