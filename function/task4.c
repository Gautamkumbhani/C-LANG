
// no argivment with return

#include<stdio.h>
int gautam()
{

	int k,a,x;
	printf("enter a value of k: ");
	scanf("%d",&k);
	printf("enter a value of a: ");
	scanf("%d",&a);

	x=((k-4)*(a*4))/100;
	return x;

}

int main()
{

    int v;
    printf("......\n");
    v=gautam();
    printf("x is : %d",v);
    printf("\n.....\n");
}