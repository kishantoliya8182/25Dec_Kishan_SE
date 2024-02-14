//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter first number");
	scanf("%d",&a);

	printf("enter second number");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;

	
	printf("\nfirst num is=%d",a);
	printf("\nsecond num is=%d",b);	
	
	printf("\n==============================================================================\n");
	printf("\nwithout using 3rd variable");
	
	printf("\nenter first number");
	scanf("%d",&d);

	printf("\nenter second number");
	scanf("%d",&e);
	
	printf("\nfirst num is=%d",e);
	printf("\nsecond num is=%d",d);
	
	
	
}
