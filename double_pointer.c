#include <stdio.h>
main() {


double flt_num;
flt_num = 123.45;

printf("flt_num address: %p content: %f\n", &flt_num, flt_num);

double *ptr_dub;
ptr_dub = &flt_num;

printf("ptr_dub address: %p content: %p\n", &ptr_dub, ptr_dub);

*ptr_dub = 543.21;
printf("flt_num address: %p content: %f\n", &flt_num, flt_num);
printf("ptr_dub address: %p content: %p\n", &ptr_dub, ptr_dub);
return 0;
}
