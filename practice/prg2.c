#include<stdio.h>
int main()
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

	return 0;





}