#include<stdio.h>
int main()
{
        int a,b,c=1;

    for ( a = 1; a <= 5; a++)
    {
        for ( b = 5; b >= a; b--)
        {
            printf("\t%d",c);
            c+=1;
        }
            printf("\n\t",b);
        
            
    }
    return 0;
}