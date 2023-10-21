#include<stdio.h>
int main()
{
	int a,b,max_ab;

	
	printf("请输入a：");
	scanf("%d",&a);
	printf("请输入b：");
	scanf("%d",&b);

	max_ab = ( a >= b ) ? a : b ;
	printf("max_ab = %d\n ",max_ab);

	for(int i = max_ab;i <= a * b ;i++)
	{
		if((i % a == 0) && (i % b == 0))
		{
			printf("result = %d " , i);
			break;	
		}
	}
	printf("\n");
	return 0;
}
