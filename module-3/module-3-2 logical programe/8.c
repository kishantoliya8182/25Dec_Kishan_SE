//8. WAP to accept the height of a person in centimeters and categorize the person according to their height. 
#include<stdio.h>
main()
{
	float hight;
	
	printf("enter your hight=");
	scanf("%f",&hight);
	
	if(150>=hight&&hight>0)
	{
		printf("short");
	}
	else if(150<hight&&hight<=170)
	{
		printf("avrage");
	}
	else if(170<hight&&hight<=200)
	{
		printf("tall");
	}
	else if (hight>200)
	{
		printf("very tall");
	}
	else
	{
		printf("please enter valid input");
	}
}
