#include <stdio.h>

int main() {
    char lowercase, uppercase;

    printf("Enter a lowercase letter: ");
    scanf(" %c", &lowercase); 

    if (lowercase >= 'a' && lowercase <= 'z') {
       
        uppercase = lowercase - 32; 
        printf("Uppercase letter: %c\n", uppercase);
    } else {
        printf("Error: Please enter a lowercase letter.\n");
    }

    return 0;
}