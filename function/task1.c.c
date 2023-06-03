
// no argivement no return

#include<stdio.h>
void mul()
{

	float a,b,c;
	printf("enter a value of a: ");
	scanf("%f",&a);

    printf("enter a dollar value of b: ");
	scanf("%f",&b);


    c=a*b;
	printf("%.2f ",c);
	
}

int main()
{

    printf("dollar prise\n");
    mul();
    printf("\nhi....\n");
}