#include<stdio.h>
int main()
{
    int i,j;
    char a='A';
    for ( i = 1; i <= 4; i++)
    {
        for ( j = i; j < 4; j++)
        {
            printf("  ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf(" %c",a);
            a+=1;

        }
        printf("\n");
        a='A';

}
    for ( i = 3; i >= 1; i--)
    {
        for ( j = i; j < 4; j++)
        {
            printf("  ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf(" %c",a);
            a+=1;
        }
        printf("\n");
        a='A';






}
}