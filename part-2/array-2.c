#include<stdio.h>
#define N 10
int main()
{
  int i , j ;
  int a[N] , t ;

  printf("请输入数据序列");  
  for (i = 0 ; i < N ; i++){

      scanf("%d", &a[i]);
    
    }

  for (i = 0 ; i < N - 1 ; i++) {

    for ( j = i + 1 ; j < N ; j++) {

      if ( a[i] > a[j]) {

          t = a[i];
          a[i] = a[j];
          a[j] = t;
          
      }
        
    }
      
  }
  for (i = 0 ; i < N ; i++) {

        printf(" %d", a[i]);
        
  }
  printf("\n");
  return 0;
}

  

