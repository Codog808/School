//example of forgetting a parameter or return type
#include <stdio.h> 
/*
note that we removed the "void" return type
the compiler will assume that a blank return type is "int"
*/
fun1(int, int); //line #7

/* this is dangerous!
 * no parameters defaults to int
 */
void fun2();

int main(void) { 
  int x=10, y=20;    
  printf("In main before fun1 call x=%d y=%d\n", x, y);
  int j = fun1(x,y);
  printf("fun1 returned %d to main\n", j);
  if(x < y ) {
    int x = 90;
    int y = 75;
  printf("In if x=%d y=%d\n", x, y);

  }

  printf("In main after fun1 call x=%d y=%d\n", x, y);
  fun2(x);
  return 0; 
} 
//void fun1(int x, int y){
//  x++; 
//  y++;
//  printf("x=%d y=%d\n", x, y);
//  return; 
//}

fun1(int x, int y){
  x++; 
  y++;
  printf("x=%d y=%d\n", x, y);
  return; 
}

void fun2(){
    int z;
    printf("fun2 got %d\n", z);

}
/*
 * In main before fun1 call x=10 y=20
 * x=11 y=21
 * fun1 returned 10 to main
 * In main after fun1 call x=10 y=20
 * fun2 got 11
*/

