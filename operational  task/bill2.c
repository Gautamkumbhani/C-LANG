#include<stdio.h>
int main()
{

	int productname,qty,rate,discount,ratead,gst,billamount;
	int price;
	printf("yogi general store");

	printf("\nenter productname: ");
	scanf("%d",&productname);

	printf("\nenter price:  ");
	scanf("%d", &price);

	 printf("\nqty: ");
	 scanf("%d", &qty);

	 rate=price*qty;
	 discount=rate*0.10;
	 ratead=rate-discount;
	 gst=ratead*0.18;
	 billamount=ratead+gst;


	 printf("----------------------------------------------------yogi general store------------------------------------------------------------------");
	 printf("\n              product name \t price \t qty \t rate \t discount \t ratead \t gst \t bill amount");
	 printf("\n                   %d   \t  %d\t  %d  \t %d   \t   %d   \t  %d   \t %d    \t    %d",productname,price,qty,rate,discount,ratead,gst,billamount);

	return 0;                                                                                                                                                                                                                                                          


}