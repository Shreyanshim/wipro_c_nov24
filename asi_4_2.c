#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

void print_primes_in_decreasing_order(int M, int N) {
    for (int i = N; i >= M; i--) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n"); 
}

int main() {
    int M, N;

    printf("Enter two numbers (M and N) where N > M: ");
    scanf("%d %d", &M, &N);

    if (N <= M) {
        printf("Please ensure that N is greater than M.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d in decreasing order are: ", M, N);
    print_primes_in_decreasing_order(M, N);

    return 0;
}