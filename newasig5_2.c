#include <stdio.h>

int main() {
    int N=0, element, frequency = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int array[N]; 
    
    printf("Enter %d elements (of type int):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);

    for (int i = 0; i < N; i++) {
        if (array[i] == element) {
            frequency++;
        }
    }

    printf("The frequency of %d in the array is: %d\n", element, frequency);

    return 0;
}