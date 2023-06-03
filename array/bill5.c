#include<stdio.h>
int main()
{

    int a[5], productno[5],qty[5],rate[5],discount[5],ratead[5],gst[5],billamount[5],price[5],i,discountamttotal[5],d,b,c;


    


    for ( i = 0; i < 5; i++)
    {
    printf("enter productno [%d] : ",i+1);
    scanf("%d",&productno[i]);
    
    printf("enter price [%d] : ",i+1);
    scanf("%d",&price[i]);
    
    printf("enter qty [%d] : ",i+1);
    scanf("%d",&qty[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        rate[i]=price[i] * qty[i];
        discount[i] = rate[i] * 0.10;
        ratead[i] = rate[i] - discount[i];
        gst[i] = ratead[i] * 0.18;
        billamount[i] = ratead[i] + gst[i] ;
    }
    
 

    printf("\nproductno \t price \t qty \t rate \t discount \t ratead \tgst \t billamount");
    for(i=0;i<5;i++)
    {
        
    
    printf("\n   %d",productno[i]);
    printf("\t\t   %d",price[i]);
    printf("\t  %d",qty[i]);
    printf("\t  %d",rate[i]);
    printf("\t   %d",discount[i]);
    printf("\t\t   %d",ratead[i]);
    printf("\t\t %d",gst[i]);
    printf("\t    %d",billamount[i]);
    }
    
    for ( i = 0; i < 5; i++)
    {
        d=d+discount[i];
    }
    printf("\n \t \t \t \t \t %d",a);

    for ( i = 0; i < 5; i++)
    {
        b=b+gst[i];
    }
    printf("\t %d",b);
    
    for ( i = 0; i < 5; i++)
    {
        c=c+billamount[i];
    }
    printf("\t %d",c);

    return 0;
}