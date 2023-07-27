#include<stdio.h>

int main()
{
  int n,i;
  printf("enter a number: ");
  
  do{
      scanf("%d", &n);
      printf("%d\n", n);

      if(n%2!=0){
        break;
      }

  } while(1);  
  printf("thank you");
  return 0;                                                 


}


