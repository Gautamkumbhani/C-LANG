#include<stdio.h>
int main()
{

    char ch='A';
    int a=1,b;

    do 
    {
        b=1;
        do
        {
            printf("\t%c",ch);
            ch++;;
            b++;
        }while(b<=5);
        printf("\n");
        a++;
    }while(a<=5);

}