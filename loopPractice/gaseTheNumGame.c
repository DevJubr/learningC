#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main () {

  int randomNum, userInput;
  printf("entr ur number:");
  scanf("%d", &userInput);
  
  time_t tim;

  srand((unsigned)time(&tim));
  randomNum = rand() % 10 +1 ;

  do {
    if(randomNum == userInput){
      printf("u cs the correct number.");
      break;
    }
  } while(true);

  
  return 0;

}