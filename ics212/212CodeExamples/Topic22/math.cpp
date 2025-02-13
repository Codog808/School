/*
  Example of other member functions: add(), subtract(), multiply(), divide()
*/
#include <iostream>
//has the abs() function - returns the absolute value
#include <cmath> 
using namespace std;

//Fraction class definition (abstract data type (ADT))
class Fraction{ 
  
  /*
    functions and variables in the public section 
    are accessible anywhere in the class definition
  */
public:
  /*
    Static data members have to be initialized when declared.
    Static data memebers are usually declared const (constant), 
    because the values should not be changed (Principle of Least Privilege)
  */
  static const int ZERO = 0; 
  static const int ONE = 1;
  
  //Constructor initializes each data member
  Fraction(){      
    //reusing the set function 
    set(ZERO, ONE); 
				  cout<<"No Param Constructor ("<<numerator<<"/"<<denominator<<")"<<endl;
  }
  
  //Constructor initializes only the numerator
  Fraction(int num){       
    //reusing the set function 
    set(num, ONE);  
				  cout<<"One Param Constructor ("<<numerator<<"/"<<denominator<<")"<<endl;
  }
  
  //Constructor initializes the numerator & denominator
  Fraction(int num, int den){       
    //reusing the set function 
    set(num, den); 
				  cout<<"Two Param Constructor ("<<numerator<<"/"<<denominator<<")"<<endl;
  }   
  
  //copy constructor - makes a copy of a fraction
  Fraction(const Fraction &fraction){         
    set(fraction.numerator, fraction.denominator);
		  cout<<"Copy Constructor ("<<numerator<<"/"<<denominator<<")"<<endl;
  }  

  //destructor
 ~Fraction() {
  cout<<"Destructor ("<<numerator<<"/"<<denominator<<")"<<endl;
}
  
  //mutator function - set Fraction values and error checking    
  void set(int num, int den){      
    //prevent division by zero                                                                                
    if(ZERO == den){ 
      den = ONE;
    }
    //change the values of numerator & denominator
    numerator = num; 
    denominator = den;
    /*
      if denominator is negative, 
      set it to positive and set numerator to negative
    */
    if(denominator < ZERO) {
      denominator = -denominator; 
      numerator = -numerator;
    }
    //reduce Fraction to lowest terms
    reduce();
  }
  
  //mutator function to set the numerator only
  void setNumerator(int num){
    numerator = num;
  }
  
  //mutator function to set the denominator only
  void setDenominator(int den){
    //re-use code!
    set(numerator, den);
  }
  
  //accessor function to get the numerator    
  int getNumerator() const{
    /*
      const function (Principle of Least Privilege), 
      so cannot change data members by mistake
    */
    //numerator = ZERO;
    return numerator;
  }
  
  //accessor function to get the denominator
  int getDenominator() const{
    return denominator;
  }               

  //more member functions
  Fraction add(const Fraction &fraction){
    /*
      Cannot change parameter fraction, because it is constant
      Otherwise will get compiler message:
      math.cpp: In member function `Fraction Fraction::add(const Fraction&)':
      math.cpp:98: error: assignment of data-member `Fraction::denominator' in read-only structure
    */
    //fraction.denominator = 100;
    int numerator3 = numerator * fraction.denominator + denominator * fraction.numerator;
    int denominator3 = denominator * fraction.denominator;
    Fraction fraction3(numerator3, denominator3);
    fraction3.reduce();
    return fraction3;
  }
  
  Fraction subtract(const Fraction &fraction){
    int numerator3 = numerator * fraction.denominator - denominator * fraction.numerator;
    int denominator3 = denominator * fraction.denominator;
    Fraction fraction3(numerator3, denominator3);
    fraction3.reduce();
    return fraction3;
  }

  Fraction multiply(const Fraction &fraction){
    int numerator3 = numerator * fraction.numerator;
    int denominator3 = denominator * fraction.denominator;
    Fraction fraction3(numerator3, denominator3);
    fraction3.reduce();
    return fraction3;
  }

  Fraction divide(const Fraction &fraction){
    int numerator3 = numerator * fraction.denominator;
    int denominator3 = denominator * fraction.numerator;
    Fraction fraction3(numerator3, denominator3);
    fraction3.reduce();
    return fraction3;
  }

  
  /*
    display the data members (numerator and denominator) of a Fraction   
    const is used because these values should not be changed by a display function
  */
  void print() const{      
    cout << numerator << "/" << denominator;   
    /*
      const function (Principle of Least Privilege), 
      so cannot change data members by mistake
    */
    //denominator = ONE;
  }
  /*
    Variables and functions in the private section
    are accessible only to member functions.
    This is an example of data hiding and Principle of Least Privilege.
  */
private:      
  //data members (which can only be initialized in the constructor)
  int numerator;          
  int denominator;    
  
  /*
    Finds GCD (greatest common divisor) using Euclid's algorithm
    And reduces Fraction to lowest terms 
  */
  void reduce(){      
    int a = numerator;      
    int b = denominator;      
    while (b != ZERO){         
      int temp = a % b;         
      a = b;         
      b = temp;      
    }      
    /*
      a is the greatest common divisor
      the abs() function - returns the absolute value
    */
    numerator = numerator / abs(a);      
    denominator = denominator / abs(a);   
  }
  
};//DON'T FORGET: end of class definition has a semicolon!

// Driver program to test class Fraction
int main(){

  //test add:
  Fraction f, f1(1,2), f2(1,2);
  f = f1.add(f2);
  cout<<"1/2 + 1/2 = ";
  f.print();
  cout<<endl<<endl;

  //test subtract:
  Fraction f3(1,6), f4(1,2);
  f = f3.subtract(f4);
  cout<<"1/6 - 1/2 = ";
  f.print();
  cout<<endl<<endl;

  //test multiply:
  Fraction f5(12,2), f6(2,6);
  f = f5.multiply(f6);
  cout<<"12/2 * 2/6 = ";
  f.print();
  cout<<endl<<endl;

  //test divide:
  Fraction f7(12,2), f8(2,6);
  f = f7.divide(f8);
  cout<<"12/2 / 2/6 = ";
  f.print();
  cout<<endl<<endl;
  
  return 0;
}

/*
1/2 + 1/2 = 1/1

1/6 - 1/2 = -1/3

12/2 * 2/6 = 2/1

12/2 / 2/6 = 18/1

*/


