// p31

#include <stdio.h>

int main() {
    long long n=0; 
    int digit;
    int oddDigitSum = 0; 

    
    printf("Enter a number: ");
    scanf("%lld", &n);

    
    while (n != 0) {
        digit = n % 10;

        
        if (digit % 2 != 0) {
            oddDigitSum += digit; 
        }

        n /= 10; 
    }

   
    printf("Sum of odd digits: %d\n", oddDigitSum);

    return 0;
}