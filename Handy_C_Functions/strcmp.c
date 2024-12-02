#include<stdio.h>
#include<string.h>

/*
strcmp return values

<0 if the 1st non-matching char has a lower ascii value in s1 than s2

0 if the strings are equal 

>0 if the 1st non-matching char has a higher ascii value in s1 than s2

*/


int main()
{
    /*int strcmp(const char* string1,const char* string2);*/
    char const*i;
    char source[50]="Hllo there";
    char destination[20]="Hello there";
    int ia=strcmp(source,destination);
    printf("%d\n",ia);
    //output: 1


    /*int strncmp(const char* string1,const char* string2,size_t n);*/
    int ib=strncmp(destination,source,1);

    printf("%d\n",ib);
    //output: 0

    return 0;
    
}