/* 
   Example of break statement in a for loop
*/
#include <stdio.h>
int main(){
  int i = 0, j = 0;
  for(int k = 1; k <= 3; k++){
      printf("outer loop: k = %d\n\n", k);
    for(i = 1; i <= 10; i++){
	  
        printf("Top of loop: i = %d\n", i);
        if(i >= 5){
            printf("breaking out of loop\n\n");
            break;
        }
        j++;
        printf("Bottom of loop: j = %d\n\n", j);
    }
  }
  printf("Outside the loop\n");
  printf("i = %d, j = %d\n", i, j);

  return 0;
}

/*
Top of loop: i = 1
Bottom of loop: j = 1

Top of loop: i = 2
Bottom of loop: j = 2

Top of loop: i = 3
Bottom of loop: j = 3

Top of loop: i = 4
Bottom of loop: j = 4

Top of loop: i = 5
breaking out of loop

Outside the loop
i = 5, j = 4


 */

