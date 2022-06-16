/* Write a program to print the address of different data type variables along with its value. */

#include<stdio.h>
void main()
{
	int a;
	float b;
	char c = 'A';
	int *ptr_a=&a;
	float *ptr_b=&b;
	char *ptr_c=&c;
	printf("%d is stored at address %u.\n",a,&a);
	printf("%f is stored at address %u.\n",b,&b);
	printf("%c is stored at address %u.\n",c,&c);
}
