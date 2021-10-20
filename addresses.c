#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("Value of int var 'n': %i\n", n);
    printf("Address where variable n starts: %p\n", &n);
    printf("Go to address of var and print value stored there: %i\n", *&n);
    printf(" var int pointer 'p' set to value '&n': %p\n", p);
}
