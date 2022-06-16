/* Write a program to perform Addition, subtraction, multiplication and modulo. */

#include<stdio.h>
#include<math.h>
void main()
{
     int a , b;
     printf ("Enter the value of a \n");
     scanf ("%d", &a);
     printf ("Enter the value of b \n");
     scanf ("%d", &b);
	printf ("%d+%d=%d\n", a, b, a+b);
	printf ("%d-%d=%d\n", a ,b, a-b);
	printf ("%d*%d=%d\n", a,b, a*b);
	printf ("%d/%d=%d\n", a, b, a/b);
	printf ("%d%%%d=%d\n" , a, b, a%b);
}
