/* 
   Example of for loop 
*/

#include <stdio.h>
#define ZERO 0
#define LIMIT 11

int main(){
  //initialization
  //int x; //= ZERO;
  
  //for loop to count 1 to 10
  for(unsigned int x = ZERO; x < LIMIT; x++){
    printf("%i ", x);
  }
  printf("\n");

  return 0;
}

/*
1 2 3 4 5 6 7 8 9 10 

*/
