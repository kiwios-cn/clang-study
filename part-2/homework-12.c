#include <malloc/_malloc.h>
#include<stdio.h>
#include<string.h>
void inverse_number(char *str , char *str_inv);
int main()
{
  char m[100]= {0};
  char n[100]= {0};
  char *pm , *pn;
  pm = m , pn = n;
  scanf("%s",m);
  int num = strlen(m);
  inverse_number(pm , pn);
  for(int i = 0 ; i < num ; i++){
    printf("%c",n[i]);
  }
  printf("\n");
}

void inverse_number(char *str , char *str_inv)
{
  int n = strlen(str);
  if(*str != '-') {
    for(int i = 0 ; i < n ; i++) {
      *(str_inv+n-1-i) = *(str+i);
    }
  } else {
    *str_inv = *str;
    for(int i = 1 ; i < n ; i++) {
      *(str_inv+i) = *(str+n-i);
    }
  }
 

}
