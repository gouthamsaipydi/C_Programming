#include<stdio.h>
#include<string.h>

/*
Use: It basically copies from one location to another
and the strncpy does the same but copies only n characters
from the source to destination
*/


int main()
{

    /* char *strcpy(char *destination, const char *source); */
    char sou[4]="red";
    char des[40];

    strcpy(des,sou);
    printf("%s\n",des);

    //output: red 

    /*char *strncpy(char *destination, const char *source, size_t num);*/
    char sou2[50]="hello world";
    char des2[4];

    strncpy(des2,sou2,2);
    printf("%s\n",des2);

    //output: he   
    //comments: It should throw a null termination error but it isnt because of the 
    // hybrid complier i reckon.

    return 0;
}