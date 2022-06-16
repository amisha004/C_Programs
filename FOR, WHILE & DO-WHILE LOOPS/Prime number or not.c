/* Write a program to check if a given number is a prime number or not. */

#include <stdio.h>
int main()
{
	int n, i=2, c=0;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	while (i<= n/2)
	{
		if (n%i==0)
		{
			c++;
			break;
		}
		i++;
	}
	if (n==1)
	{
		printf ("1 is neither prime nor composite.");
	}
	else 
	{
		if (c==0)
		{
			printf ("%d is a prime number.", n);
		}
		else
		{
			printf ("%d is not a prime number.", n);
		}
	}
	return 0;
}
