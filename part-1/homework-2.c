#include<stdio.h>
int main()
{
	char num;
	printf("请输入一个字符: ");
	num = getchar();

	if(num>='a'&& num<='z'){
		printf("%c\n",num-'a'+'A');
	}
	else if(num>='A'&& num<='Z'){
		printf("%c\n",num);
	}
	else {
		printf("%c ASCII is %d\n",num,num);

	}	

		return 0;

}

