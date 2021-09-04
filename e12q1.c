#include <stdio.h>

main()
{
    int i;
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    for (i=0; i<6; i++)
        printf("The size of %d is %s\n", array_ch[i], &array_ch[i]);

    return 0;
                
}
