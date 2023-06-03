#include<stdio.h>
int main()
{
    int a,b,sp=30;
    for ( a = 1; a <= 5; a++)
        {
        for ( b = 1; b <= sp; b++)
            printf(" ");
        for ( b = 1; b <= a; b++)
        {
            printf("* ");
        }
            printf("\n");
            sp--;
        }

    for ( a = 5; a >= 1; a--)
       {
       for ( b = 1; b <= sp; b++)
           printf(" ");
       for ( b = 1; b <= a; b++)
       {
           printf(" *");
       }
           printf("\n");
           sp++;

}

    














}