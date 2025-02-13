/*
  Passing multiple-subscripted arrays to functions
*/
#include <stdio.h>
/*symbolic constants*/
#define ROWS 5
#define COLUMNS 3

/*
  function prototype
  must have a value for 2nd subscript and higher
*/
void printarray(int [][COLUMNS], const int, const int);
void addElementsToArray(int [][COLUMNS], const int, const int); 

int main(){
  int array[ROWS][COLUMNS] = {0};
  printarray(array, ROWS, COLUMNS);
  addElementsToArray(array, ROWS, COLUMNS);
  printarray(array, ROWS, COLUMNS);
 	
  return 0;
}

/*
  function definition: print out a two-dimensional array
  must have a value for 2nd subscript and higher 
*/
void printarray(int array[][COLUMNS], const int rows, const int columns){
  printf("Two dimensional array with %d rows and %d columns:\n", rows, columns);
  int i=0,j=0;
  for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){ 
      printf("%5d ",array[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

/* 
   function definition: add elements to a 2-D array
   must have a value for 2nd subscript and higher        
*/
void addElementsToArray(int array[][COLUMNS], const int rows, const int columns){
  int i=0,j=0,k=0;
  for(i=0;i<rows;i++){
    for(j=0;j<columns;j++){
      k++;
      array[i][j] = k;
    }
  }
}


/*
Two dimensional array with 5 rows and 3 columns:
    0     0     0 
    0     0     0 
    0     0     0 
    0     0     0 
    0     0     0 

Two dimensional array with 5 rows and 3 columns:
    1     2     3 
    4     5     6 
    7     8     9 
   10    11    12 
   13    14    15 
*/

