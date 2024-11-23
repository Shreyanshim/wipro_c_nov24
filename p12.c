#include <stdio.h>

int main() {
    char uppercase, lowercase;

    printf("Enter an uppercase letter: ");
    scanf(" %c", &uppercase); 
    
    if (uppercase >= 'A' && uppercase <= 'Z') {
       
        lowercase = uppercase + 32;
        printf("Lowercase letter: %c\n", lowercase);
    } else {
        printf("Error: Please enter an uppercase letter.\n");
    }

    return 0;
}