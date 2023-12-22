#include<stdio.h>
int main()
{
  char array1[100] , array2[100];
  int m , n ;
  int x = 0;
  printf("请输入第一个字符串的长度m：");
  scanf("%d\n", &m);  
  for(int i = 0 ; i < m ; i++){

    scanf("%c",&array1[i]);
    
  }
  printf("请输入第二个字符串的长度n：");
  scanf("%d\n", &n);
  for(int i = 0 ; i < n ; i++){

    scanf("%c",&array2[i]);
    
  }
  for(int i = 0 ; i < m ; i++){

    for(int j = 0 ; j < n ; j++){

      if(array1[i] == array2[j]){
        x++;
        j++;
      }
    }
  }
  if(x == n){
  printf("yes\n");
  } else {
  printf("no\n");
  }
return 0;
 
}
