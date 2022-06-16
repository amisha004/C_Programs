/* Write the program to generate series x, x^2, x^3,…,x^n. */

#include <stdio.h>
void series(int a, int n)
{
	int i,j,k;
	for (i=1,k=a;i<=n;i++)
	{
		for (j=1;j<i;j++)
		{
			k=k*a;
		}
		printf("%d\t",k);
	}
}
void main()
{
	int x,num;
	printf("Enter the value of x and num:\n");
	scanf("%d %d",&x,&num);
	printf("\n The series is \n");
	series(x,num);
}
