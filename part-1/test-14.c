#include<stdio.h>
int main()
{
	int product , i;
	
	for (i = 1 ; i < 1000; i++){
		product = i * i;
		if (product > 1000){
			break;
		}
		printf(" %d ",product);
		if(i % 8 == 0){
			printf("\n");	
		}
	}
	printf("\n");
	return 0;
}
