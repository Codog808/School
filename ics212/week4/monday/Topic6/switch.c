/* 
   switch statement example
*/
#include <stdio.h>
int main(){
  //declare and initialize variables
  char letter = 'z';
  
  //get user input
  printf("Enter a letter: ");
  letter = getchar();
  
  //example switch statement
  switch(letter){   
  case 'A': case 'a': 
    puts("You entered the letter A");       
    break;
  case 'B': case 'b': 
    puts("You entered the letter B");
    break;
  case 'C': case 'c': 
    puts("You entered the letter C");
    break;
  default: 
    puts("You did not enter the letter A, B, or C.");
    break;/*defensive programming*/
  }
  
  return 0;
}

/*
Enter a letter: a
You entered the letter A

Enter a letter: z
You did not enter the letter A, B, or C.
*/
