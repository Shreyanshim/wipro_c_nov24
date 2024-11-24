// p29
#include <stdio.h>

int main() {
    long long n=0; 
    int digit;
    int evenCount = 0; 

    
    printf("Enter a number: ");
    scanf("%lld", &n);

    
    while (n != 0) {
        digit = n % 10; 

        
        if (digit % 2 == 0) {
            evenCount++; 
        }

        n /= 10; 
    }

    
    printf("Number of even digits: %d\n", evenCount);

    return 0;
}