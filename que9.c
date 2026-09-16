#include <stdio.h>

int main()
{
    int choice, num, original, remainder;
    int reversed, sum, count, i, isPrime;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits of an integer\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &num);

                original = num;
                reversed = 0;

                while (num > 0)
                {
                    remainder = num % 10;
                    reversed = reversed * 10 + remainder;
                    num = num / 10;
                }

                if (original == reversed)
                    printf("Palindrome number\n");
                else
                    printf("Not a palindrome number\n");

                break;

            case 2:
                printf("Enter an integer: ");
                scanf("%d", &num);

                original = num;
                sum = 0;

                while (num > 0)
                {
                    remainder = num % 10;
                    sum = sum + (remainder * remainder * remainder);
                    num = num / 10;
                }

                if (sum == original)
                    printf("Armstrong number\n");
                else
                    printf("Not an Armstrong number\n");

                break;

            case 3:
                printf("Enter an integer: ");
                scanf("%d", &num);

                isPrime = 1;

                if (num < 2)
                    isPrime = 0;
                else
                {
                    for (i = 2; i < num; i++)
                    {
                        if (num % i == 0)
                        {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime == 1)
                    printf("Prime number\n");
                else
                    printf("Not a prime number\n");

                break;

            case 4:
                printf("Enter an integer: ");
                scanf("%d", &num);

                sum = 0;

                while (num > 0)
                {
                    remainder = num % 10;
                    sum = sum + remainder;
                    num = num / 10;
                }

                printf("Sum of digits = %d\n", sum);

                break;

            case 5:
                printf("Enter an integer: ");
                scanf("%d", &num);

                count = 0;

                if (num == 0)
                    count = 1;
                else
                {
                    while (num > 0)
                    {
                        count++;
                        num = num / 10;
                    }
                }

                printf("Number of digits = %d\n", count);

                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}