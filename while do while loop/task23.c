#include<stdio.h>
int main()
{

    int a=1,b,c=1;

    while(  a <= 5 )
    {
        b=1;
        while ( b <= 5 )
        {
            printf("\t%d",c);
            c++;
            b++;
        }
        printf("\n");
        a++;
    }

}    