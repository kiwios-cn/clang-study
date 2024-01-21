#include<stdio.h>
struct Student {
  int ID;
  char name[20];
  int score;
};
void sort_by_student_id( struct Student *s) {
  struct Student temp;
  for(int i = 0 ; i < 6 ; i++) {
    for(int j = i  ; j < 6 ; j++) {
      if((s+i)->ID > (s+j)->ID) {
        temp = s[i]; 
        s[i] = s[j];
        s[j] = temp;
      } 
    }
  }
  
}
int main() 
{
  struct Student a[6] = {
    {3,"C",30},
    {5,"E",50},
    {2,"B",20},
    {1,"A",10},
    {4,"D",40},
    {6,"F",60},
  };
  printf("打印原数组：\n");
  for(int i = 0 ; i < 6 ; i++) {
    printf("%d %s %d\n",a[i].ID,a[i].name,a[i].score);
  }
  
  sort_by_student_id( a);
  
  printf("输出排序后的数组：\n");
  for(int i = 0 ; i < 6 ; i++) {
    printf("%d %s %d\n",a[i].ID,a[i].name,a[i].score);
  }
 
}
