#include <stdio.h>

int main() {
    int N=0;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    float array[N]; 

    printf("Enter %d elements (of type float):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%f", &array[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        float temp = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    return 0;
}