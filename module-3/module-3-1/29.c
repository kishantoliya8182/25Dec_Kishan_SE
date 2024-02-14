//29.Convert minutes into seconds and hours 
#include<stdio.h>
main()
{
	float m,s,h;
	
	printf("enter number of minutes=");
	scanf("%f",&m);
	
	s=m*60;
	h=m/60;
	
	printf("\nnumber of hour is=%.2f",h);
	printf("\nnumber of second is=%.2f",s);
}
