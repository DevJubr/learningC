#include <stdio.h>

int main (void) {

  int row = 17;
  int col = 8;
  int i,j;

  for(i = 0; i<col; i++){
    for (j= 0; j < row; j++)
    {
      printf("*");
    }
    
    printf("\n");
  }

    return 0;
}