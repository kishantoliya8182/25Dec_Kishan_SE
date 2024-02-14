//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include<stdio.h>
main()
{
	float billamount,totalamount;
	
	printf("enter billamount=");
	scanf("%f",&billamount);
	
	
	if(billamount>800)
	{
		totalamount=billamount+(0.18*billamount);
	}	
	else if(billamount<256)
	{
		totalamount=256;
	}
	else 
	{
		totalamount=billamount;
	}

	printf(" total amount to be paid Rs. %.2f",totalamount);
	
	
}
