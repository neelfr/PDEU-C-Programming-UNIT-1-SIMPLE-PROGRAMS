#include <stdio.h>

int main() {
    double bytes;
    double kb, mb, gb;

    printf("Enter storage size in Bytes: ");
    scanf("%lf", &bytes);

    // Data unit conversions (1 KB = 1024 Bytes)
    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;

    // Print
    printf("\n=============================\n");
    printf("Input Bytes:\t%.0f bytes\n", bytes);
    printf("Kilobytes:\t%.2f KB\n", kb);
    printf("Megabytes:\t%.4f MB\n", mb);
    printf("Gigabytes:\t%.6f GB\n", gb);
    printf("=============================\n");

    return 0;
}
