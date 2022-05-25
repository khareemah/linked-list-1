#include <stdio.h>
#include "main.h"

/**
 * main - implements a double linked list
 */
int main(void)
{
    int choice = 1;
    size_t number_of_nodes;
    struct node *head, *newnode, *temp;

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
    number_of_nodes = node_count(head);
    insert_at_beginning(head);

    return (0);
}