#include<stdio.h>

struct example_struct{
        int il;
        float fk;
    };

    union example_union{
        char ca;
        char ib;
        float fc;
    };

int main()
{
    double num1=2.34f;

    printf("%d\n",sizeof(num1));

    union example_union u ={.ca='l'}; 

    printf("%c\n",u.ca);
    u.ib='z';
    printf("%c\n",u.ib);
    printf("%c\n",u.ca);

    printf("%d\n",sizeof(u));
    
}