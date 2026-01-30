#include<stdio.h>
#include "array.h"

int main()
{
    int choice,pos,value,old,n=0,a[MAX]; 
    while(1)
    {
        printf("\n===MAIN ARRAY MENU===\n");
        printf("1. Insert\n");
        printf("2. Update\n");
        printf("3. Delete\n");
        printf("4. Traverse forward\n");
        printf("5. Traverse backward\n");
        printf("99. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                if(isFull(n))
                    printf("Array is full cannot insert.\n");
                else
                {
                    printf("\n");
                    pos=readPosition();
                    value=readValue();
                    if(!insert(a,&n,pos,value))
                        printf("Invalid position, try again.\n");
                    else
                        printf("%d is successfully inserted at position %d\n",value,pos);
                }
                break;
            case 2:
                if(isEmpty(n))
                    printf("Array is empty to update a value.\n");
                else
                {
                    printf("\n");
                    pos=readPosition();
                    value=readValue();
                    if(!update(a,n,pos,value,&old))
                        printf("Invalid position, try again.\n");
                    else
                        printf("%d at position %d is updated to %d.\n",old,pos,value);
                }
                break;
            case 3: 
                if(isEmpty(n))
                    printf("Array is empty to delete an element.\n");
                else
                {
                    printf("\n");
                    pos=readPosition();
                    if(!delete(a,&n,pos,&value))
                        printf("Invalid position, try again.\n");
                    else
                        printf("%d is successfully deleted at position %d\n",value,pos);
                }
                break;
            case 4:
                if(!forwardTraverse(a,n))
                    printf("Array is empty cannot traverse.\n");
                break;
            case 5: 
                if(!backwardTraverse(a,n))
                    printf("Array is empty cannot traverse.\n");
                break;
            case 99:
                printf("Exit Successfully from the program.\n"); 
                return 0;
            default: 
                printf("Invalid choice, try again.\n");
        }
    }
}