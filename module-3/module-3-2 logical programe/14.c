//14.WAP to find the largest of three numbers. 
#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter first num=");
	scanf("%d",&a);
	
	printf("enter second num=");
	scanf("%d",&b);
	
	printf("enter third num=");
	scanf("%d",&c);
	
	if(a >b && a>c)
	{
		printf("%d is largest number",a);
	}
	else if(b>a&&b>c)
	{
		printf("%d is largest number",b);
	}
	else
	{
		printf("%d is largest number",c);
	}
}
