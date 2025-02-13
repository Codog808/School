/*
  example of function prototype, call, and definition
*/
#include <stdio.h>

/*
  Function prototype: 
  Compiler uses to validate function calls. 
  Contains the return type and parameter types.
*/
int add(int, int);

int main(void){
  int num1 = 1;
  int num2 = 2;
  int result = 0;

  /*
    Function call: 
    Contains arguments in parenthesis
  */
  result = add(num1, num2);
  printf("result = %d\n", result);

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
result = 3
*/



