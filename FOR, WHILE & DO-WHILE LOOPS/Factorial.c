/* Write a program to print the factorial of given number. */

#include <stdio.h>
int main() {
	int num;
	unsigned long long f=1;
	int i;
	printf ("enter a number: ");
	scanf ("%d",&num);
	if(num<0)
	{
		printf ("invaild entery.");
	}
	else 
	{
		for (i=1;i<=num; ++i)
		{
			f=f*i;
		}
		printf ("factorial is: %lu",f);
	}
	return 0;
}
