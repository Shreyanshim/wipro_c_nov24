#include <stdio.h>
#include <math.h>

int main() {
    int n=0;
    long long sum = 0;

 
    printf("Enter the value of n: ");
    scanf("%d", &n);
   
    for (int i = 0; i < 10; i++) {
        
        sum += (pow(n, i) * (i % 2 == 0 ? 1 : -1));
    }

    printf("Sum of the series n - n^2 + n^3 - n^4 + ... up to 10 terms: %lld\n", sum);

    return 0;
}