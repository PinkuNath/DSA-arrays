#ifndef ARRAY_H
#define ARRAY_H 
#define MAX 100

//Input Function
int readPosition();
int readValue();

//logic Functions
int isFull(int);
int isEmpty(int);
int insert(int[], int*, int, int);
int update(int[], int, int, int, int*);
int delete(int[], int*, int, int*);

//Display Functions
int forwardTraverse(int a[],int n);
int backwardTraverse(int a[],int n);

#endif