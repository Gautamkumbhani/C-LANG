#include<stdio.h>
int main()
{

    int c,d,g,h,l;

    printf("enter a value of c: ");
    scanf("%d",&c);

    printf("enter a value of d: ");
    scanf("%d",&d);

    printf("enter a value of g: ");
    scanf("%d",&g);

    printf("enter a value of h: ");
    scanf("%d",&h);

    l = (c+d) * (g+h);

    printf("%d",l);

    return 0;

}