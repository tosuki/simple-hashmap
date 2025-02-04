#include <stdio.h>
#include "./linkedlist.h"

int main() {
    struct Node *node = pair("hello", 2, pair("sla", 3, NULL));

    printf("The value of the node is %d\n", node->value);

    free_node(node);

    return 0;
}
