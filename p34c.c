#include <stdio.h>
#include <math.h>


double series_sum(int n, int m) {
    double total_sum = 0.0;
    int power = 1;  
    int sign = 1;   

    for (int i = 0; i < m; i++) {
        int denominator = 2 * i + 1;  
        double term = sign * pow(n, power) / denominator;
        total_sum += term;

       
        power *= 2; 
        sign *= -1; 
    }

    return total_sum;
}

int main() {
    int n, m;

  
    printf("Enter the value of n (1 <= n <= 3): ");
    scanf("%d", &n);
    printf("Enter the number of terms m (1 <= m <= 10): ");
    scanf("%d", &m);

    
    if (n < 1 || n > 3 || m < 1 || m > 10) {
        printf("Invalid input! Please ensure 1 <= n <= 3 and 1 <= m <= 10.\n");
        return 1;
    }

    
    double result = series_sum(n, m);
    printf("The sum of the series for n=%d and m=%d terms is: %.6f\n", n, m, result);

    return 0;
}
