/* Write a program to join two strings.

  Without inbuilt function.*/

#include <stdio.h>
int main() 
{
  	char s1[100], s2[100];
  	int length, j;
  	length = 0;
  	printf ("Enter string 1: \n");
  	gets (s1);
  	printf ("Enter string 2: \n");
  	gets (s2);
  	while (s1[length] != '\0')
	{
    	++length;
  	}
  	for (j = 0; s2[j] != '\0'; ++j, ++length) 
	{
    	s1[length] = s2[j];
  	}
  	s1[length] = '\0';
	printf ("After concatenation: \n");
  	puts (s1);
}
