/* 
   Examples of do loops 
*/

#include <stdio.h>
#define ZERO 0
#define LIMIT 11

int main(){
  //initialization
  int x = ZERO;
  
  //do loop
  do{
    printf("%i ", x);
    x++;
  } while(x < LIMIT);
  printf("\n");
  
  return 0;

}

/*
0 1 2 3 4 5 6 7 8 9 10 
*/


