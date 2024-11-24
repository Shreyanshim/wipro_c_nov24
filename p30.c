// p30
#include <stdio.h>

int main() {
    long long n=0; 
    int digit;
    int position = 1; 
    int evenPlacedSum = 0; 

   
    printf("Enter a number: ");
    scanf("%lld", &n);

    
    while (n != 0) {
        digit = n % 10; 

        
        if (position % 2 == 0) {
            evenPlacedSum += digit; 
        }

        n /= 10; 
        position++; 
    }

    
    printf("Sum of digits in even positions: %d\n", evenPlacedSum);

    return 0;
}