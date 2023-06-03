
// with argivment with return
//  verify the formula of simple interest



#include<stdio.h>
int interest(float y)
{
    float p,r,t,a;
    printf("enter a value of p: ");
	scanf("%f",&p);
	printf("enter a value of r: ");
	scanf("%f",&r);
	printf("enter a value of t: ");
	scanf("%f",&t);


    a= (p*r*t)/100;
	printf("simple interest is %f",a);
    
}

int main()
{
    float s;


    interest(s);

}