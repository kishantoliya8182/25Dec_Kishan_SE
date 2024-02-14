//19.Calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    
    double principal, rate, time, compoundInterest;
    int compoundingFrequency;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate : ");
    scanf("%lf", &rate);

    printf("Enter the number of years: ");
    scanf("%lf", &time);

    printf("Enter the compounding frequency per year: ");
    scanf("%d", &compoundingFrequency);

    compoundInterest = principal * pow(1 + rate / compoundingFrequency, compoundingFrequency * time) - principal;

    printf("The compound interest after %.2lf years is %.2lf\n", time, compoundInterest);

    return 0;
}


