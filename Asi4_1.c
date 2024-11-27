// n1

#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int nth_prime(int n) {
    int count = 0; 
    int number = 1; 

    while (count < n) {
        number++;
        if (is_prime(number)) {
            count++;
        }
    }
    return number; 
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    int prime = nth_prime(n);
    printf("The %dth prime number is: %d\n", n, prime);

    return 0;
}