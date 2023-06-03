#include<stdio.h>

int main()
{
    float salary,total;

        printf("enter salary: ");
        scanf("%f",&salary);


    if (salary< 5000)
    {
        total=salary+(salary*0.08)+(salary*0.20);
    }
    else if (5000 <= salary < 10000)
    {
        total=salary+(salary*0.12)+(salary*0.30);
    }
    else if (10000 <= salary < 15000)
    {
        total=salary+(salary*0.15)+(salary*0.40);
    }
    else
    {
        total=salary+(salary*0.20)+(salary*0.50);

    }
    
        printf("total salary is %f",total);

        return 0;
}