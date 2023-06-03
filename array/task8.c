#include<stdio.h>
int main()
{

        int a[10],b[10];
        int i;

        for(i=0;i<10;i++)
        
            {
                printf("enter a[%d] : ",i+1);
                scanf("%d",&a[i]);
            }
        
        for( i = 0; i < 10; i++)
        
            
            {
                printf("enter b[%d] : ",i+1);
                scanf("%d",&b[i]);
            }

            
            printf("\n A \t  B \t\t a+b \n");        
            for( i = 0; i < 10; i++)
            {
                printf("\n %d \t %d \t\t\t %d ",a[i],b[i],a[i]+b[i]);
            }

}            
            