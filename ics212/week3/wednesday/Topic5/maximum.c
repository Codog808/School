/*
  Outputs the maximums for various data types
*/

#include <stdio.h>
#include <limits.h> //platform-dependent constants for integers
#include <float.h>  //floating-point constants

int main(void){
  
  //display maximum values for integers
  printf("char max = %i\n", CHAR_MAX);
  printf("short max = %i\n", SHRT_MAX);
  printf("int max = %i\n", INT_MAX);
  printf("long max = %li\n\n", LONG_MAX);
  printf("long long  max = %lli\n\n", LLONG_MAX);

  //display maximum values for floating-points
  printf("float max = %e\n", FLT_MAX);
  printf("%i digits of precision\n", FLT_DIG);
  printf("float min exponent %i\n", FLT_MIN_EXP);
  printf("float max exponent %i\n\n", FLT_MAX_EXP);

  printf("double max = %e\n", DBL_MAX);
  printf("%i digits of precision\n", DBL_DIG);
  printf("double min exponent %i\n", DBL_MIN_EXP);
  printf("double max exponent %i\n\n", DBL_MAX_EXP);

  printf("long double max = %Le\n", LDBL_MAX);
  printf("%i digits of precision\n", LDBL_DIG);
  printf("long double min exponent %i\n", LDBL_MIN_EXP);
  printf("long double max exponent %i\n", LDBL_MAX_EXP);

  return 0;
}

/*
char max = 127
short max = 32767
int max = 2147483647
long max = 2147483647

float max = 3.402823e+38
6 digits of precision

double max = 1.797693e+308
15 digits of precision

long double max = 1.189731e+4932
33 digits of precision
*/







