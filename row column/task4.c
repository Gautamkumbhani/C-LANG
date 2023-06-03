#include<stdio.h>
int main()
{

    char a,b;

    for ( a = 'A'; a <= 'E'; a++)
    {
        for( b = 'A'; b <= 'E'; b++)
        {
            printf("\t%c",a);
        }
            printf("\n",b);        
    }
    
}