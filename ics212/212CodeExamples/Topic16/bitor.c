/* 
   Examples of bitwise inclusive OR (|)
*/
#include <stdio.h>
#include "printbits.h"
#include "getdouble.h"

int main(){ 
  //initialization
  int number1 = 0;
  int number2 = 0;
  int result = 0;
  char c = 'c';
  
  //user input
  printf("Enter 1st number: ");
  number1 = getdouble();
  printf("Enter 2nd number: ");
  number2 = getdouble();
  
  printf("\nbitwise inclusive OR (|)for the two numbers:\n");
  result = number1 | number2;
  //display bit pattern of numbers
  printbits(number1);
  printbits(number2);
  //bitwise inclusive OR (|) for the two numbers
  printf("-----------------------------------\n");
  printbits(result);
  
  /*
    Bitwise inclusive OR (|) can be used to set specific bits to one.
    Ones are used to set bits to one.
    Zeros are used to keep the bits the same.
  */
  unsigned int set1 = 0x0000ffff; //8 zeros, 8 ones
  printf("\nbitwise inclusive OR (|) with 1st number and number to set bits:\n");
  result = number1 | set1;
  //display bit pattern of numbers
  printbits(number1);
  printbits(set1);
  printf("-----------------------------------\n");
  printbits(result);
  
  unsigned int set2 = 0xffff0000; //8 ones, 8 zeros
  result = number2 | set2;
  printf("\nbitwise inclusive OR (|) with 2nd number and number to set bits:\n");
  //display bit pattern of numbers
  printbits(number2);
  printbits(set2);
  printf("-----------------------------------\n");
  printbits(result);

  printbits(c);
  printf("%c\n", c);
  
  return 0; 
} 

/*
Enter 1st number: 1234567890
Enter 2nd number: -123456789

bitwise inclusive OR (|)for the two numbers:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
11111000 10100100 00110010 11101011 = 0xF8A432EB = -123456789 
-----------------------------------
11111001 10110110 00110010 11111011 = 0xF9B632FB = -105499909 

bitwise inclusive OR (|) with 1st number and number to set bits:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
00000000 00000000 11111111 11111111 = 0x0000FFFF = 65535 
-----------------------------------
01001001 10010110 11111111 11111111 = 0x4996FFFF = 1234632703 

bitwise inclusive OR (|) with 2nd number and number to set bits:
11111000 10100100 00110010 11101011 = 0xF8A432EB = -123456789 
11111111 11111111 00000000 00000000 = 0xFFFF0000 = -65536 
-----------------------------------
11111111 11111111 00110010 11101011 = 0xFFFF32EB = -52501 
 */
