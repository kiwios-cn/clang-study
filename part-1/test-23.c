#include<stdio.h>

int main(){
	
	int i , j ;
	
	for ( i = 0 ; i < 6 ; i++){
	
		printf("\n");

		for ( j = 0 ; j < 5 - i ; j++){
			
			printf(" ");

		}
		for ( j = 0 ; j < 2 * i + 1 ; j++){
			
			printf("*");

		}
		

	}

	printf("\n");
	
	return 0 ;


}
