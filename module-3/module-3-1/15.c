//15.Convert school’s name in abbreviated form

#include<stdio.h>
main()
{
	char fname[20],mname[20],lname[20];
	
	printf("enter first name=");
	scanf("%s",&fname);
	
	printf("\nenter midel name=");
	scanf("%s",&mname);
	
	printf("\nenter last name=");
	scanf("%s",&lname);
	
	printf("\nabbreviated form=%c %c %s",fname[0],mname[0],lname);
	
}
