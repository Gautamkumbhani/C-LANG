#include<stdio.h>
int main()
{

    int a,sum=0;

    for ( a = 1; a <= 10; a++)
    {
        sum += a;
    
    
    printf("\n number of total  value is   %d",sum);
    printf("\n number of total even value  %d",sum++);
    printf("\n number of total odd value   %d",++sum);
    }
}