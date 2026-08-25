#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Calculate conversion 
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    // Display result 
    printf("\n=============================\n");
    printf("Input Fahrenheit: %.2f F\n", fahrenheit);
    printf("Celsius: %.2f C\n", celsius);
    printf("=============================\n");
}
