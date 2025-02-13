#include <stdio.h>
/*
* Counting in Hawaiian to 99
* Cody Shitagi
* 2/5/25
*/

#define MAX 10000
int main(void) {
  int counter = 0;
  int ones, tens, hundreds, thousands;
  for (counter = 0; counter < MAX; counter ++) {
    ones = counter % 10;
    tens = (counter / 10) % 10;
    hundreds = (counter / 100) % 10;
    thousands = (counter / 1000) % 10;

    // print statement to visualize the counting.
    //printf("%d %d %d %d\n", ones, tens, hundreds, thousands);

    printf("%d = ", counter);



    switch(thousands) {
    case 0:
      printf("");
      break;
    case 1:
      printf("ho'okahi kaukani ");
      break;
    case 2:
      printf("'elua kaukani ");
      break;
    case 3:
      printf("'ekolu kaukani ");
      break;
    case 4:
      printf("'eha kaukani ");
      break;
    case 5:
      printf("'elima kaukani ");
      break;
    case 6:
      printf("'eono kaukani ");
      break;
    case 7:
      printf("'ehiku kaukani ");
      break;
    case 8:
      printf("'ewalu kaukani ");
      break;
    case 9:
      printf("'eiwa kaukani ");
      break;
    }



    
    switch(hundreds) {
    case 0:
      printf("");
      break;
    case 1:
      printf("ho'okahi hanele ");
      break;
    case 2:
      printf("'elua hanele ");
      break;
    case 3:
      printf("'ekolu hanele ");
      break;
    case 4:
      printf("'eha hanele ");
      break;
    case 5:
      printf("'elima hanele ");
      break;
    case 6:
      printf("'eono hanele ");
      break;
    case 7:
      printf("'ehiku hanele ");
      break;
    case 8:
      printf("'ewalu hanele ");
      break;
    case 9:
      printf("'eiwa hanele ");
      break;
    }


    
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
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'ole");
      } else {
        puts("");
      }
      break;

    case 1:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'ekahi");
      } else {
        puts(" kuma kahi");
      }
      break;

    case 2:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'elua");
      } else {
        puts(" kuma lua");
      }
      break;

    case 3:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'ekolu");
      } else {
        puts(" kuma kolu");
      }
      break;

    case 4:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'eha");
      } else {
        puts(" kuma ha");
      }
      break;

    case 5:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'elima");
      } else {
        puts(" kuma lima");
      }
      break;

    case 6:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'eono");
      } else {
        puts(" kuma ono");
      }
      break;

    case 7:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'ehiku");
      } else {
        puts(" kuma hiku");
      }
      break;

    case 8:
      if ( (!tens && !hundreds) && !thousands ) {
        puts("'ewalu");
      } else {
        puts(" kuma walu");
      }
      break;

    case 9:
      if ( (!tens && !hundreds) && !thousands ) {
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
