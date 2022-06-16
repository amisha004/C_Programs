/*  AAAAA
    BBBB
    CCC
    DD
    E       */

#include <stdio.h>
int main() 
{
	int i,j,n=5;
	char ch='A'-1;
	for (i=1;i<=n;i++)
	{
		for(j=n;j>=i; j--)
		{
			printf ("%c", ch+i);
		}
		printf ("\n");
	}
	return 0;
}
