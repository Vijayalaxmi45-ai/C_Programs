#include <stdio.h>

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);
    x = x - (x % 10);
    printf("Number after making last digit zero: %d", x);

    return 0;
}