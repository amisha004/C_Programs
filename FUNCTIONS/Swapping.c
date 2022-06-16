/* Write a program that used user defined function swap() and interchange the value of two variables. */

#include<stdio.h>
void exch(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d %d",a,b);
}
void main()
{
	int x,y;
	printf("Enter the value of x & y : \n");
	scanf("%d %d",&x,&y);
	exch(x,y);
}
