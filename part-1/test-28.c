#include<stdio.h>

// 函数用于判断一个数是否为素数
int isPrime(int n){

	if( n <= 1){

		return 0 ;

	}
	
	if( n <= 3){

		return 1 ;

	}

	if( n % 2 == 0 || n % 3 == 0){

		return 0 ;

	}

	for(int i = 5 ; i * i <= n ; i += 6){

		if(n % i == 0 || n % (i + 2) == 0){

			return 0 ;

		}
	}
	return 1 ;
}

int main(){

	int max_number = 2023 ; //验证的最大偶数

	int found = 0 ;

	printf("验证2023以内的哥德巴赫猜想：\n");

	for( int even = 4 ;even <= max_number ; even += 2){

		int isGoldbach = 0 ;

		for(int i = 2 ; i <= even / 2 ; i++){

			if(isPrime(i) && isPrime(even - i)){

				printf("%d = %d + %d \n",even , i , even - i);

				isGoldbach = 1 ;

				break;
			}
		}	
			if(!isGoldbach){

				printf("猜想失败：%d 不能表示为两个素数的和\n",even);

				found = 1 ;

				break;

		}
	}
			if(!found){

				printf("猜想在2023以内的偶数范围内验证成功！\n");

			}

	return 0;

}
	










































