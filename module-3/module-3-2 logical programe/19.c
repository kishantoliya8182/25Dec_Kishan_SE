/*19. Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow : 
 Unit                             Charge/unit 
upto 350                            @1.20 
350 and above but less than 600     @1.50 
600 and above but less than 800     @1.80 
800 and above                       @2.00*/

#include<stdio.h>
main()
{
	int id;	
	char name[20];
	float ammount,unit;
	
	printf("\nenter your id=");
	scanf("%d",&id);
	
	printf("\n enter your name=");
	scanf("%s",&name);
	
	printf("\ntotal unit consumed=");
	scanf("%f",&unit);
	
	if(unit<350)
	{
		ammount=unit*1.20;
	}
	else if(unit>=350&&unit<600)
	{
		ammount=unit*1.50;
	}
	else if(unit>=600&&unit<800)
	{
		ammount=unit*1.80;
	}
	else if(unit>=800)
	{
		ammount=unit*2.00;
	}
	
	
	printf("\n=====================================================================================\n");
	printf("\nid=%d",id);
	printf("\nName=%s",name);
	
	printf("\nTotal ammount=%.2f",ammount);

	
}
