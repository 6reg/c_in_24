#include <stdio.h>

main()
{
	int int_num1, int_num2, int_num3; /* Declare int vars */
	float flt_num1, flt_num2, flt_num3; /* Declare float vars */

	int_num1 = 32 / 10; /* Both dividend and divisor are ints */
	flt_num1 = 32 / 10;
	int_num2 = 32.0 / 10; /* The divisor is an integer */
	flt_num2 = 32.0 / 10;
	int_num3 = 32 / 10.0; /* The dividend is an int */
	flt_num3 = 32 / 10.0;

	printf("the integer divis. of 32/10 is: %d\n", int_num1);
	printf("The floating-point divis. of 32/10 is: %f\n", flt_num1);
	printf("The integer divis. of 32.0/10 is: %d\n", int_num2);
	printf("The floating-point divis. of 32.0/10 is: %f\n", flt_num2);
	printf("The integer divis. of 32/10.0 is: %d\n", int_num3);
	printf("The floating-point divis. of 32/10.0 is: %f\n", flt_num3);
	return 0;
}
