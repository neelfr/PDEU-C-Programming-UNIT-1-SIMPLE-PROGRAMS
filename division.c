#include <stdio.h>

int main()
{
    int m1, m2, tm;

    printf("Enter number 1: "); 
    scanf("%d", &m1);
    printf("Enter number 2: ");
    scanf("%d", &m2);

    // Calculate quotient only
    tm = m1 / m2;

    // Display quotient
    printf("\n===============================\n");
    printf("%-20s%d\n", "Quotient:", tm);
    printf("===============================\n");
}
