 /*     1
       121
      12321
     1234321  */

#include <stdio.h>
void main()
{
int i,j,n;
printf ("Enter number of rows: ");
scanf ("%d", &n);
for (i=1; i<=n; i++)
{
		for (j=1; j<=n-i; j++)
		{
			printf (" ");
		}
		for (j=1; j<=i; j++)
		{
			printf ("%d",j);
		}
		for (j=i-1; j>=1; j--)
		{
			printf ("%d",j);
		}
		printf ("\n");
	}
}
