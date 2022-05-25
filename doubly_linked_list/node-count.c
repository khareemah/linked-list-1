#include <stdio.h>
#include "main.h"

/**
 * node_count - a function that lists the value if node and returns number of nodes
 */
size_t node_count(const struct node *head)
{
    int counter = 0;
    const struct node *temp;

    if (head == NULL)
    {
        printf("This list is empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
            counter++;
        }
        printf("There are %d nodes in this doubly linked list\n", counter);

        return counter;
    }
}