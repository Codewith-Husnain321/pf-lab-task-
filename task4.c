#include <stdio.h>

int main()
{
    int rating, yearsOfService;

    printf("Enter performance rating: ");
    scanf("%d", &rating);

    printf("Enter years of service: ");
    scanf("%d", &yearsOfService);

    if (rating == 5 && yearsOfService >= 3)
    {
        printf("Excellent Bonus\n");
    }
    else if (rating == 4 && yearsOfService >= 2)
    {
        printf("Good Bonus\n");
    }
    else if (rating == 3 && yearsOfService >= 1)
    {
        printf("Basic Bonus\n");
    }
    else
    {
        printf("No Bonus\n");
    }

    return 0;
}