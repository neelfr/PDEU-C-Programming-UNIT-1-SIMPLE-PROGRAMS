#include <stdio.h>

int main()
{
    int total_minutes, hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &total_minutes);

    // Calculate hours and remaining minutes
    hours = total_minutes / 60;
    minutes = total_minutes % 60;

    // Display result with matching formatting
    printf("\n=============================\n");
    printf("%-20s%d mins\n", "Input Minutes:", total_minutes);
    printf("%-20s%d hours\n", "Calculated Hours:", hours);
    printf("%-20s%d mins\n", "Remaining Minutes:", minutes);
    printf("=============================\n");
}
