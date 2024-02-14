//25.Accept 5 expense from user and find average of expense 
#include<stdio.h>
main()
{
	
	float ex1,ex2,ex3,ex4,ex5,avrage;
	
	printf("enter your first expense=");
	scanf("%f",&ex1);
	
	printf("\nenter your second expense=");
	scanf("%f",&ex2);
	
	printf("\nenter your third expense=");
	scanf("%f",&ex3);
	
	printf("\nenter your four expense=");
	scanf("%f",&ex4);
	
	printf("\nenter your five expense=");
	scanf("%f",&ex5);
	
	
	avrage=ex1+ex2+ex3+ex4+ex5/5;
	
	printf("avrage=%f",avrage);
	
	
}
