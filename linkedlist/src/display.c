#include <stdio.h>

#include"header.h"

 

void display(struct Node* givenHead)
{
    struct Node* temp = givenHead;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}