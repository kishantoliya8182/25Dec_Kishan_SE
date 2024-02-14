//26.Convert temperature Fahrenheit to Celsius C = (°F - 32) × 5/9
#include<stdio.h>
main()
{
	
	float c,f;
	
	printf("enter temperature fahrenheit=");
	scanf("%f",&f);
	
	c=(f-32)*5/9;
	
	printf("\ncelsius is=%.2f",c);
}
