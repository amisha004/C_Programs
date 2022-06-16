/* Write a program to convert Fahrenheit to Celsius. */

#include <stdio.h>
void main ()
{
	float f, c;
	printf ("Enter temperature in F: \n");
	scanf ("%f",&f);
	c = ((f-32)*5/9);
	printf ("Temperature in C: %f", c);
}
