
// no argivment no return
/*   1 
     2    2
     3    3    3    
     4    4    4    4 
     5    5    5    5    5  */

#include<stdio.h>
void pat()
{

    int a,b;

    for ( a = 1; a <= 5; a++)
    {
        for( b = 1; b <= a; b++)
        {
            printf("\t%d",a);
        }
            printf("\n",b);        
    }
    
}
int main()
{

    printf("\n");
    pat();
    printf("..");
}