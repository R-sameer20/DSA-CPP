#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, digit5, sum;

   
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

   
    digit5 = number % 10;           
    digit4 = (number / 10) % 10;    
    digit3 = (number / 100) % 10;   
    digit2 = (number / 1000) % 10;  
    digit1 = (number / 10000) % 10; 

   
    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    
    printf("Sum of digits = %d\n", sum);

    return 0;
}