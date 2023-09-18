#include <stdio.h>

int main (void) {
// ----------float-------------
// Float :
//      1) float -> idendifire: %hu
//      2) duble  -> idendifire: %u
//      3) Long duble  -> idendifire: %lu

// 1) float -> idendifire: %f
  float a = 22.45;
  printf("iam only folat - %f\n", a);

// 2) duble  -> idendifire: %lf
  double b  = 34352.45;
  printf("iam double - %lf\n", b);


// 3) Long duble  -> idendifire: %Lu
  long double c = 24567343.5346;
  printf("iam long double - %Lf\n", c);

}