/* Write a program to read marks from the keyboard and your program should display equivalent grade according to following table. */

#include<stdio.h>
void main()
{
	float m;
	char grd;
	printf ("Enter the marks: \n");
	scanf ("%f" ,&m);
	if (m>=90 && m<=100)
	{
		grd='A';
	}
	else if (m>=80 && m<90)
	{
		grd='B';
	}		
    else if (m>=65 && m<80)
	{
		grd='C';
	}
	else if (m>=35 && m<65)
	{
		grd='D';
	}		
    else
	{
		grd='E';
	}
	printf ("YOUR GRADE IS %c \n" ,grd);	
}
