/* Write a program to convert the kilometer into meter, centimeter, feet and inch.*/

#include <stdio.h>
void main()
{
	int km, m, cm;
	float f, i;
	printf ("Enter distance in km: \n");
	scanf ("%d",&km);
	m = km*1000;
	cm = km*100000;
	f = km*3280.84;
	i = km*39370.079;
	printf ("Distance in centimeter = %d\n", cm);
	printf ("Distance in meters = %d\n", m);
	printf ("Distance in feet = %f\n", f);
	printf ("Distance in inch = %f\n", i);
}
