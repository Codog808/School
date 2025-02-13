//Assignment #24 starter code
//by Lisa Miller, from William Albritton
//ICS 212

#include <iostream>
#include <cmath>

using namespace std;
/***** CHANGE WHEN ADDING CLASSES **/
#define SIZE 1
#define PI 3.14

//Abstract base class
class Shape {
public:
  virtual void printSize() const = 0;
  virtual const char* name() const = 0;
  virtual void inputData() = 0;
  virtual double area() const = 0;
  virtual double volume() const{
    return 0.0;
  }     
};


//derived class Circle, subclass of Shape
class Circle : public Shape {
public:
  //syntax "datatype variable = value"  will give a default value for the variable
  // this constructor will be called with no arguments or one argument
  // for example: shapeArray[0] = new Circle(); 
  // for example:  Circle c = new  Circle(10);
  Circle(double r = 0.0){
    if(r<0) r=-r;
    radius = r;
  }
  const char* name()const{
    return "Circle";
  }
  void printSize() const{
    cout<<"The "<<name()<<"'s area = "<<area()<<endl;
  } 
  void inputData(){
    cout<<"Enter the "<<name()<<"'s radius: ";
    cin>>radius;
  }
  double area() const{
    return PI*radius*radius;
  }        
protected:          
  double radius;           
};


/*

Add the remaining classes here.

*/



int displayMenu(Shape *s[]);

int main(){
   
  Shape *shapeArray[SIZE];
  shapeArray[0] = new Circle();
  /*
  shapeArray[1] = new Sphere();
  shapeArray[2] = new Cylinder();
  shapeArray[3] = new Square();
  shapeArray[4] = new Cube();
  shapeArray[5] = new Triangle();
  shapeArray[6] = new Tetrahedron();
  */
  int choice = displayMenu(shapeArray);
  while(choice>=0 && choice<=6){
    shapeArray[choice]->inputData();
    shapeArray[choice]->printSize();
    cout<<endl;
    choice = displayMenu(shapeArray);
  }  
  return 0;
}

//displays menu of choices from array of Shapes
int displayMenu(Shape *s[]){
  int choice = 0;
  cout<<"Select an object from the menu (enter 7 to quit)."<<endl;
  for(int i=0;i<SIZE;i++){
    cout<<'\t'<<i<<". "<<s[i]->name()<<endl;
  }
  cin>>choice;
  return choice;
}

/*
Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
0
Enter the Circle's radius: 10
The Circle's area = 314

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
1
Enter the Sphere's radius: 20
The Sphere's surface area = 5024
The Sphere's volume = 33493.3

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
2
Enter the Cylinder's radius: 30
Enter the Cylinder's height: 40
The Cylinder's surface area = 13188
The Cylinder's volume = 113040

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
3
Enter the Square's side: 50
The Square's area = 2500

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
4
Enter the Cube's side: 60
The Cube's surface area = 21600
The Cube's volume = 216000

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
5
Enter the Triangle's side: 70
The Triangle's area = 2121.76

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
6
Enter the Tetrahedron's side: 80
The Tetrahedron's surface area = 11085.1
The Tetrahedron's volume = 60339.8

Select an object from the menu (enter 7 to quit).
        0. Circle
        1. Sphere
        2. Cylinder
        3. Square
        4. Cube
        5. Triangle
        6. Tetrahedron
7
*/







