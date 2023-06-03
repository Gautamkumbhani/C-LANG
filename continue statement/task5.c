#include<stdio.h>
int main()
{

    int n,a;

    printf("enter n: ");
    scanf("%d",&n);

    for ( a = -n; a <= n; a++)
    {
        printf("\n hello %d",a);
    }
    
    return 0;



}