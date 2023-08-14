#include<stdio.h>
int fib(int n);
int main(){
  printf("%d", fib(6));
  return 0;
}
int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  int fibm1=fib(n-1);
  int fibm2=fib(n-2);
  int fibN=fibm1+fibm2;
  return fibN; 
}

