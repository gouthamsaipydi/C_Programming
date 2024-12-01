#include <stdio.h>
#include <math.h>

int main()
{
    int a, d;
    printf("Enter the number you want to check: ");

    // Validate input
    do
    {
        d = scanf(" %d", &a);
        if (d == 1)
        {
            break;
        }
        printf("Enter a valid integer: ");
        while (getchar() != '\n')
        {
            // Clear input buffer
        }
    } while (d != 1);

    // Calculate number of digits
    int original = a, sum = 0, n = 0;
    while (original > 0)
    {
        n++;
        original /= 10;
    }

    // Reset original value
    original = a;

    // Compute Armstrong sum
    while (original > 0)
    {
        int digit = original % 10;
        sum += pow(digit, n);
        original /= 10;
    }

    // Check Armstrong condition
    if (sum == a)
    {
        printf("The number %d is an Armstrong number.\n", a);
    }
    else
    {
        printf("The number %d is not an Armstrong number.\n", a);
    }

    return 0;
}
