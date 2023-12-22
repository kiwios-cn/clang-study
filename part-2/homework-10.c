#include <malloc/_malloc_type.h>
#include<stdio.h>
void multiple_matrix(int **MatrixA , int **MatrixB , int N);
int main() 
{
  int arrayA[3][3];
  int i , j , k ;
 
  printf("请输入数组A中的数据：\n");
  
  for(i = 0 ; i < 3 ; i++) {
    
    for(j = 0 ; j < 3 ; j++) {
      
      scanf("%d",&arrayA[i][j]);
    
    }
  
  } 
  
  int arrayB[3][3] = {
    {0,0,0},
    {0,0,0},
    {0,0,0},
  };
  
  int *array1[3] , *array2[3];
  int **MatrixA , **MatrixB;
  
  for(i = 0 ; i < 3 ; i++) {
    
    array1[i] = arrayA[i];
    array2[i] = arrayB[i];
  
  }
  MatrixA = array1;
  MatrixB = array2;
  
  multiple_matrix(MatrixA , MatrixB , 3);
}

void multiple_matrix(int **MatrixA , int **MatrixB , int N)
{
  

  int i , j , k ; 

  for(i = 0 ; i < N ; i++) {

    for(j = 0 ; j < N ; j++) {

      for(k = 0 ; k < N ; k++) {

      *(*(MatrixB + i) + j) += *(*(MatrixA + i) + k) * *(*(MatrixA + k) + j);  
      }
    }
  }
  for(i = 0 ; i < N ; i++) {

    for(j = 0 ; j < N ; j++) {

      printf(" %d" , *(*(MatrixB + i) + j));

      
    }
    printf("\n");
  }
}
