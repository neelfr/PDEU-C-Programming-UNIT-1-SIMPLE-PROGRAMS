#include <stdio.h>

int main()
{
    float dollars, rupees, pounds;
    float usd_to_inr = 95.70; // Conversion rate
    float gbp_to_inr = 130.53; // Conversion rate

    printf("Enter amount in Dollars ($): ");
    scanf("%f", &dollars);

    // Step 1: Convert Dollars to Rupees
    rupees = dollars * usd_to_inr;

    // Step 2: Convert Rupees to Pounds
    pounds = rupees / gbp_to_inr;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20s$ %.2f\n", "Input Dollars:", dollars);
    printf("%-20sRs. %.2f\n", "Equivalent Rupees:", rupees);
    printf("%-20s£ %.2f\n", "British Pounds:", pounds);
    printf("=============================\n");
}
