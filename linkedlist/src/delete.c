#include <stdio.h>
#include <stdlib.h>
#include"header.h"

void delete(struct Node** curr, int key)
{
    struct Node* temp = *curr;
    struct Node* prev = NULL;
    if (temp != NULL && key == temp->data) {
        *curr = temp->next;
        free(temp);
    } else {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Key not found. \n");
            return;
        }
        prev->next = temp->next;
        free(temp);
    }
}