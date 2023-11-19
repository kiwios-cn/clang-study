#include<stdio.h>
int main()
{
	char num;

	num = getchar();

	if(num>='a'&& num<='z'){
		printf("%c\n",num-'a'+'A');
	}
	else if(num>='A'&& num<='Z'){
		printf("%c\n",num);
	}
	else if(num>0){
		

	}	


	else
		printf("%c ASCII is %d\n",num,num);
		return 0;

}

