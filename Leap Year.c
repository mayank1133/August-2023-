#include<stdio.h>
int main()
{
	int year;
	printf("Enter tht year:");
	scanf("%d",&year);
	if(year%4==0&&year!=0)
	{
		printf("Given year is Leap year");
	}
	else
	{
		if(year%400==0)
		{
			printf("year is Leap Year");
		}
		else
		{
			printf("Given year is not Leap Year");
		}
	}
}
