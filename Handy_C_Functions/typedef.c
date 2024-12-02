#include<stdio.h>

/*Defining symbolic constants to improve readability*/
/*To avoid magic numbers aka to improve readability*/

#define high 200

/*Using a typedef we can create new data type names */
typedef int integer;

int main()
{
    integer r=98;
    printf("%d\n",r);
}
