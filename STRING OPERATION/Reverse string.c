/* Write a program to reverse a string.

  Without inbuilt function. */

#include <stdio.h>
void main()
{
	char a[100], r[100];
	int c=0, l, i;
	printf ("Enter a string: \n");
	gets (a);
	while (a[c] != '\0')
	{
		c++;
	}
	l = c-1;
	for (i=0; i<c; i++)
	{
		r[i] = a[l];
		l--;
	}
	r [i] = '\0';
	printf ("Reverse string is %s\n", r);
}
