/*
  Example of Coercion of Arguments
  When there is a mismatch between the actual parameters 
  and the formal parameters, 
  the actual parameters will be converted to match the formal parameters   
  In this case, the doubles are converted into integers.
*/
#include <stdio.h>

/*
  Function prototype: 
  Compiler uses to validate function calls. 
  Contains the return type and parameter types.
*/
int add(int, int);

int main(void){
  //declaring some doubles this time
  double num1 = 1.1;
  double num2 = 2.2;
  double result = 0.0;

  /*
    Function call: 
    Contains arguments in parenthesis
    doubles are converted into integers
  */
  result = add(num1, num2);
  printf("result = %f\n", result);

  return 0;
}

/*
  Function definition: 
  Contains the return type, parameter types & names, and body
*/
int add(int x, int y){
  int w = 0;
  w = x + y;
  return w;
}

/*
result = 3.000000
*/



