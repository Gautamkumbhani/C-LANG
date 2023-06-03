
// no argivment with return
// calculate the area of the triangle

#include<stdio.h>
int gautam()
{
	int b,h,t;

	printf("enter a value of b: ");
	scanf("%d",&b);

	printf("enter a value of h: ");
	scanf("%d",&h);

	t=0.5*b*h;

	return t;

}

int main()
{
    int x;

    printf(".....\n");

    x=gautam();

    printf(" area of circle is : %d",x);

    printf("\n....\n");
}