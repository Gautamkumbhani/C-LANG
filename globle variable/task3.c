#include<stdio.h>
void display(int m,int n,int p,int q,float r)
{
    
    printf("maths\tscience\teng\ttotal\tper\tgrade\n");
    printf("%d\t%d\t%d\t%d\t%.2f",m,n,p,q,r);


if(m<33 || n<33 || p<33)
{
    printf("\t fail");
}

else if(r>=75)
{
    printf("\tA");
}
else if (r>=60 && r<=75)
{
    printf("\tB");
}
else if(r>=45 && r<=60)
{
    printf("\tC");
}
else if(r>=35 && r<=45)
{
    printf("\tD");
}
}
void calc(int a,int b,int c)
{
    int total;
    float per;
    total= a + b + c ;
    per = (float)total/3;
    display(a,b,c,total,per);

}

void setdata()
{
    int maths,sci,eng;
    printf("enter maths marks: ");
    scanf("%d",&maths);
    printf("enter sci marks: ");
    scanf("%d",&sci);
    printf("enter eng marks: ");
    scanf("%d",&eng);


    calc(maths,sci,eng);

}
int main()
{

        setdata();
        

}