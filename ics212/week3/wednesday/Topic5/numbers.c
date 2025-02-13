/*
  Examples of Numbers in C
*/

#include <stdio.h>
#include <float.h>
#include "getdouble.h"  //need to include this file for getdouble() function

//symbolic constants
#define ZERO 0

int main(void){
  //declare and initialize variables
  double decimal1 = ZERO;
  double decimal2 = ZERO; 
  double decimal3 = ZERO;
  int whole1 = ZERO;
  int whole2 = ZERO;
  int whole3 = ZERO;

  //get user input
  printf("Enter a double: ");
  decimal1 = getdouble();
  printf("Enter another double: ");
  decimal2 = getdouble();

  //type cast (convert) from double to integer (explicit conversion)
  whole1=(int)decimal1;
  whole2=(int)decimal2;

  //display numbers
  printf("decimal1 = %f\n", decimal1);
  printf("decimal2 = %f\n", decimal2);
  printf("whole1 = %i\n", whole1);
  printf("whole2 = %i\n", whole2);

  //division and modulus
  decimal3 = decimal1 / decimal2;
  printf("%f / %f = %f\n", decimal1, decimal2, decimal3);
  whole3 = whole1 / whole2;
  printf("%i / %i = %i\n", whole1, whole2, whole3);
  whole3 = whole1 % whole2;
  printf("%i %% %i = %i\n", whole1, whole2, whole3);

  /*
    Implicit conversion:
    Mixing doubles and integers will automatically 
    cast the integer to a double.
  */

  decimal3 = whole1 / decimal2;
  printf("%i / %f = %f\n", whole1, decimal2, decimal3);
  decimal3 = decimal1 / whole2;
  printf("%f / %i = %f\n", decimal1, whole2, decimal3);

  //preincrement    
  whole3 = ++whole1;
  printf("++whole1 = %i, whole1= %i\n", whole3, whole1);

  //postincrement          
  whole3 = whole2++;
  printf("whole2++ = %i, whole2= %i\n", whole3, whole2);

  return 0;
}

/*
Enter a double: 4.5
Enter another double: 6.7
decimal1 = 4.500000
decimal2 = 6.700000
whole1 = 4
whole2 = 6
4.500000 / 6.700000 = 0.671642
4 / 6 = 0
4 % 6 = 4
4 / 6.700000 = 0.597015
4.500000 / 6 = 1.116667
++whole1 = 5, whole1= 5
whole2++ = 6, whole2= 7

*/







