#include <stdio.h>

void printHexagon(int size) {
    int i, j;
   
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            printf(" "); 
        }
        for (j = 0; j < size + i; j++) {
            if (j == 0 || j == size + i - 1)
                printf("*"); 
            else
                printf(" "); 
        }
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < 2 * size - 1; j++) {
            if (j == 0 || j == 2 * size - 2)
                printf("*"); 
            else
                printf(" "); 
        }
        printf("\n");
    }

    for (i = size - 1; i >= 0; i--) {
        for (j = 0; j < size - i - 1; j++) {
            printf(" "); 
        }
        for (j = 0; j < size + i; j++) {
            if (j == 0 || j == size + i - 1)
                printf("*"); 
            else
                printf(" "); 
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the hexagon: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Hexagon size must be at least 2.\n");
    } else {
        printHexagon(size);
    }

    return 0;
}
