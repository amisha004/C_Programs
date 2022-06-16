/*      5
	     45
	    345
	   2345
	  12345   */

#include <stdio.h>
int main() 
{
	int i,j,k,n;
	printf ("enter the value of n:");
	scanf ("%d", &n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=(n-i); j++)
		{
			printf (" ");
		}
		for (k=(n-i+1); k<=n; k++)
		{
			printf ("%d",k);
		}
		printf ("\n");
	}
	return 0;
}
