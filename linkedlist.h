#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    char *key;
    int value;
    struct Node *tail;
};


struct Node *get_pair(struct Node *node, char *key);
struct Node *pair(char *key, int value, struct Node *tail);
void free_node(struct Node *node);

#endif
