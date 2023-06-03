
// no argivment no return
// 1 to 10 even total

#include<stdio.h>
void gautam()
{

    int a,sum=0;

    for ( a = 2; a <= 10; a+=2)
    {
        sum += a;
    
    
    printf("\n number of total even value  %d",sum);
    }
}

int main()
{
    printf(".....\n");
    gautam();
    printf("\n......\n");
}