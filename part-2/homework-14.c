#include <arm/types.h>
#include<stdio.h>
struct Fraction 
{
  int x;
  int y;
  float result;
}FractionA  , FractionB  ;
float FractionAdd(struct Fraction a , struct Fraction b ){
  
  printf("请输入a的分子和分母：");
  scanf("%d %d",&a.x, &a.y);
  
  printf("请输入b的分子和分母：");
  scanf("%d %d",&b.x,&b.y);

  float result1 = (float)a.x / a.y;
  float result2 = (float)b.x / b.y;

  float Result = result1 + result2; 

  printf("Result = %f\n",Result);
  return Result;
}
float FractionMul(struct Fraction a , struct Fraction b){

  printf("请输入a的分子和分母：");
  scanf("%d %d",&a.x,&a.y);

  printf("请输入b的分子和分母：");
  scanf("%d %d",&b.x,&b.y);  

  float result1 = (float)a.x / a.y;
  float result2 = (float)b.x / b.y;
  
  float Result = result1 * result2;

  printf("Result = %f\n",Result);
  return Result;
}
int main(){

  printf("开始加法运算：\n");
  FractionAdd(FractionA, FractionB);

  printf("接下来进行乘法运算：\n");
  FractionMul(FractionA, FractionB);

  
}

  

  
  





  
