#include <stdio.h>

int main () {

  char c = 'A';
  short s = 43;
  int i = 231;
  long l = 3232l;
  long long ll = 2343ll;


  printf("In bytes Sizeof char - %d\n", (int)sizeof(c));
  printf("In bytes Sizeof short - %d\n", (int)sizeof(s));
 printf("In bytes Sizeof int - %d\n", (int)sizeof(i));
  printf("In bytes Sizeof long long - %d\n", (int)sizeof(ll));
 printf("In bytes Sizeof long - %d\n", (int)sizeof(l));
    return 0;
}