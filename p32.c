// p32

#include <stdio.h>

int main() {
    int n=0, originalNumber, reversedNumber = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n; 

    
    while (n != 0) {
        remainder = n % 10; 
        reversedNumber = reversedNumber * 10 + remainder; 
        n /= 10; 
    }

   
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}