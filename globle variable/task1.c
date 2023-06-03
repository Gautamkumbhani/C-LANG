#include<stdio.h>
int maths,sci,eng,total;
float per;
void display()
{

    printf("maths\tscience\teng\ttotal\tper\tgrade\n");
    printf("%d\t%d\t%d\t%d\t%.2f",maths,sci,eng,total,per);


if(maths<33 || sci<33 || eng<33)
{
    printf("\t fail");
}

else if(per>=75)
{
    printf("\tA");
}
else if (per>=60 && per<=75)
{
    printf("\tB");
}
else if(per>=45 && per<=60)
{
    printf("\tC");
}
else if(per>=35 && per<=45)
{
    printf("\tD");
}
}
void calc()
{

    total= maths + sci + eng ;
    per = (float)total/3;
    display();

}

void setdata()
{

    printf("enter maths marks: ");
    scanf("%d",&maths);
    printf("enter sci marks: ");
    scanf("%d",&sci);
    printf("enter eng marks: ");
    scanf("%d",&eng);
    calc();

}

int main()
{

        setdata();
        

}