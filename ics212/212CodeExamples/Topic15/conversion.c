/*
  Examples of String Conversion Functions
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i=atoi("9000");    
  printf("i = %d\n", i); //i = 1234

  double f=atof("1.23"); 
  printf("f = %f\n", f); //f = 1.23

  /*
    warning: passing arg 1 of `atoi' 
    makes pointer from integer without a cast
   */
  //int x=atoi('5');
  
  return 0;
}


