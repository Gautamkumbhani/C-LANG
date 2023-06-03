#include<stdio.h>
int main()
{
    int i,j,n='A';

    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%c",n+1-j);
        }
        n++;
        printf("\n");
    }
    n='A';

    for ( i = 3; i >= 1; i--)
    {
        for ( j = i; j >= 1; j--)
        {
            printf("%c",n-1+j);
        }
       
        printf("\n");
    }
    






}