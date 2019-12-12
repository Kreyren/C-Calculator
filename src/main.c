#include <stdio.h>

int main() {
    // Using float instead of double since it takes less space -> Experimenting if this is better then double
    float num1;
    float num2;
    char op; // Operator

    // Ask for user-input
    printf("%s\n","Enter first number: ");
    scanf("%f", &num1);

    printf("%s\n", "Enter an operator: ");
    scanf(" %c", &op);

    printf("%s\n","Enter Second number: ");
    scanf("%f", &num2);

    // Action
    if(op == '+') {
        printf("Result: %f\n", num1 + num2);
        return 0;

    } else if(op == '-') {
        printf("Result: %f\n", num1 - num2);
        return 0;

    } else if(op == '*' || op == 'x') {
        printf("Result: %f\n", num1 * num2);
        return 0;

    } else if (op == '/' || op == ':') {
        printf("Result: %f\n", num1 / num2);
        return 0;
    } else {
        printf("Unknown operator '%c' has been parsed\n", op);
        return 2; // Return 2 for syntax error

    }
}