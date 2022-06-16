/*  1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1     */
  
#include <stdio.h>
int main() 
{
	int i,j,n;
	printf ("enter value of n:");
	scanf ("%d",&n);
	for (i=0; i<=n; i++)
	{
		for (j=1; j<=i; j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf ("0");
			}
			printf (" ");
		}
		printf ("\n");
	}
	return 0;
}
