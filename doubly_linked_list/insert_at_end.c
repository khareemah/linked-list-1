#include <stdio.h>
#include "main.h"

void insert_at_end(struct node *head, struct node *tail)
{
    struct node *newnode = malloc(sizeof(struct node));
    printf("Enter the value of node you want to insert at the end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        newnode->next = NULL;
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    node_count(head);
}