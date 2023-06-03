#include<stdio.h>
int main()
{
    int i,j,n='A';
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (j%2==0)
                printf("%c",n);
            else
                printf("%c",n+32);    
            n++;
        }
        printf("\n");
    }
    





}