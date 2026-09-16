#include <stdio.h>

int main()
{
    char grade;

    printf("Enter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade)
    {	
        case 'A':
            printf("Very Good");
            break;

        case 'B':
            printf("Good");
            break;

        case 'C':
            printf("Work Hard");
            break;

        case 'D':
            printf("Work Hard");
            break;

        case 'F':
            printf("Fail");
            break;

        default:
            printf("Invalid grade.");
    }

    return 0;
}
