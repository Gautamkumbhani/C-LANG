#include<stdio.h>
int main()
{

    int a,b,c,s;

    printf("enter a value of a: ");
    scanf("%d",&a);

    printf("enter a value of b: ");
    scanf("%d",&b);

    printf("enter a value of c: ");
    scanf("%d",&c);

    s=((4*a+c)-2*a+b)/100;

    printf("%d",s);

    return 0;

}