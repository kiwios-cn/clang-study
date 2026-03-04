#include <stdio.h>

int main() {
  int num_1 = 10;
  int num_2 = 20;
  
  int *p = &num_1;
  *(p+1) = num_2;
  *(p+2) = num_1+num_2;

  p[0] = num_1;
  p[1] = num_2;
  printf("%d %d %d",p[0],p[1],p[2]);





  
}
