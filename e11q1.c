#include <stdio.h>
main()
{
    int x, y, z;
    x = 512;
    y = 1024; 
    z = 2048;

    printf("x -> address: %p -> content: %d\n", &x, x);
    return 0;
}

