#include<stdio.h>
int generate_string (char *source, int length) {
  int num = 0;
  for(int i = 0 ; i < length ; i++) {
    if('0'+i <= 57){
      
      *(source+num) = '0'+i; 
      num++;
    } else if ('0'+i >= 65 && '0'+i <= 90) {
      
      *(source+num) = '0'+i;
      num++;
      
    } else if ('0'+i >= 97 && '0'+i <= 122) {
      *(source+num) = '0'+i;
      num++;
      
    } 
  }
  

  return 0; 
}


int main()
{
  FILE *fp = NULL;

  char string[100] = {'\0'};
  
  generate_string(string,100 );  

  printf("%s",string);
  fp = fopen("./test.txt", "w+");
  
  for(int j = 0 ; j < 100 ; j++) {
    fputc(string[j], fp);
    if((j+1)%10 == 0) {
      fputc('\n',fp);
    }
  }


  fclose(fp);

  return 0; 
}
