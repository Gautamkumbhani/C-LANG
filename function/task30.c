
// no argivment no return
/*  1    1    1    1   1
    2    2    2    2   2
    3    3    3    3   3
    4    4    4    4   4
    5    5    5    5   5   */

    #include<stdio.h>
void gautam()
{

    int a,b;

    for ( a = 1; a <= 5; a++)
    {
        for( b = 1; b <= 5; b++)
        {
            printf("\t%d",a);
        }
            printf("\n",b);        
    }
    
}

int main()
{
    printf("\n");
    gautam();
    printf("\n\n");
}