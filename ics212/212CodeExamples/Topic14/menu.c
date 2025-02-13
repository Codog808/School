/*An example of arrays of pointers to functions 
 * used in a menu-driven program
 * Last update 2/23/2018
 * Lisa Miller, W. Albritton
 */
#include <stdio.h>
#define SIZE 3

//function prototypes
char add1(char);
char add2(char);
char add3(char);
char menu();

int main(){
   /*
    Declare an array of pointers to functions
    An array of 3 pointers to 3 functions with a char argument and return type char
   */
   char (*array[SIZE])(char) = {add1,add2,add3};
   
   char letter = 'a'; //character entered by the user
   char newline = '\n'; //used to get rid of newline on input stream
   char index = 0; //index in the array of functions
   char result = 'a'; //the new character
   char stop = 'n'; //stop looping or not ('y' quits the loop/program)
  
   do{
   
   //ask the user to input a character 
      printf("Enter one character, and press \"Enter\": ");
      letter = getchar();
   //get rid of the newline
      newline = getchar();
      
   //display menu
      index = menu();
   
   //get new value
      result = array[index](letter); 	
   
   //display result
      printf("'%c' + %i = '%c'\n", letter, index+1, result);
   
   //stop?
      printf("Would you like to stop the program? (enter 'y' or 'n'): ");
      stop = getchar();
      newline = getchar();
      
   }while(stop != 'y');   
   
   return 0;
}

//function definitions

char add1(char letter){
   return letter+1;
}
char add2(char letter){
   return letter+2;
}
char add3(char letter){
   return letter+3;
}

//display menu and do error checking
char menu(){
   char number = 0;
   char newline = '\n';
   while(number != '1' && number != '2' && number != '3'){
      printf("\n   Simple Addition Menu\n");
      printf("1. Add one to your character\n");
      printf("2. Add two to your character\n");
      printf("3. Add three to your character\n");
      printf("Enter 1, 2, or 3 and press \"Enter\": ");
      number = getchar();
      newline = getchar();
      if(number != '1' && number != '2' && number != '3'){
         printf("\nERROR: You entered '%c'.\n", number);
      }
   }
   //subtract character zero to convert ASCII character to a decimal digit
   number = number - '0'; 
   //subtract one, because array index starts at zero
   number = number - 1;
   return number;
}

/*
Enter one character, and press "Enter": s

   Simple Addition Menu
1. Add one to your character
2. Add two to your character
3. Add three to your character
Enter 1, 2, or 3 and press "Enter": 1
's' + 1 = 't'
Would you like to stop the program? (enter 'y' or 'n'): n
Enter one character, and press "Enter": A

   Simple Addition Menu
1. Add one to your character
2. Add two to your character
3. Add three to your character
Enter 1, 2, or 3 and press "Enter": 2
'A' + 2 = 'C'
Would you like to stop the program? (enter 'y' or 'n'): n
Enter one character, and press "Enter": m

   Simple Addition Menu
1. Add one to your character
2. Add two to your character
3. Add three to your character
Enter 1, 2, or 3 and press "Enter": 3
'm' + 3 = 'p'
Would you like to stop the program? (enter 'y' or 'n'): y

*/

