#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter principle=");
	scanf("%f",&p);
	printf("enter ROI=");
	scanf("%f",&r);
	printf("enter time period=");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple Interest=%f",si);
	return 0;
}