#include<stdio.h>
int main()
{

	int a,b,c;
	printf("enter a: ");
	scanf("%d",&a);

	printf("enter b: ");
	scanf("%d",&b);

	c=a*b;

	if(c%7 == 0 && c%3 == 0)
	{
		printf("yes");

	}
	else
	{
		printf("no");
	}

	return 0;

}