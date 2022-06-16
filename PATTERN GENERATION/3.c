/*  K L M N O
    G H I J
    D E F
    B C
    A           */

#include <stdio.h>
int main() 
{
	int k=75, n=5, i, j;
	for (i=n; i>0; i--)
	{
		for (j=k; j<k+i; j++)
		{
			printf ("%c", j);
		}
		printf("\n");
		k=k-i+1;
	}
	return 0;
}
