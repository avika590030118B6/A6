#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("The number is a perfect number.\n");
    else
        printf("The number is not a perfect number.\n");

    return 0;
}