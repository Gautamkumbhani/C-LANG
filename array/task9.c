#include <stdio.h>

int main() {
    int a[10] ;
    
    int sum = 0,i;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("enter a[%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    for( i = 0; i < 10; i+=2)
        {
            sum+=a[i];  
            printf("\n %d  ",a[i]);
                
        }
    for( i = 1; i < 10; i+=2)
        {
            printf("\n %d ",a[i]);
            sum+=a[i];
        }


    printf("\nodd eliment position total is\n");
                
                printf("\ntotal is : %d",sum);

    printf("\neven eliment position total is\n");  
            printf("\n total is: %d",sum);            
    return 0;
}
