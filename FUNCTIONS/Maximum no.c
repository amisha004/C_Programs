/* Write a program to find maximum of three numbers. */

#include<stdio.h>
float input();
float large(float a, float b, float c);
void display(float max);
int main()
{
   	float num1, num2, num3, largest;
	num1 = input();
   	num2 = input();
   	num3 = input();
   	largest = large(num1, num2, num3);
   	display(largest);
   	return 0;
}

float input()
{
   	float n;
   	printf("Enter number: ");
   	scanf("%f", &n);
   	return n;
}
void display(float max)
{
	printf("Largest number = %.2f",max);
}
float large(float a, float b, float c)
{
   	if(a>=b && a>=c) 
   		return a;
  	else 
	  	if(b>=a && b>=c) 
		  	return b;
   	else 
	   	return c;
}
