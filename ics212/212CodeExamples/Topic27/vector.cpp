/*
  Examples of class vector, iterators, and algorithms
*/

#include <iostream>
#include <vector>  //to get the vector class (a vector is a type of array)
#include <algorithm>  //to use the sort() function
#include <stdexcept>  //use for exceptions

using namespace std;

int main(){
  //instantiate a vector of integers
  vector<int> vector1;
  cout<<"vector1.size() = "<< vector1.size()<<endl; //vector1.size() = 0
  cout<<"vector1.empty()= "<<boolalpha<<vector1.empty()<<endl; //vector1.empty()= true
  //push_back() will add an element to the end of the vector and increase the size of the vector    
  vector1.push_back(10);  
  vector1.push_back(20);      
  vector1.push_back(30);
  cout<<"vector1.size() = "<< vector1.size()<<endl; //vector1.size() = 3
  for(int i = 0; i<vector1.size(); i++ ){
    cout<<vector1[i]<<' '; 
    cout<<vector1.at(i)<<' ';
    //10 10 20 20 30 30
  }
  //you can use array subscripts with vectors, but it will not increase the size of the vector   
  vector1[0]=40;
  vector1[3]=50;
  vector1[4]=60;  
  cout<<endl<<"vector1.size() = "<< vector1.size()<<endl; //vector1.size() = 3
  for(int i = 0; i<vector1.size(); i++ ){
    cout<<vector1.at(i)<< ' '; //40 20 30 
  }

  const int SIZE = 5;   
  char ch[SIZE] = {'z','y','x','w','v'};
  // initialize a vector of characters   
  vector<char> vector2(ch, ch+SIZE);
  cout<<"\nVector vector2 = ";
  for(int i = 0; i<vector2.size(); i++ ){
    cout<<vector2[i]<< ' '; //Vector vector2 = z y x w v 
  }
  vector2[0] = 'F'; //set first element to 'F'
  vector2.insert(vector2.begin()+2,'G');//insert 3nd element, add 1 to the size
  vector2.erase(vector2.end()-1); //delete last element, subtract 1 from the size
  cout << "\nVector vector2 = ";
  for(int i = 0; i<vector2.size(); i++ ){
    cout<<vector2.at(i)<< ' '; //Vector vector2 = F y G x w 
  }
  
  //sort the vector
  sort(vector2.begin(), vector2.end());
  cout << "\nVector vector2 = ";
  for(int i = 0; i<vector2.size(); i++ ){
    cout<<vector2.at(i)<< ' '; //Vector vector2 = F G w x y
  }
  
  cout<<"\nvector2.empty()="<<boolalpha<<vector2.empty(); //vector2.empty()=false
  vector2.clear(); //delete all of the elements in the vector
  cout<<"\nvector2.empty()="<<vector2.empty()<<endl; //vector2.empty()=true
  
  //loop using a constant iterator
  vector<int>::const_iterator vi;
  for(vi = vector1.begin(); vi != vector1.end(); vi++ ){
    cout<<*vi<< ' '; //40 20 30
  }
  cout<<endl;
  
  //loop using an iterator
  vector<int>::iterator vi2;
  for(vi2 = vector1.begin(); vi2 != vector1.end(); vi2++ ){
    cout<<++(*vi2)<< ' '; //41 21 31 
  }
  cout<<endl;


  vector<int> vector3;
  vector3.push_back(11);
  vector3.push_back(22);
  vector3.push_back(33);
  //can assign values with at()
  vector3.at(1) = 44;

  //at() throws an exception if out of range
  try{
  cout<<vector3.at(5)<<endl;
  }
  catch (const std::out_of_range& exception) {
    cout<<"Out of Range error: "<<exception.what()<<endl;
  }
  //array subscript [] returns 0 (zero) if out of range
  cout<<"vector3[5] = "<<vector3[5]<<endl;
  for(int i=0;i<vector3.size();i++){
    cout<<vector3[i]<<endl;
  }
  
  return 0;
}


/*
vector1.size() = 0
vector1.empty()= true
vector1.size() = 3
10 10 20 20 30 30 
vector1.size() = 3
40 20 30 
Vector vector2 = z y x w v 
Vector vector2 = F y G x w 
Vector vector2 = F G w x y 
vector2.empty()=false
vector2.empty()=true
40 20 30 
41 21 31 
Out of Range error: vector::_M_range_check
vector3[5] = 0
11
44
33
*/
