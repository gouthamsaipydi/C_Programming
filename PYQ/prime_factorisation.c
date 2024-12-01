#include <stdio.h>
#include <stdlib.h>
/* Program to print the prime factorization of a number in the file*/
void print_factorisation(int a)
{
    char filename[50];
    sprintf(filename, "%d.out", a);
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening the file");
        return;
    }
    if (a % 2 == 0)
    {
        while (a % 2 == 0)
        {
            fprintf(file, "2\n");
            a = a / 2;
        }
    }
    for (int i = 3; i < a; i += 2)
    {
        while (a % i == 0)
        {
            fprintf(file, "%d\n", i);
            a = a / i;
        }
    }
    if (a > 1)
    {
        fprintf(file, "%d\n", a);
    }
}

int main()
{
    print_factorisation(148);
    return 0;
}