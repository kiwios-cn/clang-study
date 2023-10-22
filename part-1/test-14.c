#include<stdio.h>
int main()
{
	int product ,i , a ;
	int num[100];
	i = 0;
	a = 0;

	product = i * i;

	while(product <= 1000)
	{
		i++;
		a++;	
		product = i * i;
		num[a] = product;

		if(product <= 1000, a / 8 == 0)
		printf("product= %d ",num[a]);
	}
	return 0;

}
