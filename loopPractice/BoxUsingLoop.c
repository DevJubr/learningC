#include <stdio.h>

int main (void) {

  int siz = 13;
  int i,j;

  for(i = 0; i<siz; i++){
    for (j= i; j < siz; j++)
    {
      printf("*");
    }
    
    printf("\n");
  }

    return 0;
}