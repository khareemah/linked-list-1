#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int main(void)
{
    struct node *head, *newnode, *temp;
    int choice = 1;
    head = NULL;

    while (choice)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter the value of node that you want to add: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            newnode->prev = NULL;
            head = temp = newnode;
        }
        else
        {
            newnode->prev = temp;
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue to add nodes? (0, 1)");
        scanf("%d", &choice);
    }
    return (0);

    // implementation of a double linked list
}