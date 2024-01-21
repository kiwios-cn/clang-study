#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int string_search_max_length(char *s);
int main() 
{
  char *str;
  
  scanf("%s",str);

  printf("%d",string_search_max_length(str));

}
int string_search_max_length(char *s){

  int max_str_length = 0 ;
  
  int length = strlen(s);
  
  int* Data = (int *)malloc(length*4);
  
  if(length == 1) {
    
    Data[0] = 1;      
  
    max_str_length = 1 ;
  
  } else {
    
    for(int i = 0 ; i < length ; i++) {
    
      Data[i] = 0 ;
    
      for(int j = i+1 ; j < length ; j++) {
      
        if(*(s+i) != *(s+j)){
       
          Data[i]++; 
        
        } else {
        
          break;
      
        }
      }
    }
  }
  
  if(length == 1) {
    
    max_str_length = 1 ;
  
  } else {
    
    for(int i = 0 ; i < length ; i++) {
      
      for(int j = 0 ; j < length ; j++) {    

        if(Data[i] > Data[j]) {
          
          max_str_length = Data[i];
        
        }
      }
    }
  }
  free(Data);
  return max_str_length;

}

