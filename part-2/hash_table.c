#include<stdio.h> 
struct HashTable {
  int content;
  int subscript;
};
int main() 
{
  int nums[10] = {2 , 7 , 11 , 15 , 9 , 3 , 50 , 4 , 10 ,43};
  int numsSize = 10 ;
  int target = 10 ;
  int cycle_num = 0;
  int *return_numsubscript ;
  struct  HashTable * hashtable;

  for(int i = 0 ; i < numsSize ; i++) {
    cycle_num++;
    for(int j = 0 ; j < cycle_num ; j++) {
      if(target-nums[i] == (hashtable+j)->content) {
         *(return_numsubscript+1) = i;
        *return_numsubscript = (hashtable+j) -> subscript; 
      } else {
        (hashtable+cycle_num-1)->content = nums[i]; 
        (hashtable+cycle_num-1)->subscript = i;
      }
    }
  } 
  printf("%d %d\n",*return_numsubscript,*(return_numsubscript+1));  
}
struct HashTable* find(int content) {
  struct HashTable* temp;
  






  return temp;
}
