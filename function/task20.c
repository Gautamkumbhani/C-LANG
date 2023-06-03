
// no argivment no return
// enter n print -n to n

#include<stdio.h>
void gautam()
{

    int n,a;

    printf("enter n: ");
    scanf("%d",&n);

    for ( a = -n; a <= n; a++)
    {
        printf("\n hello %d",a);
    }
    
}

int main()
{
    printf("......\n");
    gautam();
    printf("\n......\n");
}