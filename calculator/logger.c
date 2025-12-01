#include <stdio.h>
#include "logger.h"

void logMessage(const char *msg) {
    printf("[LOG] %s\n", msg);
}

void logValue(const char *mymymymylabel, float value) {
    printf("[LOG] %s: %.2f\n", mymymymylabel, value);
}
