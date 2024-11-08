#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct Node
    {
        int data;
        struct Node *next;
    }Node;
    // creating nodes
    struct Node *first,*second,*third,*temp;
    first = (struct Node*)malloc(sizeof(Node));
    second = (struct Node*)malloc(sizeof(Node));
    third = (struct Node*)malloc(sizeof(Node));
    // assigning data
    first->data = 10;
    second->data = 20;
    third->data = 30;
    // linking nodes
    first->next=second;
    second->next=third;
    third->next=NULL;
    // printing node data
    temp = first;
    printf("Linked List : \n");
    while(temp)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}