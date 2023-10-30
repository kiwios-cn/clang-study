#include<stdio.h>
int main()
{
	int a , b ;
	char  c ;
	
	scanf("%d %c %d", &a , &c , &b);
	printf("--->%d%c%d\n", a, c, b);
	switch(c){
			case '+' : 
					printf("%d", a + b);
					break;

			case '-' : 
					printf("%d", a - b);
					break;

			case '/' :
					printf("%d", a / b);
					break;

			case '*' :
					printf("%d", a * b);
					break;
			
			default :
					printf("unsupported");
					break;	

	}
	printf("\n");	

	return 0;


}
