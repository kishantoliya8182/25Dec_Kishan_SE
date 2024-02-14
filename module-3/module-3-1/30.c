//30. WAP to convert years into days and days into years 
#include<stdio.h>
main()
{
	float y,d;
	
	printf("enter num of years=");
	scanf("%f",&y);
	d=y*365;
	printf("\nnum of days is=%f",d);
	
	printf("\n enter num of day=");
	scanf("%f",&d);
	
	y=d/365;
	
	printf("\nnum of year is=%f",y);
	
	
}

