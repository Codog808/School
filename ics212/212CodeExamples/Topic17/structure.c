/*
  Example of defining, initializing, and accessing members for structures
*/

#include<stdio.h>
#include<string.h>//needed for Linux compiler
#define MAX 20

//structure definition
struct student{ 
  char *first;    
  char last[MAX];  
  int age;  
  double gpa;
};

int main(){
  //Initialize Structure with Initializer List
  struct student s2 = {"Fred","Tanaka", 22, 2.22};

  //declare a structure
  struct student s3;   
  
  //Initialize Structure with Dot Operator
  s3.first = "Sally";
  strncpy(s3.last, "Suzuki", MAX); 
  s3.age = 33;     
  s3.gpa = 3.33;
  
  //output a structure
  printf("Name is: %s %s\nAge is: %d\nGPA is: %f\n\n",
	 s2.first, 
	 s2.last, 
	 s2.age, 
	 s2.gpa);
  
  //declare and initialize a pointer to a structure   
  struct student *ptr = &s3;
  
  //output a structure using pointers
  printf("Name is: %s %s\nAge is: %d\nGPA is: %f\n\n",
         ptr->first, 
	 (*ptr).last, 
	 ptr->age, 
	 (*ptr).gpa);

  return 0;
}

/*
Name is: Fred Tanaka
Age is: 22
GPA is: 2.220000

Name is: Sally Suzuki
Age is: 33
GPA is: 3.330000

*/

