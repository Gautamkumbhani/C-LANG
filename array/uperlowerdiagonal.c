#include<stdio.h>
int main()
{
    int a[5][5],dia=0,u=0,l=0;
    int i,j;



    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter a[%d][%d]: ");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" %d",a[i][j]);
            if (i==j)
                dia = dia + a[i][j];          
            else if(i<j)
                u = u + a[i][j];
            else
                l = l + a[i][j];
        }
        printf("\n");
    }    
        printf("diagonal is: %d",dia);
        printf("\nupper is: %d",u);
        printf("\nlower is: %d",l);

    
    






}