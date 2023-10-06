#include <stdio.h>

int main () {
  char name[30];
  int i = 0;
  
  printf("enter ur name:");
  fgets(name, sizeof(name), stdin);

  

  while (name[i]) 
  {
   if(name[i] >= 'a' && name[i] <='z'){
    name[i] = name[i] - 32;
   }

   i++;
  }

  printf("%s", name);
  
    return 0;
}