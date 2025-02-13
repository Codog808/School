/*
  Trigonometric Functions from the math library
*/
#include <stdio.h>
#include <math.h>

int main(){
  //declare and initialize loop variables
  double i = 0; //counter
  double begin = -2*M_PI;
  double end = 2*M_PI;
  double jump = M_PI/2;

  printf("M_PI: %e\n", M_PI);
  //sine wave from -2*PI to 2*PI
  for(i=begin; i<=end; i = i + jump){
    printf("sin(%+f) = %+f\n", i, sin(i));
  }
  printf("\n");

  //cosine wave from -2*PI to 2*PI             
  for(i=begin; i<=end; i = i + jump){
    printf("cos(%+f) = %+f\n", i, cos(i));
  }
  printf("\n");

  //tangent function from -2*PI to 2*PI     
  for(i=begin; i<=end; i = i + jump){
    printf("tan(%+f) = %+f\n", i, tan(i));
  }
  printf("\n");

  //arcsine function from -1 to 1
  begin = -2;
  end = 2;
  jump = 0.5;
  for(i=begin; i<=end; i = i + jump){
    printf("asin(%+f) = %+f\n", i, asin(i));
  }
  printf("\n");

  //arccosine function from -1 to 1                            
  for(i=begin; i<=end; i = i + jump){
    printf("acos(%+f) = %+f\n", i, acos(i));
  }
  printf("\n");

  //arctangent function from -2 to 2 
  for(i=begin; i<=end; i = i + jump){
    printf("atan(%+f) = %+f\n", i, atan(i));
  }
  printf("\n");

  return 0;
}

/*
Output:
sin(-6.283185) = +0.000000
sin(-4.712389) = +1.000000
sin(-3.141593) = -0.000000
sin(-1.570796) = -1.000000
sin(+0.000000) = +0.000000
sin(+1.570796) = +1.000000
sin(+3.141593) = +0.000000
sin(+4.712389) = -1.000000
sin(+6.283185) = -0.000000

cos(-6.283185) = +1.000000
cos(-4.712389) = -0.000000
cos(-3.141593) = -1.000000
cos(-1.570796) = +0.000000
cos(+0.000000) = +1.000000
cos(+1.570796) = +0.000000
cos(+3.141593) = -1.000000
cos(+4.712389) = -0.000000
cos(+6.283185) = +1.000000

tan(-6.283185) = +0.000000
tan(-4.712389) = -5443746451065123.000000
tan(-3.141593) = +0.000000
tan(-1.570796) = -16331239353195370.000000
tan(+0.000000) = +0.000000
tan(+1.570796) = +16331239353195370.000000
tan(+3.141593) = -0.000000
tan(+4.712389) = +5443746451065123.000000
tan(+6.283185) = -0.000000

asin(-2.000000) = +0.000000
asin(-1.500000) = +0.000000
asin(-1.000000) = -1.570796
asin(-0.500000) = -0.523599
asin(+0.000000) = +0.000000
asin(+0.500000) = +0.523599
asin(+1.000000) = +1.570796
asin(+1.500000) = +0.000000
asin(+2.000000) = +0.000000

acos(-2.000000) = +0.000000
acos(-1.500000) = +0.000000
acos(-1.000000) = +3.141593
acos(-0.500000) = +2.094395
acos(+0.000000) = +1.570796
acos(+0.500000) = +1.047198
acos(+1.000000) = +0.000000
acos(+1.500000) = +0.000000
acos(+2.000000) = +0.000000

atan(-2.000000) = -1.107149
atan(-1.500000) = -0.982794
atan(-1.000000) = -0.785398
atan(-0.500000) = -0.463648
atan(+0.000000) = +0.000000
atan(+0.500000) = +0.463648
atan(+1.000000) = +0.785398
atan(+1.500000) = +0.982794
atan(+2.000000) = +1.107149


When you use the math library with the gcc compiler, you have to explicitly link to it
Put "-lm" at the end of the gcc command: 
gcc program.c -lm

For makefiles, put "-lm" at the end of the link command:
program: program.o
        gcc program.o -o program -lm

program.o: program.c
        gcc -c program.c 

*/


