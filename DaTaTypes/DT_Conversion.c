#include <stdio.h>

int main (void) {

  char a = 'c';
  printf("difftrent Value of A - %d, %x, %c\n", a,a,a);

  // implisit conversion
  int r = 'a' + 2;
  printf("result of a + 2 : %d\n", r);

  return 0;
}