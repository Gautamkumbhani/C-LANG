//  student
//  roll no,eng,maths,guj,sci,phy,total,per,grade
// array : collection of data which has samedata datatype
// index start from 0

#include<stdio.h>
int main()
{

    int a[10],b[10];
    int i,j;

    for(i=0;i<5;i++)
    {
        printf("enter a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }

    for(j=0;j<5;j++)
    {
        printf("enter b[%d] : ",j+1);
        scanf("%d",&b[j]);

    }


    printf("\n---------array is----------\n");

    for(i=0;i<5;i++)
    {
        printf("\n a[%d] : %d",i+1,a[i]);
    }

    for(j=0;j<5;j++)
    {
        printf("\n b[%d] : %d",j+1,b[j]);
    }

}