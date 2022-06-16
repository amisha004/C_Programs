/* Write a program to reverse Digits of a Number. */

#include <stdio.h>
void main()
{
    int  a , b ,c , n , sum=0 ;
	printf ("Enter a Three Digits Number: \n");
	scanf ("%d" , &n);
	a = n/100;
	b = ((n%100)/10);
	c = n%10;
	sum = (c*100)+(b*10)+(a) ;
	printf ("Reverse of the Number is : %d\n" , sum);
}
