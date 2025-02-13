/*
  Examples of structures and functions
*/

#include<stdio.h>
#define MAX 20

//structure definition
struct student{ 
  char *first; 
  char last[MAX]; 
  int age;       
  double gpa;    
}; 

void printStudent(const struct student);
void birthday1(struct student);
void birthday2(struct student *);
void birthday3(int);
void birthday4(int *);

int main(){
  //initialize structure 
  struct student student1 = {"Surfer","Dude", 11, 1.11};

  //pass by value - no changes outside function
  printStudent(student1);
  birthday1(student1);
  printStudent(student1);   

  //pass by reference - changes outside function
  birthday2(&student1);
  printStudent(student1);   

  //pass by value a member of a structure to a function
  birthday3(student1.age);
  printStudent(student1);

  //pass by reference a member of a structure to a function   
  birthday4(&student1.age);
  printStudent(student1);

  return 0;
}

/*
  output student structure
  daStudent: the student struct to output
 */
void printStudent(const struct student daStudent){
  printf("Name is: %s %s\nAge is: %d\nGPA is: %f\n\n",
         daStudent.first, 
         daStudent.last, 
         daStudent.age, 
         daStudent.gpa);
}

/*
  add one to age with pass by value
  daStudent: the student struct
*/
   void birthday1(struct student daStudent){
      daStudent.age++;
      printStudent(daStudent);
   }

/*
  add one to age with pass by reference 
  daStudent: the student struct      
*/
void birthday2(struct student *daStudent){
  //daStudent is a pointer, so use arrow operator
  daStudent->age++;
  //daStudent is a pointer, so have to dereference it
  printStudent(*daStudent);
}

/*
  add one to age with pass by value               
  age: an integer  
*/
void birthday3(int age){
  age++;
}

/*
  add one to age with pass by reference 
  age: an integer  
*/
void birthday4(int *age){
  (*age)++;
}


/*
Name is: Sufer Dude
Age is: 11
GPA is: 1.110000

Name is: Sufer Dude
Age is: 12
GPA is: 1.110000

Name is: Sufer Dude
Age is: 11
GPA is: 1.110000

Name is: Sufer Dude
Age is: 12
GPA is: 1.110000

Name is: Sufer Dude
Age is: 12
GPA is: 1.110000

Name is: Sufer Dude
Age is: 12
GPA is: 1.110000

Name is: Sufer Dude
Age is: 13
GPA is: 1.110000
*/

