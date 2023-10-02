#include <stdio.h>

int main(void){

int num;
printf("enter a number: ");
scanf("%d", &num);

if( num >= 48 && num <= 57){
  printf("%d is a Number", num);
} else if(num >= 65 && num <= 90){
  printf("%c is a Uppercase letter", num);

} else if (num >= 97 && num <= 122)
{
   printf("%c is a lowercase letter", num);

}



}
