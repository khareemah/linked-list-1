#include <stdio.h>
#include "main.h"

int node_count(struct node *head)
{
    int counter = 0;
    struct node *temp;

    temp = head;
    if (head == NULL)
    {
        printf("Empty list");
        counter = 0;
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
            counter++;
        }
    }
    printf("length of node is %d", counter);
    return (counter);
}