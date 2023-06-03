#include<stdio.h>
int main()
{

    int p,r,n,a;

    printf("enter a value of a: ");
    scanf("%d",&a);

    printf("enter a value of r: ");
    scanf("%d",&r);

    printf("enter a value of n: ");
    scanf("%d",&n);

    a=p*(1+(r/100)/n)-p;

    printf("%d",a);
    
    return 0;

}