/*
  Examples of Symbolic Constant using #define.
  The preprocessor does text replacement, 
  so the word is replaced by the number, character, or string.
*/

#include <stdio.h>

//symbolic constants - no semi-colon!
#define TITLE "Here are examples of symbolic constants:\n"
#define LETTER 'A'
#define ZERO 0
#define ONE 1
#define PI 3.14159265358979323846  //PI to 20 decimal digits 

int main(void){
  double sum = ZERO;

  //output symbolic constants
  printf(TITLE);
  printf("LETTER = '%c'\n", LETTER);
  printf("ZERO = %i\n", ZERO);
  printf("ONE = %i\n", ONE);
  printf("PI = %f\n", PI);

  //adding symbolic constants
  sum = ZERO + ONE + PI;
  printf("ZERO + ONE + PI = %f\n", sum);

  return 0;
}

/*
 * output: 
Here are examples of symbolic constants:
LETTER = 'A'
ZERO = 0
ONE = 1
PI = 3.141593
ZERO + ONE + PI = 4.141593
*/







