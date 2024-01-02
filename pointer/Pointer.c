#include <stdio.h>
int main()
{
        int abc = 123;
        int *ptr = &abc;
        int value = *ptr;
        printf("%p", &abc);
}