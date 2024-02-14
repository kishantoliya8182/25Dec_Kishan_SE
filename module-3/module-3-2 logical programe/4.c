//4. WAP to make simple calculator (operation include Addition, Subtraction,  Multiplication, Division, modulo) using conditional statement 
#include<stdio.h>
main()
{
	float a,b;
	int op;
	
	printf("enter first number=");
	scanf("%f",&a);
	printf("\nenter second number=");
	scanf("%f",&b);
	
	printf("\nenter 1 you want to find addition");
	printf("\nenter 2 you want to find subtraction");
	printf("\nenter 3 you want to find multiplication");
	printf("\nenter 4 you want to find division");
	

	printf("\nenter operation you want find =");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\naddition=%f",a+b);
	}
	else if(op==2)
	{
		printf("\nsubtraction=%f",a-b);
	}
	else if(op==3)
	{
		printf("\nmultiplication=%f",a*b);
	}
	else if(op==4)
	{
		printf("\ndivision=%f",a/b);
	}
	else{
		printf("please enter a valid input");
	}
	

	
}
