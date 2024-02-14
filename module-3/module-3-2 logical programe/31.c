//31. Write a program in C to read any Month Number in integer and display the  number of days for this month. 
#include<stdio.h>
main()
{
 
 int m;
 
 printf("enter month number:=",m);
 scanf("%d",&m);
 
 if(m==1)
 {
 	printf("in january number of days is = 31");
 }
 else if(m==2)
 {
 	 	printf("in february number of days is =  28 or 29 (leap year)");

 }
 else if(m==3)
 {
 		printf("in march number of days is = 31");
 	
 }
 else if(m==4)
 {
 		printf("in april number of days is = 30");
 }
 else if(m==5)
 {
 		printf("in may number of days is = 31");
 }
 else if(m==6)
 {
	printf("in june number of days is = 30"); 
 }
 else if(m==7)
 {
 		printf("in july number of days is = 31");
 }
 else if(m==8)
 {
 		printf("in august number of days is = 31");
 }
 else if(m==9)
 {
 		printf("in saptember number of days is = 30");
 }
 else if(m==10)
 {
 		printf("in octomber number of days is = 31");
 }
 else  if(m==11)
 {
 		printf("in november number of days is = 30");
 }
 else if(m==12)
 {
 		printf("in december number of days is = 31");
 }
 else
 {
 		printf("please enter a valid number");
 }



}
