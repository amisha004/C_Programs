/* Write a program to check whether given string is palindrome string or not. */

#include <stdio.h>
#include <string.h>
void main()
{
    char s[20];
    int i, len;
    int flag = 0;
    printf ("Enter a string: \n");
    gets (s);
    len = strlen(s);
    for (i=0;i < len ;i++)
    {
        if (s[i] != s[len-i-1])
        {
            flag = 1;
            break;
        }
    }
    if (flag) 
    {
        printf ("%s is not a palindrome", s);
    }    
    else 
    {
        printf ("%s is a palindrome", s);
    }
}
