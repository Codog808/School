#include <stdio.h>
/*
* Counting in Hawaiian to 99
* Cody Shitagi
* 2/5/25
*/

#define MAX 100
int main(void) {
  int counter = 0;
  int ones, tens;
  for (counter = 0; counter < MAX; counter ++) {
    ones = counter % 10;
    tens = counter / 10;

    // print statements to visualize the counting.
    //printf("tens = %d\n", tens);
    //printf("ones= %d\n", ones);
    //printf("\n");
    printf("%d = ", counter);

    switch(tens) {
    case 0:
      printf("");
      break;
    case 1:
      printf("'umi");
      break;
    case 2:
      printf("iwakalua");
      break;
    case 3:
      printf("kanakolu");
      break;
    case 4:
      printf("kanaha");
      break;
    case 5:
      printf("kanalima");
      break;
    case 6:
      printf("kanaono");
      break;
    case 7:
      printf("kanahiku");
      break;
    case 8:
      printf("kanawalu");
      break;
    case 9:
      printf("kanaiwa");
      break;
    }
    switch(ones) {
    case 0:
      if (tens == 0) {
        puts("'ole");
      } else {
        puts("");
      }
      break;

    case 1:
      if (tens == 0) {
        puts("'ekahi");
      } else {
        puts(" kuma kahi");
      }
      break;

    case 2:
      if (tens == 0) {
        puts("'elua");
      } else {
        puts(" kuma lua");
      }
      break;

    case 3:
      if (tens == 0) {
        puts("'ekolu");
      } else {
        puts(" kuma kolu");
      }
      break;

    case 4:
      if (tens == 0) {
        puts("'eha");
      } else {
        puts(" kuma ha");
      }
      break;

    case 5:
      if (tens == 0) {
        puts("'elima");
      } else {
        puts(" kuma lima");
      }
      break;

    case 6:
      if (tens == 0) {
        puts("'eono");
      } else {
        puts(" kuma ono");
      }
      break;

    case 7:
      if (tens == 0) {
        puts("'ehiku");
      } else {
        puts(" kuma hiku");
      }
      break;

    case 8:
      if (tens == 0) {
        puts("'ewalu");
      } else {
        puts(" kuma walu");
      }
      break;

    case 9:
      if (tens == 0) {
        puts("'eiwa");
      } else {
        puts(" kuma iwa");
      }
      break;

    default:
      puts("ERROR in ones");
      break;
    }
  }
}
