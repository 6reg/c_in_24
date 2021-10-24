#include <stdio.h>

main()
{
    int x, y, z;
    printf("x address: %p content: %d\n", &x, x);
    printf("y address: %p content: %d\n", &y, y);
    printf("z address: %p content: %d\n", &z, z);
    x = 10;
    y = 10;
    z = 20;
    printf("x address: %p content: %d\n", &x, x);
    printf("y address: %p content: %d\n", &y, y);
    printf("z address: %p content: %d\n", &z, z);
    return 0;
}
