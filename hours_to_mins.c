#include <stdio.h>

int main()
{
    int hours, minutes;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    // Calculate total minutes
    minutes = hours * 60;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20s%d\n", "Input Hours:", hours);
    printf("%-20s%d mins\n", "Total Minutes:", minutes);
    printf("=============================\n");
}
