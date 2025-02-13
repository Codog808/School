/* 
   Examples of bitwise AND
*/
#include <stdio.h>
#include "printbits.h"
#include "getdouble.h"

int main(){ 
  //initialization
  int number1 = 0;
  int number2 = 0;
  int result = 0;
  
  //user input
  printf("Enter 1st number: ");
  number1 = getdouble();
  printf("Enter 2nd number: ");
  number2 = getdouble();
  
  printf("\nbitwise AND for the two numbers:\n");
  result = number1 & number2;
  //display bit pattern of numbers
  printbits(number1);
  printbits(number2);
  //bitwise AND for the two numbers
  printf("-----------------------------------\n");
  printbits(result);
  
  /*
    Masks are used with bitwise AND to determine 
    if a specific 1 or a 0 is present.
    Masks are used to select some bits 
    (using 1s - which returns 1, if 1, and returns 0, if 0)
    or hide other bits 
    (using 0s - which make everything zero).
  */
  unsigned int mask1 = 0x0000ffff; //8 zeros, 8 ones
  result = number1 & mask1;
  printf("\nbitwise AND with 1st number and mask:\n");
  //display bit pattern of numbers
  printbits(number1);
  printbits(mask1);
  //bitwise AND for the two numbers
  printf("-----------------------------------\n");
  printbits(result);
  
  unsigned int mask2 = 0xffff0000; //8 ones, 8 zeros
  result = number2 & mask2;
  printf("\nbitwise AND with 2nd number and mask:\n");
  //display bit pattern of numbers
  printbits(number2);
  printbits(mask2);
  //bitwise AND for the two numbers
  printf("-----------------------------------\n");
  printbits(result);
  
  return 0; 
} 

/*
Enter 1st number: 1234567890
Enter 2nd number: -123456789 

bitwise AND for the two numbers:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
11111000 10100100 00110010 11101011 = 0xF8A432EB = -123456789 
-----------------------------------
01001000 10000100 00000010 11000010 = 0x488402C2 = 1216611010 

bitwise AND with 1st number and mask:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
00000000 00000000 11111111 11111111 = 0x0000FFFF = 65535 
-----------------------------------
00000000 00000000 00000010 11010010 = 0x000002D2 = 722 

bitwise AND with 2nd number and mask:
11111000 10100100 00110010 11101011 = 0xF8A432EB = -123456789 
11111111 11111111 00000000 00000000 = 0xFFFF0000 = -65536 
-----------------------------------
11111000 10100100 00000000 00000000 = 0xF8A40000 = -123469824 
 */
