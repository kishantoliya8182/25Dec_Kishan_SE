//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
main()
{
  char c;
  
  printf("enter character=");
  scanf("%c",&c);
  
  if((c>='a'&&c<='z'||c>='A'&&c<='Z'))	
  {
  	if(c>='a'&&c<='z')
  	{
  		printf("%c is lowercase",c);
	  }
	  else
	  {
	  	printf("%c is uppercase",c);
	  	
	  }
  }
  else if (c>='0'&&c<='9')
  {
  	printf("%c is digit",c);
  }
    else {
        printf("%c is a special character.\n",c);
    }
}




