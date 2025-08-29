#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print first n natural numbers
    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
