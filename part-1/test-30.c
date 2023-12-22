#include<stdio.h>

int delete_element(int Array[] , int cap , int x , int y);

int main() {
	int Array[5] = { 2 , 3 , 3 , 7 , 9 };
	int n ;
	int y = 0;

	scanf("%d", &n);

	for(int i = 0 ; i < 5 ; i++) {

		if( Array[i] == n ) { 
			delete_element(Array , 5 , i , y );
			i--;
			y++;
		}
	}
	
	for( int i = 0 ; i < 5 - y ; i++) {

		printf(" %d",Array[i]);

	}
	printf("\n");

	return 0;
}

int delete_element(int Array[] , int cap , int x , int y){

	int a ;
	for( a = x ; a < cap - y ; a++ ) {

		Array[a] = Array[a+1];

	}

	return 0;
}

