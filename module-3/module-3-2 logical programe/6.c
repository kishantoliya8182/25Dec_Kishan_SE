//6. Find the Character Is Vowel or Not 
#include<stdio.h>
main()
{
	int uppercase,lowercase;
	char c;
	
	printf("enter a alphabet=");
	scanf("%c",&c);
	
	uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='u');
	lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	
	if(uppercase||lowercase)
	{
		printf("%c is wovel",c);
		
	}
	else
	{
		printf("%c is not wovel",c);
	}
	
}
