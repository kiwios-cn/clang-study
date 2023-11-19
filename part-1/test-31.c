#include<stdio.h>
int main()
{
	int a[100];
	int x , i;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;

	for( i = 0 ; x != -1 ; i++) {

		scanf("%d",&x);
		
		a[i] = x;

	}
	printf("投票完毕\n");		

	for(int y = 0 ; y < i+1 ; y++ ) {

		if(a[y] == 1) {

			num1 += 1;

		} else if(a[y] == 2) {

			num2 += 1;

		} else if(a[y] == 3) {

			num3 += 1;
		
		} else if(a[y] == 4) {

			num4 += 1;

		} else if(a[y] == 5) {

			num5 += 1;

		} 
	}
	
	printf("num1= %d num2= %d num3= %d num4= %d num5= %d\n",num1,num2,num3,num4,num5);


}
