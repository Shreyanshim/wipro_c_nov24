#include <stdio.h>
#include <string.h>

int main() {
    char weather[10];
    int temperature;
    int lightning;

    printf("Enter the weather condition (raining/sunny/cloudy): ");
    scanf("%s", weather);

    if (strcmp(weather, "raining") == 0) {
        printf("The person cannot travel because it is raining.\n");
    } 
    else if (strcmp(weather, "sunny") == 0) {
        printf("Enter the temperature in degrees Celsius: ");
        scanf("%d", &temperature);
        if (temperature > 35) {
            printf("The person cannot travel because it is sunny and the temperature is more than 35 degrees.\n");
        } else {
            printf("The person can travel.\n");
        }
    } 
    else if (strcmp(weather, "cloudy") == 0) {
        printf("Is there lightning? (1 for Yes, 0 for No): ");
        scanf("%d", &lightning);
        if (lightning) {
            printf("The person cannot travel because it is cloudy and there is lightning.\n");
        } else {
            printf("The person can travel.\n");
        }
    } 
    else {
        printf("Invalid weather condition entered.\n");
    }

    return 0;
}
