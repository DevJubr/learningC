#include <stdio.h>

int main (void) {
  // -> Now, we will create this box shape using loops.
  // ***********
  // ***********
  // ***********
  // *********** 

  int col = 5;
  int row = 4;
  int n = 14;

  int i,j,k;

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

  // for(i = 0; i < col; i++){
  //   for(j=i; j < row; j++){
  //     printf(" * ");
  //   }

  //   printf("\n");
  // }


  // -> Now, we will create this box shape using loops.
  //    *  
  //   * *
  //  * * *
  // * * * *
  //  * * * 
  //   * *
  //    *

   for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }



    return 0;
}