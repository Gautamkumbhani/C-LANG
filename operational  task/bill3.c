#include<stdio.h>
int main()
{

    int product_no=(11,12,13,14,15);
    float price=(120,444,554,569,1000);
    int qty=(s,10,20,5,60);
    float rate,discamt,ratead,gst,billamt;

    printf("product_no\tprice\tqty\trate\tdiscamt\tratead\tgst\tbillamt\n");


    for (int i = (product_no 11); i <=(product_no 15) ; i++) 
    {
        rate= price*qty;
        discamt=rate*0.10;
        ratead=rate-discamt;
        gst=ratead*0.18;
        billamt=ratead+gst;

        printf("%d\t\t%.2f\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", 
               product_no, price, qty, rate, ratead, gst, billamt, discamt);
    }

    
    return 0;

}