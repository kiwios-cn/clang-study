#include<stdio.h>
int main()
{
  char a = 'A' ;
  int x = 125 ;
  float p = 10.25 ;

  char *pa = &a;
  int *px = &x;
  float *pp = &p;

  printf("变量a的内容和地址为：%c 和 %p\n",a , pa);
  printf("变量x的内容和地址为：%d 和 %p\n", x ,px);
  printf("变量p的内容和地址为：%f 和 %p\n", p ,pp);
  
   return 0;
 
}
