#include <stdio.h>

int find_nth_term(int n) {
    if (n == 1) return 1; 
    if (n == 2) return 2; 

    int fib1 = 1, fib2 = 1; 
    int current_term;

   
    for (int i = 3; i <= n; i++) {
        if (i % 2 == 1) {
            
            current_term = fib1 + fib2;
            fib1 = fib2;
            fib2 = current_term;
        } else {
            
            current_term = fib2;
        }
    }
    
    return current_term;
}

int main() {
    int n;

    printf("Enter the value of N to find the Nth term of the series: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    int nth_term = find_nth_term(n);
    printf("The %dth term of the series is: %d\n", n, nth_term);

    return 0;
}