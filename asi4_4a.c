#include <stdio.h>

int main() {
    int height, i, j;

    printf("Enter the height of the right-angled triangle: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
       
        printf("\n");
    }

    return 0;
}