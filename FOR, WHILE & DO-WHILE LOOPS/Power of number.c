/* Write a program to calculate power of the number (x^n) without using pow() function. */

#include <stdio.h>
int main() 
{
	int base, exp;
	int result=1;
	printf ("enter a base no.:\n");
	scanf ("%d", &base);
	printf ("enter a exponent.:\n");
	scanf ("%d", &exp);
	while (exp != 0)
	{
		result= result*base;
		--exp;
	}
	printf ("value is:%d\n", result);
	return 0;
}
