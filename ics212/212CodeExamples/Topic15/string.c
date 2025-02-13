/*
  String initialization
*/
#include <stdio.h> 
#define SIZE 7 /*symbolic constant */

void printstring(char [], int, int);

int main(){
  int i = 0;
  //string initialization
  //stores 7 null characters ('\0' = 0x0)
  char string1[SIZE] = {'\0'};
  //stores one 's' + null character ('\0' = 0x0)
  char string2[SIZE] = {'s'};
  //stores 6 characters + null character ('\0' = 0x0)    
  char string3[SIZE] = {'s','t','r','i','n','g','\0'};
  char string4[SIZE] = "string";
  
  //string output
  printstring(string1, 1, SIZE);
  printstring(string2, 2, SIZE);
  printstring(string3, 3, SIZE);
  printstring(string4, 4, SIZE);   
  
  /*
    Be careful when changing the characters in a string.
    Make sure to leave a null character at the end of a string.
    Or you can use a null character to shorten a string
  */
  
  string1[0] = 'Z'; 
  printstring(string1, 1, SIZE);
  
  /*
    writes over the null character
    and over string1
    DON'T DO THIS
  */
  for(i=0;i<SIZE + SIZE;i++){
    string2[i] = 'Y'; 
  }
  printstring(string1, 1, SIZE);
  printstring(string2, 2, SIZE + SIZE + 1);
  
  //insert a null character to shorten the string
  string3[3] = '\0'; 
  printstring(string3, 3, SIZE);
  
  //put X at start of string
  string4[0] = 'X';
  printstring(string4, 4, SIZE);

  //display characters and address stored on runtime stack
  char *top = &string1[0];
  char *bottom = &string4[SIZE-1];
  char *j = NULL;
  printf("top    = %p\n", top);
  printf("bottom = %p\n", bottom);
  for(j=top; j<=bottom; j++){
    printf("'%c' (%p)\n", *j, j);
  }

  return 0;
}

void printstring(char string[], int number, int size){
  int i = 0;
  printf("string #%d:\n", number);
  //using printf and %s format character
  printf(" use %%s: %s\n", string); 
  //using for-loop to display all characters in string
  printf("looping: ");
  for(i=0;i<size;i++){
    if('\0'==string[i]){
      printf("\\0"); //display null character
    }
    else{
      printf("%c",string[i]);
    }
  }    
  printf("\n");
  printf("\n");
}//end of printstring

/*
string #1:
 use %s: 
looping: \0\0\0\0\0\0\0

string #2:
 use %s: s
looping: s\0\0\0\0\0\0

string #3:
 use %s: string
looping: string\0

string #4:
 use %s: string
looping: string\0

string #1:
 use %s: Z
looping: Z\0\0\0\0\0\0

string #1:
 use %s: YYYYYY
looping: YYYYYY\0

string #2:
 use %s: YYYYYYYYYYYYYY
looping: YYYYYYYYYYYYYY\0

string #3:
 use %s: str
looping: str\0ng\0

string #4:
 use %s: Xtring
looping: Xtring\0

top    = 0xffbffa2e
bottom = 0xffbffa10
'' (0xffbffa2e)
'Y' (0xffbffa2d)
'Y' (0xffbffa2c)
'Y' (0xffbffa2b)
'Y' (0xffbffa2a)
'Y' (0xffbffa29)
'Y' (0xffbffa28)
'Y' (0xffbffa27)
'Y' (0xffbffa26)
'Y' (0xffbffa25)
'Y' (0xffbffa24)
'Y' (0xffbffa23)
'Y' (0xffbffa22)
'Y' (0xffbffa21)
'Y' (0xffbffa20)
'' (0xffbffa1f)
'' (0xffbffa1e)
'g' (0xffbffa1d)
'n' (0xffbffa1c)
'' (0xffbffa1b)
'r' (0xffbffa1a)
't' (0xffbffa19)
's' (0xffbffa18)
'' (0xffbffa17)
'' (0xffbffa16)
'g' (0xffbffa15)
'n' (0xffbffa14)
'i' (0xffbffa13)
'r' (0xffbffa12)
't' (0xffbffa11)
'X' (0xffbffa10)

*/

