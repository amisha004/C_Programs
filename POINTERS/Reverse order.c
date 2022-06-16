/* Write a program using a pointer to read in an array of integers and print its element in reverse order. */

#include <stdio.h>
int main()
{
    int size,i,arr[20];
    int*ptr;
    ptr=&arr[0];
    printf("Enter the size of array: \n");
    scanf("%d",&size);
    printf("Enter %d integers into array : \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=&arr[size-1];
    printf("Elements of array in reverse order are: \n");
    for(i = size - 1;i>=0;i--)
    {
        printf("Element %d is: %d \n", i, *ptr);
        ptr--;
    }
}
