 /* 
 Find sum of the series:
 ------------------------
   A) 1 + n + n(square) + n (cube) + upto M terms
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, M;
    long long sum = 0;

   
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the number of terms M: ");
    scanf("%d", &M);

   
    for (int i = 0; i < M; i++) {
        sum += pow(n, i); 
    }

    printf("Sum of the series 1 + n + n^2 + ... up to %d terms: %lld\n", M, sum);

    return 0;
}