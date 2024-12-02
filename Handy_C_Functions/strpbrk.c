#include<stdio.h>
#include<string.h>

/*
char* strpbrk(const char* s1,const char* s2);

Return Value :
It returns a pointer to the character in s1 that 
matches one of the characters in s2, else returns NULL.

*/

int main()
{
    char s[]="ASDHHHJGHWEBFW674287432ADHD";
    char num[]="0123456789";

    char* r=strpbrk(s,num);
    printf("%s\n",r);

    //output: 674287432ADHD
    //Reasoning: It looks for the characters of s2 in s1 and returns 
    // the char pointer to the first matching character. 


    //practice

    //strpbrk()

    char s1[]="dasnfomakj123jiwe4342";
    char s2[]="0123456789";

    char* r2=strpbrk(s1,s2);
    printf("%s\n",r2);

    // output: dasnfomakj





    return 0;
}