/*
  Example of static binding: 
  using non-virtual functions to bind pointers during compile time.
  And dynamic binding:
  using virtual functions in base class to bind pointers during runtime.

  And an example of polymorphism.
*/
#include <iostream>
/*number of UH community colleges*/
#define SEVEN 7
using namespace std;

//base class
class CommunityCollege {
public:    
  /*
    Returns the name of the class.
    Delete the keyword "virtual" 
    and see how it changes the output of the program.
  */	
  virtual const char * name(){
    //const char * name(){
    return "Community College";
  }
};

//derived class
class HawaiiCC: public CommunityCollege {
public:							
  const char * name(){
    return "Hawai'i Community College";
  }       
}; 

//derived class
class HonoluluCC: public CommunityCollege {
public:							
  const char * name(){
    return "Honolulu Community College";
  }       
};  

//derived class
class KapiolaniCC: public CommunityCollege {
public:							
  const char * name(){
    return "Kapi'olani Community College";
  }       
};  

//derived class
class KauaiCC: public CommunityCollege {
public:							
  const char * name(){
    return "Kaua'i Community College";
  }       
};

//derived class   
class LeewardCC: public CommunityCollege {
public:							
  const char * name(){
    return "Leeward Community College";
  }       
};

//derived class     
class MauiCollege: public CommunityCollege {
public:
  const char * name(){
    return "Maui College";
  }
};


//derived class
class WindwardCC: public CommunityCollege {
public:							
  const char * name(){
    return "Windward Community College";
  }       
};

//driver for our classes
int main(){
  //array of pointers to community colleges
  CommunityCollege *colleges[SEVEN];
  
  //initize array elements
  colleges[0] = new HawaiiCC();
  colleges[1] = new HonoluluCC();
  colleges[2] = new KapiolaniCC();
  colleges[3] = new KauaiCC();   
  colleges[4] = new LeewardCC();
  colleges[5] = new MauiCollege();
  colleges[6] = new WindwardCC();
  
  //Display all colleges with a loop
  cout<<"Display all colleges with a loop:"<<endl;
  for(int i=0;i<SEVEN;i++){
    cout<<colleges[i]->name()<<endl;
  }
  
  /*
    Non-pointer example
    Without pointers, only have static binding
  */
  cout<<endl<<"Non-pointer example:"<<endl;
  CommunityCollege college;	
  cout<<college.name()<<endl;
  KapiolaniCC kapcc;
  cout<<kapcc.name()<<endl;
  //assign derived class to base class object
  college = kapcc;
  cout<<college.name()<<endl;
  
  return 0;
}

/*
Display all colleges with a loop:
Hawai'i Community College
Honolulu Community College
Kapi'olani Community College
Kaua'i Community College
Leeward Community College
Maui College
Windward Community College

Non-pointer example:
Community College
Leeward Community College
Community College

*/

