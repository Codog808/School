/*Examples of Arrays of Pointers
* Last edit 2/23/2018
* Lisa Miller, W. Albritton
*/
#include <stdio.h>
#include <string.h>
#define SIZE 5
int main(void){
    /*
      An array of the numbers 0, 1, 2, 3, 4 in English.
      Adds a null character ('\0') to end of each string.
    */
    char *array[SIZE]={"zero","one","two", "three", "four"}; 
    /*
      Note that these strings are stored in read-only memory, 
      so we cannot change the value, or we will crash the program.
      This code will compile, but will crash your program:
    */
    //array[0][0]='X';//Segmentation fault (core dumped)
    
    int i = 0;
    
    //display the strings and addresses
    for(i=SIZE-1;i>=0;i--){
        printf("array[%i]=\"%s\" (%p), &array[i]=%p\n", i, array[i], array[i], &array[i]);
    }
    printf("\n");   
    
    //display the characters and addresses
    int j = 0;
    int size2 = 0; //size of each string
    for(i=SIZE-1;i>=0;i--){
        //strlen() returns the length of a string (number of characters, except the end of string character)
        size2 = strlen(array[i]); 
        for(j=size2;j>=0;j--){            
		if('\0'==array[i][j]){
                //output the end of string character ('\0')
                printf("array[%i][%i]='\\0' (%p)\n", i, j, &array[i][j]);
            }
            else{
                printf("array[%i][%i]='%c' (%p)\n", i, j, array[i][j], &array[i][j]);
            }
        }
    }
    printf("\n");
    
    //access a string:
    char *string2 = array[2];
    printf("string2=\"%s\"\n", string2);
    
    //access a character
    char letter2 = array[2][0];
    printf("letter2='%c'\n", letter2);
    
    return 0;
}
/*
 * array[4]="four" (0x556578ec49eb), &array[i]=0x7ffde6318c40
 * array[3]="three" (0x556578ec49e5), &array[i]=0x7ffde6318c38
 * array[2]="two" (0x556578ec49e1), &array[i]=0x7ffde6318c30
 * array[1]="one" (0x556578ec49dd), &array[i]=0x7ffde6318c28
 * array[0]="zero" (0x556578ec49d8), &array[i]=0x7ffde6318c20
 *
 * array[4][4]='\0' (0x556578ec49ef)
 * array[4][3]='r' (0x556578ec49ee)
 * array[4][2]='u' (0x556578ec49ed)
 * array[4][1]='o' (0x556578ec49ec)
 * array[4][0]='f' (0x556578ec49eb)
 * array[3][5]='\0' (0x556578ec49ea)
 * array[3][4]='e' (0x556578ec49e9)
 * array[3][3]='e' (0x556578ec49e8)
 * array[3][2]='r' (0x556578ec49e7)
 * array[3][1]='h' (0x556578ec49e6)
 * array[3][0]='t' (0x556578ec49e5)
 * array[2][3]='\0' (0x556578ec49e4)
 * array[2][2]='o' (0x556578ec49e3)
 * array[2][1]='w' (0x556578ec49e2)
 * array[2][0]='t' (0x556578ec49e1)
 * array[1][3]='\0' (0x556578ec49e0)
 * array[1][2]='e' (0x556578ec49df)
 * array[1][1]='n' (0x556578ec49de)
 * array[1][0]='o' (0x556578ec49dd)
 * array[0][4]='\0' (0x556578ec49dc)
 * array[0][3]='o' (0x556578ec49db)
 * array[0][2]='r' (0x556578ec49da)
 * array[0][1]='e' (0x556578ec49d9)
 * array[0][0]='z' (0x556578ec49d8)
 *
 * string2="two"
 * letter2='t'
 */

