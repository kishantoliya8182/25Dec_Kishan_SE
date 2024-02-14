//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
main()
{
	int wl,hl,hw;
	float area;
	
	printf("enter a wl:-");
	scanf("%d",&wl);
	printf("\nenter hl:-");
	scanf("%d",&hl);
	printf("\nenter hw:-");
	scanf("%d",&hw);
	
	area=2*(wl+hl+hw);
	printf("\narea of a rectangular is:-%f",area);
}
