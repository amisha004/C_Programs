/* Write a program to print squares and cubes of first n natural numbers and calculate their sum & average. */

#include <stdio.h>
int main()
{
    int i=1, n,squ,cube;
    float sums=0, avgs=0, sumc=0, avgc=0;
    printf ("Enter a number:\n");
    scanf ("%d", &n);
    printf ("Number\t \tSquare\t \tCube\n");
    while(i<=n)
    {
        squ=i*i;
        cube=i*i*i;
        printf ("%d\t \t%d\t \t%d\n",i,squ,cube);
        sums=sums+squ;
        sumc=sumc+cube;
        i=i+1;
    }
    avgc=sumc/n;
    avgs=sums/n;
    printf ("sum of cubes= %f \naverage of cubes= %f\n", sumc, avgc);
    printf ("sum of squares= %f \naverage of squares= %f\n", sumc, avgc);
    return 0;
}
