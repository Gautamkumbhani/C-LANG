#include<stdio.h>
struct student
{
    int rollno,maths,science,eng,total;
    float per;
    char sname[50];
};

int main()
{

    struct student a[5];
    int i;

    printf("enter data:........\n");
    for ( i = 0; i < 2; i++)
    {
        printf("enter roll no: ");
        scanf("%d",&a[i].rollno);

        printf("enter name: ");
        scanf("%c",&a[i].sname);

        printf("enter maths marks: ");
        scanf("%d",&a[i].maths);

        printf("enter science marks: ");
        scanf("%d",&a[i].science);

        printf("enter english marks: ");
        scanf("%d",&a[i].eng);
    }
    
        printf("rollno \t name \t maths \t science \t eng \t total \t per");

        for ( i = 0; i < 2; i++)
        {
            a[i].total = a[i].maths + a[i].science + a[i].eng;
            a[i].per = (float)a[i].total / 3 ;

            printf("\n%d \t %s \t %d \t %d \t %d \t %d \t %.2f",a[i].rollno,a[i].sname,a[i].maths,a[i].science,a[i].eng,a[i].total,a[i].per);
        }
        

    

}