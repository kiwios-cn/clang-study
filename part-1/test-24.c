#include<stdio.h>
int main()
{
	int i , j ;

	printf("%4c" , ' *');

	for ( i = 1 ; i <= 9 ; i++){

		printf("%4d", i);

	}

	printf("\n");
	
	for (i = 1 ; i <= 9 ; i++) {
	
		printf("%4d", i);
		
		for(j = 1 ; j <= 9 ; j++){

			if(i <= j){
	
				printf("%4d",i * j);

			} else {

				printf("%4c", ' ');

			}

		}
	printf("\n");	

	}
	
	return 0 ;


}
