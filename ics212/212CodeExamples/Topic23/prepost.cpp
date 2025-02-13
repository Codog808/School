/*
  Example of Overloading Pre & Post Increment operators, operator++(), and operator++(int)
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
  }
  
  /*            
    Constructor initializes only the numerator. 
    Also called a "conversion constructor",  
    as an int can be automatically converted into a Fraction 
    by the compiler using this constructor.  
  */
  Fraction(int num){       
    //reusing the set function 
    set(num, ONE);  
  }
  
  //Constructor initializes the numerator & denominator
  Fraction(int num, int den){       
    //reusing the set function 
    set(num, den); 
  }   
  
  //copy constructor - makes a copy of a fraction
  Fraction(const Fraction &fraction){         
    set(fraction.numerator, fraction.denominator);
  }  

  //assignment operator
  const Fraction &operator=(const Fraction &fraction){
    set(fraction.numerator, fraction.denominator);
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

  //overloaded preincrement operator
  Fraction &operator++(){
    numerator = numerator + denominator;
    return *this;
  }  

  //overloaded postincrement operator
  Fraction operator++(int){
    Fraction temp = *this;         
    numerator = numerator + denominator;
    return temp;
  }  


  //overloaded unary minus operator (-), operator-()
  //as a class member function:
  
  Fraction operator-()const{
    Fraction temp(-numerator, denominator);
    return temp;
  }
  
  //as a global friend function   
  /*
  friend Fraction operator-(const Fraction &fraction1){
    Fraction temp(-fraction1.numerator, fraction1.denominator);
    return temp;
  }
  */


  //overloaded plus (+) operator as class member function
  Fraction operator+(const Fraction &fraction){
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
    Function Definition for operator>> for input with cin>>
  */
  friend istream &operator>>(istream &input, Fraction &fraction){
    char slash = 's';
    input>>fraction.numerator>>slash>>fraction.denominator;
    return input;
  }

  /*
    Function Definition for operator<< for output with cout<<
   */
  friend ostream &operator<<(ostream &output, const Fraction & fraction){
    output<<fraction.numerator<<'/'<<fraction.denominator;
    return output;
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

  Fraction a,b,c;
  cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl<<endl;
  b = ++a; //preincrement
  cout<<"b = ++a;"<<endl;
  cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl<<endl;
  c = a++; //postincrement
  cout<<"c = a++;"<<endl;
  cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;

  return 0;

}

/*
a=0/1 b=0/1 c=0/1

b = ++a;
a=1/1 b=1/1 c=0/1

c = a++;
a=2/1 b=1/1 c=1/1


 */
