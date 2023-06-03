
// no argivment no return
// enter one value and find its devisible by 5 and 3 or not

#include<stdio.h>
void dev()
{

	int a;
	printf("enter a: ");
	scanf("%d",&a);

	if(a%5 == 0 && a%3 == 0)
	{
		printf("yes");

	}
	else
	{
		printf("no");
	}

}

int main()
{
    printf("........\n");
    dev();
    printf("\n....\n");

}