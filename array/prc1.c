//  student
//  roll no,eng,maths,guj,sci,phy,total,per,grade
// array : collection of data which has samedata datatype
// index start from 0

#include<stdio.h>
int main()
{

    int a[10];
    int i;

    for(i=0;i<5;i++)
    {
        printf("enter a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n---------array is----------\n");
    for(i=0;i<5;i++)
    {
        printf("\n a[%d] : %d",i+1,a[i]);
    }

}