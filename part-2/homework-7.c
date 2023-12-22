#include<stdio.h>
int main()
{
  int num1[3][3], num2[3][3];
  int i , j;
  
  printf("请输入数组A中的相关数据:\n");

  for(i = 0 ; i < 3 ; i++) {

    for(j = 0 ; j < 3 ; j++) {

      scanf("%d",&num1[i][j]);

    }
        
  }
  printf("请输入数组B中的相关数据：\n");

  for(i = 0 ; i < 3 ; i++) {

    for(j = 0 ; j < 3 ; j++) {

      scanf("%d",&num2[i][j]);
      
    }
  }
  
  for(i = 0 ; i < 3 ; i++){
    for(j = 0 ; j < 3 ; j++){
        printf("%d",num2[i][j]);
    }
    printf("\n");
  }
  
  
  int temp;
  for(i = 0 ; i < 3 ; i++) {
   
     for(j = 0 ; j < 3 ; j++) {
      
      temp = num2[i][j];
      num2[i][j] = num2[j][i];
      num2[j][i] = temp;
    
    }
  }
  
  int **MatrixA , **MatrixB ;
  int *arr1[3] , *arr2[3];

  for(i = 0 ; i < 3 ; i++) {
    
    arr1[i] = num1[i];
    arr2[i] = num2[i];
  
  }  
  
  int MatrixC[3][3] = {0,0,0,0,0,0,0,0,0};
  int *num3[3];
  int n ;
  
  for(i = 0 ; i < 3 ; i++) {
    for(j = 0 ; j < 3 ; j++) {
      for(n = 0 ; n < 3 ; n++) {
        MatrixC[i][j] += *(arr1[i] + n) * *(arr2[j] + n);       
      }
      
  }
    for(i = 0 ; i < 3 ; i++){
      for(j = 0 ; j < 3 ; j++) {
        printf(" %d", MatrixC[i][j]);
      }
    printf("\n");
    }
  }














  
}
