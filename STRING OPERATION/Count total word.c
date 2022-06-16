/* Write a program to count total word in text. */

#include <stdio.h>
#include <string.h>
void main()
{
    int c=0,count=0;
    char s[100];
    printf ("Enter a string: \n");
    gets (s);
    while (s[c] != '\0') 
	{
        count ++;
    	c++;
    }
    printf ("Number of words are %d\n", count);   
}
