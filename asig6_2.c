#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;       
    }
    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number; 
    }

    int result = sum_of_digits(number);
    printf("Sum of the digits of %d is %d\n", number, result);

    return 0;
}