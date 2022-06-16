/* Write a program to print first N natural number and their Sum and average using “while” Loop. */

#include <stdio.h>
int main()
{
    int i=0, n;
    float sum=0, avg=0;
    printf ("Enter a number:\n");
    scanf ("%d", &n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
        printf ("%d\n",i);
    }
    avg=sum/n;
    printf ("sum of numbers= %f \naverage of numbers= %f", sum, avg);
    return 0;
}
