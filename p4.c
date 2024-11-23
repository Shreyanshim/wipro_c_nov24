#include <stdio.h>

int main() {
    long long number=0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    
    if (number < 0) {
        number = -number;
    }

   
    while (number != 0) {
        int digit = number % 10; 
        if (digit % 2 == 0) { 
            sum += digit; 
        }
        number /= 10; 
    }

    printf("The sum of even digits is: %d\n", sum);

    return 0;
}
