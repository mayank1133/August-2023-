#include<stdio.h>
int main()
{
	int Year,Weaks,Day,days;
	printf("Enter number of days=");
	scanf("%d",&days);
	Year=days/365;
	days=days%365;
	Weaks=days/7;
	Day=days%7;
	printf("converson=%d:%d:%d",Year,Weaks,Day);
}