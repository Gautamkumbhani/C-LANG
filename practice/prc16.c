#include<stdio.h>
int main()
{

    int a;

    printf("enter a: ");
    scanf("%d",&a);

    if (a % 5 == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}