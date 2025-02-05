#include <stdio.h>
#include <malloc.h>

#include "./linkedlist.h"
#include "./hashmap.h"
#include "./error.h"

int main() {
    struct Hashmap *hashmap = create_hashmap(5);

    hashmap_insert(hashmap, "apple", 5);
    hashmap_insert(hashmap, "abcde", 2);


    struct Node *apple = hashmap_get(hashmap, "apple");

    if (apple == NULL) {
        exitWithMessage("No apple in the hashmap\n");
    }

    printf("%s:%d\n", apple->key, apple->value);

    return 0;
}
