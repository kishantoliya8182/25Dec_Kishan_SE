//	7. Accept marks from user and check pass or fail 
#include<stdio.h>
main()
{
	int mark;
	
	printf("enter your mark=");
	scanf("%d",&mark);
	
	if(mark<33)
	{
		printf("you are fail");
	}
	else
	{
		printf("congratulations!you are pass");
	}
}
