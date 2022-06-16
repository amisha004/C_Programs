/*Write a program that will obtain the length and width of a rectangle from user and calculate its area, perimeter and diagonal.*/
#include <stdio.h>
void main()
{
     int l, w;
     int area, perimeter ;
     printf ("Enter length: \n");
     scanf ("%d", &l);
     printf ("Enter width: \n");
     scanf ("%d", &w);
     area = l*w;
     perimeter = 2*(l+w);
	printf ("Area of rectangle is  %d\n" , area);
	printf ("Perimeter of rectangle is %d\n" , perimeter);
}
