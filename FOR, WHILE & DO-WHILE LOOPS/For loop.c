/* Write a program to print all numbers exactly divisible by 5 until no<100, and 
calculate their sum and average using modulus operator to check divisibility. */

#include <stdio.h>
int main()
{
    int i , sum , avg ;
    
    for (i=0 ; i<100; i++)
    
    { 
         if (i%5==0)
         printf ("%d\n",i);
         sum =sum+i;
         avg =sum/20;
    }
    printf ("The sum of all no. divisible by 5 is: %d\n", sum);
    printf ("The average of the no. divisible by 5 is: %d\n", avg);
    return 0;
}
