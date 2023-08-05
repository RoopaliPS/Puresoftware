#include <stdlib.h>
#include"header.h"

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node** curr, int data)
{
    struct Node* newNode = createNode(data);
    newNode->next = *curr;
    *curr = newNode;
}