/*Pointer examples*/
#include <stdio.h>
int main(){
    
    int number1 = 5; //Declare & Initialize a Variable
    int *pointer1 = NULL; //Declare & Initialize a Pointer 
    /*
      Use an asterisk (*) to signifiy it is a pointer.
      NULL is defined in stdio.h 
      NULL is used to indicate that the pointer does not refer to a valid object.
    */
    int number2 = 0;
    
    /*The addresses of these variables on the runtime stack are:*/
    printf("The addresses of these variables on the runtime stack are:\n");
    printf("&number1 = %p\n&pointer1 = %p\n&number2 = %p\n", &number1, &pointer1, &number2);

    /*The numerical value for NULL on (old) Unix is zero (0x0).*/
    /* Linux prints (nil) */
    printf("pointer1 = %p\n", pointer1); //0x0

    /*
      Whatever you do with pointers, do NOT dereference a NULL pointer.
      This is the source of many programming errors with pointers!
      Uncomment the next line of code, compile the program, and see what happens.
    */
   // printf("*pointer1 = %i\n", *pointer1); //Segmentation fault (core dumped)
    
    /*
      The address operator (&) returns the address of number1 (0xffbffa54), which is stored in pointer1
      This code assign number1's address to pointer1.
    */
    pointer1 = &number1; 
    
    /*The dereferencing operator (*) returns the value stored at the address that is stored in pointer1*/
    printf("*pointer1 = %i\n", *pointer1);
    
    /*The dereferencing operator (*) returns the value which pointer1 points to, so number2 has value 5*/
    number2 = *pointer1; 
    
    /*We don't use the dereferencing operator (*) if we want to access the address stored in the pointer*/
    printf("pointer1 = %p\n", pointer1); 
    
    /*We do use the address operator (&) if we want to access the pointer's address on the runtime stack*/
    printf("&pointer1 = %p\n", &pointer1);
    
    /*Similarly, we use the address operator (&) to access the local variable's address on the runtime stack*/
    printf("&number1 = %p, number1 = %i\n", &number1, number1); 
    
    /*Note that %p is used to display addresses*/
    printf("&number2 = %p, number2 = %i\n", &number2, number2); 
    
    return 0;
}

/*
&number1 = 0xffbffa4c
&pointer1 = 0xffbffa48
&number2 = 0xffbffa44
pointer1 = 0x0
*pointer1 = 5
pointer1 = 0xffbffa4c
&pointer1 = 0xffbffa48
&number1 = 0xffbffa4c, number1 = 5
&number2 = 0xffbffa44, number2 = 5  
 */



