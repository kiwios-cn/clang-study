#include<stdio.h>
int main() 
{

	int a[100][100];
	int n,i,j,s,t;

	printf("请输入整数x：");

	scanf("%d",&n);

	for(i = 0 , s = 2 * n - 1 ; i < n , s > n - 1 ; i++ , s--) {

		for(j = i ; j < 2 * n - 1 - i ; j++) {

			a[i][j] = i + 1;
			a[j][i] = i + 1;

		}
		for(t = s ; t >= i ; t-- ) {

			a[s][t] = i;
			a[t][s] = i;

		}
	}	
		for(i = 0 ; i < 2 * n - 1 ; i++) {

			for(j = 0; j < 2 * n - 1 ; j++) {

				printf("%2d",a[i][j]);

			}
			printf("\n");

		}


	}



