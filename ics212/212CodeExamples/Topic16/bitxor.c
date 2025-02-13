/* 
   Examples of bitwise exclusive OR (^)
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
  
  printf("\nbitwise exclusive OR (^)for the two numbers:\n");
  result = number1 ^ number2;
  //display bit pattern of numbers
  printbits(number1);
  printbits(number2);
  //bitwise exclusive OR (^) for the two numbers
  printf("-----------------------------------\n");
  printbits(result);
  
  /*
    Bitwise exclusive OR (^) can be used 
    to take the one's complement (flip) specific bits.
    Ones are used to flip bits.
    Zeros are used to keep the bits the same.
  */
  unsigned int flip1 = 0x0000ffff; //8 zeros, 8 ones
  printf("\nbitwise exclusive OR (^) with 1st number and number to flip bits:\n");
  //display bit pattern of numbers
  result = number1 ^ flip1;
  printbits(number1);
  printbits(flip1);
  printf("-----------------------------------\n");
  printbits(result);
  
  unsigned int flip2 = 0xffff0000; //8 ones, 8 zeros
  printf("\nbitwise exclusive OR (^) with 2nd number and number to flip bits:\n");
  result = number2 ^ flip2;
  //display bit pattern of numbers
  printbits(number2);
  printbits(flip2);
  printf("-----------------------------------\n");
  printbits(result);
  
  return 0; 
} 

/*
Enter 1st number: 1234567890
Enter 2nd number: -987654321

bitwise exclusive OR (^)for the two numbers:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
11000101 00100001 10010111 01001111 = 0xC521974F = -987654321 
-----------------------------------
10001100 10110111 10010101 10011101 = 0x8CB7959D = -1934125667 

bitwise exclusive OR (^) with 1st number and number to flip bits:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
00000000 00000000 11111111 11111111 = 0x0000FFFF = 65535 
-----------------------------------
01001001 10010110 11111101 00101101 = 0x4996FD2D = 1234631981 

bitwise exclusive OR (^) with 2nd number and number to flip bits:
11000101 00100001 10010111 01001111 = 0xC521974F = -987654321 
11111111 11111111 00000000 00000000 = 0xFFFF0000 = -65536 
-----------------------------------
00111010 11011110 10010111 01001111 = 0x3ADE974F = 987666255 

 */
