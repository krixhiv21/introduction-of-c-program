#include <stdio.h>

int main() {
    int i;

    // Print first 10 odd numbers
    for(i = 1; i <= 10; i++) {
        printf("%d\n", 2 * i - 1);
    }

    return 0;
}
