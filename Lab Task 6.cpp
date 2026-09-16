#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            result = num1 / num2;
            printf("Result = %.2f", result);
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}
