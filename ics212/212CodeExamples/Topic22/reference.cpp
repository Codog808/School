/*
  Examples of pointers, reference variables, 
  and using reference variables for call-by-reference functions
*/
#include <iostream>
using namespace std;

//function prototype 
void square(int &);

int main(){
  int number1 = 100;
  /*
    Put "&" in front of reference variable when declaring it.
    A reference has the same address as the original variable itself, 
    so a reference is another name for the same variable.
  */
  int &reference1 = number1; 
  int number2 = 50;
  
  /*Example of reference variables*/
  number1++;
  cout<<"number1="<<number1<<", reference1="<<reference1<<endl; 
  reference1++;
  cout<<"number1="<<number1<<", reference1="<<reference1<<endl<<endl;
  
  /*Example of using reference variables for call-by-reference functions*/
  cout<<"number2="<<number2<<endl;     
  square(number2);        
  cout<<"number2="<<number2<<endl<<endl;     

  /*display addresses of variables*/
  cout<<"&number2   ="<<&number2<<endl;
  cout<<"&reference1="<<&reference1<<endl;
  cout<<"&number1   ="<<&number1<<endl;
  
  return 0;
}

/*
  Uses reference variables for call-by-reference function.
  The parameter is changed to the square of the number.
*/
void square(int &reference2){
  reference2 = reference2 * reference2;

  /*display addresses of variable (parameter)*/
  cout<<"&reference2="<<&reference2<<endl;
}

/*
number1=101, reference1=101
number1=102, reference1=102

number2=50
&reference2=0xffbffa24
number2=2500

&number2   =0xffbffa24
&reference1=0xffbffa2c
&number1   =0xffbffa2c

*/




