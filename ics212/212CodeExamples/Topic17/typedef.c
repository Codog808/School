/*
  Examples of using typedef
*/

#include <stdio.h>
#include <string.h>
#define MAX 20

//typedef - creates a new data type name
typedef int Integer;
typedef int* IntegerPointer;

//structure definition
struct student{ 
  char *first;    
  char last[MAX];  
  int age;  
  double gpa;
};
typedef struct student Student;

void printStudent(Student);

int main(){
  Integer number = 10;
  IntegerPointer pointer = &number;
  number++;
  printf("number = %d\n",number); 
  printf("pointer = %d\n",*pointer); 
  
  Student s2 = {"Fred","Tanaka", 22, 2.22};
  printStudent(s2);
  
  Student s3;
  s3.first = "Sally";
  strncpy(s3.last, "Suzuki", MAX); 
  s3.age = 33;     
  s3.gpa = 3.33;
  printStudent(s3);
  
  return 0;
}

void printStudent(const Student daStudent){
  printf("Name is: %s %s\nAge is: %d\nGPA is: %f\n\n",
         daStudent.first, 
         daStudent.last, 
         daStudent.age, 
         daStudent.gpa);
}


/*
number = 11
pointer = 11
Name is: Fred Tanaka
Age is: 22
GPA is: 2.220000

Name is: Sally Suzuki
Age is: 33
GPA is: 3.330000

*/

