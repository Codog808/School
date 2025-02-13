/* 
   Example of a while loop that uses a special value called a sentinel to terminate the loop
   The body of the loop is executed until the sentinel is found
*/

#include <stdio.h>
#include "getdouble.h"  //need to include this file for getdouble() function
#define ZERO 0.0

int main(){
  //initialization
  double sum = ZERO;
  //a negative value for value is the "sentinel value"
  double value = ZERO;
 
  printf("This an example of sentinel loop.\n");
  printf("It will add up positive numbers.\n");
  printf("Until the user enters a negative number.\n");
  printf("The negative number is the \"sentinel value\".\n");
  //condition 
  while(!(value < ZERO)){
    sum = sum + value;
    printf("sum = %f, value = %f\n", sum, value);
    //loop body 
    printf("Enter a number: ");
    //update
    value = getdouble();
  }
  printf("The sum is %f\n", sum);
  
  return 0;
}

/*
This an example of sentinel loop.
It will add up positive numbers.
Until the user enters a negative number, or zero.
The negative number is the "sentinel value".
Enter a number: 0.0
Enter a number: 1.1
Enter a number: 2.02
Enter a number: 3.003
Enter a number: 4.0004
Enter a number: 5.00005
Enter a number: -1
The sum is 15.123450

*/
