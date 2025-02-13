/* 
   Example of continue statement 
*/

#include <stdio.h>
#define ZERO 0

int main(){

  int x = 1, y = 1, z = 1; 
  while(x <= 10){
      printf("x = %i, ", x);
      x++;
      if(x <= 5){
        y++;
        printf("y = %i\n", y);
        continue;
      }
      z++;
      printf("z = %i\n", z);
  }
  
  return 0;
}

/*
x = 1, y = 2
x = 2, y = 3
x = 3, y = 4
x = 4, y = 5
x = 5, z = 2
x = 6, z = 3
x = 7, z = 4
x = 8, z = 5
x = 9, z = 6
x = 10, z = 7

*/
