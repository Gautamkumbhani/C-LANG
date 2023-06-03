#include<stdio.h>
int main()
{

    int marks,total=100;
    float percentage;
    char grade;

    printf("enter the marks obtained(out of 100): ");
    scanf("%d",&marks);
    
    percentage= (float) marks/total*100;

    if (marks > 75)
    {
        grade= 'A';
    }
    else if (marks > 60)
    {
        grade= 'B';
    }
    else if (marks > 45)
    {
        grade= 'C';
    }
    else if (marks > 35)
    {
        grade= 'D';
    }
    else
    {
        grade= 'F';
    }

    printf("total marks : %d\n",total);
    printf("marks obtained : %d\n",marks);
    printf("percentage : %.2f%%\n",percentage);
    printf("grade : %c\n",grade);

    return 0;

}