//24.Accept 5 employees name and salary and count average and total salary 
#include<stdio.h>
main()
{
     char a[10],b[10],c[10],d[10],s[10];
     float as,bs,cs,ds,ss,avrage,total;
     
     printf("enter first emp name=");
     scanf("%s",&a[10]);
      printf("\nenter first emp salary=");
     scanf("%f",&as);
     
     
     printf("\nenter second emp name=");
     scanf("%s",&b[10]);
      printf("\nenter second emp salary=");
     scanf("%f",&bs);
     
     
     printf("\nenter third emp name=");
     scanf("%s",&c[10]);
     printf("enter third emp salary=");
     scanf("%f",&c[10]);
     
     printf("\nnenter four emp name=");
     scanf("%s",&d[10]);
     printf("\nenter four emp salary=");
     scanf("%f",&ds);
     
     printf("\nenter five emp name=");
     scanf("%s",&s[10]);
     printf("\nenter five emp salary=");
     scanf("%f",&ss);
     
     avrage=as+bs+cs+ds+ss/5;
     printf("\navrage is =%f",avrage);
     
     total=as+bs+cs+ds+ss;
     printf("\nTotal salary is=%f",total);
     
     
     
     
     
     
     
     
     
}
