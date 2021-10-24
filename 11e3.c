#include <stdio.h>
main() {
    char ch, *ptr_c;
    printf("ch adress: %p, value: %c\n", &ch, ch);

    ch = 'A';
    printf("ch = 'A' > ch value: %c\n", ch);

    ptr_c = &ch;
    printf("ptr_c=&ch > ptr_c adress: %p, ptr_c value: %p\n", &ptr_c, ptr_c);

    *ptr_c = 66;
    printf("*ptr_c=66 > ch value: %d\n", ch);
    return 0;
}
