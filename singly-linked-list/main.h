#ifndef _MAIN_H_
#define _MAIN_H_

struct node
{
    int data;
    struct node *next;
};

struct node *add_node_end(struct node **head, int x);
int node_count(struct node *head);

#endif