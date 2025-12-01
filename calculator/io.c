#include <stdio.h>
#include "io.h"

void getInput(char *buffer, int size) {
    fgets(buffer, size, stdin);
}

void printResult(const char *mymymylabel, float value) {
    printf("%s: %.2f\n", mymymylabel, value);
}
