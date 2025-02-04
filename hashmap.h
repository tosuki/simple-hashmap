#ifndef HASHMAP_H
#define HASHMAP_H

#include "./linkedlist.h"

struct Hashmap {
    struct Node **values;

    unsigned int capacity;
    unsigned int length;
};

struct Hashmap create_hashmap(int capacity, int length);

#endif
