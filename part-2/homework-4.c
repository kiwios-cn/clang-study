#include<stdio.h>
int main()
{
  char array[100];
  int n;
  
  printf("请输入长度n:\n");
  scanf("%d\n", &n);
   
  
  for(int i = 0 ; i < n ; i++){

    scanf("%c", &array[i]);
     
  }
  char *pa = array;
  int m = 0;
  if(n % 2 == 0){
  
    for(int j = 0 ; j < n/2 ; j++) {
      if(*(pa + j) == *(pa + n - 1 - j)){
          m++;
      }  
    }
    if(m == n / 2){
      printf("yes");
    } else {
      printf("no");
    }

  } else {

    for(int j = 0 ; j < (n-1)/2 ; j++) {
      if(*(pa + j) == *(pa + n - 1 - j)){
          m++;
      } 
    }
    if(m == (n - 1)/2){
      printf("yes");
    } else {
      printf("no");
    }
  }
    printf("\n");
    return 0;
}
