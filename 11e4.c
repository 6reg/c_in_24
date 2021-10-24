/* Given that x=5 and y=6, write a program to calculate the multiplication of the two integers and print out the result, which is saved in x, all in the way of indirection (i.e., using pointers).
 */
#include <stdio.h>
main(){
int x, y, *ptr_x, *ptr_y;
x=5;
y=6;
ptr_x=&x;
ptr_y=&y;
printf("x= %d\n", x);
x= *ptr_x * *ptr_y;
printf("x= %d\n", x);
return 0;
}
