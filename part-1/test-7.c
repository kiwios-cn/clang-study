#include<stdio.h>
int main()
{
	int i = 1;
	
	while( (i >= 1) && (i <= 100)){ 
		i++;

		if(i % 13 == 0){
			printf("%d\n",i);
		}
	}
}
