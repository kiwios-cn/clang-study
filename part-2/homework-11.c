#include<stdio.h>
void copy_vowel(char *str , char *str_inv);
int main()
{ 
  char m[100];
  char n[100];
  
  char *string1 = m;
  char *string2 = n;

  scanf("%s",m);
  copy_vowel(string1,string2);

  printf("%s\n", n);
  
}
void copy_vowel(char *str , char *str_inv) {
  int i , j = 0 ;
  for ( i = 0 ; i < 100 ; i++ ) {
    if(*(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u') {

      *(str_inv + j) = *(str + i); 
      j++;
    }
  }
}
