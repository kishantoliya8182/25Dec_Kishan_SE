//32. Accept 2 numbers and find out its sum check it size 
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first number=");
	scanf("%d",&a);
	printf("enter second number=");
	scanf("%d",&b);
	
	c=a+b;
	printf("sum=%d\n variable size is=%d",c,sizeof(c));
}
