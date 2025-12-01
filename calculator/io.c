#include <stdio.h>
#include "io.h"

void getInput(char *buffer, int size) {
    fgets(buffer, size, stdin);
}

void printResult(const char *mymymymylabel, float value) {
    printf("%s: %.2f\n", mymymymylabel, value);
}
