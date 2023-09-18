#include <stdio.h>

int main (void) {

  char a = 'c';
  printf("difftrent Value of A - %d, %x, %c\n", a,a,a);

  // implisit conversion
  int r = 'a' + 2;
  printf("result of a + 2 : %d\n", r);

  // explisit conversion
  //  here i expect float data, but my dicliarde dataType is int. so here when i try to print i tell that int var thet u become float. thsi is called explisit convertion. (note: if i exptect output in (n) dataType, then my var's dataType should be (n). )
  int rF = 'a' + 2;
  printf("result of Rf + 2 : %f\n", (float)rF);


// ------------- another exmpl -----------

float z = 3.5f;
float y = 2.1f;
float x = 7.9f;

// no converTion
int Nc = x+y+z;
printf("result (no converTion): %d\n");

  return 0;
}