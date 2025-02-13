/* 
   Examples of Left Shift (<<) and Right Shift (>>) Operators
*/
#include <stdio.h>
#include "printbits.h"
#include "getdouble.h"

int main(){ 
  //initialization
  int number = 0;
  int shifter = 0;
  int result = 0;
  
  //user input
  printf("Enter number: ");
  number = getdouble();
  printf("Enter shifter: ");
  shifter = getdouble();
  
  printf("\nshift number to the left by %d bits:\n", shifter);
  result = number << shifter; 
  //display bit pattern of numbers
  printbits(number);
  printf("-----------------------------------\n");
  printbits(result);
  
  printf("\nshift number to the right by %d bits:\n", shifter);
  result = number >> shifter; 
  //display bit pattern of numbers
  printbits(number);
  printf("-----------------------------------\n");
  printbits(result);
  
  return 0; 
} 

/*
Enter number: 100
Enter shifter: 5

shift number to the left by 5 bits:
00000000 00000000 00000000 01100100 = 0x00000064 = 100 
-----------------------------------
00000000 00000000 00001100 10000000 = 0x00000C80 = 3200 

shift number to the right by 5 bits:
00000000 00000000 00000000 01100100 = 0x00000064 = 100 
-----------------------------------
00000000 00000000 00000000 00000011 = 0x00000003 = 3 
 */
