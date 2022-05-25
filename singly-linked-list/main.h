#ifndef _MAIN_H_
#define _MAIN_H_

struct node
{
    int data;
    struct node *next;
};

size_t node_count(struct node *head);
void add_node_begin(struct node *head);

#endif