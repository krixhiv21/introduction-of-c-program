#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for input
    printf("Enter how many odd numbers you want: ");
    scanf("%d", &n);

    // Print first n odd numbers
    for(i = 1; i <= n; i++) {
        printf("%d\n", 2 * i - 1);
    }

    return 0;
}
