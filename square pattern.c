#include<stdio.h>

int main()
{ int n ,k, i , j;
printf("enter the row: ");
scanf("%d", &n);
printf("enter column: ");
scanf("%d", &k);
for(i=0; i<n;i++){
  for(j=0;j<k;j++){
  printf("* ");
}
printf("\n");
}
  
  return 0;                                                 
}
