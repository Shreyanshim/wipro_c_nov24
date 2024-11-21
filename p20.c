#include <stdio.h>

int main() {
    char raining, sunny, cloudy;

   
    printf("Enter the weather conditions (r for raining, s for sunny, c for cloudy):\n");
    printf("Raining: ");
    scanf(" %c", &raining);  
    printf("Sunny: ");
    scanf(" %c", &sunny);  
    printf("Cloudy: ");
    scanf(" %c", &cloudy);

   
    if ((sunny == 's' && raining == 'r') || sunny == 's') {
        printf("You can go out.\n");
    } else {
        printf("You cannot go out.\n");
    }

    return 0;
}
