#include<stdio.h>

int main()
{
   int start, end, sum, count;
   sum=0;
   count=0;
   printf("enter start range");
   scanf("%d", &start);
   printf("Enter end range: ");
   scanf("%d", &end);

for(int i = start; i<=end; i++){
   if(i%5==0){
      count ++;
      sum=sum+1; 
   }
      
}
printf("number of number divisible by 5 are %d\n", count);
printf("sum is %d\n", sum);
   return 0;
}


