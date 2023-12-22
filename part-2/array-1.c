#include <math.h>
#include<stdio.h>
int findmax( int a[][10] , int n);
int main()
{
    int a[10][10];
    int i,j,temp;

    printf("input the numbers: \n");

    for(i = 0; i < 10; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    temp = findmax(a,10);
    printf("the max = %d" ,temp);

}

int findmax(int a[][10], int n)
{
    int max , i , j ;
    max = a[0][0];

    for(i = 1 ; i < n ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
            if(a[i][j] > max) {

            max = a[i][j];
        
        }
    
        }
    }

    return max ;

}
