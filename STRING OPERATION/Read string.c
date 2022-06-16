/* Write a program to read string from user and print the length of the string. */

#include <stdio.h>
void main()
{
	char a[100];
	int c=0;
	printf ("Enter a string: \n");
	gets (a);
	while (a[c] != '\0')
	{
		c++;
	}
	printf ("Length of string is %d", c);
}
