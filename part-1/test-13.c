#include<stdio.h>
int main()
{
	int sum = 1; 
	int x;

	for(int i = 1 ; i <= 10 ; i++)
	{
		x = x * i;
		sum += x; 
		printf("%d\n",x);
	}
	printf("\n");	
	printf("总和= %d\n",sum);
	return 0;

}
