/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */
#include<stdio.h>
main()
{
	int math,phy,chem,total_3,total_2;
	
	
	printf("enter maths marks=");
	scanf("%d",&math);
	
	printf("\nenter physics mark=");
	scanf("%d",&phy);
	
	printf("\nenter chemistry mark=");
	scanf("%d",&chem);
	
	total_2=math+phy;
	total_3=math+phy+chem;
	
	if(math>=65&&phy>=55&&chem>=50)
	{
      if(total_3>=190)
      {
      	if(total_2>=140)
      	{
      		printf("\ncongrotulation!you are Eligibil for course");
		  }
	  }
	}
	else 
	{
		printf("sorry you are not  eligibil");
	}
	
	
	
	
}
