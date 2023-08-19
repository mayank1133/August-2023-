#include<stdio.h>
void main()
{
	char x;
	printf("enter cheracter :");
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='E'||x=='e'||x=='I'||x=='i'||x=='O'||x=='o'||x=='u'||x=='u')
	{
		printf("character is VOVEL");
	}
	else
	{
		printf("cheracter is CONSONENT");
	}
	
}