#include "./linkedlist.h"

#include <malloc.h>

struct Node *pair(char *key, int value, struct Node *tail) {
    struct Node *node = malloc(sizeof(struct Node));

    node->key = key;
    node->value = value;
    node->tail = tail;

    return node;
}

void free_node(struct Node *node) {
    if (node->tail) {
        free_node(node->tail);
    }

    free(node);
};

