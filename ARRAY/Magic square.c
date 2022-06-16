/* Write a program to check whether given 3*3 matrix is magic square or not. */

#include<stdio.h>
void main()
{
    int a[20][20];
    int m, n, i, j, s1=0, s2=0, s3=0, set;
    printf("Enter number of row and column: \n");
    scanf("%d %d", &m, &n);
    if(m==n)
	{
        for (i = 1; i<=m; i++)
        {
            for (j = 1; j<=n; j++)
            {
            	printf ("Enter element a%d%d: ", i , j);
                scanf("%d", &a[i][j]);
        	}
        }
        printf ("Matrix is: \n");
        for (i = 1; i<=m; i++)
		{
            for (j = 1; j<=n; j++)
            {
                printf(" %d\t", a[i][j]);
            }
            printf ("\n");
        }
        for (i = 1; i <= m; ++i)
        {
            for (j = 1; j <= n; ++j)
            {
                if (i == j)
				{
                	s1 = s1 + a[i][j];
                }  
            }
        }
        for (i = 1; i<=m; i++) 
		{
            for (j = 1; j<=n; j++) 
			{
                s2 = s2 + a[i][j];
            }
            if (s1 == s2)
            {
                set = 1;
            }
            else 
			{
                set = 0;
                break;
            }
        	s2=0;
        }
        for (i = 1; i<=m; i++) 
		{ 
            for (j = 1; j<=n; j++) 
			{
                s3 = s3 + a[j][i];
            }
            if (s1 == s3)
            {
                set = 1;
            }
            else 
			{
                set = 0;
                break;
            }
        	s3=0;
        }
        if (set == 1)
        {
            printf("Given matrix is magic square");
        }
        else
        {
            printf("Given matrix is not magic square");
        }
    }
}
