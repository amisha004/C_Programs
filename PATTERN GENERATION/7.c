/*       *
        **
       ***
      ****
     *****    */

#include <stdio.h>
int main() 
{
	int i, k, j, n;
	printf ("enter value of n:");
	scanf ("%d", &n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=(n-i); j++)
		{
			printf (" ");
		}
		for (k=i; k>0; k--)
		{
			printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
