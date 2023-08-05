#include <stdio.h>
#include "header.h"
int main()
{
    struct Node* listHead = NULL;
    insert(&listHead, 1);
    insert(&listHead, 2);
    insert(&listHead, 3);
    insert(&listHead, 4);
    display(listHead);
    delete(&listHead, 3);
    display(listHead);
    return 0;
}