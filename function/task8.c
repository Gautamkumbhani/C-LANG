
// no argivment with return
// enter one value and find its devisible by f or not

#include<stdio.h>
int dev()
{

	int a;
	printf("enter a: ");
	scanf("%d",&a);

	if(a%5==0)
	{
		printf("yes");

	}
	else
	{
		printf("no");
	}

	return dev ;

}

int main()
{
    
    printf("......\n");
    dev();

    printf("\n....\n");

}