/*
  Examples of Conversion Specifiers for Output Statements
*/
#include <stdio.h>
int main(void){

    /*We have to declare variables at the beginning of each function*/
    char number1 = 'A';
    short number2 = 66;
    int number3 = 0x43;
    float number4 = 0.125;
    double number5 = 12345.6789;

    printf("%hi\n", number3);

    /*output the variables in different formats*/
    
    printf("\nASCII (%%c), decimal(%%i), hexadecimal(%%#x) formats for number1:\n");
    printf("number1 = '%c', %i, %#x \n", number1, number1, number1);

    printf("\nASCII (%%c), decimal(%%i), hexadecimal(%%#x) formats for number2:\n");
    printf("number2 = '%c', %i, %#x \n", number2, number2, number2);

    printf("\nASCII (%%c), decimal(%%i), hexadecimal(%%#x) formats for number3:\n");
    printf("number3 = '%c', %i, %#x \n", number3, number3, number3);

    printf("\nfloat format in fixed-point(%%f), non-fixed point(%%g), and exponential notation(%%e) for number4:\n");
    printf("number4 = %f, %g, %e \n", number4, number4, number4);

    printf("\nfloat format in fixed-point(%%f), non-fixed point(%%g), and exponential notation(%%e) for number5:\n");
    printf("number5 = %f, %g, %e \n", number5, number5, number5);

    /*show output for negative numbers*/
    number3 = -1;
    printf("\n signed(%%i), unsigned(%%u), hexidecimal(%%#x)  integers for -1:\n");
    printf("number3 = %i, %u, %#x \n\n", number3, number3, number3);

    return 0;
}

/*

ASCII, decimal, hexadecimal, & ASCII formats for number1:
number1 = 'A', 65, 0x41 

ASCII, decimal, hexadecimal, & ASCII formats for number2:
number2 = 'B', 66, 0x42 

ASCII, decimal, hexadecimal, & ASCII formats for number3:
number3 = 'C', 67, 0x43 

float format in fixed-point and exponential notation for number4:
number4 = 0.125000, 1.250000e-01 

float format in fixed-point and exponential notation for number5:
number5 = 12345.678900, 1.234568e+04 

unsigned vs. singed decimals for -1:
number3 = -1, 4294967295, 0xffffffff 

*/
