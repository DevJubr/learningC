#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main () {

  int randomNum, userInput, chance = 3;
  bool notAble = true;

  time_t tim;

  srand((unsigned)time(&tim));
  randomNum = rand() % 10 +1 ;

  do {

  printf("entr ur number:");
  scanf("%d", &userInput);
  
    if(randomNum == userInput){
      printf("u cs the correct number.");
      notAble = false;
      break;
    }

    if (notAble)
    {
      printf("u not able to gase, fuck u!");
    }
    
    chance--;
  } while(chance > 0);

  
  return 0;

}