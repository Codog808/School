//example of call by value
#include <stdio.h> 

void fun1(int, int); 

int main(void) { 
  int x=10, y=20;    
  printf("In main before calling function: x=%d y=%d\n", x, y);
  fun1(x,y); 
  printf("In main after function returns: x=%d y=%d\n", x, y);
  return 0; 
} 
void fun1(int x, int y){ 
  x++; 
  y++;
  printf("Inside function after increment: x=%d y=%d\n", x, y);
  return; 
}

/*
  x=10 y=20
  x=11 y=21
  x=10 y=20
*/

