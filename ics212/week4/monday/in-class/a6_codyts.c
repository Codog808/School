// Cody Shitagi

#include <stdio.h>

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
    printf("0 is 'ole");
    break;
  case '1':
    printf("1 is 'ekahi");
    break;
  case '2':
    printf("2 is 'elua");
    break;
  case '3':
    printf("3 is 'ekolu");
    break;
  case '4':
    printf("4 is 'eha");
    break;
  case '5':
    printf("5 is 'elima");
    break;
  case '6':
    printf("6 is 'eono");
    break;
  case '7':
    printf("7 is 'ehiku");
    break;
  case '8':
    printf("8 is 'ewalu");
    break;
  case '9':
    printf("9 is 'eiwa");
    break;
  default:
    printf("ERROR: you didn't enter a single digit");
  }
  printf("\n");
  return 0;
}
