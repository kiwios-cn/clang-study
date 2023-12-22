#include<stdio.h>
int count(int *p) {
  (*p)++;
  if(*p == 10) {
    *p = 0;
  }
  return(*p);
}



int main() 
{
  int a = 0;
  int *p = &a;
  count(p);
  count(p);
  printf("%d\n", a);
 
}
