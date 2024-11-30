#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n, i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 
    int sum = sumArray(arr, n);
  
    printf("The sum of the elements of the array is: %d\n", sum);

    return 0;
}