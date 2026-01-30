#include<stdio.h>
#include "array.h"

//Function to traverse the array in the forward direction
int forwardTraverse(int a[], int n)
{
    if(isEmpty(n))
        return 0;
    printf("\nCurrent array in forward direction is:\n");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
    return 1;
}

//Function to traverse the array in the backward direction
int backwardTraverse(int a[], int n)
{
    if(isEmpty(n))
        return 0;
    printf("\nCurrent array in backward direction is:\n");
    for(int i=n-1;i>=0;i--)
        printf("%d\t",a[i]);
    printf("\n");
    return 1;
}