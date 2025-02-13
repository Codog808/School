/*
  Shows how to initialize and output arrays.
  Lisa Miller, W Albritton
  2/14/2018
*/
#include <stdio.h>
#define SIZE 5 /*symbolic constant SIZE*/

int main(){
  //initializing arrays
  int array0[SIZE]; //NOT INITIALIZED!
  int array1[SIZE]={0};/*={0,0,0,0,0}*/
  double array2[]={1.1,2.2,3.3,4.4,5.5};
	//double array2[SIZE]={1.1,2.2,3.3,4.4,5.5};
  int i=0;
  
  //output arrays
  //uninit array prints fine, values garbage
  printf("array0: ");
  for(i=0;i<SIZE;i++) {
    printf("%d ",array0[i]);
    array0[i] += 9;
  }
  printf("array0: ");
  for(i=0;i<SIZE;i++) {
    printf("%d ",array0[i]);
  }
  printf("\n");
  printf("array1: ");
  for(i=0;i<SIZE;i++) {
    printf("%d ",array1[i]);
  }
  printf("\n");
  
  printf("array2: ");
  for(i=0;i<SIZE;i++) {
    printf("%.1f ",array2[i]);
  }
  printf("\n");
  
  //change values in array1 and array2 using a for-loop
  for(i=0;i<SIZE;i++) {
      array0[i] = i;
    array1[i] = i * 10;
    array2[i] = array2[i] * 10;
  }
  
  //display again
  printf("array0: ");
  for(i=0;i<SIZE;i++) {
    printf("%d ",array0[i]);
  }
  printf("\n");     
  printf("array1: ");
  for(i=0;i<SIZE;i++) {
    printf("%d ",array1[i]);
  }
  printf("\n");     
  
  printf("array2: ");
  for(i=0;i<SIZE;i++) {
    printf("%.1f ",array2[i]);
  }
  printf("\n");
  
  
  return 0;
}

/*
array1: 0 0 0 0 0 
array2: 1.1 2.2 3.3 4.4 5.5 
array1: 0 10 20 30 40 
array2: 11.0 22.0 33.0 44.0 55.0 
*/


