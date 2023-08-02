#include <stdio.h>
int main() {    

    int num1, num2, sum;
    
    printf("Enter the 2 numbers that you want to add: ");
    scanf("%d %d", &num1, &num2);

    // calculate the sum
    sum = num1 + num2;      
    
    printf("The addition of ","%d + %d = %d", num1, num2, sum);
    return 0;
}