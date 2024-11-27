#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter the size of the X (odd number): ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1; 
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            
            if (j == i || j == size - i - 1) {
                printf("*");
            } else {
                printf(" "); 
            }
        }
        
        printf("\n");
    }

    return 0;
}