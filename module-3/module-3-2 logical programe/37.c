/*37. WAP to show 
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case*/
//35. Accept the input month number and print number of days in that month. 
#include<stdio.h>
main()
{
	int a;
	
	
	printf("enter month number= ");
	scanf("%d",&a);
	
	  switch(a)
	{
		case 1:
			printf("monday");
			break;
			
		case 2:
			printf("tuesday");
			break;
			
		case 3:
			printf("wednesday");
			break;
			
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
			
		default:
			printf("please !enter a valid number");
		
	}
printf("\n==========================================================================================\n");
	
	char ch;

    printf("\nEnter a character: ");
    scanf(" %c", &ch);  

    ch = tolower(ch);
  
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is a vowel.\n", ch);
            break;
        default:
            printf("\n%c is a consonant.\n", ch);
    }

}
