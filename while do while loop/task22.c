#include<stdio.h>
int main()
{

    int a=1,b,c=1;

    do
    {
        b=1;
        do
        {
            printf("\t%d",c);
            b++;
        }while(b<=5);
            printf("\n");
            c+=2;
            a++;        
    }while(a<=5);
    
}