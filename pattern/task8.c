#include<stdio.h>
int main()
{

    char ch='A';
    int a,b;

    for ( a = 1; a <= 5; a++)
    {

        for ( b = 1; b <= a; b++)
        {
            printf("\t%c",ch);
            ch+=1;
        }
        printf("\n");
    }

}