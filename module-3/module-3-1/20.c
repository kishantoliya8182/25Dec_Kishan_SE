//20.Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.
#include <stdio.h>

int main() {
    float salary,inspri,loan,total;
    
    printf("enter your salary");
    scanf("%f",&salary);
    
    inspri=salary*10/100;
    loan=salary*10/100;
    total=salary-inspri-loan;
    
	printf("\nyour insurance premium is =%f",inspri); 
	printf("\nyour loan installment is =%f",loan); 
	printf("\nyour remaining salary is =%f",total);    
   


}

