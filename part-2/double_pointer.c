#include<stdio.h>
int main() 
{
  int array[9] = {1,8,6,2,5,4,8,3,7};
  int max_area = 0;
  int i = 0 , j = 8 ;//初始状态对最左端和最右端的数据（即边界）进行比较
  for(;i<j;) { //即循环到两者的距离为1时结束
    if(array[i]>array[j]) {
      j--;//只移动较小的数据，即较小的数据向较大数据靠拢，如果是移动较大者，那么在高度不变甚至变小的情况下，距离同时也要变小，容积不可能变大
      if(array[j+1]*(j-i+1)>max_area) {
        max_area = array[j+1]*(j-i+1);
      }
    } else {
      i++;      
      if(array[i-1]*(j-i+1)>max_area) {
       max_area = array[i-1]*(j-i+1); 
      }
    }
  }
  printf("%d\n",max_area);

  return 0;
}
//双指针法：
//以数组的左右边界作为标准，图形面积为min（x，y）*（y-x）,不妨设其为max_area
//if(x>y)，如果将x左移，变为x'，if（x'>x), S= x * (y-x-1) < max_area ; if(x'=x),S = x*(y-x-1) < max_area ; if(x'<x) , S = x'*(y-x-1)<max_area
//由此可见，如果移动较大者，那么面积始终会小于初值，只有移动较小者才有可能出现大于初值的情况
