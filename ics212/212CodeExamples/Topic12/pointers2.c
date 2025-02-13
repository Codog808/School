/*More pointer examples*/
#include <stdio.h>
int main(){

    //initialize variables
    char letter1 = 'A'; 
    char *pointer1 = NULL;
    char letter2 = 'z';
    
    //assign an address to a pointer
    pointer1 = &letter1;
    
    //letter1's value & address
    printf("  letter1=%c           &letter1=0x%p\n", letter1, &letter1); 
    //letter1's value & address (through pointer pointer1)
    printf("*pointer1=%c           pointer1=0x%p\n", *pointer1, pointer1); 
    //pointer1's value & address
    printf(" pointer1=0x%p  &pointer1=0x%p\n\n", pointer1, &pointer1); 
        
    /*unary operators associate right to left, so dereference, then add*/ 
    ++*pointer1;	 
    //letter1's value & address
    printf("  letter1=%c           &letter1=0x%p\n", letter1, &letter1); 
    //letter1's value & address (through pointer pointer1)
    printf("*pointer1=%c           pointer1=0x%p\n", *pointer1, pointer1);
    //pointer1's value & address   
    printf(" pointer1=0x%p  &pointer1=0x%p\n\n", pointer1, &pointer1); 
    
    /*unary operators associate right to left, so have to use parentheses here*/
    (*pointer1)++;
    //letter1's value & address              
    printf("  letter1=%c           &letter1=0x%p\n", letter1, &letter1); 
    //letter1's value & address (through pointer pointer1)   
    printf("*pointer1=%c           pointer1=0x%p\n", *pointer1, pointer1);
    //pointer1's value & address  
    printf(" pointer1=0x%p  &pointer1=0x%p\n\n", pointer1, &pointer1);  
    
    /*can add any value to what the pointer points to*/
    *pointer1 = *pointer1 + 13;
    //letter1's value & address              
    printf("  letter1=%c           &letter1=0x%p\n", letter1, &letter1); 
    //letter1's value & address (through pointer pointer1)   
    printf("*pointer1=%c           pointer1=0x%p\n", *pointer1, pointer1);
    //pointer1's value & address  
    printf(" pointer1=0x%p  &pointer1=0x%p\n\n", pointer1, &pointer1);     
    
    /*you can reassign a pointer to any variable's address*/
    pointer1 = &letter2;
    //letter2's value & address
    printf("  letter2=%c           &letter2=0x%p\n", letter2, &letter2); 
    //letter1's value & address (through pointer pointer1)
    printf("*pointer1=%c           pointer1=0x%p\n", *pointer1, pointer1); 
    //pointer1's value & address
    printf(" pointer1=0x%p  &pointer1=0x%p\n\n", pointer1, &pointer1); 
    
    /*and you can use the dereferenced pointer value as you wish */
    *pointer1 = ((*pointer1 / 2) * 2) - 2;
    //letter2's value & address
    printf("  letter2=%c           &letter2=0x%p\n", letter2, &letter2); 
    //letter1's value & address (through pointer pointer1)
    printf("*pointer1=%c           pointer1=0x%p\n", *pointer1, pointer1); 
    //pointer1's value & address
    printf(" pointer1=0x%p  &pointer1=0x%p\n\n", pointer1, &pointer1); 
    
    return 0;
}

/*
  letter1=A           &letter1=0xffbffa47
  *pointer1=A           pointer1=0xffbffa47
 pointer1=0xffbffa47  &pointer1=0xffbffa40

  letter1=B           &letter1=0xffbffa47
  *pointer1=B           pointer1=0xffbffa47
 pointer1=0xffbffa47  &pointer1=0xffbffa40

  letter1=C           &letter1=0xffbffa47
  *pointer1=C           pointer1=0xffbffa47
 pointer1=0xffbffa47  &pointer1=0xffbffa40

  letter1=P           &letter1=0xffbffa47
  *pointer1=P           pointer1=0xffbffa47
 pointer1=0xffbffa47  &pointer1=0xffbffa40

  letter2=z           &letter2=0xffbffa3f
  *pointer1=z           pointer1=0xffbffa3f
 pointer1=0xffbffa3f  &pointer1=0xffbffa40

  letter2=x           &letter2=0xffbffa3f
  *pointer1=x           pointer1=0xffbffa3f
 pointer1=0xffbffa3f  &pointer1=0xffbffa40

 */

