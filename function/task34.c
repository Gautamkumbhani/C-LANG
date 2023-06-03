
// no argivment no return
/*  1   2   3   4   5
    6   7   8   9  10
    11 12  13  14  15
    16  17 18  19  20
    21  22 23  24  25   */

#include<stdio.h>
void gautam()
{

    int a,b,c=1;

    for ( a = 1; a <= 5; a++)
    {

        for ( b = 1; b <= 5; b++)
        {
            printf("\t%d",c);
            c+=1;
        }
        printf("\n");
    }

    

}    
int main()
    {
        printf("\n");
        gautam();
        printf("\n\n");
    }