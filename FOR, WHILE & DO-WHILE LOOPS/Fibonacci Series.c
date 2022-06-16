/* Write a program to print first N Natural Number of Fibonacci Series. */

#include <stdio.h>
int main() {
	int i,n,t1=0,t2=1,nt;
	printf ("enter the terms:");
	scanf ("%d", &n);
	printf ("fibonacci series:\n");
	for (i=1;i<=n; ++i)
	{
		printf ("%d\n", t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
	return 0;
}
