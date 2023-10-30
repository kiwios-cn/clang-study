#include<stdio.h>
#include<math.h>
int main()
{
	float a , b , c ;
	float Delta ;
	float x1 , x2 ;

	printf("请输入a , b , c\n");

	scanf("%f %f %f", &a , &b , &c);


	while(a == 0.0){
		printf("该方程不为一元二次方程，请重新输入数据\n");
		scanf("%f %f %f",&a,&b,&c);
	}
	
	Delta = b * b - 4.0 * a * c ;

	if(Delta < 0.0){
	
		printf("该方程无实数解\n");

	} else if (Delta == 0.0) { 

		printf("该方程有一根\n");
	
		printf("%f", -b/(2.0 * a));	

	} else {
		
		printf("该方程有两根\n");

		x1 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

		x2 = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

		printf("%f %f\n", x1 , x2);

	}
	return 0;


}
