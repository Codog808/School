//Example of a generic pointer - a pointer with type void *
#include <stdio.h>

int main(void){


    //declare and initialize variables
    int number1 = 5; //int is 4 bytes (32 bits)
    char letter1 = 'A'; //char is 1 byte (8 bits)
   
    void *genericPointer = NULL; //generic pointer - can point to a variable of any data type 

    printf("number1=%d, &number1=%p \n", number1, &number1);
    printf("letter1='%c', &letter1=%p \n", letter1, &letter1);
    printf("genericPointer=%p, &genericPointer=%p \n\n", genericPointer, &genericPointer);

    //point genericPointer to number1
    genericPointer = &number1;      

    /*
    Use genericPointer to change the value it points to.
    Cast void to int pointer, and then dereference to get value.
    */
    *((int *)genericPointer) = *((int *)genericPointer) * 13;

    //output values   
    printf("number1=%d, &number1=%p \n", number1, &number1);
    printf("letter1='%c', &letter1=%p \n", letter1, &letter1);
    printf("genericPointer=%p, &genericPointer=%p \n", genericPointer, &genericPointer);
    printf("*((int *)genericPointer)=%i\n\n", *((int *)genericPointer));    
   
   
    /*reassign the address of genericPointer, so it points to letter1*/ 
    genericPointer = &letter1;      

    /*
    Use genericPointer to change the value it points to.
    Cast void to char pointer, and then dereference to get value.
    */
    *((char *)genericPointer) = *((char *)genericPointer) + 13;

    //output values   
    printf("number1=%d, &number1=%p \n", number1, &number1);
    printf("letter1='%c', &letter1=%p \n", letter1, &letter1);
    printf("genericPointer=%p, &genericPointer=%p \n", genericPointer, &genericPointer);
    printf("*((char *)genericPointer)='%c'\n", *((char *)genericPointer));

    return 0;
}

/*
number1=5, &number1=0xffbffa34 
letter1=A, &letter1=0xffbffa33 
genericPointer=0x0, &genericPointer=0xffbffa2c 

number1=65, &number1=0xffbffa34 
letter1=A, &letter1=0xffbffa33 
genericPointer=0xffbffa34, &genericPointer=0xffbffa2c 
*((int *)genericPointer)=65

number1=65, &number1=0xffbffa34 
letter1=N, &letter1=0xffbffa33 
genericPointer=0xffbffa33, &genericPointer=0xffbffa2c 
*((char *)genericPointer)=N

 */
