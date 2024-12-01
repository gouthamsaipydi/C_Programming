#include<stdio.h>
#include<string.h>

int main()

{
    char s[]="This is the way,";
    char d[]=" ,";

    char* position1 =strtok(s,d);
    char* position2 =strtok(NULL,d);
    char* position3 =strtok(NULL,d);
    char* position4 =strtok(NULL,d);
    char* position5=strtok(NULL,d);

    printf("%s\n",position1);
    printf("%s\n",position2);
    printf("%s\n",position3);
    printf("%s\n",position4);
    if (position5==NULL)
    {
    printf("End %s\n",position5);
    }
    return 0;
}