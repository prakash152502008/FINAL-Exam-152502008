#include <ctype.h>
#include <string.h>
#include "utils.h"

int isNumber(const char *str) {
    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i]) && str[i] != '-') return 0;
    }
    return 1;
}

void trim(char *str) {
    int i = 0;
    while (str[i] == ' ') i++;
    memmove(str, str + i, strlen(str) - i + 1);

}

