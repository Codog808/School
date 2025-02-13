/*
   Counting the letters A,B,C or a,b,c
   Example of while loop, switch statements, and break statements
*/
#include <stdio.h>
int main(){
  int a=0,b=0,c=0,e=0,letter=0;
  printf("This program will count the number of A's, B's, or C's in a file or typed.\n");
  printf("Enter several sentences. (To stop entering and count, press Ctrl-D on UNIX.)\n");
  //EOF = End of File character (Ctrl-D on UNIX or Mac, Ctrl-Z on PC)
  letter=getchar();
  while(EOF != letter){
	//	printf("top while\n");
    switch(letter){   
    case 'A': case 'a': 
      a++;       
      break;
    case 'B': case 'b': 
      b++;    
      break;
    case 'C': case 'c': 
      c++;       
      break;
    default: e++; 
      break;/*defensive programming*/
    }//end of switch
    letter=getchar();
  }//end of while
  printf("\na=%d\nb=%d\nc=%d\nother=%d\n",a,b,c,e);
  return 0;
}

/*
make
./program < electricity.txt               

This program will count the number of A's, B's, or C's in a sentence.
Enter several sentences. (To stop entering and count, press Ctrl-D on UNIX.)

a=258
b=37
c=160
other=3607

*/
