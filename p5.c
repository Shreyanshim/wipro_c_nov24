#include <stdio.h>

int main() {
    long long number;
    int sum = 0;
    int position = 1; 

   
    printf("Enter a number: ");
    scanf("%lld", &number);

   
    while (number > 0) {
        int digit = number % 10; 
        number /= 10; 

        if (position % 2 == 0 && digit % 2 != 0) {
            sum += digit; 
        }

        position++;
    }

  
    printf("Sum of Even Placed Odd Digits: %d\n", sum);

    return 0;
}