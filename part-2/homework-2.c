#include<stdio.h>
int main()
{
    int i , j , k , temp ;
 
    printf("请输入i ，j ，k 的值：\n");
  
    scanf("%d%d%d", &i , &j , &k);

    int *p1 = &i ;
    int *p2 = &j ; 
    int *p3 = &k ;
    
    temp = *p1;
    *p1 = *p2 ;
    *p2 = *p3 ;
    *p3 = temp ;

    printf("%d %d %d\n", i , j , k);

    return 0 ;

}
