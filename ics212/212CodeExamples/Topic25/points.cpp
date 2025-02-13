/*
  Examples of classes, inheritance, overloading, overriding,   
  static binding, and dynamic binding
  with classes Point2D and Point3D.

  Not an example of polymorphism.
*/

#include <iostream>
#include <cmath>

using namespace std;

/*
  Base class Point2D represents a point in two dimensional space
*/
class Point2D {
  
public:
  
  /*
    Static data members have to be initialized when declared.
    Static data memebers are usually declared const (constant), 
    because the values should not be changed (Principle of Least Privilege)
  */
  static constexpr double ZERO = 0.0;
  
  /*
    Overloaded constructor with zero parameters
  */
  Point2D(){
    //initialize the data members
    x = ZERO;
    y = ZERO;
    //cout<<*this<<endl;
  }
  
  /*
    Overloaded constructor with two parameters
  */
  Point2D(double x2, double y2){
    //initialize the data members
    x = x2;
    y = y2;
    //cout<<*this<<endl;
  }
   
  //set (mutator) functions
  void setX(double x2){
    x = x2;
  }

  void setY(double y2){
    y = y2;
  }

  //get (accessor) functions   
  double getX(){
    return x;

  }

  double getY(){
    return y;
  }

  /*
    Returns the distance from point (0,0).
    Can be the magnitude of a vector or length of a line.
  */
  double distance(){
    return sqrt(x*x + y*y);
  }

  //friend function for overloading output operator<<()
  friend ostream & operator<<(ostream & output, const Point2D & point){
    output<<"("<<point.x<<", "<<point.y<<")";
    return output;
  }                    

  //data members represent two points in space
protected:
  double x; 
  double y;      
};

/*
  Derived class Point3D represents a point in three dimensional space
*/
class Point3D:public Point2D {
  
public:
  /*
    Overloaded constructor with zero parameters
  */
  Point3D():Point2D(){
    //initialize data member
    z = ZERO;
    //cout<<*this<<endl;
  }
  
  /*
    Overloaded constructor with three parameters
  */
  Point3D(double x2, double y2, double z2):Point2D(x2,y2){
    //initialize data member
    z = z2;
    //cout<<*this<<endl;
  } 
  
  //set (mutator) functions
  void setZ(double z2){
    z = z2;
  }

  //get (accessor) functions       
  double getZ(){
    return z;
  }

  //overridden function, returns the distance from point (0,0,0)
  double distance(){
    return sqrt(x*x + y*y + z*z);
  }

  //friend function for overloading output operator<<()
  friend ostream & operator<<(ostream & output, const Point3D & point){
    output<<"("<<point.x<<", "<<point.y<<", "<<point.z<<")";
    return output;
  }          

  /*
    Data members represent three points in space.
    Points x and y are inherited from Point2D.
  */
protected:
  double z;                   
};

//driver function to test classes
int main(){
  Point3D point(3, 4, 5);
  cout<<"point = "<<point<<endl;
  //function distance() returns 7.07107
  cout<<point.distance()<<endl;
  
  //pointer2D points to point
  Point2D *pointer2D = &point; 
  cout<<"*pointer2D = "<<*pointer2D<<endl;
  //function distance() incorrectly returns 5.0
  cout<<pointer2D->distance()<<endl;
  
  //pointer3D points to point
  Point3D *pointer3D = &point; 
  cout<<"*pointer3D = "<<*pointer3D<<endl;
  //function distance() returns 7.07107
  cout<<pointer3D->distance()<<endl;
   
  return 0;
}

/*
point = (3, 4, 5)
7.07107
*pointer2D = (3, 4)
5
*pointer3D = (3, 4, 5)
7.07107

*/



