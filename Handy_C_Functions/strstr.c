#include<stdio.h>
#include<string.h>

/*
char* strstr(const char* string1,const char* string2);

This function takes two strings as arguments and finds the first occurance of the 
string 2 in string 1 and returns the character the pointer.
*/


int main()
{
    char source[]="hell1234( )op";
    char s[]="( )";

    char * str=strstr(source,s);
    if (str==NULL){
        printf("Not found\n");}
    else{
        printf("Found: %s\n",str);
        //output: ( )op
    }

}