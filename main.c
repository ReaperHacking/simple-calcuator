#include <stdio.h>
#include <stdlib.h>

void op_function(double num1, double num2, char op) {
    if (op == '+') {
        printf("%lf", num1 + num2);
    } else if (op == '-') {
        printf("%lf", num1 - num2);
    } else if (op == '*') {
        printf("%lf", num1 * num2);
    } else if (op == '/') {
        printf("%lf", num1 / num2);
    }
    else{
        printf("INVALID OPERATOR!");
    }
}

int main() {
    double num1, num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    op_function(num1, num2, op);

    return 0;
}


