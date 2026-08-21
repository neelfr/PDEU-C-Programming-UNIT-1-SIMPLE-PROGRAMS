#include <stdio.h>

int main()
{
    int m1, m2, tm;

    printf("Enter number 1: "); 
    scanf("%d", &m1);
    printf("Enter number 2: ");
    scanf("%d", &m2);

    // Calculate product only
    tm = m1 * m2;

    // Display product
    printf("\n===============================\n");
    printf("%-20s%d\n", "Product:", tm);
    printf("===============================\n");
}
