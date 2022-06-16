/* Write a program to read your name and output the ASCII code 
of the first character representing your name. */

#include <stdio.h>
void main()
{
	char a[30];
	printf ("Enter your name: \n");
	gets (a);
	printf ("%d", a[0]);
}
