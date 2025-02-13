/*
  Arrays, when used as arugments in a function, are passed by reference
  The individual elements in an array, when used as arguments in a function, are passed by value.
*/
#include <stdio.h>
#define SIZE 5 /*symbolic constant SIZE is the number of array elements*/

//Function prototype
//takes one array of ints and two regular int parameters
//note: names are not needed!
void fun1(int [], int, int); 


int main(){
  //initialize variables
  int i = 0; 
  int array[SIZE]={1,2,3,4,5};//SIZE not necessary if initializer list is desired length.
  
  //function call
  fun1(array, SIZE, array[0]);
  
	//print out changed array in main
  for(i = 0; i < SIZE; i++) {
    printf("%d ",array[i]); //1 4 9 16 25 ** array[0] NOT changed to 10000
  }
  
  printf("\n");
  return 0;
}

//function definition
//takes in an array of ints, and two int parameters
//array will be passed in by reference
//ints will be passed in by value
//note: names are required here
void fun1(int a[], int max, int x){
  int i = 0; 
  x = 1000; //assign a different value to parameter x
  for(i = 0; i < max; i++) {
    a[i] = a[i] * a[i]; //multiply each array element by itself
  }
}




