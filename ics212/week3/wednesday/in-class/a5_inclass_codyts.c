//Cody Shitagi
#include <stdio.h>
#include "getdouble.h"

#define TODAY_M 1
#define TODAY_D 29
#define TODAY_Y 2025

int main(void) {
  double day, month, year;
  puts("This program will caluclate your age in days.");

  puts("Enter the month you were born: ");
  //printf("Enter the month you were born: ");
  month = getdouble();
  printf("Your birth month is in %d\n", (int)month);

  puts("Enter the day you were born: ");
  //printf("Enter the day you were born: ");
  day = getdouble();
  printf("Your birth day is in %d\n", (int)day);

  puts("Enter the year you were born: ");
  //printf("Enter the year you were born: ");
  year = getdouble();
  printf("Your birth year is in %d\n", (int)year);

  // Attempt to make it like the EXMPLE I/O of Topic 5 in-class assignment
  //printf("\n");
  //printf("Your birth month is in %d\n", (int)month);
  //printf("Your birth day is in %d\n", (int)day);
  //printf("Your birth year is in %d\n", (int)year);
  printf("Today's date is: %d/%d/%d\n", TODAY_M, TODAY_D, TODAY_Y);
}
