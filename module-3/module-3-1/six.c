//6. Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
main()
{
	int b,h;
	float area;
	
	printf("enter base of triangle:-");
	scanf("%d",&b);
	printf("\nenter hight of triangle:-");
	scanf("%d",&h);
	area=(b*h)/2;
	printf("\narea of triangle is:-%f",area);
	
}
