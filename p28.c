// p28
#include <stdio.h>
#include <limits.h> 

int main() {
    long long num=0; 
    int digit;
    int largestDigit = INT_MIN; 
    int smallestDigit = INT_MAX; 

   
    printf("Enter a number: ");
    scanf("%lld", &num);

   
    while (num != 0) {
        digit = num % 10; 
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        if (digit < smallestDigit) {
            smallestDigit = digit; 
        }
        num /= 10; 
    }

    
    printf("Largest digit: %d\n", largestDigit);
    printf("Smallest digit: %d\n", smallestDigit);

    return 0;
}