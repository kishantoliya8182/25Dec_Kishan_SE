//10. WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
main()
{
	int n;
	
	printf("enter a number=");
	scanf("%d",&n);

	if(0<n)
	{
	  printf("%d is positive",n);
	}
	else if(0>n)
	{
		printf("%d is nagative",n);
	}
	else{
		printf("%d is zero",n);
	}
}
