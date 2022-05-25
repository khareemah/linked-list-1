#include <stdio.h>
#include "main.h"

void insert_at_beginning(struct node *head)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("Enter the value of node you want to insert:");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    if (head == NULL)
    {
        newnode->next = NULL;
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }

    node_count(head);
}