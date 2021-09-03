#include <stdio.h>

main()
{
    int x;
    x = sizeof(int);
    printf("%s\n",
            (x == 2) ? "The int data type has 2 bytes." : "int doesn't have 2 bytes.");
    printf("Maximum value of int is: %d\n",
            (x != 2) ? ~(1 << x * 8 - 1) : ~( 1 << 15 ));
    return 0;
    }

