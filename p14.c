	
#include <stdio.h>
#include <math.h>

int main() {
    unsigned int inputNumber = 0;
    int rootNumber = 0;
    printf("Enter number to check if is perfect square: ");
    scanf("%u", &inputNumber);
    rootNumber = (int)sqrt(inputNumber);
    if (rootNumber * rootNumber == inputNumber)
        printf("%u is a perfect square", inputNumber);
    else
        printf("%u is not a perfect square", inputNumber);
        return 0;
}
