/*An Array of Pointers to Functions
 * Last update 2/23/2018
 * Lisa Miller, W Albritton
 */

#include <stdio.h>
#define SIZE 3

//function prototypes
void function1(void);
void function2(void);
void function3(void);
	
int main(){
   /*
   Declare an array of pointers to functions.
   An array of 3 pointers to 3 functions with no arguments and return type void.
   */
   void (*array[SIZE])(void) = {function1,function2,function3};

   int i=0;
   for (i=0;i<SIZE;i++){
   /*
   Make a function call using an array of pointers to functions.
   The function is dereferenced and no arguments are passed to it.
   Alternative code: (*array[i])(void);
   */ 
      array[i](); 
   }
   printf("\n\n");
   
   for (i=SIZE-1;i>=0;i--){
      array[i]();
   /*display the address of each function definition*/
      printf("&array[%i] = %p, array[%i] = %p\n", i, &array[i], i, array[i]);    
   }
      
   return 0; 		
} 

//function definitions		
void function1(void){
   printf("1st ");
}
void function2(void){
   printf("2nd ");
}
void function3(void){
   printf("3rd ");
}

/*
1st 2nd 3rd 

3rd &array[2] = 0xffbffa30, array[2] = 0x1082c
2nd &array[1] = 0xffbffa2c, array[1] = 0x1080c
1st &array[0] = 0xffbffa28, array[0] = 0x107ec

*/

