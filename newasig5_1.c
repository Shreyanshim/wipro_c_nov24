#include <stdio.h>

int main() {
    int N=0;
    double smallest, largest;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    double array[N]; 

    printf("Enter %d elements (of type double):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &array[i]);
    }

    smallest = largest = array[0];

    for (int i = 1; i < N; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("Smallest element: %.2lf\n", smallest);
    printf("Largest element: %.2lf\n", largest);

    return 0;
}