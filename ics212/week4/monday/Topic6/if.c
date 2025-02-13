/*
  Boolean operators return either 0(false) or 1(true)
  In the C language, 0 is false, and anything except 0 is true
*/
#include <stdio.h>
#include <math.h>

int main(void){
  //declare and initialize variables
  int num3 = 3, num5 = 5, count = 0;
  
  //simple if statement
  if(num3<num5){
    printf("%d < %d is %d\n",num3,num5,num3<num5);
  }

  //if/else statement
  if(num3>num5){
    printf("%d > %d is %d\n",num3,num5,num3>num5);
  }
  else{
      printf("%d <= %d is %d\n",num3,num5,num3<=num5);
  }

  //This Empty Statement
  if(num5<num3)
    ;
  else
    count++;
  
  //should be re-written as
  if(num5>=num3)
    count++;
   
  printf("count = %i\n",count);

  /*
    Because of small differences in floating point numbers, 
    do not use == to compare them
   */
  double threshold = 0.00001;
  double num1    = 0.00009;
  double num2	= 0.00003;
  printf("%f\n", num2);

  num2 = num2 * (1.0/3.0);
  num2 = num2/(1.0/3.0);

  printf("%f\n", num2);
  //fabs() returns the absolute value of a floating-point number 
  if(fabs(num1 - num2) < threshold){
    printf("Close to equal\n");
  }
  
  return 0;
}

/*
3 < 5 is 1
3 <= 5 is 1
count = 2
Close to equal

 */
