#include<stdio.h>
int display(int a[])
{

    int i;
    for ( i = 0; i < 5; i++)
        printf(" %d",a[i]);
    
}

int main()
{
    int arr[5],i;

    for ( i = 0; i < 5; i++)
    {
        printf("enter arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    display(arr);

}