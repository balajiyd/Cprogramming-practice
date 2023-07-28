#include<stdio.h>
void Namaste();
void bonjour();
int main(){
  printf("enter f for french & i for indian: ");
  char ch;
  scanf("%c", &ch);
  if(ch=='i'){
    Namaste();
  }
  else{
    bonjour();
  }

  return 0;
}

void Namaste(){
  printf("namaste\n");
}
void bonjour(){
  printf("bonjour\n");
}

