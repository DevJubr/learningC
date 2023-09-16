// calculetor project

#include <stdio.h>

int main() {
  float num1, num2, result;

  printf("enter tow num: (2 3)");
  scanf("%f %f", &num1, &num2);
5 1

  result = num1 + num2 ;
  printf("%.2f + %.2f = %.2f\n", num1,num2, result);

  result = num1 - num2;
  printf("%.2f - %.2f = %.2f\n", num1,num2, result);

   result = num1 * num2;
  printf("%.2f * %.2f = %.2f\n", num1,num2, result);

  return 0;
}

// here new one ting, that is '%.2f', the .2 specifier that after point show oly tow numbers. like (23.44)