#ifndef _MAIN_H_
#define _MAIN_H_

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

size_t node_count(const struct node *head);

#endif