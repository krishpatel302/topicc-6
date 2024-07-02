#include<stdio.h>

main()

{
    int a,b,c;
    printf("enter first value:");
	scanf("%d",&a); 
	printf("enter second value:");
	scanf("%d",&b); 
    printf("enter third value:");
	scanf("%d",&c); 
	
	if (a<b)
	{
		if(a<c)
		{
			printf("a is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		if(b<c)
		{
		printf("b is minimum");
	    }
	    else
	    {
	    	printf("c is minimum");
		}
	}
}