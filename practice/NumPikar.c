#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
  int giveNum, pikkedNumber;
  printf("entwr your number: ");
  scanf("%d", &giveNum);

  time_t tim;
  srand((unsigned)time(&tim));
  pikkedNumber = rand() %100 +1;

  if (giveNum == pikkedNumber)
  {
    printf("right gase!");
  } else{
    printf("rong gase!");

  }
  



  return 0;
}