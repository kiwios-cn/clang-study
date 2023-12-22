#include<stdio.h>
#define N 10
int BubSort(int a[] , int n);
int main() 
{
  int i; 
  int a[N];

  printf("请输入十个整型数：\n");
  for( i = 0 ; i < N ; i++) {

    scanf("%d", &a[i]);
    
  }

  BubSort( a , N );

  for( i = 0 ; i < N ; i++) {

    printf(" %d", a[i]);
   
  }
  printf("\n");
}

int BubSort(int a[], int n)
{
  int i , j , t;
  for( i = 0 ; i < n-1 ; i++) {
    for( j = 0 ; j <n-1-i ; j++) {
      if(a[j] > a[j+1]) {
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }
  return(n);
  
}
