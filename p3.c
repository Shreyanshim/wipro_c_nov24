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
        sum += number % 10; 
        number /= 10;       
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
