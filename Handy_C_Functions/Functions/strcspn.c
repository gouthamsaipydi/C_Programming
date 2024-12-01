#include <stdio.h>
#include <string.h>

/*
Exclusice access

size_t strspn(const char *str1, const char *str2)
str1 : string to be scanned.
str2 : string containing the
characters to match.
Return Value : This function
returns the number of characters
in the initial segment of str1
which consist only of characters
from str2.
*/

/*
size_t strcspn(const char *str1, const char *str2)
str1 : string to be scanned.
str2 : string containing the
characters to match.
Return Value : This function returns the number of characters before
the 1st occurrence of character present in both the string.
*/

int main()
{
    char s1[] = "4325345ADDSFHU432G56";
    char num[] = "0123456789";
    char s2[] = "asdas2";
    int init1 = strspn(s1, num);
    printf("init1: %zu\n", init1);
    // output: 7

    // Reasoning: There are 7 characters in the target string from the argument
    // string before the first differing character.

    char *remaining = s1 + init1;
    printf("%s\n", remaining);
    // output: ADDSFHU432G56

    int init2 = strcspn(s2, num);
    printf("init2: %d\n", init2);
    // Here we are using the strcspn(complementary)
    //  output: 5
    // Reasoning: It returns the number of differing charcters before the first
    // matching character and it is 5 in this case.

    //
    char a1[] = "l46458helfrew13124";
    char a2[] = "56789013124";

    int a3 = strspn(a1, a2);
    printf("%d\n", a3);

    int a4 = strcspn(a1, a2);
    printf("%d\n", a4);

    return 0;
}