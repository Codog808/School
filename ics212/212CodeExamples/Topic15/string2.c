/*
Examples of one array of pointers to strings
and two two-dimensional arrays of characters
 */
#include <stdio.h>
int main(){
  
  /*
    Creates an array of pointers to two constant character strings 
    If we change these strings, the program will compile,
    but the program will crash!!
  */
  char *array1[] = {"zero", "one"};     
  
  //Creates a 2-D array of characters    
  char array2[2][5] = {"zero", "one"}; 
  
  //Creates a 2-D array of characters
  char array3[2][5] = {'z','e','r','o','\0','o','n','e','\0','\0'}; 
  
  //array1: 
  printf("array1[0] = %s\n",array1[0]);/* zero */
  printf("array1[0] = 0x%p\n",array1[0]);/* 0x10988 */
  printf("&array1[0] = 0x%p\n",&array1[0]);/* 0xffbffa30 */
  printf("array1[0][0] = %c\n",array1[0][0]);/* z */
  printf("&array1[0][0] = 0x%p\n",&array1[0][0]);/* 0x10988 */
 // array1[0][0]='A';/* Segmentation fault (core dumped) */
  array1[0]=array1[1];/* can assign another address */
  printf("array1[0] = %s\n\n", array1[0]); /* one */
  
  //array2:
  printf("array2[0] = %s\n",array2[0]);  /* zero */   
  printf("array2[0] = 0x%p\n",array2[0]);  /* 0xffbffa20 */ 
  printf("&array2[0] = 0x%p\n",&array2[0]);  /* 0xffbffa20 */ 
  printf("array2[0][0] = %c\n",array2[0][0]);  /* z */
  printf("&array2[0][0] = 0x%p\n",&array2[0][0]); /* 0xffbffa20 */
  printf("&array2[0][1] = 0x%p\n",&array2[0][1]); /* 0xffbffa21 */
  printf("&array2[1][0] = 0x%p\n\n",&array2[1][0]); /* 0xffbffa25 */
  array2[0][0]='A'; /* can assign to another character */
 // array2[0]=array2[1]; /* incompatible types in assignment */
  //array1[0]=&array2[0];  /* assignment from incompatible pointer type */
  //array1[0]=array2; /* assignment from incompatible pointer type */
  printf("array1[0] = %s\n",array1[0]);/* zero */
  printf("&array1[0] = 0x%p\n",&array1[0]);/* 0xffbffa30 */
  
  //array3: 
  printf("array3[0] = %s\n",array3[0]);  /* zero */   
  printf("array3[0] = 0x%p\n",array3[0]);  /* 0xffbffa10 */ 
  printf("&array3[0] = 0x%p\n",&array3[0]);  /* 0xffbffa10 */ 
  printf("array3[0][0] = %c\n",array3[0][0]);  /* z */
  printf("&array3[0][0] = 0x%p\n",&array3[0][0]); /* 0xffbffa10 */                       
  array3[0][0]='A'; /* can assign to another character */
  //array3[0]=array3[1]; /* incompatible types in assignment */
  
  return 0;
}


