/* Write a program to find smallest and largest number in an array of n numbers. */

#include <stdio.h>
void main()
{
	int n,i,a[10];
	int max, min;
	printf ("enter the value: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
		printf ("\nenter element: ");
		scanf ("%d", &a[i]);
	}
	max= a[0];
	min= a[0];
	for (i=0; i<n; i++)
	{
		if (max<a[i])
		{
			max= a[i];
		}
		if (min>a[i])
		{
			min=a[i];
		}
	}
	printf ("\n");
	printf ("maximum is: %d\n", max);
	printf ("minimum is: %d\n", min);
}
