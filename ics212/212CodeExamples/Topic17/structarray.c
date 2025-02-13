/*
  Examples of array of structures
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

int main(){

  //array of structures
  struct student array[MAX]={"","", 0, 0.0};      
  int i = 0;
  
  for(i=0;i<MAX;i++){
    printStudent(array[i]);
  }
  
  for(i=0;i<MAX;i++){ 
    array[i].first = "Nemo";
    array[i].last[0] = 'A' + i;
    array[i].age = i;
    array[i].gpa = i + i/10.0;
  }

  for(i=0;i<MAX;i++){
    printStudent(array[i]);
  }

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
Name is: Nemo A
Age is: 0
GPA is: 0.000000

Name is: Nemo B
Age is: 1
GPA is: 1.100000

Name is: Nemo C
Age is: 2
GPA is: 2.200000

Name is: Nemo D
Age is: 3
GPA is: 3.300000

Name is: Nemo E
Age is: 4
GPA is: 4.400000

Name is: Nemo F
Age is: 5
GPA is: 5.500000

Name is: Nemo G
Age is: 6
GPA is: 6.600000

Name is: Nemo H
Age is: 7
GPA is: 7.700000

Name is: Nemo I
Age is: 8
GPA is: 8.800000

Name is: Nemo J
Age is: 9
GPA is: 9.900000

Name is: Nemo K
Age is: 10
GPA is: 11.000000

Name is: Nemo L
Age is: 11
GPA is: 12.100000

Name is: Nemo M
Age is: 12
GPA is: 13.200000

Name is: Nemo N
Age is: 13
GPA is: 14.300000

Name is: Nemo O
Age is: 14
GPA is: 15.400000

Name is: Nemo P
Age is: 15
GPA is: 16.500000

Name is: Nemo Q
Age is: 16
GPA is: 17.600000

Name is: Nemo R
Age is: 17
GPA is: 18.700000

Name is: Nemo S
Age is: 18
GPA is: 19.800000

Name is: Nemo T
Age is: 19
GPA is: 20.900000
*/

