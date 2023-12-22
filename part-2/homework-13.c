#include<stdio.h>
struct A{
  int a;
  char b;
  short c;
};
struct B{
  char b;
  int a;
  short c;
};
int main(){
  printf("%lu\n",sizeof(struct A));
  printf("%lu\n",sizeof(struct B));
  
}
