#include <stdio.h>

main()
{
    int i;
    printf("Odd    Even\n");
    for (i=0; i<20; i++) 
        if (i%2==0)
            printf("%d\n", i);
        else
            printf("%10d\n", i);
    return 0;   
    
}
