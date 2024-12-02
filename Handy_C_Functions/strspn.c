#include<stdio.h>
#include<string.h>

/*
size_t strspn(const char *str1, const char *str2)
str1 : string to be scanned.
str2 : string containing the characters to match.

Return Value : This function
returns the number of characters
in the initial segment of str1 
which consist only of characters 
from str2.
*/

int main()
{
    //Note that 
    char s1[]="123431543ierwg5fgn";
    char nums[]="1234567890";

    int position=strspn(s1,nums);
    printf("%d\n",position);

    //using this function ouput we can truncate the given string 
    char *str=s1+position;
    printf("%s\n",str);

    //prac

    char a[]="llohe there";
    char b[]="lo";

    //what does the function do?
    //It returns the number of characters of s2 found in s1 before the first differing character   

    char c[]="1234mfsdf3423";
    char d[]="098765432134";

    printf("%d\n",strspn(c,d));
    //the above logic works such that string c will be searched for elements in d and the number of common elements will be returned

    //now the function strcspn

    char e[]="34242jkdslkfsd8415f";
    char f[]="qwertyuiopasdfghjklzxcvbnm";

    //what this function does is that it will return the number of elements in string 1 which are different from string 2 before the first common character in both
    //of them 
    int l=strcspn(e,f);
    printf("%d\n",l);


    return 0;
}