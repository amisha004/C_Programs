/*     1
      21
     321
    4321    */

#include <stdio.h>
int main() 
{
	int i,k,j,n;
	printf ("enter the value of n:");
	scanf ("%d",&n);
	for (i=1; i<=n; i++)
	{
		for (k=1; k<=(n-i); k++)
		{
			printf (" ");
		}
		for (j=i; j>0; j--)
		{
			printf ("%d", j);
		}
		printf ("\n");
	}
	return 0;
}
