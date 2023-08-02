#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
 struct node * head=NULL;
 struct node *curr=NULL;

 void insert(int data){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=head;
    head=new;
 }
 void insertend(int data){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    struct node *linkedlist=head;
    while(linkedlist->next!=NULL){
        linkedlist=linkedlist->next;

    }
    linkedlist->next=new;
 }
 void insertpos(struct node *list, int data){
    struct node *new=(struct node*) malloc(sizeof(struct node));
    new->data=data;
    new->next=list->next;
    list->next=new;
 }
 void delete(){
    head=head->next;
 }
 void display(){
    struct node *display=head;
    printf("\n[");
    while(display!=NULL){
        printf("%d",display->data);
        display=display->next;
    }
    printf("]");
 }

void main(){
    insert(1);
    insert(2);
    insertend(3);
    insert(4);
    insert(5);
    printf("\n Linkedlist:");
    display();
    insertpos(head->next->next,10);
    delete();
    printf("after deletion");
    display();

    
}