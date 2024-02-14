//2. read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 
#include<stdio.h>
main()
{
	int m;
	
	printf("enter the value of m=");
	scanf("%d",&m);
	
	if(0<m)
	{
		printf("n=1");
		
	}
	else if(m==0)
	{
		printf("n=0");
	}
	else
	{
		printf("n=-1");
	}
}
