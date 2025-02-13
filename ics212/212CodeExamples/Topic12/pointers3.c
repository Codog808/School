/*Yet another pointer example*/
#include <stdio.h>
int main(){
    
    //equivalent code:
    /*
      double x = 3.3;
      double y = 6.6; 
      double z = 9.9;
      double *pointer1 = &y;
    */
    //initialization shortcut:
    double x=3.3, y=6.6, z=9.9;
    double *pointer1=&y;
    
    //output variable values and addresses    
    printf("x=%f   &x=0x%p\n", x, &x);
    printf("y=%f   &y=0x%p\n", y, &y);
    printf("z=%f   &z=0x%p\n", z, &z);
    printf("*pointer1=%f\n", *pointer1); 
    printf(" pointer1=0x%p\n", pointer1);
    printf("&pointer1=0x%p\n\n", &pointer1);


    /*
      WARNING: This code below shows what NOT to do. 
      It is okay to add integers to or subtract integers from pointers, 
      if they point to an array. 
      However, it is not okay to change pointer values this way, 
      if the pointer points to a single variable. 
      It might point to the wrong variable, or point to random data. 
      If you choose to do this, make sure you know where the pointer is pointing to. 
     */
    
    //change the value that the pointer points to
    *pointer1 = *pointer1 + 1.1;
    printf("x=%f   &x=0x%p\n", x, &x);
    printf("y=%f   &y=0x%p\n", y, &y);
    printf("z=%f   &z=0x%p\n", z, &z);
    printf("*pointer1=%f\n", *pointer1); 
    printf(" pointer1=0x%p\n", pointer1);
    printf("&pointer1=0x%p\n\n", &pointer1);
        
    /*                                                                                                         
      WARNING: This code below shows what NOT to do.     
      It is okay to add integers to or subtract integers from pointers,                                         
      if they point to an array.
      However, it is not okay to change pointer values this way, if the pointer points to a single variable.
      It might point to the wrong variable, or point to random data.
      If you choose to do this, make sure you know where the pointer is pointing to.
    */

    //adding by 8 bytes, because points to an double
    pointer1 = pointer1 + 1;
    printf("x=%f   &x=0x%p\n", x, &x);
    printf("y=%f   &y=0x%p\n", y, &y);
    printf("z=%f   &z=0x%p\n", z, &z);
    printf("*pointer1=%f\n", *pointer1); 
    printf(" pointer1=0x%p\n", pointer1);
    printf("&pointer1=0x%p\n\n", &pointer1);
    
    //change the value that the pointer points to
    *pointer1 = *pointer1 + 1.1; 
    printf("x=%f   &x=0x%p\n", x, &x);
    printf("y=%f   &y=0x%p\n", y, &y);
    printf("z=%f   &z=0x%p\n", z, &z);
    printf("*pointer1=%f\n", *pointer1); 
    printf(" pointer1=0x%p\n", pointer1);
    printf("&pointer1=0x%p\n\n", &pointer1);

    /*                                                                                                           
      WARNING: This code below shows what NOT to do.                                                             
      It is okay to add integers to or subtract integers from pointers,                                         
      if they point to an array.                                                                                 
      However, it is not okay to change pointer values this way, if the pointer points to a single variable.     
      It might point to the wrong variable, or point to random data.                                             
      If you choose to do this, make sure you know where the pointer is pointing to.                             
    */

    //subtracting by 16 (2*8) bytes, because points to an double
    pointer1 = pointer1 - 2;
    printf("x=%f   &x=0x%p\n", x, &x);
    printf("y=%f   &y=0x%p\n", y, &y);
    printf("z=%f   &z=0x%p\n", z, &z);
    printf("*pointer1=%f\n", *pointer1); 
    printf(" pointer1=0x%p\n", pointer1);
    printf("&pointer1=0x%p\n\n", &pointer1);
      
    return 0;
}

/*
x=3.300000   &x=0xffbffa40
y=6.600000   &y=0xffbffa38
z=9.900000   &z=0xffbffa30
*pointer1=6.600000
 pointer1=0xffbffa38
&pointer1=0xffbffa2c

x=3.300000   &x=0xffbffa40
y=7.700000   &y=0xffbffa38
z=9.900000   &z=0xffbffa30
*pointer1=7.700000
 pointer1=0xffbffa38
&pointer1=0xffbffa2c

x=3.300000   &x=0xffbffa40
y=7.700000   &y=0xffbffa38
z=9.900000   &z=0xffbffa30
*pointer1=3.300000
 pointer1=0xffbffa40
&pointer1=0xffbffa2c

x=4.400000   &x=0xffbffa40
y=7.700000   &y=0xffbffa38
z=9.900000   &z=0xffbffa30
*pointer1=4.400000
 pointer1=0xffbffa40
&pointer1=0xffbffa2c

x=4.400000   &x=0xffbffa40
y=7.700000   &y=0xffbffa38
z=9.900000   &z=0xffbffa30
*pointer1=9.900000
 pointer1=0xffbffa30
&pointer1=0xffbffa2c


*/
   
