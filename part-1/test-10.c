#include<stdio.h>

int max_common_divisor(int x, int y) {
	int min_xy;
	if (x <= y){
		min_xy = x;
	} else {
		min_xy = y;
	}
	printf("min:%d\n", min_xy);
	for(int i = min_xy;i >= 0 && i <= min_xy;i--){
		printf("i:%d\n", i);
		if((x % i == 0)&&(y % i == 0)){
				printf("-------->>>>result: %d\n",i);
				return i;
		}
	}

	return 0;
}

int main()
{
	int x , y, min_xy;	
	printf("请输入x :\n");
	scanf("%d", &x);
	printf("请输入y :\n");
	scanf("%d", &y);

	printf("x y: %d %d\n", x, y);
	int divisor = max_common_divisor(x,y);

	return 0;
}
