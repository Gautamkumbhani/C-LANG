#include<stdio.h>
int main()
{

	float p,r,t;
	printf("enter a value of p: ");
	scanf("%f",&p);
	printf("enter a value of r: ");
	scanf("%f",&r);
	printf("enter a value of t: ");
	scanf("%f",&t);

	printf("simple interest is %f",(p*r*t)/100);
	return 0;



}