/* Write a program to print all the numbers between the given numbers x & y including x & y and also calculate their sum & average. */

#include <stdio.h>
int main()
{
    int x,y,i,b=0;
    float avg=0, sum=0;
    printf ("Enter value of x:\n");
    scanf ("%d", &x);
    printf ("Enter value of y:\n");
    scanf ("%d", &y);
    printf ("Your numbers are:\n");
    do
    {
        printf ("%d\n", x);
        sum = sum+x;
        b=b+1;
        x++;
    }
    while (x<=y);
    avg=sum/b;
    printf ("Sum of numbers=%f\n",sum);
    printf ("Average of numbers=%f\n",avg);
    return 0;
}
