//12. WAP to find maximum number among 3 numbers using ternary operator 


#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

   
    printf("Maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

}
