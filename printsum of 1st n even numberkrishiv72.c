#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for input
    printf("Enter how many even numbers you want: ");
    scanf("%d", &n);

    // Print first n even numbers
    for(i = 1; i <= n; i++) {
        printf("%d\n", 2 * i);
    }

    return 0;
}
