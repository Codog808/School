//Call by Value and Call by Reference examples
#include <stdio.h>

//function prototypes
void swap1(char, char);
void swap2(char *, char *);

int main(){

    //declare and initialize variables
    char letter1 = 'A'; 
    char letter2 = 'Z'; 
    char *pointer1 = &letter1;
    char *pointer2 = &letter2;

    //display addresses in memory on runtime stack
    printf("&letter1=%p\n", &letter1); 
    printf("&letter2=%p\n", &letter2); 
    printf("&pointer1=%p, pointer1=%p\n", &pointer1, pointer1); 
    printf("&pointer2=%p, pointer2=%p\n\n", &pointer2, pointer2); 
    
    //display letters before and after call by value function call
    printf("main() method - before swap1():\n");
    printf("letter1=%c\n",letter1); 
    printf("letter2=%c\n",letter2);
    //letter1 and letter2 are the actual parameters (arguments) of this function
    swap1(letter1,letter2); /*call by value, so NO swapping*/		  
    printf("main() method - after swap1():\n");
    printf("letter1=%c\n",letter1); 
    printf("letter2=%c\n\n",letter2);

    //display letters before and after call by reference function call
    printf("main() method - before swap2() with address parameters:\n");
    printf("letter1=%c\n",letter1); 
    printf("letter2=%c\n",letter2);
    //letter1 and letter2 are the actual parameters (arguments) of this function    
    swap2(&letter1,&letter2); /*call by reference, so swap values*/		  
    printf("main() method - after swap2() with address parameters:\n");
    printf("letter1=%c\n",letter1); 
    printf("letter2=%c\n\n",letter2);
    
    //display letters before and after call by reference function call
    printf("main() method - before swap2() with pointer parameters:\n");
    printf("letter1=%c\n",letter1); 
    printf("letter2=%c\n",letter2);
    //can also use pointers as the actual parameters to do call by reference, 
    //as they contain the addresses of letter1 and letter2
    swap2(pointer1,pointer2); /*call by reference, so swap values*/		  
    printf("main() method - after swap2() with pointer parameters:\n");
    printf("letter1=%c\n",letter1); 
    printf("letter2=%c\n\n",letter2);    
    
    return 0;
}

/*call by value, so NO swapping of main() function's variables*/
//letter3 and letter4 are the formal parameters of this function
void swap1(char letter3, char letter4){
    char temp = letter3;
    letter3 = letter4;
    letter4 = temp;
    printf("swap1() method: \n");
    printf("letter3=%c, &letter3=%p \n",letter3,&letter3);
    printf("letter4=%c, &letter4=%p \n",letter4,&letter4);
    printf("temp=%c, &temp=%p \n",temp,&temp);
}

/*call by reference, so swap in main() function's variables*/	
//letter5 and letter6 are the formal parameters of this function
void swap2(char *letter5, char *letter6){
    char temp = *letter5;
    *letter5=*letter6;
    *letter6=temp;
    printf("swap2() method \n");
    printf("*letter5=%c, &letter5=%p, letter5=%p \n",*letter5,&letter5,letter5);
    printf("*letter6=%c, &letter6=%p, letter6=%p  \n",*letter6,&letter6,letter6);
    printf("temp=%c, &temp=%p \n",temp,&temp);
}

/*
&letter1=0xffbffa37
&letter2=0xffbffa36
&pointer1=0xffbffa30, pointer1=0xffbffa37
&pointer2=0xffbffa2c, pointer2=0xffbffa36

main() method - before swap1():
letter1=A
letter2=Z
swap1() method: 
letter3=Z, &letter3=0xffbffa0c 
letter4=A, &letter4=0xffbffa10 
temp=A, &temp=0xffbff9b7 
main() method - after swap1():
letter1=A
letter2=Z

main() method - before swap2():
letter1=A
letter2=Z
swap2() method 
*letter5=Z, &letter5=0xffbffa0c, letter5=0xffbffa37 
*letter6=A, &letter6=0xffbffa10, letter6=0xffbffa36  
temp=A, &temp=0xffbff9b7 
main() method - after swap2():
letter1=Z
letter2=A

main() method - before swap2():
letter1=Z
letter2=A
swap2() method 
*letter5=A, &letter5=0xffbffa0c, letter5=0xffbffa37 
*letter6=Z, &letter6=0xffbffa10, letter6=0xffbffa36  
temp=Z, &temp=0xffbff9b7 
main() method - after swap2():
letter1=A
letter2=Z

*/

