
// no argivment no return
//  print 1 to 50 and print 50 to 1

#include<stdio.h>
void mul()
{

    int a;
    for ( a = 1; a <= 10; a++)
    {
        printf("\n hello %d",a);
    }
    for ( a = 11; a <= 20; a++)
    {
        printf("\n\t hello %d",a);
    }
    for ( a = 21; a <= 30; a++)
    {
        printf("\n\t\t hello %d",a);
    }
    for ( a = 31; a <= 40; a++)
    {
        printf("\n\t\t\t hello %d",a);
    }
    for ( a = 41; a <= 50; a++)
    {
        printf("\n\t\t\t\t hello %d",a);
    }

        printf("\n\n                                                                              ");

    for ( a = 50; a >= 41; a--)
    {
        printf("\n\t\t\t\t hello %d",a);
    }

	for ( a = 40; a >= 31; a--)
    {
        printf("\n\t\t\t hello %d",a);
    }
    for ( a = 30; a >= 21; a--)
    {
        printf("\n\t\t hello %d",a);
    }
    for ( a = 20; a >= 11; a--)
    {
        printf("\n\t hello %d",a);
    }
    for ( a = 10; a >= 1; a--)
    {
        printf("\n hello %d",a);
    }

}

int main()
{
    printf("........\n");
    mul();
    printf("\n......\n");
}