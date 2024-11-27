#include <stdio.h>

int main() {
    int N, i;
    int smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Array size must be a positive integer.\n");
        return 1; 
    }

    int arr[N]; 

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for (i = 1; i < N; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; 
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}