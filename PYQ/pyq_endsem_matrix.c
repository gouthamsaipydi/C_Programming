#include <stdio.h>
#include <stdlib.h>

// Function to multiply two matrices
int *matrix_multiply(int *ipMatIP1, int *ipMatIP2, int iRow1, int iCol1, int iRow2, int iCol2)
{
    // Check if multiplication is possible
    if (iCol1 != iRow2)
    {
        printf("Error: Matrix multiplication not possible. iCol1 must equal iRow2.\n");
        return NULL;
    }

    // Allocate memory for the result matrix
    int *result = (int *)malloc(iRow1 * iCol2 * sizeof(int));
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    // Perform matrix multiplication
    for (int i = 0; i < iRow1; i++)
    {
        for (int j = 0; j < iCol2; j++)
        {
            result[i * iCol2 + j] = 0; // Initialize the element
            for (int k = 0; k < iCol1; k++)
            {
                result[i * iCol2 + j] += ipMatIP1[i * iCol1 + k] * ipMatIP2[k * iCol2 + j];
            }
        }
    }

    return result;
}

int main()
{
    // Example input matrices
    int ipMatIP1[] = {1, 2, 3, 4, 5, 6};    // 2x3 matrix
    int ipMatIP2[] = {7, 8, 9, 10, 11, 12}; // 3x2 matrix

    // Dimensions of the matrices
    int iRow1 = 2, iCol1 = 3, iRow2 = 3, iCol2 = 2;

    // Call the multiplication function
    int *result = matrix_multiply(ipMatIP1, ipMatIP2, iRow1, iCol1, iRow2, iCol2);

    // If multiplication was successful, print the result
    if (result != NULL)
    {
        printf("Resultant Matrix:\n");
        for (int i = 0; i < iRow1; i++)
        {
            for (int j = 0; j < iCol2; j++)
            {
                printf("%d ", result[i * iCol2 + j]);
            }
            printf("\n");
        }

        // Free the allocated memory
        free(result);
    }

    return 0;
}
