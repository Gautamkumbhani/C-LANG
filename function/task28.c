
// no argivment no return
// 1 to 10 odd total

#include<stdio.h>
void gautam()
{

    int a,sum=0;

    for ( a = 1; a <= 10; a+=2)
    {
        sum += a;
    
    
    printf("\n number of total odd value  %d",sum);
    }
}

int main()
{
    printf(".....\n");
    gautam();
    printf("\n.....\n");
}