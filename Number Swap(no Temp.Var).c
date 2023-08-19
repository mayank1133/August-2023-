#include<stdio.h>
void main()
{
	int a,b;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after a swaping number a:%d & number b:%d",a,b);
	
}