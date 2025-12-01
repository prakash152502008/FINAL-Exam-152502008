#include <stdio.h>
#include <stdlib.h>
#include "logger.h"

#include "common.h"
#include "utils.h"
#include "math_ops.h"
#include "io.h"
#include "config.h"


int main() 
{
    AppConfig config;
    loadConfig(&config);

    printf("%s v%s\n\n", APP_NAME, VERSION);

    char input1[50], input2[50];
    printf("Enter first number: ");
    getInput(input1, 50);
    printf("Enter second number: ");
    getInput(input2, 50);

    trim(input1);
    trim(input2);

    if (!isNumber(input1) || !isNumber(input2)) {
        printf("Invalid input!\n");
        return 1;
    }

    int a = atoi(input1);
    int b = atoi(input2);

    float result = add(a, b);
    printResult("Addition", result);
    if (config.enableLogging) logValue("Addition", result);

    result = subtract(a, b);
    printResult("Subtraction", result);

    result = multiply(a, b);
    printResult("Multiplication", result);

    result = divide(a, b);
    printResult("Division", result);

    return 0;
}
