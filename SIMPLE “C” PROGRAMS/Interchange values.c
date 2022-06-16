/* Write a program to interchange the values of two variables. */

#include <stdio.h>
void main()
{
	int a, b, c;
	printf ("Enter value of a and b: \n");
	scanf ("%d%d", &a, &b);
	c=a;
	a=b;
	b=c;
	printf ("Value of a and b is %d %d\n", a, b);
	printf ("value is interchanged");
}
