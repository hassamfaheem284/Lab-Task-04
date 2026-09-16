#include <stdio.h>

int main()
{
    int units;
    float bill, discount, finalBill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    if (units < 100)
    {
        discount = bill * 10 / 100;
        finalBill = bill - discount;
    }
    else
    {
        finalBill = bill;
    }

    printf("Final Bill = %.2f", finalBill);

    return 0;
}
