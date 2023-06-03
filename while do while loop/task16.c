#include<stdio.h>
int main()
{

    int a=1,sum=0;

    do
    {
        sum += a;
    
    
    printf("\n number of total  value is   %d",sum);
    printf("\n number of total even value  %d",sum++);
    printf("\n number of total odd value   %d",++sum);
    a++;
    }while( a <= 10);
}