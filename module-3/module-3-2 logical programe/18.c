//18. Write a C program to calculate profit and loss on a transaction. 
#include<stdio.h>
main()
{
	int profit,loss,profitloss;
	
	printf("enter total profit=");
	scanf("%d",&profit);
	
	printf("\nenter total loss=");
	scanf("%d",&loss);
	
	profitloss=profit-loss;
	
	if(profitloss>0)
	{
		printf("your profit is =%d",profitloss);
		
	}
	else if(profitloss<0)
	{
		printf("your loss is =%d",profitloss);
		
	}
	else
	{
		printf("profit and loss both equal ");
	}
}
