/*
  Roll a six-sided die 1000 times using an array
*/
#include <stdio.h>
#include <time.h> //time function
#include <stdlib.h> //random number generator functions 
#define MAX 100000  //number of times the dice rolls
#define SIZE 7    //the number of elements in the array (0th element will not be used)

int main(){
  //will have a value 1 to 6, for 6 sides of the dice
  int side = 0;
  //counter for looping
  int i = 0, j = 0;
  //array to store the number of times each side comes up
  int array[SIZE] = {0};
  
  /*
    Set the seed for random number generation.
    It should always be a different number,
    so we use the "UNIX time", 
    which is the number of seconds since January 1, 1970
  */
  printf("UNIX time: seconds since January 1, 1970 = %ld\n", time(NULL));
  srand(time(NULL));
  
  //loop 1000 times, and count the number of 1s, 2s, 3s, etc.

  for(i=1;i<=MAX;i++){
    //generate a pseudo-random number from 1 to 6
    side = 1 + rand() % 6; 
    //replaced switch with an array - much shorter code!
    array[side]++; //increment count held in array at index side
    //**** crucial that array has been initialized to zeros! ***
  } 
  
  //display results
  printf("\tSide\t\tCount\n");
  for(j=1;j<=6;j++){
    printf("\t%d\t\t%d\n", j, array[j]);
  }
  return 0; 
} 


/*
UNIX time: seconds since January 1, 1970 = 1439599246
RAND_MAX = 32767
Side  Count
  1    181
  2    153
  3    174
  4    148
  5    170
  6    174
*/



