#include<stdio.h>
#include <sys/_types/_id_t.h>
struct Student {
  int ID;
  char name[20];
  int score;
} Student_p ;
int update_score(struct Student *p , int id , int score) {
  int return_result;
  printf("请输入要更改成绩的学生的id和成绩：\n");
  scanf("%d %d",&id,&score);
  if(id>0 && id<7 && score == (p+id)->score) {
    printf("请输入更改后的成绩：");
    scanf("%d",&score);
    (p+id)->score = score;
    return_result = 1;
    printf("%d\n",return_result);
    return return_result;
  } else {
    return_result = -1;
    printf("查找失败：%d\n",return_result);
    return return_result;
    }
}
int main()
{
  int id;
  int score;
  struct Student Data[6] = {
    {1,"A",90},
    {2,"B",90},
    {3,"C",90},
    {4,"D",90},
    {5,"E",90},
    {6,"F",90},
  };
  struct Student *p;
  p = Data;

  update_score( p , id , score );
  for(int i = 0; i < 6 ; i++) {
    printf("%d %s %d\n",Data[i].ID,Data[i].name,Data[i].score);
  }
}
