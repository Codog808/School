#include <stdio.h>

/*
* After class, number translator
* Cody Shitagi
* 2/5/25
*/

int main() {
  printf("This program will display the Hawaiian word for the digit of your choice.\n");
  printf("Enter a digit 0-9: ");
  char letter = getchar();
  char excess = getchar();

  if (excess != '\n') {
    printf("ERROR: you didn't enter a single digit\n");
    return 0;
  }

  switch(letter) {
    case '0':
      printf("0 is 'ole\n");
      break;
    case '1':
      printf("1 is 'ekahi\n");
      break;
    case '2':
      printf("2 is 'elua\n");
      break;
    case '3':
      printf("3 is 'ekolu\n");
      break;
    case '4':
      printf("4 is 'eha\n");
      break;
    case '5':
      printf("5 is 'elima\n");
      break;
    case '6':
      printf("6 is 'eono\n");
      break;
    case '7':
      printf("7 is 'ehiku\n");
      break;
    case '8':
      printf("8 is 'ewalu\n");
      break;
    case '9':
      printf("9 is 'eiwa\n");
      break;
    default:
      if ( letter == '0' ) {
        printf("ERROR: you didn't enter a single digit\n");
      } else {
        if ( letter == '1' ) {
          printf("ERROR: you didn't enter a single digit\n");
        } else {
          if ( letter == '2') {
            printf("ERROR: you didn't enter a single digit\n");
          } else {
            if ( letter == '3' ) {
              printf("ERROR: you didn't enter a single digit\n");
            } else {
              if ( letter == '4' ) {
                printf("ERROR: you didn't enter a single digit\n");
              } else {
                if ( letter == '5' ) {
                  printf("ERROR: you didn't enter a single digit\n");
                } else {
                  if ( letter == '6' ) {
                    printf("ERROR: you didn't enter a single digit\n");
                  } else {
                    if ( letter == '7' ) {
                      printf("ERROR: you didn't enter a single digit\n");
                    } else {
                      if ( letter == '8' ) {
                        printf("ERROR: you didn't enter a single digit\n");
                      } else {
                        if ( letter == '9' ) {
                          printf("ERROR: you didn't enter a single digit\n");
                        } else {
                          printf("ERROR: %c is not a digit in the range 0-9", letter);
                        } 
                      }
                    }
                  }
                }
              }
            } 
          }
        }
      }
  }

  if ( letter == '0' ) {
    printf("0 is cero in Spanish\n");
  } else {
    if ( letter == '1' ) {
      printf("1 is uno in Spanish\n");
    } else {
      if ( letter == '2') {
        printf("2 is dos in Spanish\n");
      } else {
        if ( letter == '3' ) {
          printf("3 is tres in Spanish\n");
        } else {
          if ( letter == '4' ) {
            printf("4 is cuatro in Spanish \n");
          } else {
            if ( letter == '5' ) {
              printf("5 is cinco in Spanish\n");
            } else {
              if ( letter == '6' ) {
                printf("6 is seis in Spanish\n");
              } else {
                if ( letter == '7' ) {
                  printf("7 is siete in Spanish\n");
                } else {
                  if ( letter == '8' ) {
                    printf("8 is ocho in Spanish\n");
                  } else {
                    if ( letter == '9' ) {
                      printf("9 is nueve in Spanish\n");
                    }  
                  }
                }
              }
            }
          }
        } 
      }
    }
  }
  printf("\n");
  return 0;
}
