//17. Write a C program to check whether a triangle can be formed with the given values for the angles. 
#include<stdio.h>
main()
{
	int a1,a2,a3,total;
	
	printf("enter first angles values of triangle=");
	scanf("%d",&a1);
	
	printf("\nenter second angles values of triangle=");
	scanf("%d",&a2);
	
	printf("\nenter third angles values of triangle=");
	scanf("%d",&a3);
	
	total=a1+a2+a3;
	
	if(total==180)
	{
		printf("\ntriangle can be formed with the given values");
	}
	else
	{
		printf("\nsorry triangle cannot be formed with the given values");
	}
	
	
	
	
}
