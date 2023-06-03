#include<stdio.h>
struct bill
{
    int productno,price,qty,rate,discount,ratead,gst,billamount;
    char name[50];
};

int main()
{
    struct bill a[5];
    int i;

    printf("yogi general store");

    for ( i = 0; i < 5; i++)
    {

    printf("Enter product no: ");
	scanf("%d",&a[i].productno);

    printf("Enter product name: ");
	scanf("%s",&a[i].name);

	printf("Enter price:  ");
	scanf("%d", &a[i].price);

	 printf("Qty: ");
	 scanf("%d", &a[i].qty);
    
    }
    
    printf("---------------------------------------yogi general store-------------------------------");
	 printf("\n\t\tproduct_No\tProduct_Name\tprice\tqty\trate\tdiscount\tratead\tgst\tbill_amount");
    
    for ( i = 0; i < 5; i++)
    {

     a[i].rate=a[i].price*a[i].qty;
	 a[i].discount=a[i].rate*0.10;
	 a[i].ratead=a[i].rate-a[i].discount;
	 a[i].gst=a[i].ratead*0.18;
	 a[i].billamount=a[i].ratead+a[i].gst;

    printf("\n\t\t%d\t\t%s\t\t%d\t%d\t%d\t%d\t\t%d\t%d\t%d",a[i].productno,a[i].name,a[i].price,a[i].qty,a[i].rate,a[i].discount,a[i].ratead,a[i].gst,a[i].billamount);
    }
    
}
























