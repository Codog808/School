//Examples of Relational & Logical Operators
#include <stdio.h>
int main(){
  //declare and initialize variables
  int a = 0, b = 1, c = 2;
  printf("a = %i, b = %i, c = %i\n",a,b,c);
  /*
    WARNING: Multiple Relational & Logical statements 
    should be grouped into parenthesis.
    Otherwise, can get "incorrect" (unexpected) results from your program.
    Another bug which is difficult to find!
  */
  
  printf("%i&&%i&&%i is %i\n",a,b,c,a&&b&&c);
  printf("(%i && %i) && (%i && %i) is %i\n",a,b,b,c,(a && b) && (b && c));
  printf("%i||%i||%i is %i\n",a,b,c,a||b||c);
  printf("(%i || %i) || (%i || %i) is %i\n\n",a,b,b,c,(a || b) || (b || c));
  
  a=30;
  b=20;
  c=10;
  printf("a = %i, b = %i, c = %i\n",a,b,c);
  printf("%i < %i < %i = %i\n",a,b,c, a < b < c);//what happens?
  printf("(%i < %i) && (%i < %i) is %i\n",a,b,b,c, (a < b) && (b < c));
  
  return 0;
}

/*
a = 0, b = 1, c = 2
0&&1&&2 is 0
(0 && 1) && (1 && 2) is 0
0||1||2 is 1
(0 || 1) || (1 || 2) is 1

a = 30, b = 20, c = 10
30 < 20 < 10 = 1
(30 < 20) && (20 < 10) is 0

*/
