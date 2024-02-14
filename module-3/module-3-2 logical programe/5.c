//5.Check Number Is Positive or Negative 
#include<stdio.h>
main()
{
	int n;
	
	printf("enter number=");
	scanf("%d",&n);
	
	if(0<n)
	{
		printf("num is positive");
	}
	else if(0>n)
	{
		printf("num is negative");
	}
	else
	{
		printf("num is zero");
	}
}
