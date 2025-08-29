#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Ask the user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers
    for(i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the result
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
