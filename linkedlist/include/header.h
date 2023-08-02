struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int data);
void insert(struct Node** curr, int data);
void display(struct Node* givenHead);
void delete(struct Node** curr, int key);