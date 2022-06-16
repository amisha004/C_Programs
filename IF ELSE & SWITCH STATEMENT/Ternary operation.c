/* Write a program to find maximum and minimum number from three number using ternary operation. */

#include <stdio.h>
void main()
{
	int a ,b ,c ,max ,min;
	printf ("Enter three numbers: \n");
	scanf ("%d%d%d" ,&a ,&b ,&c);
	max = a>b?(a>c?a:c):(b>c?b:c);
	min = a<b?(a<c?a:c):(b<c?b:c);
	printf ("The maximum is %d \n" ,max);
	printf ("The minimum is %d \n" ,min);
}
