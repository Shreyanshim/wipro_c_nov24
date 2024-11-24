#include <stdio.h>
#include <math.h>

int main() {
    int n=0;
    double sum = 0.0; 

    
    printf("Enter a number (n): ");
    scanf("%d", &n);

  
    for (int i = 1; i <= 10; i++) {
        sum += pow(n, i); 
    }

    
    printf("The sum of the series n + n^2 + n^3 + ... + n^10 for n = %d is: %.2f\n", n, sum);

    return 0;
}