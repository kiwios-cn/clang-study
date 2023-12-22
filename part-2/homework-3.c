#include<stdio.h>
int main()
{
    int i , array[10] ;
    
    printf("请输入数据：\n");
    
    for(i = 0 ; i < 10 ; i++)
    {
     scanf("%d", &array[i]);
    }    

    int *pa ;
    int temp1 , temp2;
    pa = array ;
  
    for(i = 0 ; i < 10 ; i++)
    {
      if(*pa > *(pa + i)){
        temp1 = *pa;
        *pa = *(pa + i);
        *(pa + i) = temp1;
      } 
      if(*(pa + 9) < *(pa + i)){
        temp2 = *(pa + 9);
        *(pa + 9) = *(pa + i);
        *(pa + i) = temp2;
      }
     }

    for(i = 0 ; i < 10 ; i++)
    {
      printf(" %d", *(pa+i) );
     
    }
    printf("\n");
    return 0 ;

}
