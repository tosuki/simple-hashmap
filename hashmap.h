#ifndef HASHMAP_H
#define HASHMAP_H

#include "./linkedlist.h"

struct Hashmap {
    struct Node **values;

    unsigned int capacity;
    unsigned int length;
};

struct Hashmap *create_hashmap(int capacity);
void free_hashmap(struct Hashmap *hashmap);

void hashmap_insert(struct Hashmap *hashmap, char *key, int value);
struct Node *hashmap_get(struct Hashmap *hashmap, char *key);

#endif
