#include<stdio.h>
int main()
{
	float C,F;
	printf("enter temp in fahrenheit=");
	scanf("%f",&F);
	C=((F-32)*5)/9;
	printf("Temp. in celsius=%f",C);
	return 0;
}