#include<stdio.h>
int main()
{
	int a, b , c , d ;
	int x , y , z , m ;


	scanf("%d %d %d %d", &x , &y , &z , &m);

	if(x > y){
		a = y;
		b = x;
	} else {
		a = x;
		b = y;
	}
		
	
	if(z < a){
		c = b;
		b = a;
		a = z;
	} else if (z > a && z < b) {
		c = b;
		b = z;
	} else {
		c = z;
	}


	if(m < a){
		d = c;
		c = b;
		b = a;
		a = m;
	} else if (m > a && m < b) {
		d = c;
		c = b;
		b = m;
	} else if (m > b && m < c) {
		d = c;
		c = m;
	} else {
		d = m;
	}

	printf("%d < %d < %d < %d\n", a , b , c , d);

	return 0;


}
