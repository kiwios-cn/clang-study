#include<stdio.h>
int lenstr(char *str);
int main()
{
    int m;
    char array[100];
    
  for(int i = 0 ; i < 100 ; i++){
    scanf("%c",&array[i]);
    if(array[i] == '\n'){
      break;
    }
  }
    m = lenstr(array);
    printf("%d\n", m);  
 
}

int lenstr(char *str)
{
   int i = 0;
   while(str[i] != '\n'){
    i++;
  }
  return (i); 
 
}
