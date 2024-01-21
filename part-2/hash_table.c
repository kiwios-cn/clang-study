#include<stdio.h>
#include <sys/_types/_null.h>
#include<uthash.h>
#include<stdlib.h>
struct hashTable {
  int key;
  int val;
  UT_hash_handle hh;
};

struct hashTable* hashtable;

struct hashTable* find(int ikey) {
  struct hashTable* tmp;
  HASH_FIND_INT(hashtable,&ikey,tmp);
  return tmp;
}

void insert(int ikey, int ival) {
  struct hashTable* it = find(ikey);
  if(it == NULL) {
    struct hashTable* tmp = malloc(sizeof(struct hashTable));
    tmp->key = ikey, tmp->val = ival ;
    HASH_AND_INT(hashtable,key,tmp);
  }
}
