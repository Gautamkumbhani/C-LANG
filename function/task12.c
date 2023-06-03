
// no argivment with return
// c program to chek whether a person is eligible for voting or not?

#include<stdio.h>

int gautam()
{

    int age;

    printf("enter age: ");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("eligible for voting");
    }else
    {
        printf("not eligible for voting");
    }
    
    return age;

}

int main()
{
    printf(".......\n");
    gautam();
    printf("\n......\n");
    
}