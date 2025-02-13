/*
  Examples of using flags, printing with precision, and puts() function
*/

#include <stdio.h>    

#define WORD "aloha"
#define NUMBER -5
#define LETTER 'Z'
#define PI 3.14159265358979323846  //PI to 20 decimal digits

int main(){   

  puts("Example of using flags, width, and precision:");
  
  //right justified, width of 9 spaces
  printf("Right justified, 9 space width, tabs between\n");
  puts("word\tnumber\tletter\tpi");
  printf("%9s\t%9d\t%9c\t%9f\n", WORD, NUMBER, LETTER, PI);

  //left justified (minus sign -), width of 9, print plus or minus sign (plus sign +)
  printf("Left justified, 9 space width, tabs between, print +/-\n");
  puts("word\tnumber\tletter\tpi");
  printf("%-9s\t%-+9d\t%-9c\t%+-9f\n", WORD, NUMBER, LETTER, PI);

  /*
    left justified (minus sign -)
    width of 9 spaces
    precision (number following the period) is 3 decimal places for floats
    precision is 3 numerals for integers, so displays leading zeros
  */
  
  printf("Left justified, 9 space width, 3 decimal place/digit precision float/int, \n");
  puts("word\tnumber\tletter\tpi");
  printf("%-9.3s\t%-9.3d\t%-9.3c\t%-9.3f\n", WORD, NUMBER, LETTER, PI);

  return 0;
}

/*
Example of using flags, width, and precision:
    aloha       -5        Z 3.141593
aloha    -5       Z        +3.141593
alo      -005     Z        3.142 
*/
