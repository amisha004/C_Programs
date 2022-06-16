/* Write a program to arrange an array of n elements in ascending order. */

#include <stdio.h>
void main()
{
	int a[10],n, i, j, t;
	printf ("Enter the value of n: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
		printf ("Enter element: ");
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n-1; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (i=0; i<n; i++)
	{
		printf ("%d\t", a[i]);
	}
	
}
