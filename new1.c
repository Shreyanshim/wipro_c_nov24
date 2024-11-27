#include <stdio.h>

void printHollowRhombus(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for the rhombus: ");
    scanf("%d", &rows);

    printHollowRhombus(rows);
    return 0;
}
