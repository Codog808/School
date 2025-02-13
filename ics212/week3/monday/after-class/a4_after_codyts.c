/* Cody Shitagi
*/
#include <stdio.h>
#include "getdouble.h"

int main(void) {
  char c0 = 'a';
  char c1 = 'b';
  
  printf("Please enter the first letter:\n");
  c0 = getchar();
  getchar();

  printf("Please enter the second letter:\n");
  c1 = getchar();
  printf("The two characters entered:\n '%c' and '%c'\n", c0, c1);
  
  printf("Hold up, now give me two numbers...\n");

  double d0 = 0;
  double d1 = 0;
  getchar();

  printf("Give the first number:\n");
  d0 = getdouble();
  printf("Give me the second number:\n");
  d1 = getdouble();
  // https://stackoverflow.com/questions/4264127/correct-format-specifier-for-double-in-printf
  printf("The two numbers entered:\n '%f' and '%f'\n", d0, d1);
}
