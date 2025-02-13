/*
  Driver program for getstring() and getline() functions
*/
#include <stdio.h>
#include "stringinput.h"
#define MAX 10
int main(void){

  /*
    initialize strings
  */
  char string1[MAX] = {'\0'};
  char string2[MAX] = {'\0'};
  int size = 0;

  //test getstring()
  printf("Enter a string with a max of %d characters: ", MAX-1);
  size = getstring(string1, MAX);
  printf("You entered: \"%s\", with a size of %d characters\n", string1, size);

  //test getline
  printf("Enter a string with a max of %d characters: ", MAX-1);
  size = getline2(string2, MAX);
  printf("You also entered: \"%s\", with a size of %d characters\n", string2, size);
  
  //test getstring(     
  printf("\nEnter a string with a max of %d characters: ", MAX-1);
  size = getstring(string1, MAX);
  printf("You entered: \"%s\", with a size of %d characters\n", string1, size);

  //test getline   
  printf("\nEnter a string with a max of %d characters: ", MAX-1);
  size = getline2(string2, MAX);
  printf("You also entered: \"%s\", with a size of %d characters\n", string2, size);
  return 0;
}

/*
Enter a string with a max of 9 characters: 123456789012345678901234567890
You entered: "123456789", with a size of 9 characters
You also entered: "012345678", with a size of 9 characters

Enter a string with a max of 9 characters: abc def wxyz
You entered: "abc", with a size of 3 characters
You also entered: "def wxyz", with a size of 8 characters

 */
