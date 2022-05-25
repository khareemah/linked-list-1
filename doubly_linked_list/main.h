#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

size_t node_count(struct node *head);
void insert_at_beginning(struct node *head);
void insert_at_end(struct node *tail, struct node *head);
#endif