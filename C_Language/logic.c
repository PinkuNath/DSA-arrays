#include "array.h"

//Function to check if the array is full
int isFull(int n)
{
    return n==MAX;
}

//Function to check if the array is empty
int isEmpty(int n)
{
    return n==0;
}

//Function to insert value at a given positon
int insert(int a[],int *n, int pos, int value)
{
    if(pos<0 || pos>*n)
        return 0; 
    //For Last Position
    if(pos==*n)
    {
        a[pos]=value;
        (*n)++;
        return 1;
    }
    //For any other position
    for(int i=*n;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=value;
    (*n)++;
    return 1;
}

//Function to update a value at any given position
int update(int a[], int n, int pos, int value, int *old)
{
    if(pos<0 || pos>=n)
        return 0; 
    *old=a[pos];
    a[pos]=value;
    return 1;
}

//Function to delete an element from a given position
int delete(int a[], int *n, int pos, int *value)
{
    if(pos<0 || pos>=*n)
        return 0; 
    //storing data to be deleted.
    *value=a[pos];
    //For last Position
    if(pos==(*n)-1)
    {
        (*n)--;
        return 1;
    }
    //For any other position
    for(int i=pos;i<(*n)-1;i++)
        a[i]=a[i+1];
    (*n)--;
    return 1;
}