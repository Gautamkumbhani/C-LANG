
// no argivment with return
// enter two value and find its multiplication is devisible by 3 and 7 or not

#include<stdio.h>
int gautam()
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

	return gautam;

}
int main()
{
    printf("......\n");
    gautam();
    printf("\n....\n");

}