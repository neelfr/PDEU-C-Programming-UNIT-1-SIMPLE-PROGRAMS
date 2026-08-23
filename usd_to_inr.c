#include <stdio.h>

int main()
{
    float dollars, rupees;
    float rate = 48; // Conversion rate

    printf("Enter amount in Dollars ($): ");
    scanf("%f", &dollars);

    // Calculate currency conversion
    rupees = dollars * rate;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20s$ %.2f\n", "Input Dollars:", dollars);
    printf("%-20sRs. %.2f\n", "Indian Rupees:", rupees);
    printf("=============================\n");
}
