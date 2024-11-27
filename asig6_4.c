#include <stdio.h>

void printFiboSeries(int n) {
    int first = 1, second = 2, next;

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }

    printf("%d", first);

    if (n == 1) {
        printf("\n");
        return;
    }

    printf(" %d", second);

    for (int i = 3; i <= n; i++) {
        next = first + second; 
        printf(" %d", next);
        first = second;       
        second = next;         
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci-like series of %d terms:\n", n);
    printFiboSeries(n);

    return 0;
}
