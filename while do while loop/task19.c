#include<stdio.h>
int main()
{

    int a=1,b;

    while(a <= 5)
    {
        b=1;
        while(b <= 5)
        {
            printf("\t%d",b);
            b++;
        }
            printf("\n",a);
            a++;        
    }
    
}