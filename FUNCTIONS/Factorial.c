/* Write a program to find factorial of the number. */

#include <stdio.h>
int fact(int);
void main()
{
 int no,factorial;
 	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the num(%d) = %d\n",no,factorial);
}
 
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
