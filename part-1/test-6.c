#include<stdio.h>
int main()
{
	int result = 500 , left ;
	int i = 0 ;
	int num[10];

	while(result != 0)
	{
	int resource = result ;
	
	num[i] = left;
	
	result = result / 2;
	left = resource % 2;
	i = i + 1 ;

	printf("%d \ %d = %d\n",resource,result,left);
	
	}
	printf("i = %d\n",i);

	for(int j=i;j>0;j--)
	{
		printf("%d",num[j]);
	}	
		printf("\n");
	return 0 ;
}
