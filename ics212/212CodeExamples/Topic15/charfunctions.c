/* 
Example of character functions from C library <ctype.h>
*/
#include <stdio.h>
#include <ctype.h>

void characterFunctions(char);

int main(){ 
   int character = 'z';
   int newline = '\n';
   while(1){
   //prompt user and get character
      printf("Enter a character, or EOF (Ctrl-D on UNIX & Mac, Ctrl-Z on PC) to quit: ");
      character = getchar();
      if(character == EOF){
         break;
      }
   //take newline off input stream
      newline = getchar();
   //run a bunch of character functions
      characterFunctions(character);
   }

   return 0;

} 

void characterFunctions(char ch){
   printf("tolower('%c') = '%c'\n", ch, tolower(ch));
   printf("toupper('%c') = '%c'\n", ch, toupper(ch));

   printf("islower('%c') = %d\n", ch, islower(ch));
   printf("isupper('%c') = %d\n", ch, isupper(ch));

   printf("isalpha('%c') = %d\n", ch, isalpha(ch)); //A-Z or a-z
   printf("isdigit('%c') = %d\n", ch, isdigit(ch)); //0-9
   printf("isalnum('%c') = %d\n", ch, isalnum(ch)); //A-Z or a-z or 0-9

   printf("ispunct('%c') = %d\n", ch, ispunct(ch)); //any punctuation character, except space
   printf("isspace('%c') = %d\n", ch, isspace(ch)); //space character
}

/*
Enter a character, or EOF (Ctrl-D on UNIX & Mac, Ctrl-Z on PC) to quit: 3
tolower('3') = '3'
toupper('3') = '3'
islower('3') = 0
isupper('3') = 0
isalpha('3') = 0
isdigit('3') = 4
isalnum('3') = 4
ispunct('3') = 0
isspace('3') = 0
Enter a character, or EOF (Ctrl-D on UNIX & Mac, Ctrl-Z on PC) to quit:  
tolower(' ') = ' '
toupper(' ') = ' '
islower(' ') = 0
isupper(' ') = 0
isalpha(' ') = 0
isdigit(' ') = 0
isalnum(' ') = 0
ispunct(' ') = 0
isspace(' ') = 8
Enter a character, or EOF (Ctrl-D on UNIX & Mac, Ctrl-Z on PC) to quit: !
tolower('!') = '!'
toupper('!') = '!'
islower('!') = 0
isupper('!') = 0
isalpha('!') = 0
isdigit('!') = 0
isalnum('!') = 0
ispunct('!') = 16
isspace('!') = 0
Enter a character, or EOF (Ctrl-D on UNIX & Mac, Ctrl-Z on PC) to quit: A
tolower('A') = 'a'
toupper('A') = 'A'
islower('A') = 0
isupper('A') = 1
isalpha('A') = 1
isdigit('A') = 0
isalnum('A') = 1
ispunct('A') = 0
isspace('A') = 0
Enter a character, or EOF (Ctrl-D on UNIX & Mac, Ctrl-Z on PC) to quit: b
tolower('b') = 'b'
toupper('b') = 'B'
islower('b') = 2
isupper('b') = 0
isalpha('b') = 2
isdigit('b') = 0
isalnum('b') = 2
ispunct('b') = 0
isspace('b') = 0

*/

