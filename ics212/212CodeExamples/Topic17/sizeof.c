/*
  Examples of operator sizeof()
*/

#include<stdio.h>
#define MAX 20

//structure definition
struct student{ 
  char *first;    // 8 bytes (size of address because pointer)
  char last[MAX]; //20 bytes 
  int age;        // 4 bytes
  double gpa;     // 8 bytes
};                //36 bytes total  

int main(){
  //structure declarations
  struct student s1 = {"Surfer","Dude", 11, 1.11};
  struct student s2;      
  struct student *s3 = &s2; 
  struct student s4[10];
  
  //"regular" datatype declarations
  char a, b[10], *p1 = b;
  int c, d[10], *p2 = d;
  double e, f[10], *p3 = f;
  
  //sizeof() for "regular" datatype
  printf("sizeof(a) = %d  ",sizeof(a));
  printf("sizeof(b) = %d\n",sizeof(b));
  printf("sizeof(c) = %d  ",sizeof(c));
  printf("sizeof(d) = %d\n",sizeof(d));
  printf("sizeof(e) = %d  ",sizeof(e));
  printf("sizeof(f) = %d\n\n",sizeof(f));
  
  //sizeof() for pointers to regular datatypes
  printf("sizeof(p1) = %d  ",sizeof(p1));
  printf("sizeof(*p1) = %d\n",sizeof(*p1));
  printf("sizeof(p2) = %d  ",sizeof(p2));
  printf("sizeof(*p2) = %d\n",sizeof(*p2));
  printf("sizeof(p3) = %d  ",sizeof(p3));
  printf("sizeof(*p3) = %d\n\n",sizeof(*p3));
  
  //sizeof() for structures
  printf("sizeof(s1) = %d\n", sizeof(s1));
  printf("sizeof(s2) = %d\n", sizeof(s2));
  printf("sizeof(s3) = %d\n", sizeof(s3));
  printf("sizeof(s4) = %d\n\n", sizeof(s4));
  
  //sizeof() for pointers to structure members 
  printf("sizeof(first) = %d\n", sizeof(s1.first));
  printf("sizeof(last) = %d\n", sizeof(s1.last));
  printf("sizeof(age) = %d\n", sizeof(s1.age));
  printf("sizeof(gpa) = %d\n\n", sizeof(s1.gpa));

  return 0;
}

/*
sizeof(a) = 1  sizeof(b) = 10
sizeof(c) = 4  sizeof(d) = 40
sizeof(e) = 8  sizeof(f) = 80

sizeof(p1) = 4  sizeof(*p1) = 1
sizeof(p2) = 4  sizeof(*p2) = 4
sizeof(p3) = 4  sizeof(*p3) = 8

sizeof(s1) = 40
sizeof(s2) = 40
sizeof(s3) = 4
sizeof(s4) = 400

sizeof(first) = 4
sizeof(last) = 20
sizeof(age) = 4
sizeof(gpa) = 8
*/

