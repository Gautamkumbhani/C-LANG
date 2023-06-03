#include<stdio.h>
int main()
{

    float income,tax;

    printf("enter income: ");
    scanf("%f",&income);

    if (income <= 2500)
    {
        tax = 0;
    }
    else if ((income > 2500) && (income <= 5000))
    {
        tax = (income - 2500) * 0.1;
    }
    else if ((income > 5000) && (income <= 10000))
    {
        tax = (income - 5000) * 0.2;
    }
    else
    {
        tax = (income - 10000) * 0.3;
    }

    printf("your income is : %.2f\n",income);
    printf("your tax is : %.2f",tax);

    return 0;
}