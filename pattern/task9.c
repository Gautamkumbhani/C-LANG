#include<stdio.h>
int main()
{

    int a,b,c=11;

    for ( a = 1; a <= 5; a++)
    {

        for ( b = 1; b <= a; b++)
        {
            printf("\t%d",c++);
            
        }
        c+=5;
        printf("\n");
    }

}    