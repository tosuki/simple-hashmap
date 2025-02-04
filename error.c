#include "./error.h"

#include <stdio.h>
#include <stdlib.h>

void exitWithMessage(char *message) {
    printf(message);
    exit(1);
}
