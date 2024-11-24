#include <stdio.h>
#include <math.h>

int main() {
    int n=0, m;
    double sum = 0.0;  
	   
    printf("Enter a number (n): ");
    scanf("%d", &n);
    printf("Enter the number of terms (m): ");
    scanf("%d", &m);
    
    for (int i = 0; i < m; i++) {
        
        sum += pow(n, i) * (i % 2 == 0 ? 1 : -1);
    }

    printf("The sum of the series 1 - n + n^2 - n^3 + ... for n = %d and m = %d is: %.2f\n", n, m, sum);

    return 0;
}