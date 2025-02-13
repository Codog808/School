//Examples of Pointers & Arrays, which are constant pointers 
#include <stdio.h>
#define SIZE 4

int main(){

   //declare and initialize variables
   int array[] = {10,20,30,40};
   int *pointer = NULL;
   char array2[] = {'a','b','c','d'};
   double array3[] = {11.1,22.2,33.3,44.4};
   int i = 0;
         
   //these two lines of code do the same thing - assign the array's address to the pointer
   pointer = array;
   pointer = &array[0];

   //what not to do:
   //pointer = &array; //warning: assignment from incompatible pointer type 

   //the array address and pointer address
   printf("array = %p, &array = %p\n",array, &array);
   printf("pointer = %p, &pointer = %p\n\n",pointer, &pointer);

   //array subscript notation:
   printf("array[0] = %i\n",array[0]);
   
   //pointer/offset notation:
   printf("*(array+1) = %i\n",*(array+1));
   
   //array subscript notation using pointer:
   printf("pointer[2] = %i\n",pointer[2]);

   //pointer/offset notation using pointer:
   printf("*(pointer+3) = %i\n\n",*(pointer+3));

 //looping with a pointer
   while(pointer != (array + SIZE)){         	
      printf("%p = %i\n", pointer, *pointer);         	
      pointer++;      
   }   
   printf("\n");
      
//array storage
   for(i=SIZE-1;i>=0;i--){
      printf("array2[%i] = %c (%p)\n",i,array2[i],&array2[i]);
   }
   printf("\n");
   for(i=SIZE-1;i>=0;i--){
      printf("array3[%i] = %f (%p)\n",i,array3[i],&array3[i]);
   }

   return 0;
}

/*
array = 0xffbffa28, &array = 0xffbffa28
pointer = 0xffbffa28, &pointer = 0xffbffa24

array[0] = 10
*(array+1) = 20
pointer[2] = 30
*(pointer+3) = 40

0xffbffa28 = 10
0xffbffa2c = 20
0xffbffa30 = 30
0xffbffa34 = 40

array[3] = d (0xffbffa1b)
array[2] = c (0xffbffa1a)
array[1] = b (0xffbffa19)
array[0] = a (0xffbffa18)

array2[3] = 44.400000 (0xffbffa10)
array2[2] = 33.300000 (0xffbffa08)
array2[1] = 22.200000 (0xffbffa00)
array2[0] = 11.100000 (0xffbff9f8)

*/ 


