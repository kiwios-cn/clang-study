#include<stdio.h>
struct Laptop {
  char *model;
  char *color;
  float price;
}Laptop_Data;
struct Student {
  int ID;
  char name[20];  
  struct Laptop model;
  struct Laptop color;
  struct Laptop price;
}Student_Data;
int main() {
  struct Student Data[3];
  for(int i = 0 ; i < 3 ; i++) {
    printf("请输入第%d个同学的信息：",i+1);
    scanf("%d %s %s %s %f",&Data[i].ID,Data[i].name,Data[i].model,Data[i].color,Data[i].price);
  }
  for(int i = 0 ; i < 3 ; i++ ) {
    printf("%d ")
  }

}
  
  
