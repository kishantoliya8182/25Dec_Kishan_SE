//16.Convert country’s name in abbreviate form
#include<stdio.h>
main()
{
	char fname[20],mname[20],lname[20];
	
	printf("\nenter a first name=");
	scanf("%s",&fname);
	
	printf("\nenter a middel name=");
	scanf("%s",&mname);
	
	printf("\nenter a last name=");
	scanf("%s",&lname);
	
	printf("\nabbreviate from=%c .%c .%c",fname[0],mname[0],lname[0]);
	
}
