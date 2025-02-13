/*Will repeat 1st line of text on commandline*/
#include <stdio.h>
#include <string.h>
/*
argc - argument count is the number of commandline arguments
argv - argument vector is a pointer to an array of character strings 
that contain the commandline arguments (also written as **argv)
*/
int main(int argc, char *argv[]){
   int i=0;
   //display the argument count
   printf("argc = %i\n", argc);
    
   //display the argument vector - strings and addresses
   for(i=argc-1;i>=0;i--){
      printf("argv[%i] = \"%s\" (%p), &argv[i]=%p\n", i, argv[i], argv[i], &argv[i]);
   }
   printf("\n");
    
   //display the argument vector - characters and addresses
   int j = 0;
   int size2 = 0; //size of each string
   for(i=argc-1;i>=0;i--){
      //strlen() returns the length of a string (number of characters, except the end of string character)
      size2 = strlen(argv[i]);
      for(j=size2;j>=0;j--){
         if('\0'==argv[i][j]){
         //output the end of string character ('\0')
            printf("argv[%i][%i]='\\0' (%p)\n", i, j, &argv[i][j]);
         }
         else{
            printf("argv[%i][%i]='%c' (%p)\n", i, j, argv[i][j], &argv[i][j]);
         }
      }
   }
   printf("\n");
   
   if(argc > 2){
   //access a string:
      char *string2 = argv[2];
      printf("string2=\"%s\"\n", string2);
   
   //access last character
      int size3 = strlen(argv[2]);
      char letter2 = argv[2][size3-1];
      printf("letter2='%c'\n", letter2);
   }
   
   /*
   The strings (array of characters) for commandline arguments are stored on the runtime stack, 
   so we can change the values of the characters, if needed
   */
   if(argc >= 1){
      argv[0][0]='X'; //no program crash
      printf("argv[0] = \"%s\"\n", argv[0]);
   }
   
   return 0;
}

/*
commandline argument in UNIX: ./program one two three four

argc = 5
argv[4] = "four" (0xffbffbb8), &argv[i]=0xffbffaa4
argv[3] = "three" (0xffbffbb2), &argv[i]=0xffbffaa0
argv[2] = "two" (0xffbffbae), &argv[i]=0xffbffa9c
argv[1] = "one" (0xffbffbaa), &argv[i]=0xffbffa98
argv[0] = "./program" (0xffbffba0), &argv[i]=0xffbffa94

argv[4][4]='\0' (0xffbffbbc)
argv[4][3]='r' (0xffbffbbb)
argv[4][2]='u' (0xffbffbba)
argv[4][1]='o' (0xffbffbb9)
argv[4][0]='f' (0xffbffbb8)
argv[3][5]='\0' (0xffbffbb7)
argv[3][4]='e' (0xffbffbb6)
argv[3][3]='e' (0xffbffbb5)
argv[3][2]='r' (0xffbffbb4)
argv[3][1]='h' (0xffbffbb3)
argv[3][0]='t' (0xffbffbb2)
argv[2][3]='\0' (0xffbffbb1)
argv[2][2]='o' (0xffbffbb0)
argv[2][1]='w' (0xffbffbaf)
argv[2][0]='t' (0xffbffbae)
argv[1][3]='\0' (0xffbffbad)
argv[1][2]='e' (0xffbffbac)
argv[1][1]='n' (0xffbffbab)
argv[1][0]='o' (0xffbffbaa)
argv[0][9]='\0' (0xffbffba9)
argv[0][8]='m' (0xffbffba8)
argv[0][7]='a' (0xffbffba7)
argv[0][6]='r' (0xffbffba6)
argv[0][5]='g' (0xffbffba5)
argv[0][4]='o' (0xffbffba4)
argv[0][3]='r' (0xffbffba3)
argv[0][2]='p' (0xffbffba2)
argv[0][1]='/' (0xffbffba1)
argv[0][0]='.' (0xffbffba0)

string2="two"
letter2='o'
argv[0] = "X/program"

*/

