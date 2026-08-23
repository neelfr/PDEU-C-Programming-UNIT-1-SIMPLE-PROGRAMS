#include <stdio.h>

int main()
{
    float rupees, dollars;
    float rate = 48; // Conversion rate

    printf("Enter amount in Rupees (Rs.): ");
    scanf("%f", &rupees);

    // Calculate currency conversion
    dollars = rupees / rate;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20sRs. %.2f\n", "Input Rupees:", rupees);
    printf("%-20s$ %.2f\n", "US Dollars:", dollars);
    printf("=============================\n");
}
