#include<stdio.h>

main()

{
	int number;
	printf("enter your number");
	scanf("%d",&number);
	
	if(number<0)
	{
		printf("number is nagativ");
	}
	else if(number==0)
	{
		printf("number is neutral");
	}
	else
	{
		printf("number is positiv");
	}
}