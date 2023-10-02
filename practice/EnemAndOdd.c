#include <stdio.h>

int main(void){

int num;
printf("enter a number: ");
scanf("%d", &num);

if(num%2 == 0) {
  printf("%d is even num", num);
} else {
  printf("%d is odd num", num);

}


}
