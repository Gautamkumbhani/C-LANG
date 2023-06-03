
//  no argivment no return
// enter two values and find its multiplication is devisible by its addition or not

#include<stdio.h>
void muldev()
{

	int a,b,multi,add;
	printf("enter a: ");
	scanf("%d",&a);

	printf("enter b: ");
	scanf("%d",&b);

	multi=a*b;
	add=a+b;	

	if(multi % add==0)	
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
    printf("......\n");
    muldev();
    printf("\n.....\n");

}