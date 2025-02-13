/*** Pointers and character arrays (strings) ***/
/* char.c */
#include <stdio.h>   
int main(){         
    char array[] = "character array";      
    char *pointer  = "constant array";               

    //Display the addresses of the array and pointer (note that they are stored in different parts of memory)
    printf("&array = %p, array = %p\n", &array, array);
    printf("&pointer = %p, pointer = %p\n\n", &pointer, pointer);

    /*Gives compiler error: incompatible types in assignment*/      
    //array = pointer; 

    //outputs
    printf("array = %s\n", array);
    printf("pointer = %s\n\n", pointer);
    
    /*This statement is fine, because we can change the elements in an array*/
    array[0] = 'X';      
    /*
    This gives runtime error: Segmentation fault (core dumped)
    Because we are trying to change an array that should be a constant*/
    //pointer[0] = 'Z'; 
    
    //outputs
    printf("array = %s\n", array);
    printf("pointer = %s\n\n", pointer);
    
    //we can re-assign the pointer to a different address
    pointer = array;
    printf("array = %s\n", array);
    printf("pointer = %s\n\n", pointer);

    //Display the addresses of the array and pointer
    printf("&array = %p, array = %p\n", &array, array);
    printf("&pointer = %p, pointer = %p\n\n", &pointer, pointer);
    return 0;   
}

/*
array = Xharacter array
pointer = constant array

array = Xharacter array
pointer = Xharacter array

&array = 0xffbffa28, array = 0xffbffa28
&pointer = 0xffbffa24, pointer = 0xffbffa28
 */
