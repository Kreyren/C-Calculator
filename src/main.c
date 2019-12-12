#include <stdio.h>

/*
    FIXME: Sanitize for character input
*/


int main() {
    float num1;
    float num2;

    printf("%s\n","Enter first number: ");
    scanf("%f", &num1);

    printf("%s\n","Enter Second number: ");
    scanf("%f", &num2);

    printf("Result: %f\n", num1 + num2);

    return 0;
}