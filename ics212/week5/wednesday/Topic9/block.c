//an example of block scope
#include <stdio.h> 
int main(void){
  int x = 10; {
    int x = 20; {
      int x = 30; 
      printf("x=%d\n",x);
    }
    printf("x=%d\n",x);
  }
  printf("x=%d\n",x);
  return 0;
}

/*
x=30
x=20
x=10
 */

