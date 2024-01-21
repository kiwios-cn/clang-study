#include<stdio.h>
#define N 3
struct Laptop
{
  char *model[20];
  char *color[20];
  int price;
};
struct Student 
{
  int ID;
  char name[20];
  struct Laptop comp;
};
int main() {

  struct Student Data[N];
  for(int i = 0 ; i < N ; i++) {
    printf("请输入：\n");
    scanf("%d",&Data[i].ID);
    scanf("%s",Data[i].name);
    scanf("%s",Data[i].comp.model);
    scanf("%s",Data[i].comp.color);
    scanf("%d",&Data[i].comp.price);
  
  }
  for(int i = 0 ; i < N ; i++){
    printf(" 输出：");
    printf(" %d",Data[i].ID);
    printf(" %s",Data[i].name);
    printf(" %s",Data[i].comp.model);
    printf(" %s",Data[i].comp.color);
    printf(" %d",Data[i].comp.price);
    printf("\n");  
  }















  
}
