#include<stdio.h>
#include<string.h>

/*Brief Description about the function
char* strcat(char* destination,const char* source);
It will append the string pointed to by source to the end of the string
pointed to by the dest.*/
/*
Similarly, the strncat will append only n characters of the source to the destination

*/    
    

int main()
{
    /*
    char* strcat(char* destination,const char* source);
    */
    char source[50]="Los Alamos";
    char destination[40]="Atom B-";

    strcat(destination,source);
    printf("%s\n",destination);

    //output: Atom B-Los Alamos

    /*char* strncat(char* destination, const char * source, size_t n);*/
    char source2[50]="Las";
    char destination2[5];

    strncat(destination2,source2,2);
    printf("%s\n",destination2);

    // output: La


    return 0;
}