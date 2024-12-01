#include <stdio.h>

int hcf(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    if (y == 0 || (x == y))
    {
        return x;
    }
    if (x < y)
    {
        return hcf(x, y % x);
    }
    if (x > y)
    {
        return hcf(y, x % y);
    }
}

int main()
{
    int x, y, z;
    FILE *file = fopen("HCFLCM.out", "w");
    if (file == NULL)
    {
        printf("Error opening the file\n");
        return 0;
    }

    int d;
    // taking the inputs from the user
    do
    {
        printf("Enter the numbers\n");
        d = scanf(" %d %d %d", &x, &y, &z);
        if (d == 3)
        {
            break;
        }
        printf("Invalid Input. Try again\n");
        while (getchar() != '\n')
        {
        }

    }

    while (d != 3);

    fprintf(file, "HCF(%d,%d,%d)=%d\n", x, y, z, hcf(x, hcf(y, z)));
    fprintf(file, "LCM(%d,%d,%d)=%d", x, y, z, ((x * y * z) * hcf(x, hcf(y, z))) / ((hcf(x, y) * hcf(y, z) * hcf(z, x))));
}