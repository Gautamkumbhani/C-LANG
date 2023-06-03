
// no argivment no return
/* 11   12   13   14   15
   21   22   23   24   25
   31   32   33   34   35
   41   42   43   44   45
   51   52   53   54   55   */

#include<stdio.h>
void gautam()
{

    int a,b,c=11;

    for ( a = 1; a <= 5; a++)
    {

        for ( b = 1; b <= 5; b++)
        {
            printf("\t%d",c++);
            
        }
        c+=5;
        printf("\n");
    }

}

int main()
{
    printf("\n");
    gautam();
    printf("\n\n");

}