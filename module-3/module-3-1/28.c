//28.Convert years into days and months 
#include<stdio.h>
main()
{
	float y,d,m;
	
	printf("enter number of year=");
	scanf("%f",&y);
	
	m=y*12;
	
	d=y*365;
	
	printf("\nnumber of days is=%.2f",d);
	printf("\nnumber of month is=%.2f",m);
}
