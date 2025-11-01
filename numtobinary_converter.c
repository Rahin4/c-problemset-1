
//Convert a decimal number to binary manually (no built-in functions).

#include <stdio.h>

int main() {
    int n, i = 0, j;
    int bits[32]; // enough for a 32-bit integer

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number > 0.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Divide by 2 and store remainders
    while (n > 0) {
        bits[i++] = n % 2;
        n = n / 2;
    }

    printf("\n============\nBinary: ");
    // print in reverse (MSB first)
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");

    return 0;
}

