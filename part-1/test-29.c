#include<stdio.h>
int main()
{
	int a[100];
	int i , j , n , temp;

	scanf("%d", &n);

	printf("input the number:\n");

	for( i = 0 ; i < n ; i++) {

		scanf("%d", &a[i]);

	}
	for( i = 0 , j = n - 1 ; i < j ; i++ , j--) {

		temp = a[j];
		a[j] = a[i];
		a[i] = temp;

	}
	printf("now the numbers are:\n");
	for(i = 0 ; i < n ; i++) {
	
		printf("%d\n", a[i]);

	}
	return 0;
}
