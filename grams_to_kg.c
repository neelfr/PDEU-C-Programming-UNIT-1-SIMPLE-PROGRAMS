#include <stdio.h>

int main()
{
    float grams, kg;

    printf("Enter weight in Grams (g): ");
    scanf("%f", &grams);

    // Calculate weight conversion
    kg = grams / 1000.0;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20sg %.2f\n", "Input Grams:", grams);
    printf("%-20skg %.3f\n", "Kilograms:", kg);
    printf("=============================\n");
}
