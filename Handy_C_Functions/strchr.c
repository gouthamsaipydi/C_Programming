#include <stdio.h>
#include <string.h>

int main()
{
    /* char* strchr(char* string,int search) */

    /* char* strrchr(char* string,int search) */

    // Basically what the function is doing is that it finds the character or
    //  integer in the string and returns the character pointer from
    //  character onwards.

    // strchr searches the string left to right and strrchr does
    // the same thing in reverse(i.e., from right to left)

    int ia;
    char s1[] = "hat there";
    char *s2 = strchr(s1, 't');
    char *s3 = strrchr(s1, 't');

    printf("strchr output: %s\n", s2);
    printf("%d\n", s2 - s1);
    // output: t there

    printf("strrchr output: %s\n", s3);
    printf("%d\n", s3 - s1);

    // output: there

    return 0;
}