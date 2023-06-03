#include<stdio.h>
int main()
{
        int a,b,c=1,sp=15;

    for ( a = 1; a <= 5; a++)
    {
        for ( b = 0; b < sp; b++)
            printf(" ");
        for ( b = 5; b >= a; b--)
        {
            printf("\t%d",c);
            c+=1;
        }
            sp++;
            printf("\n",b);
            
            
    }
    return 0;
}