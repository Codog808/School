//an example of extern, register, auto, static variables
#include <stdio.h> 

//global variables are extern by default
int global1 = 1;

void fun(void);

int main(void){
  //register is a local variable that might be assigned a high-speed register 
  int register register1 = 0;    
  for(register1=0; register1<10; register1++){
    printf("register1=%d, ", register1);
  }
  printf("\n\n");
  
  //function calls
  printf("In main, first fun call: \n");
  fun();
  printf("In main: global1 = %d\n", global1);
  printf("In main, second fun call: \n");
  fun();
  printf("In main: global1 = %d\n", global1);
  printf("In main, third fun call: \n");
  fun();
  printf("In main: global1 = %d\n", global1);
  
  return 0;
}

void fun(void){
  /*
    static variables are local in scope, 
    but retain their value when the function is finished
  */
  static int static1 = 10;
  //local variables are auto by default
  auto int auto1 = 20;
  int auto2 = 30;
  static1++;
  auto1++;
  auto2++;
  global1++;
  printf("In fun: global1 = %d\n", global1);
  printf("In fun: static1 = %d\n", static1);
  printf("In fun:  auto1 = %d\n", auto1);
  printf("In fun: auto2 = %d\n", auto2);
  printf("\n");
  return;
}

/*
  register1=0, register1=1, register1=2, register1=3, register1=4, register1=5, register1=6, register1=7, register1=8, register1=9, 
  
  global1 = 2
  static1 = 11
  auto1 = 21
  auto2 = 31
  
  global1 = 3
  static1 = 12
  auto1 = 21
  auto2 = 31
  
  global1 = 4
  static1 = 13
  auto1 = 21
  auto2 = 31
  
  global1 = 4
*/

