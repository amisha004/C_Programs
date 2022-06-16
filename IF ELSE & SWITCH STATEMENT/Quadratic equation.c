/* Write a program for the solution of quadratic equation. */

#include <stdio.h>
#include <math.h>
void main()
{
	int a, b, c, d, r1, r2, r, i;
	printf ("Enter a, b and c of equation: \n");
	scanf ("%d%d%d", &a, &b, &c);
	d = (b*b)- 4*a*c;
	if (d>1)
	{
		r1 = (-b+ sqrt (d))/2*a;
		r2 = (-b- sqrt (d))/2*a;
		printf ("Root 1= %d \nRoot 2= %d", r1, r2);
	}
	else if (d==0)
	{
		r1 = -b/(2*a);
		r2 = -b/(2*a);
		printf ("Root 1= %d \nRoot 2= %d", r1, r2);
	}
	else 
	{
		r = -b/2*a;
		i = sqrt (d)/2*a;
		printf ("Root 1= %d + i(%d) \nRoot 2= %d - i(%d)", r, i, r, i);
	}
}
