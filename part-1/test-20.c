#include<stdio.h>
int main()
   {
       char c ;
   
       scanf("%s",&c);
 
	while(c != '1' && c != '2' && c != '3' && c != '4' && c != '5' && c != '6' && c != '7'){
       
		printf("请输入1到7中的整数");
		printf("\n");	
		scanf("%s",&c);
	}
	   switch(c){

       case '1': printf("工作日愉快\n");
               break;
       case '2': printf("工作日愉快\n");
               break;
       case '3': printf("工作日愉快\n");
               break;
       case '4': printf("工作日愉快\n");
               break;
       case '5': printf("工作日愉快\n");
               break;
       case '6': printf("周末愉快\n");
               break;
       case '7': printf("周末愉快\n");
              break;
        }
   }
