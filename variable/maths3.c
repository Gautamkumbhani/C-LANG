#include<stdio.h>
int main()
{
	float a1=9,a2=4,a3=2,a4=12,a;
	float b1=123,b2=1,b3=2,b4=63,b;
	float c1=11,c2=8,c3=63,c;
	float d1=8,d2=6,d3=74,d4=3,d;
	float e1=10,e2=1,e3=27,e4=12,e;
	float g1=6,g2=9,g3=45,g4=5,g;
	float h1=8,h2=30,h3=7,h4=6,h;
	float i1=6,i2=2,i3=12,i;
	float j1=70,j2=55,j3=63,j4=40,j;
	float k1=21,k2=72,k3=31,k4=1,k;
	a=a1*a2/a3+a4;
	printf("%f",a);
	b=b1/b2*b3-b4;
	printf("\n%f",b);
	c=c1*c1-c2/c3;
	printf("\n%f",c);
	d=d1*d2+d3/d4;
	printf("\n%f",d);
	e=e1*e2+e3*e4;
	printf("\n%f",e);
	g=g1*g2+g3/g4;
	printf("\n%f",g);
	h=h1+h2*h3/h4;
	printf("\n%f",h);
	i=i1*i2/i1*i3;
	printf("\n%f",i);
	j=j1-j2+j3-j4;
	printf("\n%f",j);
	k=k1+k2/k3-k4;
	printf("\n%f",k);


	return 0;
}