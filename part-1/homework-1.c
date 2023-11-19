#include<stdio.h>
int main()
{
	int a,b,c,d;
	int m;

	printf("请输入四个整数a，b，c，	d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	m = (a+b-c)*d;

	printf("m = %d \n", m);

	return 0;

}
