/* 
   This file has several useful array functions.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arrayfunctions.h"

/*
  Creates an array of random integers
  array: an array of integers
  size: the size of the array
  start: the 1st random integer
  range: the range of random integers
*/
void loadArrayWithRandomNumbers(int array[], const int size, const int start, const int range){
  if(size<1){
    printf("ERROR: The array size should be at least 1, not %d.\n", size);
    exit(1);
  }
  int i = 0;
  //load random numbers into array
  srand(time(NULL));
  for(i=0;i<size;i++){
    array[i] = start + rand() % range; 
  }   
}

/*
  Ends program if errors with first or last
  first: 1st index in the array
  last: last index in the array
 */
void errorCheckingFirstAndLast(const int first, const int last){
if(first < 0){
  printf("ERROR: The first index should be at least 0, not %d.\n", first);
  exit(1);
 }
if(first > last){
  printf("ERROR: The first index (%d) should be less than or equal to the last index (%d).\n", first, last);
  exit(1);
 }
}


/*
  Display the array on one line, followed by a newline
  array: an array of integers
  first: 1st index in array
  last: last index in array
*/
void printarray(const int array[], const int first, const int last){
  errorCheckingFirstAndLast(first, last);
  int i = 0;
  for(i=first;i<=last;i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}

/*
  Bubble sort for ascending order
  array: an array of integers
  size: the size of the array
*/
void bubblesort(int array[], int size){
  if(size<1){
    printf("ERROR: The array size should be at least 1, not %d.\n", size);
    exit(1);
  }

  int i = 0; //outer loop counter 
  int j = 0; //inner loop counter
  int temp = 0; //used to swap array elements
  char swapFlag = 'n'; //'n' if no swap, 'y' if yes swap, used to stop the looping
  
  //don't display if too many elements in array - takes a long time!
  if(size <= MAX_ARRAY){
    printf("bubblesort:\n");
    printarray(array, 0, size-1);
  }
  
  //outer loop to pass through the array several times (size-1)
  for(i = 0; i < size-1; i++){ 
    //inner loop for "bubbling up"
    for(j = 0; j < size-1-i; j++){      
      //compare two elements, swap if smaller index holds larger value
      if(array[j] > array[j+1]){  
        //don't display if too many elements in array - takes a long time!
        if(size <= MAX_ARRAY){
          printf("  swapping %d and %d\n", array[j], array[j+1]);
        }
        temp = array[j];                   
        array[j] = array[j+1];
        array[j+1] = temp;
        swapFlag = 'y';
      }//end if
    }//end inner loop
    //if no swap, end looping
    if('n' == swapFlag){
      break;
    }
    //if yes swap, reset flag
    swapFlag = 'n';
    if(size <= MAX_ARRAY){
      printarray(array, 0, size-1);
    }
  }//end outer loop 
}//end function

/*
  binary search for a number in an array of integers
  array: an array of integers
  target: number looking for in array
  first: 1st index in the array
  last: last index in the array
*/
int binarySearch(const int array[], const int target, int first, int last){
  errorCheckingFirstAndLast(first, last);
  int halfway = -1; //halfway between first and last index 
  int loops=0; //keeps track of number of loops
  while(first <= last){
    loops++;
    halfway = (first+last)/2;
    printf("\nloop #%d: first = %d, halfway = %d, last = %d\n", loops, first, halfway, last);
    printarray(array, first, last);
    //found it!
    if(target == array[halfway]){
      return halfway;
    }
    //search in 1st half of array
    else if(target < array[halfway]){
      last = halfway - 1; 
    } 
    //search in 2nd half of array
    else{
      first = halfway + 1; 
    }
  }
  //shoots! not found!
  return -1;  
} 


