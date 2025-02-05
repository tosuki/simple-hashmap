#include "./error.h"
#include "./linkedlist.h"
#include "./hashmap.h"

#include <stdio.h>
#include <complex.h>
#include <malloc.h>
#include <string.h>

struct Hashmap *create_hashmap(int capacity) {
    struct Hashmap *hashmap = malloc(sizeof(hashmap));
    
    hashmap->values = calloc(capacity, sizeof(struct Node*));
    
    if (hashmap->values == NULL) {
        exitWithMessage("Failed to allocate memory to the hashmap");
    }

    hashmap->capacity = capacity;
    hashmap->length = 0;

    return hashmap;
};

void free_hashmap(struct Hashmap *hashmap) {
    free(hashmap);
}

//TODO: Change this hash function to avoid colissions as much as possible
unsigned long get_index_from_key(char *key, unsigned int capacity) {
    unsigned long len = strlen(key);

    if (capacity < len) {
        return len/2;
    }

    return len;
}


void hashmap_insert(struct Hashmap *hashmap, char *key, int value) {
    unsigned long index = get_index_from_key(key, hashmap->capacity);

    if (hashmap->values[index] == NULL) {
        hashmap->values[index] = pair(key, value, NULL);
        return;
    }

    hashmap->values[index] = pair(key, value, hashmap->values[index]);
}

struct Node *hashmap_get(struct Hashmap *hashmap, char* key) {
    unsigned long index = get_index_from_key(key, hashmap->capacity);

    if (hashmap->values[index] == NULL) {
        return NULL;
    }
    
    return get_pair(hashmap->values[index], key);
}
