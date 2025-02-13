/*formatting examples*/

#include<iostream> 
#include<iomanip>  //library for formatting

using namespace std;

int main(){
  
  float originalFormat = cout.flags();
  int number = 12345;

  cout<<setw(10)<<number<<setw(10)<<number<<endl;   //     12345     12345
  
  cout<<setiosflags(ios::left);
  cout<<setw(10)<<number<<setw(10)<<number<<endl;   //12345     12345
  
  cout<<setiosflags(ios::internal|ios::showpos);
  cout<<setw(10)<<number<<endl;                     //+    12345
  
  cout<<setfill('$')<<setw(10)<<number<<endl;	    //+$$$$12345
  cout<<setfill('*')<<setw(10)<<number<<endl;       //+****12345
  
  cout<<resetiosflags(ios::showpos);
  cout<<setfill(' ')<<setw(10)<<number<<endl;       //     12345
  
  //to display the '0x' in front of hexadecimal numbers 
  cout<<setiosflags(ios::showbase);
  cout<<hex<<number<<endl;		            //0x3039
  
  cout<<setiosflags(ios::scientific|ios::uppercase);
  cout<<123.456<<endl;		                    //1.234560E+002
  
  return 0;
}

/*
     12345     12345
     12345     12345
12345     12345     
    +12345
$$$$+12345
****+12345
     12345
0x3039
1.234560E+02
 */






