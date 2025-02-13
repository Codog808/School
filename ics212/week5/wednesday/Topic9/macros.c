/*
  a few examples of macros
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846 //Pi to 20 decimal places
#define CIRCLE_AREA(R) PI*R*R
#define MAX(A,B) A>B?A:B

int main(){
  //declare and initialize variables
  double radius = 9.0;
  double area = 0.0;
  int x = 55;
  int y = 2;
  
  //calculate area of a circle
  area = CIRCLE_AREA(radius);
  printf("area = %f\n", area);
  printf("CIRCLE_AREA(%f) = %f\n", radius, CIRCLE_AREA(radius));

  //find max of two numbers
  printf("MAX(%d,%d) = %d\n", x, y, MAX(x,y));

  return 0;
}

/*
area = 314.159265
CIRCLE_AREA(10.000000) = 314.159265
MAX(10,20) = 20
*/

