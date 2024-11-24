#include <stdio.h>

int main() {
    long long number=0; 
    int digit;
    int position = 1; 
    int sumOfOddPlacedEvenDigits = 0; 

    
    printf("Enter a number: ");
    scanf("%lld", &number);

   
    while (number != 0) {
        digit = number % 10;

  
        if (position % 2 != 0 && digit % 2 == 0) {
            sumOfOddPlacedEvenDigits += digit; 
        }

        number /= 10; 
        position++; 
    }


    printf("Sum of even digits in odd positions: %d\n", sumOfOddPlacedEvenDigits);

    return 0;
}