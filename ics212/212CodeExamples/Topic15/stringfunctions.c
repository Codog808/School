/*
  Example string library functions for: 
  Copying strings
  Concatenating strings
  Comparing strings
  Searching strings
  Determining length of strings
  Tokenizing strings
*/

#include <stdio.h>
#include <string.h>
#include "stringinput.h"
#define MAX 10
#define MAX2 100
int main(){
  char string1[MAX]={'\0'};
  char string2[MAX]={'\0'};
  char string3[MAX+MAX]={'\0'};
  int length = 0;

  printf("Enter a string of max length %d: ", MAX-1);
  length = getstring(string1, MAX);
  printf("The length of \"%s\" is %d\n", string1, length);

  printf("Enter a 2nd string of max length %d: ", MAX-1);
  length = getstring(string2, MAX);
  printf("The length of \"%s\" is %d\n", string2, length);
  
  //Copying strings
  strncpy(string3, string1, MAX);
  printf("string3 = %s\n", string3);

  //Concatenating strings
  strncat(string3, string2, MAX);
  printf("string3 = %s\n", string3);

  //Comparing strings
  printf("strcmp(\"%s\", \"%s\") = %d\n", string1, string1, strcmp(string1, string1));
  printf("strcmp(\"%s\", \"%s\") = %d\n", string1, string2, strcmp(string1, string2));
  printf("strcmp(\"%s\", \"%s\") = %d\n", string2, string1, strcmp(string2, string1));
  
  //Searchin strings for a character
  char character = string2[2];
  char *pointer = strchr(string3, character);
  if(pointer != NULL){
    printf("strchr(\"%s\", '%c') = %s (0x%p)\n", string3, character, pointer, pointer);
  }
  //Searchin strings for a substring
  pointer = strstr(string3, string2);
  if(pointer != NULL){
    printf("strstr(\"%s\", \"%s\") = %s (0x%p)\n", string3, string2, pointer, pointer);
  }

  //Determining length of strings
  length = strlen(string3);
  printf("strlen(\"%s\") = %d\n", string3, length);
  
  //String tokenizer
  char sentence[MAX2] = {'\0'};
  printf("Enter a sentence with several words: ");
  length = getline2(sentence, MAX2);
  /*
    the delimiter is a set of characters,
    so you can have more than one delimiter
   */
  char delimiter[] = " ,.!\t"; 
  //1st function call has string as 1st argument
  pointer = strtok(sentence, delimiter);
  /*searches for delimiter and inserts null 
    character ('\0') in its place*/
  int i = 0;
  while(NULL != pointer){
    printf("token #%d = %s\n", ++i, pointer);
    /*
      keeps inserting '\0' in place of delimiter
      the 2nd function call has NULL as 1st argument
     */
    pointer = strtok(NULL, delimiter);
  }
  //original string has '\0' inserted in place of all delimiters
  for(i=0;i<length;i++){
    if('\0'==sentence[i]){
      printf("\\0"); //display null character
    }
    else{
      printf("%c",sentence[i]);
    }
  }
  printf("\n");

  return 0;
}

/*
Example output:

Enter a string of max length 9: apple 
The length of "apple" is 5
Enter a 2nd string of max length 9: banana
The length of "banana" is 6
string3 = apple
string3 = applebanana
strcmp("apple", "apple") = 0
strcmp("apple", "banana") = -1
strcmp("banana", "apple") = 1
strchr("applebanana", 'n') = nana (0xffbffa07)
strstr("applebanana", "banana") = banana (0xffbffa05)
strlen("applebanana") = 11
Enter a sentence with several words: I like to eat apple bananas!
token #1 = I
token #2 = like
token #3 = to
token #4 = eat
token #5 = apple
token #6 = bananas
I\0like\0to\0eat\0apple\0bananas\0

 */
