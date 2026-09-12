#include <stdio.h>

int main()
{
    float balance, withdrawalAmount;

    printf("Enter available balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawalAmount);

    if (withdrawalAmount > 0 && withdrawalAmount <= balance)
    {
        printf("Withdrawal Approved\n");
    }
    else
    {
        printf("Withdrawal Denied\n");
    }

    return 0;
}
