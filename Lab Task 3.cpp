#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
        printf("Both numbers are equal.");
    else if (num1 > num2)
        printf("First number is greater.");
    else
        printf("Second number is greater.");

    return 0;
}
