/* Write a program to print each word of the given string into separate line. */

#include <stdio.h>
void main()
{
	int i;
	char a[100];
	printf ("Enter a string: \n");
	gets (a);
	for (i=0; a[i]!='\0'; i++)
	{
		printf ("%c", a[i]);
		if (a[i]== ' ')
		{
			printf ("\n");
		}
	}
}
