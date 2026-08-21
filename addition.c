#include <stdio.h>

int main()
{
    int m1, m2, tm;

    printf("Enter marks of subject 1: "); 
    scanf("%d", &m1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);

    // Calculate total only
    tm = m1 + m2;

    // Display total
    printf("\n===============================\n");
    printf("%-20s%d\n", "Total marks:", tm);
    printf("===============================\n");
}
