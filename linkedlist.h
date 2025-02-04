#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    char *key;
    int value;
    struct Node *tail;
};


struct Node pair(char *key, int value);

#endif
