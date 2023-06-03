
// with argivment with return
//   take the number of chairs and their total cost and print the cost of each chair   

#include<stdio.h>
int chair(int price)
{

	return price;

}

int main()
{
	int total,tc,ocp,x;
	printf("enter a value of total: ");
	scanf("%d",&total);
	printf("enter a value of tc: ");
	scanf("%d",&tc);
	
	ocp=total/tc;
	printf("one chair prise is %d",ocp);

	chair(x);
	
}