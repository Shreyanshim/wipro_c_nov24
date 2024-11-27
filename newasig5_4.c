#include <stdio.h>

int main() {
    int N=0, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int array[N];

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (array[i] == array[j]) {
               
                for (k = j; k < N - 1; k++) {
                    array[k] = array[k + 1];
                }
                
                array[N - 1] = 0; 
                N--; 
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}