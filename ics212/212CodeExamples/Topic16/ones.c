/* 
   Examples of one's complement (~)
*/
#include <stdio.h>
#include "printbits.h"
#include "getdouble.h"

int main(){ 
  //initialization
  int number = 0;
  int result = 0;

  //user input
  printf("Enter a number: ");
  number = getdouble();
  
  printf("\none's complement (~) of the number:\n");
  //display bit pattern of number
  result = ~number;
  printbits(number);
  printf("-----------------------------------\n");
  printbits(result);
    
  return 0; 
} 

/*
Enter a number: 1234567890

one's complement (~) of the number:
01001001 10010110 00000010 11010010 = 0x499602D2 = 1234567890 
-----------------------------------
10110110 01101001 11111101 00101101 = 0xB669FD2D = -1234567891 
 */
