#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int play_game(int lower, int upper, int max_attempt);
int main()
{
  srand(time(NULL));
  int lower = 1;
  int upper = 5;
  int max_attempt = 4;
  play_game(lower, upper, max_attempt);
  return 0;
}

int play_game(int lower, int upper, int max_attempt)
{
  int attempt = 0;
  int win = 0;
  int secret = (rand() % (upper - lower + 1)) + lower;

  while (attempt < max_attempt && !win)
  {
    int gess;
    printf("gess ur number:");
    scanf("%d", &gess);

    while (gess < lower || gess > upper)
    {
      printf("gess ur number btween %d to %d:", lower, upper);
      scanf("%d", &gess);
    }

    if (gess == secret)
    {
      printf("____YES!____ after tryig %d time u do it.\n", attempt);
      win = 1;
    }
    else if (gess > secret)
    {
      printf("try lower one, cz u r hi.\n");
    }
    else
    {
      printf("try higer one, cz u r low.\n");
    }
    attempt++;
  }

  if (win)
  {
    printf("--------u r win!--------");
  }
  else
  {
    printf("--------u r lose!----try next time.---- the number was: %d", secret);
  }
}