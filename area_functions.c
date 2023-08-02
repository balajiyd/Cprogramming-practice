#include<stdio.h>
#include<math.h>


float square_area(float side);
float circle_area(float rad);
float rectangle_area(float a , float b);
int main(){
float a=5.0;
float b=10.0;
printf("area of rectangle is: %f", rectangle_area(a,b));
  
return 0; 
}
float square_area(float side){
  return side*side;
}

float circle_area(float rad){
  return 3.14*rad*rad;
}
float rectangle_area(float a, float b){
  return a*b;
} 
