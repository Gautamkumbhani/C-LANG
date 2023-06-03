#include<stdio.h>
int main()
{

    int i=5,j,sp=30;

    x:
    if (i>=1)
    {
        j=1;
        z:
        if(j>=sp)
        {
            printf(" ");
            j++;
            goto z;
        }
        y:
        if(j<=i)
        {
            printf("*   ");
            j++;
            goto y;
        }
        printf("\n");
        i--;
        goto x;
    }
    
    return 0;

}