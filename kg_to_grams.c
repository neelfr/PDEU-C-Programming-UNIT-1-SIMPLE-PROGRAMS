#include <stdio.h>

int main()
{
    float kg, grams;

    printf("Enter weight in Kilograms (kg): ");
    scanf("%f", &kg);

    // Calculate weight conversion
    grams = kg * 1000.0;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20skg %.3f\n", "Input Kilograms:", kg);
    printf("%-20sg %.2f\n", "Total Grams:", grams);
    printf("=============================\n");
}
