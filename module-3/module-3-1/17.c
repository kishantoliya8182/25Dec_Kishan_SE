//17.Calculate person�s insurance premium based on salary
#include<stdio.h>
main()
{
	int a,i,t;
	printf("enter salary=");
    scanf("%d",&a);

    i=a*0.10;

    t=a-i;

    printf("insurance premium is=%d\n",i);
    printf("your gross salary is=%d\n",t);


    
}
