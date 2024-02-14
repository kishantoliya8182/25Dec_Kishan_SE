//1. Write a C program to accept two integers and check whether they are equal or not 
#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter first num=");
	scanf("%d",&a);
	printf("enter second num=");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("both are equal");
	}
	else
	{
		printf("both are not equal");
	}
	
}
