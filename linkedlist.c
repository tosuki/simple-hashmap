#include "./linkedlist.h"
#include "./error.h"

#include <string.h>
#include <malloc.h>

struct Node *pair(char *key, int value, struct Node *tail) {
    struct Node *node = malloc(sizeof(struct Node));

    node->key = key;
    node->value = value;
    node->tail = tail;

    return node;
}

struct Node *get_pair(struct Node *node, char *key) {
    if (node == NULL) {
        exitWithMessage("Invalid linkedlist node, the pointer is NULL\n");
    }

    if (strcmp(node->key, key) == 0) {
        return node;
    }
    

    if (node->tail) {
        return get_pair(node->tail, key);
    }

    return NULL;
}

void free_node(struct Node *node) {
    if (node->tail) {
        free_node(node->tail);
    }

    free(node);
};

