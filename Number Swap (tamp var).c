#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter number a:");
	scanf("%d",&a);
	printf("enter number b:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("after a swaping number a:%d & number b:%d",a,b);
	return 0;
}