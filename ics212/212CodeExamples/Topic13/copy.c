/*String copy using pointers*/
/* copy.c */

#include <stdio.h>   
#define SIZE 7
int main(){   
   //incorrect string copy:      
   char array1[] = "string";      
   char *pointer1 = array1;		
   pointer1[0] = 'X';         
   printf("array1 = %s\n",array1); //Xtring   
   printf("pointer1 = %s\n\n",pointer1); //Xtring

   //correct string copy:
   char array2[] = "string";      
   char array3[SIZE] = {'\0'}; //end of string marker      
   char *pointer2 = array2;
   char *pointer3 = array3; 
   while(*pointer2 != '\0'){ 
      *(pointer3++) = *(pointer2++);
   }      
   array2[0]='X';	         
   printf("array2 = %s\n",array2); //Xtring
   printf("array3 = %s\n\n",array3); //string
   
   //Display the addresses of the arrays and pointer
   printf("&array1 = %p, array1 = %p\n", &array1, array1);
   printf("&pointer1 = %p, pointer1 = %p\n", &pointer1, pointer1);
   printf("&array2 = %p, array2 = %p\n", &array2, array2);
   printf("&array3 = %p, array3 = %p\n", &array3, array3);
      
   return 0;   
}
   
/*
array1 = Xtring
pointer1 = Xtring

array2 = Xtring
array3 = string

&array1 = ffbffa30, array1 = ffbffa30
&pointer1 = ffbffa2c, pointer1 = ffbffa30
&array3 = ffbffa20, array3 = ffbffa20
&array3 = ffbffa18, array3 = ffbffa18
*/
