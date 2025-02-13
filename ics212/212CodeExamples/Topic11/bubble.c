/* 
   This program creates 8 random integers, 
   stores the integers in an array,
   and sorts the array's values into ascending order using bubble sort. 
*/
#include <stdio.h>
#include "arrayfunctions.h"
#define SIZE 25    //size of the array
#define START 1   //1st random number
#define RANGE 100   //range of random numbers

int main(){   
   /* initialize array */
   int array[SIZE] = {0}; 
   
   //function calls
   loadArrayWithRandomNumbers(array, SIZE, START, RANGE);
   bubblesort(array, SIZE);
   
   return 0; 
}

/*
bubblesort:
4 1 3 7 6 6 7 4 
  swapping 4 and 1
  swapping 4 and 3
  swapping 7 and 6
  swapping 7 and 6
  swapping 7 and 4
1 3 4 6 6 7 4 7 
  swapping 7 and 4
1 3 4 6 6 4 7 7 
  swapping 6 and 4
1 3 4 6 4 6 7 7 
  swapping 6 and 4
1 3 4 4 6 6 7 7 
*/

