#include <iostream>
using namespace std;
class Fraction{
private:
int num, den;    
public:      
//constructor         
Fraction(int n) {       
  num = n; den = 1;      
  cout<<"Constructor ("<<num<<"/"<<den<<")"<<endl;   
}  
//destructor
~Fraction() {       
  cout<<"Destructor ("<<num<<"/"<<den<<")"<<endl;      
}   
};

Fraction f1(10);   

int main(){      
  Fraction f2(20);      
  {
    Fraction f3(30);         
    static Fraction f4(40);         
    {            
      Fraction f5(50);         
    }
  } 
  return 0;
} 

/*
Constructor (10/1)
Constructor (20/1)
Constructor (30/1)
Constructor (40/1)
Constructor (50/1)
Destructor (50/1)
Destructor (30/1)
Destructor (20/1)
Destructor (40/1)
Destructor (10/1)
 */
