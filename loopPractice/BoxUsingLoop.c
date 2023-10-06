#include <stdio.h>

int main (void) {
  // -> Now, we will create this box shape using loops.
  // ***********
  // ***********
  // ***********
  // *********** 

  int col = 5;
  int row = 4;

  int i,j;

  // for (i=0; i< col; i++) {
  //   for(j=0; j<row; j++) {
  //       printf("*");
  //   }
  //   printf("\n");

  // }

// -> Now, we will create this shape using loops.
  // *
  // * *
  // * * *
  // * * * *

  // for(i=0; i<col; i++) {

  //   for(j=0; j <i; j++){
  //     printf(" * ");
  //   }

  // printf("\n");
  // }

  // -> Now, we will create this box shape using loops.
  // * * * *
  // * * *
  // * *
  // *

  for(i = 0; i < col; i++){
    for(j=i; j < row; j++){
      printf(" * ");
    }

    printf("\n");
  }

    return 0;
}