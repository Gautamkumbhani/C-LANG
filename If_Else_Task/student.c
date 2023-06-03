#include<stdio.h>

int main()
{
    int rollno,maths,che,phy,bio,eng,total,marks;
    float per;
    char grade;
  

        printf("enter roll no: ");
        scanf("%d",&rollno);

        printf("Enter the marks of maths for student:");
        scanf("%d",&maths);

         printf("Enter the marks of chemistry for student:");
        scanf("%d",&che);

         printf("Enter the marks of physics for student:");
        scanf("%d",&phy);

         printf("Enter the marks of biology for student:");
        scanf("%d",&bio);

         printf("Enter the marks of english for student :");
        scanf("%d",&eng);
        

        if (marks > 75)
    {
        grade = 'A' ;
    }
    else if (marks > 60)
    {
        grade = 'B' ;
    }
    else if (marks > 45)
    {
        grade = 'C' ;
    }
    else if (marks > 35)
    {
        grade = 'd' ;
    }
    else
    {
        grade = 'f' ;
    }  

    printf("-------------------------------------------------------------------\n\n");

    total=maths+che+phy+bio+eng;
    per=(maths+che+phy+bio+eng)/5;
        printf("total is %d\n",total);
        printf("Percentage is %f\n",per);
         printf("grade : %c\n",grade);

    return 0;
}