#include <stdio.h>
#include <string.h>
int recursive(int x)
{
    /*base case is when the numbers are strictly less than 10*/
    int k = 0;
    if (x <= 9)
    {
        return x;
    }
    /*Iterative step*/
    while (x > 0)
    {
        k += x % 10;
        x = (int)x / 10;
    }
    return recursive(k);
}

int foo(char *d)
{
    int sum = 0;
    for (int i = 0; i < strlen(d); i++)
    {
        if ((d[i] == 'A') || (d[i] == 'I') || (d[i] == 'J') || (d[i] == 'Q') || (d[i] == 'Y'))
        {
            sum += 1;
            continue;
        }
        if ((d[i] == 'B') || (d[i] == 'K') || (d[i] == 'R'))
        {
            sum += 2;
            continue;
        }
        if ((d[i] == 'C') || (d[i] == 'G') || (d[i] == 'L') || (d[i] == 'S'))
        {
            sum += 3;
            continue;
        }
        if ((d[i] == 'D') || (d[i] == 'M') || (d[i] == 'T'))
        {
            sum += 4;
            continue;
        }
        if ((d[i] == 'E') || (d[i] == 'H') || (d[i] == 'N') || (d[i] == 'X'))
        {
            sum += 5;
            continue;
        }
        if ((d[i] == 'U') || (d[i] == 'V') || (d[i] == 'W'))
        {
            sum += 6;
            continue;
        }
        if ((d[i] == 'O') || (d[i] == 'Z'))
        {
            sum += 7;
            continue;
        }
        if ((d[i] == 'F') || (d[i] == 'P'))
        {
            sum += 8;
            continue;
        }
    }
    if (sum % 9 == 0)
    {
        return 9;
    }
    else
    {
        return sum % 9;
    }
    // return recursive(sum);
}

int main()
{
    char d[] = "DENNIS RITCHIE";
    int sum = foo(d);
    printf("The sum is %d\n", sum);
}