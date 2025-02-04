#include "./error.h"
#include "./linkedlist.h"
#include "./hashmap.h"

#include <malloc.h>

struct Hashmap create_hashmap(int capacity, int length) {
    struct Hashmap hashmap;
    
    hashmap.values = malloc(sizeof(struct Node));
    
    if (hashmap.values == NULL) {
        exitWithMessage("Failed to allocate memory to the hashmap");
    }

    hashmap.capacity = capacity;
    hashmap.length = length;

    return hashmap;
};
