/* Write a program to convert Celsius to Fahrenheit. */

# include <stdio.h>
#include <math.h>
int main()
{
    float f, c;
    printf ("Enter temperature in C: \n");
    scanf("%d" ,&c);
    f = (c*9/5)+32 ;
    printf ("Temperature in Fahrenheit %f" , f);
}
