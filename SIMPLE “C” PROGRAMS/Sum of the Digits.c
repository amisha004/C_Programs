/* Write a program to find the Sum of the Digits of a 3-digit Integer constant. */

#include <stdio.h>
void main()
{
	int n, a, b, c, sum;
	printf ("Enter 3-digit number: \n");
	scanf ("%d", &n);
	a = n/100;
	b = (n%100)/10;
	c = n%10;
	sum= a+b+c;
	printf ("Sum of digit is %d", sum);
}
