#include<stdio.h>
int main()
{
	int a , b , i;
	float result , sum = 0.0 ;
	int x[15] = {0};
	int y[15] = {0};

	for (i = 0; i <= 14; i++) {
		if (i < 2) {
			x[i] = i + 2;
			y[i] = i + 1;
		} else {
			x[i] = x[i-1] + x[i-2];
			y[i] = y[i-1] + y[i-2];
		}
		
		result = (float)x[i] / (float)y[i];
		printf("%d: %d / %d = %f\n", i+1, x[i], y[i], result);
		
		sum += result;
	}
	
	printf("sum = %f\n",sum);

	return 0;
}
