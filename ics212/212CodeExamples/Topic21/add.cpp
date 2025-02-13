/* 
Asks the user to enter two doubles, 
then adds the numbers and displays the sum
*/

//input & output stream header file - library of functions for I/O
#include <iostream>  
/*
C++ standard library namespace
If we don't use this code at the top of our program, 
we have to write "std::" in front of each standard library reserve word 
(std::cout instead of cout)
In multiple-file programs, namespace is used to avoid naming conflicts  
*/
using namespace std; 

int main(){
   //enter 1st double
   double number1 = 0;
   //cout<< is used for output
   cout<<"Enter a double: ";
   //cin >> is used for input  
   cin>>number1;           
              
   //enter 2nd double           
   double number2 = 0;            
   cout<<"Enter another double: ";
   cin>>number2; 
   
   //add and display
   double sum = number1 + number2;
   /*
     "endl" has the letter 'L' at the end
     NOT the number one ('1')
   */
   cout << number1 << " + " << number2 << " = " << sum << endl; 

   return 0;   
}

/*
Enter a double: 12.34
Enter another double: 56.78
12.34 + 56.78 = 69.12


BE SURE TO USE THE g++ compiler (NOT the gcc compiler)!!
Otherwise, you will get an error similar to this:

Undefined                       first referenced
 symbol                             in file
std::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned int) const/var/tmp//ccVdKB8v.o
std::cout                           /var/tmp//ccVdKB8v.o
std::ios_base::Init::~Init()        /var/tmp//ccVdKB8v.o
std::ios_base::Init::Init()         /var/tmp//ccVdKB8v.o
__gxx_personality_v0                /var/tmp//ccVdKB8v.o
std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)/var/tmp//ccVdKB8v.o
std::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const/var/tmp//ccVdKB8v.o
ld: fatal: Symbol referencing errors. No output written to a.out
collect2: ld returned 1 exit status
walbritt@uhx01:/home/27/walbritt/public_html/ics212/examples++> gcc add.cpp                                                          14:23:57
Undefined                       first referenced
 symbol                             in file
std::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[](unsigned int) const/var/tmp//ccTmgB36.o
std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))/var/tmp//ccTmgB36.o
std::basic_ostream<char, std::char_traits<char> >::operator<<(double)/var/tmp//ccTmgB36.o
std::basic_istream<char, std::char_traits<char> >::operator>>(double&)/var/tmp//ccTmgB36.o
std::cout                           /var/tmp//ccTmgB36.o
std::ios_base::Init::~Init()        /var/tmp//ccTmgB36.o
std::ios_base::Init::Init()         /var/tmp//ccTmgB36.o
__gxx_personality_v0                /var/tmp//ccTmgB36.o
std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)/var/tmp//ccTmgB36.o
std::basic_string<char, std::char_traits<char>, std::allocator<char> >::size() const/var/tmp//ccTmgB36.o
std::cin                            /var/tmp//ccTmgB36.o
std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)/var/tmp//ccTmgB36.o
ld: fatal: Symbol referencing errors. No output written to a.out
collect2: ld returned 1 exit status

*/

