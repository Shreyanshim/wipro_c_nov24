#include <stdio.h>

int main() {
    int number=0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number >= 10 && number <= 99) || (number <= -10 && number >= -99)) {
        printf("%d is a two-digit number.\n", number);
    } else {
        printf("%d is not a two-digit number.\n", number);
    }

    return 0;
}