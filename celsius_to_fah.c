#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate conversion
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display result
    printf("\n=============================\n");
    printf("Input Celsius: %.2f C\n", celsius);
    printf("Fahrenheit: %.2f F\n", fahrenheit);
    printf("=============================\n");
}
