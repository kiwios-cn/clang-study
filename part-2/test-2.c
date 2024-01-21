#include<stdio.h>
#define N 3
void input_Data(int *name , int *number , int *sex , int **score) {
  for(int i = 0 ; i < N ; i++) {
    printf("请输入第%d个学生的数据:" , i+1);
    scanf("%d %d %d" , &name[i] , &number[i] , &sex[i] );
    for(int j = 0 ; j < 5 ; j++) {
      printf("请输入第%d个学生的第%d项成绩：", i+1 , j+1);
      scanf("%d",&score[i][j]);
    }
  }
} 
void sort(int **score , int *average_score , int *score_sort) {
  for(int i = 0 ; i < N ; i++) {
    for(int j = 0 ; j < 5 ; j++) {
      int sum = 0;
      sum += score[i][j];
      *(average_score + i) = sum / N;
    }
  }
  for(int i = 0 ; i < N ; i++) {
    for(int j = i+1 ; j < N ; j++) {
      if(*(average_score+i) > *(average_score+j)) {
        int temp;
        temp = *(average_score+i);
        *(average_score+j) = *(average_score+i);
        *(average_score+i) = temp;
      }
    }
  }
}
void output_Data(int *average_score) {
  for(int i = 0 ; i < N ; i++) {
    if(*(average_score+i)<60){
      printf("%d",*(average_score+i));
    }
  }
} 

int main() 
{
  int *name , *number , *sex ; 
  int **score;
  int *average_score , *score_sort;
  input_Data(name, number , sex , score );
  sort(score, average_score , score_sort);
  output_Data(average_score);
}
