#include <stdio.h>
#include<string.h>
/* int sprintf(char* buffer,const char* string,...);
It returns the total number of characters written excluding the null character,in case of a failure 
a negative number is returned 

It is similar to the printf function which is used to print the string on the console


*/

int main()
{
    float a =-14.02;
    char cl[30];
    int k=sprintf(cl, "%lf", a);
    
    printf("Return value from sprintf: %d\n",k);
    printf("Length of the string %d\n",strlen(cl));
    printf("String output: %c\n", cl[2]);
}