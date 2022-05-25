#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{

    // implementation of linked list
    struct node *head, *newnode, *temp;
    int choice = 1;
    size_t n;
    head = NULL;

    while (choice)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter the value of node you want to enter: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you wish to continue to add nodes (0, 1)");
        scanf("%d", &choice);
    }
    // traverse through the list created, print the data of node and return number of nodes
    n = node_count(head);
    printf("There are %d nodes in the list\n", n);

    return (0);
}