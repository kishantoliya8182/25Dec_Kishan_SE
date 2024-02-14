//34. Accept month number and display month name 
#include<stdio.h>
main()
{
	int m;
 
 printf("enter month number:=",m);
 scanf("%d",&m);
 
 if(m==1)
 {
 	printf("january ");
 }
 else if(m==2)
 {
 	 	printf(" february ");

 }
 else if(m==3)
 {
 		printf(" march ");
 	
 }
 else if(m==4)
 {
 		printf(" april ");
 }
 else if(m==5)
 {
 		printf(" may");
 }
 else if(m==6)
 {
	printf(" june "); 
 }
 else if(m==7)
 {
 		printf(" july ");
 }
 else if(m==8)
 {
 		printf("august ");
 }
 else if(m==9)
 {
 		printf(" saptember ");
 }
 else if(m==10)
 {
 		printf(" octomber ");
 }
 else  if(m==11)
 {
 		printf(" november ");
 }
 else if(m==12)
 {
 		printf(" december ");
 }
 else
 {
 		printf("please enter a valid number");
 }


}
