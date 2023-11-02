#include<stdio.h>
int main()
{
	int x , y ;
	for( x = 1 ; x < 33 ; x++){

		for(y = 1 ; y < 50 ; y++){

			if(3 * x + 2 * y + (100 - x - y) / 3 == 100 && (100 - x -y) % 3 == 0){

				printf("%d %d %d\n", x , y , 100 - x - y);

			} 
		}
	}

return 0 ;

}
