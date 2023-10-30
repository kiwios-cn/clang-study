#include<stdio.h>
int main()
{
	float x;

	printf("请输入x：");

	scanf("%f",&x);

	if(x < 1.0){

		printf("%f\n",x);

	} else if (x >= 1.0 && x < 10.0) {
		
		printf("%f\n",x+5.0);
	
	} else{

		printf("%f\n",x-5.0);

	}
	
	return 0;

}
