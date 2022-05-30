#include <stdio.h>
#include <stdlib.h>
#include "main.h"

struct node *add_node_end(struct node **head, int x)
{
    struct node *newnode, *temp;
    newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
        return NULL;

    newnode->data = x;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    return temp;
}