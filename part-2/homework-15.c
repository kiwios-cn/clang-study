#include<stdio.h>
#include<math.h>
#include <stdlib.h>
struct Point {
  int x;
  int y;
}PointP1,PointP2;
float Distance(struct Point a , struct Point b) {
  printf("请输入P1的横纵坐标：");
  scanf("%d %d",&a.x,&a.y);
  printf("请输入P2的横纵坐标：");
  scanf("%d %d",&b.x,&b.y);
  
  float length = sqrt(pow(b.x - a.x , 2)+ pow(b.y - a.y , 2));
  printf("直线距离=%f\n",length);
  
  return length;
} 
int Manhattan_distance(struct Point a , struct Point b) {
  printf("请输入P1的横纵坐标：");
  scanf("%d %d",&a.x,&a.y);
  printf("请输入P2的横纵坐标：");
  scanf("%d %d",&b.x,&b.y);

  int length = abs(a.x-b.x)+abs(a.y-b.y);
  printf("曼哈顿距离=%d\n",length);
  
  return length;  
}
int main(){

  printf("计算直线距离：\n");
  Distance(PointP1,PointP2);
  printf("计算曼哈顿距离：\n");
  Manhattan_distance(PointP1,PointP2); 
  
}
