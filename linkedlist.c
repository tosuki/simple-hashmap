#include "./linkedlist.h"

#include <malloc.h>

struct Node pair(char *key, int value) {
    struct Node node;

    node.key = key;
    node.value = value;

    return node;
}
