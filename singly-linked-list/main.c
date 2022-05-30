#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    struct node *head;
    head = NULL;
    add_node_end(&head, 7);
    add_node_end(&head, 9);
    add_node_end(&head, 10);
    node_count(head);
    return (0);
}