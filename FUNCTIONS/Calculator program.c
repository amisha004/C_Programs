/* Write a calculator program to prepare user defined function for each. */

#include <stdio.h>
void add(int a,int b);
void subtract(int x,int y);
void divide(int c,int d);
void multiply(int e,int f);
void main()
{
	int num1,num2;	
	int i;
	printf("Enter your two numbers \n");
	scanf("%d %d",&num1,&num2);
	printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication or 4 for division\n");
	scanf("%d",&i);
	switch (i)
	{
		case 1:
			add(num1,num2);
			break;
		case 2:
			subtract(num1,num2);
			break;
		case 3:
			multiply(num1,num2);
			break;
		case 4:
			divide(num1,num2);
			break;
	} 
}
void add(int x,int y)
{
	printf("Addition is %d ",(x+y));
}
	void subtract(int a,int b)
{
	printf("Subtraction is %d ",(a-b));
}
void multiply(int e,int f)
{
	printf("Multiplication is %d ",(e*f));
}
void divide(int c,int d)
{
	printf("Division is %f ",(c/d));
}
