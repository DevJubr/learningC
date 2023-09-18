#include <stdio.h>

int main (void) {

  char a = 'c';
  printf("difftrent Value of A - %d, %x, %c\n", a,a,a);

  // implisit conversion
  int r = 'a' + 2;
  printf("result of a + 2 : %d\n", r);

  // explisit conversion
  //  here i expect float data, but my dicliarde dataType is int. so here when i try to print i tell that int var thet u become float. thsi is called explisit convertion.
  int rF = 'a' + 2;
  printf("result of Rf + 2 : %f\n", (float)rF);

  return 0;
}