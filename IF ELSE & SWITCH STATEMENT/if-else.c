/* Convert the case of a given character. */

#include<stdio.h>
#include<ctype.h>
void main()
{
	char ch ,n ,i ;
	printf ("Enter the character \n");
	ch = getchar();
	if (isupper(ch))
	{
    	ch = tolower(ch);
    	putchar(ch);
	}
	else
	{ 
		ch = toupper(ch);
		putchar(ch);
	}
}
