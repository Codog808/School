/*    
   Binary search for an integer in an array of integers
*/
#include <stdio.h>
#include "getdouble.h"
#include "arrayfunctions.h"
#define SIZE 1024 //size of array 
#define START 1   //1st random number
#define RANGE 999 //range of random numbers

int main(){
  //initialize variables
  int array[SIZE]={0}; 
  int number = 0;
  int index = -1; //index of number, if found
  
  //load random numbers into array
  loadArrayWithRandomNumbers(array, SIZE, START, RANGE); 
  
  //sort the array
  bubblesort(array, SIZE);
  
  //get number from user
  printf("Enter a number between %d and %d: ",START, START + RANGE - 1);
  number = getdouble();
  
  //try to find number
  index = binarySearch(array, number, 0, SIZE-1);
  
  //output found or not 
  if(index != -1){
    printf("%d found at array element #%d\n", number, index);
  } 
  else{
    printf( "Sorry, %d not found\n", number);
  } 
  
  return 0;
} 

/*

 */

