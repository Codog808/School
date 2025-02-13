/*
  functions from the math library
*/
#include <stdio.h>
#include <math.h>

//M_PI is Pi, the ratio of a circle, which is defined in the math library
//M_E is the base of natural logarithms, which is defined in the math library

int main(){
  //declare and initialize math variables
  const double HALF = 0.5;
  const int ZERO = 0;
  const int ONE = 1;
  const int TWO = 2;
  const int FIVE = 5; 
  const int NINE = 9;
  const int TEN = 10;
  const int THOUSAND = 1000;
  
  //absolute value
  printf("fabs(%f) = %f\n", -M_PI, fabs(-M_PI));
  printf("fabs(%d) = %f\n", TWO, fabs(TWO));
  printf("fabs(%d) = %d\n\n", TWO, (int)fabs(TWO));

  //square root
  printf("sqrt(%d) = %f\n", TWO, sqrt(TWO));
  printf("sqrt(%d) = %f\n", NINE, sqrt(NINE));
  printf("sqrt(%d) = %d\n\n", NINE, (int)sqrt(NINE));

  //power
  printf("pow(%d,%d) = %d\n", TWO, TEN, (int)pow(TWO,TEN));
  printf("pow(%d,%d) = %f\n", TEN, -TWO, pow(TEN,-TWO));
  printf("pow(%d,%f) = %f\n\n", TWO, HALF, pow(TWO, HALF));

  //ceiling
  printf("ceil(%f) = %d\n", M_PI, (int)ceil(M_PI));
  printf("ceil(%f) = %d\n\n", -M_PI, (int)ceil(-M_PI));

  //floor 
  printf("floor(%f) = %d\n", M_PI, (int)floor(M_PI));
  printf("floor(%f) = %d\n\n", -M_PI, (int)floor(-M_PI));

  //e to x power
  printf("exp(%d) = %f\n", ZERO, exp(ZERO));
  printf("exp(%d) = %f\n", ONE, exp(ONE));
  printf("exp(%d) = %f\n\n", -ONE, exp(-ONE));

  //natural logarithm of x to the base e 
  printf("log(%d) = %f\n", 0 , log(0));
  printf("log(%f) = %f\n", M_E, log(M_E));
  printf("log(%f) = %f\n\n", M_E*M_E, log(M_E*M_E));

  printf("log10(%d) = %f\n", ONE, log10(ONE));
  printf("log10(%d) = %f\n", TEN, log10(TEN));
  printf("log10(%d) = %f\n\n", THOUSAND, log10(THOUSAND));

  return 0;
}

/*
Output:
fabs(-3.141592) = 3.141592
fabs(2) = 2.000000
fabs(2) = 2

sqrt(2) = 1.414214
sqrt(9) = 3.000000
sqrt(9) = 3

pow(2,10) = 1024
pow(10,-2) = 0.010000
pow(2,0.500000) = 1.414214

ceil(3.141592) = 4
ceil(-3.141592) = -3

floor(3.141592) = 3
floor(-3.141592) = -4

exp(0) = 1.000000
exp(1) = 2.718282
exp(-1) = 0.367879

log(1) = 0.000000
log(2.718282) = 1.000000
log(7.389056) = 2.000000

log10(1) = 0.000000
log10(10) = 1.000000
log10(1000) = 3.000000


When you use the math library with the gcc compiler, you have to explicitly link to it
Put "-lm" at the end of the gcc command: 
gcc program.c -lm

For makefiles, put "-lm" at the end of the link command:
program: program.o
        gcc program.o -o program -lm

program.o: program.c
        gcc -c program.c 

*/


