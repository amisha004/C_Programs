/* Write a program to calculate the area of a triangle given by the formula a=sqrt(s (s-a) (s-b) (s-c)), 
where a, b and c are the sides of the triangle and 2s= a+b+c.*/

#include <stdio.h>
#include <math.h>
void main ()
{
	int a,b,c;
    float s, area;
    printf ("Enter three sides of triangle: \n");
    scanf ("%d%d%d", &a, &b, &c);
    s = ((a+b+c)/2);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf ("The area of triangle is  %f\n"  , area);
}

