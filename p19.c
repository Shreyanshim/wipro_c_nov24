#include <stdio.h>

int main() {
    int year1=0;

    
    printf("Enter a year: ");
    scanf("%d", &year1);

  
    if ((year1 % 400 == 0) || (year1 % 4 == 0 && year1 % 100 != 0)) {
        printf("%d is a leap year.\n", year1);
    } else {
        printf("%d is not a leap year.\n", year1);
    }

    return 0;
}
