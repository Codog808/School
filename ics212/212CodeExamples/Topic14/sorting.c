/*
Use insertionsort to sort an array of at least 5 single-digit numbers entered on the commandline
After the executable name, enter -a or -d for ascending or descending order
For example, this will sort in ascending order: 
./program -a 4 1 8 9 5 2 0 3 7 6
For example, this will sort in descending order: 
./program -d 4 1 8 9 5 2 0 3 7 6
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MINIMUM 1+1+5 //executable, -a or -d, and 5 single-digit numbers
#define ASCENDING 'a'
#define DESCENDING 'd'
#define INDEX_OF_1ST_DIGIT 2
#define LENGTH_OF_ONE_DIGIT 1

//function prototypes
void insertionsort(char *[], const int, const int, int (*)(char, char));
int ascend(char, char);
int descend(char, char);
void printarray(char *[], int , int );

int main(int argc, char *argv[]){

   int i = 0; //counter for looping
   int stringlength = 0;

//check for minimum commandline arguments
   if(argc < MINIMUM){
      printf("ERROR: Enter at least %i arguments on the commandline\n", MINIMUM);
      printf("You only entered %i arguments\n", argc);
      exit(1); //quit the program
   } 
   //check for -a or -d
   if(argv[1][1] != ASCENDING && argv[1][1] != DESCENDING){
      printf("ERROR: For the 2nd argument enter -%c or -%c (ascending or descending)\n", ASCENDING, DESCENDING);
      printf("You entered \"%s\" for the 2nd argument\n", argv[1]);
      exit(1); //quit the program
   } 
   //check for single-digit numbers from 3rd argument
   for(i = INDEX_OF_1ST_DIGIT; i < argc; i++){
   //check to make sure it is in the range '0'-'9' (ASCII values)
      if(argv[i][0] < '0' || argv[i][0] > '9'){
         printf("ERROR: \"%s\" is not a one-digit number\n", argv[i]);
         exit(1); //quit the program
      } 
   //check to make sure the numbers are one digit
      stringlength = strlen(argv[i]);
      if(LENGTH_OF_ONE_DIGIT != stringlength){
         printf("ERROR: \"%s\" is not a one-digit number\n", argv[i]);
         exit(1); //quit the program
      }    
   }
   
   //display and sort the array
   if('a' == argv[1][1]){
      insertionsort(argv, INDEX_OF_1ST_DIGIT, argc-1, ascend); 
   }
   else{
      insertionsort(argv, INDEX_OF_1ST_DIGIT, argc-1, descend);
   }
   return 0;
}

/*
insertion sort
array is an array of the one-digit number ASCII characters ('0' to '9')     	
startindex is the index of the first element in the array  	
endindex is the index of the last element in the array 
*/
void insertionsort(char *array[], const int startindex, const int endindex, int (*compare)(char,char)) {
   int i = 0;
   int j = 0;
   char temp = '0';
   printarray(array, startindex, endindex);
   //loop from 2nd item to end of array
   for (i = startindex + 1; i <= endindex; i++) {
   //store the item being inserted
      temp = array[i][0];
      //display inserted item
      printf("inserting item: %c\n", temp); 
      j = i;
     //loop through sorted part of array
      printf("shifting items: ");
      while ((j > startindex) && (compare(array[j - 1][0], temp))) {
         //shift sorted elements to the right
         array[j][0] = array[j - 1][0];
         //display each shifted element
         printf("%c, ", array[j][0]);
         j--;   
      }
      printf("\n");
      //insert next item into sorted part
      array[j][0] = temp;
      //display the array at end of each outer loop
      printarray(array, startindex, endindex);
   }
}

//function for ascending sort
int ascend(char first, char second){
   return first > second; //insert if first is larger than second number
}

//function for descending sort
int descend(char first, char second){
   return first < second; //insert if first is smaller than second number
}

/*
displays an array from start index to ending index
array is an array of the one-digit number ASCII ("0" to "9") strings     	
startindex is the index of the first element in the array  	
endindex is the index of the last element in the array  
*/ 	
void printarray(char *array[], int startindex, int endindex) {
   //printf("startindex=%i, endindex=%i\n", startindex, endindex);
   int i = 0;
   for (i = startindex; i <= endindex; i++) {
      printf("%s ", array[i]);
   }
   printf("\n");
}

/*
walbritt@uhx01:/home/27/walbritt/public_html/ics212/examples> ./program -a 4 1 8 9 5 2 0 3 7 6
4 1 8 9 5 2 0 3 7 6 
inserting item: 1
shifting items: 4, 
1 4 8 9 5 2 0 3 7 6 
inserting item: 8
shifting items: 
1 4 8 9 5 2 0 3 7 6 
inserting item: 9
shifting items: 
1 4 8 9 5 2 0 3 7 6 
inserting item: 5
shifting items: 9, 8, 
1 4 5 8 9 2 0 3 7 6 
inserting item: 2
shifting items: 9, 8, 5, 4, 
1 2 4 5 8 9 0 3 7 6 
inserting item: 0
shifting items: 9, 8, 5, 4, 2, 1, 
0 1 2 4 5 8 9 3 7 6 
inserting item: 3
shifting items: 9, 8, 5, 4, 
0 1 2 3 4 5 8 9 7 6 
inserting item: 7
shifting items: 9, 8, 
0 1 2 3 4 5 7 8 9 6 
inserting item: 6
shifting items: 9, 8, 7, 
0 1 2 3 4 5 6 7 8 9 


walbritt@uhx01:/home/27/walbritt/public_html/ics212/examples> ./program -d 4 1 8 9 5 2 0 3 7 6
4 1 8 9 5 2 0 3 7 6 
inserting item: 1
shifting items: 
4 1 8 9 5 2 0 3 7 6 
inserting item: 8
shifting items: 1, 4, 
8 4 1 9 5 2 0 3 7 6 
inserting item: 9
shifting items: 1, 4, 8, 
9 8 4 1 5 2 0 3 7 6 
inserting item: 5
shifting items: 1, 4, 
9 8 5 4 1 2 0 3 7 6 
inserting item: 2
shifting items: 1, 
9 8 5 4 2 1 0 3 7 6 
inserting item: 0
shifting items: 
9 8 5 4 2 1 0 3 7 6 
inserting item: 3
shifting items: 0, 1, 2, 
9 8 5 4 3 2 1 0 7 6 
inserting item: 7
shifting items: 0, 1, 2, 3, 4, 5, 
9 8 7 5 4 3 2 1 0 6 
inserting item: 6
shifting items: 0, 1, 2, 3, 4, 5, 
9 8 7 6 5 4 3 2 1 0 

*/
    
   


