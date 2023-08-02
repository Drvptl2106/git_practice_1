#include <stdio.h>
int main() 

{    
    int num1, num2, sum;
    
    printf("Enter integers num1: ");
    scanf("%d", &num1);
    printf("Enter integers num2: ");
    scanf("%d", &num2);

    // calculate the sum
    sum = num1 + num2;      
    
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}