#include <stdio.h>

int main(void) {
  char c0 = 'a';
  char c1 = 'b';
  
  printf("Please enter the first letter:\n");
  c0 = getchar();
  getchar();

  printf("Please enter the second letter:\n");
  c1 = getchar();
  printf("The two characters entered:\n '%c' and '%c'\n", c0, c1);
}
