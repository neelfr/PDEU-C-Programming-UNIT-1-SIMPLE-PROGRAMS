#include <stdio.h>

int main()
{
    float p, r, n, interest, total_amount;

    printf("Enter Principal Amount (P): ");
    scanf("%f", &p);
    printf("Enter Rate of Interest (R): ");
    scanf("%f", &r);
    printf("Enter Number of Years (N): ");
    scanf("%f", &n);

    // Calculate Interest (I = PRN / 100)
    interest = (p * r * n) / 100.0;
    
    // Calculate total payback amount
    total_amount = p + interest;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20sRs. %.2f\n", "Principal:", p);
    printf("%-20s%.2f%%\n", "Interest Rate:", r);
    printf("%-20s%.1f years\n", "Duration (N):", n);
    printf("-----------------------------\n");
    printf("%-20sRs. %.2f\n", "Interest (I):", interest);
    printf("%-20sRs. %.2f\n", "Total Amount:", total_amount);
    printf("=============================\n");
}
