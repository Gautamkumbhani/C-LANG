#include<stdio.h>
int main()
{

    int a=1,b,c=2;

    while( a <= 5 )
    {
        b=1;
        while( b <= 5 )
        {
            printf("\t%d",c);
            b++;
        }
            printf("\n");
            c+=2;
            a++;        
    }
    
}