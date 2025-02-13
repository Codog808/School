#include <stdio.h>
#include "getdouble.h"

/*
   Calculates and displays the Fibbonaci value.
   Both Iterative and Recursive methods are used.  
   by William McDaniel Albritton 
*/

// Count number of loops to function iterative()
int loops = 0;
// Count number of recursive calls 
int recursiveCalls = 0;
//function prototypes	
int recursive(int );	
int iterative(int );

int main() {
  // initialize variables
  int  number = 0;
  int result = 0;
  
  //  get user input
  printf("Enter a positive integer: ");
  number = (int)getdouble();
  
  // call iterative function & display results
  result = iterative(number);
  // error checking to see if it is non-negative
  if (result < 0) {
    puts("ERROR: non-negative integers are undefined!");
    exit(1); // end program
  }
  printf("iterative result = %d\n" , result);
  printf("number of loops  = %d\n" , loops );
  
  // call recursive methods & display results
  result = recursive(number);
  printf("recursive result = %d\n" , result);
  printf("number of calls  = %d\n" , recursiveCalls);
}// end of main function

// Computes a term in the Fibonacci sequence
int iterative(int number) {
  //error condition
  if(number < 0){
    return -1;
  }
  //two special cases
  if (number == 0 || number == 1) {
    return number;
  }
  //values for n = 0, 1, 2
  int first = 0;
  int second = 1;
  int third = first + second;
  int i = 0;
  //calculate next value
  for (i = 3; i <= number; i++) {
    first = second;
    second = third;
    third = first + second;
    loops++; //count the number of loops
  }
  return third;
}


// Computes a term in the Fibonacci sequence
int recursive(int number) {
  // count number of method calls
  recursiveCalls++;
  // base cases
  if((number == 0) || (number == 1)) {
    return number;
  }
  // recursive case
  if(number > 1) {
    return recursive(number - 1) + recursive(number - 2);
  }
  //base case (error for negative numbers)
  return -1;
}//end of recursive()

/*
  Enter a positive integer: 20
  iterative result = 6765
  number of loops  = 18
  recursive result = 6765
  number of calls  = 21891
  
  Enter a positive integer: 30
  iterative result = 832040
  number of loops  = 28
  recursive result = 832040
  number of calls  = 2692537
  
  Enter a positive integer: 40
  iterative result = 102334155
  number of loops  = 38
  recursive result = 102334155
  number of calls  = 331160281
  
*/



