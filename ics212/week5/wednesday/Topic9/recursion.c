//Compares an iterative function to a recursive function
//Both iterative and recursive functions add the following numbers: 1 + 2 + 3
#include <stdio.h>

//function prototypes
int loopAdd(int start, int end);
int recursiveAdd(int start, int end);

//main function
int main(){
  
  //declare and initialize local variables at top of function
  int first = 1;
  int last = 3; 
  int result1 = 0;
  int result2 = 0;
  
  //function calls
  result1 = loopAdd(first, last); //return address A
  printf("1 + 2 + 3 = %d\n", result1);
  result2 = recursiveAdd(first, last); //return address B
  printf("1 + 2 + 3 = %d\n", result2);
  return 0;
}//end of main function

//function definitions
int loopAdd(int start, int end){
  int i = 0;
  int result = 0;
  for(i=start; i<=end; i++){
    result = result + i;
  }
  return result;
}

int recursiveAdd(int start, int end){
  int result = 0;
  //base case
  if(start == end){
    result = end;
  }
  //recursive case 
  else{
    result = start + recursiveAdd(start + 1, end);//return address C
  }
  return result; 
}

/*
  1 + 2 + 3 = 6
  1 + 2 + 3 = 6
  
*/

