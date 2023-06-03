
// no argivment with return

#include<stdio.h>
int div()
{

	int total,tc,ocp;
	printf("enter a value of total: ");
	scanf("%d",&total);
	printf("enter a value of tc: ");
	scanf("%d",&tc);
	
	ocp=total/tc;
	return ocp;

}

int main()
{
    int x;
    printf("chair prise\n");
    x= div();
    printf("\none chair prise is: %d",x);
    printf("\n.....\n");
}