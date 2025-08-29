#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for input
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &n);

    // Calculate the sum of first n odd numbers
    for(i = 1; i <= n; i++) {
        sum += 2 * i - 1;
    }

    // Print the result
    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}
