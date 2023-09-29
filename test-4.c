#include <stdio.h>

int power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
		p = p * base;
	
	return p;
}


int main()
{	
	int base , n , ret ;
	base = 4 , n = 3 ;
	ret = power(base,n);
	printf("result: %d\n", ret);

	return 0;
}
