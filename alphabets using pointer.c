#include<stdio.h>

int main(){
  char alphabets[26];
  char *ptr = alphabets;
  for (char ch = 'A'; ch <= 'Z'; ch++ ){
    *ptr = ch;
    ptr++;
  }
  ptr = alphabets;
  for(int i = 0; i< 26;i++){
    printf("%c\n", *ptr);
    ptr++;
  }
  printf("\n");
  return 0;
}


