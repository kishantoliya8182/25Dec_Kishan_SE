//3. WAP to check if the given year is a leap year or not. 
#include<stdio.h>
main()
{
	int ly,y;
	
	printf("enter the year=");
	scanf("%d",&y);
	
	if(y%4==0&&y!=0)
	{
		printf("%d is a leap year",y);
	}
	else
	{
		printf("%d is not leap year",y);
	}
}
