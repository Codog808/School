/*
  Relational operators return either 0(false) or 1(true)
  In the C language, 0 is false, and anything except 0 is true
*/
#include <stdio.h>

int main(void){
  //declare and initialize variables
  int num3 = 3;
  int num5 = 5;
  int zero = 0;

  //output results of relational operators
  printf("%d > %d is %d\n",num3,num5,num3>num5);
  printf("%d < %d is %d\n",num3,num5,num3<num5);
  printf("%d >= %d is %d\n",num3,num5,num3>=num5);
  printf("%d <= %d is %d\n\n",num3,num5,num3<=num5);
  
  //output results of equality operators
  printf("%d == %d is %d\n",num3,num5,num3==num5);
  printf("%d != %d is %d\n\n",num3,num5,num3!=num5);

/*
    WARNING: a common error is to use the assignment operator (=),
    instead of the equality operator (==)
    This will still compile, 
    so it is an extremely difficult bug to find!
    And it will change the value of the 1st operand. Yikes!!
*/
  printf("%d = ",num3);
  printf("%d is ",num5);
  printf("%d\n",num3=num5);
  printf("num3 is %d\n", num3);
  printf("num5 is %d\n\n", num5);

  /*
    for Boolean operator not (!) 
    !x is the same as 0==x
  */
  printf("%d == %d is %d\n",0,num5,0==num5);
  printf("!%d is %d\n",num5,!num5);
  printf("%d == %d is %d\n",0,zero,0==zero);
  printf("!%d is %d\n",zero,!zero);  

  return 0;
}

/*
3 > 5 is 0
3 < 5 is 1
3 >= 5 is 0
3 <= 5 is 1

3 == 5 is 0
3 != 5 is 1

3 = 5 is 5
num3 is 5
num5 is 5

0 == 5 is 0
!5 is 0
0 == 0 is 1
!0 is 1
 */
