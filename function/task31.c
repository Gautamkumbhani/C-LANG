
// no argivment no return
/*  1   2   3   4   5
    1   2   3   4   5  
    1   2   3   4   5
    1   2   3   4   5
    1   2   3   4   5   */

#include<stdio.h>
void gautam()
{

    int a,b;

    for ( a = 1; a <= 5; a++)
    {
        for( b = 1; b <= 5; b++)
        {
            printf("\t%d",b);
        }
            printf("\n",a);        
    }
    
} 

int main()
{
    printf("\n");
    gautam();
    printf("\n\n");
}