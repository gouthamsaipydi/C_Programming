#include <stdio.h>

#define HI(x) ((char *)(&x + 1) - (char *)(&x))
#define HV(x) ((void *)(&x + 1) - (void *)(&x))

int main()
{

    int x = 20240;
    // int *ptr = &x;

    // printf("Size of a int pointer: %zu\n", sizeof(ptr));

    // void *vptr = (void *)ptr;
    // printf("Size of void pointer: %zu\n", sizeof(vptr));

    printf("char pointer %d\n", HI(x));
    // printf("void pointer %d\n", HV(x));
}