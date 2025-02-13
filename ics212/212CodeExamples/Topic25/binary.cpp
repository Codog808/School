/*
  An example of polymorphism.
  Uses nodes of different classes to create a binary expression tree 
  to evaluate an arithmetic expression.
  Class hierarchy:
  Class Node has derived classes BinaryOperator & Data
  Class BinaryOperator has derived classes Plus & Times
  All classes have virtual function evaluate() 
*/

#include <iostream>
using namespace std;

//Base class
class Node {
public:
  /*
    Constructor with output statement 
    to show when this constructor is called
  */
  Node(){
    cout<<"Node constructor"<<endl;
  }
  //virtual function to do math operations for each node  
  virtual int evaluate() const{
    cout<<"Node's evaluate()"<<endl;
    return 0;
  }         
};

//Derived class - for doing math operators
class BinaryOperator: public Node {
public:
  //constructor with output statement	
  BinaryOperator(Node *left2, Node *right2){
    cout<<"BinaryOperator constructor"<<endl;
    left = left2;
    right = right2;
  }   
  
protected:
  //pointers to the left and right nodes
  Node *left;
  Node *right;    
};

//derived class - to add two integers
class Plus: public BinaryOperator {
public:									
  //constructor
  Plus(Node *left2, Node *right2): BinaryOperator(left2,right2){
    cout<<"Plus constructor"<<endl;
  }
  
  //adds the values of the left and right nodes
  virtual int evaluate() const{
    cout<<"Plus's evaluate()"<<endl;
    return left->evaluate() + right->evaluate();
  }         
};

//derived class - to multiply two integers
class Times: public BinaryOperator {
public:	
  //constructor								
  Times(Node *left2, Node *right2): BinaryOperator(left2,right2){
    cout<<"Times constructor"<<endl;
  }
  
  //multiply the values of the left and right nodes
  virtual int evaluate() const{
    cout<<"Times's evaluate()"<<endl;
    return left->evaluate() * right->evaluate();}         
};

//derived class - a node to store data
class Data: public Node {
public:									
  //constructor
  Data(int value2): Node(){
    cout<<"Data constructor for value = "<<value2<<endl;
    value = value2;
  }
  
  //returns the integer stored in the node     
  virtual int evaluate() const{
    cout<<"Data's evaluate() for value = "<<value<<endl;
    return value;
  }  
  
protected:
  //the integer data being stored in this node
  int value;          
};

//driver for the classes
int main(){
  cout<<endl<<"Constructors:"<<endl;
  //make two data nodes
  Node *one = new Data(5);
  Node *two = new Data(4);
  
  //put them in a multiply node 
  Node *three = new Times(one, two);
  
  //make another data node
  Node *four = new Data(3);
  
  //add the result of Node three to this data node
  Node *five = new Plus(three, four);
  
  //evaluate the binary expression tree
  cout<<endl<<"evaluate():"<<endl;
  int result = five->evaluate();
  cout<<endl<<"result:"<<endl;
  cout<<"5 * 4 + 3 = "<<result<<endl;
  
  return 0;
}

/*
Constructors:
Node constructor
Data constructor for value = 5
Node constructor
Data constructor for value = 4
Node constructor
BinaryOperator constructor
Times constructor
Node constructor
Data constructor for value = 3
Node constructor
BinaryOperator constructor
Plus constructor

evaluate():
Plus's evaluate()
Times's evaluate()
Data's evaluate() for value = 5
Data's evaluate() for value = 4
Data's evaluate() for value = 3

result:
5 * 4 + 3 = 23

*/
