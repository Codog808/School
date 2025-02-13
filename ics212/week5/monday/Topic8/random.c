/**
  Roll a six-sided die 1000 times 
*/
#include <stdio.h>
#include <time.h> //time function
#include <stdlib.h> //random number generator functions 
#define MAX 10000

int main(){
  //will have a value 1 to 6, for 6 sides of the dice
  int side = 0;
  //variables to store the number of times each side comes up
  int side1 = 0; 
  int side2 = 0; 
  int side3 = 0; 
  int side4 = 0; 
  int side5 = 0; 
  int side6 = 0; 
  //counter for looping
  int i = 0;
  
  /*
    Set the seed for random number generation.
    It should always be a different number,
    so we use the "UNIX time", 
    which is the number of seconds since January 1, 1970
  */
  printf("UNIX time: seconds since January 1, 1970 = %d\n", time(NULL));
  srand(time(NULL));
  
  //loop 1000 times, and count the number of 1s, 2s, 3s, etc.
  printf("RAND_MAX = %d\n", RAND_MAX);
  for(i=1;i<=MAX;i++){
    //generate a pseudo-random number from 1 to 6
    side = 1 + rand() % 6; 
    
    //count each number
    switch (side) {
    case 1: 
      side1++;
      break;
    case 2: 
      side2++;
      break;
    case 3: 
      side3++;
      break;
    case 4: 
      side4++;
      break;
    case 5: 
      side5++;
      break;
    case 6: 
      side6++;
      break; /*defensive programming*/
    } 
  } 
  
  //display results (10 is the field width)
  printf("Side  Count\n");
  printf("  1    %d\n", side1);       
  printf("  2    %d\n", side2);
  printf("  3    %d\n", side3);       
  printf("  4    %d\n", side4);   
  printf("  5    %d\n", side5);       
  printf("  6    %d\n", side6);   
  
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



