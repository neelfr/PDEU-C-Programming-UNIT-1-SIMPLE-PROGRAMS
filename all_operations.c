#include <stdio.h>

int main()
{
    int m1, m2, sum, diff, prod;
    float div;

    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);

    // Calculate all operations
    sum = m1 + m2;
    diff = m1 - m2;
    prod = m1 * m2;
    div = (float)m1 / m2;

    // Display results with matching formatting
    printf("\n=============================\n");
    printf("%-20s%d\n", "Total marks:", sum);
    printf("%-20s%d\n", "Difference:", diff);
    printf("%-20s%d\n", "Product:", prod);
    
    if (m2 != 0) {
        printf("%-20s%.2f\n", "Division:", div);
    } else {
        printf("%-20s%s\n", "Division:", "Undefined (Div by 0)");
    }
    printf("=============================\n");
}
