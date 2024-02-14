//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include<stdio.h>
main()
{
	int s,a=5,sum;
	
	printf("enter num of student=");
	scanf("%d",&s);
	
	
	sum=s*a;
	printf("%d apples are required",sum);
}
