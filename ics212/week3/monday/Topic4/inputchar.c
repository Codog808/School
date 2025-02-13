/*
  Examples of character input 
  and output using a format specifier "%c" for characters
*/
   
#include <stdio.h> /*library with getchar() and printf() functions*/

int main(void){
  
  /*declare variable and initialize variable*/
  char letter = 'A';
  
  /*ask for user input, get the character, and display*/
  printf("Please enter a letter: ");
  letter = getchar();
  /*
    %c is the format specifier, which outputs in a specific format
    in this case, the ASCII character format 
  */
  printf("The letter is: '%c'\n", letter);
  
  return 0;
}

/*
  Please enter a letter: w
  The letter is: 'w'
*/

