// Q 2

#include <stdio.h>

int main() {
    long long number=0;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    
    if (number < 0) {
        number = -number;
    }

   
    do {
        count++;
        number /= 10;
    } while (number != 0);

    printf("The number of digits is: %d\n", count);

    return 0;
}
