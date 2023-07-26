#include<stdio.h>

int main()
{ int a, even_sum=0, odd_sum=0;

printf("give the number: ");
scanf("%d", &a);
if (a<1){
   printf("enter positive number");
} else{
   for(int i =1; i<=a; i++)
   {
      if(i % 2==0){
         even_sum += i;
      }
      else{
         odd_sum+=i;
         }
      }
      printf("sum of even numbers is %d\n", even_sum);
      printf("sum of odd numbers is %d\n", odd_sum); 
   }
   return 0;
}


