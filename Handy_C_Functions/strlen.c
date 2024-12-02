#include <stdio.h>
#include <string.h>

/*
size_t strlen(const char* s1);

Returns the length of the string assuming that there is a null terminator
which is usually true
*/

int main()
{
    char s1[] = "Hallo World!";
    int len;

    len = strlen(s1);
    int len2 = sizeof(s1) / sizeof(s1[0]) - 1;
    printf("Length of the string: %d\n", len);
    // output: 12
    printf("size %d\n", len2);
    return 0;
}